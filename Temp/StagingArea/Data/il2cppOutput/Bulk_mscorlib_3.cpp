#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
#include "t1641.h"
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
extern TypeInfo t1641_TI;
#include "t1641MD.h"

#include "t109.h"
#include "t1607.h"
#include "t110.h"
#include "t11.h"
#include "t450.h"
#include "t695.h"
#include "mscorlib_ArrayTypes.h"
#include "t114.h"
#include "t5MD.h"
#include "t1607MD.h"
extern MethodInfo m460_MI;
extern MethodInfo m8364_MI;
extern MethodInfo m8365_MI;
extern MethodInfo m8366_MI;

#include "t107.h"

extern MethodInfo m8371_MI;
 void m8371 (t1641 * __this, t1607 * p0, MethodInfo* method){
	{
		m460(__this, &m460_MI);
		__this->f0 = p0;
		return;
	}
}
extern MethodInfo m8372_MI;
 int32_t m8372 (t1641 * __this, t11* p0, MethodInfo* method){
	{
		t1607 * L_0 = (__this->f0);
		int32_t L_1 = m8364(L_0, p0, &m8364_MI);
		return L_1;
	}
}
extern MethodInfo m8373_MI;
 int32_t m8373 (t1641 * __this, t450 * p0, MethodInfo* method){
	{
		t1607 * L_0 = (__this->f0);
		int32_t L_1 = m8365(L_0, p0, &m8365_MI);
		return L_1;
	}
}
extern MethodInfo m8374_MI;
 int32_t m8374 (t1641 * __this, t695 * p0, t675* p1, MethodInfo* method){
	{
		t1607 * L_0 = (__this->f0);
		int32_t L_1 = m8366(L_0, p0, p1, &m8366_MI);
		return L_1;
	}
}
// Metadata Definition System.Reflection.Emit.ModuleBuilderTokenGenerator
extern Il2CppType t1607_0_0_1;
FieldInfo t1641_f0_FieldInfo = 
{
	"mb", &t1607_0_0_1, &t1641_TI, offsetof(t1641, f0), &EmptyCustomAttributesCache};
static FieldInfo* t1641_FIs[] =
{
	&t1641_f0_FieldInfo,
	NULL
};
extern Il2CppType t1607_0_0_0;
extern Il2CppType t1607_0_0_0;
static ParameterInfo t1641_m8371_ParameterInfos[] = 
{
	{"mb", 0, 134221621, &EmptyCustomAttributesCache, &t1607_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8371_MI = 
{
	".ctor", (methodPointerType)&m8371, &t1641_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t1641_m8371_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 3092, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t11_0_0_0;
extern Il2CppType t11_0_0_0;
static ParameterInfo t1641_m8372_ParameterInfos[] = 
{
	{"str", 0, 134221622, &EmptyCustomAttributesCache, &t11_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8372_MI = 
{
	"GetToken", (methodPointerType)&m8372, &t1641_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t1641_m8372_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 4, 1, false, false, 3093, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t450_0_0_0;
extern Il2CppType t450_0_0_0;
static ParameterInfo t1641_m8373_ParameterInfos[] = 
{
	{"member", 0, 134221623, &EmptyCustomAttributesCache, &t450_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8373_MI = 
{
	"GetToken", (methodPointerType)&m8373, &t1641_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t1641_m8373_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 5, 1, false, false, 3094, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t695_0_0_0;
extern Il2CppType t695_0_0_0;
extern Il2CppType t675_0_0_0;
extern Il2CppType t675_0_0_0;
static ParameterInfo t1641_m8374_ParameterInfos[] = 
{
	{"method", 0, 134221624, &EmptyCustomAttributesCache, &t695_0_0_0},
	{"opt_param_types", 1, 134221625, &EmptyCustomAttributesCache, &t675_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8374_MI = 
{
	"GetToken", (methodPointerType)&m8374, &t1641_TI, &t110_0_0_0, RuntimeInvoker_t110_t5_t5, t1641_m8374_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 6, 2, false, false, 3095, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1641_MIs[] =
{
	&m8371_MI,
	&m8372_MI,
	&m8373_MI,
	&m8374_MI,
	NULL
};
extern MethodInfo m464_MI;
extern MethodInfo m465_MI;
extern MethodInfo m466_MI;
extern MethodInfo m467_MI;
static MethodInfo* t1641_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m8372_MI,
	&m8373_MI,
	&m8374_MI,
};
extern TypeInfo t1633_TI;
static TypeInfo* t1641_ITIs[] = 
{
	&t1633_TI,
};
static Il2CppInterfaceOffsetPair t1641_IOs[] = 
{
	{ &t1633_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1641_0_0_0;
extern Il2CppType t1641_1_0_0;
extern TypeInfo t5_TI;
struct t1641;
TypeInfo t1641_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ModuleBuilderTokenGenerator", "System.Reflection.Emit", t1641_MIs, NULL, t1641_FIs, NULL, &t5_TI, NULL, NULL, &t1641_TI, t1641_ITIs, t1641_VT, &EmptyCustomAttributesCache, &t1641_TI, &t1641_0_0_0, &t1641_1_0_0, t1641_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1641), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, false, false, false, false, false, false, false, 4, 0, 1, 0, 0, 7, 1, 1};
#include "t1635.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1635_TI;
#include "t1635MD.h"

#include "t494.h"
#include "t1646.h"
#include "t1644.h"
#include "t1645.h"
#include "t150.h"
#include "t108.h"
#include "t5.h"
extern TypeInfo t1646_TI;
extern TypeInfo t11_TI;
extern TypeInfo t110_TI;
#include "t1646MD.h"
#include "t11MD.h"
extern MethodInfo m8379_MI;
extern MethodInfo m3489_MI;


extern MethodInfo m8375_MI;
 void m8375 (t1635 * __this, int32_t p0, int32_t p1, MethodInfo* method){
	{
		__this->f0 = (((uint8_t)((int32_t)((int32_t)p0&(int32_t)((int32_t)255)))));
		__this->f1 = (((uint8_t)((int32_t)((int32_t)((int32_t)((int32_t)p0>>(int32_t)8))&(int32_t)((int32_t)255)))));
		__this->f2 = (((uint8_t)((int32_t)((int32_t)((int32_t)((int32_t)p0>>(int32_t)((int32_t)16)))&(int32_t)((int32_t)255)))));
		__this->f3 = (((uint8_t)((int32_t)((int32_t)((int32_t)((int32_t)p0>>(int32_t)((int32_t)24)))&(int32_t)((int32_t)255)))));
		__this->f4 = (((uint8_t)((int32_t)((int32_t)p1&(int32_t)((int32_t)255)))));
		__this->f5 = (((uint8_t)((int32_t)((int32_t)((int32_t)((int32_t)p1>>(int32_t)8))&(int32_t)((int32_t)255)))));
		__this->f6 = (((uint8_t)((int32_t)((int32_t)((int32_t)((int32_t)p1>>(int32_t)((int32_t)16)))&(int32_t)((int32_t)255)))));
		__this->f7 = (((uint8_t)((int32_t)((int32_t)((int32_t)((int32_t)p1>>(int32_t)((int32_t)24)))&(int32_t)((int32_t)255)))));
		return;
	}
}
extern MethodInfo m8376_MI;
 int32_t m8376 (t1635 * __this, MethodInfo* method){
	{
		t11* L_0 = m8379(__this, &m8379_MI);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m3489_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m8377_MI;
 bool m8377 (t1635 * __this, t5 * p0, MethodInfo* method){
	t1635  V_0 = {0};
	int32_t G_B6_0 = 0;
	{
		if (!p0)
		{
			goto IL_000b;
		}
	}
	{
		if (((t5 *)IsInst(p0, InitializedTypeInfo(&t1635_TI))))
		{
			goto IL_000d;
		}
	}

IL_000b:
	{
		return 0;
	}

IL_000d:
	{
		V_0 = ((*(t1635 *)((t1635 *)UnBox (p0, InitializedTypeInfo(&t1635_TI)))));
		uint8_t L_0 = ((&V_0)->f0);
		uint8_t L_1 = (__this->f0);
		if ((((uint32_t)L_0) != ((uint32_t)L_1)))
		{
			goto IL_0034;
		}
	}
	{
		uint8_t L_2 = ((&V_0)->f1);
		uint8_t L_3 = (__this->f1);
		G_B6_0 = ((((int32_t)L_2) == ((int32_t)L_3))? 1 : 0);
		goto IL_0035;
	}

IL_0034:
	{
		G_B6_0 = 0;
	}

IL_0035:
	{
		return G_B6_0;
	}
}
extern MethodInfo m8378_MI;
 t11* m8378 (t1635 * __this, MethodInfo* method){
	{
		t11* L_0 = m8379(__this, &m8379_MI);
		return L_0;
	}
}
 t11* m8379 (t1635 * __this, MethodInfo* method){
	{
		uint8_t L_0 = (__this->f0);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)255))))
		{
			goto IL_001a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1646_TI));
		uint8_t L_1 = (__this->f1);
		uint8_t L_2 = L_1;
		return (*(t11**)(t11**)SZArrayLdElema((((t1646_SFs*)InitializedTypeInfo(&t1646_TI)->static_fields)->f0), L_2));
	}

IL_001a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1646_TI));
		uint8_t L_3 = (__this->f1);
		int32_t L_4 = ((int32_t)(((int32_t)256)+L_3));
		return (*(t11**)(t11**)SZArrayLdElema((((t1646_SFs*)InitializedTypeInfo(&t1646_TI)->static_fields)->f0), L_4));
	}
}
extern MethodInfo m8380_MI;
 int32_t m8380 (t1635 * __this, MethodInfo* method){
	{
		uint8_t L_0 = (__this->f4);
		return L_0;
	}
}
extern MethodInfo m8381_MI;
 int32_t m8381 (t1635 * __this, MethodInfo* method){
	{
		uint8_t L_0 = (__this->f6);
		return (int32_t)(L_0);
	}
}
extern MethodInfo m8382_MI;
 int32_t m8382 (t1635 * __this, MethodInfo* method){
	{
		uint8_t L_0 = (__this->f3);
		return (int32_t)(L_0);
	}
}
extern MethodInfo m8383_MI;
 int32_t m8383 (t1635 * __this, MethodInfo* method){
	{
		uint8_t L_0 = (__this->f2);
		return (int32_t)(L_0);
	}
}
extern MethodInfo m8384_MI;
 int16_t m8384 (t1635 * __this, MethodInfo* method){
	{
		uint8_t L_0 = (__this->f4);
		if ((((uint32_t)L_0) != ((uint32_t)1)))
		{
			goto IL_0010;
		}
	}
	{
		uint8_t L_1 = (__this->f1);
		return L_1;
	}

IL_0010:
	{
		uint8_t L_2 = (__this->f0);
		uint8_t L_3 = (__this->f1);
		return (((int16_t)((int32_t)((int32_t)((int32_t)((int32_t)L_2<<(int32_t)8))|(int32_t)L_3))));
	}
}
extern MethodInfo m8385_MI;
 bool m8385 (t5 * __this, t1635  p0, t1635  p1, MethodInfo* method){
	int32_t G_B3_0 = 0;
	{
		uint8_t L_0 = ((&p0)->f0);
		uint8_t L_1 = ((&p1)->f0);
		if ((((uint32_t)L_0) != ((uint32_t)L_1)))
		{
			goto IL_0022;
		}
	}
	{
		uint8_t L_2 = ((&p0)->f1);
		uint8_t L_3 = ((&p1)->f1);
		G_B3_0 = ((((int32_t)L_2) == ((int32_t)L_3))? 1 : 0);
		goto IL_0023;
	}

IL_0022:
	{
		G_B3_0 = 0;
	}

IL_0023:
	{
		return G_B3_0;
	}
}
// Metadata Definition System.Reflection.Emit.OpCode
extern Il2CppType t494_0_0_3;
FieldInfo t1635_f0_FieldInfo = 
{
	"op1", &t494_0_0_3, &t1635_TI, offsetof(t1635, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t494_0_0_3;
FieldInfo t1635_f1_FieldInfo = 
{
	"op2", &t494_0_0_3, &t1635_TI, offsetof(t1635, f1) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t494_0_0_1;
FieldInfo t1635_f2_FieldInfo = 
{
	"push", &t494_0_0_1, &t1635_TI, offsetof(t1635, f2) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t494_0_0_1;
FieldInfo t1635_f3_FieldInfo = 
{
	"pop", &t494_0_0_1, &t1635_TI, offsetof(t1635, f3) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t494_0_0_1;
FieldInfo t1635_f4_FieldInfo = 
{
	"size", &t494_0_0_1, &t1635_TI, offsetof(t1635, f4) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t494_0_0_1;
FieldInfo t1635_f5_FieldInfo = 
{
	"type", &t494_0_0_1, &t1635_TI, offsetof(t1635, f5) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t494_0_0_1;
FieldInfo t1635_f6_FieldInfo = 
{
	"args", &t494_0_0_1, &t1635_TI, offsetof(t1635, f6) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t494_0_0_1;
FieldInfo t1635_f7_FieldInfo = 
{
	"flow", &t494_0_0_1, &t1635_TI, offsetof(t1635, f7) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t1635_FIs[] =
{
	&t1635_f0_FieldInfo,
	&t1635_f1_FieldInfo,
	&t1635_f2_FieldInfo,
	&t1635_f3_FieldInfo,
	&t1635_f4_FieldInfo,
	&t1635_f5_FieldInfo,
	&t1635_f6_FieldInfo,
	&t1635_f7_FieldInfo,
	NULL
};
static PropertyInfo t1635____Name_PropertyInfo = 
{
	&t1635_TI, "Name", &m8379_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1635____Size_PropertyInfo = 
{
	&t1635_TI, "Size", &m8380_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1635____OperandType_PropertyInfo = 
{
	&t1635_TI, "OperandType", &m8381_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1635____StackBehaviourPop_PropertyInfo = 
{
	&t1635_TI, "StackBehaviourPop", &m8382_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1635____StackBehaviourPush_PropertyInfo = 
{
	&t1635_TI, "StackBehaviourPush", &m8383_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1635____Value_PropertyInfo = 
{
	&t1635_TI, "Value", &m8384_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1635_PIs[] =
{
	&t1635____Name_PropertyInfo,
	&t1635____Size_PropertyInfo,
	&t1635____OperandType_PropertyInfo,
	&t1635____StackBehaviourPop_PropertyInfo,
	&t1635____StackBehaviourPush_PropertyInfo,
	&t1635____Value_PropertyInfo,
	NULL
};
extern Il2CppType t110_0_0_0;
extern Il2CppType t110_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t1635_m8375_ParameterInfos[] = 
{
	{"p", 0, 134221626, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"q", 1, 134221627, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m8375_MI = 
{
	".ctor", (methodPointerType)&m8375, &t1635_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110, t1635_m8375_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 2, false, false, 3096, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m8376_MI = 
{
	"GetHashCode", (methodPointerType)&m8376, &t1635_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 198, 0, 2, 0, false, false, 3097, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t5_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t1635_m8377_ParameterInfos[] = 
{
	{"obj", 0, 134221628, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8377_MI = 
{
	"Equals", (methodPointerType)&m8377, &t1635_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t1635_m8377_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 0, 1, false, false, 3098, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t11_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8378_MI = 
{
	"ToString", (methodPointerType)&m8378, &t1635_TI, &t11_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 198, 0, 3, 0, false, false, 3099, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t11_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8379_MI = 
{
	"get_Name", (methodPointerType)&m8379, &t1635_TI, &t11_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 3100, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m8380_MI = 
{
	"get_Size", (methodPointerType)&m8380, &t1635_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 3101, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1644_0_0_0;
extern void* RuntimeInvoker_t1644 (MethodInfo* method, void* obj, void** args);
MethodInfo m8381_MI = 
{
	"get_OperandType", (methodPointerType)&m8381, &t1635_TI, &t1644_0_0_0, RuntimeInvoker_t1644, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 3102, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1645_0_0_0;
extern void* RuntimeInvoker_t1645 (MethodInfo* method, void* obj, void** args);
MethodInfo m8382_MI = 
{
	"get_StackBehaviourPop", (methodPointerType)&m8382, &t1635_TI, &t1645_0_0_0, RuntimeInvoker_t1645, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 3103, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1645_0_0_0;
extern void* RuntimeInvoker_t1645 (MethodInfo* method, void* obj, void** args);
MethodInfo m8383_MI = 
{
	"get_StackBehaviourPush", (methodPointerType)&m8383, &t1635_TI, &t1645_0_0_0, RuntimeInvoker_t1645, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 3104, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t150_0_0_0;
extern void* RuntimeInvoker_t150 (MethodInfo* method, void* obj, void** args);
MethodInfo m8384_MI = 
{
	"get_Value", (methodPointerType)&m8384, &t1635_TI, &t150_0_0_0, RuntimeInvoker_t150, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 3105, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1635_0_0_0;
extern Il2CppType t1635_0_0_0;
extern Il2CppType t1635_0_0_0;
static ParameterInfo t1635_m8385_ParameterInfos[] = 
{
	{"a", 0, 134221629, &EmptyCustomAttributesCache, &t1635_0_0_0},
	{"b", 1, 134221630, &EmptyCustomAttributesCache, &t1635_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t1635_t1635 (MethodInfo* method, void* obj, void** args);
MethodInfo m8385_MI = 
{
	"op_Equality", (methodPointerType)&m8385, &t1635_TI, &t108_0_0_0, RuntimeInvoker_t108_t1635_t1635, t1635_m8385_ParameterInfos, &EmptyCustomAttributesCache, 2198, 0, 255, 2, false, false, 3106, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1635_MIs[] =
{
	&m8375_MI,
	&m8376_MI,
	&m8377_MI,
	&m8378_MI,
	&m8379_MI,
	&m8380_MI,
	&m8381_MI,
	&m8382_MI,
	&m8383_MI,
	&m8384_MI,
	&m8385_MI,
	NULL
};
static MethodInfo* t1635_VT[] =
{
	&m8377_MI,
	&m465_MI,
	&m8376_MI,
	&m8378_MI,
};
extern TypeInfo t576_TI;
#include "t576.h"
#include "t576MD.h"
extern MethodInfo m2699_MI;
void t1635_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t576 * tmp;
		tmp = (t576 *)il2cpp_codegen_object_new (&t576_TI);
		m2699(tmp, true, &m2699_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1635__CustomAttributeCache = {
1,
NULL,
&t1635_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1635_1_0_0;
extern TypeInfo t267_TI;
extern CustomAttributesCache t1635__CustomAttributeCache;
TypeInfo t1635_TI = 
{
	&g_mscorlib_dll_Image, NULL, "OpCode", "System.Reflection.Emit", t1635_MIs, t1635_PIs, t1635_FIs, NULL, &t267_TI, NULL, NULL, &t1635_TI, NULL, t1635_VT, &t1635__CustomAttributeCache, &t1635_TI, &t1635_0_0_0, &t1635_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1635)+ sizeof (Il2CppObject), 0, sizeof(t1635 ), 0, 0, -1, 1048841, 0, true, false, false, false, false, false, false, false, false, false, true, true, 11, 6, 8, 0, 0, 4, 0, 0};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t585_TI;


extern MethodInfo m8386_MI;
 void m8386 (t5 * __this, MethodInfo* method){
	{
		t585* L_0 = ((t585*)SZArrayNew(InitializedTypeInfo(&t585_TI), ((int32_t)304)));
		ArrayElementTypeCheck (L_0, (t11*) &_stringLiteral1595);
		*((t11**)(t11**)SZArrayLdElema(L_0, 0)) = (t11*)(t11*) &_stringLiteral1595;
		t585* L_1 = L_0;
		ArrayElementTypeCheck (L_1, (t11*) &_stringLiteral1596);
		*((t11**)(t11**)SZArrayLdElema(L_1, 1)) = (t11*)(t11*) &_stringLiteral1596;
		t585* L_2 = L_1;
		ArrayElementTypeCheck (L_2, (t11*) &_stringLiteral1597);
		*((t11**)(t11**)SZArrayLdElema(L_2, 2)) = (t11*)(t11*) &_stringLiteral1597;
		t585* L_3 = L_2;
		ArrayElementTypeCheck (L_3, (t11*) &_stringLiteral1598);
		*((t11**)(t11**)SZArrayLdElema(L_3, 3)) = (t11*)(t11*) &_stringLiteral1598;
		t585* L_4 = L_3;
		ArrayElementTypeCheck (L_4, (t11*) &_stringLiteral1599);
		*((t11**)(t11**)SZArrayLdElema(L_4, 4)) = (t11*)(t11*) &_stringLiteral1599;
		t585* L_5 = L_4;
		ArrayElementTypeCheck (L_5, (t11*) &_stringLiteral1600);
		*((t11**)(t11**)SZArrayLdElema(L_5, 5)) = (t11*)(t11*) &_stringLiteral1600;
		t585* L_6 = L_5;
		ArrayElementTypeCheck (L_6, (t11*) &_stringLiteral1601);
		*((t11**)(t11**)SZArrayLdElema(L_6, 6)) = (t11*)(t11*) &_stringLiteral1601;
		t585* L_7 = L_6;
		ArrayElementTypeCheck (L_7, (t11*) &_stringLiteral1602);
		*((t11**)(t11**)SZArrayLdElema(L_7, 7)) = (t11*)(t11*) &_stringLiteral1602;
		t585* L_8 = L_7;
		ArrayElementTypeCheck (L_8, (t11*) &_stringLiteral1603);
		*((t11**)(t11**)SZArrayLdElema(L_8, 8)) = (t11*)(t11*) &_stringLiteral1603;
		t585* L_9 = L_8;
		ArrayElementTypeCheck (L_9, (t11*) &_stringLiteral1604);
		*((t11**)(t11**)SZArrayLdElema(L_9, ((int32_t)9))) = (t11*)(t11*) &_stringLiteral1604;
		t585* L_10 = L_9;
		ArrayElementTypeCheck (L_10, (t11*) &_stringLiteral1605);
		*((t11**)(t11**)SZArrayLdElema(L_10, ((int32_t)10))) = (t11*)(t11*) &_stringLiteral1605;
		t585* L_11 = L_10;
		ArrayElementTypeCheck (L_11, (t11*) &_stringLiteral1606);
		*((t11**)(t11**)SZArrayLdElema(L_11, ((int32_t)11))) = (t11*)(t11*) &_stringLiteral1606;
		t585* L_12 = L_11;
		ArrayElementTypeCheck (L_12, (t11*) &_stringLiteral1607);
		*((t11**)(t11**)SZArrayLdElema(L_12, ((int32_t)12))) = (t11*)(t11*) &_stringLiteral1607;
		t585* L_13 = L_12;
		ArrayElementTypeCheck (L_13, (t11*) &_stringLiteral1608);
		*((t11**)(t11**)SZArrayLdElema(L_13, ((int32_t)13))) = (t11*)(t11*) &_stringLiteral1608;
		t585* L_14 = L_13;
		ArrayElementTypeCheck (L_14, (t11*) &_stringLiteral1609);
		*((t11**)(t11**)SZArrayLdElema(L_14, ((int32_t)14))) = (t11*)(t11*) &_stringLiteral1609;
		t585* L_15 = L_14;
		ArrayElementTypeCheck (L_15, (t11*) &_stringLiteral1610);
		*((t11**)(t11**)SZArrayLdElema(L_15, ((int32_t)15))) = (t11*)(t11*) &_stringLiteral1610;
		t585* L_16 = L_15;
		ArrayElementTypeCheck (L_16, (t11*) &_stringLiteral1611);
		*((t11**)(t11**)SZArrayLdElema(L_16, ((int32_t)16))) = (t11*)(t11*) &_stringLiteral1611;
		t585* L_17 = L_16;
		ArrayElementTypeCheck (L_17, (t11*) &_stringLiteral1612);
		*((t11**)(t11**)SZArrayLdElema(L_17, ((int32_t)17))) = (t11*)(t11*) &_stringLiteral1612;
		t585* L_18 = L_17;
		ArrayElementTypeCheck (L_18, (t11*) &_stringLiteral1613);
		*((t11**)(t11**)SZArrayLdElema(L_18, ((int32_t)18))) = (t11*)(t11*) &_stringLiteral1613;
		t585* L_19 = L_18;
		ArrayElementTypeCheck (L_19, (t11*) &_stringLiteral1614);
		*((t11**)(t11**)SZArrayLdElema(L_19, ((int32_t)19))) = (t11*)(t11*) &_stringLiteral1614;
		t585* L_20 = L_19;
		ArrayElementTypeCheck (L_20, (t11*) &_stringLiteral1615);
		*((t11**)(t11**)SZArrayLdElema(L_20, ((int32_t)20))) = (t11*)(t11*) &_stringLiteral1615;
		t585* L_21 = L_20;
		ArrayElementTypeCheck (L_21, (t11*) &_stringLiteral1616);
		*((t11**)(t11**)SZArrayLdElema(L_21, ((int32_t)21))) = (t11*)(t11*) &_stringLiteral1616;
		t585* L_22 = L_21;
		ArrayElementTypeCheck (L_22, (t11*) &_stringLiteral1617);
		*((t11**)(t11**)SZArrayLdElema(L_22, ((int32_t)22))) = (t11*)(t11*) &_stringLiteral1617;
		t585* L_23 = L_22;
		ArrayElementTypeCheck (L_23, (t11*) &_stringLiteral1618);
		*((t11**)(t11**)SZArrayLdElema(L_23, ((int32_t)23))) = (t11*)(t11*) &_stringLiteral1618;
		t585* L_24 = L_23;
		ArrayElementTypeCheck (L_24, (t11*) &_stringLiteral1619);
		*((t11**)(t11**)SZArrayLdElema(L_24, ((int32_t)24))) = (t11*)(t11*) &_stringLiteral1619;
		t585* L_25 = L_24;
		ArrayElementTypeCheck (L_25, (t11*) &_stringLiteral1620);
		*((t11**)(t11**)SZArrayLdElema(L_25, ((int32_t)25))) = (t11*)(t11*) &_stringLiteral1620;
		t585* L_26 = L_25;
		ArrayElementTypeCheck (L_26, (t11*) &_stringLiteral1621);
		*((t11**)(t11**)SZArrayLdElema(L_26, ((int32_t)26))) = (t11*)(t11*) &_stringLiteral1621;
		t585* L_27 = L_26;
		ArrayElementTypeCheck (L_27, (t11*) &_stringLiteral1622);
		*((t11**)(t11**)SZArrayLdElema(L_27, ((int32_t)27))) = (t11*)(t11*) &_stringLiteral1622;
		t585* L_28 = L_27;
		ArrayElementTypeCheck (L_28, (t11*) &_stringLiteral1623);
		*((t11**)(t11**)SZArrayLdElema(L_28, ((int32_t)28))) = (t11*)(t11*) &_stringLiteral1623;
		t585* L_29 = L_28;
		ArrayElementTypeCheck (L_29, (t11*) &_stringLiteral1624);
		*((t11**)(t11**)SZArrayLdElema(L_29, ((int32_t)29))) = (t11*)(t11*) &_stringLiteral1624;
		t585* L_30 = L_29;
		ArrayElementTypeCheck (L_30, (t11*) &_stringLiteral1625);
		*((t11**)(t11**)SZArrayLdElema(L_30, ((int32_t)30))) = (t11*)(t11*) &_stringLiteral1625;
		t585* L_31 = L_30;
		ArrayElementTypeCheck (L_31, (t11*) &_stringLiteral1626);
		*((t11**)(t11**)SZArrayLdElema(L_31, ((int32_t)31))) = (t11*)(t11*) &_stringLiteral1626;
		t585* L_32 = L_31;
		ArrayElementTypeCheck (L_32, (t11*) &_stringLiteral1627);
		*((t11**)(t11**)SZArrayLdElema(L_32, ((int32_t)32))) = (t11*)(t11*) &_stringLiteral1627;
		t585* L_33 = L_32;
		ArrayElementTypeCheck (L_33, (t11*) &_stringLiteral1628);
		*((t11**)(t11**)SZArrayLdElema(L_33, ((int32_t)33))) = (t11*)(t11*) &_stringLiteral1628;
		t585* L_34 = L_33;
		ArrayElementTypeCheck (L_34, (t11*) &_stringLiteral1629);
		*((t11**)(t11**)SZArrayLdElema(L_34, ((int32_t)34))) = (t11*)(t11*) &_stringLiteral1629;
		t585* L_35 = L_34;
		ArrayElementTypeCheck (L_35, (t11*) &_stringLiteral1630);
		*((t11**)(t11**)SZArrayLdElema(L_35, ((int32_t)35))) = (t11*)(t11*) &_stringLiteral1630;
		t585* L_36 = L_35;
		ArrayElementTypeCheck (L_36, (t11*) &_stringLiteral1631);
		*((t11**)(t11**)SZArrayLdElema(L_36, ((int32_t)37))) = (t11*)(t11*) &_stringLiteral1631;
		t585* L_37 = L_36;
		ArrayElementTypeCheck (L_37, (t11*) &_stringLiteral1632);
		*((t11**)(t11**)SZArrayLdElema(L_37, ((int32_t)38))) = (t11*)(t11*) &_stringLiteral1632;
		t585* L_38 = L_37;
		ArrayElementTypeCheck (L_38, (t11*) &_stringLiteral1633);
		*((t11**)(t11**)SZArrayLdElema(L_38, ((int32_t)39))) = (t11*)(t11*) &_stringLiteral1633;
		t585* L_39 = L_38;
		ArrayElementTypeCheck (L_39, (t11*) &_stringLiteral1634);
		*((t11**)(t11**)SZArrayLdElema(L_39, ((int32_t)40))) = (t11*)(t11*) &_stringLiteral1634;
		t585* L_40 = L_39;
		ArrayElementTypeCheck (L_40, (t11*) &_stringLiteral1635);
		*((t11**)(t11**)SZArrayLdElema(L_40, ((int32_t)41))) = (t11*)(t11*) &_stringLiteral1635;
		t585* L_41 = L_40;
		ArrayElementTypeCheck (L_41, (t11*) &_stringLiteral1636);
		*((t11**)(t11**)SZArrayLdElema(L_41, ((int32_t)42))) = (t11*)(t11*) &_stringLiteral1636;
		t585* L_42 = L_41;
		ArrayElementTypeCheck (L_42, (t11*) &_stringLiteral1637);
		*((t11**)(t11**)SZArrayLdElema(L_42, ((int32_t)43))) = (t11*)(t11*) &_stringLiteral1637;
		t585* L_43 = L_42;
		ArrayElementTypeCheck (L_43, (t11*) &_stringLiteral1638);
		*((t11**)(t11**)SZArrayLdElema(L_43, ((int32_t)44))) = (t11*)(t11*) &_stringLiteral1638;
		t585* L_44 = L_43;
		ArrayElementTypeCheck (L_44, (t11*) &_stringLiteral1639);
		*((t11**)(t11**)SZArrayLdElema(L_44, ((int32_t)45))) = (t11*)(t11*) &_stringLiteral1639;
		t585* L_45 = L_44;
		ArrayElementTypeCheck (L_45, (t11*) &_stringLiteral1640);
		*((t11**)(t11**)SZArrayLdElema(L_45, ((int32_t)46))) = (t11*)(t11*) &_stringLiteral1640;
		t585* L_46 = L_45;
		ArrayElementTypeCheck (L_46, (t11*) &_stringLiteral1641);
		*((t11**)(t11**)SZArrayLdElema(L_46, ((int32_t)47))) = (t11*)(t11*) &_stringLiteral1641;
		t585* L_47 = L_46;
		ArrayElementTypeCheck (L_47, (t11*) &_stringLiteral1642);
		*((t11**)(t11**)SZArrayLdElema(L_47, ((int32_t)48))) = (t11*)(t11*) &_stringLiteral1642;
		t585* L_48 = L_47;
		ArrayElementTypeCheck (L_48, (t11*) &_stringLiteral1643);
		*((t11**)(t11**)SZArrayLdElema(L_48, ((int32_t)49))) = (t11*)(t11*) &_stringLiteral1643;
		t585* L_49 = L_48;
		ArrayElementTypeCheck (L_49, (t11*) &_stringLiteral1644);
		*((t11**)(t11**)SZArrayLdElema(L_49, ((int32_t)50))) = (t11*)(t11*) &_stringLiteral1644;
		t585* L_50 = L_49;
		ArrayElementTypeCheck (L_50, (t11*) &_stringLiteral1645);
		*((t11**)(t11**)SZArrayLdElema(L_50, ((int32_t)51))) = (t11*)(t11*) &_stringLiteral1645;
		t585* L_51 = L_50;
		ArrayElementTypeCheck (L_51, (t11*) &_stringLiteral1646);
		*((t11**)(t11**)SZArrayLdElema(L_51, ((int32_t)52))) = (t11*)(t11*) &_stringLiteral1646;
		t585* L_52 = L_51;
		ArrayElementTypeCheck (L_52, (t11*) &_stringLiteral1647);
		*((t11**)(t11**)SZArrayLdElema(L_52, ((int32_t)53))) = (t11*)(t11*) &_stringLiteral1647;
		t585* L_53 = L_52;
		ArrayElementTypeCheck (L_53, (t11*) &_stringLiteral1648);
		*((t11**)(t11**)SZArrayLdElema(L_53, ((int32_t)54))) = (t11*)(t11*) &_stringLiteral1648;
		t585* L_54 = L_53;
		ArrayElementTypeCheck (L_54, (t11*) &_stringLiteral1649);
		*((t11**)(t11**)SZArrayLdElema(L_54, ((int32_t)55))) = (t11*)(t11*) &_stringLiteral1649;
		t585* L_55 = L_54;
		ArrayElementTypeCheck (L_55, (t11*) &_stringLiteral1650);
		*((t11**)(t11**)SZArrayLdElema(L_55, ((int32_t)56))) = (t11*)(t11*) &_stringLiteral1650;
		t585* L_56 = L_55;
		ArrayElementTypeCheck (L_56, (t11*) &_stringLiteral1651);
		*((t11**)(t11**)SZArrayLdElema(L_56, ((int32_t)57))) = (t11*)(t11*) &_stringLiteral1651;
		t585* L_57 = L_56;
		ArrayElementTypeCheck (L_57, (t11*) &_stringLiteral1652);
		*((t11**)(t11**)SZArrayLdElema(L_57, ((int32_t)58))) = (t11*)(t11*) &_stringLiteral1652;
		t585* L_58 = L_57;
		ArrayElementTypeCheck (L_58, (t11*) &_stringLiteral1653);
		*((t11**)(t11**)SZArrayLdElema(L_58, ((int32_t)59))) = (t11*)(t11*) &_stringLiteral1653;
		t585* L_59 = L_58;
		ArrayElementTypeCheck (L_59, (t11*) &_stringLiteral1654);
		*((t11**)(t11**)SZArrayLdElema(L_59, ((int32_t)60))) = (t11*)(t11*) &_stringLiteral1654;
		t585* L_60 = L_59;
		ArrayElementTypeCheck (L_60, (t11*) &_stringLiteral1655);
		*((t11**)(t11**)SZArrayLdElema(L_60, ((int32_t)61))) = (t11*)(t11*) &_stringLiteral1655;
		t585* L_61 = L_60;
		ArrayElementTypeCheck (L_61, (t11*) &_stringLiteral1656);
		*((t11**)(t11**)SZArrayLdElema(L_61, ((int32_t)62))) = (t11*)(t11*) &_stringLiteral1656;
		t585* L_62 = L_61;
		ArrayElementTypeCheck (L_62, (t11*) &_stringLiteral1657);
		*((t11**)(t11**)SZArrayLdElema(L_62, ((int32_t)63))) = (t11*)(t11*) &_stringLiteral1657;
		t585* L_63 = L_62;
		ArrayElementTypeCheck (L_63, (t11*) &_stringLiteral1658);
		*((t11**)(t11**)SZArrayLdElema(L_63, ((int32_t)64))) = (t11*)(t11*) &_stringLiteral1658;
		t585* L_64 = L_63;
		ArrayElementTypeCheck (L_64, (t11*) &_stringLiteral1659);
		*((t11**)(t11**)SZArrayLdElema(L_64, ((int32_t)65))) = (t11*)(t11*) &_stringLiteral1659;
		t585* L_65 = L_64;
		ArrayElementTypeCheck (L_65, (t11*) &_stringLiteral1660);
		*((t11**)(t11**)SZArrayLdElema(L_65, ((int32_t)66))) = (t11*)(t11*) &_stringLiteral1660;
		t585* L_66 = L_65;
		ArrayElementTypeCheck (L_66, (t11*) &_stringLiteral1661);
		*((t11**)(t11**)SZArrayLdElema(L_66, ((int32_t)67))) = (t11*)(t11*) &_stringLiteral1661;
		t585* L_67 = L_66;
		ArrayElementTypeCheck (L_67, (t11*) &_stringLiteral1662);
		*((t11**)(t11**)SZArrayLdElema(L_67, ((int32_t)68))) = (t11*)(t11*) &_stringLiteral1662;
		t585* L_68 = L_67;
		ArrayElementTypeCheck (L_68, (t11*) &_stringLiteral1663);
		*((t11**)(t11**)SZArrayLdElema(L_68, ((int32_t)69))) = (t11*)(t11*) &_stringLiteral1663;
		t585* L_69 = L_68;
		ArrayElementTypeCheck (L_69, (t11*) &_stringLiteral1664);
		*((t11**)(t11**)SZArrayLdElema(L_69, ((int32_t)70))) = (t11*)(t11*) &_stringLiteral1664;
		t585* L_70 = L_69;
		ArrayElementTypeCheck (L_70, (t11*) &_stringLiteral1665);
		*((t11**)(t11**)SZArrayLdElema(L_70, ((int32_t)71))) = (t11*)(t11*) &_stringLiteral1665;
		t585* L_71 = L_70;
		ArrayElementTypeCheck (L_71, (t11*) &_stringLiteral1666);
		*((t11**)(t11**)SZArrayLdElema(L_71, ((int32_t)72))) = (t11*)(t11*) &_stringLiteral1666;
		t585* L_72 = L_71;
		ArrayElementTypeCheck (L_72, (t11*) &_stringLiteral1667);
		*((t11**)(t11**)SZArrayLdElema(L_72, ((int32_t)73))) = (t11*)(t11*) &_stringLiteral1667;
		t585* L_73 = L_72;
		ArrayElementTypeCheck (L_73, (t11*) &_stringLiteral1668);
		*((t11**)(t11**)SZArrayLdElema(L_73, ((int32_t)74))) = (t11*)(t11*) &_stringLiteral1668;
		t585* L_74 = L_73;
		ArrayElementTypeCheck (L_74, (t11*) &_stringLiteral1669);
		*((t11**)(t11**)SZArrayLdElema(L_74, ((int32_t)75))) = (t11*)(t11*) &_stringLiteral1669;
		t585* L_75 = L_74;
		ArrayElementTypeCheck (L_75, (t11*) &_stringLiteral1670);
		*((t11**)(t11**)SZArrayLdElema(L_75, ((int32_t)76))) = (t11*)(t11*) &_stringLiteral1670;
		t585* L_76 = L_75;
		ArrayElementTypeCheck (L_76, (t11*) &_stringLiteral1671);
		*((t11**)(t11**)SZArrayLdElema(L_76, ((int32_t)77))) = (t11*)(t11*) &_stringLiteral1671;
		t585* L_77 = L_76;
		ArrayElementTypeCheck (L_77, (t11*) &_stringLiteral1672);
		*((t11**)(t11**)SZArrayLdElema(L_77, ((int32_t)78))) = (t11*)(t11*) &_stringLiteral1672;
		t585* L_78 = L_77;
		ArrayElementTypeCheck (L_78, (t11*) &_stringLiteral1673);
		*((t11**)(t11**)SZArrayLdElema(L_78, ((int32_t)79))) = (t11*)(t11*) &_stringLiteral1673;
		t585* L_79 = L_78;
		ArrayElementTypeCheck (L_79, (t11*) &_stringLiteral1674);
		*((t11**)(t11**)SZArrayLdElema(L_79, ((int32_t)80))) = (t11*)(t11*) &_stringLiteral1674;
		t585* L_80 = L_79;
		ArrayElementTypeCheck (L_80, (t11*) &_stringLiteral1675);
		*((t11**)(t11**)SZArrayLdElema(L_80, ((int32_t)81))) = (t11*)(t11*) &_stringLiteral1675;
		t585* L_81 = L_80;
		ArrayElementTypeCheck (L_81, (t11*) &_stringLiteral1676);
		*((t11**)(t11**)SZArrayLdElema(L_81, ((int32_t)82))) = (t11*)(t11*) &_stringLiteral1676;
		t585* L_82 = L_81;
		ArrayElementTypeCheck (L_82, (t11*) &_stringLiteral1677);
		*((t11**)(t11**)SZArrayLdElema(L_82, ((int32_t)83))) = (t11*)(t11*) &_stringLiteral1677;
		t585* L_83 = L_82;
		ArrayElementTypeCheck (L_83, (t11*) &_stringLiteral1678);
		*((t11**)(t11**)SZArrayLdElema(L_83, ((int32_t)84))) = (t11*)(t11*) &_stringLiteral1678;
		t585* L_84 = L_83;
		ArrayElementTypeCheck (L_84, (t11*) &_stringLiteral1679);
		*((t11**)(t11**)SZArrayLdElema(L_84, ((int32_t)85))) = (t11*)(t11*) &_stringLiteral1679;
		t585* L_85 = L_84;
		ArrayElementTypeCheck (L_85, (t11*) &_stringLiteral1680);
		*((t11**)(t11**)SZArrayLdElema(L_85, ((int32_t)86))) = (t11*)(t11*) &_stringLiteral1680;
		t585* L_86 = L_85;
		ArrayElementTypeCheck (L_86, (t11*) &_stringLiteral1681);
		*((t11**)(t11**)SZArrayLdElema(L_86, ((int32_t)87))) = (t11*)(t11*) &_stringLiteral1681;
		t585* L_87 = L_86;
		ArrayElementTypeCheck (L_87, (t11*) &_stringLiteral1682);
		*((t11**)(t11**)SZArrayLdElema(L_87, ((int32_t)88))) = (t11*)(t11*) &_stringLiteral1682;
		t585* L_88 = L_87;
		ArrayElementTypeCheck (L_88, (t11*) &_stringLiteral1683);
		*((t11**)(t11**)SZArrayLdElema(L_88, ((int32_t)89))) = (t11*)(t11*) &_stringLiteral1683;
		t585* L_89 = L_88;
		ArrayElementTypeCheck (L_89, (t11*) &_stringLiteral1684);
		*((t11**)(t11**)SZArrayLdElema(L_89, ((int32_t)90))) = (t11*)(t11*) &_stringLiteral1684;
		t585* L_90 = L_89;
		ArrayElementTypeCheck (L_90, (t11*) &_stringLiteral1685);
		*((t11**)(t11**)SZArrayLdElema(L_90, ((int32_t)91))) = (t11*)(t11*) &_stringLiteral1685;
		t585* L_91 = L_90;
		ArrayElementTypeCheck (L_91, (t11*) &_stringLiteral1686);
		*((t11**)(t11**)SZArrayLdElema(L_91, ((int32_t)92))) = (t11*)(t11*) &_stringLiteral1686;
		t585* L_92 = L_91;
		ArrayElementTypeCheck (L_92, (t11*) &_stringLiteral1687);
		*((t11**)(t11**)SZArrayLdElema(L_92, ((int32_t)93))) = (t11*)(t11*) &_stringLiteral1687;
		t585* L_93 = L_92;
		ArrayElementTypeCheck (L_93, (t11*) &_stringLiteral1688);
		*((t11**)(t11**)SZArrayLdElema(L_93, ((int32_t)94))) = (t11*)(t11*) &_stringLiteral1688;
		t585* L_94 = L_93;
		ArrayElementTypeCheck (L_94, (t11*) &_stringLiteral1689);
		*((t11**)(t11**)SZArrayLdElema(L_94, ((int32_t)95))) = (t11*)(t11*) &_stringLiteral1689;
		t585* L_95 = L_94;
		ArrayElementTypeCheck (L_95, (t11*) &_stringLiteral1690);
		*((t11**)(t11**)SZArrayLdElema(L_95, ((int32_t)96))) = (t11*)(t11*) &_stringLiteral1690;
		t585* L_96 = L_95;
		ArrayElementTypeCheck (L_96, (t11*) &_stringLiteral1691);
		*((t11**)(t11**)SZArrayLdElema(L_96, ((int32_t)97))) = (t11*)(t11*) &_stringLiteral1691;
		t585* L_97 = L_96;
		ArrayElementTypeCheck (L_97, (t11*) &_stringLiteral1692);
		*((t11**)(t11**)SZArrayLdElema(L_97, ((int32_t)98))) = (t11*)(t11*) &_stringLiteral1692;
		t585* L_98 = L_97;
		ArrayElementTypeCheck (L_98, (t11*) &_stringLiteral1693);
		*((t11**)(t11**)SZArrayLdElema(L_98, ((int32_t)99))) = (t11*)(t11*) &_stringLiteral1693;
		t585* L_99 = L_98;
		ArrayElementTypeCheck (L_99, (t11*) &_stringLiteral1694);
		*((t11**)(t11**)SZArrayLdElema(L_99, ((int32_t)100))) = (t11*)(t11*) &_stringLiteral1694;
		t585* L_100 = L_99;
		ArrayElementTypeCheck (L_100, (t11*) &_stringLiteral1695);
		*((t11**)(t11**)SZArrayLdElema(L_100, ((int32_t)101))) = (t11*)(t11*) &_stringLiteral1695;
		t585* L_101 = L_100;
		ArrayElementTypeCheck (L_101, (t11*) &_stringLiteral1696);
		*((t11**)(t11**)SZArrayLdElema(L_101, ((int32_t)102))) = (t11*)(t11*) &_stringLiteral1696;
		t585* L_102 = L_101;
		ArrayElementTypeCheck (L_102, (t11*) &_stringLiteral1697);
		*((t11**)(t11**)SZArrayLdElema(L_102, ((int32_t)103))) = (t11*)(t11*) &_stringLiteral1697;
		t585* L_103 = L_102;
		ArrayElementTypeCheck (L_103, (t11*) &_stringLiteral1698);
		*((t11**)(t11**)SZArrayLdElema(L_103, ((int32_t)104))) = (t11*)(t11*) &_stringLiteral1698;
		t585* L_104 = L_103;
		ArrayElementTypeCheck (L_104, (t11*) &_stringLiteral1699);
		*((t11**)(t11**)SZArrayLdElema(L_104, ((int32_t)105))) = (t11*)(t11*) &_stringLiteral1699;
		t585* L_105 = L_104;
		ArrayElementTypeCheck (L_105, (t11*) &_stringLiteral1700);
		*((t11**)(t11**)SZArrayLdElema(L_105, ((int32_t)106))) = (t11*)(t11*) &_stringLiteral1700;
		t585* L_106 = L_105;
		ArrayElementTypeCheck (L_106, (t11*) &_stringLiteral1701);
		*((t11**)(t11**)SZArrayLdElema(L_106, ((int32_t)107))) = (t11*)(t11*) &_stringLiteral1701;
		t585* L_107 = L_106;
		ArrayElementTypeCheck (L_107, (t11*) &_stringLiteral1702);
		*((t11**)(t11**)SZArrayLdElema(L_107, ((int32_t)108))) = (t11*)(t11*) &_stringLiteral1702;
		t585* L_108 = L_107;
		ArrayElementTypeCheck (L_108, (t11*) &_stringLiteral1703);
		*((t11**)(t11**)SZArrayLdElema(L_108, ((int32_t)109))) = (t11*)(t11*) &_stringLiteral1703;
		t585* L_109 = L_108;
		ArrayElementTypeCheck (L_109, (t11*) &_stringLiteral1704);
		*((t11**)(t11**)SZArrayLdElema(L_109, ((int32_t)110))) = (t11*)(t11*) &_stringLiteral1704;
		t585* L_110 = L_109;
		ArrayElementTypeCheck (L_110, (t11*) &_stringLiteral1705);
		*((t11**)(t11**)SZArrayLdElema(L_110, ((int32_t)111))) = (t11*)(t11*) &_stringLiteral1705;
		t585* L_111 = L_110;
		ArrayElementTypeCheck (L_111, (t11*) &_stringLiteral1706);
		*((t11**)(t11**)SZArrayLdElema(L_111, ((int32_t)112))) = (t11*)(t11*) &_stringLiteral1706;
		t585* L_112 = L_111;
		ArrayElementTypeCheck (L_112, (t11*) &_stringLiteral1707);
		*((t11**)(t11**)SZArrayLdElema(L_112, ((int32_t)113))) = (t11*)(t11*) &_stringLiteral1707;
		t585* L_113 = L_112;
		ArrayElementTypeCheck (L_113, (t11*) &_stringLiteral1708);
		*((t11**)(t11**)SZArrayLdElema(L_113, ((int32_t)114))) = (t11*)(t11*) &_stringLiteral1708;
		t585* L_114 = L_113;
		ArrayElementTypeCheck (L_114, (t11*) &_stringLiteral1709);
		*((t11**)(t11**)SZArrayLdElema(L_114, ((int32_t)115))) = (t11*)(t11*) &_stringLiteral1709;
		t585* L_115 = L_114;
		ArrayElementTypeCheck (L_115, (t11*) &_stringLiteral1710);
		*((t11**)(t11**)SZArrayLdElema(L_115, ((int32_t)116))) = (t11*)(t11*) &_stringLiteral1710;
		t585* L_116 = L_115;
		ArrayElementTypeCheck (L_116, (t11*) &_stringLiteral1711);
		*((t11**)(t11**)SZArrayLdElema(L_116, ((int32_t)117))) = (t11*)(t11*) &_stringLiteral1711;
		t585* L_117 = L_116;
		ArrayElementTypeCheck (L_117, (t11*) &_stringLiteral1712);
		*((t11**)(t11**)SZArrayLdElema(L_117, ((int32_t)118))) = (t11*)(t11*) &_stringLiteral1712;
		t585* L_118 = L_117;
		ArrayElementTypeCheck (L_118, (t11*) &_stringLiteral1713);
		*((t11**)(t11**)SZArrayLdElema(L_118, ((int32_t)121))) = (t11*)(t11*) &_stringLiteral1713;
		t585* L_119 = L_118;
		ArrayElementTypeCheck (L_119, (t11*) &_stringLiteral1714);
		*((t11**)(t11**)SZArrayLdElema(L_119, ((int32_t)122))) = (t11*)(t11*) &_stringLiteral1714;
		t585* L_120 = L_119;
		ArrayElementTypeCheck (L_120, (t11*) &_stringLiteral1715);
		*((t11**)(t11**)SZArrayLdElema(L_120, ((int32_t)123))) = (t11*)(t11*) &_stringLiteral1715;
		t585* L_121 = L_120;
		ArrayElementTypeCheck (L_121, (t11*) &_stringLiteral1716);
		*((t11**)(t11**)SZArrayLdElema(L_121, ((int32_t)124))) = (t11*)(t11*) &_stringLiteral1716;
		t585* L_122 = L_121;
		ArrayElementTypeCheck (L_122, (t11*) &_stringLiteral1717);
		*((t11**)(t11**)SZArrayLdElema(L_122, ((int32_t)125))) = (t11*)(t11*) &_stringLiteral1717;
		t585* L_123 = L_122;
		ArrayElementTypeCheck (L_123, (t11*) &_stringLiteral1718);
		*((t11**)(t11**)SZArrayLdElema(L_123, ((int32_t)126))) = (t11*)(t11*) &_stringLiteral1718;
		t585* L_124 = L_123;
		ArrayElementTypeCheck (L_124, (t11*) &_stringLiteral1719);
		*((t11**)(t11**)SZArrayLdElema(L_124, ((int32_t)127))) = (t11*)(t11*) &_stringLiteral1719;
		t585* L_125 = L_124;
		ArrayElementTypeCheck (L_125, (t11*) &_stringLiteral1720);
		*((t11**)(t11**)SZArrayLdElema(L_125, ((int32_t)128))) = (t11*)(t11*) &_stringLiteral1720;
		t585* L_126 = L_125;
		ArrayElementTypeCheck (L_126, (t11*) &_stringLiteral1721);
		*((t11**)(t11**)SZArrayLdElema(L_126, ((int32_t)129))) = (t11*)(t11*) &_stringLiteral1721;
		t585* L_127 = L_126;
		ArrayElementTypeCheck (L_127, (t11*) &_stringLiteral1722);
		*((t11**)(t11**)SZArrayLdElema(L_127, ((int32_t)130))) = (t11*)(t11*) &_stringLiteral1722;
		t585* L_128 = L_127;
		ArrayElementTypeCheck (L_128, (t11*) &_stringLiteral1723);
		*((t11**)(t11**)SZArrayLdElema(L_128, ((int32_t)131))) = (t11*)(t11*) &_stringLiteral1723;
		t585* L_129 = L_128;
		ArrayElementTypeCheck (L_129, (t11*) &_stringLiteral1724);
		*((t11**)(t11**)SZArrayLdElema(L_129, ((int32_t)132))) = (t11*)(t11*) &_stringLiteral1724;
		t585* L_130 = L_129;
		ArrayElementTypeCheck (L_130, (t11*) &_stringLiteral1725);
		*((t11**)(t11**)SZArrayLdElema(L_130, ((int32_t)133))) = (t11*)(t11*) &_stringLiteral1725;
		t585* L_131 = L_130;
		ArrayElementTypeCheck (L_131, (t11*) &_stringLiteral1726);
		*((t11**)(t11**)SZArrayLdElema(L_131, ((int32_t)134))) = (t11*)(t11*) &_stringLiteral1726;
		t585* L_132 = L_131;
		ArrayElementTypeCheck (L_132, (t11*) &_stringLiteral1727);
		*((t11**)(t11**)SZArrayLdElema(L_132, ((int32_t)135))) = (t11*)(t11*) &_stringLiteral1727;
		t585* L_133 = L_132;
		ArrayElementTypeCheck (L_133, (t11*) &_stringLiteral1728);
		*((t11**)(t11**)SZArrayLdElema(L_133, ((int32_t)136))) = (t11*)(t11*) &_stringLiteral1728;
		t585* L_134 = L_133;
		ArrayElementTypeCheck (L_134, (t11*) &_stringLiteral1729);
		*((t11**)(t11**)SZArrayLdElema(L_134, ((int32_t)137))) = (t11*)(t11*) &_stringLiteral1729;
		t585* L_135 = L_134;
		ArrayElementTypeCheck (L_135, (t11*) &_stringLiteral1730);
		*((t11**)(t11**)SZArrayLdElema(L_135, ((int32_t)138))) = (t11*)(t11*) &_stringLiteral1730;
		t585* L_136 = L_135;
		ArrayElementTypeCheck (L_136, (t11*) &_stringLiteral1731);
		*((t11**)(t11**)SZArrayLdElema(L_136, ((int32_t)139))) = (t11*)(t11*) &_stringLiteral1731;
		t585* L_137 = L_136;
		ArrayElementTypeCheck (L_137, (t11*) &_stringLiteral124);
		*((t11**)(t11**)SZArrayLdElema(L_137, ((int32_t)140))) = (t11*)(t11*) &_stringLiteral124;
		t585* L_138 = L_137;
		ArrayElementTypeCheck (L_138, (t11*) &_stringLiteral1732);
		*((t11**)(t11**)SZArrayLdElema(L_138, ((int32_t)141))) = (t11*)(t11*) &_stringLiteral1732;
		t585* L_139 = L_138;
		ArrayElementTypeCheck (L_139, (t11*) &_stringLiteral1733);
		*((t11**)(t11**)SZArrayLdElema(L_139, ((int32_t)142))) = (t11*)(t11*) &_stringLiteral1733;
		t585* L_140 = L_139;
		ArrayElementTypeCheck (L_140, (t11*) &_stringLiteral1734);
		*((t11**)(t11**)SZArrayLdElema(L_140, ((int32_t)143))) = (t11*)(t11*) &_stringLiteral1734;
		t585* L_141 = L_140;
		ArrayElementTypeCheck (L_141, (t11*) &_stringLiteral1735);
		*((t11**)(t11**)SZArrayLdElema(L_141, ((int32_t)144))) = (t11*)(t11*) &_stringLiteral1735;
		t585* L_142 = L_141;
		ArrayElementTypeCheck (L_142, (t11*) &_stringLiteral1736);
		*((t11**)(t11**)SZArrayLdElema(L_142, ((int32_t)145))) = (t11*)(t11*) &_stringLiteral1736;
		t585* L_143 = L_142;
		ArrayElementTypeCheck (L_143, (t11*) &_stringLiteral1737);
		*((t11**)(t11**)SZArrayLdElema(L_143, ((int32_t)146))) = (t11*)(t11*) &_stringLiteral1737;
		t585* L_144 = L_143;
		ArrayElementTypeCheck (L_144, (t11*) &_stringLiteral1738);
		*((t11**)(t11**)SZArrayLdElema(L_144, ((int32_t)147))) = (t11*)(t11*) &_stringLiteral1738;
		t585* L_145 = L_144;
		ArrayElementTypeCheck (L_145, (t11*) &_stringLiteral1739);
		*((t11**)(t11**)SZArrayLdElema(L_145, ((int32_t)148))) = (t11*)(t11*) &_stringLiteral1739;
		t585* L_146 = L_145;
		ArrayElementTypeCheck (L_146, (t11*) &_stringLiteral1740);
		*((t11**)(t11**)SZArrayLdElema(L_146, ((int32_t)149))) = (t11*)(t11*) &_stringLiteral1740;
		t585* L_147 = L_146;
		ArrayElementTypeCheck (L_147, (t11*) &_stringLiteral1741);
		*((t11**)(t11**)SZArrayLdElema(L_147, ((int32_t)150))) = (t11*)(t11*) &_stringLiteral1741;
		t585* L_148 = L_147;
		ArrayElementTypeCheck (L_148, (t11*) &_stringLiteral1742);
		*((t11**)(t11**)SZArrayLdElema(L_148, ((int32_t)151))) = (t11*)(t11*) &_stringLiteral1742;
		t585* L_149 = L_148;
		ArrayElementTypeCheck (L_149, (t11*) &_stringLiteral1743);
		*((t11**)(t11**)SZArrayLdElema(L_149, ((int32_t)152))) = (t11*)(t11*) &_stringLiteral1743;
		t585* L_150 = L_149;
		ArrayElementTypeCheck (L_150, (t11*) &_stringLiteral1744);
		*((t11**)(t11**)SZArrayLdElema(L_150, ((int32_t)153))) = (t11*)(t11*) &_stringLiteral1744;
		t585* L_151 = L_150;
		ArrayElementTypeCheck (L_151, (t11*) &_stringLiteral1745);
		*((t11**)(t11**)SZArrayLdElema(L_151, ((int32_t)154))) = (t11*)(t11*) &_stringLiteral1745;
		t585* L_152 = L_151;
		ArrayElementTypeCheck (L_152, (t11*) &_stringLiteral1746);
		*((t11**)(t11**)SZArrayLdElema(L_152, ((int32_t)155))) = (t11*)(t11*) &_stringLiteral1746;
		t585* L_153 = L_152;
		ArrayElementTypeCheck (L_153, (t11*) &_stringLiteral1747);
		*((t11**)(t11**)SZArrayLdElema(L_153, ((int32_t)156))) = (t11*)(t11*) &_stringLiteral1747;
		t585* L_154 = L_153;
		ArrayElementTypeCheck (L_154, (t11*) &_stringLiteral1748);
		*((t11**)(t11**)SZArrayLdElema(L_154, ((int32_t)157))) = (t11*)(t11*) &_stringLiteral1748;
		t585* L_155 = L_154;
		ArrayElementTypeCheck (L_155, (t11*) &_stringLiteral1749);
		*((t11**)(t11**)SZArrayLdElema(L_155, ((int32_t)158))) = (t11*)(t11*) &_stringLiteral1749;
		t585* L_156 = L_155;
		ArrayElementTypeCheck (L_156, (t11*) &_stringLiteral1750);
		*((t11**)(t11**)SZArrayLdElema(L_156, ((int32_t)159))) = (t11*)(t11*) &_stringLiteral1750;
		t585* L_157 = L_156;
		ArrayElementTypeCheck (L_157, (t11*) &_stringLiteral1751);
		*((t11**)(t11**)SZArrayLdElema(L_157, ((int32_t)160))) = (t11*)(t11*) &_stringLiteral1751;
		t585* L_158 = L_157;
		ArrayElementTypeCheck (L_158, (t11*) &_stringLiteral1752);
		*((t11**)(t11**)SZArrayLdElema(L_158, ((int32_t)161))) = (t11*)(t11*) &_stringLiteral1752;
		t585* L_159 = L_158;
		ArrayElementTypeCheck (L_159, (t11*) &_stringLiteral1753);
		*((t11**)(t11**)SZArrayLdElema(L_159, ((int32_t)162))) = (t11*)(t11*) &_stringLiteral1753;
		t585* L_160 = L_159;
		ArrayElementTypeCheck (L_160, (t11*) &_stringLiteral1754);
		*((t11**)(t11**)SZArrayLdElema(L_160, ((int32_t)163))) = (t11*)(t11*) &_stringLiteral1754;
		t585* L_161 = L_160;
		ArrayElementTypeCheck (L_161, (t11*) &_stringLiteral1755);
		*((t11**)(t11**)SZArrayLdElema(L_161, ((int32_t)164))) = (t11*)(t11*) &_stringLiteral1755;
		t585* L_162 = L_161;
		ArrayElementTypeCheck (L_162, (t11*) &_stringLiteral1756);
		*((t11**)(t11**)SZArrayLdElema(L_162, ((int32_t)165))) = (t11*)(t11*) &_stringLiteral1756;
		t585* L_163 = L_162;
		ArrayElementTypeCheck (L_163, (t11*) &_stringLiteral1757);
		*((t11**)(t11**)SZArrayLdElema(L_163, ((int32_t)179))) = (t11*)(t11*) &_stringLiteral1757;
		t585* L_164 = L_163;
		ArrayElementTypeCheck (L_164, (t11*) &_stringLiteral1758);
		*((t11**)(t11**)SZArrayLdElema(L_164, ((int32_t)180))) = (t11*)(t11*) &_stringLiteral1758;
		t585* L_165 = L_164;
		ArrayElementTypeCheck (L_165, (t11*) &_stringLiteral1759);
		*((t11**)(t11**)SZArrayLdElema(L_165, ((int32_t)181))) = (t11*)(t11*) &_stringLiteral1759;
		t585* L_166 = L_165;
		ArrayElementTypeCheck (L_166, (t11*) &_stringLiteral1760);
		*((t11**)(t11**)SZArrayLdElema(L_166, ((int32_t)182))) = (t11*)(t11*) &_stringLiteral1760;
		t585* L_167 = L_166;
		ArrayElementTypeCheck (L_167, (t11*) &_stringLiteral1761);
		*((t11**)(t11**)SZArrayLdElema(L_167, ((int32_t)183))) = (t11*)(t11*) &_stringLiteral1761;
		t585* L_168 = L_167;
		ArrayElementTypeCheck (L_168, (t11*) &_stringLiteral1762);
		*((t11**)(t11**)SZArrayLdElema(L_168, ((int32_t)184))) = (t11*)(t11*) &_stringLiteral1762;
		t585* L_169 = L_168;
		ArrayElementTypeCheck (L_169, (t11*) &_stringLiteral1763);
		*((t11**)(t11**)SZArrayLdElema(L_169, ((int32_t)185))) = (t11*)(t11*) &_stringLiteral1763;
		t585* L_170 = L_169;
		ArrayElementTypeCheck (L_170, (t11*) &_stringLiteral1764);
		*((t11**)(t11**)SZArrayLdElema(L_170, ((int32_t)186))) = (t11*)(t11*) &_stringLiteral1764;
		t585* L_171 = L_170;
		ArrayElementTypeCheck (L_171, (t11*) &_stringLiteral1765);
		*((t11**)(t11**)SZArrayLdElema(L_171, ((int32_t)194))) = (t11*)(t11*) &_stringLiteral1765;
		t585* L_172 = L_171;
		ArrayElementTypeCheck (L_172, (t11*) &_stringLiteral1766);
		*((t11**)(t11**)SZArrayLdElema(L_172, ((int32_t)195))) = (t11*)(t11*) &_stringLiteral1766;
		t585* L_173 = L_172;
		ArrayElementTypeCheck (L_173, (t11*) &_stringLiteral1767);
		*((t11**)(t11**)SZArrayLdElema(L_173, ((int32_t)198))) = (t11*)(t11*) &_stringLiteral1767;
		t585* L_174 = L_173;
		ArrayElementTypeCheck (L_174, (t11*) &_stringLiteral1768);
		*((t11**)(t11**)SZArrayLdElema(L_174, ((int32_t)208))) = (t11*)(t11*) &_stringLiteral1768;
		t585* L_175 = L_174;
		ArrayElementTypeCheck (L_175, (t11*) &_stringLiteral1769);
		*((t11**)(t11**)SZArrayLdElema(L_175, ((int32_t)209))) = (t11*)(t11*) &_stringLiteral1769;
		t585* L_176 = L_175;
		ArrayElementTypeCheck (L_176, (t11*) &_stringLiteral1770);
		*((t11**)(t11**)SZArrayLdElema(L_176, ((int32_t)210))) = (t11*)(t11*) &_stringLiteral1770;
		t585* L_177 = L_176;
		ArrayElementTypeCheck (L_177, (t11*) &_stringLiteral1771);
		*((t11**)(t11**)SZArrayLdElema(L_177, ((int32_t)211))) = (t11*)(t11*) &_stringLiteral1771;
		t585* L_178 = L_177;
		ArrayElementTypeCheck (L_178, (t11*) &_stringLiteral1772);
		*((t11**)(t11**)SZArrayLdElema(L_178, ((int32_t)212))) = (t11*)(t11*) &_stringLiteral1772;
		t585* L_179 = L_178;
		ArrayElementTypeCheck (L_179, (t11*) &_stringLiteral1773);
		*((t11**)(t11**)SZArrayLdElema(L_179, ((int32_t)213))) = (t11*)(t11*) &_stringLiteral1773;
		t585* L_180 = L_179;
		ArrayElementTypeCheck (L_180, (t11*) &_stringLiteral1774);
		*((t11**)(t11**)SZArrayLdElema(L_180, ((int32_t)214))) = (t11*)(t11*) &_stringLiteral1774;
		t585* L_181 = L_180;
		ArrayElementTypeCheck (L_181, (t11*) &_stringLiteral1775);
		*((t11**)(t11**)SZArrayLdElema(L_181, ((int32_t)215))) = (t11*)(t11*) &_stringLiteral1775;
		t585* L_182 = L_181;
		ArrayElementTypeCheck (L_182, (t11*) &_stringLiteral1776);
		*((t11**)(t11**)SZArrayLdElema(L_182, ((int32_t)216))) = (t11*)(t11*) &_stringLiteral1776;
		t585* L_183 = L_182;
		ArrayElementTypeCheck (L_183, (t11*) &_stringLiteral1777);
		*((t11**)(t11**)SZArrayLdElema(L_183, ((int32_t)217))) = (t11*)(t11*) &_stringLiteral1777;
		t585* L_184 = L_183;
		ArrayElementTypeCheck (L_184, (t11*) &_stringLiteral1778);
		*((t11**)(t11**)SZArrayLdElema(L_184, ((int32_t)218))) = (t11*)(t11*) &_stringLiteral1778;
		t585* L_185 = L_184;
		ArrayElementTypeCheck (L_185, (t11*) &_stringLiteral1779);
		*((t11**)(t11**)SZArrayLdElema(L_185, ((int32_t)219))) = (t11*)(t11*) &_stringLiteral1779;
		t585* L_186 = L_185;
		ArrayElementTypeCheck (L_186, (t11*) &_stringLiteral1780);
		*((t11**)(t11**)SZArrayLdElema(L_186, ((int32_t)220))) = (t11*)(t11*) &_stringLiteral1780;
		t585* L_187 = L_186;
		ArrayElementTypeCheck (L_187, (t11*) &_stringLiteral1781);
		*((t11**)(t11**)SZArrayLdElema(L_187, ((int32_t)221))) = (t11*)(t11*) &_stringLiteral1781;
		t585* L_188 = L_187;
		ArrayElementTypeCheck (L_188, (t11*) &_stringLiteral1782);
		*((t11**)(t11**)SZArrayLdElema(L_188, ((int32_t)222))) = (t11*)(t11*) &_stringLiteral1782;
		t585* L_189 = L_188;
		ArrayElementTypeCheck (L_189, (t11*) &_stringLiteral1783);
		*((t11**)(t11**)SZArrayLdElema(L_189, ((int32_t)223))) = (t11*)(t11*) &_stringLiteral1783;
		t585* L_190 = L_189;
		ArrayElementTypeCheck (L_190, (t11*) &_stringLiteral1784);
		*((t11**)(t11**)SZArrayLdElema(L_190, ((int32_t)224))) = (t11*)(t11*) &_stringLiteral1784;
		t585* L_191 = L_190;
		ArrayElementTypeCheck (L_191, (t11*) &_stringLiteral1785);
		*((t11**)(t11**)SZArrayLdElema(L_191, ((int32_t)248))) = (t11*)(t11*) &_stringLiteral1785;
		t585* L_192 = L_191;
		ArrayElementTypeCheck (L_192, (t11*) &_stringLiteral1786);
		*((t11**)(t11**)SZArrayLdElema(L_192, ((int32_t)249))) = (t11*)(t11*) &_stringLiteral1786;
		t585* L_193 = L_192;
		ArrayElementTypeCheck (L_193, (t11*) &_stringLiteral1787);
		*((t11**)(t11**)SZArrayLdElema(L_193, ((int32_t)250))) = (t11*)(t11*) &_stringLiteral1787;
		t585* L_194 = L_193;
		ArrayElementTypeCheck (L_194, (t11*) &_stringLiteral1788);
		*((t11**)(t11**)SZArrayLdElema(L_194, ((int32_t)251))) = (t11*)(t11*) &_stringLiteral1788;
		t585* L_195 = L_194;
		ArrayElementTypeCheck (L_195, (t11*) &_stringLiteral1789);
		*((t11**)(t11**)SZArrayLdElema(L_195, ((int32_t)252))) = (t11*)(t11*) &_stringLiteral1789;
		t585* L_196 = L_195;
		ArrayElementTypeCheck (L_196, (t11*) &_stringLiteral1790);
		*((t11**)(t11**)SZArrayLdElema(L_196, ((int32_t)253))) = (t11*)(t11*) &_stringLiteral1790;
		t585* L_197 = L_196;
		ArrayElementTypeCheck (L_197, (t11*) &_stringLiteral1791);
		*((t11**)(t11**)SZArrayLdElema(L_197, ((int32_t)254))) = (t11*)(t11*) &_stringLiteral1791;
		t585* L_198 = L_197;
		ArrayElementTypeCheck (L_198, (t11*) &_stringLiteral1792);
		*((t11**)(t11**)SZArrayLdElema(L_198, ((int32_t)255))) = (t11*)(t11*) &_stringLiteral1792;
		t585* L_199 = L_198;
		ArrayElementTypeCheck (L_199, (t11*) &_stringLiteral1793);
		*((t11**)(t11**)SZArrayLdElema(L_199, ((int32_t)256))) = (t11*)(t11*) &_stringLiteral1793;
		t585* L_200 = L_199;
		ArrayElementTypeCheck (L_200, (t11*) &_stringLiteral1794);
		*((t11**)(t11**)SZArrayLdElema(L_200, ((int32_t)257))) = (t11*)(t11*) &_stringLiteral1794;
		t585* L_201 = L_200;
		ArrayElementTypeCheck (L_201, (t11*) &_stringLiteral1795);
		*((t11**)(t11**)SZArrayLdElema(L_201, ((int32_t)258))) = (t11*)(t11*) &_stringLiteral1795;
		t585* L_202 = L_201;
		ArrayElementTypeCheck (L_202, (t11*) &_stringLiteral1796);
		*((t11**)(t11**)SZArrayLdElema(L_202, ((int32_t)259))) = (t11*)(t11*) &_stringLiteral1796;
		t585* L_203 = L_202;
		ArrayElementTypeCheck (L_203, (t11*) &_stringLiteral1797);
		*((t11**)(t11**)SZArrayLdElema(L_203, ((int32_t)260))) = (t11*)(t11*) &_stringLiteral1797;
		t585* L_204 = L_203;
		ArrayElementTypeCheck (L_204, (t11*) &_stringLiteral1798);
		*((t11**)(t11**)SZArrayLdElema(L_204, ((int32_t)261))) = (t11*)(t11*) &_stringLiteral1798;
		t585* L_205 = L_204;
		ArrayElementTypeCheck (L_205, (t11*) &_stringLiteral1799);
		*((t11**)(t11**)SZArrayLdElema(L_205, ((int32_t)262))) = (t11*)(t11*) &_stringLiteral1799;
		t585* L_206 = L_205;
		ArrayElementTypeCheck (L_206, (t11*) &_stringLiteral1800);
		*((t11**)(t11**)SZArrayLdElema(L_206, ((int32_t)263))) = (t11*)(t11*) &_stringLiteral1800;
		t585* L_207 = L_206;
		ArrayElementTypeCheck (L_207, (t11*) &_stringLiteral1801);
		*((t11**)(t11**)SZArrayLdElema(L_207, ((int32_t)265))) = (t11*)(t11*) &_stringLiteral1801;
		t585* L_208 = L_207;
		ArrayElementTypeCheck (L_208, (t11*) &_stringLiteral1802);
		*((t11**)(t11**)SZArrayLdElema(L_208, ((int32_t)266))) = (t11*)(t11*) &_stringLiteral1802;
		t585* L_209 = L_208;
		ArrayElementTypeCheck (L_209, (t11*) &_stringLiteral1803);
		*((t11**)(t11**)SZArrayLdElema(L_209, ((int32_t)267))) = (t11*)(t11*) &_stringLiteral1803;
		t585* L_210 = L_209;
		ArrayElementTypeCheck (L_210, (t11*) &_stringLiteral1804);
		*((t11**)(t11**)SZArrayLdElema(L_210, ((int32_t)268))) = (t11*)(t11*) &_stringLiteral1804;
		t585* L_211 = L_210;
		ArrayElementTypeCheck (L_211, (t11*) &_stringLiteral1805);
		*((t11**)(t11**)SZArrayLdElema(L_211, ((int32_t)269))) = (t11*)(t11*) &_stringLiteral1805;
		t585* L_212 = L_211;
		ArrayElementTypeCheck (L_212, (t11*) &_stringLiteral1806);
		*((t11**)(t11**)SZArrayLdElema(L_212, ((int32_t)270))) = (t11*)(t11*) &_stringLiteral1806;
		t585* L_213 = L_212;
		ArrayElementTypeCheck (L_213, (t11*) &_stringLiteral1807);
		*((t11**)(t11**)SZArrayLdElema(L_213, ((int32_t)271))) = (t11*)(t11*) &_stringLiteral1807;
		t585* L_214 = L_213;
		ArrayElementTypeCheck (L_214, (t11*) &_stringLiteral1808);
		*((t11**)(t11**)SZArrayLdElema(L_214, ((int32_t)273))) = (t11*)(t11*) &_stringLiteral1808;
		t585* L_215 = L_214;
		ArrayElementTypeCheck (L_215, (t11*) &_stringLiteral1809);
		*((t11**)(t11**)SZArrayLdElema(L_215, ((int32_t)274))) = (t11*)(t11*) &_stringLiteral1809;
		t585* L_216 = L_215;
		ArrayElementTypeCheck (L_216, (t11*) &_stringLiteral1810);
		*((t11**)(t11**)SZArrayLdElema(L_216, ((int32_t)275))) = (t11*)(t11*) &_stringLiteral1810;
		t585* L_217 = L_216;
		ArrayElementTypeCheck (L_217, (t11*) &_stringLiteral1811);
		*((t11**)(t11**)SZArrayLdElema(L_217, ((int32_t)276))) = (t11*)(t11*) &_stringLiteral1811;
		t585* L_218 = L_217;
		ArrayElementTypeCheck (L_218, (t11*) &_stringLiteral1812);
		*((t11**)(t11**)SZArrayLdElema(L_218, ((int32_t)277))) = (t11*)(t11*) &_stringLiteral1812;
		t585* L_219 = L_218;
		ArrayElementTypeCheck (L_219, (t11*) &_stringLiteral1813);
		*((t11**)(t11**)SZArrayLdElema(L_219, ((int32_t)278))) = (t11*)(t11*) &_stringLiteral1813;
		t585* L_220 = L_219;
		ArrayElementTypeCheck (L_220, (t11*) &_stringLiteral1814);
		*((t11**)(t11**)SZArrayLdElema(L_220, ((int32_t)279))) = (t11*)(t11*) &_stringLiteral1814;
		t585* L_221 = L_220;
		ArrayElementTypeCheck (L_221, (t11*) &_stringLiteral1815);
		*((t11**)(t11**)SZArrayLdElema(L_221, ((int32_t)280))) = (t11*)(t11*) &_stringLiteral1815;
		t585* L_222 = L_221;
		ArrayElementTypeCheck (L_222, (t11*) &_stringLiteral1816);
		*((t11**)(t11**)SZArrayLdElema(L_222, ((int32_t)282))) = (t11*)(t11*) &_stringLiteral1816;
		t585* L_223 = L_222;
		ArrayElementTypeCheck (L_223, (t11*) &_stringLiteral1817);
		*((t11**)(t11**)SZArrayLdElema(L_223, ((int32_t)284))) = (t11*)(t11*) &_stringLiteral1817;
		t585* L_224 = L_223;
		ArrayElementTypeCheck (L_224, (t11*) &_stringLiteral1818);
		*((t11**)(t11**)SZArrayLdElema(L_224, ((int32_t)285))) = (t11*)(t11*) &_stringLiteral1818;
		t585* L_225 = L_224;
		ArrayElementTypeCheck (L_225, (t11*) &_stringLiteral1819);
		*((t11**)(t11**)SZArrayLdElema(L_225, ((int32_t)286))) = (t11*)(t11*) &_stringLiteral1819;
		((t1646_SFs*)InitializedTypeInfo(&t1646_TI)->static_fields)->f0 = L_225;
		return;
	}
}
// Metadata Definition System.Reflection.Emit.OpCodeNames
extern Il2CppType t585_0_0_51;
FieldInfo t1646_f0_FieldInfo = 
{
	"names", &t585_0_0_51, &t1646_TI, offsetof(t1646_SFs, f0), &EmptyCustomAttributesCache};
static FieldInfo* t1646_FIs[] =
{
	&t1646_f0_FieldInfo,
	NULL
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m8386_MI = 
{
	".cctor", (methodPointerType)&m8386, &t1646_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 3107, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1646_MIs[] =
{
	&m8386_MI,
	NULL
};
static MethodInfo* t1646_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1646_0_0_0;
extern Il2CppType t1646_1_0_0;
struct t1646;
TypeInfo t1646_TI = 
{
	&g_mscorlib_dll_Image, NULL, "OpCodeNames", "System.Reflection.Emit", t1646_MIs, NULL, t1646_FIs, NULL, &t5_TI, NULL, NULL, &t1646_TI, NULL, t1646_VT, &EmptyCustomAttributesCache, &t1646_TI, &t1646_0_0_0, &t1646_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1646), 0, -1, sizeof(t1646_SFs), 0, -1, 1048576, 0, false, false, false, false, false, false, false, false, false, true, false, false, 1, 0, 1, 0, 0, 4, 0, 0};
#include "t1647.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1647_TI;
#include "t1647MD.h"



extern MethodInfo m8387_MI;
 void m8387 (t5 * __this, MethodInfo* method){
	{
		t1635  L_0 = {0};
		m8375(&L_0, ((int32_t)1179903), ((int32_t)84215041), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f0 = L_0;
		t1635  L_1 = {0};
		m8375(&L_1, ((int32_t)1180159), ((int32_t)17106177), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f1 = L_1;
		t1635  L_2 = {0};
		m8375(&L_2, ((int32_t)1245951), ((int32_t)84214017), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f2 = L_2;
		t1635  L_3 = {0};
		m8375(&L_3, ((int32_t)1246207), ((int32_t)84214017), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f3 = L_3;
		t1635  L_4 = {0};
		m8375(&L_4, ((int32_t)1246463), ((int32_t)84214017), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f4 = L_4;
		t1635  L_5 = {0};
		m8375(&L_5, ((int32_t)1246719), ((int32_t)84214017), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f5 = L_5;
		t1635  L_6 = {0};
		m8375(&L_6, ((int32_t)1246975), ((int32_t)84214017), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f6 = L_6;
		t1635  L_7 = {0};
		m8375(&L_7, ((int32_t)1247231), ((int32_t)84214017), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f7 = L_7;
		t1635  L_8 = {0};
		m8375(&L_8, ((int32_t)1247487), ((int32_t)84214017), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f8 = L_8;
		t1635  L_9 = {0};
		m8375(&L_9, ((int32_t)1247743), ((int32_t)84214017), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f9 = L_9;
		t1635  L_10 = {0};
		m8375(&L_10, ((int32_t)17959679), ((int32_t)84214017), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f10 = L_10;
		t1635  L_11 = {0};
		m8375(&L_11, ((int32_t)17959935), ((int32_t)84214017), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f11 = L_11;
		t1635  L_12 = {0};
		m8375(&L_12, ((int32_t)17960191), ((int32_t)84214017), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f12 = L_12;
		t1635  L_13 = {0};
		m8375(&L_13, ((int32_t)17960447), ((int32_t)84214017), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f13 = L_13;
		t1635  L_14 = {0};
		m8375(&L_14, ((int32_t)1249023), ((int32_t)85065985), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f14 = L_14;
		t1635  L_15 = {0};
		m8375(&L_15, ((int32_t)1380351), ((int32_t)85065985), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f15 = L_15;
		t1635  L_16 = {0};
		m8375(&L_16, ((int32_t)17961215), ((int32_t)85065985), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f16 = L_16;
		t1635  L_17 = {0};
		m8375(&L_17, ((int32_t)1249791), ((int32_t)85065985), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f17 = L_17;
		t1635  L_18 = {0};
		m8375(&L_18, ((int32_t)1381119), ((int32_t)85065985), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f18 = L_18;
		t1635  L_19 = {0};
		m8375(&L_19, ((int32_t)17961983), ((int32_t)85065985), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f19 = L_19;
		t1635  L_20 = {0};
		m8375(&L_20, ((int32_t)1643775), ((int32_t)84215041), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f20 = L_20;
		t1635  L_21 = {0};
		m8375(&L_21, ((int32_t)1381887), ((int32_t)84214017), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f21 = L_21;
		t1635  L_22 = {0};
		m8375(&L_22, ((int32_t)1382143), ((int32_t)84214017), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f22 = L_22;
		t1635  L_23 = {0};
		m8375(&L_23, ((int32_t)1382399), ((int32_t)84214017), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f23 = L_23;
		t1635  L_24 = {0};
		m8375(&L_24, ((int32_t)1382655), ((int32_t)84214017), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f24 = L_24;
		t1635  L_25 = {0};
		m8375(&L_25, ((int32_t)1382911), ((int32_t)84214017), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f25 = L_25;
		t1635  L_26 = {0};
		m8375(&L_26, ((int32_t)1383167), ((int32_t)84214017), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f26 = L_26;
		t1635  L_27 = {0};
		m8375(&L_27, ((int32_t)1383423), ((int32_t)84214017), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f27 = L_27;
		t1635  L_28 = {0};
		m8375(&L_28, ((int32_t)1383679), ((int32_t)84214017), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f28 = L_28;
		t1635  L_29 = {0};
		m8375(&L_29, ((int32_t)1383935), ((int32_t)84214017), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f29 = L_29;
		t1635  L_30 = {0};
		m8375(&L_30, ((int32_t)1384191), ((int32_t)84214017), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f30 = L_30;
		t1635  L_31 = {0};
		m8375(&L_31, ((int32_t)1384447), ((int32_t)84934913), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f31 = L_31;
		t1635  L_32 = {0};
		m8375(&L_32, ((int32_t)1384703), ((int32_t)84018433), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f32 = L_32;
		t1635  L_33 = {0};
		m8375(&L_33, ((int32_t)1450495), ((int32_t)84083969), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f33 = L_33;
		t1635  L_34 = {0};
		m8375(&L_34, ((int32_t)1516287), ((int32_t)85001473), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f34 = L_34;
		t1635  L_35 = {0};
		m8375(&L_35, ((int32_t)1582079), ((int32_t)84346113), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f35 = L_35;
		t1635  L_36 = {0};
		m8375(&L_36, ((int32_t)18097663), ((int32_t)84215041), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f36 = L_36;
		t1635  L_37 = {0};
		m8375(&L_37, ((int32_t)17966847), ((int32_t)84215041), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f37 = L_37;
		t1635  L_38 = {0};
		m8375(&L_38, ((int32_t)1189887), ((int32_t)33817857), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f38 = L_38;
		t1635  L_39 = {0};
		m8375(&L_39, ((int32_t)437987583), ((int32_t)33817857), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f39 = L_39;
		t1635  L_40 = {0};
		m8375(&L_40, ((int32_t)437987839), ((int32_t)34145537), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f40 = L_40;
		t1635  L_41 = {0};
		m8375(&L_41, ((int32_t)437398271), ((int32_t)117769473), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f41 = L_41;
		t1635  L_42 = {0};
		m8375(&L_42, ((int32_t)1190911), ((int32_t)983297), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f42 = L_42;
		t1635  L_43 = {0};
		m8375(&L_43, ((int32_t)51522815), ((int32_t)51314945), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f43 = L_43;
		t1635  L_44 = {0};
		m8375(&L_44, ((int32_t)51523071), ((int32_t)51314945), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f44 = L_44;
		t1635  L_45 = {0};
		m8375(&L_45, ((int32_t)34746111), ((int32_t)51314945), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f45 = L_45;
		t1635  L_46 = {0};
		m8375(&L_46, ((int32_t)34746367), ((int32_t)51314945), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f46 = L_46;
		t1635  L_47 = {0};
		m8375(&L_47, ((int32_t)34746623), ((int32_t)51314945), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f47 = L_47;
		t1635  L_48 = {0};
		m8375(&L_48, ((int32_t)34746879), ((int32_t)51314945), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f48 = L_48;
		t1635  L_49 = {0};
		m8375(&L_49, ((int32_t)34747135), ((int32_t)51314945), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f49 = L_49;
		t1635  L_50 = {0};
		m8375(&L_50, ((int32_t)34747391), ((int32_t)51314945), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f50 = L_50;
		t1635  L_51 = {0};
		m8375(&L_51, ((int32_t)34747647), ((int32_t)51314945), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f51 = L_51;
		t1635  L_52 = {0};
		m8375(&L_52, ((int32_t)34747903), ((int32_t)51314945), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f52 = L_52;
		t1635  L_53 = {0};
		m8375(&L_53, ((int32_t)34748159), ((int32_t)51314945), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f53 = L_53;
		t1635  L_54 = {0};
		m8375(&L_54, ((int32_t)34748415), ((int32_t)51314945), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f54 = L_54;
		t1635  L_55 = {0};
		m8375(&L_55, ((int32_t)1194239), ((int32_t)1281), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f55 = L_55;
		t1635  L_56 = {0};
		m8375(&L_56, ((int32_t)51526143), ((int32_t)50332929), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f56 = L_56;
		t1635  L_57 = {0};
		m8375(&L_57, ((int32_t)51526399), ((int32_t)50332929), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f57 = L_57;
		t1635  L_58 = {0};
		m8375(&L_58, ((int32_t)34749439), ((int32_t)50331905), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f58 = L_58;
		t1635  L_59 = {0};
		m8375(&L_59, ((int32_t)34749695), ((int32_t)50331905), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f59 = L_59;
		t1635  L_60 = {0};
		m8375(&L_60, ((int32_t)34749951), ((int32_t)50331905), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f60 = L_60;
		t1635  L_61 = {0};
		m8375(&L_61, ((int32_t)34750207), ((int32_t)50331905), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f61 = L_61;
		t1635  L_62 = {0};
		m8375(&L_62, ((int32_t)34750463), ((int32_t)50331905), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f62 = L_62;
		t1635  L_63 = {0};
		m8375(&L_63, ((int32_t)34750719), ((int32_t)50331905), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f63 = L_63;
		t1635  L_64 = {0};
		m8375(&L_64, ((int32_t)34750975), ((int32_t)50331905), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f64 = L_64;
		t1635  L_65 = {0};
		m8375(&L_65, ((int32_t)34751231), ((int32_t)50331905), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f65 = L_65;
		t1635  L_66 = {0};
		m8375(&L_66, ((int32_t)34751487), ((int32_t)50331905), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f66 = L_66;
		t1635  L_67 = {0};
		m8375(&L_67, ((int32_t)34751743), ((int32_t)50331905), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f67 = L_67;
		t1635  L_68 = {0};
		m8375(&L_68, ((int32_t)51529215), ((int32_t)51053825), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f68 = L_68;
		t1635  L_69 = {0};
		m8375(&L_69, ((int32_t)51726079), ((int32_t)84215041), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f69 = L_69;
		t1635  L_70 = {0};
		m8375(&L_70, ((int32_t)51726335), ((int32_t)84215041), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f70 = L_70;
		t1635  L_71 = {0};
		m8375(&L_71, ((int32_t)51726591), ((int32_t)84215041), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f71 = L_71;
		t1635  L_72 = {0};
		m8375(&L_72, ((int32_t)51726847), ((int32_t)84215041), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f72 = L_72;
		t1635  L_73 = {0};
		m8375(&L_73, ((int32_t)51727103), ((int32_t)84215041), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f73 = L_73;
		t1635  L_74 = {0};
		m8375(&L_74, ((int32_t)51727359), ((int32_t)84215041), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f74 = L_74;
		t1635  L_75 = {0};
		m8375(&L_75, ((int32_t)51793151), ((int32_t)84215041), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f75 = L_75;
		t1635  L_76 = {0};
		m8375(&L_76, ((int32_t)51727871), ((int32_t)84215041), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f76 = L_76;
		t1635  L_77 = {0};
		m8375(&L_77, ((int32_t)51859199), ((int32_t)84215041), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f77 = L_77;
		t1635  L_78 = {0};
		m8375(&L_78, ((int32_t)51924991), ((int32_t)84215041), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f78 = L_78;
		t1635  L_79 = {0};
		m8375(&L_79, ((int32_t)51990783), ((int32_t)84215041), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f79 = L_79;
		t1635  L_80 = {0};
		m8375(&L_80, ((int32_t)85086719), ((int32_t)84215041), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f80 = L_80;
		t1635  L_81 = {0};
		m8375(&L_81, ((int32_t)85086975), ((int32_t)84215041), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f81 = L_81;
		t1635  L_82 = {0};
		m8375(&L_82, ((int32_t)85087231), ((int32_t)84215041), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f82 = L_82;
		t1635  L_83 = {0};
		m8375(&L_83, ((int32_t)85087487), ((int32_t)84215041), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f83 = L_83;
		t1635  L_84 = {0};
		m8375(&L_84, ((int32_t)101864959), ((int32_t)84215041), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f84 = L_84;
		t1635  L_85 = {0};
		m8375(&L_85, ((int32_t)135419647), ((int32_t)84215041), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f85 = L_85;
		t1635  L_86 = {0};
		m8375(&L_86, ((int32_t)152197119), ((int32_t)84215041), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f86 = L_86;
		t1635  L_87 = {0};
		m8375(&L_87, ((int32_t)34822399), ((int32_t)84215041), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f87 = L_87;
		t1635  L_88 = {0};
		m8375(&L_88, ((int32_t)34822655), ((int32_t)84215041), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f88 = L_88;
		t1635  L_89 = {0};
		m8375(&L_89, ((int32_t)34822911), ((int32_t)84215041), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f89 = L_89;
		t1635  L_90 = {0};
		m8375(&L_90, ((int32_t)34823167), ((int32_t)84215041), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f90 = L_90;
		t1635  L_91 = {0};
		m8375(&L_91, ((int32_t)34823423), ((int32_t)84215041), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f91 = L_91;
		t1635  L_92 = {0};
		m8375(&L_92, ((int32_t)34823679), ((int32_t)84215041), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f92 = L_92;
		t1635  L_93 = {0};
		m8375(&L_93, ((int32_t)34823935), ((int32_t)84215041), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f93 = L_93;
		t1635  L_94 = {0};
		m8375(&L_94, ((int32_t)34824191), ((int32_t)84215041), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f94 = L_94;
		t1635  L_95 = {0};
		m8375(&L_95, ((int32_t)34824447), ((int32_t)84215041), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f95 = L_95;
		t1635  L_96 = {0};
		m8375(&L_96, ((int32_t)34824703), ((int32_t)84215041), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f96 = L_96;
		t1635  L_97 = {0};
		m8375(&L_97, ((int32_t)34824959), ((int32_t)84215041), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f97 = L_97;
		t1635  L_98 = {0};
		m8375(&L_98, ((int32_t)34825215), ((int32_t)84215041), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f98 = L_98;
		t1635  L_99 = {0};
		m8375(&L_99, ((int32_t)34825471), ((int32_t)84215041), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f99 = L_99;
		t1635  L_100 = {0};
		m8375(&L_100, ((int32_t)18048511), ((int32_t)84215041), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f100 = L_100;
		t1635  L_101 = {0};
		m8375(&L_101, ((int32_t)18048767), ((int32_t)84215041), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f101 = L_101;
		t1635  L_102 = {0};
		m8375(&L_102, ((int32_t)18180095), ((int32_t)84215041), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f102 = L_102;
		t1635  L_103 = {0};
		m8375(&L_103, ((int32_t)18180351), ((int32_t)84215041), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f103 = L_103;
		t1635  L_104 = {0};
		m8375(&L_104, ((int32_t)18180607), ((int32_t)84215041), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f104 = L_104;
		t1635  L_105 = {0};
		m8375(&L_105, ((int32_t)18246399), ((int32_t)84215041), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f105 = L_105;
		t1635  L_106 = {0};
		m8375(&L_106, ((int32_t)18312191), ((int32_t)84215041), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f106 = L_106;
		t1635  L_107 = {0};
		m8375(&L_107, ((int32_t)18377983), ((int32_t)84215041), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f107 = L_107;
		t1635  L_108 = {0};
		m8375(&L_108, ((int32_t)18181631), ((int32_t)84215041), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f108 = L_108;
		t1635  L_109 = {0};
		m8375(&L_109, ((int32_t)18247423), ((int32_t)84215041), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f109 = L_109;
		t1635  L_110 = {0};
		m8375(&L_110, ((int32_t)438005759), ((int32_t)33817345), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f110 = L_110;
		t1635  L_111 = {0};
		m8375(&L_111, ((int32_t)85094655), ((int32_t)84738817), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f111 = L_111;
		t1635  L_112 = {0};
		m8375(&L_112, ((int32_t)51606015), ((int32_t)84738817), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f112 = L_112;
		t1635  L_113 = {0};
		m8375(&L_113, ((int32_t)1667839), ((int32_t)84542209), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f113 = L_113;
		t1635  L_114 = {0};
		m8375(&L_114, ((int32_t)437875711), ((int32_t)33817345), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f114 = L_114;
		t1635  L_115 = {0};
		m8375(&L_115, ((int32_t)169440511), ((int32_t)84738817), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f115 = L_115;
		t1635  L_116 = {0};
		m8375(&L_116, ((int32_t)169178623), ((int32_t)84738817), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f116 = L_116;
		t1635  L_117 = {0};
		m8375(&L_117, ((int32_t)18380543), ((int32_t)84215041), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f117 = L_117;
		t1635  L_118 = {0};
		m8375(&L_118, ((int32_t)169179647), ((int32_t)84739329), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f118 = L_118;
		t1635  L_119 = {0};
		m8375(&L_119, ((int32_t)168983295), ((int32_t)134546177), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f119 = L_119;
		t1635  L_120 = {0};
		m8375(&L_120, ((int32_t)169049087), ((int32_t)83952385), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f120 = L_120;
		t1635  L_121 = {0};
		m8375(&L_121, ((int32_t)169180415), ((int32_t)83952385), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f121 = L_121;
		t1635  L_122 = {0};
		m8375(&L_122, ((int32_t)185761279), ((int32_t)83952385), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f122 = L_122;
		t1635  L_123 = {0};
		m8375(&L_123, ((int32_t)1277695), ((int32_t)83952385), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f123 = L_123;
		t1635  L_124 = {0};
		m8375(&L_124, ((int32_t)1409023), ((int32_t)83952385), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f124 = L_124;
		t1635  L_125 = {0};
		m8375(&L_125, ((int32_t)17989887), ((int32_t)83952385), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f125 = L_125;
		t1635  L_126 = {0};
		m8375(&L_126, ((int32_t)68321791), ((int32_t)84739329), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f126 = L_126;
		t1635  L_127 = {0};
		m8375(&L_127, ((int32_t)18187007), ((int32_t)84215041), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f127 = L_127;
		t1635  L_128 = {0};
		m8375(&L_128, ((int32_t)18187263), ((int32_t)84215041), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f128 = L_128;
		t1635  L_129 = {0};
		m8375(&L_129, ((int32_t)18187519), ((int32_t)84215041), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f129 = L_129;
		t1635  L_130 = {0};
		m8375(&L_130, ((int32_t)18253311), ((int32_t)84215041), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f130 = L_130;
		t1635  L_131 = {0};
		m8375(&L_131, ((int32_t)18188031), ((int32_t)84215041), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f131 = L_131;
		t1635  L_132 = {0};
		m8375(&L_132, ((int32_t)18188287), ((int32_t)84215041), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f132 = L_132;
		t1635  L_133 = {0};
		m8375(&L_133, ((int32_t)18188543), ((int32_t)84215041), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f133 = L_133;
		t1635  L_134 = {0};
		m8375(&L_134, ((int32_t)18254335), ((int32_t)84215041), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f134 = L_134;
		t1635  L_135 = {0};
		m8375(&L_135, ((int32_t)18189055), ((int32_t)84215041), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f135 = L_135;
		t1635  L_136 = {0};
		m8375(&L_136, ((int32_t)18189311), ((int32_t)84215041), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f136 = L_136;
		t1635  L_137 = {0};
		m8375(&L_137, ((int32_t)18451711), ((int32_t)84739329), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f137 = L_137;
		t1635  L_138 = {0};
		m8375(&L_138, ((int32_t)52006399), ((int32_t)84738817), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f138 = L_138;
		t1635  L_139 = {0};
		m8375(&L_139, ((int32_t)169185023), ((int32_t)84214529), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f139 = L_139;
		t1635  L_140 = {0};
		m8375(&L_140, ((int32_t)202739711), ((int32_t)84738817), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f140 = L_140;
		t1635  L_141 = {0};
		m8375(&L_141, ((int32_t)202739967), ((int32_t)84214529), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f141 = L_141;
		t1635  L_142 = {0};
		m8375(&L_142, ((int32_t)202740223), ((int32_t)84214529), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f142 = L_142;
		t1635  L_143 = {0};
		m8375(&L_143, ((int32_t)202740479), ((int32_t)84214529), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f143 = L_143;
		t1635  L_144 = {0};
		m8375(&L_144, ((int32_t)202740735), ((int32_t)84214529), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f144 = L_144;
		t1635  L_145 = {0};
		m8375(&L_145, ((int32_t)202740991), ((int32_t)84214529), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f145 = L_145;
		t1635  L_146 = {0};
		m8375(&L_146, ((int32_t)202741247), ((int32_t)84214529), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f146 = L_146;
		t1635  L_147 = {0};
		m8375(&L_147, ((int32_t)202807039), ((int32_t)84214529), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f147 = L_147;
		t1635  L_148 = {0};
		m8375(&L_148, ((int32_t)202741759), ((int32_t)84214529), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f148 = L_148;
		t1635  L_149 = {0};
		m8375(&L_149, ((int32_t)202873087), ((int32_t)84214529), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f149 = L_149;
		t1635  L_150 = {0};
		m8375(&L_150, ((int32_t)202938879), ((int32_t)84214529), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f150 = L_150;
		t1635  L_151 = {0};
		m8375(&L_151, ((int32_t)203004671), ((int32_t)84214529), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f151 = L_151;
		t1635  L_152 = {0};
		m8375(&L_152, ((int32_t)219323391), ((int32_t)84214529), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f152 = L_152;
		t1635  L_153 = {0};
		m8375(&L_153, ((int32_t)219323647), ((int32_t)84214529), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f153 = L_153;
		t1635  L_154 = {0};
		m8375(&L_154, ((int32_t)219323903), ((int32_t)84214529), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f154 = L_154;
		t1635  L_155 = {0};
		m8375(&L_155, ((int32_t)219324159), ((int32_t)84214529), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f155 = L_155;
		t1635  L_156 = {0};
		m8375(&L_156, ((int32_t)236101631), ((int32_t)84214529), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f156 = L_156;
		t1635  L_157 = {0};
		m8375(&L_157, ((int32_t)252879103), ((int32_t)84214529), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f157 = L_157;
		t1635  L_158 = {0};
		m8375(&L_158, ((int32_t)269656575), ((int32_t)84214529), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f158 = L_158;
		t1635  L_159 = {0};
		m8375(&L_159, ((int32_t)286434047), ((int32_t)84214529), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f159 = L_159;
		t1635  L_160 = {0};
		m8375(&L_160, ((int32_t)202613759), ((int32_t)84738817), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f160 = L_160;
		t1635  L_161 = {0};
		m8375(&L_161, ((int32_t)470983935), ((int32_t)84738817), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f161 = L_161;
		t1635  L_162 = {0};
		m8375(&L_162, ((int32_t)169059839), ((int32_t)84738817), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f162 = L_162;
		t1635  L_163 = {0};
		m8375(&L_163, ((int32_t)18199551), ((int32_t)84215041), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f163 = L_163;
		t1635  L_164 = {0};
		m8375(&L_164, ((int32_t)18199807), ((int32_t)84215041), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f164 = L_164;
		t1635  L_165 = {0};
		m8375(&L_165, ((int32_t)18200063), ((int32_t)84215041), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f165 = L_165;
		t1635  L_166 = {0};
		m8375(&L_166, ((int32_t)18200319), ((int32_t)84215041), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f166 = L_166;
		t1635  L_167 = {0};
		m8375(&L_167, ((int32_t)18200575), ((int32_t)84215041), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f167 = L_167;
		t1635  L_168 = {0};
		m8375(&L_168, ((int32_t)18200831), ((int32_t)84215041), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f168 = L_168;
		t1635  L_169 = {0};
		m8375(&L_169, ((int32_t)18266623), ((int32_t)84215041), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f169 = L_169;
		t1635  L_170 = {0};
		m8375(&L_170, ((int32_t)18266879), ((int32_t)84215041), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f170 = L_170;
		t1635  L_171 = {0};
		m8375(&L_171, ((int32_t)18203391), ((int32_t)84739329), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f171 = L_171;
		t1635  L_172 = {0};
		m8375(&L_172, ((int32_t)18400255), ((int32_t)84215041), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f172 = L_172;
		t1635  L_173 = {0};
		m8375(&L_173, ((int32_t)51627775), ((int32_t)84739329), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f173 = L_173;
		t1635  L_174 = {0};
		m8375(&L_174, ((int32_t)1429759), ((int32_t)84673793), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f174 = L_174;
		t1635  L_175 = {0};
		m8375(&L_175, ((int32_t)18207231), ((int32_t)84215041), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f175 = L_175;
		t1635  L_176 = {0};
		m8375(&L_176, ((int32_t)18207487), ((int32_t)84215041), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f176 = L_176;
		t1635  L_177 = {0};
		m8375(&L_177, ((int32_t)18207743), ((int32_t)84215041), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f177 = L_177;
		t1635  L_178 = {0};
		m8375(&L_178, ((int32_t)18207999), ((int32_t)84215041), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f178 = L_178;
		t1635  L_179 = {0};
		m8375(&L_179, ((int32_t)18208255), ((int32_t)84215041), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f179 = L_179;
		t1635  L_180 = {0};
		m8375(&L_180, ((int32_t)34854655), ((int32_t)84215041), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f180 = L_180;
		t1635  L_181 = {0};
		m8375(&L_181, ((int32_t)34854911), ((int32_t)84215041), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f181 = L_181;
		t1635  L_182 = {0};
		m8375(&L_182, ((int32_t)34855167), ((int32_t)84215041), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f182 = L_182;
		t1635  L_183 = {0};
		m8375(&L_183, ((int32_t)34855423), ((int32_t)84215041), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f183 = L_183;
		t1635  L_184 = {0};
		m8375(&L_184, ((int32_t)34855679), ((int32_t)84215041), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f184 = L_184;
		t1635  L_185 = {0};
		m8375(&L_185, ((int32_t)34855935), ((int32_t)84215041), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f185 = L_185;
		t1635  L_186 = {0};
		m8375(&L_186, ((int32_t)1236223), ((int32_t)117769473), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f186 = L_186;
		t1635  L_187 = {0};
		m8375(&L_187, ((int32_t)1236479), ((int32_t)1281), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f187 = L_187;
		t1635  L_188 = {0};
		m8375(&L_188, ((int32_t)1236735), ((int32_t)984321), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f188 = L_188;
		t1635  L_189 = {0};
		m8375(&L_189, ((int32_t)85123071), ((int32_t)84215041), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f189 = L_189;
		t1635  L_190 = {0};
		m8375(&L_190, ((int32_t)18211071), ((int32_t)84215041), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f190 = L_190;
		t1635  L_191 = {0};
		m8375(&L_191, ((int32_t)1243391), ((int32_t)67437057), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f191 = L_191;
		t1635  L_192 = {0};
		m8375(&L_192, ((int32_t)1243647), ((int32_t)67437057), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f192 = L_192;
		t1635  L_193 = {0};
		m8375(&L_193, ((int32_t)1243903), ((int32_t)67437057), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f193 = L_193;
		t1635  L_194 = {0};
		m8375(&L_194, ((int32_t)1244159), ((int32_t)67437057), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f194 = L_194;
		t1635  L_195 = {0};
		m8375(&L_195, ((int32_t)1244415), ((int32_t)67437057), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f195 = L_195;
		t1635  L_196 = {0};
		m8375(&L_196, ((int32_t)1244671), ((int32_t)67437057), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f196 = L_196;
		t1635  L_197 = {0};
		m8375(&L_197, ((int32_t)1244927), ((int32_t)67437057), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f197 = L_197;
		t1635  L_198 = {0};
		m8375(&L_198, ((int32_t)1245183), ((int32_t)67437057), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f198 = L_198;
		t1635  L_199 = {0};
		m8375(&L_199, ((int32_t)1376510), ((int32_t)84215042), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f199 = L_199;
		t1635  L_200 = {0};
		m8375(&L_200, ((int32_t)34931198), ((int32_t)84215042), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f200 = L_200;
		t1635  L_201 = {0};
		m8375(&L_201, ((int32_t)34931454), ((int32_t)84215042), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f201 = L_201;
		t1635  L_202 = {0};
		m8375(&L_202, ((int32_t)34931710), ((int32_t)84215042), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f202 = L_202;
		t1635  L_203 = {0};
		m8375(&L_203, ((int32_t)34931966), ((int32_t)84215042), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f203 = L_203;
		t1635  L_204 = {0};
		m8375(&L_204, ((int32_t)34932222), ((int32_t)84215042), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f204 = L_204;
		t1635  L_205 = {0};
		m8375(&L_205, ((int32_t)1378046), ((int32_t)84149506), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f205 = L_205;
		t1635  L_206 = {0};
		m8375(&L_206, ((int32_t)169150462), ((int32_t)84149506), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f206 = L_206;
		t1635  L_207 = {0};
		m8375(&L_207, ((int32_t)1247742), ((int32_t)84804866), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f207 = L_207;
		t1635  L_208 = {0};
		m8375(&L_208, ((int32_t)1379070), ((int32_t)84804866), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f208 = L_208;
		t1635  L_209 = {0};
		m8375(&L_209, ((int32_t)17959934), ((int32_t)84804866), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f209 = L_209;
		t1635  L_210 = {0};
		m8375(&L_210, ((int32_t)1248510), ((int32_t)84804866), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f210 = L_210;
		t1635  L_211 = {0};
		m8375(&L_211, ((int32_t)1379838), ((int32_t)84804866), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f211 = L_211;
		t1635  L_212 = {0};
		m8375(&L_212, ((int32_t)17960702), ((int32_t)84804866), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f212 = L_212;
		t1635  L_213 = {0};
		m8375(&L_213, ((int32_t)51711998), ((int32_t)84215042), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f213 = L_213;
		t1635  L_214 = {0};
		m8375(&L_214, ((int32_t)51515902), ((int32_t)117769474), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f214 = L_214;
		t1635  L_215 = {0};
		m8375(&L_215, ((int32_t)1184510), ((int32_t)68158466), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f215 = L_215;
		t1635  L_216 = {0};
		m8375(&L_216, ((int32_t)1184766), ((int32_t)67437570), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f216 = L_216;
		t1635  L_217 = {0};
		m8375(&L_217, ((int32_t)1185022), ((int32_t)67437570), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f217 = L_217;
		t1635  L_218 = {0};
		m8375(&L_218, ((int32_t)51516926), ((int32_t)84738818), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f218 = L_218;
		t1635  L_219 = {0};
		m8375(&L_219, ((int32_t)1185534), ((int32_t)67961858), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f219 = L_219;
		t1635  L_220 = {0};
		m8375(&L_220, ((int32_t)118626302), ((int32_t)84215042), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f220 = L_220;
		t1635  L_221 = {0};
		m8375(&L_221, ((int32_t)118626558), ((int32_t)84215042), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f221 = L_221;
		t1635  L_222 = {0};
		m8375(&L_222, ((int32_t)1186558), ((int32_t)134546178), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f222 = L_222;
		t1635  L_223 = {0};
		m8375(&L_223, ((int32_t)1383678), ((int32_t)84739330), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f223 = L_223;
		t1635  L_224 = {0};
		m8375(&L_224, ((int32_t)18161150), ((int32_t)84215042), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f224 = L_224;
		t1635  L_225 = {0};
		m8375(&L_225, ((int32_t)1187582), ((int32_t)67437570), &m8375_MI);
		((t1647_SFs*)InitializedTypeInfo(&t1647_TI)->static_fields)->f225 = L_225;
		return;
	}
}
// Metadata Definition System.Reflection.Emit.OpCodes
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f0_FieldInfo = 
{
	"Nop", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f0), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f1_FieldInfo = 
{
	"Break", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f1), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f2_FieldInfo = 
{
	"Ldarg_0", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f2), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f3_FieldInfo = 
{
	"Ldarg_1", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f3), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f4_FieldInfo = 
{
	"Ldarg_2", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f4), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f5_FieldInfo = 
{
	"Ldarg_3", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f5), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f6_FieldInfo = 
{
	"Ldloc_0", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f6), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f7_FieldInfo = 
{
	"Ldloc_1", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f7), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f8_FieldInfo = 
{
	"Ldloc_2", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f8), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f9_FieldInfo = 
{
	"Ldloc_3", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f9), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f10_FieldInfo = 
{
	"Stloc_0", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f10), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f11_FieldInfo = 
{
	"Stloc_1", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f11), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f12_FieldInfo = 
{
	"Stloc_2", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f12), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f13_FieldInfo = 
{
	"Stloc_3", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f13), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f14_FieldInfo = 
{
	"Ldarg_S", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f14), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f15_FieldInfo = 
{
	"Ldarga_S", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f15), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f16_FieldInfo = 
{
	"Starg_S", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f16), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f17_FieldInfo = 
{
	"Ldloc_S", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f17), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f18_FieldInfo = 
{
	"Ldloca_S", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f18), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f19_FieldInfo = 
{
	"Stloc_S", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f19), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f20_FieldInfo = 
{
	"Ldnull", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f20), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f21_FieldInfo = 
{
	"Ldc_I4_M1", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f21), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f22_FieldInfo = 
{
	"Ldc_I4_0", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f22), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f23_FieldInfo = 
{
	"Ldc_I4_1", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f23), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f24_FieldInfo = 
{
	"Ldc_I4_2", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f24), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f25_FieldInfo = 
{
	"Ldc_I4_3", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f25), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f26_FieldInfo = 
{
	"Ldc_I4_4", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f26), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f27_FieldInfo = 
{
	"Ldc_I4_5", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f27), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f28_FieldInfo = 
{
	"Ldc_I4_6", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f28), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f29_FieldInfo = 
{
	"Ldc_I4_7", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f29), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f30_FieldInfo = 
{
	"Ldc_I4_8", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f30), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f31_FieldInfo = 
{
	"Ldc_I4_S", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f31), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f32_FieldInfo = 
{
	"Ldc_I4", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f32), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f33_FieldInfo = 
{
	"Ldc_I8", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f33), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f34_FieldInfo = 
{
	"Ldc_R4", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f34), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f35_FieldInfo = 
{
	"Ldc_R8", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f35), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f36_FieldInfo = 
{
	"Dup", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f36), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f37_FieldInfo = 
{
	"Pop", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f37), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f38_FieldInfo = 
{
	"Jmp", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f38), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f39_FieldInfo = 
{
	"Call", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f39), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f40_FieldInfo = 
{
	"Calli", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f40), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f41_FieldInfo = 
{
	"Ret", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f41), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f42_FieldInfo = 
{
	"Br_S", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f42), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f43_FieldInfo = 
{
	"Brfalse_S", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f43), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f44_FieldInfo = 
{
	"Brtrue_S", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f44), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f45_FieldInfo = 
{
	"Beq_S", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f45), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f46_FieldInfo = 
{
	"Bge_S", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f46), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f47_FieldInfo = 
{
	"Bgt_S", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f47), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f48_FieldInfo = 
{
	"Ble_S", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f48), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f49_FieldInfo = 
{
	"Blt_S", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f49), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f50_FieldInfo = 
{
	"Bne_Un_S", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f50), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f51_FieldInfo = 
{
	"Bge_Un_S", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f51), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f52_FieldInfo = 
{
	"Bgt_Un_S", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f52), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f53_FieldInfo = 
{
	"Ble_Un_S", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f53), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f54_FieldInfo = 
{
	"Blt_Un_S", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f54), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f55_FieldInfo = 
{
	"Br", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f55), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f56_FieldInfo = 
{
	"Brfalse", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f56), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f57_FieldInfo = 
{
	"Brtrue", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f57), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f58_FieldInfo = 
{
	"Beq", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f58), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f59_FieldInfo = 
{
	"Bge", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f59), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f60_FieldInfo = 
{
	"Bgt", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f60), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f61_FieldInfo = 
{
	"Ble", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f61), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f62_FieldInfo = 
{
	"Blt", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f62), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f63_FieldInfo = 
{
	"Bne_Un", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f63), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f64_FieldInfo = 
{
	"Bge_Un", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f64), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f65_FieldInfo = 
{
	"Bgt_Un", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f65), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f66_FieldInfo = 
{
	"Ble_Un", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f66), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f67_FieldInfo = 
{
	"Blt_Un", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f67), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f68_FieldInfo = 
{
	"Switch", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f68), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f69_FieldInfo = 
{
	"Ldind_I1", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f69), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f70_FieldInfo = 
{
	"Ldind_U1", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f70), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f71_FieldInfo = 
{
	"Ldind_I2", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f71), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f72_FieldInfo = 
{
	"Ldind_U2", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f72), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f73_FieldInfo = 
{
	"Ldind_I4", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f73), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f74_FieldInfo = 
{
	"Ldind_U4", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f74), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f75_FieldInfo = 
{
	"Ldind_I8", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f75), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f76_FieldInfo = 
{
	"Ldind_I", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f76), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f77_FieldInfo = 
{
	"Ldind_R4", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f77), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f78_FieldInfo = 
{
	"Ldind_R8", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f78), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f79_FieldInfo = 
{
	"Ldind_Ref", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f79), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f80_FieldInfo = 
{
	"Stind_Ref", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f80), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f81_FieldInfo = 
{
	"Stind_I1", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f81), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f82_FieldInfo = 
{
	"Stind_I2", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f82), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f83_FieldInfo = 
{
	"Stind_I4", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f83), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f84_FieldInfo = 
{
	"Stind_I8", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f84), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f85_FieldInfo = 
{
	"Stind_R4", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f85), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f86_FieldInfo = 
{
	"Stind_R8", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f86), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f87_FieldInfo = 
{
	"Add", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f87), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f88_FieldInfo = 
{
	"Sub", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f88), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f89_FieldInfo = 
{
	"Mul", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f89), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f90_FieldInfo = 
{
	"Div", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f90), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f91_FieldInfo = 
{
	"Div_Un", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f91), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f92_FieldInfo = 
{
	"Rem", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f92), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f93_FieldInfo = 
{
	"Rem_Un", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f93), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f94_FieldInfo = 
{
	"And", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f94), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f95_FieldInfo = 
{
	"Or", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f95), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f96_FieldInfo = 
{
	"Xor", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f96), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f97_FieldInfo = 
{
	"Shl", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f97), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f98_FieldInfo = 
{
	"Shr", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f98), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f99_FieldInfo = 
{
	"Shr_Un", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f99), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f100_FieldInfo = 
{
	"Neg", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f100), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f101_FieldInfo = 
{
	"Not", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f101), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f102_FieldInfo = 
{
	"Conv_I1", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f102), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f103_FieldInfo = 
{
	"Conv_I2", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f103), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f104_FieldInfo = 
{
	"Conv_I4", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f104), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f105_FieldInfo = 
{
	"Conv_I8", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f105), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f106_FieldInfo = 
{
	"Conv_R4", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f106), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f107_FieldInfo = 
{
	"Conv_R8", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f107), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f108_FieldInfo = 
{
	"Conv_U4", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f108), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f109_FieldInfo = 
{
	"Conv_U8", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f109), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f110_FieldInfo = 
{
	"Callvirt", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f110), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f111_FieldInfo = 
{
	"Cpobj", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f111), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f112_FieldInfo = 
{
	"Ldobj", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f112), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f113_FieldInfo = 
{
	"Ldstr", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f113), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f114_FieldInfo = 
{
	"Newobj", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f114), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
extern CustomAttributesCache t1647__CustomAttributeCache_Castclass;
FieldInfo t1647_f115_FieldInfo = 
{
	"Castclass", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f115), &t1647__CustomAttributeCache_Castclass};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f116_FieldInfo = 
{
	"Isinst", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f116), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f117_FieldInfo = 
{
	"Conv_R_Un", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f117), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f118_FieldInfo = 
{
	"Unbox", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f118), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f119_FieldInfo = 
{
	"Throw", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f119), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f120_FieldInfo = 
{
	"Ldfld", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f120), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f121_FieldInfo = 
{
	"Ldflda", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f121), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f122_FieldInfo = 
{
	"Stfld", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f122), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f123_FieldInfo = 
{
	"Ldsfld", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f123), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f124_FieldInfo = 
{
	"Ldsflda", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f124), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f125_FieldInfo = 
{
	"Stsfld", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f125), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f126_FieldInfo = 
{
	"Stobj", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f126), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f127_FieldInfo = 
{
	"Conv_Ovf_I1_Un", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f127), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f128_FieldInfo = 
{
	"Conv_Ovf_I2_Un", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f128), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f129_FieldInfo = 
{
	"Conv_Ovf_I4_Un", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f129), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f130_FieldInfo = 
{
	"Conv_Ovf_I8_Un", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f130), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f131_FieldInfo = 
{
	"Conv_Ovf_U1_Un", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f131), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f132_FieldInfo = 
{
	"Conv_Ovf_U2_Un", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f132), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f133_FieldInfo = 
{
	"Conv_Ovf_U4_Un", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f133), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f134_FieldInfo = 
{
	"Conv_Ovf_U8_Un", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f134), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f135_FieldInfo = 
{
	"Conv_Ovf_I_Un", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f135), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f136_FieldInfo = 
{
	"Conv_Ovf_U_Un", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f136), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f137_FieldInfo = 
{
	"Box", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f137), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f138_FieldInfo = 
{
	"Newarr", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f138), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f139_FieldInfo = 
{
	"Ldlen", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f139), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f140_FieldInfo = 
{
	"Ldelema", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f140), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f141_FieldInfo = 
{
	"Ldelem_I1", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f141), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f142_FieldInfo = 
{
	"Ldelem_U1", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f142), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f143_FieldInfo = 
{
	"Ldelem_I2", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f143), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f144_FieldInfo = 
{
	"Ldelem_U2", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f144), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f145_FieldInfo = 
{
	"Ldelem_I4", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f145), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f146_FieldInfo = 
{
	"Ldelem_U4", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f146), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f147_FieldInfo = 
{
	"Ldelem_I8", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f147), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f148_FieldInfo = 
{
	"Ldelem_I", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f148), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f149_FieldInfo = 
{
	"Ldelem_R4", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f149), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f150_FieldInfo = 
{
	"Ldelem_R8", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f150), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f151_FieldInfo = 
{
	"Ldelem_Ref", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f151), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f152_FieldInfo = 
{
	"Stelem_I", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f152), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f153_FieldInfo = 
{
	"Stelem_I1", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f153), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f154_FieldInfo = 
{
	"Stelem_I2", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f154), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f155_FieldInfo = 
{
	"Stelem_I4", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f155), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f156_FieldInfo = 
{
	"Stelem_I8", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f156), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f157_FieldInfo = 
{
	"Stelem_R4", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f157), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f158_FieldInfo = 
{
	"Stelem_R8", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f158), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f159_FieldInfo = 
{
	"Stelem_Ref", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f159), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f160_FieldInfo = 
{
	"Ldelem", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f160), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f161_FieldInfo = 
{
	"Stelem", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f161), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f162_FieldInfo = 
{
	"Unbox_Any", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f162), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f163_FieldInfo = 
{
	"Conv_Ovf_I1", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f163), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f164_FieldInfo = 
{
	"Conv_Ovf_U1", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f164), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f165_FieldInfo = 
{
	"Conv_Ovf_I2", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f165), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f166_FieldInfo = 
{
	"Conv_Ovf_U2", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f166), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f167_FieldInfo = 
{
	"Conv_Ovf_I4", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f167), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f168_FieldInfo = 
{
	"Conv_Ovf_U4", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f168), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f169_FieldInfo = 
{
	"Conv_Ovf_I8", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f169), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f170_FieldInfo = 
{
	"Conv_Ovf_U8", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f170), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f171_FieldInfo = 
{
	"Refanyval", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f171), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f172_FieldInfo = 
{
	"Ckfinite", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f172), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f173_FieldInfo = 
{
	"Mkrefany", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f173), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f174_FieldInfo = 
{
	"Ldtoken", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f174), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f175_FieldInfo = 
{
	"Conv_U2", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f175), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f176_FieldInfo = 
{
	"Conv_U1", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f176), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f177_FieldInfo = 
{
	"Conv_I", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f177), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f178_FieldInfo = 
{
	"Conv_Ovf_I", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f178), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f179_FieldInfo = 
{
	"Conv_Ovf_U", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f179), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f180_FieldInfo = 
{
	"Add_Ovf", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f180), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f181_FieldInfo = 
{
	"Add_Ovf_Un", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f181), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f182_FieldInfo = 
{
	"Mul_Ovf", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f182), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f183_FieldInfo = 
{
	"Mul_Ovf_Un", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f183), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f184_FieldInfo = 
{
	"Sub_Ovf", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f184), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f185_FieldInfo = 
{
	"Sub_Ovf_Un", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f185), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f186_FieldInfo = 
{
	"Endfinally", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f186), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f187_FieldInfo = 
{
	"Leave", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f187), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f188_FieldInfo = 
{
	"Leave_S", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f188), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f189_FieldInfo = 
{
	"Stind_I", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f189), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f190_FieldInfo = 
{
	"Conv_U", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f190), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f191_FieldInfo = 
{
	"Prefix7", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f191), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f192_FieldInfo = 
{
	"Prefix6", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f192), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f193_FieldInfo = 
{
	"Prefix5", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f193), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f194_FieldInfo = 
{
	"Prefix4", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f194), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f195_FieldInfo = 
{
	"Prefix3", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f195), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f196_FieldInfo = 
{
	"Prefix2", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f196), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f197_FieldInfo = 
{
	"Prefix1", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f197), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f198_FieldInfo = 
{
	"Prefixref", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f198), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f199_FieldInfo = 
{
	"Arglist", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f199), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f200_FieldInfo = 
{
	"Ceq", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f200), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f201_FieldInfo = 
{
	"Cgt", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f201), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f202_FieldInfo = 
{
	"Cgt_Un", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f202), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f203_FieldInfo = 
{
	"Clt", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f203), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f204_FieldInfo = 
{
	"Clt_Un", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f204), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f205_FieldInfo = 
{
	"Ldftn", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f205), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f206_FieldInfo = 
{
	"Ldvirtftn", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f206), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f207_FieldInfo = 
{
	"Ldarg", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f207), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f208_FieldInfo = 
{
	"Ldarga", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f208), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f209_FieldInfo = 
{
	"Starg", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f209), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f210_FieldInfo = 
{
	"Ldloc", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f210), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f211_FieldInfo = 
{
	"Ldloca", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f211), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f212_FieldInfo = 
{
	"Stloc", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f212), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f213_FieldInfo = 
{
	"Localloc", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f213), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f214_FieldInfo = 
{
	"Endfilter", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f214), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f215_FieldInfo = 
{
	"Unaligned", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f215), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f216_FieldInfo = 
{
	"Volatile", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f216), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f217_FieldInfo = 
{
	"Tailcall", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f217), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f218_FieldInfo = 
{
	"Initobj", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f218), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f219_FieldInfo = 
{
	"Constrained", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f219), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f220_FieldInfo = 
{
	"Cpblk", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f220), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f221_FieldInfo = 
{
	"Initblk", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f221), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f222_FieldInfo = 
{
	"Rethrow", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f222), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f223_FieldInfo = 
{
	"Sizeof", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f223), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f224_FieldInfo = 
{
	"Refanytype", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f224), &EmptyCustomAttributesCache};
extern Il2CppType t1635_0_0_54;
FieldInfo t1647_f225_FieldInfo = 
{
	"Readonly", &t1635_0_0_54, &t1647_TI, offsetof(t1647_SFs, f225), &EmptyCustomAttributesCache};
static FieldInfo* t1647_FIs[] =
{
	&t1647_f0_FieldInfo,
	&t1647_f1_FieldInfo,
	&t1647_f2_FieldInfo,
	&t1647_f3_FieldInfo,
	&t1647_f4_FieldInfo,
	&t1647_f5_FieldInfo,
	&t1647_f6_FieldInfo,
	&t1647_f7_FieldInfo,
	&t1647_f8_FieldInfo,
	&t1647_f9_FieldInfo,
	&t1647_f10_FieldInfo,
	&t1647_f11_FieldInfo,
	&t1647_f12_FieldInfo,
	&t1647_f13_FieldInfo,
	&t1647_f14_FieldInfo,
	&t1647_f15_FieldInfo,
	&t1647_f16_FieldInfo,
	&t1647_f17_FieldInfo,
	&t1647_f18_FieldInfo,
	&t1647_f19_FieldInfo,
	&t1647_f20_FieldInfo,
	&t1647_f21_FieldInfo,
	&t1647_f22_FieldInfo,
	&t1647_f23_FieldInfo,
	&t1647_f24_FieldInfo,
	&t1647_f25_FieldInfo,
	&t1647_f26_FieldInfo,
	&t1647_f27_FieldInfo,
	&t1647_f28_FieldInfo,
	&t1647_f29_FieldInfo,
	&t1647_f30_FieldInfo,
	&t1647_f31_FieldInfo,
	&t1647_f32_FieldInfo,
	&t1647_f33_FieldInfo,
	&t1647_f34_FieldInfo,
	&t1647_f35_FieldInfo,
	&t1647_f36_FieldInfo,
	&t1647_f37_FieldInfo,
	&t1647_f38_FieldInfo,
	&t1647_f39_FieldInfo,
	&t1647_f40_FieldInfo,
	&t1647_f41_FieldInfo,
	&t1647_f42_FieldInfo,
	&t1647_f43_FieldInfo,
	&t1647_f44_FieldInfo,
	&t1647_f45_FieldInfo,
	&t1647_f46_FieldInfo,
	&t1647_f47_FieldInfo,
	&t1647_f48_FieldInfo,
	&t1647_f49_FieldInfo,
	&t1647_f50_FieldInfo,
	&t1647_f51_FieldInfo,
	&t1647_f52_FieldInfo,
	&t1647_f53_FieldInfo,
	&t1647_f54_FieldInfo,
	&t1647_f55_FieldInfo,
	&t1647_f56_FieldInfo,
	&t1647_f57_FieldInfo,
	&t1647_f58_FieldInfo,
	&t1647_f59_FieldInfo,
	&t1647_f60_FieldInfo,
	&t1647_f61_FieldInfo,
	&t1647_f62_FieldInfo,
	&t1647_f63_FieldInfo,
	&t1647_f64_FieldInfo,
	&t1647_f65_FieldInfo,
	&t1647_f66_FieldInfo,
	&t1647_f67_FieldInfo,
	&t1647_f68_FieldInfo,
	&t1647_f69_FieldInfo,
	&t1647_f70_FieldInfo,
	&t1647_f71_FieldInfo,
	&t1647_f72_FieldInfo,
	&t1647_f73_FieldInfo,
	&t1647_f74_FieldInfo,
	&t1647_f75_FieldInfo,
	&t1647_f76_FieldInfo,
	&t1647_f77_FieldInfo,
	&t1647_f78_FieldInfo,
	&t1647_f79_FieldInfo,
	&t1647_f80_FieldInfo,
	&t1647_f81_FieldInfo,
	&t1647_f82_FieldInfo,
	&t1647_f83_FieldInfo,
	&t1647_f84_FieldInfo,
	&t1647_f85_FieldInfo,
	&t1647_f86_FieldInfo,
	&t1647_f87_FieldInfo,
	&t1647_f88_FieldInfo,
	&t1647_f89_FieldInfo,
	&t1647_f90_FieldInfo,
	&t1647_f91_FieldInfo,
	&t1647_f92_FieldInfo,
	&t1647_f93_FieldInfo,
	&t1647_f94_FieldInfo,
	&t1647_f95_FieldInfo,
	&t1647_f96_FieldInfo,
	&t1647_f97_FieldInfo,
	&t1647_f98_FieldInfo,
	&t1647_f99_FieldInfo,
	&t1647_f100_FieldInfo,
	&t1647_f101_FieldInfo,
	&t1647_f102_FieldInfo,
	&t1647_f103_FieldInfo,
	&t1647_f104_FieldInfo,
	&t1647_f105_FieldInfo,
	&t1647_f106_FieldInfo,
	&t1647_f107_FieldInfo,
	&t1647_f108_FieldInfo,
	&t1647_f109_FieldInfo,
	&t1647_f110_FieldInfo,
	&t1647_f111_FieldInfo,
	&t1647_f112_FieldInfo,
	&t1647_f113_FieldInfo,
	&t1647_f114_FieldInfo,
	&t1647_f115_FieldInfo,
	&t1647_f116_FieldInfo,
	&t1647_f117_FieldInfo,
	&t1647_f118_FieldInfo,
	&t1647_f119_FieldInfo,
	&t1647_f120_FieldInfo,
	&t1647_f121_FieldInfo,
	&t1647_f122_FieldInfo,
	&t1647_f123_FieldInfo,
	&t1647_f124_FieldInfo,
	&t1647_f125_FieldInfo,
	&t1647_f126_FieldInfo,
	&t1647_f127_FieldInfo,
	&t1647_f128_FieldInfo,
	&t1647_f129_FieldInfo,
	&t1647_f130_FieldInfo,
	&t1647_f131_FieldInfo,
	&t1647_f132_FieldInfo,
	&t1647_f133_FieldInfo,
	&t1647_f134_FieldInfo,
	&t1647_f135_FieldInfo,
	&t1647_f136_FieldInfo,
	&t1647_f137_FieldInfo,
	&t1647_f138_FieldInfo,
	&t1647_f139_FieldInfo,
	&t1647_f140_FieldInfo,
	&t1647_f141_FieldInfo,
	&t1647_f142_FieldInfo,
	&t1647_f143_FieldInfo,
	&t1647_f144_FieldInfo,
	&t1647_f145_FieldInfo,
	&t1647_f146_FieldInfo,
	&t1647_f147_FieldInfo,
	&t1647_f148_FieldInfo,
	&t1647_f149_FieldInfo,
	&t1647_f150_FieldInfo,
	&t1647_f151_FieldInfo,
	&t1647_f152_FieldInfo,
	&t1647_f153_FieldInfo,
	&t1647_f154_FieldInfo,
	&t1647_f155_FieldInfo,
	&t1647_f156_FieldInfo,
	&t1647_f157_FieldInfo,
	&t1647_f158_FieldInfo,
	&t1647_f159_FieldInfo,
	&t1647_f160_FieldInfo,
	&t1647_f161_FieldInfo,
	&t1647_f162_FieldInfo,
	&t1647_f163_FieldInfo,
	&t1647_f164_FieldInfo,
	&t1647_f165_FieldInfo,
	&t1647_f166_FieldInfo,
	&t1647_f167_FieldInfo,
	&t1647_f168_FieldInfo,
	&t1647_f169_FieldInfo,
	&t1647_f170_FieldInfo,
	&t1647_f171_FieldInfo,
	&t1647_f172_FieldInfo,
	&t1647_f173_FieldInfo,
	&t1647_f174_FieldInfo,
	&t1647_f175_FieldInfo,
	&t1647_f176_FieldInfo,
	&t1647_f177_FieldInfo,
	&t1647_f178_FieldInfo,
	&t1647_f179_FieldInfo,
	&t1647_f180_FieldInfo,
	&t1647_f181_FieldInfo,
	&t1647_f182_FieldInfo,
	&t1647_f183_FieldInfo,
	&t1647_f184_FieldInfo,
	&t1647_f185_FieldInfo,
	&t1647_f186_FieldInfo,
	&t1647_f187_FieldInfo,
	&t1647_f188_FieldInfo,
	&t1647_f189_FieldInfo,
	&t1647_f190_FieldInfo,
	&t1647_f191_FieldInfo,
	&t1647_f192_FieldInfo,
	&t1647_f193_FieldInfo,
	&t1647_f194_FieldInfo,
	&t1647_f195_FieldInfo,
	&t1647_f196_FieldInfo,
	&t1647_f197_FieldInfo,
	&t1647_f198_FieldInfo,
	&t1647_f199_FieldInfo,
	&t1647_f200_FieldInfo,
	&t1647_f201_FieldInfo,
	&t1647_f202_FieldInfo,
	&t1647_f203_FieldInfo,
	&t1647_f204_FieldInfo,
	&t1647_f205_FieldInfo,
	&t1647_f206_FieldInfo,
	&t1647_f207_FieldInfo,
	&t1647_f208_FieldInfo,
	&t1647_f209_FieldInfo,
	&t1647_f210_FieldInfo,
	&t1647_f211_FieldInfo,
	&t1647_f212_FieldInfo,
	&t1647_f213_FieldInfo,
	&t1647_f214_FieldInfo,
	&t1647_f215_FieldInfo,
	&t1647_f216_FieldInfo,
	&t1647_f217_FieldInfo,
	&t1647_f218_FieldInfo,
	&t1647_f219_FieldInfo,
	&t1647_f220_FieldInfo,
	&t1647_f221_FieldInfo,
	&t1647_f222_FieldInfo,
	&t1647_f223_FieldInfo,
	&t1647_f224_FieldInfo,
	&t1647_f225_FieldInfo,
	NULL
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m8387_MI = 
{
	".cctor", (methodPointerType)&m8387, &t1647_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 3108, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1647_MIs[] =
{
	&m8387_MI,
	NULL
};
static MethodInfo* t1647_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
};
void t1647_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t576 * tmp;
		tmp = (t576 *)il2cpp_codegen_object_new (&t576_TI);
		m2699(tmp, true, &m2699_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t1647_CustomAttributesCacheGenerator_Castclass(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t576 * tmp;
		tmp = (t576 *)il2cpp_codegen_object_new (&t576_TI);
		m2699(tmp, true, &m2699_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1647__CustomAttributeCache = {
1,
NULL,
&t1647_CustomAttributesCacheGenerator
};
CustomAttributesCache t1647__CustomAttributeCache_Castclass = {
1,
NULL,
&t1647_CustomAttributesCacheGenerator_Castclass
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1647_0_0_0;
extern Il2CppType t1647_1_0_0;
struct t1647;
extern CustomAttributesCache t1647__CustomAttributeCache;
extern CustomAttributesCache t1647__CustomAttributeCache_Castclass;
TypeInfo t1647_TI = 
{
	&g_mscorlib_dll_Image, NULL, "OpCodes", "System.Reflection.Emit", t1647_MIs, NULL, t1647_FIs, NULL, &t5_TI, NULL, NULL, &t1647_TI, NULL, t1647_VT, &t1647__CustomAttributeCache, &t1647_TI, &t1647_0_0_0, &t1647_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1647), 0, -1, sizeof(t1647_SFs), 0, -1, 1048577, 0, false, false, false, false, false, false, false, false, false, true, false, false, 1, 0, 226, 0, 0, 4, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1644_TI;
#include "t1644MD.h"



// Metadata Definition System.Reflection.Emit.OperandType
extern Il2CppType t110_0_0_1542;
FieldInfo t1644_f1_FieldInfo = 
{
	"value__", &t110_0_0_1542, &t1644_TI, offsetof(t1644, f1) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t1644_0_0_32854;
FieldInfo t1644_f2_FieldInfo = 
{
	"InlineBrTarget", &t1644_0_0_32854, &t1644_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1644_0_0_32854;
FieldInfo t1644_f3_FieldInfo = 
{
	"InlineField", &t1644_0_0_32854, &t1644_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1644_0_0_32854;
FieldInfo t1644_f4_FieldInfo = 
{
	"InlineI", &t1644_0_0_32854, &t1644_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1644_0_0_32854;
FieldInfo t1644_f5_FieldInfo = 
{
	"InlineI8", &t1644_0_0_32854, &t1644_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1644_0_0_32854;
FieldInfo t1644_f6_FieldInfo = 
{
	"InlineMethod", &t1644_0_0_32854, &t1644_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1644_0_0_32854;
FieldInfo t1644_f7_FieldInfo = 
{
	"InlineNone", &t1644_0_0_32854, &t1644_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1644_0_0_32854;
extern CustomAttributesCache t1644__CustomAttributeCache_InlinePhi;
FieldInfo t1644_f8_FieldInfo = 
{
	"InlinePhi", &t1644_0_0_32854, &t1644_TI, 0 /*field is const -> no data*/, &t1644__CustomAttributeCache_InlinePhi};
extern Il2CppType t1644_0_0_32854;
FieldInfo t1644_f9_FieldInfo = 
{
	"InlineR", &t1644_0_0_32854, &t1644_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1644_0_0_32854;
FieldInfo t1644_f10_FieldInfo = 
{
	"InlineSig", &t1644_0_0_32854, &t1644_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1644_0_0_32854;
FieldInfo t1644_f11_FieldInfo = 
{
	"InlineString", &t1644_0_0_32854, &t1644_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1644_0_0_32854;
FieldInfo t1644_f12_FieldInfo = 
{
	"InlineSwitch", &t1644_0_0_32854, &t1644_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1644_0_0_32854;
FieldInfo t1644_f13_FieldInfo = 
{
	"InlineTok", &t1644_0_0_32854, &t1644_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1644_0_0_32854;
FieldInfo t1644_f14_FieldInfo = 
{
	"InlineType", &t1644_0_0_32854, &t1644_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1644_0_0_32854;
FieldInfo t1644_f15_FieldInfo = 
{
	"InlineVar", &t1644_0_0_32854, &t1644_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1644_0_0_32854;
FieldInfo t1644_f16_FieldInfo = 
{
	"ShortInlineBrTarget", &t1644_0_0_32854, &t1644_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1644_0_0_32854;
FieldInfo t1644_f17_FieldInfo = 
{
	"ShortInlineI", &t1644_0_0_32854, &t1644_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1644_0_0_32854;
FieldInfo t1644_f18_FieldInfo = 
{
	"ShortInlineR", &t1644_0_0_32854, &t1644_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1644_0_0_32854;
FieldInfo t1644_f19_FieldInfo = 
{
	"ShortInlineVar", &t1644_0_0_32854, &t1644_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t1644_FIs[] =
{
	&t1644_f1_FieldInfo,
	&t1644_f2_FieldInfo,
	&t1644_f3_FieldInfo,
	&t1644_f4_FieldInfo,
	&t1644_f5_FieldInfo,
	&t1644_f6_FieldInfo,
	&t1644_f7_FieldInfo,
	&t1644_f8_FieldInfo,
	&t1644_f9_FieldInfo,
	&t1644_f10_FieldInfo,
	&t1644_f11_FieldInfo,
	&t1644_f12_FieldInfo,
	&t1644_f13_FieldInfo,
	&t1644_f14_FieldInfo,
	&t1644_f15_FieldInfo,
	&t1644_f16_FieldInfo,
	&t1644_f17_FieldInfo,
	&t1644_f18_FieldInfo,
	&t1644_f19_FieldInfo,
	NULL
};
static const int32_t t1644_f2_DefaultValueData = 0;
static Il2CppFieldDefaultValueEntry t1644_f2_DefaultValue = 
{
	&t1644_f2_FieldInfo, { (char*)&t1644_f2_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1644_f3_DefaultValueData = 1;
static Il2CppFieldDefaultValueEntry t1644_f3_DefaultValue = 
{
	&t1644_f3_FieldInfo, { (char*)&t1644_f3_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1644_f4_DefaultValueData = 2;
static Il2CppFieldDefaultValueEntry t1644_f4_DefaultValue = 
{
	&t1644_f4_FieldInfo, { (char*)&t1644_f4_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1644_f5_DefaultValueData = 3;
static Il2CppFieldDefaultValueEntry t1644_f5_DefaultValue = 
{
	&t1644_f5_FieldInfo, { (char*)&t1644_f5_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1644_f6_DefaultValueData = 4;
static Il2CppFieldDefaultValueEntry t1644_f6_DefaultValue = 
{
	&t1644_f6_FieldInfo, { (char*)&t1644_f6_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1644_f7_DefaultValueData = 5;
static Il2CppFieldDefaultValueEntry t1644_f7_DefaultValue = 
{
	&t1644_f7_FieldInfo, { (char*)&t1644_f7_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1644_f8_DefaultValueData = 6;
static Il2CppFieldDefaultValueEntry t1644_f8_DefaultValue = 
{
	&t1644_f8_FieldInfo, { (char*)&t1644_f8_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1644_f9_DefaultValueData = 7;
static Il2CppFieldDefaultValueEntry t1644_f9_DefaultValue = 
{
	&t1644_f9_FieldInfo, { (char*)&t1644_f9_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1644_f10_DefaultValueData = 9;
static Il2CppFieldDefaultValueEntry t1644_f10_DefaultValue = 
{
	&t1644_f10_FieldInfo, { (char*)&t1644_f10_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1644_f11_DefaultValueData = 10;
static Il2CppFieldDefaultValueEntry t1644_f11_DefaultValue = 
{
	&t1644_f11_FieldInfo, { (char*)&t1644_f11_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1644_f12_DefaultValueData = 11;
static Il2CppFieldDefaultValueEntry t1644_f12_DefaultValue = 
{
	&t1644_f12_FieldInfo, { (char*)&t1644_f12_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1644_f13_DefaultValueData = 12;
static Il2CppFieldDefaultValueEntry t1644_f13_DefaultValue = 
{
	&t1644_f13_FieldInfo, { (char*)&t1644_f13_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1644_f14_DefaultValueData = 13;
static Il2CppFieldDefaultValueEntry t1644_f14_DefaultValue = 
{
	&t1644_f14_FieldInfo, { (char*)&t1644_f14_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1644_f15_DefaultValueData = 14;
static Il2CppFieldDefaultValueEntry t1644_f15_DefaultValue = 
{
	&t1644_f15_FieldInfo, { (char*)&t1644_f15_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1644_f16_DefaultValueData = 15;
static Il2CppFieldDefaultValueEntry t1644_f16_DefaultValue = 
{
	&t1644_f16_FieldInfo, { (char*)&t1644_f16_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1644_f17_DefaultValueData = 16;
static Il2CppFieldDefaultValueEntry t1644_f17_DefaultValue = 
{
	&t1644_f17_FieldInfo, { (char*)&t1644_f17_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1644_f18_DefaultValueData = 17;
static Il2CppFieldDefaultValueEntry t1644_f18_DefaultValue = 
{
	&t1644_f18_FieldInfo, { (char*)&t1644_f18_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1644_f19_DefaultValueData = 18;
static Il2CppFieldDefaultValueEntry t1644_f19_DefaultValue = 
{
	&t1644_f19_FieldInfo, { (char*)&t1644_f19_DefaultValueData, &t110_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t1644_FDVs[] = 
{
	&t1644_f2_DefaultValue,
	&t1644_f3_DefaultValue,
	&t1644_f4_DefaultValue,
	&t1644_f5_DefaultValue,
	&t1644_f6_DefaultValue,
	&t1644_f7_DefaultValue,
	&t1644_f8_DefaultValue,
	&t1644_f9_DefaultValue,
	&t1644_f10_DefaultValue,
	&t1644_f11_DefaultValue,
	&t1644_f12_DefaultValue,
	&t1644_f13_DefaultValue,
	&t1644_f14_DefaultValue,
	&t1644_f15_DefaultValue,
	&t1644_f16_DefaultValue,
	&t1644_f17_DefaultValue,
	&t1644_f18_DefaultValue,
	&t1644_f19_DefaultValue,
	NULL
};
static MethodInfo* t1644_MIs[] =
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
static MethodInfo* t1644_VT[] =
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
static Il2CppInterfaceOffsetPair t1644_IOs[] = 
{
	{ &t120_TI, 4},
	{ &t121_TI, 5},
	{ &t122_TI, 21},
};
void t1644_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
void t1644_CustomAttributesCacheGenerator_InlinePhi(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t475 * tmp;
		tmp = (t475 *)il2cpp_codegen_object_new (&t475_TI);
		m3484(tmp, il2cpp_codegen_string_new_wrapper("This API has been deprecated."), &m3484_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1644__CustomAttributeCache = {
1,
NULL,
&t1644_CustomAttributesCacheGenerator
};
CustomAttributesCache t1644__CustomAttributeCache_InlinePhi = {
1,
NULL,
&t1644_CustomAttributesCacheGenerator_InlinePhi
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1644_0_0_0;
extern Il2CppType t1644_1_0_0;
extern TypeInfo t18_TI;
extern CustomAttributesCache t1644__CustomAttributeCache;
extern CustomAttributesCache t1644__CustomAttributeCache_InlinePhi;
TypeInfo t1644_TI = 
{
	&g_mscorlib_dll_Image, NULL, "OperandType", "System.Reflection.Emit", t1644_MIs, NULL, t1644_FIs, NULL, &t18_TI, NULL, NULL, &t110_TI, NULL, t1644_VT, &t1644__CustomAttributeCache, &t110_TI, &t1644_0_0_0, &t1644_1_0_0, t1644_IOs, NULL, NULL, t1644_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1644)+ sizeof (Il2CppObject), sizeof (int32_t), sizeof(int32_t), 0, 0, -1, 8449, 0, true, false, false, true, false, false, false, false, false, false, false, false, 0, 0, 19, 0, 0, 23, 0, 3};
#include "t1605.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1605_TI;
#include "t1605MD.h"



// Metadata Definition System.Reflection.Emit.PEFileKinds
extern Il2CppType t110_0_0_1542;
FieldInfo t1605_f1_FieldInfo = 
{
	"value__", &t110_0_0_1542, &t1605_TI, offsetof(t1605, f1) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t1605_0_0_32854;
FieldInfo t1605_f2_FieldInfo = 
{
	"Dll", &t1605_0_0_32854, &t1605_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1605_0_0_32854;
FieldInfo t1605_f3_FieldInfo = 
{
	"ConsoleApplication", &t1605_0_0_32854, &t1605_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1605_0_0_32854;
FieldInfo t1605_f4_FieldInfo = 
{
	"WindowApplication", &t1605_0_0_32854, &t1605_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t1605_FIs[] =
{
	&t1605_f1_FieldInfo,
	&t1605_f2_FieldInfo,
	&t1605_f3_FieldInfo,
	&t1605_f4_FieldInfo,
	NULL
};
static const int32_t t1605_f2_DefaultValueData = 1;
static Il2CppFieldDefaultValueEntry t1605_f2_DefaultValue = 
{
	&t1605_f2_FieldInfo, { (char*)&t1605_f2_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1605_f3_DefaultValueData = 2;
static Il2CppFieldDefaultValueEntry t1605_f3_DefaultValue = 
{
	&t1605_f3_FieldInfo, { (char*)&t1605_f3_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1605_f4_DefaultValueData = 3;
static Il2CppFieldDefaultValueEntry t1605_f4_DefaultValue = 
{
	&t1605_f4_FieldInfo, { (char*)&t1605_f4_DefaultValueData, &t110_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t1605_FDVs[] = 
{
	&t1605_f2_DefaultValue,
	&t1605_f3_DefaultValue,
	&t1605_f4_DefaultValue,
	NULL
};
static MethodInfo* t1605_MIs[] =
{
	NULL
};
static MethodInfo* t1605_VT[] =
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
static Il2CppInterfaceOffsetPair t1605_IOs[] = 
{
	{ &t120_TI, 4},
	{ &t121_TI, 5},
	{ &t122_TI, 21},
};
void t1605_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t576 * tmp;
		tmp = (t576 *)il2cpp_codegen_object_new (&t576_TI);
		m2699(tmp, true, &m2699_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1605__CustomAttributeCache = {
1,
NULL,
&t1605_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1605_0_0_0;
extern Il2CppType t1605_1_0_0;
extern CustomAttributesCache t1605__CustomAttributeCache;
TypeInfo t1605_TI = 
{
	&g_mscorlib_dll_Image, NULL, "PEFileKinds", "System.Reflection.Emit", t1605_MIs, NULL, t1605_FIs, NULL, &t18_TI, NULL, NULL, &t110_TI, NULL, t1605_VT, &t1605__CustomAttributeCache, &t110_TI, &t1605_0_0_0, &t1605_1_0_0, t1605_IOs, NULL, NULL, t1605_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1605)+ sizeof (Il2CppObject), sizeof (int32_t), sizeof(int32_t), 0, 0, -1, 8449, 0, true, false, false, true, false, false, false, false, false, false, false, false, 0, 0, 4, 0, 0, 23, 0, 3};
#include "t1643.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1643_TI;
#include "t1643MD.h"



// Metadata Definition System.Reflection.Emit.PackingSize
extern Il2CppType t110_0_0_1542;
FieldInfo t1643_f1_FieldInfo = 
{
	"value__", &t110_0_0_1542, &t1643_TI, offsetof(t1643, f1) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t1643_0_0_32854;
FieldInfo t1643_f2_FieldInfo = 
{
	"Unspecified", &t1643_0_0_32854, &t1643_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1643_0_0_32854;
FieldInfo t1643_f3_FieldInfo = 
{
	"Size1", &t1643_0_0_32854, &t1643_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1643_0_0_32854;
FieldInfo t1643_f4_FieldInfo = 
{
	"Size2", &t1643_0_0_32854, &t1643_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1643_0_0_32854;
FieldInfo t1643_f5_FieldInfo = 
{
	"Size4", &t1643_0_0_32854, &t1643_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1643_0_0_32854;
FieldInfo t1643_f6_FieldInfo = 
{
	"Size8", &t1643_0_0_32854, &t1643_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1643_0_0_32854;
FieldInfo t1643_f7_FieldInfo = 
{
	"Size16", &t1643_0_0_32854, &t1643_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1643_0_0_32854;
FieldInfo t1643_f8_FieldInfo = 
{
	"Size32", &t1643_0_0_32854, &t1643_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1643_0_0_32854;
FieldInfo t1643_f9_FieldInfo = 
{
	"Size64", &t1643_0_0_32854, &t1643_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1643_0_0_32854;
FieldInfo t1643_f10_FieldInfo = 
{
	"Size128", &t1643_0_0_32854, &t1643_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t1643_FIs[] =
{
	&t1643_f1_FieldInfo,
	&t1643_f2_FieldInfo,
	&t1643_f3_FieldInfo,
	&t1643_f4_FieldInfo,
	&t1643_f5_FieldInfo,
	&t1643_f6_FieldInfo,
	&t1643_f7_FieldInfo,
	&t1643_f8_FieldInfo,
	&t1643_f9_FieldInfo,
	&t1643_f10_FieldInfo,
	NULL
};
static const int32_t t1643_f2_DefaultValueData = 0;
static Il2CppFieldDefaultValueEntry t1643_f2_DefaultValue = 
{
	&t1643_f2_FieldInfo, { (char*)&t1643_f2_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1643_f3_DefaultValueData = 1;
static Il2CppFieldDefaultValueEntry t1643_f3_DefaultValue = 
{
	&t1643_f3_FieldInfo, { (char*)&t1643_f3_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1643_f4_DefaultValueData = 2;
static Il2CppFieldDefaultValueEntry t1643_f4_DefaultValue = 
{
	&t1643_f4_FieldInfo, { (char*)&t1643_f4_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1643_f5_DefaultValueData = 4;
static Il2CppFieldDefaultValueEntry t1643_f5_DefaultValue = 
{
	&t1643_f5_FieldInfo, { (char*)&t1643_f5_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1643_f6_DefaultValueData = 8;
static Il2CppFieldDefaultValueEntry t1643_f6_DefaultValue = 
{
	&t1643_f6_FieldInfo, { (char*)&t1643_f6_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1643_f7_DefaultValueData = 16;
static Il2CppFieldDefaultValueEntry t1643_f7_DefaultValue = 
{
	&t1643_f7_FieldInfo, { (char*)&t1643_f7_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1643_f8_DefaultValueData = 32;
static Il2CppFieldDefaultValueEntry t1643_f8_DefaultValue = 
{
	&t1643_f8_FieldInfo, { (char*)&t1643_f8_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1643_f9_DefaultValueData = 64;
static Il2CppFieldDefaultValueEntry t1643_f9_DefaultValue = 
{
	&t1643_f9_FieldInfo, { (char*)&t1643_f9_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1643_f10_DefaultValueData = 128;
static Il2CppFieldDefaultValueEntry t1643_f10_DefaultValue = 
{
	&t1643_f10_FieldInfo, { (char*)&t1643_f10_DefaultValueData, &t110_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t1643_FDVs[] = 
{
	&t1643_f2_DefaultValue,
	&t1643_f3_DefaultValue,
	&t1643_f4_DefaultValue,
	&t1643_f5_DefaultValue,
	&t1643_f6_DefaultValue,
	&t1643_f7_DefaultValue,
	&t1643_f8_DefaultValue,
	&t1643_f9_DefaultValue,
	&t1643_f10_DefaultValue,
	NULL
};
static MethodInfo* t1643_MIs[] =
{
	NULL
};
static MethodInfo* t1643_VT[] =
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
static Il2CppInterfaceOffsetPair t1643_IOs[] = 
{
	{ &t120_TI, 4},
	{ &t121_TI, 5},
	{ &t122_TI, 21},
};
void t1643_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t576 * tmp;
		tmp = (t576 *)il2cpp_codegen_object_new (&t576_TI);
		m2699(tmp, true, &m2699_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1643__CustomAttributeCache = {
1,
NULL,
&t1643_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1643_0_0_0;
extern Il2CppType t1643_1_0_0;
extern CustomAttributesCache t1643__CustomAttributeCache;
TypeInfo t1643_TI = 
{
	&g_mscorlib_dll_Image, NULL, "PackingSize", "System.Reflection.Emit", t1643_MIs, NULL, t1643_FIs, NULL, &t18_TI, NULL, NULL, &t110_TI, NULL, t1643_VT, &t1643__CustomAttributeCache, &t110_TI, &t1643_0_0_0, &t1643_1_0_0, t1643_IOs, NULL, NULL, t1643_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1643)+ sizeof (Il2CppObject), sizeof (int32_t), sizeof(int32_t), 0, 0, -1, 8449, 0, true, false, false, true, false, false, false, false, false, false, false, false, 0, 0, 10, 0, 0, 23, 0, 3};
#include "t1648.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1648_TI;
#include "t1648MD.h"

#include "t1649.h"


extern MethodInfo m8388_MI;
 int32_t m8388 (t1648 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->f1);
		return L_0;
	}
}
extern MethodInfo m8389_MI;
 t11* m8389 (t1648 * __this, MethodInfo* method){
	{
		t11* L_0 = (__this->f0);
		return L_0;
	}
}
extern MethodInfo m8390_MI;
 int32_t m8390 (t1648 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->f2);
		return L_0;
	}
}
// Metadata Definition System.Reflection.Emit.ParameterBuilder
extern Il2CppType t11_0_0_1;
FieldInfo t1648_f0_FieldInfo = 
{
	"name", &t11_0_0_1, &t1648_TI, offsetof(t1648, f0), &EmptyCustomAttributesCache};
extern Il2CppType t1649_0_0_1;
FieldInfo t1648_f1_FieldInfo = 
{
	"attrs", &t1649_0_0_1, &t1648_TI, offsetof(t1648, f1), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t1648_f2_FieldInfo = 
{
	"position", &t110_0_0_1, &t1648_TI, offsetof(t1648, f2), &EmptyCustomAttributesCache};
static FieldInfo* t1648_FIs[] =
{
	&t1648_f0_FieldInfo,
	&t1648_f1_FieldInfo,
	&t1648_f2_FieldInfo,
	NULL
};
static PropertyInfo t1648____Attributes_PropertyInfo = 
{
	&t1648_TI, "Attributes", &m8388_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1648____Name_PropertyInfo = 
{
	&t1648_TI, "Name", &m8389_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1648____Position_PropertyInfo = 
{
	&t1648_TI, "Position", &m8390_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1648_PIs[] =
{
	&t1648____Attributes_PropertyInfo,
	&t1648____Name_PropertyInfo,
	&t1648____Position_PropertyInfo,
	NULL
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m8388_MI = 
{
	"get_Attributes", (methodPointerType)&m8388, &t1648_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 2502, 0, 4, 0, false, false, 3109, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t11_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8389_MI = 
{
	"get_Name", (methodPointerType)&m8389, &t1648_TI, &t11_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2502, 0, 5, 0, false, false, 3110, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m8390_MI = 
{
	"get_Position", (methodPointerType)&m8390, &t1648_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 2502, 0, 6, 0, false, false, 3111, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1648_MIs[] =
{
	&m8388_MI,
	&m8389_MI,
	&m8390_MI,
	NULL
};
static MethodInfo* t1648_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m8388_MI,
	&m8389_MI,
	&m8390_MI,
};
extern TypeInfo t2353_TI;
static TypeInfo* t1648_ITIs[] = 
{
	&t2353_TI,
};
static Il2CppInterfaceOffsetPair t1648_IOs[] = 
{
	{ &t2353_TI, 4},
};
extern TypeInfo t1697_TI;
#include "t1697.h"
#include "t1697MD.h"
extern MethodInfo m8786_MI;
extern TypeInfo t1699_TI;
#include "t1699.h"
#include "t1699MD.h"
extern MethodInfo m8787_MI;
void t1648_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t1697 * tmp;
		tmp = (t1697 *)il2cpp_codegen_object_new (&t1697_TI);
		m8786(tmp, 0, &m8786_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t1699 * tmp;
		tmp = (t1699 *)il2cpp_codegen_object_new (&t1699_TI);
		m8787(tmp, il2cpp_codegen_type_get_object(InitializedTypeInfo(&t2353_TI)), &m8787_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		t576 * tmp;
		tmp = (t576 *)il2cpp_codegen_object_new (&t576_TI);
		m2699(tmp, true, &m2699_MI);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1648__CustomAttributeCache = {
3,
NULL,
&t1648_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1648_0_0_0;
extern Il2CppType t1648_1_0_0;
struct t1648;
extern CustomAttributesCache t1648__CustomAttributeCache;
TypeInfo t1648_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ParameterBuilder", "System.Reflection.Emit", t1648_MIs, t1648_PIs, t1648_FIs, NULL, &t5_TI, NULL, NULL, &t1648_TI, t1648_ITIs, t1648_VT, &t1648__CustomAttributeCache, &t1648_TI, &t1648_0_0_0, &t1648_1_0_0, t1648_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1648), 0, -1, 0, 0, -1, 1048577, 0, false, false, false, false, false, false, false, false, false, false, false, false, 3, 3, 3, 0, 0, 7, 1, 1};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1645_TI;
#include "t1645MD.h"



// Metadata Definition System.Reflection.Emit.StackBehaviour
extern Il2CppType t110_0_0_1542;
FieldInfo t1645_f1_FieldInfo = 
{
	"value__", &t110_0_0_1542, &t1645_TI, offsetof(t1645, f1) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t1645_0_0_32854;
FieldInfo t1645_f2_FieldInfo = 
{
	"Pop0", &t1645_0_0_32854, &t1645_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1645_0_0_32854;
FieldInfo t1645_f3_FieldInfo = 
{
	"Pop1", &t1645_0_0_32854, &t1645_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1645_0_0_32854;
FieldInfo t1645_f4_FieldInfo = 
{
	"Pop1_pop1", &t1645_0_0_32854, &t1645_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1645_0_0_32854;
FieldInfo t1645_f5_FieldInfo = 
{
	"Popi", &t1645_0_0_32854, &t1645_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1645_0_0_32854;
FieldInfo t1645_f6_FieldInfo = 
{
	"Popi_pop1", &t1645_0_0_32854, &t1645_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1645_0_0_32854;
FieldInfo t1645_f7_FieldInfo = 
{
	"Popi_popi", &t1645_0_0_32854, &t1645_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1645_0_0_32854;
FieldInfo t1645_f8_FieldInfo = 
{
	"Popi_popi8", &t1645_0_0_32854, &t1645_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1645_0_0_32854;
FieldInfo t1645_f9_FieldInfo = 
{
	"Popi_popi_popi", &t1645_0_0_32854, &t1645_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1645_0_0_32854;
FieldInfo t1645_f10_FieldInfo = 
{
	"Popi_popr4", &t1645_0_0_32854, &t1645_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1645_0_0_32854;
FieldInfo t1645_f11_FieldInfo = 
{
	"Popi_popr8", &t1645_0_0_32854, &t1645_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1645_0_0_32854;
FieldInfo t1645_f12_FieldInfo = 
{
	"Popref", &t1645_0_0_32854, &t1645_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1645_0_0_32854;
FieldInfo t1645_f13_FieldInfo = 
{
	"Popref_pop1", &t1645_0_0_32854, &t1645_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1645_0_0_32854;
FieldInfo t1645_f14_FieldInfo = 
{
	"Popref_popi", &t1645_0_0_32854, &t1645_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1645_0_0_32854;
FieldInfo t1645_f15_FieldInfo = 
{
	"Popref_popi_popi", &t1645_0_0_32854, &t1645_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1645_0_0_32854;
FieldInfo t1645_f16_FieldInfo = 
{
	"Popref_popi_popi8", &t1645_0_0_32854, &t1645_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1645_0_0_32854;
FieldInfo t1645_f17_FieldInfo = 
{
	"Popref_popi_popr4", &t1645_0_0_32854, &t1645_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1645_0_0_32854;
FieldInfo t1645_f18_FieldInfo = 
{
	"Popref_popi_popr8", &t1645_0_0_32854, &t1645_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1645_0_0_32854;
FieldInfo t1645_f19_FieldInfo = 
{
	"Popref_popi_popref", &t1645_0_0_32854, &t1645_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1645_0_0_32854;
FieldInfo t1645_f20_FieldInfo = 
{
	"Push0", &t1645_0_0_32854, &t1645_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1645_0_0_32854;
FieldInfo t1645_f21_FieldInfo = 
{
	"Push1", &t1645_0_0_32854, &t1645_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1645_0_0_32854;
FieldInfo t1645_f22_FieldInfo = 
{
	"Push1_push1", &t1645_0_0_32854, &t1645_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1645_0_0_32854;
FieldInfo t1645_f23_FieldInfo = 
{
	"Pushi", &t1645_0_0_32854, &t1645_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1645_0_0_32854;
FieldInfo t1645_f24_FieldInfo = 
{
	"Pushi8", &t1645_0_0_32854, &t1645_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1645_0_0_32854;
FieldInfo t1645_f25_FieldInfo = 
{
	"Pushr4", &t1645_0_0_32854, &t1645_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1645_0_0_32854;
FieldInfo t1645_f26_FieldInfo = 
{
	"Pushr8", &t1645_0_0_32854, &t1645_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1645_0_0_32854;
FieldInfo t1645_f27_FieldInfo = 
{
	"Pushref", &t1645_0_0_32854, &t1645_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1645_0_0_32854;
FieldInfo t1645_f28_FieldInfo = 
{
	"Varpop", &t1645_0_0_32854, &t1645_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1645_0_0_32854;
FieldInfo t1645_f29_FieldInfo = 
{
	"Varpush", &t1645_0_0_32854, &t1645_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1645_0_0_32854;
FieldInfo t1645_f30_FieldInfo = 
{
	"Popref_popi_pop1", &t1645_0_0_32854, &t1645_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t1645_FIs[] =
{
	&t1645_f1_FieldInfo,
	&t1645_f2_FieldInfo,
	&t1645_f3_FieldInfo,
	&t1645_f4_FieldInfo,
	&t1645_f5_FieldInfo,
	&t1645_f6_FieldInfo,
	&t1645_f7_FieldInfo,
	&t1645_f8_FieldInfo,
	&t1645_f9_FieldInfo,
	&t1645_f10_FieldInfo,
	&t1645_f11_FieldInfo,
	&t1645_f12_FieldInfo,
	&t1645_f13_FieldInfo,
	&t1645_f14_FieldInfo,
	&t1645_f15_FieldInfo,
	&t1645_f16_FieldInfo,
	&t1645_f17_FieldInfo,
	&t1645_f18_FieldInfo,
	&t1645_f19_FieldInfo,
	&t1645_f20_FieldInfo,
	&t1645_f21_FieldInfo,
	&t1645_f22_FieldInfo,
	&t1645_f23_FieldInfo,
	&t1645_f24_FieldInfo,
	&t1645_f25_FieldInfo,
	&t1645_f26_FieldInfo,
	&t1645_f27_FieldInfo,
	&t1645_f28_FieldInfo,
	&t1645_f29_FieldInfo,
	&t1645_f30_FieldInfo,
	NULL
};
static const int32_t t1645_f2_DefaultValueData = 0;
static Il2CppFieldDefaultValueEntry t1645_f2_DefaultValue = 
{
	&t1645_f2_FieldInfo, { (char*)&t1645_f2_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1645_f3_DefaultValueData = 1;
static Il2CppFieldDefaultValueEntry t1645_f3_DefaultValue = 
{
	&t1645_f3_FieldInfo, { (char*)&t1645_f3_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1645_f4_DefaultValueData = 2;
static Il2CppFieldDefaultValueEntry t1645_f4_DefaultValue = 
{
	&t1645_f4_FieldInfo, { (char*)&t1645_f4_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1645_f5_DefaultValueData = 3;
static Il2CppFieldDefaultValueEntry t1645_f5_DefaultValue = 
{
	&t1645_f5_FieldInfo, { (char*)&t1645_f5_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1645_f6_DefaultValueData = 4;
static Il2CppFieldDefaultValueEntry t1645_f6_DefaultValue = 
{
	&t1645_f6_FieldInfo, { (char*)&t1645_f6_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1645_f7_DefaultValueData = 5;
static Il2CppFieldDefaultValueEntry t1645_f7_DefaultValue = 
{
	&t1645_f7_FieldInfo, { (char*)&t1645_f7_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1645_f8_DefaultValueData = 6;
static Il2CppFieldDefaultValueEntry t1645_f8_DefaultValue = 
{
	&t1645_f8_FieldInfo, { (char*)&t1645_f8_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1645_f9_DefaultValueData = 7;
static Il2CppFieldDefaultValueEntry t1645_f9_DefaultValue = 
{
	&t1645_f9_FieldInfo, { (char*)&t1645_f9_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1645_f10_DefaultValueData = 8;
static Il2CppFieldDefaultValueEntry t1645_f10_DefaultValue = 
{
	&t1645_f10_FieldInfo, { (char*)&t1645_f10_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1645_f11_DefaultValueData = 9;
static Il2CppFieldDefaultValueEntry t1645_f11_DefaultValue = 
{
	&t1645_f11_FieldInfo, { (char*)&t1645_f11_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1645_f12_DefaultValueData = 10;
static Il2CppFieldDefaultValueEntry t1645_f12_DefaultValue = 
{
	&t1645_f12_FieldInfo, { (char*)&t1645_f12_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1645_f13_DefaultValueData = 11;
static Il2CppFieldDefaultValueEntry t1645_f13_DefaultValue = 
{
	&t1645_f13_FieldInfo, { (char*)&t1645_f13_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1645_f14_DefaultValueData = 12;
static Il2CppFieldDefaultValueEntry t1645_f14_DefaultValue = 
{
	&t1645_f14_FieldInfo, { (char*)&t1645_f14_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1645_f15_DefaultValueData = 13;
static Il2CppFieldDefaultValueEntry t1645_f15_DefaultValue = 
{
	&t1645_f15_FieldInfo, { (char*)&t1645_f15_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1645_f16_DefaultValueData = 14;
static Il2CppFieldDefaultValueEntry t1645_f16_DefaultValue = 
{
	&t1645_f16_FieldInfo, { (char*)&t1645_f16_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1645_f17_DefaultValueData = 15;
static Il2CppFieldDefaultValueEntry t1645_f17_DefaultValue = 
{
	&t1645_f17_FieldInfo, { (char*)&t1645_f17_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1645_f18_DefaultValueData = 16;
static Il2CppFieldDefaultValueEntry t1645_f18_DefaultValue = 
{
	&t1645_f18_FieldInfo, { (char*)&t1645_f18_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1645_f19_DefaultValueData = 17;
static Il2CppFieldDefaultValueEntry t1645_f19_DefaultValue = 
{
	&t1645_f19_FieldInfo, { (char*)&t1645_f19_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1645_f20_DefaultValueData = 18;
static Il2CppFieldDefaultValueEntry t1645_f20_DefaultValue = 
{
	&t1645_f20_FieldInfo, { (char*)&t1645_f20_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1645_f21_DefaultValueData = 19;
static Il2CppFieldDefaultValueEntry t1645_f21_DefaultValue = 
{
	&t1645_f21_FieldInfo, { (char*)&t1645_f21_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1645_f22_DefaultValueData = 20;
static Il2CppFieldDefaultValueEntry t1645_f22_DefaultValue = 
{
	&t1645_f22_FieldInfo, { (char*)&t1645_f22_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1645_f23_DefaultValueData = 21;
static Il2CppFieldDefaultValueEntry t1645_f23_DefaultValue = 
{
	&t1645_f23_FieldInfo, { (char*)&t1645_f23_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1645_f24_DefaultValueData = 22;
static Il2CppFieldDefaultValueEntry t1645_f24_DefaultValue = 
{
	&t1645_f24_FieldInfo, { (char*)&t1645_f24_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1645_f25_DefaultValueData = 23;
static Il2CppFieldDefaultValueEntry t1645_f25_DefaultValue = 
{
	&t1645_f25_FieldInfo, { (char*)&t1645_f25_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1645_f26_DefaultValueData = 24;
static Il2CppFieldDefaultValueEntry t1645_f26_DefaultValue = 
{
	&t1645_f26_FieldInfo, { (char*)&t1645_f26_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1645_f27_DefaultValueData = 25;
static Il2CppFieldDefaultValueEntry t1645_f27_DefaultValue = 
{
	&t1645_f27_FieldInfo, { (char*)&t1645_f27_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1645_f28_DefaultValueData = 26;
static Il2CppFieldDefaultValueEntry t1645_f28_DefaultValue = 
{
	&t1645_f28_FieldInfo, { (char*)&t1645_f28_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1645_f29_DefaultValueData = 27;
static Il2CppFieldDefaultValueEntry t1645_f29_DefaultValue = 
{
	&t1645_f29_FieldInfo, { (char*)&t1645_f29_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1645_f30_DefaultValueData = 28;
static Il2CppFieldDefaultValueEntry t1645_f30_DefaultValue = 
{
	&t1645_f30_FieldInfo, { (char*)&t1645_f30_DefaultValueData, &t110_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t1645_FDVs[] = 
{
	&t1645_f2_DefaultValue,
	&t1645_f3_DefaultValue,
	&t1645_f4_DefaultValue,
	&t1645_f5_DefaultValue,
	&t1645_f6_DefaultValue,
	&t1645_f7_DefaultValue,
	&t1645_f8_DefaultValue,
	&t1645_f9_DefaultValue,
	&t1645_f10_DefaultValue,
	&t1645_f11_DefaultValue,
	&t1645_f12_DefaultValue,
	&t1645_f13_DefaultValue,
	&t1645_f14_DefaultValue,
	&t1645_f15_DefaultValue,
	&t1645_f16_DefaultValue,
	&t1645_f17_DefaultValue,
	&t1645_f18_DefaultValue,
	&t1645_f19_DefaultValue,
	&t1645_f20_DefaultValue,
	&t1645_f21_DefaultValue,
	&t1645_f22_DefaultValue,
	&t1645_f23_DefaultValue,
	&t1645_f24_DefaultValue,
	&t1645_f25_DefaultValue,
	&t1645_f26_DefaultValue,
	&t1645_f27_DefaultValue,
	&t1645_f28_DefaultValue,
	&t1645_f29_DefaultValue,
	&t1645_f30_DefaultValue,
	NULL
};
static MethodInfo* t1645_MIs[] =
{
	NULL
};
static MethodInfo* t1645_VT[] =
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
static Il2CppInterfaceOffsetPair t1645_IOs[] = 
{
	{ &t120_TI, 4},
	{ &t121_TI, 5},
	{ &t122_TI, 21},
};
void t1645_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t576 * tmp;
		tmp = (t576 *)il2cpp_codegen_object_new (&t576_TI);
		m2699(tmp, true, &m2699_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1645__CustomAttributeCache = {
1,
NULL,
&t1645_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1645_0_0_0;
extern Il2CppType t1645_1_0_0;
extern CustomAttributesCache t1645__CustomAttributeCache;
TypeInfo t1645_TI = 
{
	&g_mscorlib_dll_Image, NULL, "StackBehaviour", "System.Reflection.Emit", t1645_MIs, NULL, t1645_FIs, NULL, &t18_TI, NULL, NULL, &t110_TI, NULL, t1645_VT, &t1645__CustomAttributeCache, &t110_TI, &t1645_0_0_0, &t1645_1_0_0, t1645_IOs, NULL, NULL, t1645_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1645)+ sizeof (Il2CppObject), sizeof (int32_t), sizeof(int32_t), 0, 0, -1, 8449, 0, true, false, false, true, false, false, false, false, false, false, false, false, 0, 0, 30, 0, 0, 23, 0, 3};
#include "t1612.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1612_TI;
#include "t1612MD.h"

#include "t1194.h"
#include "t133.h"
#include "t1402.h"
#include "t115.h"
#include "t1602.h"
#include "t1624.h"
#include "t1409.h"
#include "t144.h"
#include "t797.h"
#include "t768.h"
#include "t769.h"
#include "t1411.h"
#include "t770.h"
#include "t1610.h"
#include "t774.h"
#include "t1653.h"
#include "t491.h"
#include "t1615.h"
#include "t1625.h"
#include "t160.h"
#include "t484.h"
#include "t996.h"
#include "t1403.h"
#include "t1404.h"
#include "t1623.h"
#include "t1621.h"
#include "t1407.h"
#include "t142.h"
#include "t771.h"
#include "t267.h"
extern TypeInfo t1194_TI;
extern TypeInfo t114_TI;
extern TypeInfo t108_TI;
extern TypeInfo t133_TI;
extern TypeInfo t115_TI;
extern TypeInfo t1607_TI;
extern TypeInfo t675_TI;
extern TypeInfo t1610_TI;
extern TypeInfo t1411_TI;
extern TypeInfo t1653_TI;
extern TypeInfo t1661_TI;
extern TypeInfo t774_TI;
extern TypeInfo t769_TI;
extern TypeInfo t768_TI;
extern TypeInfo t772_TI;
extern TypeInfo t770_TI;
extern TypeInfo t797_TI;
extern TypeInfo t491_TI;
extern TypeInfo t1989_TI;
extern TypeInfo t450_TI;
extern TypeInfo t168_TI;
extern TypeInfo t1651_TI;
extern TypeInfo t1650_TI;
extern TypeInfo t1625_TI;
extern TypeInfo t160_TI;
extern TypeInfo t1602_TI;
extern TypeInfo t484_TI;
extern TypeInfo t1408_TI;
extern TypeInfo t996_TI;
extern TypeInfo t1615_TI;
extern TypeInfo t109_TI;
extern TypeInfo t107_TI;
extern TypeInfo t1403_TI;
extern TypeInfo t1404_TI;
extern TypeInfo t1623_TI;
extern TypeInfo t1405_TI;
extern TypeInfo t1406_TI;
extern TypeInfo t695_TI;
extern TypeInfo t771_TI;
#include "t1402MD.h"
#include "t1194MD.h"
#include "t114MD.h"
#include "t133MD.h"
#include "t1602MD.h"
#include "t107MD.h"
#include "t1610MD.h"
#include "t1653MD.h"
#include "t774MD.h"
#include "t769MD.h"
#include "t491MD.h"
#include "t1989MD.h"
#include "t450MD.h"
#include "t160MD.h"
#include "t1625MD.h"
#include "t484MD.h"
#include "t996MD.h"
#include "t1404MD.h"
extern Il2CppType t267_0_0_0;
extern MethodInfo m8580_MI;
extern MethodInfo m8395_MI;
extern MethodInfo m8462_MI;
extern MethodInfo m2328_MI;
extern MethodInfo m8439_MI;
extern MethodInfo m11045_MI;
extern MethodInfo m6787_MI;
extern MethodInfo m8438_MI;
extern MethodInfo m4759_MI;
extern MethodInfo m8442_MI;
extern MethodInfo m6797_MI;
extern MethodInfo m8135_MI;
extern MethodInfo m8452_MI;
extern MethodInfo m6774_MI;
extern MethodInfo m1972_MI;
extern MethodInfo m8394_MI;
extern MethodInfo m8443_MI;
extern MethodInfo m4806_MI;
extern MethodInfo m2415_MI;
extern MethodInfo m2386_MI;
extern MethodInfo m6741_MI;
extern MethodInfo m532_MI;
extern MethodInfo m8360_MI;
extern MethodInfo m8400_MI;
extern MethodInfo m3644_MI;
extern MethodInfo m2358_MI;
extern MethodInfo m8143_MI;
extern MethodInfo m8455_MI;
extern MethodInfo m8559_MI;
extern MethodInfo m8518_MI;
extern MethodInfo m11483_MI;
extern MethodInfo m6830_MI;
extern MethodInfo m2164_MI;
extern MethodInfo m10639_MI;
extern MethodInfo m11192_MI;
extern MethodInfo m3557_MI;
extern MethodInfo m8411_MI;
extern MethodInfo m8441_MI;
extern MethodInfo m8142_MI;
extern MethodInfo m8414_MI;
extern MethodInfo m8415_MI;
extern MethodInfo m6789_MI;
extern MethodInfo m2582_MI;
extern MethodInfo m8310_MI;
extern MethodInfo m8412_MI;
extern MethodInfo m3596_MI;
extern MethodInfo m3584_MI;
extern MethodInfo m8333_MI;
extern MethodInfo m11190_MI;
extern MethodInfo m8418_MI;
extern MethodInfo m4773_MI;
extern MethodInfo m8151_MI;
extern MethodInfo m4784_MI;
extern MethodInfo m4769_MI;
extern MethodInfo m5048_MI;
extern MethodInfo m11186_MI;
extern MethodInfo m11187_MI;
extern MethodInfo m3571_MI;
extern MethodInfo m2384_MI;
extern MethodInfo m11178_MI;
extern MethodInfo m11188_MI;
extern MethodInfo m11185_MI;
extern MethodInfo m4993_MI;
extern MethodInfo m11189_MI;
extern MethodInfo m4975_MI;
extern MethodInfo m11177_MI;
extern MethodInfo m3598_MI;
extern MethodInfo m4971_MI;
extern MethodInfo m6376_MI;
extern MethodInfo m8424_MI;
extern MethodInfo m8521_MI;
extern MethodInfo m8440_MI;
extern MethodInfo m6781_MI;
extern MethodInfo m3565_MI;
extern MethodInfo m6807_MI;
extern MethodInfo m3625_MI;
extern MethodInfo m4781_MI;
extern MethodInfo m614_MI;
extern MethodInfo m2385_MI;
extern MethodInfo m8401_MI;
extern MethodInfo m3627_MI;
extern MethodInfo m6810_MI;


extern MethodInfo m8391_MI;
 void m8391 (t1612 * __this, t1607 * p0, int32_t p1, int32_t p2, MethodInfo* method){
	t11* V_0 = {0};
	t1612 * G_B2_0 = {0};
	t1612 * G_B2_1 = {0};
	t1612 * G_B1_0 = {0};
	t1612 * G_B1_1 = {0};
	t11* G_B3_0 = {0};
	t1612 * G_B3_1 = {0};
	t1612 * G_B3_2 = {0};
	{
		m6774(__this, &m6774_MI);
		__this->f10 = (t114 *)NULL;
		__this->f18 = p1;
		__this->f21 = 0;
		__this->f19 = p2;
		G_B1_0 = __this;
		G_B1_1 = __this;
		if ((((uint32_t)p2) != ((uint32_t)1)))
		{
			G_B2_0 = __this;
			G_B2_1 = __this;
			goto IL_002f;
		}
	}
	{
		G_B3_0 = (t11*) &_stringLiteral1821;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_003f;
	}

IL_002f:
	{
		int32_t L_0 = p2;
		t5 * L_1 = Box(InitializedTypeInfo(&t110_TI), &L_0);
		IL2CPP_RUNTIME_CLASS_INIT((&t11_TI));
		t11* L_2 = m1972(NULL, (t11*) &_stringLiteral1822, L_1, &m1972_MI);
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_003f:
	{
		t11* L_3 = G_B3_0;
		V_0 = L_3;
		G_B3_1->f8 = L_3;
		G_B3_2->f25 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT((&t11_TI));
		__this->f9 = (((t11_SFs*)(&t11_TI)->static_fields)->f2);
		__this->f20 = p0;
		m8394(__this, __this, &m8394_MI);
		return;
	}
}
extern MethodInfo m8392_MI;
 void m8392 (t1612 * __this, t1607 * p0, t11* p1, int32_t p2, t114 * p3, t675* p4, int32_t p5, int32_t p6, t114 * p7, MethodInfo* method){
	int32_t V_0 = 0;
	{
		m6774(__this, &m6774_MI);
		__this->f10 = p3;
		__this->f18 = p2;
		__this->f21 = p6;
		__this->f22 = p5;
		__this->f11 = p7;
		m8443(__this, (t11*) &_stringLiteral1823, p1, &m8443_MI);
		if (p3)
		{
			goto IL_0057;
		}
	}
	{
		if (!((int32_t)((int32_t)p2&(int32_t)((int32_t)32))))
		{
			goto IL_0057;
		}
	}
	{
		if (((int32_t)((int32_t)p2&(int32_t)((int32_t)128))))
		{
			goto IL_0057;
		}
	}
	{
		t133 * L_0 = (t133 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t133_TI));
		m4759(L_0, (t11*) &_stringLiteral1824, &m4759_MI);
		il2cpp_codegen_raise_exception(L_0);
	}

IL_0057:
	{
		int32_t L_1 = m4806(p1, ((int32_t)46), &m4806_MI);
		V_0 = L_1;
		if ((((int32_t)V_0) == ((int32_t)(-1))))
		{
			goto IL_0083;
		}
	}
	{
		t11* L_2 = m2415(p1, ((int32_t)(V_0+1)), &m2415_MI);
		__this->f8 = L_2;
		t11* L_3 = m2386(p1, 0, V_0, &m2386_MI);
		__this->f9 = L_3;
		goto IL_0095;
	}

IL_0083:
	{
		__this->f8 = p1;
		IL2CPP_RUNTIME_CLASS_INIT((&t11_TI));
		__this->f9 = (((t11_SFs*)(&t11_TI)->static_fields)->f2);
	}

IL_0095:
	{
		if (!p4)
		{
			goto IL_00b9;
		}
	}
	{
		__this->f12 = ((t675*)SZArrayNew(InitializedTypeInfo(&t675_TI), (((int32_t)(((t107 *)p4)->max_length)))));
		t675* L_4 = (__this->f12);
		m6741(NULL, (t107 *)(t107 *)p4, (t107 *)(t107 *)L_4, (((int32_t)(((t107 *)p4)->max_length))), &m6741_MI);
	}

IL_00b9:
	{
		__this->f20 = p0;
		if (((int32_t)((int32_t)p2&(int32_t)((int32_t)32))))
		{
			goto IL_00e2;
		}
	}
	{
		if (p3)
		{
			goto IL_00e2;
		}
	}
	{
		bool L_5 = m8438(__this, &m8438_MI);
		if (L_5)
		{
			goto IL_00e2;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t114_TI));
		t114 * L_6 = m532(NULL, LoadTypeToken(&t5_0_0_0), &m532_MI);
		__this->f10 = L_6;
	}

IL_00e2:
	{
		int32_t L_7 = m8360(p0, __this, 2, 1, &m8360_MI);
		__this->f19 = L_7;
		m8394(__this, __this, &m8394_MI);
		t11* L_8 = m8400(__this, &m8400_MI);
		__this->f25 = L_8;
		return;
	}
}
extern MethodInfo m8393_MI;
 int32_t m8393 (t1612 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->f18);
		return L_0;
	}
}
 void m8394 (t1612 * __this, t1612 * p0, MethodInfo* method){
	typedef void (*m8394_ftn) (t1612 *, t1612 *);
	static m8394_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m8394_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.Emit.TypeBuilder::setup_internal_class(System.Reflection.Emit.TypeBuilder)");
	_il2cpp_icall_func(__this, p0);
}
 t1194 * m8395 (t1612 * __this, MethodInfo* method){
	{
		t1607 * L_0 = (__this->f20);
		t1194 * L_1 = m8580(L_0, &m8580_MI);
		return L_1;
	}
}
extern MethodInfo m8396_MI;
 t11* m8396 (t1612 * __this, MethodInfo* method){
	{
		t11* L_0 = (__this->f25);
		t1194 * L_1 = (t1194 *)VirtFuncInvoker0< t1194 * >::Invoke(&m8395_MI, __this);
		t11* L_2 = (t11*)VirtFuncInvoker0< t11* >::Invoke(&m8462_MI, L_1);
		IL2CPP_RUNTIME_CLASS_INIT((&t11_TI));
		t11* L_3 = m2328(NULL, L_0, (t11*) &_stringLiteral218, L_2, &m2328_MI);
		return L_3;
	}
}
extern MethodInfo m8397_MI;
 t114 * m8397 (t1612 * __this, MethodInfo* method){
	{
		t114 * L_0 = (__this->f10);
		return L_0;
	}
}
extern MethodInfo m8398_MI;
 t114 * m8398 (t1612 * __this, MethodInfo* method){
	{
		t114 * L_0 = (__this->f11);
		return L_0;
	}
}
extern MethodInfo m8399_MI;
 t114 * m8399 (t1612 * __this, MethodInfo* method){
	{
		bool L_0 = m8439(__this, &m8439_MI);
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		t114 * L_1 = (__this->f24);
		t114 * L_2 = (t114 *)VirtFuncInvoker0< t114 * >::Invoke(&m11045_MI, L_1);
		return L_2;
	}

IL_0014:
	{
		bool L_3 = (bool)VirtFuncInvoker0< bool >::Invoke(&m6787_MI, __this);
		if (!L_3)
		{
			goto IL_003e;
		}
	}
	{
		bool L_4 = m8438(__this, &m8438_MI);
		if (L_4)
		{
			goto IL_003e;
		}
	}
	{
		t114 * L_5 = (__this->f26);
		if (!L_5)
		{
			goto IL_0033;
		}
	}
	{
		t114 * L_6 = (__this->f26);
		return L_6;
	}

IL_0033:
	{
		t133 * L_7 = (t133 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t133_TI));
		m4759(L_7, (t11*) &_stringLiteral1820, &m4759_MI);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_003e:
	{
		return __this;
	}
}
 t11* m8400 (t1612 * __this, MethodInfo* method){
	{
		t114 * L_0 = (__this->f11);
		if (!L_0)
		{
			goto IL_0024;
		}
	}
	{
		t114 * L_1 = (__this->f11);
		t11* L_2 = (t11*)VirtFuncInvoker0< t11* >::Invoke(&m3644_MI, L_1);
		t11* L_3 = (__this->f8);
		IL2CPP_RUNTIME_CLASS_INIT((&t11_TI));
		t11* L_4 = m2328(NULL, L_2, (t11*) &_stringLiteral116, L_3, &m2328_MI);
		return L_4;
	}

IL_0024:
	{
		t11* L_5 = (__this->f9);
		if (!L_5)
		{
			goto IL_0051;
		}
	}
	{
		t11* L_6 = (__this->f9);
		int32_t L_7 = m2358(L_6, &m2358_MI);
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_0051;
		}
	}
	{
		t11* L_8 = (__this->f9);
		t11* L_9 = (__this->f8);
		IL2CPP_RUNTIME_CLASS_INIT((&t11_TI));
		t11* L_10 = m2328(NULL, L_8, (t11*) &_stringLiteral84, L_9, &m2328_MI);
		return L_10;
	}

IL_0051:
	{
		t11* L_11 = (__this->f8);
		return L_11;
	}
}
 t11* m8401 (t1612 * __this, MethodInfo* method){
	{
		t11* L_0 = (__this->f25);
		return L_0;
	}
}
extern MethodInfo m8402_MI;
 t1402 * m8402 (t1612 * __this, MethodInfo* method){
	{
		t1607 * L_0 = (__this->f20);
		return L_0;
	}
}
extern MethodInfo m8403_MI;
 t11* m8403 (t1612 * __this, MethodInfo* method){
	{
		t11* L_0 = (__this->f8);
		return L_0;
	}
}
extern MethodInfo m8404_MI;
 t11* m8404 (t1612 * __this, MethodInfo* method){
	{
		t11* L_0 = (__this->f9);
		return L_0;
	}
}
extern MethodInfo m8405_MI;
 t114 * m8405 (t1612 * __this, MethodInfo* method){
	{
		t114 * L_0 = (__this->f11);
		return L_0;
	}
}
extern MethodInfo m8406_MI;
 t797 * m8406 (t1612 * __this, int32_t p0, t769 * p1, int32_t p2, t675* p3, t772* p4, MethodInfo* method){
	t1610 * V_0 = {0};
	int32_t V_1 = 0;
	t1610 * V_2 = {0};
	t1651* V_3 = {0};
	int32_t V_4 = 0;
	t1661* V_5 = {0};
	t797 * V_6 = {0};
	t1651* V_7 = {0};
	int32_t V_8 = 0;
	{
		m8442(__this, &m8442_MI);
		t114 * L_0 = (__this->f24);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t114_TI));
		t114 * L_1 = m532(NULL, LoadTypeToken(&t5_0_0_0), &m532_MI);
		if ((((t114 *)L_0) != ((t114 *)L_1)))
		{
			goto IL_00e1;
		}
	}
	{
		t1651* L_2 = (__this->f15);
		if (L_2)
		{
			goto IL_0025;
		}
	}
	{
		return (t797 *)NULL;
	}

IL_0025:
	{
		V_0 = (t1610 *)NULL;
		V_1 = 0;
		t1651* L_3 = (__this->f15);
		V_3 = L_3;
		V_4 = 0;
		goto IL_0055;
	}

IL_0035:
	{
		int32_t L_4 = V_4;
		V_2 = (*(t1610 **)(t1610 **)SZArrayLdElema(V_3, L_4));
		if ((((int32_t)p2) == ((int32_t)3)))
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_5 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m8143_MI, V_2);
		if ((((int32_t)L_5) == ((int32_t)p2)))
		{
			goto IL_0049;
		}
	}
	{
		goto IL_004f;
	}

IL_0049:
	{
		V_0 = V_2;
		V_1 = ((int32_t)(V_1+1));
	}

IL_004f:
	{
		V_4 = ((int32_t)(V_4+1));
	}

IL_0055:
	{
		if ((((int32_t)V_4) < ((int32_t)(((int32_t)(((t107 *)V_3)->max_length))))))
		{
			goto IL_0035;
		}
	}
	{
		if (V_1)
		{
			goto IL_0061;
		}
	}
	{
		return (t797 *)NULL;
	}

IL_0061:
	{
		if (p3)
		{
			goto IL_0071;
		}
	}
	{
		if ((((int32_t)V_1) <= ((int32_t)1)))
		{
			goto IL_006f;
		}
	}
	{
		t1653 * L_6 = (t1653 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1653_TI));
		m8455(L_6, &m8455_MI);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_006f:
	{
		return V_0;
	}

IL_0071:
	{
		V_5 = ((t1661*)SZArrayNew(InitializedTypeInfo(&t1661_TI), V_1));
		if ((((uint32_t)V_1) != ((uint32_t)1)))
		{
			goto IL_0084;
		}
	}
	{
		ArrayElementTypeCheck (V_5, V_0);
		*((t774 **)(t774 **)SZArrayLdElema(V_5, 0)) = (t774 *)V_0;
		goto IL_00c2;
	}

IL_0084:
	{
		V_1 = 0;
		t1651* L_7 = (__this->f15);
		V_7 = L_7;
		V_8 = 0;
		goto IL_00ba;
	}

IL_0093:
	{
		int32_t L_8 = V_8;
		V_6 = (*(t1610 **)(t1610 **)SZArrayLdElema(V_7, L_8));
		if ((((int32_t)p2) == ((int32_t)3)))
		{
			goto IL_00aa;
		}
	}
	{
		int32_t L_9 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m8559_MI, V_6);
		if ((((int32_t)L_9) == ((int32_t)p2)))
		{
			goto IL_00aa;
		}
	}
	{
		goto IL_00b4;
	}

IL_00aa:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)(L_10+1));
		ArrayElementTypeCheck (V_5, V_6);
		*((t774 **)(t774 **)SZArrayLdElema(V_5, L_10)) = (t774 *)V_6;
	}

IL_00b4:
	{
		V_8 = ((int32_t)(V_8+1));
	}

IL_00ba:
	{
		if ((((int32_t)V_8) < ((int32_t)(((int32_t)(((t107 *)V_7)->max_length))))))
		{
			goto IL_0093;
		}
	}

IL_00c2:
	{
		if (p1)
		{
			goto IL_00ce;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t769_TI));
		t769 * L_11 = m8518(NULL, &m8518_MI);
		p1 = L_11;
	}

IL_00ce:
	{
		t774 * L_12 = (t774 *)VirtFuncInvoker4< t774 *, int32_t, t1661*, t675*, t772* >::Invoke(&m11483_MI, p1, p0, V_5, p3, p4);
		return ((t797 *)Castclass(L_12, InitializedTypeInfo(&t797_TI)));
	}

IL_00e1:
	{
		t114 * L_13 = (__this->f24);
		t797 * L_14 = (t797 *)VirtFuncInvoker5< t797 *, int32_t, t769 *, int32_t, t675*, t772* >::Invoke(&m6830_MI, L_13, p0, p1, p2, p3, p4);
		return L_14;
	}
}
extern MethodInfo m8407_MI;
 bool m8407 (t1612 * __this, t114 * p0, bool p1, MethodInfo* method){
	{
		bool L_0 = m8439(__this, &m8439_MI);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		bool L_1 = m8438(__this, &m8438_MI);
		if (L_1)
		{
			goto IL_0016;
		}
	}
	{
		t491 * L_2 = (t491 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t491_TI));
		m2164(L_2, &m2164_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0016:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1989_TI));
		bool L_3 = m10639(NULL, __this, p0, p1, &m10639_MI);
		return L_3;
	}
}
extern MethodInfo m8408_MI;
 t168* m8408 (t1612 * __this, bool p0, MethodInfo* method){
	{
		m8442(__this, &m8442_MI);
		t114 * L_0 = (__this->f24);
		t168* L_1 = (t168*)VirtFuncInvoker1< t168*, bool >::Invoke(&m11192_MI, L_0, p0);
		return L_1;
	}
}
extern MethodInfo m8409_MI;
 t168* m8409 (t1612 * __this, t114 * p0, bool p1, MethodInfo* method){
	{
		m8442(__this, &m8442_MI);
		t114 * L_0 = (__this->f24);
		t168* L_1 = (t168*)VirtFuncInvoker2< t168*, t114 *, bool >::Invoke(&m3557_MI, L_0, p0, p1);
		return L_1;
	}
}
extern MethodInfo m8410_MI;
 t1610 * m8410 (t1612 * __this, int32_t p0, int32_t p1, t675* p2, MethodInfo* method){
	{
		t1610 * L_0 = m8411(__this, p0, p1, p2, (t1614*)(t1614*)NULL, (t1614*)(t1614*)NULL, &m8411_MI);
		return L_0;
	}
}
 t1610 * m8411 (t1612 * __this, int32_t p0, int32_t p1, t675* p2, t1614* p3, t1614* p4, MethodInfo* method){
	t1610 * V_0 = {0};
	t1651* V_1 = {0};
	{
		m8441(__this, &m8441_MI);
		t1610 * L_0 = (t1610 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1610_TI));
		m8142(L_0, __this, p0, p1, p2, p3, p4, &m8142_MI);
		V_0 = L_0;
		t1651* L_1 = (__this->f15);
		if (!L_1)
		{
			goto IL_0054;
		}
	}
	{
		t1651* L_2 = (__this->f15);
		V_1 = ((t1651*)SZArrayNew(InitializedTypeInfo(&t1651_TI), ((int32_t)((((int32_t)(((t107 *)L_2)->max_length)))+1))));
		t1651* L_3 = (__this->f15);
		t1651* L_4 = (__this->f15);
		m6741(NULL, (t107 *)(t107 *)L_3, (t107 *)(t107 *)V_1, (((int32_t)(((t107 *)L_4)->max_length))), &m6741_MI);
		t1651* L_5 = (__this->f15);
		ArrayElementTypeCheck (V_1, V_0);
		*((t1610 **)(t1610 **)SZArrayLdElema(V_1, (((int32_t)(((t107 *)L_5)->max_length))))) = (t1610 *)V_0;
		__this->f15 = V_1;
		goto IL_0069;
	}

IL_0054:
	{
		__this->f15 = ((t1651*)SZArrayNew(InitializedTypeInfo(&t1651_TI), 1));
		t1651* L_6 = (__this->f15);
		ArrayElementTypeCheck (L_6, V_0);
		*((t1610 **)(t1610 **)SZArrayLdElema(L_6, 0)) = (t1610 *)V_0;
	}

IL_0069:
	{
		return V_0;
	}
}
 void m8412 (t1612 * __this, t1625 * p0, MethodInfo* method){
	t1650* V_0 = {0};
	{
		t1650* L_0 = (__this->f14);
		if (!L_0)
		{
			goto IL_0043;
		}
	}
	{
		t1650* L_1 = (__this->f14);
		int32_t L_2 = (__this->f13);
		if ((((uint32_t)(((int32_t)(((t107 *)L_1)->max_length)))) != ((uint32_t)L_2)))
		{
			goto IL_0041;
		}
	}
	{
		t1650* L_3 = (__this->f14);
		V_0 = ((t1650*)SZArrayNew(InitializedTypeInfo(&t1650_TI), ((int32_t)((int32_t)(((int32_t)(((t107 *)L_3)->max_length)))*(int32_t)2))));
		t1650* L_4 = (__this->f14);
		int32_t L_5 = (__this->f13);
		m6741(NULL, (t107 *)(t107 *)L_4, (t107 *)(t107 *)V_0, L_5, &m6741_MI);
		__this->f14 = V_0;
	}

IL_0041:
	{
		goto IL_004f;
	}

IL_0043:
	{
		__this->f14 = ((t1650*)SZArrayNew(InitializedTypeInfo(&t1650_TI), 1));
	}

IL_004f:
	{
		t1650* L_6 = (__this->f14);
		int32_t L_7 = (__this->f13);
		ArrayElementTypeCheck (L_6, p0);
		*((t1625 **)(t1625 **)SZArrayLdElema(L_6, L_7)) = (t1625 *)p0;
		int32_t L_8 = (__this->f13);
		__this->f13 = ((int32_t)(L_8+1));
		return;
	}
}
extern MethodInfo m8413_MI;
 t1625 * m8413 (t1612 * __this, t11* p0, int32_t p1, t114 * p2, t675* p3, MethodInfo* method){
	{
		t1625 * L_0 = m8414(__this, p0, p1, 1, p2, p3, &m8414_MI);
		return L_0;
	}
}
 t1625 * m8414 (t1612 * __this, t11* p0, int32_t p1, int32_t p2, t114 * p3, t675* p4, MethodInfo* method){
	{
		t1625 * L_0 = m8415(__this, p0, p1, p2, p3, (t675*)(t675*)NULL, (t675*)(t675*)NULL, p4, (t1614*)(t1614*)NULL, (t1614*)(t1614*)NULL, &m8415_MI);
		return L_0;
	}
}
 t1625 * m8415 (t1612 * __this, t11* p0, int32_t p1, int32_t p2, t114 * p3, t675* p4, t675* p5, t675* p6, t1614* p7, t1614* p8, MethodInfo* method){
	t1625 * V_0 = {0};
	{
		m8443(__this, (t11*) &_stringLiteral363, p0, &m8443_MI);
		m8441(__this, &m8441_MI);
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(&m6789_MI, __this);
		if (!L_0)
		{
			goto IL_003a;
		}
	}
	{
		if (!((int32_t)((int32_t)p1&(int32_t)((int32_t)1024))))
		{
			goto IL_0029;
		}
	}
	{
		if (((int32_t)((int32_t)p1&(int32_t)((int32_t)64))))
		{
			goto IL_003a;
		}
	}

IL_0029:
	{
		if (((int32_t)((int32_t)p1&(int32_t)((int32_t)16))))
		{
			goto IL_003a;
		}
	}
	{
		t160 * L_1 = (t160 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t160_TI));
		m2582(L_1, (t11*) &_stringLiteral1825, &m2582_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_003a:
	{
		if (p3)
		{
			goto IL_0052;
		}
	}
	{
		t1607 * L_2 = (__this->f20);
		t1602 * L_3 = (L_2->f14);
		t114 * L_4 = (L_3->f24);
		p3 = L_4;
	}

IL_0052:
	{
		t1625 * L_5 = (t1625 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1625_TI));
		m8310(L_5, __this, p0, p1, p2, p3, p4, p5, p6, p7, p8, &m8310_MI);
		V_0 = L_5;
		m8412(__this, V_0, &m8412_MI);
		return V_0;
	}
}
extern MethodInfo m8416_MI;
 void m8416 (t1612 * __this, t695 * p0, t695 * p1, MethodInfo* method){
	t1625 * V_0 = {0};
	{
		if (p0)
		{
			goto IL_000e;
		}
	}
	{
		t484 * L_0 = (t484 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t484_TI));
		m3596(L_0, (t11*) &_stringLiteral1826, &m3596_MI);
		il2cpp_codegen_raise_exception(L_0);
	}

IL_000e:
	{
		if (p1)
		{
			goto IL_001c;
		}
	}
	{
		t484 * L_1 = (t484 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t484_TI));
		m3596(L_1, (t11*) &_stringLiteral1827, &m3596_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_001c:
	{
		m8441(__this, &m8441_MI);
		t114 * L_2 = (t114 *)VirtFuncInvoker0< t114 * >::Invoke(&m3584_MI, p0);
		if ((((t114 *)L_2) == ((t1612 *)__this)))
		{
			goto IL_0036;
		}
	}
	{
		t160 * L_3 = (t160 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t160_TI));
		m2582(L_3, (t11*) &_stringLiteral1828, &m2582_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0036:
	{
		if (!((t1625 *)IsInst(p0, InitializedTypeInfo(&t1625_TI))))
		{
			goto IL_004c;
		}
	}
	{
		V_0 = ((t1625 *)Castclass(p0, InitializedTypeInfo(&t1625_TI)));
		m8333(V_0, p1, &m8333_MI);
	}

IL_004c:
	{
		return;
	}
}
extern MethodInfo m8417_MI;
 t1408* m8417 (t1612 * __this, int32_t p0, MethodInfo* method){
	{
		bool L_0 = m8439(__this, &m8439_MI);
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		t114 * L_1 = (__this->f24);
		t1408* L_2 = (t1408*)VirtFuncInvoker1< t1408*, int32_t >::Invoke(&m11190_MI, L_1, p0);
		return L_2;
	}

IL_0015:
	{
		bool L_3 = m8438(__this, &m8438_MI);
		if (L_3)
		{
			goto IL_0023;
		}
	}
	{
		t491 * L_4 = (t491 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t491_TI));
		m2164(L_4, &m2164_MI);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0023:
	{
		t1408* L_5 = m8418(__this, p0, &m8418_MI);
		return L_5;
	}
}
 t1408* m8418 (t1612 * __this, int32_t p0, MethodInfo* method){
	t996 * V_0 = {0};
	bool V_1 = false;
	int32_t V_2 = {0};
	t1610 * V_3 = {0};
	t1651* V_4 = {0};
	int32_t V_5 = 0;
	t1408* V_6 = {0};
	{
		t1651* L_0 = (__this->f15);
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		return ((t1408*)SZArrayNew(InitializedTypeInfo(&t1408_TI), 0));
	}

IL_000f:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t996_TI));
		t996 * L_1 = (t996 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t996_TI));
		m4773(L_1, &m4773_MI);
		V_0 = L_1;
		t1651* L_2 = (__this->f15);
		V_4 = L_2;
		V_5 = 0;
		goto IL_0079;
	}

IL_0022:
	{
		int32_t L_3 = V_5;
		V_3 = (*(t1610 **)(t1610 **)SZArrayLdElema(V_4, L_3));
		V_1 = 0;
		int32_t L_4 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m8151_MI, V_3);
		V_2 = L_4;
		if ((((uint32_t)((int32_t)((int32_t)V_2&(int32_t)7))) != ((uint32_t)6)))
		{
			goto IL_0041;
		}
	}
	{
		if (!((int32_t)((int32_t)p0&(int32_t)((int32_t)16))))
		{
			goto IL_003f;
		}
	}
	{
		V_1 = 1;
	}

IL_003f:
	{
		goto IL_0049;
	}

IL_0041:
	{
		if (!((int32_t)((int32_t)p0&(int32_t)((int32_t)32))))
		{
			goto IL_0049;
		}
	}
	{
		V_1 = 1;
	}

IL_0049:
	{
		if (V_1)
		{
			goto IL_004e;
		}
	}
	{
		goto IL_0073;
	}

IL_004e:
	{
		V_1 = 0;
		if (!((int32_t)((int32_t)V_2&(int32_t)((int32_t)16))))
		{
			goto IL_005f;
		}
	}
	{
		if (!((int32_t)((int32_t)p0&(int32_t)8)))
		{
			goto IL_005d;
		}
	}
	{
		V_1 = 1;
	}

IL_005d:
	{
		goto IL_0066;
	}

IL_005f:
	{
		if (!((int32_t)((int32_t)p0&(int32_t)4)))
		{
			goto IL_0066;
		}
	}
	{
		V_1 = 1;
	}

IL_0066:
	{
		if (V_1)
		{
			goto IL_006b;
		}
	}
	{
		goto IL_0073;
	}

IL_006b:
	{
		VirtFuncInvoker1< int32_t, t5 * >::Invoke(&m4784_MI, V_0, V_3);
	}

IL_0073:
	{
		V_5 = ((int32_t)(V_5+1));
	}

IL_0079:
	{
		if ((((int32_t)V_5) < ((int32_t)(((int32_t)(((t107 *)V_4)->max_length))))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_5 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m4769_MI, V_0);
		V_6 = ((t1408*)SZArrayNew(InitializedTypeInfo(&t1408_TI), L_5));
		VirtActionInvoker1< t107 * >::Invoke(&m5048_MI, V_0, (t107 *)(t107 *)V_6);
		return V_6;
	}
}
extern MethodInfo m8419_MI;
 t114 * m8419 (t1612 * __this, MethodInfo* method){
	{
		t491 * L_0 = (t491 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t491_TI));
		m2164(L_0, &m2164_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m8420_MI;
 t1403 * m8420 (t1612 * __this, t11* p0, int32_t p1, MethodInfo* method){
	{
		m8442(__this, &m8442_MI);
		t114 * L_0 = (__this->f24);
		t1403 * L_1 = (t1403 *)VirtFuncInvoker2< t1403 *, t11*, int32_t >::Invoke(&m11186_MI, L_0, p0, p1);
		return L_1;
	}
}
extern MethodInfo m8421_MI;
 t1404 * m8421 (t1612 * __this, t11* p0, int32_t p1, MethodInfo* method){
	bool V_0 = false;
	int32_t V_1 = {0};
	t1404 * V_2 = {0};
	t1652* V_3 = {0};
	int32_t V_4 = 0;
	{
		t114 * L_0 = (__this->f24);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		t114 * L_1 = (__this->f24);
		t1404 * L_2 = (t1404 *)VirtFuncInvoker2< t1404 *, t11*, int32_t >::Invoke(&m11187_MI, L_1, p0, p1);
		return L_2;
	}

IL_0016:
	{
		t1652* L_3 = (__this->f16);
		if (L_3)
		{
			goto IL_0020;
		}
	}
	{
		return (t1404 *)NULL;
	}

IL_0020:
	{
		t1652* L_4 = (__this->f16);
		V_3 = L_4;
		V_4 = 0;
		goto IL_0094;
	}

IL_002f:
	{
		int32_t L_5 = V_4;
		V_2 = (*(t1621 **)(t1621 **)SZArrayLdElema(V_3, L_5));
		if (V_2)
		{
			goto IL_0039;
		}
	}
	{
		goto IL_008e;
	}

IL_0039:
	{
		t11* L_6 = (t11*)VirtFuncInvoker0< t11* >::Invoke(&m3571_MI, V_2);
		IL2CPP_RUNTIME_CLASS_INIT((&t11_TI));
		bool L_7 = m2384(NULL, L_6, p0, &m2384_MI);
		if (!L_7)
		{
			goto IL_0049;
		}
	}
	{
		goto IL_008e;
	}

IL_0049:
	{
		V_0 = 0;
		int32_t L_8 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m11178_MI, V_2);
		V_1 = L_8;
		if ((((uint32_t)((int32_t)((int32_t)V_1&(int32_t)7))) != ((uint32_t)6)))
		{
			goto IL_0062;
		}
	}
	{
		if (!((int32_t)((int32_t)p1&(int32_t)((int32_t)16))))
		{
			goto IL_0060;
		}
	}
	{
		V_0 = 1;
	}

IL_0060:
	{
		goto IL_006a;
	}

IL_0062:
	{
		if (!((int32_t)((int32_t)p1&(int32_t)((int32_t)32))))
		{
			goto IL_006a;
		}
	}
	{
		V_0 = 1;
	}

IL_006a:
	{
		if (V_0)
		{
			goto IL_006f;
		}
	}
	{
		goto IL_008e;
	}

IL_006f:
	{
		V_0 = 0;
		if (!((int32_t)((int32_t)V_1&(int32_t)((int32_t)16))))
		{
			goto IL_0080;
		}
	}
	{
		if (!((int32_t)((int32_t)p1&(int32_t)8)))
		{
			goto IL_007e;
		}
	}
	{
		V_0 = 1;
	}

IL_007e:
	{
		goto IL_0087;
	}

IL_0080:
	{
		if (!((int32_t)((int32_t)p1&(int32_t)4)))
		{
			goto IL_0087;
		}
	}
	{
		V_0 = 1;
	}

IL_0087:
	{
		if (V_0)
		{
			goto IL_008c;
		}
	}
	{
		goto IL_008e;
	}

IL_008c:
	{
		return V_2;
	}

IL_008e:
	{
		V_4 = ((int32_t)(V_4+1));
	}

IL_0094:
	{
		if ((((int32_t)V_4) < ((int32_t)(((int32_t)(((t107 *)V_3)->max_length))))))
		{
			goto IL_002f;
		}
	}
	{
		return (t1404 *)NULL;
	}
}
extern MethodInfo m8422_MI;
 t1405* m8422 (t1612 * __this, int32_t p0, MethodInfo* method){
	t996 * V_0 = {0};
	bool V_1 = false;
	int32_t V_2 = {0};
	t1404 * V_3 = {0};
	t1652* V_4 = {0};
	int32_t V_5 = 0;
	t1405* V_6 = {0};
	{
		t114 * L_0 = (__this->f24);
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		t114 * L_1 = (__this->f24);
		t1405* L_2 = (t1405*)VirtFuncInvoker1< t1405*, int32_t >::Invoke(&m11188_MI, L_1, p0);
		return L_2;
	}

IL_0015:
	{
		t1652* L_3 = (__this->f16);
		if (L_3)
		{
			goto IL_0024;
		}
	}
	{
		return ((t1405*)SZArrayNew(InitializedTypeInfo(&t1405_TI), 0));
	}

IL_0024:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t996_TI));
		t996 * L_4 = (t996 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t996_TI));
		m4773(L_4, &m4773_MI);
		V_0 = L_4;
		t1652* L_5 = (__this->f16);
		V_4 = L_5;
		V_5 = 0;
		goto IL_0096;
	}

IL_003a:
	{
		int32_t L_6 = V_5;
		V_3 = (*(t1621 **)(t1621 **)SZArrayLdElema(V_4, L_6));
		if (V_3)
		{
			goto IL_0045;
		}
	}
	{
		goto IL_0090;
	}

IL_0045:
	{
		V_1 = 0;
		int32_t L_7 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m11178_MI, V_3);
		V_2 = L_7;
		if ((((uint32_t)((int32_t)((int32_t)V_2&(int32_t)7))) != ((uint32_t)6)))
		{
			goto IL_005e;
		}
	}
	{
		if (!((int32_t)((int32_t)p0&(int32_t)((int32_t)16))))
		{
			goto IL_005c;
		}
	}
	{
		V_1 = 1;
	}

IL_005c:
	{
		goto IL_0066;
	}

IL_005e:
	{
		if (!((int32_t)((int32_t)p0&(int32_t)((int32_t)32))))
		{
			goto IL_0066;
		}
	}
	{
		V_1 = 1;
	}

IL_0066:
	{
		if (V_1)
		{
			goto IL_006b;
		}
	}
	{
		goto IL_0090;
	}

IL_006b:
	{
		V_1 = 0;
		if (!((int32_t)((int32_t)V_2&(int32_t)((int32_t)16))))
		{
			goto IL_007c;
		}
	}
	{
		if (!((int32_t)((int32_t)p0&(int32_t)8)))
		{
			goto IL_007a;
		}
	}
	{
		V_1 = 1;
	}

IL_007a:
	{
		goto IL_0083;
	}

IL_007c:
	{
		if (!((int32_t)((int32_t)p0&(int32_t)4)))
		{
			goto IL_0083;
		}
	}
	{
		V_1 = 1;
	}

IL_0083:
	{
		if (V_1)
		{
			goto IL_0088;
		}
	}
	{
		goto IL_0090;
	}

IL_0088:
	{
		VirtFuncInvoker1< int32_t, t5 * >::Invoke(&m4784_MI, V_0, V_3);
	}

IL_0090:
	{
		V_5 = ((int32_t)(V_5+1));
	}

IL_0096:
	{
		if ((((int32_t)V_5) < ((int32_t)(((int32_t)(((t107 *)V_4)->max_length))))))
		{
			goto IL_003a;
		}
	}
	{
		int32_t L_8 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m4769_MI, V_0);
		V_6 = ((t1405*)SZArrayNew(InitializedTypeInfo(&t1405_TI), L_8));
		VirtActionInvoker1< t107 * >::Invoke(&m5048_MI, V_0, (t107 *)(t107 *)V_6);
		return V_6;
	}
}
extern MethodInfo m8423_MI;
 t675* m8423 (t1612 * __this, MethodInfo* method){
	t675* V_0 = {0};
	{
		bool L_0 = m8439(__this, &m8439_MI);
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		t114 * L_1 = (__this->f24);
		t675* L_2 = (t675*)VirtFuncInvoker0< t675* >::Invoke(&m11185_MI, L_1);
		return L_2;
	}

IL_0014:
	{
		t675* L_3 = (__this->f12);
		if (!L_3)
		{
			goto IL_0039;
		}
	}
	{
		t675* L_4 = (__this->f12);
		V_0 = ((t675*)SZArrayNew(InitializedTypeInfo(&t675_TI), (((int32_t)(((t107 *)L_4)->max_length)))));
		t675* L_5 = (__this->f12);
		VirtActionInvoker2< t107 *, int32_t >::Invoke(&m4993_MI, L_5, (t107 *)(t107 *)V_0, 0);
		return V_0;
	}

IL_0039:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t114_TI));
		return (((t114_SFs*)InitializedTypeInfo(&t114_TI)->static_fields)->f3);
	}
}
 t1406* m8424 (t1612 * __this, t11* p0, int32_t p1, bool p2, t114 * p3, MethodInfo* method){
	t1406* V_0 = {0};
	bool V_1 = false;
	int32_t V_2 = {0};
	t1406* V_3 = {0};
	t996 * V_4 = {0};
	bool V_5 = false;
	int32_t V_6 = 0;
	t695 * V_7 = {0};
	t996 * V_8 = {0};
	t695 * V_9 = {0};
	t1406* V_10 = {0};
	int32_t V_11 = 0;
	t1406* V_12 = {0};
	int32_t V_13 = {0};
	{
		if (((int32_t)((int32_t)p1&(int32_t)2)))
		{
			goto IL_011e;
		}
	}
	{
		t114 * L_0 = (__this->f10);
		if (!L_0)
		{
			goto IL_011e;
		}
	}
	{
		t114 * L_1 = (__this->f10);
		t1406* L_2 = (t1406*)VirtFuncInvoker1< t1406*, int32_t >::Invoke(&m11189_MI, L_1, p1);
		V_3 = L_2;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t996_TI));
		t996 * L_3 = (t996 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t996_TI));
		m4975(L_3, (((int32_t)(((t107 *)V_3)->max_length))), &m4975_MI);
		V_4 = L_3;
		V_5 = ((((int32_t)((((int32_t)((int32_t)((int32_t)p1&(int32_t)((int32_t)64)))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		V_6 = 0;
		goto IL_00c1;
	}

IL_003e:
	{
		int32_t L_4 = V_6;
		V_7 = (*(t695 **)(t695 **)SZArrayLdElema(V_3, L_4));
		int32_t L_5 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m11177_MI, V_7);
		V_2 = L_5;
		bool L_6 = (bool)VirtFuncInvoker0< bool >::Invoke(&m3598_MI, V_7);
		if (!L_6)
		{
			goto IL_005b;
		}
	}
	{
		if (V_5)
		{
			goto IL_005b;
		}
	}
	{
		goto IL_00bb;
	}

IL_005b:
	{
		V_13 = ((int32_t)((int32_t)V_2&(int32_t)7));
		if (((int32_t)(V_13-1)) == 0)
		{
			goto IL_009d;
		}
		if (((int32_t)(V_13-1)) == 1)
		{
			goto IL_00a1;
		}
		if (((int32_t)(V_13-1)) == 2)
		{
			goto IL_0090;
		}
		if (((int32_t)(V_13-1)) == 3)
		{
			goto IL_00a1;
		}
		if (((int32_t)(V_13-1)) == 4)
		{
			goto IL_00a1;
		}
		if (((int32_t)(V_13-1)) == 5)
		{
			goto IL_0083;
		}
	}
	{
		goto IL_00a1;
	}

IL_0083:
	{
		V_1 = ((((int32_t)((((int32_t)((int32_t)((int32_t)p1&(int32_t)((int32_t)16)))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_00ae;
	}

IL_0090:
	{
		V_1 = ((((int32_t)((((int32_t)((int32_t)((int32_t)p1&(int32_t)((int32_t)32)))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_00ae;
	}

IL_009d:
	{
		V_1 = 0;
		goto IL_00ae;
	}

IL_00a1:
	{
		V_1 = ((((int32_t)((((int32_t)((int32_t)((int32_t)p1&(int32_t)((int32_t)32)))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_00ae;
	}

IL_00ae:
	{
		if (!V_1)
		{
			goto IL_00bb;
		}
	}
	{
		VirtFuncInvoker1< int32_t, t5 * >::Invoke(&m4784_MI, V_4, V_7);
	}

IL_00bb:
	{
		V_6 = ((int32_t)(V_6+1));
	}

IL_00c1:
	{
		if ((((int32_t)V_6) < ((int32_t)(((int32_t)(((t107 *)V_3)->max_length))))))
		{
			goto IL_003e;
		}
	}
	{
		t1650* L_7 = (__this->f14);
		if (L_7)
		{
			goto IL_00ea;
		}
	}
	{
		int32_t L_8 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m4769_MI, V_4);
		V_0 = ((t1406*)SZArrayNew(InitializedTypeInfo(&t1406_TI), L_8));
		VirtActionInvoker1< t107 * >::Invoke(&m5048_MI, V_4, (t107 *)(t107 *)V_0);
		goto IL_011c;
	}

IL_00ea:
	{
		t1650* L_9 = (__this->f14);
		int32_t L_10 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m4769_MI, V_4);
		V_0 = ((t1406*)SZArrayNew(InitializedTypeInfo(&t1406_TI), ((int32_t)((((int32_t)(((t107 *)L_9)->max_length)))+L_10))));
		VirtActionInvoker2< t107 *, int32_t >::Invoke(&m4971_MI, V_4, (t107 *)(t107 *)V_0, 0);
		t1650* L_11 = (__this->f14);
		int32_t L_12 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m4769_MI, V_4);
		VirtActionInvoker2< t107 *, int32_t >::Invoke(&m4993_MI, L_11, (t107 *)(t107 *)V_0, L_12);
	}

IL_011c:
	{
		goto IL_0125;
	}

IL_011e:
	{
		t1650* L_13 = (__this->f14);
		V_0 = (t1406*)L_13;
	}

IL_0125:
	{
		if (V_0)
		{
			goto IL_012f;
		}
	}
	{
		return ((t1406*)SZArrayNew(InitializedTypeInfo(&t1406_TI), 0));
	}

IL_012f:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t996_TI));
		t996 * L_14 = (t996 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t996_TI));
		m4773(L_14, &m4773_MI);
		V_8 = L_14;
		V_10 = V_0;
		V_11 = 0;
		goto IL_01ba;
	}

IL_0141:
	{
		int32_t L_15 = V_11;
		V_9 = (*(t695 **)(t695 **)SZArrayLdElema(V_10, L_15));
		if (V_9)
		{
			goto IL_0151;
		}
	}
	{
		goto IL_01b4;
	}

IL_0151:
	{
		if (!p0)
		{
			goto IL_0166;
		}
	}
	{
		t11* L_16 = (t11*)VirtFuncInvoker0< t11* >::Invoke(&m3571_MI, V_9);
		IL2CPP_RUNTIME_CLASS_INIT((&t11_TI));
		int32_t L_17 = m6376(NULL, L_16, p0, p2, &m6376_MI);
		if (!L_17)
		{
			goto IL_0166;
		}
	}
	{
		goto IL_01b4;
	}

IL_0166:
	{
		V_1 = 0;
		int32_t L_18 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m11177_MI, V_9);
		V_2 = L_18;
		if ((((uint32_t)((int32_t)((int32_t)V_2&(int32_t)7))) != ((uint32_t)6)))
		{
			goto IL_0180;
		}
	}
	{
		if (!((int32_t)((int32_t)p1&(int32_t)((int32_t)16))))
		{
			goto IL_017e;
		}
	}
	{
		V_1 = 1;
	}

IL_017e:
	{
		goto IL_0188;
	}

IL_0180:
	{
		if (!((int32_t)((int32_t)p1&(int32_t)((int32_t)32))))
		{
			goto IL_0188;
		}
	}
	{
		V_1 = 1;
	}

IL_0188:
	{
		if (V_1)
		{
			goto IL_018d;
		}
	}
	{
		goto IL_01b4;
	}

IL_018d:
	{
		V_1 = 0;
		if (!((int32_t)((int32_t)V_2&(int32_t)((int32_t)16))))
		{
			goto IL_019e;
		}
	}
	{
		if (!((int32_t)((int32_t)p1&(int32_t)8)))
		{
			goto IL_019c;
		}
	}
	{
		V_1 = 1;
	}

IL_019c:
	{
		goto IL_01a5;
	}

IL_019e:
	{
		if (!((int32_t)((int32_t)p1&(int32_t)4)))
		{
			goto IL_01a5;
		}
	}
	{
		V_1 = 1;
	}

IL_01a5:
	{
		if (V_1)
		{
			goto IL_01aa;
		}
	}
	{
		goto IL_01b4;
	}

IL_01aa:
	{
		VirtFuncInvoker1< int32_t, t5 * >::Invoke(&m4784_MI, V_8, V_9);
	}

IL_01b4:
	{
		V_11 = ((int32_t)(V_11+1));
	}

IL_01ba:
	{
		if ((((int32_t)V_11) < ((int32_t)(((int32_t)(((t107 *)V_10)->max_length))))))
		{
			goto IL_0141;
		}
	}
	{
		int32_t L_19 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m4769_MI, V_8);
		V_12 = ((t1406*)SZArrayNew(InitializedTypeInfo(&t1406_TI), L_19));
		VirtActionInvoker1< t107 * >::Invoke(&m5048_MI, V_8, (t107 *)(t107 *)V_12);
		return V_12;
	}
}
extern MethodInfo m8425_MI;
 t1406* m8425 (t1612 * __this, int32_t p0, MethodInfo* method){
	{
		t1406* L_0 = m8424(__this, (t11*)NULL, p0, 0, __this, &m8424_MI);
		return L_0;
	}
}
extern MethodInfo m8426_MI;
 t695 * m8426 (t1612 * __this, t11* p0, int32_t p1, t769 * p2, int32_t p3, t675* p4, t772* p5, MethodInfo* method){
	bool V_0 = false;
	t1406* V_1 = {0};
	t695 * V_2 = {0};
	t1661* V_3 = {0};
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	t695 * V_6 = {0};
	t1406* V_7 = {0};
	int32_t V_8 = 0;
	t695 * V_9 = {0};
	t1406* V_10 = {0};
	int32_t V_11 = 0;
	int32_t G_B3_0 = 0;
	{
		m8442(__this, &m8442_MI);
		V_0 = ((((int32_t)((((int32_t)((int32_t)((int32_t)p1&(int32_t)1))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		t1406* L_0 = m8424(__this, p0, p1, V_0, __this, &m8424_MI);
		V_1 = L_0;
		V_2 = (t695 *)NULL;
		if (!p4)
		{
			goto IL_0027;
		}
	}
	{
		G_B3_0 = (((int32_t)(((t107 *)p4)->max_length)));
		goto IL_0028;
	}

IL_0027:
	{
		G_B3_0 = 0;
	}

IL_0028:
	{
		V_4 = G_B3_0;
		V_5 = 0;
		V_7 = V_1;
		V_8 = 0;
		goto IL_0060;
	}

IL_0035:
	{
		int32_t L_1 = V_8;
		V_6 = (*(t695 **)(t695 **)SZArrayLdElema(V_7, L_1));
		if ((((int32_t)p3) == ((int32_t)3)))
		{
			goto IL_0051;
		}
	}
	{
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m8559_MI, V_6);
		if ((((int32_t)((int32_t)((int32_t)L_2&(int32_t)p3))) == ((int32_t)p3)))
		{
			goto IL_0051;
		}
	}
	{
		goto IL_005a;
	}

IL_0051:
	{
		V_2 = V_6;
		V_5 = ((int32_t)(V_5+1));
	}

IL_005a:
	{
		V_8 = ((int32_t)(V_8+1));
	}

IL_0060:
	{
		if ((((int32_t)V_8) < ((int32_t)(((int32_t)(((t107 *)V_7)->max_length))))))
		{
			goto IL_0035;
		}
	}
	{
		if (V_5)
		{
			goto IL_006e;
		}
	}
	{
		return (t695 *)NULL;
	}

IL_006e:
	{
		if ((((uint32_t)V_5) != ((uint32_t)1)))
		{
			goto IL_0079;
		}
	}
	{
		if (V_4)
		{
			goto IL_0079;
		}
	}
	{
		return V_2;
	}

IL_0079:
	{
		V_3 = ((t1661*)SZArrayNew(InitializedTypeInfo(&t1661_TI), V_5));
		if ((((uint32_t)V_5) != ((uint32_t)1)))
		{
			goto IL_008c;
		}
	}
	{
		ArrayElementTypeCheck (V_3, V_2);
		*((t774 **)(t774 **)SZArrayLdElema(V_3, 0)) = (t774 *)V_2;
		goto IL_00cc;
	}

IL_008c:
	{
		V_5 = 0;
		V_10 = V_1;
		V_11 = 0;
		goto IL_00c4;
	}

IL_0097:
	{
		int32_t L_3 = V_11;
		V_9 = (*(t695 **)(t695 **)SZArrayLdElema(V_10, L_3));
		if ((((int32_t)p3) == ((int32_t)3)))
		{
			goto IL_00b3;
		}
	}
	{
		int32_t L_4 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m8559_MI, V_9);
		if ((((int32_t)((int32_t)((int32_t)L_4&(int32_t)p3))) == ((int32_t)p3)))
		{
			goto IL_00b3;
		}
	}
	{
		goto IL_00be;
	}

IL_00b3:
	{
		int32_t L_5 = V_5;
		V_5 = ((int32_t)(L_5+1));
		ArrayElementTypeCheck (V_3, V_9);
		*((t774 **)(t774 **)SZArrayLdElema(V_3, L_5)) = (t774 *)V_9;
	}

IL_00be:
	{
		V_11 = ((int32_t)(V_11+1));
	}

IL_00c4:
	{
		if ((((int32_t)V_11) < ((int32_t)(((int32_t)(((t107 *)V_10)->max_length))))))
		{
			goto IL_0097;
		}
	}

IL_00cc:
	{
		if (p4)
		{
			goto IL_00dc;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t769_TI));
		t774 * L_6 = m8521(NULL, V_3, &m8521_MI);
		return ((t695 *)Castclass(L_6, InitializedTypeInfo(&t695_TI)));
	}

IL_00dc:
	{
		if (p2)
		{
			goto IL_00e8;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t769_TI));
		t769 * L_7 = m8518(NULL, &m8518_MI);
		p2 = L_7;
	}

IL_00e8:
	{
		t774 * L_8 = (t774 *)VirtFuncInvoker4< t774 *, int32_t, t1661*, t675*, t772* >::Invoke(&m11483_MI, p2, p1, V_3, p4, p5);
		return ((t695 *)Castclass(L_8, InitializedTypeInfo(&t695_TI)));
	}
}
extern MethodInfo m8427_MI;
 t1407 * m8427 (t1612 * __this, t11* p0, int32_t p1, t769 * p2, t114 * p3, t675* p4, t772* p5, MethodInfo* method){
	{
		t142 * L_0 = m8440(__this, &m8440_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m8428_MI;
 bool m8428 (t1612 * __this, MethodInfo* method){
	{
		bool L_0 = m8439(__this, &m8439_MI);
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
		t114 * L_1 = (__this->f24);
		bool L_2 = (bool)VirtFuncInvoker0< bool >::Invoke(&m6781_MI, L_1);
		return L_2;
	}
}
extern MethodInfo m8429_MI;
 t5 * m8429 (t1612 * __this, t11* p0, int32_t p1, t769 * p2, t5 * p3, t168* p4, t772* p5, t771 * p6, t585* p7, MethodInfo* method){
	{
		m8442(__this, &m8442_MI);
		t114 * L_0 = (__this->f24);
		t5 * L_1 = (t5 *)VirtFuncInvoker8< t5 *, t11*, int32_t, t769 *, t5 *, t168*, t772*, t771 *, t585* >::Invoke(&m3565_MI, L_0, p0, p1, p2, p3, p4, p5, p6, p7);
		return L_1;
	}
}
extern MethodInfo m8430_MI;
 bool m8430 (t1612 * __this, MethodInfo* method){
	{
		return 0;
	}
}
extern MethodInfo m8431_MI;
 bool m8431 (t1612 * __this, MethodInfo* method){
	{
		return 0;
	}
}
extern MethodInfo m8432_MI;
 bool m8432 (t1612 * __this, MethodInfo* method){
	{
		return 0;
	}
}
extern MethodInfo m8433_MI;
 bool m8433 (t1612 * __this, MethodInfo* method){
	{
		return 0;
	}
}
extern MethodInfo m8434_MI;
 bool m8434 (t1612 * __this, MethodInfo* method){
	int32_t G_B5_0 = 0;
	{
		t1607 * L_0 = (__this->f20);
		t1602 * L_1 = (L_0->f14);
		t114 * L_2 = (L_1->f22);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t114_TI));
		bool L_3 = m6807(NULL, __this, L_2, 0, &m6807_MI);
		if (L_3)
		{
			goto IL_002c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t114_TI));
		t114 * L_4 = m532(NULL, LoadTypeToken(&t267_0_0_0), &m532_MI);
		bool L_5 = m6807(NULL, __this, L_4, 0, &m6807_MI);
		if (!L_5)
		{
			goto IL_0057;
		}
	}

IL_002c:
	{
		t1607 * L_6 = (__this->f20);
		t1602 * L_7 = (L_6->f14);
		t114 * L_8 = (L_7->f22);
		if ((((t1612 *)__this) == ((t114 *)L_8)))
		{
			goto IL_0057;
		}
	}
	{
		t1607 * L_9 = (__this->f20);
		t1602 * L_10 = (L_9->f14);
		t114 * L_11 = (L_10->f23);
		G_B5_0 = ((((int32_t)((((t1612 *)__this) == ((t114 *)L_11))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0058;
	}

IL_0057:
	{
		G_B5_0 = 0;
	}

IL_0058:
	{
		return G_B5_0;
	}
}
extern MethodInfo m8435_MI;
 t114 * m8435 (t1612 * __this, t675* p0, MethodInfo* method){
	{
		t114 * L_0 = m3625(__this, p0, &m3625_MI);
		return L_0;
	}
}
extern MethodInfo m8436_MI;
 t115  m8436 (t1612 * __this, MethodInfo* method){
	{
		m8442(__this, &m8442_MI);
		t114 * L_0 = (__this->f24);
		t115  L_1 = (t115 )VirtFuncInvoker0< t115  >::Invoke(&m6797_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m8437_MI;
 int32_t m8437 (t1612 * __this, t5 * p0, int32_t p1, bool p2, MethodInfo* method){
	{
		t1607 * L_0 = (__this->f20);
		int32_t L_1 = m8360(L_0, p0, p1, p2, &m8360_MI);
		return L_1;
	}
}
 bool m8438 (t1612 * __this, MethodInfo* method){
	{
		t1607 * L_0 = (__this->f20);
		t1602 * L_1 = (L_0->f14);
		bool L_2 = m8135(L_1, &m8135_MI);
		return L_2;
	}
}
 bool m8439 (t1612 * __this, MethodInfo* method){
	{
		t114 * L_0 = (__this->f24);
		return ((((int32_t)((((t114 *)L_0) == ((t5 *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
 t142 * m8440 (t1612 * __this, MethodInfo* method){
	{
		t491 * L_0 = (t491 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t491_TI));
		m4781(L_0, (t11*) &_stringLiteral1558, &m4781_MI);
		return L_0;
	}
}
 void m8441 (t1612 * __this, MethodInfo* method){
	{
		bool L_0 = m8439(__this, &m8439_MI);
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		t133 * L_1 = (t133 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t133_TI));
		m4759(L_1, (t11*) &_stringLiteral1829, &m4759_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0013:
	{
		return;
	}
}
 void m8442 (t1612 * __this, MethodInfo* method){
	{
		bool L_0 = m8439(__this, &m8439_MI);
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		t142 * L_1 = m8440(__this, &m8440_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000f:
	{
		return;
	}
}
 void m8443 (t1612 * __this, t11* p0, t11* p1, MethodInfo* method){
	{
		if (p1)
		{
			goto IL_000a;
		}
	}
	{
		t484 * L_0 = (t484 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t484_TI));
		m3596(L_0, p0, &m3596_MI);
		il2cpp_codegen_raise_exception(L_0);
	}

IL_000a:
	{
		int32_t L_1 = m2358(p1, &m2358_MI);
		if (L_1)
		{
			goto IL_001e;
		}
	}
	{
		t160 * L_2 = (t160 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t160_TI));
		m614(L_2, (t11*) &_stringLiteral1830, p0, &m614_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_001e:
	{
		uint16_t L_3 = m2385(p1, 0, &m2385_MI);
		if (L_3)
		{
			goto IL_0033;
		}
	}
	{
		t160 * L_4 = (t160 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t160_TI));
		m614(L_4, (t11*) &_stringLiteral1831, p0, &m614_MI);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0033:
	{
		return;
	}
}
extern MethodInfo m8444_MI;
 t11* m8444 (t1612 * __this, MethodInfo* method){
	{
		t11* L_0 = (t11*)VirtFuncInvoker0< t11* >::Invoke(&m8401_MI, __this);
		return L_0;
	}
}
extern MethodInfo m8445_MI;
 bool m8445 (t1612 * __this, t114 * p0, MethodInfo* method){
	{
		bool L_0 = m3627(__this, p0, &m3627_MI);
		return L_0;
	}
}
extern MethodInfo m8446_MI;
 bool m8446 (t1612 * __this, t114 * p0, MethodInfo* method){
	{
		bool L_0 = m6810(__this, p0, &m6810_MI);
		return L_0;
	}
}
extern MethodInfo m8447_MI;
 bool m8447 (t1612 * __this, t114 * p0, MethodInfo* method){
	t114 * V_0 = {0};
	t675* V_1 = {0};
	int32_t V_2 = 0;
	{
		if ((((t114 *)p0) != ((t1612 *)__this)))
		{
			goto IL_0006;
		}
	}
	{
		return 1;
	}

IL_0006:
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(&m6789_MI, p0);
		if (!L_0)
		{
			goto IL_0066;
		}
	}
	{
		t114 * L_1 = (__this->f10);
		if (!L_1)
		{
			goto IL_002e;
		}
	}
	{
		bool L_2 = m8439(__this, &m8439_MI);
		if (!L_2)
		{
			goto IL_002e;
		}
	}
	{
		t114 * L_3 = (__this->f10);
		bool L_4 = (bool)VirtFuncInvoker1< bool, t114 * >::Invoke(&m3627_MI, p0, L_3);
		if (!L_4)
		{
			goto IL_002e;
		}
	}
	{
		return 1;
	}

IL_002e:
	{
		t675* L_5 = (__this->f12);
		if (L_5)
		{
			goto IL_0038;
		}
	}
	{
		return 0;
	}

IL_0038:
	{
		t675* L_6 = (__this->f12);
		V_1 = L_6;
		V_2 = 0;
		goto IL_0056;
	}

IL_0043:
	{
		int32_t L_7 = V_2;
		V_0 = (*(t114 **)(t114 **)SZArrayLdElema(V_1, L_7));
		bool L_8 = (bool)VirtFuncInvoker1< bool, t114 * >::Invoke(&m3627_MI, p0, V_0);
		if (!L_8)
		{
			goto IL_0052;
		}
	}
	{
		return 1;
	}

IL_0052:
	{
		V_2 = ((int32_t)(V_2+1));
	}

IL_0056:
	{
		if ((((int32_t)V_2) < ((int32_t)(((int32_t)(((t107 *)V_1)->max_length))))))
		{
			goto IL_0043;
		}
	}
	{
		bool L_9 = m8439(__this, &m8439_MI);
		if (L_9)
		{
			goto IL_0066;
		}
	}
	{
		return 0;
	}

IL_0066:
	{
		t114 * L_10 = (__this->f10);
		if (L_10)
		{
			goto IL_007c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t114_TI));
		t114 * L_11 = m532(NULL, LoadTypeToken(&t5_0_0_0), &m532_MI);
		return ((((t114 *)p0) == ((t114 *)L_11))? 1 : 0);
	}

IL_007c:
	{
		t114 * L_12 = (__this->f10);
		bool L_13 = (bool)VirtFuncInvoker1< bool, t114 * >::Invoke(&m3627_MI, p0, L_12);
		return L_13;
	}
}
extern MethodInfo m8448_MI;
 t675* m8448 (t1612 * __this, MethodInfo* method){
	t675* V_0 = {0};
	{
		t1638* L_0 = (__this->f23);
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (t675*)NULL;
	}

IL_000a:
	{
		t1638* L_1 = (__this->f23);
		V_0 = ((t675*)SZArrayNew(InitializedTypeInfo(&t675_TI), (((int32_t)(((t107 *)L_1)->max_length)))));
		t1638* L_2 = (__this->f23);
		VirtActionInvoker2< t107 *, int32_t >::Invoke(&m4993_MI, L_2, (t107 *)(t107 *)V_0, 0);
		return V_0;
	}
}
extern MethodInfo m8449_MI;
 t114 * m8449 (t1612 * __this, MethodInfo* method){
	{
		t1638* L_0 = (__this->f23);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		t133 * L_1 = (t133 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t133_TI));
		m4759(L_1, (t11*) &_stringLiteral1832, &m4759_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0013:
	{
		return __this;
	}
}
extern MethodInfo m8450_MI;
 bool m8450 (t1612 * __this, MethodInfo* method){
	{
		t1638* L_0 = (__this->f23);
		return ((((int32_t)((((t1638*)L_0) == ((t5 *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
extern MethodInfo m8451_MI;
 bool m8451 (t1612 * __this, MethodInfo* method){
	typedef bool (*m8451_ftn) (t1612 *);
	static m8451_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m8451_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.Emit.TypeBuilder::get_IsGenericParameter()");
	return _il2cpp_icall_func(__this);
}
 bool m8452 (t1612 * __this, MethodInfo* method){
	{
		t1638* L_0 = (__this->f23);
		return ((((int32_t)((((t1638*)L_0) == ((t5 *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
extern MethodInfo m8453_MI;
 bool m8453 (t1612 * __this, MethodInfo* method){
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(&m8452_MI, __this);
		return L_0;
	}
}
// Metadata Definition System.Reflection.Emit.TypeBuilder
extern Il2CppType t11_0_0_1;
FieldInfo t1612_f8_FieldInfo = 
{
	"tname", &t11_0_0_1, &t1612_TI, offsetof(t1612, f8), &EmptyCustomAttributesCache};
extern Il2CppType t11_0_0_1;
FieldInfo t1612_f9_FieldInfo = 
{
	"nspace", &t11_0_0_1, &t1612_TI, offsetof(t1612, f9), &EmptyCustomAttributesCache};
extern Il2CppType t114_0_0_1;
FieldInfo t1612_f10_FieldInfo = 
{
	"parent", &t114_0_0_1, &t1612_TI, offsetof(t1612, f10), &EmptyCustomAttributesCache};
extern Il2CppType t114_0_0_1;
FieldInfo t1612_f11_FieldInfo = 
{
	"nesting_type", &t114_0_0_1, &t1612_TI, offsetof(t1612, f11), &EmptyCustomAttributesCache};
extern Il2CppType t675_0_0_3;
FieldInfo t1612_f12_FieldInfo = 
{
	"interfaces", &t675_0_0_3, &t1612_TI, offsetof(t1612, f12), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_3;
FieldInfo t1612_f13_FieldInfo = 
{
	"num_methods", &t110_0_0_3, &t1612_TI, offsetof(t1612, f13), &EmptyCustomAttributesCache};
extern Il2CppType t1650_0_0_3;
FieldInfo t1612_f14_FieldInfo = 
{
	"methods", &t1650_0_0_3, &t1612_TI, offsetof(t1612, f14), &EmptyCustomAttributesCache};
extern Il2CppType t1651_0_0_3;
FieldInfo t1612_f15_FieldInfo = 
{
	"ctors", &t1651_0_0_3, &t1612_TI, offsetof(t1612, f15), &EmptyCustomAttributesCache};
extern Il2CppType t1652_0_0_3;
FieldInfo t1612_f16_FieldInfo = 
{
	"fields", &t1652_0_0_3, &t1612_TI, offsetof(t1612, f16), &EmptyCustomAttributesCache};
extern Il2CppType t1640_0_0_3;
FieldInfo t1612_f17_FieldInfo = 
{
	"subtypes", &t1640_0_0_3, &t1612_TI, offsetof(t1612, f17), &EmptyCustomAttributesCache};
extern Il2CppType t1409_0_0_3;
FieldInfo t1612_f18_FieldInfo = 
{
	"attrs", &t1409_0_0_3, &t1612_TI, offsetof(t1612, f18), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t1612_f19_FieldInfo = 
{
	"table_idx", &t110_0_0_1, &t1612_TI, offsetof(t1612, f19), &EmptyCustomAttributesCache};
extern Il2CppType t1607_0_0_1;
FieldInfo t1612_f20_FieldInfo = 
{
	"pmodule", &t1607_0_0_1, &t1612_TI, offsetof(t1612, f20), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t1612_f21_FieldInfo = 
{
	"class_size", &t110_0_0_1, &t1612_TI, offsetof(t1612, f21), &EmptyCustomAttributesCache};
extern Il2CppType t1643_0_0_1;
FieldInfo t1612_f22_FieldInfo = 
{
	"packing_size", &t1643_0_0_1, &t1612_TI, offsetof(t1612, f22), &EmptyCustomAttributesCache};
extern Il2CppType t1638_0_0_1;
FieldInfo t1612_f23_FieldInfo = 
{
	"generic_params", &t1638_0_0_1, &t1612_TI, offsetof(t1612, f23), &EmptyCustomAttributesCache};
extern Il2CppType t114_0_0_1;
FieldInfo t1612_f24_FieldInfo = 
{
	"created", &t114_0_0_1, &t1612_TI, offsetof(t1612, f24), &EmptyCustomAttributesCache};
extern Il2CppType t11_0_0_1;
FieldInfo t1612_f25_FieldInfo = 
{
	"fullname", &t11_0_0_1, &t1612_TI, offsetof(t1612, f25), &EmptyCustomAttributesCache};
extern Il2CppType t114_0_0_1;
FieldInfo t1612_f26_FieldInfo = 
{
	"underlying_type", &t114_0_0_1, &t1612_TI, offsetof(t1612, f26), &EmptyCustomAttributesCache};
static FieldInfo* t1612_FIs[] =
{
	&t1612_f8_FieldInfo,
	&t1612_f9_FieldInfo,
	&t1612_f10_FieldInfo,
	&t1612_f11_FieldInfo,
	&t1612_f12_FieldInfo,
	&t1612_f13_FieldInfo,
	&t1612_f14_FieldInfo,
	&t1612_f15_FieldInfo,
	&t1612_f16_FieldInfo,
	&t1612_f17_FieldInfo,
	&t1612_f18_FieldInfo,
	&t1612_f19_FieldInfo,
	&t1612_f20_FieldInfo,
	&t1612_f21_FieldInfo,
	&t1612_f22_FieldInfo,
	&t1612_f23_FieldInfo,
	&t1612_f24_FieldInfo,
	&t1612_f25_FieldInfo,
	&t1612_f26_FieldInfo,
	NULL
};
static PropertyInfo t1612____Assembly_PropertyInfo = 
{
	&t1612_TI, "Assembly", &m8395_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1612____AssemblyQualifiedName_PropertyInfo = 
{
	&t1612_TI, "AssemblyQualifiedName", &m8396_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1612____BaseType_PropertyInfo = 
{
	&t1612_TI, "BaseType", &m8397_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1612____DeclaringType_PropertyInfo = 
{
	&t1612_TI, "DeclaringType", &m8398_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1612____UnderlyingSystemType_PropertyInfo = 
{
	&t1612_TI, "UnderlyingSystemType", &m8399_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1612____FullName_PropertyInfo = 
{
	&t1612_TI, "FullName", &m8401_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1612____Module_PropertyInfo = 
{
	&t1612_TI, "Module", &m8402_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1612____Name_PropertyInfo = 
{
	&t1612_TI, "Name", &m8403_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1612____Namespace_PropertyInfo = 
{
	&t1612_TI, "Namespace", &m8404_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1612____ReflectedType_PropertyInfo = 
{
	&t1612_TI, "ReflectedType", &m8405_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1612____TypeHandle_PropertyInfo = 
{
	&t1612_TI, "TypeHandle", &m8436_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1612____IsCompilerContext_PropertyInfo = 
{
	&t1612_TI, "IsCompilerContext", &m8438_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1612____is_created_PropertyInfo = 
{
	&t1612_TI, "is_created", &m8439_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1612____ContainsGenericParameters_PropertyInfo = 
{
	&t1612_TI, "ContainsGenericParameters", &m8450_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1612____IsGenericParameter_PropertyInfo = 
{
	&t1612_TI, "IsGenericParameter", &m8451_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1612____IsGenericTypeDefinition_PropertyInfo = 
{
	&t1612_TI, "IsGenericTypeDefinition", &m8452_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1612____IsGenericType_PropertyInfo = 
{
	&t1612_TI, "IsGenericType", &m8453_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1612_PIs[] =
{
	&t1612____Assembly_PropertyInfo,
	&t1612____AssemblyQualifiedName_PropertyInfo,
	&t1612____BaseType_PropertyInfo,
	&t1612____DeclaringType_PropertyInfo,
	&t1612____UnderlyingSystemType_PropertyInfo,
	&t1612____FullName_PropertyInfo,
	&t1612____Module_PropertyInfo,
	&t1612____Name_PropertyInfo,
	&t1612____Namespace_PropertyInfo,
	&t1612____ReflectedType_PropertyInfo,
	&t1612____TypeHandle_PropertyInfo,
	&t1612____IsCompilerContext_PropertyInfo,
	&t1612____is_created_PropertyInfo,
	&t1612____ContainsGenericParameters_PropertyInfo,
	&t1612____IsGenericParameter_PropertyInfo,
	&t1612____IsGenericTypeDefinition_PropertyInfo,
	&t1612____IsGenericType_PropertyInfo,
	NULL
};
extern Il2CppType t1607_0_0_0;
extern Il2CppType t1409_0_0_0;
extern Il2CppType t1409_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t1612_m8391_ParameterInfos[] = 
{
	{"mb", 0, 134221631, &EmptyCustomAttributesCache, &t1607_0_0_0},
	{"attr", 1, 134221632, &EmptyCustomAttributesCache, &t1409_0_0_0},
	{"table_idx", 2, 134221633, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m8391_MI = 
{
	".ctor", (methodPointerType)&m8391, &t1612_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110_t110, t1612_m8391_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 3, false, false, 3112, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1607_0_0_0;
extern Il2CppType t11_0_0_0;
extern Il2CppType t1409_0_0_0;
extern Il2CppType t114_0_0_0;
extern Il2CppType t114_0_0_0;
extern Il2CppType t675_0_0_0;
extern Il2CppType t1643_0_0_0;
extern Il2CppType t110_0_0_0;
extern Il2CppType t114_0_0_0;
static ParameterInfo t1612_m8392_ParameterInfos[] = 
{
	{"mb", 0, 134221634, &EmptyCustomAttributesCache, &t1607_0_0_0},
	{"name", 1, 134221635, &EmptyCustomAttributesCache, &t11_0_0_0},
	{"attr", 2, 134221636, &EmptyCustomAttributesCache, &t1409_0_0_0},
	{"parent", 3, 134221637, &EmptyCustomAttributesCache, &t114_0_0_0},
	{"interfaces", 4, 134221638, &EmptyCustomAttributesCache, &t675_0_0_0},
	{"packing_size", 5, 134221639, &EmptyCustomAttributesCache, &t1643_0_0_0},
	{"type_size", 6, 134221640, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"nesting_type", 7, 134221641, &EmptyCustomAttributesCache, &t114_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t5_t110_t5_t5_t110_t110_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8392_MI = 
{
	".ctor", (methodPointerType)&m8392, &t1612_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t5_t110_t5_t5_t110_t110_t5, t1612_m8392_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 8, false, false, 3113, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1409_0_0_0;
extern void* RuntimeInvoker_t1409 (MethodInfo* method, void* obj, void** args);
MethodInfo m8393_MI = 
{
	"GetAttributeFlagsImpl", (methodPointerType)&m8393, &t1612_TI, &t1409_0_0_0, RuntimeInvoker_t1409, NULL, &EmptyCustomAttributesCache, 196, 0, 62, 0, false, false, 3114, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1612_0_0_0;
extern Il2CppType t1612_0_0_0;
static ParameterInfo t1612_m8394_ParameterInfos[] = 
{
	{"tb", 0, 134221642, &EmptyCustomAttributesCache, &t1612_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8394_MI = 
{
	"setup_internal_class", (methodPointerType)&m8394, &t1612_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t1612_m8394_ParameterInfos, &EmptyCustomAttributesCache, 129, 4096, 255, 1, false, false, 3115, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1194_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8395_MI = 
{
	"get_Assembly", (methodPointerType)&m8395, &t1612_TI, &t1194_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2246, 0, 14, 0, false, false, 3116, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t11_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8396_MI = 
{
	"get_AssemblyQualifiedName", (methodPointerType)&m8396, &t1612_TI, &t11_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2246, 0, 15, 0, false, false, 3117, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t114_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8397_MI = 
{
	"get_BaseType", (methodPointerType)&m8397, &t1612_TI, &t114_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2246, 0, 17, 0, false, false, 3118, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t114_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8398_MI = 
{
	"get_DeclaringType", (methodPointerType)&m8398, &t1612_TI, &t114_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2246, 0, 6, 0, false, false, 3119, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t114_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8399_MI = 
{
	"get_UnderlyingSystemType", (methodPointerType)&m8399, &t1612_TI, &t114_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2246, 0, 36, 0, false, false, 3120, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t11_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8400_MI = 
{
	"GetFullName", (methodPointerType)&m8400, &t1612_TI, &t11_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 3121, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t11_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8401_MI = 
{
	"get_FullName", (methodPointerType)&m8401, &t1612_TI, &t11_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2246, 0, 18, 0, false, false, 3122, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1402_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8402_MI = 
{
	"get_Module", (methodPointerType)&m8402, &t1612_TI, &t1402_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2246, 0, 10, 0, false, false, 3123, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t11_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8403_MI = 
{
	"get_Name", (methodPointerType)&m8403, &t1612_TI, &t11_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2246, 0, 8, 0, false, false, 3124, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t11_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8404_MI = 
{
	"get_Namespace", (methodPointerType)&m8404, &t1612_TI, &t11_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2246, 0, 34, 0, false, false, 3125, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t114_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8405_MI = 
{
	"get_ReflectedType", (methodPointerType)&m8405, &t1612_TI, &t114_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2246, 0, 9, 0, false, false, 3126, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t768_0_0_0;
extern Il2CppType t768_0_0_0;
extern Il2CppType t769_0_0_0;
extern Il2CppType t769_0_0_0;
extern Il2CppType t1411_0_0_0;
extern Il2CppType t1411_0_0_0;
extern Il2CppType t675_0_0_0;
extern Il2CppType t772_0_0_0;
extern Il2CppType t772_0_0_0;
static ParameterInfo t1612_m8406_ParameterInfos[] = 
{
	{"bindingAttr", 0, 134221643, &EmptyCustomAttributesCache, &t768_0_0_0},
	{"binder", 1, 134221644, &EmptyCustomAttributesCache, &t769_0_0_0},
	{"callConvention", 2, 134221645, &EmptyCustomAttributesCache, &t1411_0_0_0},
	{"types", 3, 134221646, &EmptyCustomAttributesCache, &t675_0_0_0},
	{"modifiers", 4, 134221647, &EmptyCustomAttributesCache, &t772_0_0_0},
};
extern Il2CppType t797_0_0_0;
extern void* RuntimeInvoker_t5_t110_t5_t110_t5_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8406_MI = 
{
	"GetConstructorImpl", (methodPointerType)&m8406, &t1612_TI, &t797_0_0_0, RuntimeInvoker_t5_t110_t5_t110_t5_t5, t1612_m8406_ParameterInfos, &EmptyCustomAttributesCache, 196, 0, 61, 5, false, false, 3127, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t114_0_0_0;
extern Il2CppType t108_0_0_0;
extern Il2CppType t108_0_0_0;
static ParameterInfo t1612_m8407_ParameterInfos[] = 
{
	{"attributeType", 0, 134221648, &EmptyCustomAttributesCache, &t114_0_0_0},
	{"inherit", 1, 134221649, &EmptyCustomAttributesCache, &t108_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5_t111 (MethodInfo* method, void* obj, void** args);
MethodInfo m8407_MI = 
{
	"IsDefined", (methodPointerType)&m8407, &t1612_TI, &t108_0_0_0, RuntimeInvoker_t108_t5_t111, t1612_m8407_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 11, 2, false, false, 3128, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t108_0_0_0;
static ParameterInfo t1612_m8408_ParameterInfos[] = 
{
	{"inherit", 0, 134221650, &EmptyCustomAttributesCache, &t108_0_0_0},
};
extern Il2CppType t168_0_0_0;
extern void* RuntimeInvoker_t5_t111 (MethodInfo* method, void* obj, void** args);
MethodInfo m8408_MI = 
{
	"GetCustomAttributes", (methodPointerType)&m8408, &t1612_TI, &t168_0_0_0, RuntimeInvoker_t5_t111, t1612_m8408_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 12, 1, false, false, 3129, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t114_0_0_0;
extern Il2CppType t108_0_0_0;
static ParameterInfo t1612_m8409_ParameterInfos[] = 
{
	{"attributeType", 0, 134221651, &EmptyCustomAttributesCache, &t114_0_0_0},
	{"inherit", 1, 134221652, &EmptyCustomAttributesCache, &t108_0_0_0},
};
extern Il2CppType t168_0_0_0;
extern void* RuntimeInvoker_t5_t5_t111 (MethodInfo* method, void* obj, void** args);
MethodInfo m8409_MI = 
{
	"GetCustomAttributes", (methodPointerType)&m8409, &t1612_TI, &t168_0_0_0, RuntimeInvoker_t5_t5_t111, t1612_m8409_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 13, 2, false, false, 3130, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1615_0_0_0;
extern Il2CppType t1615_0_0_0;
extern Il2CppType t1411_0_0_0;
extern Il2CppType t675_0_0_0;
static ParameterInfo t1612_m8410_ParameterInfos[] = 
{
	{"attributes", 0, 134221653, &EmptyCustomAttributesCache, &t1615_0_0_0},
	{"callingConvention", 1, 134221654, &EmptyCustomAttributesCache, &t1411_0_0_0},
	{"parameterTypes", 2, 134221655, &EmptyCustomAttributesCache, &t675_0_0_0},
};
extern Il2CppType t1610_0_0_0;
extern void* RuntimeInvoker_t5_t110_t110_t5 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t1612__CustomAttributeCache_m8410;
MethodInfo m8410_MI = 
{
	"DefineConstructor", (methodPointerType)&m8410, &t1612_TI, &t1610_0_0_0, RuntimeInvoker_t5_t110_t110_t5, t1612_m8410_ParameterInfos, &t1612__CustomAttributeCache_m8410, 134, 0, 255, 3, false, false, 3131, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1615_0_0_0;
extern Il2CppType t1411_0_0_0;
extern Il2CppType t675_0_0_0;
extern Il2CppType t1614_0_0_0;
extern Il2CppType t1614_0_0_0;
extern Il2CppType t1614_0_0_0;
static ParameterInfo t1612_m8411_ParameterInfos[] = 
{
	{"attributes", 0, 134221656, &EmptyCustomAttributesCache, &t1615_0_0_0},
	{"callingConvention", 1, 134221657, &EmptyCustomAttributesCache, &t1411_0_0_0},
	{"parameterTypes", 2, 134221658, &EmptyCustomAttributesCache, &t675_0_0_0},
	{"requiredCustomModifiers", 3, 134221659, &EmptyCustomAttributesCache, &t1614_0_0_0},
	{"optionalCustomModifiers", 4, 134221660, &EmptyCustomAttributesCache, &t1614_0_0_0},
};
extern Il2CppType t1610_0_0_0;
extern void* RuntimeInvoker_t5_t110_t110_t5_t5_t5 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t1612__CustomAttributeCache_m8411;
MethodInfo m8411_MI = 
{
	"DefineConstructor", (methodPointerType)&m8411, &t1612_TI, &t1610_0_0_0, RuntimeInvoker_t5_t110_t110_t5_t5_t5, t1612_m8411_ParameterInfos, &t1612__CustomAttributeCache_m8411, 134, 0, 255, 5, false, false, 3132, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1625_0_0_0;
extern Il2CppType t1625_0_0_0;
static ParameterInfo t1612_m8412_ParameterInfos[] = 
{
	{"mb", 0, 134221661, &EmptyCustomAttributesCache, &t1625_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8412_MI = 
{
	"append_method", (methodPointerType)&m8412, &t1612_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t1612_m8412_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 3133, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t11_0_0_0;
extern Il2CppType t1615_0_0_0;
extern Il2CppType t114_0_0_0;
extern Il2CppType t675_0_0_0;
static ParameterInfo t1612_m8413_ParameterInfos[] = 
{
	{"name", 0, 134221662, &EmptyCustomAttributesCache, &t11_0_0_0},
	{"attributes", 1, 134221663, &EmptyCustomAttributesCache, &t1615_0_0_0},
	{"returnType", 2, 134221664, &EmptyCustomAttributesCache, &t114_0_0_0},
	{"parameterTypes", 3, 134221665, &EmptyCustomAttributesCache, &t675_0_0_0},
};
extern Il2CppType t1625_0_0_0;
extern void* RuntimeInvoker_t5_t5_t110_t5_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8413_MI = 
{
	"DefineMethod", (methodPointerType)&m8413, &t1612_TI, &t1625_0_0_0, RuntimeInvoker_t5_t5_t110_t5_t5, t1612_m8413_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 4, false, false, 3134, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t11_0_0_0;
extern Il2CppType t1615_0_0_0;
extern Il2CppType t1411_0_0_0;
extern Il2CppType t114_0_0_0;
extern Il2CppType t675_0_0_0;
static ParameterInfo t1612_m8414_ParameterInfos[] = 
{
	{"name", 0, 134221666, &EmptyCustomAttributesCache, &t11_0_0_0},
	{"attributes", 1, 134221667, &EmptyCustomAttributesCache, &t1615_0_0_0},
	{"callingConvention", 2, 134221668, &EmptyCustomAttributesCache, &t1411_0_0_0},
	{"returnType", 3, 134221669, &EmptyCustomAttributesCache, &t114_0_0_0},
	{"parameterTypes", 4, 134221670, &EmptyCustomAttributesCache, &t675_0_0_0},
};
extern Il2CppType t1625_0_0_0;
extern void* RuntimeInvoker_t5_t5_t110_t110_t5_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8414_MI = 
{
	"DefineMethod", (methodPointerType)&m8414, &t1612_TI, &t1625_0_0_0, RuntimeInvoker_t5_t5_t110_t110_t5_t5, t1612_m8414_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 5, false, false, 3135, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t11_0_0_0;
extern Il2CppType t1615_0_0_0;
extern Il2CppType t1411_0_0_0;
extern Il2CppType t114_0_0_0;
extern Il2CppType t675_0_0_0;
extern Il2CppType t675_0_0_0;
extern Il2CppType t675_0_0_0;
extern Il2CppType t1614_0_0_0;
extern Il2CppType t1614_0_0_0;
static ParameterInfo t1612_m8415_ParameterInfos[] = 
{
	{"name", 0, 134221671, &EmptyCustomAttributesCache, &t11_0_0_0},
	{"attributes", 1, 134221672, &EmptyCustomAttributesCache, &t1615_0_0_0},
	{"callingConvention", 2, 134221673, &EmptyCustomAttributesCache, &t1411_0_0_0},
	{"returnType", 3, 134221674, &EmptyCustomAttributesCache, &t114_0_0_0},
	{"returnTypeRequiredCustomModifiers", 4, 134221675, &EmptyCustomAttributesCache, &t675_0_0_0},
	{"returnTypeOptionalCustomModifiers", 5, 134221676, &EmptyCustomAttributesCache, &t675_0_0_0},
	{"parameterTypes", 6, 134221677, &EmptyCustomAttributesCache, &t675_0_0_0},
	{"parameterTypeRequiredCustomModifiers", 7, 134221678, &EmptyCustomAttributesCache, &t1614_0_0_0},
	{"parameterTypeOptionalCustomModifiers", 8, 134221679, &EmptyCustomAttributesCache, &t1614_0_0_0},
};
extern Il2CppType t1625_0_0_0;
extern void* RuntimeInvoker_t5_t5_t110_t110_t5_t5_t5_t5_t5_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8415_MI = 
{
	"DefineMethod", (methodPointerType)&m8415, &t1612_TI, &t1625_0_0_0, RuntimeInvoker_t5_t5_t110_t110_t5_t5_t5_t5_t5_t5, t1612_m8415_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 9, false, false, 3136, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t695_0_0_0;
extern Il2CppType t695_0_0_0;
static ParameterInfo t1612_m8416_ParameterInfos[] = 
{
	{"methodInfoBody", 0, 134221680, &EmptyCustomAttributesCache, &t695_0_0_0},
	{"methodInfoDeclaration", 1, 134221681, &EmptyCustomAttributesCache, &t695_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8416_MI = 
{
	"DefineMethodOverride", (methodPointerType)&m8416, &t1612_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t5, t1612_m8416_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 2, false, false, 3137, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t768_0_0_0;
static ParameterInfo t1612_m8417_ParameterInfos[] = 
{
	{"bindingAttr", 0, 134221682, &EmptyCustomAttributesCache, &t768_0_0_0},
};
extern Il2CppType t1408_0_0_0;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t1612__CustomAttributeCache_m8417;
MethodInfo m8417_MI = 
{
	"GetConstructors", (methodPointerType)&m8417, &t1612_TI, &t1408_0_0_0, RuntimeInvoker_t5_t110, t1612_m8417_ParameterInfos, &t1612__CustomAttributeCache_m8417, 198, 0, 74, 1, false, false, 3138, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t768_0_0_0;
static ParameterInfo t1612_m8418_ParameterInfos[] = 
{
	{"bindingAttr", 0, 134221683, &EmptyCustomAttributesCache, &t768_0_0_0},
};
extern Il2CppType t1408_0_0_0;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m8418_MI = 
{
	"GetConstructorsInternal", (methodPointerType)&m8418, &t1612_TI, &t1408_0_0_0, RuntimeInvoker_t5_t110, t1612_m8418_ParameterInfos, &EmptyCustomAttributesCache, 131, 0, 255, 1, false, false, 3139, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t114_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8419_MI = 
{
	"GetElementType", (methodPointerType)&m8419, &t1612_TI, &t114_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 198, 0, 44, 0, false, false, 3140, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t11_0_0_0;
extern Il2CppType t768_0_0_0;
static ParameterInfo t1612_m8420_ParameterInfos[] = 
{
	{"name", 0, 134221684, &EmptyCustomAttributesCache, &t11_0_0_0},
	{"bindingAttr", 1, 134221685, &EmptyCustomAttributesCache, &t768_0_0_0},
};
extern Il2CppType t1403_0_0_0;
extern void* RuntimeInvoker_t5_t5_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m8420_MI = 
{
	"GetEvent", (methodPointerType)&m8420, &t1612_TI, &t1403_0_0_0, RuntimeInvoker_t5_t5_t110, t1612_m8420_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 45, 2, false, false, 3141, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t11_0_0_0;
extern Il2CppType t768_0_0_0;
static ParameterInfo t1612_m8421_ParameterInfos[] = 
{
	{"name", 0, 134221686, &EmptyCustomAttributesCache, &t11_0_0_0},
	{"bindingAttr", 1, 134221687, &EmptyCustomAttributesCache, &t768_0_0_0},
};
extern Il2CppType t1404_0_0_0;
extern void* RuntimeInvoker_t5_t5_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m8421_MI = 
{
	"GetField", (methodPointerType)&m8421, &t1612_TI, &t1404_0_0_0, RuntimeInvoker_t5_t5_t110, t1612_m8421_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 46, 2, false, false, 3142, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t768_0_0_0;
static ParameterInfo t1612_m8422_ParameterInfos[] = 
{
	{"bindingAttr", 0, 134221688, &EmptyCustomAttributesCache, &t768_0_0_0},
};
extern Il2CppType t1405_0_0_0;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m8422_MI = 
{
	"GetFields", (methodPointerType)&m8422, &t1612_TI, &t1405_0_0_0, RuntimeInvoker_t5_t110, t1612_m8422_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 47, 1, false, false, 3143, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t675_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8423_MI = 
{
	"GetInterfaces", (methodPointerType)&m8423, &t1612_TI, &t675_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 198, 0, 40, 0, false, false, 3144, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t11_0_0_0;
extern Il2CppType t768_0_0_0;
extern Il2CppType t108_0_0_0;
extern Il2CppType t114_0_0_0;
static ParameterInfo t1612_m8424_ParameterInfos[] = 
{
	{"name", 0, 134221689, &EmptyCustomAttributesCache, &t11_0_0_0},
	{"bindingAttr", 1, 134221690, &EmptyCustomAttributesCache, &t768_0_0_0},
	{"ignoreCase", 2, 134221691, &EmptyCustomAttributesCache, &t108_0_0_0},
	{"reflected_type", 3, 134221692, &EmptyCustomAttributesCache, &t114_0_0_0},
};
extern Il2CppType t1406_0_0_0;
extern void* RuntimeInvoker_t5_t5_t110_t111_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8424_MI = 
{
	"GetMethodsByName", (methodPointerType)&m8424, &t1612_TI, &t1406_0_0_0, RuntimeInvoker_t5_t5_t110_t111_t5, t1612_m8424_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 4, false, false, 3145, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t768_0_0_0;
static ParameterInfo t1612_m8425_ParameterInfos[] = 
{
	{"bindingAttr", 0, 134221693, &EmptyCustomAttributesCache, &t768_0_0_0},
};
extern Il2CppType t1406_0_0_0;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m8425_MI = 
{
	"GetMethods", (methodPointerType)&m8425, &t1612_TI, &t1406_0_0_0, RuntimeInvoker_t5_t110, t1612_m8425_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 54, 1, false, false, 3146, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t11_0_0_0;
extern Il2CppType t768_0_0_0;
extern Il2CppType t769_0_0_0;
extern Il2CppType t1411_0_0_0;
extern Il2CppType t675_0_0_0;
extern Il2CppType t772_0_0_0;
static ParameterInfo t1612_m8426_ParameterInfos[] = 
{
	{"name", 0, 134221694, &EmptyCustomAttributesCache, &t11_0_0_0},
	{"bindingAttr", 1, 134221695, &EmptyCustomAttributesCache, &t768_0_0_0},
	{"binder", 2, 134221696, &EmptyCustomAttributesCache, &t769_0_0_0},
	{"callConvention", 3, 134221697, &EmptyCustomAttributesCache, &t1411_0_0_0},
	{"types", 4, 134221698, &EmptyCustomAttributesCache, &t675_0_0_0},
	{"modifiers", 5, 134221699, &EmptyCustomAttributesCache, &t772_0_0_0},
};
extern Il2CppType t695_0_0_0;
extern void* RuntimeInvoker_t5_t5_t110_t5_t110_t5_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8426_MI = 
{
	"GetMethodImpl", (methodPointerType)&m8426, &t1612_TI, &t695_0_0_0, RuntimeInvoker_t5_t5_t110_t5_t110_t5_t5, t1612_m8426_ParameterInfos, &EmptyCustomAttributesCache, 196, 0, 53, 6, false, false, 3147, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t11_0_0_0;
extern Il2CppType t768_0_0_0;
extern Il2CppType t769_0_0_0;
extern Il2CppType t114_0_0_0;
extern Il2CppType t675_0_0_0;
extern Il2CppType t772_0_0_0;
static ParameterInfo t1612_m8427_ParameterInfos[] = 
{
	{"name", 0, 134221700, &EmptyCustomAttributesCache, &t11_0_0_0},
	{"bindingAttr", 1, 134221701, &EmptyCustomAttributesCache, &t768_0_0_0},
	{"binder", 2, 134221702, &EmptyCustomAttributesCache, &t769_0_0_0},
	{"returnType", 3, 134221703, &EmptyCustomAttributesCache, &t114_0_0_0},
	{"types", 4, 134221704, &EmptyCustomAttributesCache, &t675_0_0_0},
	{"modifiers", 5, 134221705, &EmptyCustomAttributesCache, &t772_0_0_0},
};
extern Il2CppType t1407_0_0_0;
extern void* RuntimeInvoker_t5_t5_t110_t5_t5_t5_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8427_MI = 
{
	"GetPropertyImpl", (methodPointerType)&m8427, &t1612_TI, &t1407_0_0_0, RuntimeInvoker_t5_t5_t110_t5_t5_t5_t5, t1612_m8427_ParameterInfos, &EmptyCustomAttributesCache, 196, 0, 60, 6, false, false, 3148, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
MethodInfo m8428_MI = 
{
	"HasElementTypeImpl", (methodPointerType)&m8428, &t1612_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 196, 0, 63, 0, false, false, 3149, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t11_0_0_0;
extern Il2CppType t768_0_0_0;
extern Il2CppType t769_0_0_0;
extern Il2CppType t5_0_0_0;
extern Il2CppType t168_0_0_0;
extern Il2CppType t168_0_0_0;
extern Il2CppType t772_0_0_0;
extern Il2CppType t771_0_0_0;
extern Il2CppType t771_0_0_0;
extern Il2CppType t585_0_0_0;
extern Il2CppType t585_0_0_0;
static ParameterInfo t1612_m8429_ParameterInfos[] = 
{
	{"name", 0, 134221706, &EmptyCustomAttributesCache, &t11_0_0_0},
	{"invokeAttr", 1, 134221707, &EmptyCustomAttributesCache, &t768_0_0_0},
	{"binder", 2, 134221708, &EmptyCustomAttributesCache, &t769_0_0_0},
	{"target", 3, 134221709, &EmptyCustomAttributesCache, &t5_0_0_0},
	{"args", 4, 134221710, &EmptyCustomAttributesCache, &t168_0_0_0},
	{"modifiers", 5, 134221711, &EmptyCustomAttributesCache, &t772_0_0_0},
	{"culture", 6, 134221712, &EmptyCustomAttributesCache, &t771_0_0_0},
	{"namedParameters", 7, 134221713, &EmptyCustomAttributesCache, &t585_0_0_0},
};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5_t5_t110_t5_t5_t5_t5_t5_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8429_MI = 
{
	"InvokeMember", (methodPointerType)&m8429, &t1612_TI, &t5_0_0_0, RuntimeInvoker_t5_t5_t110_t5_t5_t5_t5_t5_t5, t1612_m8429_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 75, 8, false, false, 3150, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
MethodInfo m8430_MI = 
{
	"IsArrayImpl", (methodPointerType)&m8430, &t1612_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 196, 0, 64, 0, false, false, 3151, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
MethodInfo m8431_MI = 
{
	"IsByRefImpl", (methodPointerType)&m8431, &t1612_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 196, 0, 65, 0, false, false, 3152, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
MethodInfo m8432_MI = 
{
	"IsPointerImpl", (methodPointerType)&m8432, &t1612_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 196, 0, 66, 0, false, false, 3153, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
MethodInfo m8433_MI = 
{
	"IsPrimitiveImpl", (methodPointerType)&m8433, &t1612_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 196, 0, 67, 0, false, false, 3154, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
MethodInfo m8434_MI = 
{
	"IsValueTypeImpl", (methodPointerType)&m8434, &t1612_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 196, 0, 68, 0, false, false, 3155, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t675_0_0_0;
extern CustomAttributesCache t1612__CustomAttributeCache_t1612_m8435_Arg0_ParameterInfo;
static ParameterInfo t1612_m8435_ParameterInfos[] = 
{
	{"typeArguments", 0, 134221714, &t1612__CustomAttributeCache_t1612_m8435_Arg0_ParameterInfo, &t675_0_0_0},
};
extern Il2CppType t114_0_0_0;
extern void* RuntimeInvoker_t5_t5 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t1612__CustomAttributeCache_m8435;
MethodInfo m8435_MI = 
{
	"MakeGenericType", (methodPointerType)&m8435, &t1612_TI, &t114_0_0_0, RuntimeInvoker_t5_t5, t1612_m8435_ParameterInfos, &t1612__CustomAttributeCache_m8435, 198, 0, 81, 1, false, false, 3156, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t115_0_0_0;
extern void* RuntimeInvoker_t115 (MethodInfo* method, void* obj, void** args);
MethodInfo m8436_MI = 
{
	"get_TypeHandle", (methodPointerType)&m8436, &t1612_TI, &t115_0_0_0, RuntimeInvoker_t115, NULL, &EmptyCustomAttributesCache, 2246, 0, 35, 0, false, false, 3157, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t5_0_0_0;
extern Il2CppType t110_0_0_0;
extern Il2CppType t108_0_0_0;
static ParameterInfo t1612_m8437_ParameterInfos[] = 
{
	{"obj", 0, 134221715, &EmptyCustomAttributesCache, &t5_0_0_0},
	{"table", 1, 134221716, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"inc", 2, 134221717, &EmptyCustomAttributesCache, &t108_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5_t110_t111 (MethodInfo* method, void* obj, void** args);
MethodInfo m8437_MI = 
{
	"get_next_table_index", (methodPointerType)&m8437, &t1612_TI, &t110_0_0_0, RuntimeInvoker_t110_t5_t110_t111, t1612_m8437_ParameterInfos, &EmptyCustomAttributesCache, 131, 0, 255, 3, false, false, 3158, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
MethodInfo m8438_MI = 
{
	"get_IsCompilerContext", (methodPointerType)&m8438, &t1612_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2179, 0, 255, 0, false, false, 3159, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
MethodInfo m8439_MI = 
{
	"get_is_created", (methodPointerType)&m8439, &t1612_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2179, 0, 255, 0, false, false, 3160, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t142_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8440_MI = 
{
	"not_supported", (methodPointerType)&m8440, &t1612_TI, &t142_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 3161, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m8441_MI = 
{
	"check_not_created", (methodPointerType)&m8441, &t1612_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 3162, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m8442_MI = 
{
	"check_created", (methodPointerType)&m8442, &t1612_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 3163, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t11_0_0_0;
extern Il2CppType t11_0_0_0;
static ParameterInfo t1612_m8443_ParameterInfos[] = 
{
	{"argName", 0, 134221718, &EmptyCustomAttributesCache, &t11_0_0_0},
	{"name", 1, 134221719, &EmptyCustomAttributesCache, &t11_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8443_MI = 
{
	"check_name", (methodPointerType)&m8443, &t1612_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t5, t1612_m8443_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, false, 3164, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t11_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8444_MI = 
{
	"ToString", (methodPointerType)&m8444, &t1612_TI, &t11_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 198, 0, 3, 0, false, false, 3165, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t114_0_0_0;
static ParameterInfo t1612_m8445_ParameterInfos[] = 
{
	{"c", 0, 134221720, &EmptyCustomAttributesCache, &t114_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t1612__CustomAttributeCache_m8445;
MethodInfo m8445_MI = 
{
	"IsAssignableFrom", (methodPointerType)&m8445, &t1612_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t1612_m8445_ParameterInfos, &t1612__CustomAttributeCache_m8445, 198, 0, 41, 1, false, false, 3166, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t114_0_0_0;
static ParameterInfo t1612_m8446_ParameterInfos[] = 
{
	{"c", 0, 134221721, &EmptyCustomAttributesCache, &t114_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t1612__CustomAttributeCache_m8446;
MethodInfo m8446_MI = 
{
	"IsSubclassOf", (methodPointerType)&m8446, &t1612_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t1612_m8446_ParameterInfos, &t1612__CustomAttributeCache_m8446, 198, 0, 39, 1, false, false, 3167, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t114_0_0_0;
static ParameterInfo t1612_m8447_ParameterInfos[] = 
{
	{"c", 0, 134221722, &EmptyCustomAttributesCache, &t114_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t1612__CustomAttributeCache_m8447;
MethodInfo m8447_MI = 
{
	"IsAssignableTo", (methodPointerType)&m8447, &t1612_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t1612_m8447_ParameterInfos, &t1612__CustomAttributeCache_m8447, 131, 0, 255, 1, false, false, 3168, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t675_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8448_MI = 
{
	"GetGenericArguments", (methodPointerType)&m8448, &t1612_TI, &t675_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 198, 0, 76, 0, false, false, 3169, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t114_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8449_MI = 
{
	"GetGenericTypeDefinition", (methodPointerType)&m8449, &t1612_TI, &t114_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 198, 0, 79, 0, false, false, 3170, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
MethodInfo m8450_MI = 
{
	"get_ContainsGenericParameters", (methodPointerType)&m8450, &t1612_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2246, 0, 77, 0, false, false, 3171, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
MethodInfo m8451_MI = 
{
	"get_IsGenericParameter", (methodPointerType)&m8451, &t1612_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2246, 4096, 82, 0, false, false, 3172, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
MethodInfo m8452_MI = 
{
	"get_IsGenericTypeDefinition", (methodPointerType)&m8452, &t1612_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2246, 0, 78, 0, false, false, 3173, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
MethodInfo m8453_MI = 
{
	"get_IsGenericType", (methodPointerType)&m8453, &t1612_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2246, 0, 80, 0, false, false, 3174, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1612_MIs[] =
{
	&m8391_MI,
	&m8392_MI,
	&m8393_MI,
	&m8394_MI,
	&m8395_MI,
	&m8396_MI,
	&m8397_MI,
	&m8398_MI,
	&m8399_MI,
	&m8400_MI,
	&m8401_MI,
	&m8402_MI,
	&m8403_MI,
	&m8404_MI,
	&m8405_MI,
	&m8406_MI,
	&m8407_MI,
	&m8408_MI,
	&m8409_MI,
	&m8410_MI,
	&m8411_MI,
	&m8412_MI,
	&m8413_MI,
	&m8414_MI,
	&m8415_MI,
	&m8416_MI,
	&m8417_MI,
	&m8418_MI,
	&m8419_MI,
	&m8420_MI,
	&m8421_MI,
	&m8422_MI,
	&m8423_MI,
	&m8424_MI,
	&m8425_MI,
	&m8426_MI,
	&m8427_MI,
	&m8428_MI,
	&m8429_MI,
	&m8430_MI,
	&m8431_MI,
	&m8432_MI,
	&m8433_MI,
	&m8434_MI,
	&m8435_MI,
	&m8436_MI,
	&m8437_MI,
	&m8438_MI,
	&m8439_MI,
	&m8440_MI,
	&m8441_MI,
	&m8442_MI,
	&m8443_MI,
	&m8444_MI,
	&m8445_MI,
	&m8446_MI,
	&m8447_MI,
	&m8448_MI,
	&m8449_MI,
	&m8450_MI,
	&m8451_MI,
	&m8452_MI,
	&m8453_MI,
	NULL
};
extern MethodInfo m6798_MI;
extern MethodInfo m6813_MI;
extern MethodInfo m6795_MI;
extern MethodInfo m6779_MI;
extern MethodInfo m6782_MI;
extern MethodInfo m6783_MI;
extern MethodInfo m6784_MI;
extern MethodInfo m6785_MI;
extern MethodInfo m6786_MI;
extern MethodInfo m6788_MI;
extern MethodInfo m6790_MI;
extern MethodInfo m6791_MI;
extern MethodInfo m3646_MI;
extern MethodInfo m6792_MI;
extern MethodInfo m6793_MI;
extern MethodInfo m6794_MI;
extern MethodInfo m6799_MI;
extern MethodInfo m6809_MI;
extern MethodInfo m6811_MI;
extern MethodInfo m6812_MI;
extern MethodInfo m6814_MI;
extern MethodInfo m6815_MI;
extern MethodInfo m6816_MI;
extern MethodInfo m3645_MI;
extern MethodInfo m6817_MI;
extern MethodInfo m6819_MI;
extern MethodInfo m6820_MI;
extern MethodInfo m6821_MI;
extern MethodInfo m6822_MI;
extern MethodInfo m6823_MI;
extern MethodInfo m6827_MI;
extern MethodInfo m6828_MI;
extern MethodInfo m3626_MI;
extern MethodInfo m6829_MI;
static MethodInfo* t1612_VT[] =
{
	&m6798_MI,
	&m465_MI,
	&m6813_MI,
	&m8444_MI,
	&m8409_MI,
	&m8407_MI,
	&m8398_MI,
	&m6795_MI,
	&m8403_MI,
	&m8405_MI,
	&m8402_MI,
	&m8407_MI,
	&m8408_MI,
	&m8409_MI,
	&m8395_MI,
	&m8396_MI,
	&m6779_MI,
	&m8397_MI,
	&m8401_MI,
	&m6781_MI,
	&m6782_MI,
	&m6783_MI,
	&m6784_MI,
	&m6785_MI,
	&m6786_MI,
	&m6787_MI,
	&m6788_MI,
	&m6789_MI,
	&m6790_MI,
	&m6791_MI,
	&m3646_MI,
	&m6792_MI,
	&m6793_MI,
	&m6794_MI,
	&m8404_MI,
	&m8436_MI,
	&m8399_MI,
	&m6799_MI,
	&m6809_MI,
	&m8446_MI,
	&m8423_MI,
	&m8445_MI,
	&m6811_MI,
	&m6812_MI,
	&m8419_MI,
	&m8420_MI,
	&m8421_MI,
	&m8422_MI,
	&m6814_MI,
	&m6815_MI,
	&m6816_MI,
	&m3645_MI,
	&m6817_MI,
	&m8426_MI,
	&m8425_MI,
	&m6819_MI,
	&m6820_MI,
	&m6821_MI,
	&m6822_MI,
	&m6823_MI,
	&m8427_MI,
	&m8406_MI,
	&m8393_MI,
	&m8428_MI,
	&m8430_MI,
	&m8431_MI,
	&m8432_MI,
	&m8433_MI,
	&m8434_MI,
	&m6827_MI,
	&m6828_MI,
	&m3626_MI,
	&m6829_MI,
	&m6830_MI,
	&m8417_MI,
	&m8429_MI,
	&m8448_MI,
	&m8450_MI,
	&m8452_MI,
	&m8449_MI,
	&m8453_MI,
	&m8435_MI,
	&m8451_MI,
};
extern TypeInfo t2354_TI;
static TypeInfo* t1612_ITIs[] = 
{
	&t2354_TI,
};
extern TypeInfo t2245_TI;
extern TypeInfo t2246_TI;
extern TypeInfo t1990_TI;
extern TypeInfo t2247_TI;
static Il2CppInterfaceOffsetPair t1612_IOs[] = 
{
	{ &t2245_TI, 14},
	{ &t2246_TI, 14},
	{ &t1990_TI, 4},
	{ &t2247_TI, 6},
	{ &t2354_TI, 83},
};
void t1612_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t576 * tmp;
		tmp = (t576 *)il2cpp_codegen_object_new (&t576_TI);
		m2699(tmp, true, &m2699_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t1699 * tmp;
		tmp = (t1699 *)il2cpp_codegen_object_new (&t1699_TI);
		m8787(tmp, il2cpp_codegen_type_get_object(InitializedTypeInfo(&t2354_TI)), &m8787_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		t1697 * tmp;
		tmp = (t1697 *)il2cpp_codegen_object_new (&t1697_TI);
		m8786(tmp, 0, &m8786_MI);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
}
void t1612_CustomAttributesCacheGenerator_m8410(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t576 * tmp;
		tmp = (t576 *)il2cpp_codegen_object_new (&t576_TI);
		m2699(tmp, true, &m2699_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t1612_CustomAttributesCacheGenerator_m8411(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t576 * tmp;
		tmp = (t576 *)il2cpp_codegen_object_new (&t576_TI);
		m2699(tmp, true, &m2699_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t1612_CustomAttributesCacheGenerator_m8417(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t576 * tmp;
		tmp = (t576 *)il2cpp_codegen_object_new (&t576_TI);
		m2699(tmp, true, &m2699_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t1430_TI;
#include "t1430.h"
#include "t1430MD.h"
extern MethodInfo m6880_MI;
void t1612_CustomAttributesCacheGenerator_m8435(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t1430 * tmp;
		tmp = (t1430 *)il2cpp_codegen_object_new (&t1430_TI);
		m6880(tmp, &m6880_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t143_TI;
#include "t143.h"
#include "t143MD.h"
extern MethodInfo m551_MI;
void t1612_CustomAttributesCacheGenerator_t1612_m8435_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t143 * tmp;
		tmp = (t143 *)il2cpp_codegen_object_new (&t143_TI);
		m551(tmp, &m551_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t1612_CustomAttributesCacheGenerator_m8445(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t1430 * tmp;
		tmp = (t1430 *)il2cpp_codegen_object_new (&t1430_TI);
		m6880(tmp, &m6880_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t1612_CustomAttributesCacheGenerator_m8446(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t1430 * tmp;
		tmp = (t1430 *)il2cpp_codegen_object_new (&t1430_TI);
		m6880(tmp, &m6880_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t576 * tmp;
		tmp = (t576 *)il2cpp_codegen_object_new (&t576_TI);
		m2699(tmp, true, &m2699_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern MethodInfo m6881_MI;
void t1612_CustomAttributesCacheGenerator_m8447(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t1430 * tmp;
		tmp = (t1430 *)il2cpp_codegen_object_new (&t1430_TI);
		m6881(tmp, il2cpp_codegen_string_new_wrapper("arrays"), &m6881_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1612__CustomAttributeCache = {
3,
NULL,
&t1612_CustomAttributesCacheGenerator
};
CustomAttributesCache t1612__CustomAttributeCache_m8410 = {
1,
NULL,
&t1612_CustomAttributesCacheGenerator_m8410
};
CustomAttributesCache t1612__CustomAttributeCache_m8411 = {
1,
NULL,
&t1612_CustomAttributesCacheGenerator_m8411
};
CustomAttributesCache t1612__CustomAttributeCache_m8417 = {
1,
NULL,
&t1612_CustomAttributesCacheGenerator_m8417
};
CustomAttributesCache t1612__CustomAttributeCache_m8435 = {
1,
NULL,
&t1612_CustomAttributesCacheGenerator_m8435
};
CustomAttributesCache t1612__CustomAttributeCache_t1612_m8435_Arg0_ParameterInfo = {
1,
NULL,
&t1612_CustomAttributesCacheGenerator_t1612_m8435_Arg0_ParameterInfo
};
CustomAttributesCache t1612__CustomAttributeCache_m8445 = {
1,
NULL,
&t1612_CustomAttributesCacheGenerator_m8445
};
CustomAttributesCache t1612__CustomAttributeCache_m8446 = {
2,
NULL,
&t1612_CustomAttributesCacheGenerator_m8446
};
CustomAttributesCache t1612__CustomAttributeCache_m8447 = {
1,
NULL,
&t1612_CustomAttributesCacheGenerator_m8447
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1612_1_0_0;
struct t1612;
extern CustomAttributesCache t1612__CustomAttributeCache;
extern CustomAttributesCache t1612__CustomAttributeCache_m8410;
extern CustomAttributesCache t1612__CustomAttributeCache_m8411;
extern CustomAttributesCache t1612__CustomAttributeCache_m8417;
extern CustomAttributesCache t1612__CustomAttributeCache_m8435;
extern CustomAttributesCache t1612__CustomAttributeCache_m8445;
extern CustomAttributesCache t1612__CustomAttributeCache_m8446;
extern CustomAttributesCache t1612__CustomAttributeCache_m8447;
TypeInfo t1612_TI = 
{
	&g_mscorlib_dll_Image, NULL, "TypeBuilder", "System.Reflection.Emit", t1612_MIs, t1612_PIs, t1612_FIs, NULL, &t114_TI, NULL, NULL, &t1612_TI, t1612_ITIs, t1612_VT, &t1612__CustomAttributeCache, &t1612_TI, &t1612_0_0_0, &t1612_1_0_0, t1612_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1612), 0, -1, 0, 0, -1, 1048833, 0, false, false, false, false, false, false, false, false, false, false, false, false, 63, 17, 19, 0, 0, 83, 1, 5};
#include "t1622.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1622_TI;
#include "t1622MD.h"

#include "t1416.h"
#include "t1417.h"
extern TypeInfo t1416_TI;
#include "t1416MD.h"
extern MethodInfo m6861_MI;


extern MethodInfo m8454_MI;
 t1416 * m8454 (t1622 * __this, MethodInfo* method){
	t1416 * V_0 = {0};
	{
		int32_t L_0 = (__this->f1);
		t1416 * L_1 = (t1416 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1416_TI));
		m6861(L_1, L_0, &m6861_MI);
		V_0 = L_1;
		int32_t L_2 = (__this->f2);
		V_0->f1 = L_2;
		t11* L_3 = (__this->f4);
		V_0->f2 = L_3;
		t11* L_4 = (__this->f5);
		V_0->f3 = L_4;
		t114 * L_5 = (__this->f6);
		V_0->f4 = L_5;
		int32_t L_6 = (__this->f0);
		if ((((uint32_t)L_6) != ((uint32_t)(-1))))
		{
			goto IL_004e;
		}
	}
	{
		V_0->f5 = 0;
		goto IL_005a;
	}

IL_004e:
	{
		int32_t L_7 = (__this->f0);
		V_0->f5 = L_7;
	}

IL_005a:
	{
		int32_t L_8 = (__this->f7);
		if ((((uint32_t)L_8) != ((uint32_t)(-1))))
		{
			goto IL_006c;
		}
	}
	{
		V_0->f6 = 0;
		goto IL_0079;
	}

IL_006c:
	{
		int32_t L_9 = (__this->f7);
		V_0->f6 = (((int16_t)L_9));
	}

IL_0079:
	{
		return V_0;
	}
}
// Metadata Definition System.Reflection.Emit.UnmanagedMarshal
extern Il2CppType t110_0_0_1;
FieldInfo t1622_f0_FieldInfo = 
{
	"count", &t110_0_0_1, &t1622_TI, offsetof(t1622, f0), &EmptyCustomAttributesCache};
extern Il2CppType t1417_0_0_1;
FieldInfo t1622_f1_FieldInfo = 
{
	"t", &t1417_0_0_1, &t1622_TI, offsetof(t1622, f1), &EmptyCustomAttributesCache};
extern Il2CppType t1417_0_0_1;
FieldInfo t1622_f2_FieldInfo = 
{
	"tbase", &t1417_0_0_1, &t1622_TI, offsetof(t1622, f2), &EmptyCustomAttributesCache};
extern Il2CppType t11_0_0_1;
FieldInfo t1622_f3_FieldInfo = 
{
	"guid", &t11_0_0_1, &t1622_TI, offsetof(t1622, f3), &EmptyCustomAttributesCache};
extern Il2CppType t11_0_0_1;
FieldInfo t1622_f4_FieldInfo = 
{
	"mcookie", &t11_0_0_1, &t1622_TI, offsetof(t1622, f4), &EmptyCustomAttributesCache};
extern Il2CppType t11_0_0_1;
FieldInfo t1622_f5_FieldInfo = 
{
	"marshaltype", &t11_0_0_1, &t1622_TI, offsetof(t1622, f5), &EmptyCustomAttributesCache};
extern Il2CppType t114_0_0_1;
FieldInfo t1622_f6_FieldInfo = 
{
	"marshaltyperef", &t114_0_0_1, &t1622_TI, offsetof(t1622, f6), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t1622_f7_FieldInfo = 
{
	"param_num", &t110_0_0_1, &t1622_TI, offsetof(t1622, f7), &EmptyCustomAttributesCache};
extern Il2CppType t108_0_0_1;
FieldInfo t1622_f8_FieldInfo = 
{
	"has_size", &t108_0_0_1, &t1622_TI, offsetof(t1622, f8), &EmptyCustomAttributesCache};
static FieldInfo* t1622_FIs[] =
{
	&t1622_f0_FieldInfo,
	&t1622_f1_FieldInfo,
	&t1622_f2_FieldInfo,
	&t1622_f3_FieldInfo,
	&t1622_f4_FieldInfo,
	&t1622_f5_FieldInfo,
	&t1622_f6_FieldInfo,
	&t1622_f7_FieldInfo,
	&t1622_f8_FieldInfo,
	NULL
};
extern Il2CppType t1416_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8454_MI = 
{
	"ToMarshalAsAttribute", (methodPointerType)&m8454, &t1622_TI, &t1416_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 131, 0, 255, 0, false, false, 3175, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1622_MIs[] =
{
	&m8454_MI,
	NULL
};
static MethodInfo* t1622_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
};
void t1622_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t475 * tmp;
		tmp = (t475 *)il2cpp_codegen_object_new (&t475_TI);
		m3484(tmp, il2cpp_codegen_string_new_wrapper("An alternate API is available: Emit the MarshalAs custom attribute instead."), &m3484_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t576 * tmp;
		tmp = (t576 *)il2cpp_codegen_object_new (&t576_TI);
		m2699(tmp, true, &m2699_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1622__CustomAttributeCache = {
2,
NULL,
&t1622_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1622_0_0_0;
extern Il2CppType t1622_1_0_0;
struct t1622;
extern CustomAttributesCache t1622__CustomAttributeCache;
TypeInfo t1622_TI = 
{
	&g_mscorlib_dll_Image, NULL, "UnmanagedMarshal", "System.Reflection.Emit", t1622_MIs, NULL, t1622_FIs, NULL, &t5_TI, NULL, NULL, &t1622_TI, NULL, t1622_VT, &t1622__CustomAttributeCache, &t1622_TI, &t1622_0_0_0, &t1622_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1622), 0, -1, 0, 0, -1, 1057025, 0, false, false, false, false, false, false, false, false, false, false, false, false, 1, 0, 9, 0, 0, 4, 0, 0};
#ifndef _MSC_VER
#else
#endif

#include "t829.h"
#include "t830.h"
#include "t1221MD.h"
extern MethodInfo m4996_MI;
extern MethodInfo m10839_MI;


 void m8455 (t1653 * __this, MethodInfo* method){
	{
		m4996(__this, (t11*) &_stringLiteral1833, &m4996_MI);
		return;
	}
}
extern MethodInfo m8456_MI;
 void m8456 (t1653 * __this, t11* p0, MethodInfo* method){
	{
		m4996(__this, p0, &m4996_MI);
		return;
	}
}
extern MethodInfo m8457_MI;
 void m8457 (t1653 * __this, t829 * p0, t830  p1, MethodInfo* method){
	{
		m10839(__this, p0, p1, &m10839_MI);
		return;
	}
}
// Metadata Definition System.Reflection.AmbiguousMatchException
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m8455_MI = 
{
	".ctor", (methodPointerType)&m8455, &t1653_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 3176, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t11_0_0_0;
static ParameterInfo t1653_m8456_ParameterInfos[] = 
{
	{"message", 0, 134221723, &EmptyCustomAttributesCache, &t11_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8456_MI = 
{
	".ctor", (methodPointerType)&m8456, &t1653_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t1653_m8456_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 3177, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t829_0_0_0;
extern Il2CppType t829_0_0_0;
extern Il2CppType t830_0_0_0;
extern Il2CppType t830_0_0_0;
static ParameterInfo t1653_m8457_ParameterInfos[] = 
{
	{"info", 0, 134221724, &EmptyCustomAttributesCache, &t829_0_0_0},
	{"context", 1, 134221725, &EmptyCustomAttributesCache, &t830_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t830 (MethodInfo* method, void* obj, void** args);
MethodInfo m8457_MI = 
{
	".ctor", (methodPointerType)&m8457, &t1653_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t830, t1653_m8457_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 2, false, false, 3178, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1653_MIs[] =
{
	&m8455_MI,
	&m8456_MI,
	&m8457_MI,
	NULL
};
extern MethodInfo m3501_MI;
extern MethodInfo m3502_MI;
extern MethodInfo m3503_MI;
extern MethodInfo m584_MI;
extern MethodInfo m3504_MI;
extern MethodInfo m3505_MI;
extern MethodInfo m3506_MI;
static MethodInfo* t1653_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m3501_MI,
	&m3502_MI,
	&m3503_MI,
	&m584_MI,
	&m3504_MI,
	&m3505_MI,
	&m3502_MI,
	&m3506_MI,
};
extern TypeInfo t517_TI;
extern TypeInfo t728_TI;
static Il2CppInterfaceOffsetPair t1653_IOs[] = 
{
	{ &t517_TI, 4},
	{ &t728_TI, 5},
};
void t1653_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t576 * tmp;
		tmp = (t576 *)il2cpp_codegen_object_new (&t576_TI);
		m2699(tmp, true, &m2699_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1653__CustomAttributeCache = {
1,
NULL,
&t1653_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1653_0_0_0;
extern Il2CppType t1653_1_0_0;
extern TypeInfo t1221_TI;
struct t1653;
extern CustomAttributesCache t1653__CustomAttributeCache;
TypeInfo t1653_TI = 
{
	&g_mscorlib_dll_Image, NULL, "AmbiguousMatchException", "System.Reflection", t1653_MIs, NULL, NULL, NULL, &t1221_TI, NULL, NULL, &t1653_TI, NULL, t1653_VT, &t1653__CustomAttributeCache, &t1653_TI, &t1653_0_0_0, &t1653_1_0_0, t1653_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1653), 0, -1, 0, 0, -1, 1057025, 0, false, false, false, false, false, false, false, false, false, false, false, false, 3, 0, 0, 0, 0, 11, 0, 2};
#include "t1654.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1654_TI;
#include "t1654MD.h"



extern MethodInfo m8458_MI;
 void m8458 (t1654 * __this, MethodInfo* method){
	{
		m460(__this, &m460_MI);
		return;
	}
}
// Metadata Definition System.Reflection.Assembly/ResolveEventHolder
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m8458_MI = 
{
	".ctor", (methodPointerType)&m8458, &t1654_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 3203, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1654_MIs[] =
{
	&m8458_MI,
	NULL
};
static MethodInfo* t1654_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1654_0_0_0;
extern Il2CppType t1654_1_0_0;
struct t1654;
TypeInfo t1654_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ResolveEventHolder", "", t1654_MIs, NULL, NULL, NULL, &t5_TI, NULL, &t1194_TI, &t1654_TI, NULL, t1654_VT, &EmptyCustomAttributesCache, &t1654_TI, &t1654_0_0_0, &t1654_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1654), 0, -1, 0, 0, -1, 1048581, 0, false, false, false, false, false, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 4, 0, 0};
#ifndef _MSC_VER
#else
#endif

#include "t124.h"
#include "t1606.h"
#include "t1895.h"
#include "t1655.h"
#include "t1195.h"
#include "t723.h"
extern TypeInfo t1606_TI;
extern TypeInfo t1195_TI;
extern TypeInfo t723_TI;
extern TypeInfo t1608_TI;
extern TypeInfo t1402_TI;
#include "t1606MD.h"
#include "t1895MD.h"
#include "t1195MD.h"
#include "t723MD.h"
extern Il2CppType t1402_0_0_0;
extern MethodInfo m8472_MI;
extern MethodInfo m8461_MI;
extern MethodInfo m10637_MI;
extern MethodInfo m8469_MI;
extern MethodInfo m8468_MI;
extern MethodInfo m8482_MI;
extern MethodInfo m8470_MI;
extern MethodInfo m8460_MI;
extern MethodInfo m10135_MI;
extern MethodInfo m10139_MI;
extern MethodInfo m8476_MI;
extern MethodInfo m8477_MI;
extern MethodInfo m10700_MI;
extern MethodInfo m10703_MI;
extern MethodInfo m8475_MI;
extern MethodInfo m8480_MI;
extern MethodInfo m8582_MI;
extern MethodInfo m2356_MI;
extern MethodInfo m8479_MI;
extern MethodInfo m8588_MI;
extern MethodInfo m4952_MI;


extern MethodInfo m8459_MI;
 void m8459 (t1194 * __this, MethodInfo* method){
	{
		m460(__this, &m460_MI);
		t1654 * L_0 = (t1654 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1654_TI));
		m8458(L_0, &m8458_MI);
		__this->f1 = L_0;
		return;
	}
}
 t11* m8460 (t1194 * __this, MethodInfo* method){
	typedef t11* (*m8460_ftn) (t1194 *);
	static m8460_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m8460_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.Assembly::get_fullname()");
	return _il2cpp_icall_func(__this);
}
 t11* m8461 (t1194 * __this, MethodInfo* method){
	typedef t11* (*m8461_ftn) (t1194 *);
	static m8461_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m8461_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.Assembly::get_location()");
	return _il2cpp_icall_func(__this);
}
 t11* m8462 (t1194 * __this, MethodInfo* method){
	{
		t11* L_0 = (t11*)VirtFuncInvoker0< t11* >::Invoke(&m8472_MI, __this);
		return L_0;
	}
}
extern MethodInfo m8463_MI;
 t11* m8463 (t1194 * __this, MethodInfo* method){
	t11* V_0 = {0};
	{
		bool L_0 = (__this->f8);
		if (!L_0)
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
		t11* L_1 = m8461(__this, &m8461_MI);
		V_0 = L_1;
		return V_0;
	}
}
extern MethodInfo m8464_MI;
 bool m8464 (t1194 * __this, t114 * p0, bool p1, MethodInfo* method){
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1989_TI));
		bool L_0 = m10639(NULL, __this, p0, p1, &m10639_MI);
		return L_0;
	}
}
extern MethodInfo m8465_MI;
 t168* m8465 (t1194 * __this, t114 * p0, bool p1, MethodInfo* method){
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1989_TI));
		t168* L_0 = m10637(NULL, __this, p0, p1, &m10637_MI);
		return L_0;
	}
}
extern MethodInfo m8466_MI;
 t124 m8466 (t1194 * __this, t11* p0, int32_t* p1, t1402 ** p2, MethodInfo* method){
	typedef t124 (*m8466_ftn) (t1194 *, t11*, int32_t*, t1402 **);
	static m8466_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m8466_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.Assembly::GetManifestResourceInternal(System.String,System.Int32&,System.Reflection.Module&)");
	return _il2cpp_icall_func(__this, p0, p1, p2);
}
extern MethodInfo m8467_MI;
 t114 * m8467 (t1194 * __this, t11* p0, bool p1, MethodInfo* method){
	{
		t114 * L_0 = (t114 *)VirtFuncInvoker3< t114 *, t11*, bool, bool >::Invoke(&m8469_MI, __this, p0, p1, 0);
		return L_0;
	}
}
extern MethodInfo m4830_MI;
 t114 * m4830 (t1194 * __this, t11* p0, MethodInfo* method){
	{
		t114 * L_0 = (t114 *)VirtFuncInvoker3< t114 *, t11*, bool, bool >::Invoke(&m8469_MI, __this, p0, 0, 0);
		return L_0;
	}
}
 t114 * m8468 (t1194 * __this, t1402 * p0, t11* p1, bool p2, bool p3, MethodInfo* method){
	typedef t114 * (*m8468_ftn) (t1194 *, t1402 *, t11*, bool, bool);
	static m8468_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m8468_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.Assembly::InternalGetType(System.Reflection.Module,System.String,System.Boolean,System.Boolean)");
	return _il2cpp_icall_func(__this, p0, p1, p2, p3);
}
 t114 * m8469 (t1194 * __this, t11* p0, bool p1, bool p2, MethodInfo* method){
	{
		if (p0)
		{
			goto IL_000a;
		}
	}
	{
		t484 * L_0 = (t484 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t484_TI));
		m3596(L_0, p0, &m3596_MI);
		il2cpp_codegen_raise_exception(L_0);
	}

IL_000a:
	{
		int32_t L_1 = m2358(p0, &m2358_MI);
		if (L_1)
		{
			goto IL_0022;
		}
	}
	{
		t160 * L_2 = (t160 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t160_TI));
		m614(L_2, (t11*) &_stringLiteral363, (t11*) &_stringLiteral1834, &m614_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0022:
	{
		t114 * L_3 = m8468(__this, (t1402 *)NULL, p0, p1, p2, &m8468_MI);
		return L_3;
	}
}
 void m8470 (t5 * __this, t1194 * p0, t1606 * p1, MethodInfo* method){
	typedef void (*m8470_ftn) (t1194 *, t1606 *);
	static m8470_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m8470_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.Assembly::FillName(System.Reflection.Assembly,System.Reflection.AssemblyName)");
	_il2cpp_icall_func(p0, p1);
}
extern MethodInfo m8471_MI;
 t1606 * m8471 (t1194 * __this, MethodInfo* method){
	t1606 * V_0 = {0};
	{
		t1606 * L_0 = (t1606 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1606_TI));
		m8482(L_0, &m8482_MI);
		V_0 = L_0;
		m8470(NULL, __this, V_0, &m8470_MI);
		return V_0;
	}
}
 t11* m8472 (t1194 * __this, MethodInfo* method){
	{
		t11* L_0 = (__this->f9);
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		t11* L_1 = (__this->f9);
		return L_1;
	}

IL_000f:
	{
		t11* L_2 = m8460(__this, &m8460_MI);
		__this->f9 = L_2;
		t11* L_3 = (__this->f9);
		return L_3;
	}
}
extern MethodInfo m8473_MI;
 t1194 * m8473 (t5 * __this, t11* p0, MethodInfo* method){
	{
		t1895 * L_0 = m10135(NULL, &m10135_MI);
		t1194 * L_1 = m10139(L_0, p0, &m10139_MI);
		return L_1;
	}
}
extern MethodInfo m8474_MI;
 t1194 * m8474 (t5 * __this, t11* p0, MethodInfo* method){
	{
		t1194 * L_0 = m8476(NULL, p0, (t1655 *)NULL, &m8476_MI);
		return L_0;
	}
}
 t1194 * m8475 (t5 * __this, t11* p0, t1655 * p1, MethodInfo* method){
	typedef t1194 * (*m8475_ftn) (t11*, t1655 *);
	static m8475_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m8475_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.Assembly::load_with_partial_name(System.String,System.Security.Policy.Evidence)");
	return _il2cpp_icall_func(p0, p1);
}
 t1194 * m8476 (t5 * __this, t11* p0, t1655 * p1, MethodInfo* method){
	{
		t1194 * L_0 = m8477(NULL, p0, p1, 1, &m8477_MI);
		return L_0;
	}
}
 t1194 * m8477 (t5 * __this, t11* p0, t1655 * p1, bool p2, MethodInfo* method){
	{
		if (p2)
		{
			goto IL_0009;
		}
	}
	{
		t1195 * L_0 = (t1195 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1195_TI));
		m10700(L_0, &m10700_MI);
		il2cpp_codegen_raise_exception(L_0);
	}

IL_0009:
	{
		if (p0)
		{
			goto IL_0012;
		}
	}
	{
		t723 * L_1 = (t723 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t723_TI));
		m10703(L_1, &m10703_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0012:
	{
		t1194 * L_2 = m8475(NULL, p0, p1, &m8475_MI);
		return L_2;
	}
}
extern MethodInfo m8478_MI;
 t1402 * m8478 (t1194 * __this, t11* p0, MethodInfo* method){
	t1608* V_0 = {0};
	t1402 * V_1 = {0};
	t1608* V_2 = {0};
	int32_t V_3 = 0;
	{
		if (p0)
		{
			goto IL_000e;
		}
	}
	{
		t484 * L_0 = (t484 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t484_TI));
		m3596(L_0, (t11*) &_stringLiteral363, &m3596_MI);
		il2cpp_codegen_raise_exception(L_0);
	}

IL_000e:
	{
		int32_t L_1 = m2358(p0, &m2358_MI);
		if (L_1)
		{
			goto IL_0021;
		}
	}
	{
		t160 * L_2 = (t160 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t160_TI));
		m2582(L_2, (t11*) &_stringLiteral1835, &m2582_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0021:
	{
		t1608* L_3 = (t1608*)VirtFuncInvoker1< t1608*, bool >::Invoke(&m8480_MI, __this, 1);
		V_0 = L_3;
		V_2 = V_0;
		V_3 = 0;
		goto IL_0047;
	}

IL_002f:
	{
		int32_t L_4 = V_3;
		V_1 = (*(t1402 **)(t1402 **)SZArrayLdElema(V_2, L_4));
		t11* L_5 = m8582(V_1, &m8582_MI);
		IL2CPP_RUNTIME_CLASS_INIT((&t11_TI));
		bool L_6 = m2356(NULL, L_5, p0, &m2356_MI);
		if (!L_6)
		{
			goto IL_0043;
		}
	}
	{
		return V_1;
	}

IL_0043:
	{
		V_3 = ((int32_t)(V_3+1));
	}

IL_0047:
	{
		if ((((int32_t)V_3) < ((int32_t)(((int32_t)(((t107 *)V_2)->max_length))))))
		{
			goto IL_002f;
		}
	}
	{
		return (t1402 *)NULL;
	}
}
 t1608* m8479 (t1194 * __this, MethodInfo* method){
	typedef t1608* (*m8479_ftn) (t1194 *);
	static m8479_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m8479_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.Assembly::GetModulesInternal()");
	return _il2cpp_icall_func(__this);
}
 t1608* m8480 (t1194 * __this, bool p0, MethodInfo* method){
	t1608* V_0 = {0};
	t996 * V_1 = {0};
	t1402 * V_2 = {0};
	t1608* V_3 = {0};
	int32_t V_4 = 0;
	{
		t1608* L_0 = (t1608*)VirtFuncInvoker0< t1608* >::Invoke(&m8479_MI, __this);
		V_0 = L_0;
		if (p0)
		{
			goto IL_0052;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t996_TI));
		t996 * L_1 = (t996 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t996_TI));
		m4975(L_1, (((int32_t)(((t107 *)V_0)->max_length))), &m4975_MI);
		V_1 = L_1;
		V_3 = V_0;
		V_4 = 0;
		goto IL_0035;
	}

IL_001a:
	{
		int32_t L_2 = V_4;
		V_2 = (*(t1402 **)(t1402 **)SZArrayLdElema(V_3, L_2));
		bool L_3 = m8588(V_2, &m8588_MI);
		if (L_3)
		{
			goto IL_002f;
		}
	}
	{
		VirtFuncInvoker1< int32_t, t5 * >::Invoke(&m4784_MI, V_1, V_2);
	}

IL_002f:
	{
		V_4 = ((int32_t)(V_4+1));
	}

IL_0035:
	{
		if ((((int32_t)V_4) < ((int32_t)(((int32_t)(((t107 *)V_3)->max_length))))))
		{
			goto IL_001a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t114_TI));
		t114 * L_4 = m532(NULL, LoadTypeToken(&t1402_0_0_0), &m532_MI);
		t107 * L_5 = (t107 *)VirtFuncInvoker1< t107 *, t114 * >::Invoke(&m4952_MI, V_1, L_4);
		return ((t1608*)Castclass(L_5, InitializedTypeInfo(&t1608_TI)));
	}

IL_0052:
	{
		return V_0;
	}
}
extern MethodInfo m8481_MI;
 t1194 * m8481 (t5 * __this, MethodInfo* method){
	typedef t1194 * (*m8481_ftn) ();
	static m8481_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m8481_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.Assembly::GetExecutingAssembly()");
	return _il2cpp_icall_func();
}
// Metadata Definition System.Reflection.Assembly
extern Il2CppType t124_0_0_1;
FieldInfo t1194_f0_FieldInfo = 
{
	"_mono_assembly", &t124_0_0_1, &t1194_TI, offsetof(t1194, f0), &EmptyCustomAttributesCache};
extern Il2CppType t1654_0_0_1;
FieldInfo t1194_f1_FieldInfo = 
{
	"resolve_event_holder", &t1654_0_0_1, &t1194_TI, offsetof(t1194, f1), &EmptyCustomAttributesCache};
extern Il2CppType t1655_0_0_1;
FieldInfo t1194_f2_FieldInfo = 
{
	"_evidence", &t1655_0_0_1, &t1194_TI, offsetof(t1194, f2), &EmptyCustomAttributesCache};
extern Il2CppType t1656_0_0_3;
FieldInfo t1194_f3_FieldInfo = 
{
	"_minimum", &t1656_0_0_3, &t1194_TI, offsetof(t1194, f3), &EmptyCustomAttributesCache};
extern Il2CppType t1656_0_0_3;
FieldInfo t1194_f4_FieldInfo = 
{
	"_optional", &t1656_0_0_3, &t1194_TI, offsetof(t1194, f4), &EmptyCustomAttributesCache};
extern Il2CppType t1656_0_0_3;
FieldInfo t1194_f5_FieldInfo = 
{
	"_refuse", &t1656_0_0_3, &t1194_TI, offsetof(t1194, f5), &EmptyCustomAttributesCache};
extern Il2CppType t1656_0_0_1;
FieldInfo t1194_f6_FieldInfo = 
{
	"_granted", &t1656_0_0_1, &t1194_TI, offsetof(t1194, f6), &EmptyCustomAttributesCache};
extern Il2CppType t1656_0_0_1;
FieldInfo t1194_f7_FieldInfo = 
{
	"_denied", &t1656_0_0_1, &t1194_TI, offsetof(t1194, f7), &EmptyCustomAttributesCache};
extern Il2CppType t108_0_0_1;
FieldInfo t1194_f8_FieldInfo = 
{
	"fromByteArray", &t108_0_0_1, &t1194_TI, offsetof(t1194, f8), &EmptyCustomAttributesCache};
extern Il2CppType t11_0_0_1;
FieldInfo t1194_f9_FieldInfo = 
{
	"assemblyName", &t11_0_0_1, &t1194_TI, offsetof(t1194, f9), &EmptyCustomAttributesCache};
static FieldInfo* t1194_FIs[] =
{
	&t1194_f0_FieldInfo,
	&t1194_f1_FieldInfo,
	&t1194_f2_FieldInfo,
	&t1194_f3_FieldInfo,
	&t1194_f4_FieldInfo,
	&t1194_f5_FieldInfo,
	&t1194_f6_FieldInfo,
	&t1194_f7_FieldInfo,
	&t1194_f8_FieldInfo,
	&t1194_f9_FieldInfo,
	NULL
};
static PropertyInfo t1194____FullName_PropertyInfo = 
{
	&t1194_TI, "FullName", &m8462_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1194____Location_PropertyInfo = 
{
	&t1194_TI, "Location", &m8463_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1194_PIs[] =
{
	&t1194____FullName_PropertyInfo,
	&t1194____Location_PropertyInfo,
	NULL
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m8459_MI = 
{
	".ctor", (methodPointerType)&m8459, &t1194_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6275, 0, 255, 0, false, false, 3179, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t11_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8460_MI = 
{
	"get_fullname", (methodPointerType)&m8460, &t1194_TI, &t11_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 129, 4096, 255, 0, false, false, 3180, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t11_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8461_MI = 
{
	"get_location", (methodPointerType)&m8461, &t1194_TI, &t11_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 129, 4096, 255, 0, false, false, 3181, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t11_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8462_MI = 
{
	"get_FullName", (methodPointerType)&m8462, &t1194_TI, &t11_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2502, 0, 6, 0, false, false, 3182, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t11_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8463_MI = 
{
	"get_Location", (methodPointerType)&m8463, &t1194_TI, &t11_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2502, 0, 7, 0, false, false, 3183, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t114_0_0_0;
extern Il2CppType t108_0_0_0;
static ParameterInfo t1194_m8464_ParameterInfos[] = 
{
	{"attributeType", 0, 134221726, &EmptyCustomAttributesCache, &t114_0_0_0},
	{"inherit", 1, 134221727, &EmptyCustomAttributesCache, &t108_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5_t111 (MethodInfo* method, void* obj, void** args);
MethodInfo m8464_MI = 
{
	"IsDefined", (methodPointerType)&m8464, &t1194_TI, &t108_0_0_0, RuntimeInvoker_t108_t5_t111, t1194_m8464_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 8, 2, false, false, 3184, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t114_0_0_0;
extern Il2CppType t108_0_0_0;
static ParameterInfo t1194_m8465_ParameterInfos[] = 
{
	{"attributeType", 0, 134221728, &EmptyCustomAttributesCache, &t114_0_0_0},
	{"inherit", 1, 134221729, &EmptyCustomAttributesCache, &t108_0_0_0},
};
extern Il2CppType t168_0_0_0;
extern void* RuntimeInvoker_t5_t5_t111 (MethodInfo* method, void* obj, void** args);
MethodInfo m8465_MI = 
{
	"GetCustomAttributes", (methodPointerType)&m8465, &t1194_TI, &t168_0_0_0, RuntimeInvoker_t5_t5_t111, t1194_m8465_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 9, 2, false, false, 3185, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t11_0_0_0;
extern Il2CppType t110_1_0_2;
extern Il2CppType t110_1_0_0;
extern Il2CppType t1402_1_0_2;
extern Il2CppType t1402_1_0_0;
static ParameterInfo t1194_m8466_ParameterInfos[] = 
{
	{"name", 0, 134221730, &EmptyCustomAttributesCache, &t11_0_0_0},
	{"size", 1, 134221731, &EmptyCustomAttributesCache, &t110_1_0_2},
	{"module", 2, 134221732, &EmptyCustomAttributesCache, &t1402_1_0_2},
};
extern Il2CppType t124_0_0_0;
extern void* RuntimeInvoker_t124_t5_t533_t2355 (MethodInfo* method, void* obj, void** args);
MethodInfo m8466_MI = 
{
	"GetManifestResourceInternal", (methodPointerType)&m8466, &t1194_TI, &t124_0_0_0, RuntimeInvoker_t124_t5_t533_t2355, t1194_m8466_ParameterInfos, &EmptyCustomAttributesCache, 131, 4096, 255, 3, false, false, 3186, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t11_0_0_0;
extern Il2CppType t108_0_0_0;
static ParameterInfo t1194_m8467_ParameterInfos[] = 
{
	{"name", 0, 134221733, &EmptyCustomAttributesCache, &t11_0_0_0},
	{"throwOnError", 1, 134221734, &EmptyCustomAttributesCache, &t108_0_0_0},
};
extern Il2CppType t114_0_0_0;
extern void* RuntimeInvoker_t5_t5_t111 (MethodInfo* method, void* obj, void** args);
MethodInfo m8467_MI = 
{
	"GetType", (methodPointerType)&m8467, &t1194_TI, &t114_0_0_0, RuntimeInvoker_t5_t5_t111, t1194_m8467_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 10, 2, false, false, 3187, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t11_0_0_0;
static ParameterInfo t1194_m4830_ParameterInfos[] = 
{
	{"name", 0, 134221735, &EmptyCustomAttributesCache, &t11_0_0_0},
};
extern Il2CppType t114_0_0_0;
extern void* RuntimeInvoker_t5_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m4830_MI = 
{
	"GetType", (methodPointerType)&m4830, &t1194_TI, &t114_0_0_0, RuntimeInvoker_t5_t5, t1194_m4830_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 11, 1, false, false, 3188, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1402_0_0_0;
extern Il2CppType t11_0_0_0;
extern Il2CppType t108_0_0_0;
extern Il2CppType t108_0_0_0;
static ParameterInfo t1194_m8468_ParameterInfos[] = 
{
	{"module", 0, 134221736, &EmptyCustomAttributesCache, &t1402_0_0_0},
	{"name", 1, 134221737, &EmptyCustomAttributesCache, &t11_0_0_0},
	{"throwOnError", 2, 134221738, &EmptyCustomAttributesCache, &t108_0_0_0},
	{"ignoreCase", 3, 134221739, &EmptyCustomAttributesCache, &t108_0_0_0},
};
extern Il2CppType t114_0_0_0;
extern void* RuntimeInvoker_t5_t5_t5_t111_t111 (MethodInfo* method, void* obj, void** args);
MethodInfo m8468_MI = 
{
	"InternalGetType", (methodPointerType)&m8468, &t1194_TI, &t114_0_0_0, RuntimeInvoker_t5_t5_t5_t111_t111, t1194_m8468_ParameterInfos, &EmptyCustomAttributesCache, 131, 4096, 255, 4, false, false, 3189, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t11_0_0_0;
extern Il2CppType t108_0_0_0;
extern Il2CppType t108_0_0_0;
static ParameterInfo t1194_m8469_ParameterInfos[] = 
{
	{"name", 0, 134221740, &EmptyCustomAttributesCache, &t11_0_0_0},
	{"throwOnError", 1, 134221741, &EmptyCustomAttributesCache, &t108_0_0_0},
	{"ignoreCase", 2, 134221742, &EmptyCustomAttributesCache, &t108_0_0_0},
};
extern Il2CppType t114_0_0_0;
extern void* RuntimeInvoker_t5_t5_t111_t111 (MethodInfo* method, void* obj, void** args);
MethodInfo m8469_MI = 
{
	"GetType", (methodPointerType)&m8469, &t1194_TI, &t114_0_0_0, RuntimeInvoker_t5_t5_t111_t111, t1194_m8469_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 12, 3, false, false, 3190, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1194_0_0_0;
extern Il2CppType t1194_0_0_0;
extern Il2CppType t1606_0_0_0;
extern Il2CppType t1606_0_0_0;
static ParameterInfo t1194_m8470_ParameterInfos[] = 
{
	{"ass", 0, 134221743, &EmptyCustomAttributesCache, &t1194_0_0_0},
	{"aname", 1, 134221744, &EmptyCustomAttributesCache, &t1606_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8470_MI = 
{
	"FillName", (methodPointerType)&m8470, &t1194_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t5, t1194_m8470_ParameterInfos, &EmptyCustomAttributesCache, 145, 4096, 255, 2, false, false, 3191, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1606_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8471_MI = 
{
	"UnprotectedGetName", (methodPointerType)&m8471, &t1194_TI, &t1606_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 451, 0, 13, 0, false, false, 3192, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t11_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8472_MI = 
{
	"ToString", (methodPointerType)&m8472, &t1194_TI, &t11_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 198, 0, 3, 0, false, false, 3193, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t11_0_0_0;
static ParameterInfo t1194_m8473_ParameterInfos[] = 
{
	{"assemblyString", 0, 134221745, &EmptyCustomAttributesCache, &t11_0_0_0},
};
extern Il2CppType t1194_0_0_0;
extern void* RuntimeInvoker_t5_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8473_MI = 
{
	"Load", (methodPointerType)&m8473, &t1194_TI, &t1194_0_0_0, RuntimeInvoker_t5_t5, t1194_m8473_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 3194, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t11_0_0_0;
static ParameterInfo t1194_m8474_ParameterInfos[] = 
{
	{"partialName", 0, 134221746, &EmptyCustomAttributesCache, &t11_0_0_0},
};
extern Il2CppType t1194_0_0_0;
extern void* RuntimeInvoker_t5_t5 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t1194__CustomAttributeCache_m8474;
MethodInfo m8474_MI = 
{
	"LoadWithPartialName", (methodPointerType)&m8474, &t1194_TI, &t1194_0_0_0, RuntimeInvoker_t5_t5, t1194_m8474_ParameterInfos, &t1194__CustomAttributeCache_m8474, 150, 0, 255, 1, false, false, 3195, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t11_0_0_0;
extern Il2CppType t1655_0_0_0;
extern Il2CppType t1655_0_0_0;
static ParameterInfo t1194_m8475_ParameterInfos[] = 
{
	{"name", 0, 134221747, &EmptyCustomAttributesCache, &t11_0_0_0},
	{"e", 1, 134221748, &EmptyCustomAttributesCache, &t1655_0_0_0},
};
extern Il2CppType t1194_0_0_0;
extern void* RuntimeInvoker_t5_t5_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8475_MI = 
{
	"load_with_partial_name", (methodPointerType)&m8475, &t1194_TI, &t1194_0_0_0, RuntimeInvoker_t5_t5_t5, t1194_m8475_ParameterInfos, &EmptyCustomAttributesCache, 145, 4096, 255, 2, false, false, 3196, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t11_0_0_0;
extern Il2CppType t1655_0_0_0;
static ParameterInfo t1194_m8476_ParameterInfos[] = 
{
	{"partialName", 0, 134221749, &EmptyCustomAttributesCache, &t11_0_0_0},
	{"securityEvidence", 1, 134221750, &EmptyCustomAttributesCache, &t1655_0_0_0},
};
extern Il2CppType t1194_0_0_0;
extern void* RuntimeInvoker_t5_t5_t5 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t1194__CustomAttributeCache_m8476;
MethodInfo m8476_MI = 
{
	"LoadWithPartialName", (methodPointerType)&m8476, &t1194_TI, &t1194_0_0_0, RuntimeInvoker_t5_t5_t5, t1194_m8476_ParameterInfos, &t1194__CustomAttributeCache_m8476, 150, 0, 255, 2, false, false, 3197, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t11_0_0_0;
extern Il2CppType t1655_0_0_0;
extern Il2CppType t108_0_0_0;
static ParameterInfo t1194_m8477_ParameterInfos[] = 
{
	{"partialName", 0, 134221751, &EmptyCustomAttributesCache, &t11_0_0_0},
	{"securityEvidence", 1, 134221752, &EmptyCustomAttributesCache, &t1655_0_0_0},
	{"oldBehavior", 2, 134221753, &EmptyCustomAttributesCache, &t108_0_0_0},
};
extern Il2CppType t1194_0_0_0;
extern void* RuntimeInvoker_t5_t5_t5_t111 (MethodInfo* method, void* obj, void** args);
MethodInfo m8477_MI = 
{
	"LoadWithPartialName", (methodPointerType)&m8477, &t1194_TI, &t1194_0_0_0, RuntimeInvoker_t5_t5_t5_t111, t1194_m8477_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 3, false, false, 3198, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t11_0_0_0;
static ParameterInfo t1194_m8478_ParameterInfos[] = 
{
	{"name", 0, 134221754, &EmptyCustomAttributesCache, &t11_0_0_0},
};
extern Il2CppType t1402_0_0_0;
extern void* RuntimeInvoker_t5_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8478_MI = 
{
	"GetModule", (methodPointerType)&m8478, &t1194_TI, &t1402_0_0_0, RuntimeInvoker_t5_t5, t1194_m8478_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 14, 1, false, false, 3199, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1608_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8479_MI = 
{
	"GetModulesInternal", (methodPointerType)&m8479, &t1194_TI, &t1608_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 451, 4096, 15, 0, false, false, 3200, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t108_0_0_0;
static ParameterInfo t1194_m8480_ParameterInfos[] = 
{
	{"getResourceModules", 0, 134221755, &EmptyCustomAttributesCache, &t108_0_0_0},
};
extern Il2CppType t1608_0_0_0;
extern void* RuntimeInvoker_t5_t111 (MethodInfo* method, void* obj, void** args);
MethodInfo m8480_MI = 
{
	"GetModules", (methodPointerType)&m8480, &t1194_TI, &t1608_0_0_0, RuntimeInvoker_t5_t111, t1194_m8480_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 16, 1, false, false, 3201, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1194_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8481_MI = 
{
	"GetExecutingAssembly", (methodPointerType)&m8481, &t1194_TI, &t1194_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 150, 4096, 255, 0, false, false, 3202, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1194_MIs[] =
{
	&m8459_MI,
	&m8460_MI,
	&m8461_MI,
	&m8462_MI,
	&m8463_MI,
	&m8464_MI,
	&m8465_MI,
	&m8466_MI,
	&m8467_MI,
	&m4830_MI,
	&m8468_MI,
	&m8469_MI,
	&m8470_MI,
	&m8471_MI,
	&m8472_MI,
	&m8473_MI,
	&m8474_MI,
	&m8475_MI,
	&m8476_MI,
	&m8477_MI,
	&m8478_MI,
	&m8479_MI,
	&m8480_MI,
	&m8481_MI,
	NULL
};
extern TypeInfo t1654_TI;
static TypeInfo* t1194_TI__nestedTypes[2] =
{
	&t1654_TI,
	NULL
};
static MethodInfo* t1194_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m8472_MI,
	&m8465_MI,
	&m8464_MI,
	&m8462_MI,
	&m8463_MI,
	&m8464_MI,
	&m8465_MI,
	&m8467_MI,
	&m4830_MI,
	&m8469_MI,
	&m8471_MI,
	&m8478_MI,
	&m8479_MI,
	&m8480_MI,
};
extern TypeInfo t2340_TI;
static TypeInfo* t1194_ITIs[] = 
{
	&t1990_TI,
	&t2340_TI,
};
static Il2CppInterfaceOffsetPair t1194_IOs[] = 
{
	{ &t1990_TI, 4},
	{ &t2340_TI, 6},
};
void t1194_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t576 * tmp;
		tmp = (t576 *)il2cpp_codegen_object_new (&t576_TI);
		m2699(tmp, true, &m2699_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t1699 * tmp;
		tmp = (t1699 *)il2cpp_codegen_object_new (&t1699_TI);
		m8787(tmp, il2cpp_codegen_type_get_object(InitializedTypeInfo(&t2340_TI)), &m8787_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		t1697 * tmp;
		tmp = (t1697 *)il2cpp_codegen_object_new (&t1697_TI);
		m8786(tmp, 0, &m8786_MI);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
}
void t1194_CustomAttributesCacheGenerator_m8474(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t475 * tmp;
		tmp = (t475 *)il2cpp_codegen_object_new (&t475_TI);
		m3484(tmp, il2cpp_codegen_string_new_wrapper(""), &m3484_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t1194_CustomAttributesCacheGenerator_m8476(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t475 * tmp;
		tmp = (t475 *)il2cpp_codegen_object_new (&t475_TI);
		m3484(tmp, il2cpp_codegen_string_new_wrapper(""), &m3484_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1194__CustomAttributeCache = {
3,
NULL,
&t1194_CustomAttributesCacheGenerator
};
CustomAttributesCache t1194__CustomAttributeCache_m8474 = {
1,
NULL,
&t1194_CustomAttributesCacheGenerator_m8474
};
CustomAttributesCache t1194__CustomAttributeCache_m8476 = {
1,
NULL,
&t1194_CustomAttributesCacheGenerator_m8476
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1194_1_0_0;
struct t1194;
extern CustomAttributesCache t1194__CustomAttributeCache;
extern CustomAttributesCache t1194__CustomAttributeCache_m8474;
extern CustomAttributesCache t1194__CustomAttributeCache_m8476;
TypeInfo t1194_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Assembly", "System.Reflection", t1194_MIs, t1194_PIs, t1194_FIs, NULL, &t5_TI, t1194_TI__nestedTypes, NULL, &t1194_TI, t1194_ITIs, t1194_VT, &t1194__CustomAttributeCache, &t1194_TI, &t1194_0_0_0, &t1194_1_0_0, t1194_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1194), 0, -1, 0, 0, -1, 1056769, 0, false, false, false, false, false, false, false, false, false, false, false, false, 24, 2, 10, 0, 1, 17, 2, 2};
#include "t571.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t571_TI;
#include "t571MD.h"

#include "t628MD.h"
extern MethodInfo m3526_MI;


extern MethodInfo m2694_MI;
 void m2694 (t571 * __this, t11* p0, MethodInfo* method){
	{
		m3526(__this, &m3526_MI);
		__this->f0 = p0;
		return;
	}
}
// Metadata Definition System.Reflection.AssemblyCompanyAttribute
extern Il2CppType t11_0_0_1;
FieldInfo t571_f0_FieldInfo = 
{
	"name", &t11_0_0_1, &t571_TI, offsetof(t571, f0), &EmptyCustomAttributesCache};
static FieldInfo* t571_FIs[] =
{
	&t571_f0_FieldInfo,
	NULL
};
extern Il2CppType t11_0_0_0;
static ParameterInfo t571_m2694_ParameterInfos[] = 
{
	{"company", 0, 134221756, &EmptyCustomAttributesCache, &t11_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m2694_MI = 
{
	".ctor", (methodPointerType)&m2694, &t571_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t571_m2694_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 3204, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t571_MIs[] =
{
	&m2694_MI,
	NULL
};
extern MethodInfo m3527_MI;
extern MethodInfo m3528_MI;
static MethodInfo* t571_VT[] =
{
	&m3527_MI,
	&m465_MI,
	&m3528_MI,
	&m467_MI,
};
extern TypeInfo t740_TI;
static Il2CppInterfaceOffsetPair t571_IOs[] = 
{
	{ &t740_TI, 4},
};
extern TypeInfo t767_TI;
#include "t767.h"
#include "t767MD.h"
extern MethodInfo m3562_MI;
extern MethodInfo m3563_MI;
void t571_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
		m3563(tmp, false, &m3563_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t571__CustomAttributeCache = {
2,
NULL,
&t571_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t571_0_0_0;
extern Il2CppType t571_1_0_0;
extern TypeInfo t628_TI;
struct t571;
extern CustomAttributesCache t571__CustomAttributeCache;
TypeInfo t571_TI = 
{
	&g_mscorlib_dll_Image, NULL, "AssemblyCompanyAttribute", "System.Reflection", t571_MIs, NULL, t571_FIs, NULL, &t628_TI, NULL, NULL, &t571_TI, NULL, t571_VT, &t571__CustomAttributeCache, &t571_TI, &t571_0_0_0, &t571_1_0_0, t571_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t571), 0, -1, 0, 0, -1, 1048833, 0, false, false, false, false, false, false, false, false, false, false, false, false, 1, 0, 1, 0, 0, 4, 0, 1};
#include "t570.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t570_TI;
#include "t570MD.h"



extern MethodInfo m2693_MI;
 void m2693 (t570 * __this, t11* p0, MethodInfo* method){
	{
		m3526(__this, &m3526_MI);
		__this->f0 = p0;
		return;
	}
}
// Metadata Definition System.Reflection.AssemblyConfigurationAttribute
extern Il2CppType t11_0_0_1;
FieldInfo t570_f0_FieldInfo = 
{
	"name", &t11_0_0_1, &t570_TI, offsetof(t570, f0), &EmptyCustomAttributesCache};
static FieldInfo* t570_FIs[] =
{
	&t570_f0_FieldInfo,
	NULL
};
extern Il2CppType t11_0_0_0;
static ParameterInfo t570_m2693_ParameterInfos[] = 
{
	{"configuration", 0, 134221757, &EmptyCustomAttributesCache, &t11_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m2693_MI = 
{
	".ctor", (methodPointerType)&m2693, &t570_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t570_m2693_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 3205, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t570_MIs[] =
{
	&m2693_MI,
	NULL
};
static MethodInfo* t570_VT[] =
{
	&m3527_MI,
	&m465_MI,
	&m3528_MI,
	&m467_MI,
};
static Il2CppInterfaceOffsetPair t570_IOs[] = 
{
	{ &t740_TI, 4},
};
void t570_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t767 * tmp;
		tmp = (t767 *)il2cpp_codegen_object_new (&t767_TI);
		m3562(tmp, 1, &m3562_MI);
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
CustomAttributesCache t570__CustomAttributeCache = {
2,
NULL,
&t570_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t570_0_0_0;
extern Il2CppType t570_1_0_0;
struct t570;
extern CustomAttributesCache t570__CustomAttributeCache;
TypeInfo t570_TI = 
{
	&g_mscorlib_dll_Image, NULL, "AssemblyConfigurationAttribute", "System.Reflection", t570_MIs, NULL, t570_FIs, NULL, &t628_TI, NULL, NULL, &t570_TI, NULL, t570_VT, &t570__CustomAttributeCache, &t570_TI, &t570_0_0_0, &t570_1_0_0, t570_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t570), 0, -1, 0, 0, -1, 1048833, 0, false, false, false, false, false, false, false, false, false, false, false, false, 1, 0, 1, 0, 0, 4, 0, 1};
#include "t573.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t573_TI;
#include "t573MD.h"



extern MethodInfo m2696_MI;
 void m2696 (t573 * __this, t11* p0, MethodInfo* method){
	{
		m3526(__this, &m3526_MI);
		__this->f0 = p0;
		return;
	}
}
// Metadata Definition System.Reflection.AssemblyCopyrightAttribute
extern Il2CppType t11_0_0_1;
FieldInfo t573_f0_FieldInfo = 
{
	"name", &t11_0_0_1, &t573_TI, offsetof(t573, f0), &EmptyCustomAttributesCache};
static FieldInfo* t573_FIs[] =
{
	&t573_f0_FieldInfo,
	NULL
};
extern Il2CppType t11_0_0_0;
static ParameterInfo t573_m2696_ParameterInfos[] = 
{
	{"copyright", 0, 134221758, &EmptyCustomAttributesCache, &t11_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m2696_MI = 
{
	".ctor", (methodPointerType)&m2696, &t573_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t573_m2696_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 3206, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t573_MIs[] =
{
	&m2696_MI,
	NULL
};
static MethodInfo* t573_VT[] =
{
	&m3527_MI,
	&m465_MI,
	&m3528_MI,
	&m467_MI,
};
static Il2CppInterfaceOffsetPair t573_IOs[] = 
{
	{ &t740_TI, 4},
};
void t573_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
		m3563(tmp, false, &m3563_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t573__CustomAttributeCache = {
2,
NULL,
&t573_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t573_0_0_0;
extern Il2CppType t573_1_0_0;
struct t573;
extern CustomAttributesCache t573__CustomAttributeCache;
TypeInfo t573_TI = 
{
	&g_mscorlib_dll_Image, NULL, "AssemblyCopyrightAttribute", "System.Reflection", t573_MIs, NULL, t573_FIs, NULL, &t628_TI, NULL, NULL, &t573_TI, NULL, t573_VT, &t573__CustomAttributeCache, &t573_TI, &t573_0_0_0, &t573_1_0_0, t573_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t573), 0, -1, 0, 0, -1, 1048833, 0, false, false, false, false, false, false, false, false, false, false, false, false, 1, 0, 1, 0, 0, 4, 0, 1};
#include "t969.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t969_TI;
#include "t969MD.h"



extern MethodInfo m3838_MI;
 void m3838 (t969 * __this, t11* p0, MethodInfo* method){
	{
		m3526(__this, &m3526_MI);
		__this->f0 = p0;
		return;
	}
}
// Metadata Definition System.Reflection.AssemblyDefaultAliasAttribute
extern Il2CppType t11_0_0_1;
FieldInfo t969_f0_FieldInfo = 
{
	"name", &t11_0_0_1, &t969_TI, offsetof(t969, f0), &EmptyCustomAttributesCache};
static FieldInfo* t969_FIs[] =
{
	&t969_f0_FieldInfo,
	NULL
};
extern Il2CppType t11_0_0_0;
static ParameterInfo t969_m3838_ParameterInfos[] = 
{
	{"defaultAlias", 0, 134221759, &EmptyCustomAttributesCache, &t11_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m3838_MI = 
{
	".ctor", (methodPointerType)&m3838, &t969_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t969_m3838_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 3207, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t969_MIs[] =
{
	&m3838_MI,
	NULL
};
static MethodInfo* t969_VT[] =
{
	&m3527_MI,
	&m465_MI,
	&m3528_MI,
	&m467_MI,
};
static Il2CppInterfaceOffsetPair t969_IOs[] = 
{
	{ &t740_TI, 4},
};
void t969_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
		m3563(tmp, false, &m3563_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t969__CustomAttributeCache = {
2,
NULL,
&t969_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t969_0_0_0;
extern Il2CppType t969_1_0_0;
struct t969;
extern CustomAttributesCache t969__CustomAttributeCache;
TypeInfo t969_TI = 
{
	&g_mscorlib_dll_Image, NULL, "AssemblyDefaultAliasAttribute", "System.Reflection", t969_MIs, NULL, t969_FIs, NULL, &t628_TI, NULL, NULL, &t969_TI, NULL, t969_VT, &t969__CustomAttributeCache, &t969_TI, &t969_0_0_0, &t969_1_0_0, t969_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t969), 0, -1, 0, 0, -1, 1048833, 0, false, false, false, false, false, false, false, false, false, false, false, false, 1, 0, 1, 0, 0, 4, 0, 1};
#include "t973.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t973_TI;
#include "t973MD.h"



extern MethodInfo m3842_MI;
 void m3842 (t973 * __this, bool p0, MethodInfo* method){
	{
		m3526(__this, &m3526_MI);
		__this->f0 = p0;
		return;
	}
}
// Metadata Definition System.Reflection.AssemblyDelaySignAttribute
extern Il2CppType t108_0_0_1;
FieldInfo t973_f0_FieldInfo = 
{
	"delay", &t108_0_0_1, &t973_TI, offsetof(t973, f0), &EmptyCustomAttributesCache};
static FieldInfo* t973_FIs[] =
{
	&t973_f0_FieldInfo,
	NULL
};
extern Il2CppType t108_0_0_0;
static ParameterInfo t973_m3842_ParameterInfos[] = 
{
	{"delaySign", 0, 134221760, &EmptyCustomAttributesCache, &t108_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t111 (MethodInfo* method, void* obj, void** args);
MethodInfo m3842_MI = 
{
	".ctor", (methodPointerType)&m3842, &t973_TI, &t109_0_0_0, RuntimeInvoker_t109_t111, t973_m3842_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 3208, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t973_MIs[] =
{
	&m3842_MI,
	NULL
};
static MethodInfo* t973_VT[] =
{
	&m3527_MI,
	&m465_MI,
	&m3528_MI,
	&m467_MI,
};
static Il2CppInterfaceOffsetPair t973_IOs[] = 
{
	{ &t740_TI, 4},
};
void t973_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t767 * tmp;
		tmp = (t767 *)il2cpp_codegen_object_new (&t767_TI);
		m3562(tmp, 1, &m3562_MI);
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
CustomAttributesCache t973__CustomAttributeCache = {
2,
NULL,
&t973_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t973_0_0_0;
extern Il2CppType t973_1_0_0;
struct t973;
extern CustomAttributesCache t973__CustomAttributeCache;
TypeInfo t973_TI = 
{
	&g_mscorlib_dll_Image, NULL, "AssemblyDelaySignAttribute", "System.Reflection", t973_MIs, NULL, t973_FIs, NULL, &t628_TI, NULL, NULL, &t973_TI, NULL, t973_VT, &t973__CustomAttributeCache, &t973_TI, &t973_0_0_0, &t973_1_0_0, t973_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t973), 0, -1, 0, 0, -1, 1048833, 0, false, false, false, false, false, false, false, false, false, false, false, false, 1, 0, 1, 0, 0, 4, 0, 1};
#include "t569.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t569_TI;
#include "t569MD.h"



extern MethodInfo m2692_MI;
 void m2692 (t569 * __this, t11* p0, MethodInfo* method){
	{
		m3526(__this, &m3526_MI);
		__this->f0 = p0;
		return;
	}
}
// Metadata Definition System.Reflection.AssemblyDescriptionAttribute
extern Il2CppType t11_0_0_1;
FieldInfo t569_f0_FieldInfo = 
{
	"name", &t11_0_0_1, &t569_TI, offsetof(t569, f0), &EmptyCustomAttributesCache};
static FieldInfo* t569_FIs[] =
{
	&t569_f0_FieldInfo,
	NULL
};
extern Il2CppType t11_0_0_0;
static ParameterInfo t569_m2692_ParameterInfos[] = 
{
	{"description", 0, 134221761, &EmptyCustomAttributesCache, &t11_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m2692_MI = 
{
	".ctor", (methodPointerType)&m2692, &t569_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t569_m2692_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 3209, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t569_MIs[] =
{
	&m2692_MI,
	NULL
};
static MethodInfo* t569_VT[] =
{
	&m3527_MI,
	&m465_MI,
	&m3528_MI,
	&m467_MI,
};
static Il2CppInterfaceOffsetPair t569_IOs[] = 
{
	{ &t740_TI, 4},
};
void t569_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t767 * tmp;
		tmp = (t767 *)il2cpp_codegen_object_new (&t767_TI);
		m3562(tmp, 1, &m3562_MI);
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
CustomAttributesCache t569__CustomAttributeCache = {
2,
NULL,
&t569_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t569_0_0_0;
extern Il2CppType t569_1_0_0;
struct t569;
extern CustomAttributesCache t569__CustomAttributeCache;
TypeInfo t569_TI = 
{
	&g_mscorlib_dll_Image, NULL, "AssemblyDescriptionAttribute", "System.Reflection", t569_MIs, NULL, t569_FIs, NULL, &t628_TI, NULL, NULL, &t569_TI, NULL, t569_VT, &t569__CustomAttributeCache, &t569_TI, &t569_0_0_0, &t569_1_0_0, t569_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t569), 0, -1, 0, 0, -1, 1048833, 0, false, false, false, false, false, false, false, false, false, false, false, false, 1, 0, 1, 0, 0, 4, 0, 1};
#include "t574.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t574_TI;
#include "t574MD.h"



extern MethodInfo m2697_MI;
 void m2697 (t574 * __this, t11* p0, MethodInfo* method){
	{
		m3526(__this, &m3526_MI);
		if (p0)
		{
			goto IL_0014;
		}
	}
	{
		t484 * L_0 = (t484 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t484_TI));
		m3596(L_0, (t11*) &_stringLiteral301, &m3596_MI);
		il2cpp_codegen_raise_exception(L_0);
	}

IL_0014:
	{
		__this->f0 = p0;
		return;
	}
}
// Metadata Definition System.Reflection.AssemblyFileVersionAttribute
extern Il2CppType t11_0_0_1;
FieldInfo t574_f0_FieldInfo = 
{
	"name", &t11_0_0_1, &t574_TI, offsetof(t574, f0), &EmptyCustomAttributesCache};
static FieldInfo* t574_FIs[] =
{
	&t574_f0_FieldInfo,
	NULL
};
extern Il2CppType t11_0_0_0;
static ParameterInfo t574_m2697_ParameterInfos[] = 
{
	{"version", 0, 134221762, &EmptyCustomAttributesCache, &t11_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m2697_MI = 
{
	".ctor", (methodPointerType)&m2697, &t574_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t574_m2697_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 3210, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t574_MIs[] =
{
	&m2697_MI,
	NULL
};
static MethodInfo* t574_VT[] =
{
	&m3527_MI,
	&m465_MI,
	&m3528_MI,
	&m467_MI,
};
static Il2CppInterfaceOffsetPair t574_IOs[] = 
{
	{ &t740_TI, 4},
};
void t574_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
		m3563(tmp, false, &m3563_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t574__CustomAttributeCache = {
2,
NULL,
&t574_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t574_0_0_0;
extern Il2CppType t574_1_0_0;
struct t574;
extern CustomAttributesCache t574__CustomAttributeCache;
TypeInfo t574_TI = 
{
	&g_mscorlib_dll_Image, NULL, "AssemblyFileVersionAttribute", "System.Reflection", t574_MIs, NULL, t574_FIs, NULL, &t628_TI, NULL, NULL, &t574_TI, NULL, t574_VT, &t574__CustomAttributeCache, &t574_TI, &t574_0_0_0, &t574_1_0_0, t574_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t574), 0, -1, 0, 0, -1, 1048833, 0, false, false, false, false, false, false, false, false, false, false, false, false, 1, 0, 1, 0, 0, 4, 0, 1};
#include "t967.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t967_TI;
#include "t967MD.h"



extern MethodInfo m3836_MI;
 void m3836 (t967 * __this, t11* p0, MethodInfo* method){
	{
		m3526(__this, &m3526_MI);
		__this->f0 = p0;
		return;
	}
}
// Metadata Definition System.Reflection.AssemblyInformationalVersionAttribute
extern Il2CppType t11_0_0_1;
FieldInfo t967_f0_FieldInfo = 
{
	"name", &t11_0_0_1, &t967_TI, offsetof(t967, f0), &EmptyCustomAttributesCache};
static FieldInfo* t967_FIs[] =
{
	&t967_f0_FieldInfo,
	NULL
};
extern Il2CppType t11_0_0_0;
static ParameterInfo t967_m3836_ParameterInfos[] = 
{
	{"informationalVersion", 0, 134221763, &EmptyCustomAttributesCache, &t11_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m3836_MI = 
{
	".ctor", (methodPointerType)&m3836, &t967_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t967_m3836_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 3211, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t967_MIs[] =
{
	&m3836_MI,
	NULL
};
static MethodInfo* t967_VT[] =
{
	&m3527_MI,
	&m465_MI,
	&m3528_MI,
	&m467_MI,
};
static Il2CppInterfaceOffsetPair t967_IOs[] = 
{
	{ &t740_TI, 4},
};
void t967_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
		m3563(tmp, false, &m3563_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t967__CustomAttributeCache = {
2,
NULL,
&t967_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t967_0_0_0;
extern Il2CppType t967_1_0_0;
struct t967;
extern CustomAttributesCache t967__CustomAttributeCache;
TypeInfo t967_TI = 
{
	&g_mscorlib_dll_Image, NULL, "AssemblyInformationalVersionAttribute", "System.Reflection", t967_MIs, NULL, t967_FIs, NULL, &t628_TI, NULL, NULL, &t967_TI, NULL, t967_VT, &t967__CustomAttributeCache, &t967_TI, &t967_0_0_0, &t967_1_0_0, t967_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t967), 0, -1, 0, 0, -1, 1048833, 0, false, false, false, false, false, false, false, false, false, false, false, false, 1, 0, 1, 0, 0, 4, 0, 1};
#include "t972.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t972_TI;
#include "t972MD.h"



extern MethodInfo m3841_MI;
 void m3841 (t972 * __this, t11* p0, MethodInfo* method){
	{
		m3526(__this, &m3526_MI);
		__this->f0 = p0;
		return;
	}
}
// Metadata Definition System.Reflection.AssemblyKeyFileAttribute
extern Il2CppType t11_0_0_1;
FieldInfo t972_f0_FieldInfo = 
{
	"name", &t11_0_0_1, &t972_TI, offsetof(t972, f0), &EmptyCustomAttributesCache};
static FieldInfo* t972_FIs[] =
{
	&t972_f0_FieldInfo,
	NULL
};
extern Il2CppType t11_0_0_0;
static ParameterInfo t972_m3841_ParameterInfos[] = 
{
	{"keyFile", 0, 134221764, &EmptyCustomAttributesCache, &t11_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m3841_MI = 
{
	".ctor", (methodPointerType)&m3841, &t972_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t972_m3841_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 3212, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t972_MIs[] =
{
	&m3841_MI,
	NULL
};
static MethodInfo* t972_VT[] =
{
	&m3527_MI,
	&m465_MI,
	&m3528_MI,
	&m467_MI,
};
static Il2CppInterfaceOffsetPair t972_IOs[] = 
{
	{ &t740_TI, 4},
};
void t972_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t767 * tmp;
		tmp = (t767 *)il2cpp_codegen_object_new (&t767_TI);
		m3562(tmp, 1, &m3562_MI);
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
CustomAttributesCache t972__CustomAttributeCache = {
2,
NULL,
&t972_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t972_0_0_0;
extern Il2CppType t972_1_0_0;
struct t972;
extern CustomAttributesCache t972__CustomAttributeCache;
TypeInfo t972_TI = 
{
	&g_mscorlib_dll_Image, NULL, "AssemblyKeyFileAttribute", "System.Reflection", t972_MIs, NULL, t972_FIs, NULL, &t628_TI, NULL, NULL, &t972_TI, NULL, t972_VT, &t972__CustomAttributeCache, &t972_TI, &t972_0_0_0, &t972_1_0_0, t972_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t972), 0, -1, 0, 0, -1, 1048833, 0, false, false, false, false, false, false, false, false, false, false, false, false, 1, 0, 1, 0, 0, 4, 0, 1};
#ifndef _MSC_VER
#else
#endif

#include "t1658.h"
#include "t448.h"
#include "t1023.h"
#include "t1657.h"
#include "t1046.h"
#include "t1550.h"
#include "t1549.h"
#include "t1892.h"
#include "t1220.h"
#include "t1218.h"
extern TypeInfo t448_TI;
extern TypeInfo t1023_TI;
extern TypeInfo t1202_TI;
extern TypeInfo t1044_TI;
extern TypeInfo t494_TI;
extern TypeInfo t1549_TI;
extern TypeInfo t1657_TI;
extern TypeInfo t1550_TI;
extern TypeInfo t1658_TI;
extern TypeInfo t1892_TI;
#include "t448MD.h"
#include "t1023MD.h"
#include "t771MD.h"
#include "t494MD.h"
#include "t1467MD.h"
#include "t829MD.h"
#include "t1892MD.h"
#include "t1218MD.h"
#include "t1220MD.h"
extern Il2CppType t1023_0_0_0;
extern Il2CppType t1044_0_0_0;
extern Il2CppType t1549_0_0_0;
extern Il2CppType t1657_0_0_0;
extern Il2CppType t1550_0_0_0;
extern Il2CppType t1658_0_0_0;
extern MethodInfo m1971_MI;
extern MethodInfo m3574_MI;
extern MethodInfo m8490_MI;
extern MethodInfo m10927_MI;
extern MethodInfo m10924_MI;
extern MethodInfo m7685_MI;
extern MethodInfo m4804_MI;
extern MethodInfo m7686_MI;
extern MethodInfo m8495_MI;
extern MethodInfo m4878_MI;
extern MethodInfo m8487_MI;
extern MethodInfo m1975_MI;
extern MethodInfo m10926_MI;
extern MethodInfo m10916_MI;
extern MethodInfo m10917_MI;
extern MethodInfo m10915_MI;
extern MethodInfo m10918_MI;
extern MethodInfo m7085_MI;
extern MethodInfo m7084_MI;
extern MethodInfo m4787_MI;
extern MethodInfo m4778_MI;
extern MethodInfo m4789_MI;
extern MethodInfo m7677_MI;
extern MethodInfo m8488_MI;
extern MethodInfo m8494_MI;
extern MethodInfo m9750_MI;
extern MethodInfo m8496_MI;
extern MethodInfo m4988_MI;
extern MethodInfo m4989_MI;
extern MethodInfo m6742_MI;
extern MethodInfo m5964_MI;
extern MethodInfo m4790_MI;
extern MethodInfo m4777_MI;
extern MethodInfo m8491_MI;


 void m8482 (t1606 * __this, MethodInfo* method){
	{
		m460(__this, &m460_MI);
		__this->f12 = 1;
		return;
	}
}
extern MethodInfo m8483_MI;
 void m8483 (t1606 * __this, t829 * p0, t830  p1, MethodInfo* method){
	int32_t V_0 = 0;
	{
		m460(__this, &m460_MI);
		t11* L_0 = m4787(p0, (t11*) &_stringLiteral1842, &m4787_MI);
		__this->f0 = L_0;
		t11* L_1 = m4787(p0, (t11*) &_stringLiteral1843, &m4787_MI);
		__this->f1 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t114_TI));
		t114 * L_2 = m532(NULL, LoadTypeToken(&t1023_0_0_0), &m532_MI);
		t5 * L_3 = m4778(p0, (t11*) &_stringLiteral1844, L_2, &m4778_MI);
		__this->f13 = ((t1023 *)Castclass(L_3, InitializedTypeInfo(&t1023_TI)));
		t114 * L_4 = m532(NULL, LoadTypeToken(&t1044_0_0_0), &m532_MI);
		t5 * L_5 = m4778(p0, (t11*) &_stringLiteral1845, L_4, &m4778_MI);
		__this->f10 = ((t1044*)Castclass(L_5, InitializedTypeInfo(&t1044_TI)));
		t114 * L_6 = m532(NULL, LoadTypeToken(&t1044_0_0_0), &m532_MI);
		t5 * L_7 = m4778(p0, (t11*) &_stringLiteral1846, L_6, &m4778_MI);
		__this->f11 = ((t1044*)Castclass(L_7, InitializedTypeInfo(&t1044_TI)));
		t114 * L_8 = m532(NULL, LoadTypeToken(&t1549_0_0_0), &m532_MI);
		t5 * L_9 = m4778(p0, (t11*) &_stringLiteral1847, L_8, &m4778_MI);
		__this->f8 = ((*(int32_t*)((int32_t*)UnBox (L_9, InitializedTypeInfo(&t110_TI)))));
		t114 * L_10 = m532(NULL, LoadTypeToken(&t1657_0_0_0), &m532_MI);
		t5 * L_11 = m4778(p0, (t11*) &_stringLiteral1848, L_10, &m4778_MI);
		__this->f9 = ((t1657 *)Castclass(L_11, InitializedTypeInfo(&t1657_TI)));
		t114 * L_12 = m532(NULL, LoadTypeToken(&t1550_0_0_0), &m532_MI);
		t5 * L_13 = m4778(p0, (t11*) &_stringLiteral1849, L_12, &m4778_MI);
		__this->f12 = ((*(int32_t*)((int32_t*)UnBox (L_13, InitializedTypeInfo(&t110_TI)))));
		t114 * L_14 = m532(NULL, LoadTypeToken(&t1658_0_0_0), &m532_MI);
		t5 * L_15 = m4778(p0, (t11*) &_stringLiteral1850, L_14, &m4778_MI);
		__this->f7 = ((*(int32_t*)((int32_t*)UnBox (L_15, InitializedTypeInfo(&t110_TI)))));
		int32_t L_16 = m4789(p0, (t11*) &_stringLiteral1851, &m4789_MI);
		V_0 = L_16;
		if ((((int32_t)V_0) == ((int32_t)(-1))))
		{
			goto IL_0124;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t771_TI));
		t771 * L_17 = (t771 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t771_TI));
		m7677(L_17, V_0, &m7677_MI);
		__this->f6 = L_17;
	}

IL_0124:
	{
		return;
	}
}
extern MethodInfo m8484_MI;
 t11* m8484 (t1606 * __this, MethodInfo* method){
	{
		t11* L_0 = (__this->f0);
		return L_0;
	}
}
extern MethodInfo m8485_MI;
 void m8485 (t1606 * __this, t11* p0, MethodInfo* method){
	{
		__this->f0 = p0;
		return;
	}
}
extern MethodInfo m8486_MI;
 t771 * m8486 (t1606 * __this, MethodInfo* method){
	{
		t771 * L_0 = (__this->f6);
		return L_0;
	}
}
 int32_t m8487 (t1606 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->f7);
		return L_0;
	}
}
 t11* m8488 (t1606 * __this, MethodInfo* method){
	t448 * V_0 = {0};
	t1044* V_1 = {0};
	int32_t V_2 = 0;
	{
		t11* L_0 = (__this->f0);
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
		t448 * L_1 = (t448 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t448_TI));
		m1971(L_1, &m1971_MI);
		V_0 = L_1;
		t11* L_2 = (__this->f0);
		m3574(V_0, L_2, &m3574_MI);
		t1023 * L_3 = m8490(__this, &m8490_MI);
		bool L_4 = m10927(NULL, L_3, (t1023 *)NULL, &m10927_MI);
		if (!L_4)
		{
			goto IL_004d;
		}
	}
	{
		m3574(V_0, (t11*) &_stringLiteral1836, &m3574_MI);
		t1023 * L_5 = m8490(__this, &m8490_MI);
		t11* L_6 = (t11*)VirtFuncInvoker0< t11* >::Invoke(&m10924_MI, L_5);
		m3574(V_0, L_6, &m3574_MI);
	}

IL_004d:
	{
		t771 * L_7 = (__this->f6);
		if (!L_7)
		{
			goto IL_0098;
		}
	}
	{
		m3574(V_0, (t11*) &_stringLiteral1837, &m3574_MI);
		t771 * L_8 = (__this->f6);
		int32_t L_9 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m7685_MI, L_8);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t771_TI));
		t771 * L_10 = m4804(NULL, &m4804_MI);
		int32_t L_11 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m7685_MI, L_10);
		if ((((uint32_t)L_9) != ((uint32_t)L_11)))
		{
			goto IL_0086;
		}
	}
	{
		m3574(V_0, (t11*) &_stringLiteral1838, &m3574_MI);
		goto IL_0098;
	}

IL_0086:
	{
		t771 * L_12 = (__this->f6);
		t11* L_13 = (t11*)VirtFuncInvoker0< t11* >::Invoke(&m7686_MI, L_12);
		m3574(V_0, L_13, &m3574_MI);
	}

IL_0098:
	{
		t1044* L_14 = m8495(__this, &m8495_MI);
		V_1 = L_14;
		if (!V_1)
		{
			goto IL_00e7;
		}
	}
	{
		if ((((int32_t)(((t107 *)V_1)->max_length))))
		{
			goto IL_00b5;
		}
	}
	{
		m3574(V_0, (t11*) &_stringLiteral1839, &m3574_MI);
		goto IL_00e7;
	}

IL_00b5:
	{
		m3574(V_0, (t11*) &_stringLiteral1840, &m3574_MI);
		V_2 = 0;
		goto IL_00e1;
	}

IL_00c5:
	{
		t11* L_15 = m4878(((uint8_t*)(uint8_t*)SZArrayLdElema(V_1, V_2)), (t11*) &_stringLiteral429, &m4878_MI);
		m3574(V_0, L_15, &m3574_MI);
		V_2 = ((int32_t)(V_2+1));
	}

IL_00e1:
	{
		if ((((int32_t)V_2) < ((int32_t)(((int32_t)(((t107 *)V_1)->max_length))))))
		{
			goto IL_00c5;
		}
	}

IL_00e7:
	{
		int32_t L_16 = m8487(__this, &m8487_MI);
		if (!((int32_t)((int32_t)L_16&(int32_t)((int32_t)256))))
		{
			goto IL_0101;
		}
	}
	{
		m3574(V_0, (t11*) &_stringLiteral1841, &m3574_MI);
	}

IL_0101:
	{
		t11* L_17 = (t11*)VirtFuncInvoker0< t11* >::Invoke(&m1975_MI, V_0);
		return L_17;
	}
}
extern MethodInfo m8489_MI;
 t1657 * m8489 (t1606 * __this, MethodInfo* method){
	{
		t1657 * L_0 = (__this->f9);
		return L_0;
	}
}
 t1023 * m8490 (t1606 * __this, MethodInfo* method){
	{
		t1023 * L_0 = (__this->f13);
		return L_0;
	}
}
 void m8491 (t1606 * __this, t1023 * p0, MethodInfo* method){
	int32_t V_0 = 0;
	{
		__this->f13 = p0;
		bool L_0 = m10926(NULL, p0, (t1023 *)NULL, &m10926_MI);
		if (!L_0)
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_1 = 0;
		V_0 = L_1;
		__this->f5 = L_1;
		int32_t L_2 = V_0;
		V_0 = L_2;
		__this->f4 = L_2;
		int32_t L_3 = V_0;
		V_0 = L_3;
		__this->f3 = L_3;
		__this->f2 = V_0;
		goto IL_0064;
	}

IL_0034:
	{
		int32_t L_4 = m10916(p0, &m10916_MI);
		__this->f2 = L_4;
		int32_t L_5 = m10917(p0, &m10917_MI);
		__this->f3 = L_5;
		int32_t L_6 = m10915(p0, &m10915_MI);
		__this->f4 = L_6;
		int32_t L_7 = m10918(p0, &m10918_MI);
		__this->f5 = L_7;
	}

IL_0064:
	{
		return;
	}
}
extern MethodInfo m8492_MI;
 t11* m8492 (t1606 * __this, MethodInfo* method){
	t11* V_0 = {0};
	t11* G_B3_0 = {0};
	{
		t11* L_0 = m8488(__this, &m8488_MI);
		V_0 = L_0;
		if (!V_0)
		{
			goto IL_000d;
		}
	}
	{
		G_B3_0 = V_0;
		goto IL_0013;
	}

IL_000d:
	{
		t11* L_1 = m467(__this, &m467_MI);
		G_B3_0 = L_1;
	}

IL_0013:
	{
		return G_B3_0;
	}
}
extern MethodInfo m8493_MI;
 t1044* m8493 (t1606 * __this, MethodInfo* method){
	{
		t1044* L_0 = (__this->f10);
		return L_0;
	}
}
 bool m8494 (t1606 * __this, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint8_t V_2 = 0x0;
	bool V_3 = false;
	t142 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t142 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	{
		t1044* L_0 = (__this->f10);
		if ((((uint32_t)(((int32_t)(((t107 *)L_0)->max_length)))) != ((uint32_t)((int32_t)16))))
		{
			goto IL_0032;
		}
	}
	{
		V_0 = 0;
		V_1 = 0;
		goto IL_0021;
	}

IL_0012:
	{
		t1044* L_1 = (__this->f10);
		int32_t L_2 = V_0;
		V_0 = ((int32_t)(L_2+1));
		int32_t L_3 = L_2;
		V_1 = ((int32_t)(V_1+(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_1, L_3))));
	}

IL_0021:
	{
		t1044* L_4 = (__this->f10);
		if ((((int32_t)V_0) < ((int32_t)(((int32_t)(((t107 *)L_4)->max_length))))))
		{
			goto IL_0012;
		}
	}
	{
		if ((((uint32_t)V_1) != ((uint32_t)4)))
		{
			goto IL_0032;
		}
	}
	{
		return 1;
	}

IL_0032:
	{
		t1044* L_5 = (__this->f10);
		int32_t L_6 = 0;
		V_2 = (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_5, L_6));
		if ((((int32_t)V_2) == ((int32_t)6)))
		{
			goto IL_007a;
		}
	}
	{
		if ((((int32_t)V_2) == ((int32_t)7)))
		{
			goto IL_0091;
		}
	}
	{
		if ((((int32_t)V_2) == ((int32_t)0)))
		{
			goto IL_0049;
		}
	}
	{
		goto IL_0093;
	}

IL_0049:
	{
		t1044* L_7 = (__this->f10);
		if ((((int32_t)(((int32_t)(((t107 *)L_7)->max_length)))) <= ((int32_t)((int32_t)12))))
		{
			goto IL_0078;
		}
	}
	{
		t1044* L_8 = (__this->f10);
		int32_t L_9 = ((int32_t)12);
		if ((((uint32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_8, L_9))) != ((uint32_t)6)))
		{
			goto IL_0078;
		}
	}

IL_0061:
	try
	{ // begin try (depth: 1)
		{
			t1044* L_10 = (__this->f10);
			m7085(NULL, L_10, ((int32_t)12), &m7085_MI);
			V_3 = 1;
			// IL_0071: leave.s IL_0095
			goto IL_0095;
		}

IL_0073:
		{
			// IL_0073: leave.s IL_0078
			goto IL_0078;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (t142 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&t1202_TI, e.ex->object.klass))
			goto IL_0075;
		throw e;
	}

IL_0075:
	{ // begin catch(System.Security.Cryptography.CryptographicException)
		// IL_0076: leave.s IL_0078
		goto IL_0078;
	} // end catch (depth: 1)

IL_0078:
	{
		goto IL_0093;
	}

IL_007a:
	try
	{ // begin try (depth: 1)
		{
			t1044* L_11 = (__this->f10);
			m7084(NULL, L_11, &m7084_MI);
			V_3 = 1;
			// IL_0088: leave.s IL_0095
			goto IL_0095;
		}

IL_008a:
		{
			// IL_008a: leave.s IL_008f
			goto IL_008f;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (t142 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&t1202_TI, e.ex->object.klass))
			goto IL_008c;
		throw e;
	}

IL_008c:
	{ // begin catch(System.Security.Cryptography.CryptographicException)
		// IL_008d: leave.s IL_008f
		goto IL_008f;
	} // end catch (depth: 1)

IL_008f:
	{
		goto IL_0093;
	}

IL_0091:
	{
		goto IL_0093;
	}

IL_0093:
	{
		return 0;
	}

IL_0095:
	{
		return V_3;
	}
}
 t1044* m8495 (t1606 * __this, MethodInfo* method){
	{
		t1044* L_0 = (__this->f11);
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		t1044* L_1 = (__this->f11);
		return L_1;
	}

IL_000f:
	{
		t1044* L_2 = (__this->f10);
		if (L_2)
		{
			goto IL_0019;
		}
	}
	{
		return (t1044*)NULL;
	}

IL_0019:
	{
		t1044* L_3 = (__this->f10);
		if ((((int32_t)(((t107 *)L_3)->max_length))))
		{
			goto IL_002a;
		}
	}
	{
		return ((t1044*)SZArrayNew(InitializedTypeInfo(&t1044_TI), 0));
	}

IL_002a:
	{
		bool L_4 = m8494(__this, &m8494_MI);
		if (L_4)
		{
			goto IL_003d;
		}
	}
	{
		t1892 * L_5 = (t1892 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1892_TI));
		m9750(L_5, (t11*) &_stringLiteral1852, &m9750_MI);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_003d:
	{
		t1044* L_6 = m8496(__this, &m8496_MI);
		return L_6;
	}
}
 t1044* m8496 (t1606 * __this, MethodInfo* method){
	t1220 * V_0 = {0};
	t1044* V_1 = {0};
	t1044* V_2 = {0};
	{
		t1218 * L_0 = m4988(NULL, &m4988_MI);
		V_0 = L_0;
		t1044* L_1 = (__this->f10);
		t1044* L_2 = m4989(V_0, L_1, &m4989_MI);
		V_1 = L_2;
		V_2 = ((t1044*)SZArrayNew(InitializedTypeInfo(&t1044_TI), 8));
		m6742(NULL, (t107 *)(t107 *)V_1, ((int32_t)((((int32_t)(((t107 *)V_1)->max_length)))-8)), (t107 *)(t107 *)V_2, 0, 8, &m6742_MI);
		m5964(NULL, (t107 *)(t107 *)V_2, 0, 8, &m5964_MI);
		return V_2;
	}
}
extern MethodInfo m8497_MI;
 void m8497 (t1606 * __this, t1044* p0, MethodInfo* method){
	{
		if (p0)
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_0 = (__this->f7);
		__this->f7 = ((int32_t)((int32_t)L_0^(int32_t)1));
		goto IL_0021;
	}

IL_0013:
	{
		int32_t L_1 = (__this->f7);
		__this->f7 = ((int32_t)((int32_t)L_1|(int32_t)1));
	}

IL_0021:
	{
		__this->f10 = p0;
		return;
	}
}
extern MethodInfo m8498_MI;
 void m8498 (t1606 * __this, t1044* p0, MethodInfo* method){
	{
		__this->f11 = p0;
		return;
	}
}
extern MethodInfo m8499_MI;
 void m8499 (t1606 * __this, t829 * p0, t830  p1, MethodInfo* method){
	t11* G_B4_0 = {0};
	t829 * G_B4_1 = {0};
	t11* G_B3_0 = {0};
	t829 * G_B3_1 = {0};
	int32_t G_B5_0 = 0;
	t11* G_B5_1 = {0};
	t829 * G_B5_2 = {0};
	{
		if (p0)
		{
			goto IL_000e;
		}
	}
	{
		t484 * L_0 = (t484 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t484_TI));
		m3596(L_0, (t11*) &_stringLiteral248, &m3596_MI);
		il2cpp_codegen_raise_exception(L_0);
	}

IL_000e:
	{
		t11* L_1 = (__this->f0);
		m4790(p0, (t11*) &_stringLiteral1842, L_1, &m4790_MI);
		t1044* L_2 = (__this->f10);
		m4790(p0, (t11*) &_stringLiteral1845, (t5 *)(t5 *)L_2, &m4790_MI);
		t1044* L_3 = (__this->f11);
		m4790(p0, (t11*) &_stringLiteral1846, (t5 *)(t5 *)L_3, &m4790_MI);
		t771 * L_4 = (__this->f6);
		G_B3_0 = (t11*) &_stringLiteral1851;
		G_B3_1 = p0;
		if (!L_4)
		{
			G_B4_0 = (t11*) &_stringLiteral1851;
			G_B4_1 = p0;
			goto IL_005c;
		}
	}
	{
		t771 * L_5 = (__this->f6);
		int32_t L_6 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m7685_MI, L_5);
		G_B5_0 = L_6;
		G_B5_1 = G_B3_0;
		G_B5_2 = G_B3_1;
		goto IL_005d;
	}

IL_005c:
	{
		G_B5_0 = (-1);
		G_B5_1 = G_B4_0;
		G_B5_2 = G_B4_1;
	}

IL_005d:
	{
		m4777(G_B5_2, G_B5_1, G_B5_0, &m4777_MI);
		t11* L_7 = (__this->f1);
		m4790(p0, (t11*) &_stringLiteral1843, L_7, &m4790_MI);
		t1023 * L_8 = m8490(__this, &m8490_MI);
		m4790(p0, (t11*) &_stringLiteral1844, L_8, &m4790_MI);
		int32_t L_9 = (__this->f8);
		int32_t L_10 = L_9;
		t5 * L_11 = Box(InitializedTypeInfo(&t1549_TI), &L_10);
		m4790(p0, (t11*) &_stringLiteral1847, L_11, &m4790_MI);
		int32_t L_12 = 0;
		t5 * L_13 = Box(InitializedTypeInfo(&t1549_TI), &L_12);
		m4790(p0, (t11*) &_stringLiteral1853, L_13, &m4790_MI);
		t1657 * L_14 = (__this->f9);
		m4790(p0, (t11*) &_stringLiteral1848, L_14, &m4790_MI);
		int32_t L_15 = (__this->f12);
		int32_t L_16 = L_15;
		t5 * L_17 = Box(InitializedTypeInfo(&t1550_TI), &L_16);
		m4790(p0, (t11*) &_stringLiteral1849, L_17, &m4790_MI);
		int32_t L_18 = (__this->f7);
		int32_t L_19 = L_18;
		t5 * L_20 = Box(InitializedTypeInfo(&t1658_TI), &L_19);
		m4790(p0, (t11*) &_stringLiteral1850, L_20, &m4790_MI);
		m4790(p0, (t11*) &_stringLiteral1854, NULL, &m4790_MI);
		return;
	}
}
extern MethodInfo m8500_MI;
 void m8500 (t1606 * __this, t5 * p0, MethodInfo* method){
	{
		t1023 * L_0 = (__this->f13);
		m8491(__this, L_0, &m8491_MI);
		return;
	}
}
// Metadata Definition System.Reflection.AssemblyName
extern Il2CppType t11_0_0_1;
FieldInfo t1606_f0_FieldInfo = 
{
	"name", &t11_0_0_1, &t1606_TI, offsetof(t1606, f0), &EmptyCustomAttributesCache};
extern Il2CppType t11_0_0_1;
FieldInfo t1606_f1_FieldInfo = 
{
	"codebase", &t11_0_0_1, &t1606_TI, offsetof(t1606, f1), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t1606_f2_FieldInfo = 
{
	"major", &t110_0_0_1, &t1606_TI, offsetof(t1606, f2), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t1606_f3_FieldInfo = 
{
	"minor", &t110_0_0_1, &t1606_TI, offsetof(t1606, f3), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t1606_f4_FieldInfo = 
{
	"build", &t110_0_0_1, &t1606_TI, offsetof(t1606, f4), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t1606_f5_FieldInfo = 
{
	"revision", &t110_0_0_1, &t1606_TI, offsetof(t1606, f5), &EmptyCustomAttributesCache};
extern Il2CppType t771_0_0_1;
FieldInfo t1606_f6_FieldInfo = 
{
	"cultureinfo", &t771_0_0_1, &t1606_TI, offsetof(t1606, f6), &EmptyCustomAttributesCache};
extern Il2CppType t1658_0_0_1;
FieldInfo t1606_f7_FieldInfo = 
{
	"flags", &t1658_0_0_1, &t1606_TI, offsetof(t1606, f7), &EmptyCustomAttributesCache};
extern Il2CppType t1549_0_0_1;
FieldInfo t1606_f8_FieldInfo = 
{
	"hashalg", &t1549_0_0_1, &t1606_TI, offsetof(t1606, f8), &EmptyCustomAttributesCache};
extern Il2CppType t1657_0_0_1;
FieldInfo t1606_f9_FieldInfo = 
{
	"keypair", &t1657_0_0_1, &t1606_TI, offsetof(t1606, f9), &EmptyCustomAttributesCache};
extern Il2CppType t1044_0_0_1;
FieldInfo t1606_f10_FieldInfo = 
{
	"publicKey", &t1044_0_0_1, &t1606_TI, offsetof(t1606, f10), &EmptyCustomAttributesCache};
extern Il2CppType t1044_0_0_1;
FieldInfo t1606_f11_FieldInfo = 
{
	"keyToken", &t1044_0_0_1, &t1606_TI, offsetof(t1606, f11), &EmptyCustomAttributesCache};
extern Il2CppType t1550_0_0_1;
FieldInfo t1606_f12_FieldInfo = 
{
	"versioncompat", &t1550_0_0_1, &t1606_TI, offsetof(t1606, f12), &EmptyCustomAttributesCache};
extern Il2CppType t1023_0_0_1;
FieldInfo t1606_f13_FieldInfo = 
{
	"version", &t1023_0_0_1, &t1606_TI, offsetof(t1606, f13), &EmptyCustomAttributesCache};
extern Il2CppType t1659_0_0_1;
FieldInfo t1606_f14_FieldInfo = 
{
	"processor_architecture", &t1659_0_0_1, &t1606_TI, offsetof(t1606, f14), &EmptyCustomAttributesCache};
static FieldInfo* t1606_FIs[] =
{
	&t1606_f0_FieldInfo,
	&t1606_f1_FieldInfo,
	&t1606_f2_FieldInfo,
	&t1606_f3_FieldInfo,
	&t1606_f4_FieldInfo,
	&t1606_f5_FieldInfo,
	&t1606_f6_FieldInfo,
	&t1606_f7_FieldInfo,
	&t1606_f8_FieldInfo,
	&t1606_f9_FieldInfo,
	&t1606_f10_FieldInfo,
	&t1606_f11_FieldInfo,
	&t1606_f12_FieldInfo,
	&t1606_f13_FieldInfo,
	&t1606_f14_FieldInfo,
	NULL
};
static PropertyInfo t1606____Name_PropertyInfo = 
{
	&t1606_TI, "Name", &m8484_MI, &m8485_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1606____CultureInfo_PropertyInfo = 
{
	&t1606_TI, "CultureInfo", &m8486_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1606____Flags_PropertyInfo = 
{
	&t1606_TI, "Flags", &m8487_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1606____FullName_PropertyInfo = 
{
	&t1606_TI, "FullName", &m8488_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1606____KeyPair_PropertyInfo = 
{
	&t1606_TI, "KeyPair", &m8489_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1606____Version_PropertyInfo = 
{
	&t1606_TI, "Version", &m8490_MI, &m8491_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1606____IsPublicKeyValid_PropertyInfo = 
{
	&t1606_TI, "IsPublicKeyValid", &m8494_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1606_PIs[] =
{
	&t1606____Name_PropertyInfo,
	&t1606____CultureInfo_PropertyInfo,
	&t1606____Flags_PropertyInfo,
	&t1606____FullName_PropertyInfo,
	&t1606____KeyPair_PropertyInfo,
	&t1606____Version_PropertyInfo,
	&t1606____IsPublicKeyValid_PropertyInfo,
	NULL
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m8482_MI = 
{
	".ctor", (methodPointerType)&m8482, &t1606_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 3213, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t829_0_0_0;
extern Il2CppType t830_0_0_0;
static ParameterInfo t1606_m8483_ParameterInfos[] = 
{
	{"si", 0, 134221765, &EmptyCustomAttributesCache, &t829_0_0_0},
	{"sc", 1, 134221766, &EmptyCustomAttributesCache, &t830_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t830 (MethodInfo* method, void* obj, void** args);
MethodInfo m8483_MI = 
{
	".ctor", (methodPointerType)&m8483, &t1606_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t830, t1606_m8483_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 2, false, false, 3214, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t11_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8484_MI = 
{
	"get_Name", (methodPointerType)&m8484, &t1606_TI, &t11_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 3215, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t11_0_0_0;
static ParameterInfo t1606_m8485_ParameterInfos[] = 
{
	{"value", 0, 134221767, &EmptyCustomAttributesCache, &t11_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8485_MI = 
{
	"set_Name", (methodPointerType)&m8485, &t1606_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t1606_m8485_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, false, 3216, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t771_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8486_MI = 
{
	"get_CultureInfo", (methodPointerType)&m8486, &t1606_TI, &t771_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 3217, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1658_0_0_0;
extern void* RuntimeInvoker_t1658 (MethodInfo* method, void* obj, void** args);
MethodInfo m8487_MI = 
{
	"get_Flags", (methodPointerType)&m8487, &t1606_TI, &t1658_0_0_0, RuntimeInvoker_t1658, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 3218, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t11_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8488_MI = 
{
	"get_FullName", (methodPointerType)&m8488, &t1606_TI, &t11_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 3219, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1657_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8489_MI = 
{
	"get_KeyPair", (methodPointerType)&m8489, &t1606_TI, &t1657_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 3220, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1023_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8490_MI = 
{
	"get_Version", (methodPointerType)&m8490, &t1606_TI, &t1023_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 3221, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1023_0_0_0;
static ParameterInfo t1606_m8491_ParameterInfos[] = 
{
	{"value", 0, 134221768, &EmptyCustomAttributesCache, &t1023_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8491_MI = 
{
	"set_Version", (methodPointerType)&m8491, &t1606_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t1606_m8491_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, false, 3222, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t11_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8492_MI = 
{
	"ToString", (methodPointerType)&m8492, &t1606_TI, &t11_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 198, 0, 3, 0, false, false, 3223, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1044_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8493_MI = 
{
	"GetPublicKey", (methodPointerType)&m8493, &t1606_TI, &t1044_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, false, 3224, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
MethodInfo m8494_MI = 
{
	"get_IsPublicKeyValid", (methodPointerType)&m8494, &t1606_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2177, 0, 255, 0, false, false, 3225, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1044_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8495_MI = 
{
	"InternalGetPublicKeyToken", (methodPointerType)&m8495, &t1606_TI, &t1044_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 3226, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1044_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8496_MI = 
{
	"ComputePublicKeyToken", (methodPointerType)&m8496, &t1606_TI, &t1044_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 3227, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1044_0_0_0;
static ParameterInfo t1606_m8497_ParameterInfos[] = 
{
	{"publicKey", 0, 134221769, &EmptyCustomAttributesCache, &t1044_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8497_MI = 
{
	"SetPublicKey", (methodPointerType)&m8497, &t1606_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t1606_m8497_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 3228, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1044_0_0_0;
static ParameterInfo t1606_m8498_ParameterInfos[] = 
{
	{"publicKeyToken", 0, 134221770, &EmptyCustomAttributesCache, &t1044_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8498_MI = 
{
	"SetPublicKeyToken", (methodPointerType)&m8498, &t1606_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t1606_m8498_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 3229, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t829_0_0_0;
extern Il2CppType t830_0_0_0;
static ParameterInfo t1606_m8499_ParameterInfos[] = 
{
	{"info", 0, 134221771, &EmptyCustomAttributesCache, &t829_0_0_0},
	{"context", 1, 134221772, &EmptyCustomAttributesCache, &t830_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t830 (MethodInfo* method, void* obj, void** args);
MethodInfo m8499_MI = 
{
	"GetObjectData", (methodPointerType)&m8499, &t1606_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t830, t1606_m8499_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 4, 2, false, false, 3230, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t5_0_0_0;
static ParameterInfo t1606_m8500_ParameterInfos[] = 
{
	{"sender", 0, 134221773, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8500_MI = 
{
	"OnDeserialization", (methodPointerType)&m8500, &t1606_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t1606_m8500_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 5, 1, false, false, 3231, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1606_MIs[] =
{
	&m8482_MI,
	&m8483_MI,
	&m8484_MI,
	&m8485_MI,
	&m8486_MI,
	&m8487_MI,
	&m8488_MI,
	&m8489_MI,
	&m8490_MI,
	&m8491_MI,
	&m8492_MI,
	&m8493_MI,
	&m8494_MI,
	&m8495_MI,
	&m8496_MI,
	&m8497_MI,
	&m8498_MI,
	&m8499_MI,
	&m8500_MI,
	NULL
};
static MethodInfo* t1606_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m8492_MI,
	&m8499_MI,
	&m8500_MI,
};
extern TypeInfo t516_TI;
extern TypeInfo t2356_TI;
extern TypeInfo t1184_TI;
static TypeInfo* t1606_ITIs[] = 
{
	&t516_TI,
	&t517_TI,
	&t2356_TI,
	&t1184_TI,
};
static Il2CppInterfaceOffsetPair t1606_IOs[] = 
{
	{ &t516_TI, 4},
	{ &t517_TI, 4},
	{ &t2356_TI, 5},
	{ &t1184_TI, 5},
};
void t1606_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t1697 * tmp;
		tmp = (t1697 *)il2cpp_codegen_object_new (&t1697_TI);
		m8786(tmp, 0, &m8786_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t576 * tmp;
		tmp = (t576 *)il2cpp_codegen_object_new (&t576_TI);
		m2699(tmp, true, &m2699_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		t1699 * tmp;
		tmp = (t1699 *)il2cpp_codegen_object_new (&t1699_TI);
		m8787(tmp, il2cpp_codegen_type_get_object(InitializedTypeInfo(&t2356_TI)), &m8787_MI);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1606__CustomAttributeCache = {
3,
NULL,
&t1606_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1606_1_0_0;
struct t1606;
extern CustomAttributesCache t1606__CustomAttributeCache;
TypeInfo t1606_TI = 
{
	&g_mscorlib_dll_Image, NULL, "AssemblyName", "System.Reflection", t1606_MIs, t1606_PIs, t1606_FIs, NULL, &t5_TI, NULL, NULL, &t1606_TI, t1606_ITIs, t1606_VT, &t1606__CustomAttributeCache, &t1606_TI, &t1606_0_0_0, &t1606_1_0_0, t1606_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1606), 0, -1, 0, 0, -1, 1057025, 0, false, false, false, false, false, false, false, false, false, false, false, false, 19, 7, 15, 0, 0, 6, 4, 4};
#ifndef _MSC_VER
#else
#endif
#include "t1658MD.h"



// Metadata Definition System.Reflection.AssemblyNameFlags
extern Il2CppType t110_0_0_1542;
FieldInfo t1658_f1_FieldInfo = 
{
	"value__", &t110_0_0_1542, &t1658_TI, offsetof(t1658, f1) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t1658_0_0_32854;
FieldInfo t1658_f2_FieldInfo = 
{
	"None", &t1658_0_0_32854, &t1658_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1658_0_0_32854;
FieldInfo t1658_f3_FieldInfo = 
{
	"PublicKey", &t1658_0_0_32854, &t1658_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1658_0_0_32854;
FieldInfo t1658_f4_FieldInfo = 
{
	"Retargetable", &t1658_0_0_32854, &t1658_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1658_0_0_32854;
FieldInfo t1658_f5_FieldInfo = 
{
	"EnableJITcompileOptimizer", &t1658_0_0_32854, &t1658_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1658_0_0_32854;
FieldInfo t1658_f6_FieldInfo = 
{
	"EnableJITcompileTracking", &t1658_0_0_32854, &t1658_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t1658_FIs[] =
{
	&t1658_f1_FieldInfo,
	&t1658_f2_FieldInfo,
	&t1658_f3_FieldInfo,
	&t1658_f4_FieldInfo,
	&t1658_f5_FieldInfo,
	&t1658_f6_FieldInfo,
	NULL
};
static const int32_t t1658_f2_DefaultValueData = 0;
static Il2CppFieldDefaultValueEntry t1658_f2_DefaultValue = 
{
	&t1658_f2_FieldInfo, { (char*)&t1658_f2_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1658_f3_DefaultValueData = 1;
static Il2CppFieldDefaultValueEntry t1658_f3_DefaultValue = 
{
	&t1658_f3_FieldInfo, { (char*)&t1658_f3_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1658_f4_DefaultValueData = 256;
static Il2CppFieldDefaultValueEntry t1658_f4_DefaultValue = 
{
	&t1658_f4_FieldInfo, { (char*)&t1658_f4_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1658_f5_DefaultValueData = 16384;
static Il2CppFieldDefaultValueEntry t1658_f5_DefaultValue = 
{
	&t1658_f5_FieldInfo, { (char*)&t1658_f5_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1658_f6_DefaultValueData = 32768;
static Il2CppFieldDefaultValueEntry t1658_f6_DefaultValue = 
{
	&t1658_f6_FieldInfo, { (char*)&t1658_f6_DefaultValueData, &t110_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t1658_FDVs[] = 
{
	&t1658_f2_DefaultValue,
	&t1658_f3_DefaultValue,
	&t1658_f4_DefaultValue,
	&t1658_f5_DefaultValue,
	&t1658_f6_DefaultValue,
	NULL
};
static MethodInfo* t1658_MIs[] =
{
	NULL
};
static MethodInfo* t1658_VT[] =
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
static Il2CppInterfaceOffsetPair t1658_IOs[] = 
{
	{ &t120_TI, 4},
	{ &t121_TI, 5},
	{ &t122_TI, 21},
};
extern TypeInfo t446_TI;
#include "t446.h"
#include "t446MD.h"
extern MethodInfo m1932_MI;
void t1658_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t446 * tmp;
		tmp = (t446 *)il2cpp_codegen_object_new (&t446_TI);
		m1932(tmp, &m1932_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t576 * tmp;
		tmp = (t576 *)il2cpp_codegen_object_new (&t576_TI);
		m2699(tmp, true, &m2699_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1658__CustomAttributeCache = {
2,
NULL,
&t1658_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1658_1_0_0;
extern CustomAttributesCache t1658__CustomAttributeCache;
TypeInfo t1658_TI = 
{
	&g_mscorlib_dll_Image, NULL, "AssemblyNameFlags", "System.Reflection", t1658_MIs, NULL, t1658_FIs, NULL, &t18_TI, NULL, NULL, &t110_TI, NULL, t1658_VT, &t1658__CustomAttributeCache, &t110_TI, &t1658_0_0_0, &t1658_1_0_0, t1658_IOs, NULL, NULL, t1658_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1658)+ sizeof (Il2CppObject), sizeof (int32_t), sizeof(int32_t), 0, 0, -1, 8449, 0, true, false, false, true, false, false, false, false, false, false, false, false, 0, 0, 6, 0, 0, 23, 0, 3};
#include "t572.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t572_TI;
#include "t572MD.h"



extern MethodInfo m2695_MI;
 void m2695 (t572 * __this, t11* p0, MethodInfo* method){
	{
		m3526(__this, &m3526_MI);
		__this->f0 = p0;
		return;
	}
}
// Metadata Definition System.Reflection.AssemblyProductAttribute
extern Il2CppType t11_0_0_1;
FieldInfo t572_f0_FieldInfo = 
{
	"name", &t11_0_0_1, &t572_TI, offsetof(t572, f0), &EmptyCustomAttributesCache};
static FieldInfo* t572_FIs[] =
{
	&t572_f0_FieldInfo,
	NULL
};
extern Il2CppType t11_0_0_0;
static ParameterInfo t572_m2695_ParameterInfos[] = 
{
	{"product", 0, 134221774, &EmptyCustomAttributesCache, &t11_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m2695_MI = 
{
	".ctor", (methodPointerType)&m2695, &t572_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t572_m2695_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 3232, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t572_MIs[] =
{
	&m2695_MI,
	NULL
};
static MethodInfo* t572_VT[] =
{
	&m3527_MI,
	&m465_MI,
	&m3528_MI,
	&m467_MI,
};
static Il2CppInterfaceOffsetPair t572_IOs[] = 
{
	{ &t740_TI, 4},
};
void t572_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t767 * tmp;
		tmp = (t767 *)il2cpp_codegen_object_new (&t767_TI);
		m3562(tmp, 1, &m3562_MI);
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
CustomAttributesCache t572__CustomAttributeCache = {
2,
NULL,
&t572_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t572_0_0_0;
extern Il2CppType t572_1_0_0;
struct t572;
extern CustomAttributesCache t572__CustomAttributeCache;
TypeInfo t572_TI = 
{
	&g_mscorlib_dll_Image, NULL, "AssemblyProductAttribute", "System.Reflection", t572_MIs, NULL, t572_FIs, NULL, &t628_TI, NULL, NULL, &t572_TI, NULL, t572_VT, &t572__CustomAttributeCache, &t572_TI, &t572_0_0_0, &t572_1_0_0, t572_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t572), 0, -1, 0, 0, -1, 1048833, 0, false, false, false, false, false, false, false, false, false, false, false, false, 1, 0, 1, 0, 0, 4, 0, 1};
#include "t568.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t568_TI;
#include "t568MD.h"



extern MethodInfo m2691_MI;
 void m2691 (t568 * __this, t11* p0, MethodInfo* method){
	{
		m3526(__this, &m3526_MI);
		__this->f0 = p0;
		return;
	}
}
// Metadata Definition System.Reflection.AssemblyTitleAttribute
extern Il2CppType t11_0_0_1;
FieldInfo t568_f0_FieldInfo = 
{
	"name", &t11_0_0_1, &t568_TI, offsetof(t568, f0), &EmptyCustomAttributesCache};
static FieldInfo* t568_FIs[] =
{
	&t568_f0_FieldInfo,
	NULL
};
extern Il2CppType t11_0_0_0;
static ParameterInfo t568_m2691_ParameterInfos[] = 
{
	{"title", 0, 134221775, &EmptyCustomAttributesCache, &t11_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m2691_MI = 
{
	".ctor", (methodPointerType)&m2691, &t568_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t568_m2691_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 3233, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t568_MIs[] =
{
	&m2691_MI,
	NULL
};
static MethodInfo* t568_VT[] =
{
	&m3527_MI,
	&m465_MI,
	&m3528_MI,
	&m467_MI,
};
static Il2CppInterfaceOffsetPair t568_IOs[] = 
{
	{ &t740_TI, 4},
};
void t568_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t767 * tmp;
		tmp = (t767 *)il2cpp_codegen_object_new (&t767_TI);
		m3562(tmp, 1, &m3562_MI);
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
CustomAttributesCache t568__CustomAttributeCache = {
2,
NULL,
&t568_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t568_0_0_0;
extern Il2CppType t568_1_0_0;
struct t568;
extern CustomAttributesCache t568__CustomAttributeCache;
TypeInfo t568_TI = 
{
	&g_mscorlib_dll_Image, NULL, "AssemblyTitleAttribute", "System.Reflection", t568_MIs, NULL, t568_FIs, NULL, &t628_TI, NULL, NULL, &t568_TI, NULL, t568_VT, &t568__CustomAttributeCache, &t568_TI, &t568_0_0_0, &t568_1_0_0, t568_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t568), 0, -1, 0, 0, -1, 1048833, 0, false, false, false, false, false, false, false, false, false, false, false, false, 1, 0, 1, 0, 0, 4, 0, 1};
#include "t577.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t577_TI;
#include "t577MD.h"



extern MethodInfo m2700_MI;
 void m2700 (t577 * __this, t11* p0, MethodInfo* method){
	{
		m3526(__this, &m3526_MI);
		__this->f0 = p0;
		return;
	}
}
// Metadata Definition System.Reflection.AssemblyTrademarkAttribute
extern Il2CppType t11_0_0_1;
FieldInfo t577_f0_FieldInfo = 
{
	"name", &t11_0_0_1, &t577_TI, offsetof(t577, f0), &EmptyCustomAttributesCache};
static FieldInfo* t577_FIs[] =
{
	&t577_f0_FieldInfo,
	NULL
};
extern Il2CppType t11_0_0_0;
static ParameterInfo t577_m2700_ParameterInfos[] = 
{
	{"trademark", 0, 134221776, &EmptyCustomAttributesCache, &t11_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m2700_MI = 
{
	".ctor", (methodPointerType)&m2700, &t577_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t577_m2700_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 3234, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t577_MIs[] =
{
	&m2700_MI,
	NULL
};
static MethodInfo* t577_VT[] =
{
	&m3527_MI,
	&m465_MI,
	&m3528_MI,
	&m467_MI,
};
static Il2CppInterfaceOffsetPair t577_IOs[] = 
{
	{ &t740_TI, 4},
};
void t577_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t767 * tmp;
		tmp = (t767 *)il2cpp_codegen_object_new (&t767_TI);
		m3562(tmp, 1, &m3562_MI);
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
CustomAttributesCache t577__CustomAttributeCache = {
2,
NULL,
&t577_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t577_0_0_0;
extern Il2CppType t577_1_0_0;
struct t577;
extern CustomAttributesCache t577__CustomAttributeCache;
TypeInfo t577_TI = 
{
	&g_mscorlib_dll_Image, NULL, "AssemblyTrademarkAttribute", "System.Reflection", t577_MIs, NULL, t577_FIs, NULL, &t628_TI, NULL, NULL, &t577_TI, NULL, t577_VT, &t577__CustomAttributeCache, &t577_TI, &t577_0_0_0, &t577_1_0_0, t577_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t577), 0, -1, 0, 0, -1, 1048833, 0, false, false, false, false, false, false, false, false, false, false, false, false, 1, 0, 1, 0, 0, 4, 0, 1};
#include "t1660.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1660_TI;
#include "t1660MD.h"

#include "t775.h"
#include "t118.h"
#include "t116.h"
#include "t1387.h"
#include "t1428.h"
#include "t18.h"
extern TypeInfo t776_TI;
extern TypeInfo t775_TI;
extern TypeInfo t144_TI;
extern TypeInfo t118_TI;
extern TypeInfo t116_TI;
extern TypeInfo t124_TI;
extern TypeInfo t174_TI;
extern TypeInfo t1428_TI;
extern TypeInfo t1407_TI;
#include "t775MD.h"
#include "t18MD.h"
#include "t174MD.h"
#include "t1407MD.h"
extern Il2CppType t144_0_0_0;
extern Il2CppType t118_0_0_0;
extern Il2CppType t116_0_0_0;
extern Il2CppType t124_0_0_0;
extern Il2CppType t1428_0_0_0;
extern Il2CppType t18_0_0_0;
extern Il2CppType t143_0_0_0;
extern MethodInfo m8516_MI;
extern MethodInfo m531_MI;
extern MethodInfo m8510_MI;
extern MethodInfo m8503_MI;
extern MethodInfo m3586_MI;
extern MethodInfo m8722_MI;
extern MethodInfo m11046_MI;
extern MethodInfo m8504_MI;
extern MethodInfo m8507_MI;
extern MethodInfo m6668_MI;
extern MethodInfo m10389_MI;
extern MethodInfo m6659_MI;
extern MethodInfo m6838_MI;
extern MethodInfo m6837_MI;
extern MethodInfo m6833_MI;
extern MethodInfo m6805_MI;
extern MethodInfo m3587_MI;
extern MethodInfo m6083_MI;
extern MethodInfo m8508_MI;
extern MethodInfo m8511_MI;
extern MethodInfo m8565_MI;
extern MethodInfo m8512_MI;
extern MethodInfo m6840_MI;
extern MethodInfo m11484_MI;
extern MethodInfo m11485_MI;
extern MethodInfo m11486_MI;
extern MethodInfo m8514_MI;
extern MethodInfo m8520_MI;
extern MethodInfo m8515_MI;
struct t107;
struct t107;
 int32_t m11487_gshared (t5 * __this, t168* p0, t5 * p1, MethodInfo* method);
#define m11487(__this, p0, p1, method) (int32_t)m11487_gshared((t5 *)__this, (t168*)p0, (t5 *)p1, method)
#define m11484(__this, p0, p1, method) (int32_t)m11487_gshared((t5 *)__this, (t168*)p0, (t5 *)p1, method)


extern MethodInfo m8501_MI;
 void m8501 (t1660 * __this, MethodInfo* method){
	{
		m8516(__this, &m8516_MI);
		return;
	}
}
extern MethodInfo m8502_MI;
 t774 * m8502 (t1660 * __this, int32_t p0, t1661* p1, t168** p2, t772* p3, t771 * p4, t585* p5, t5 ** p6, MethodInfo* method){
	t675* V_0 = {0};
	int32_t V_1 = 0;
	t774 * V_2 = {0};
	{
		if ((*((t168**)p2)))
		{
			goto IL_000c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t114_TI));
		V_0 = (((t114_SFs*)InitializedTypeInfo(&t114_TI)->static_fields)->f3);
		goto IL_0037;
	}

IL_000c:
	{
		V_0 = ((t675*)SZArrayNew(InitializedTypeInfo(&t675_TI), (((int32_t)(((t107 *)(*((t168**)p2)))->max_length)))));
		V_1 = 0;
		goto IL_0030;
	}

IL_001a:
	{
		int32_t L_0 = V_1;
		if (!(*(t5 **)(t5 **)SZArrayLdElema((*((t168**)p2)), L_0)))
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_1 = V_1;
		t114 * L_2 = m531((*(t5 **)(t5 **)SZArrayLdElema((*((t168**)p2)), L_1)), &m531_MI);
		ArrayElementTypeCheck (V_0, L_2);
		*((t114 **)(t114 **)SZArrayLdElema(V_0, V_1)) = (t114 *)L_2;
	}

IL_002c:
	{
		V_1 = ((int32_t)(V_1+1));
	}

IL_0030:
	{
		if ((((int32_t)V_1) < ((int32_t)(((int32_t)(((t107 *)(*((t168**)p2)))->max_length))))))
		{
			goto IL_001a;
		}
	}

IL_0037:
	{
		t774 * L_3 = m8510(__this, p0, p1, V_0, p3, 1, &m8510_MI);
		V_2 = L_3;
		*((t5 **)(p6)) = (t5 *)NULL;
		if (!p5)
		{
			goto IL_0056;
		}
	}
	{
		m8503(__this, p5, p2, V_2, &m8503_MI);
	}

IL_0056:
	{
		return V_2;
	}
}
 void m8503 (t1660 * __this, t585* p0, t168** p1, t774 * p2, MethodInfo* method){
	t168* V_0 = {0};
	t776* V_1 = {0};
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		V_0 = ((t168*)SZArrayNew(InitializedTypeInfo(&t168_TI), (((int32_t)(((t107 *)(*((t168**)p1)))->max_length)))));
		m6741(NULL, (t107 *)(t107 *)(*((t168**)p1)), (t107 *)(t107 *)V_0, (((int32_t)(((t107 *)(*((t168**)p1)))->max_length))), &m6741_MI);
		t776* L_0 = (t776*)VirtFuncInvoker0< t776* >::Invoke(&m3586_MI, p2);
		V_1 = L_0;
		V_2 = 0;
		goto IL_004e;
	}

IL_0021:
	{
		V_3 = 0;
		goto IL_0044;
	}

IL_0025:
	{
		int32_t L_1 = V_2;
		int32_t L_2 = V_3;
		t11* L_3 = (t11*)VirtFuncInvoker0< t11* >::Invoke(&m8722_MI, (*(t775 **)(t775 **)SZArrayLdElema(V_1, L_2)));
		IL2CPP_RUNTIME_CLASS_INIT((&t11_TI));
		bool L_4 = m2356(NULL, (*(t11**)(t11**)SZArrayLdElema(p0, L_1)), L_3, &m2356_MI);
		if (!L_4)
		{
			goto IL_0040;
		}
	}
	{
		int32_t L_5 = V_2;
		ArrayElementTypeCheck (V_0, (*(t5 **)(t5 **)SZArrayLdElema((*((t168**)p1)), L_5)));
		*((t5 **)(t5 **)SZArrayLdElema(V_0, V_3)) = (t5 *)(*(t5 **)(t5 **)SZArrayLdElema((*((t168**)p1)), L_5));
		goto IL_004a;
	}

IL_0040:
	{
		V_3 = ((int32_t)(V_3+1));
	}

IL_0044:
	{
		if ((((int32_t)V_3) < ((int32_t)(((int32_t)(((t107 *)V_1)->max_length))))))
		{
			goto IL_0025;
		}
	}

IL_004a:
	{
		V_2 = ((int32_t)(V_2+1));
	}

IL_004e:
	{
		if ((((int32_t)V_2) < ((int32_t)(((int32_t)(((t107 *)p0)->max_length))))))
		{
			goto IL_0021;
		}
	}
	{
		m6741(NULL, (t107 *)(t107 *)V_0, (t107 *)(t107 *)(*((t168**)p1)), (((int32_t)(((t107 *)(*((t168**)p1)))->max_length))), &m6741_MI);
		return;
	}
}
 bool m8504 (t5 * __this, t114 * p0, t114 * p1, MethodInfo* method){
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(&m6783_MI, p0);
		if (!L_0)
		{
			goto IL_0022;
		}
	}
	{
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(&m6783_MI, p1);
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		t114 * L_2 = (t114 *)VirtFuncInvoker0< t114 * >::Invoke(&m11046_MI, p0);
		t114 * L_3 = (t114 *)VirtFuncInvoker0< t114 * >::Invoke(&m11046_MI, p1);
		bool L_4 = m8504(NULL, L_2, L_3, &m8504_MI);
		return L_4;
	}

IL_0022:
	{
		bool L_5 = (bool)VirtFuncInvoker1< bool, t114 * >::Invoke(&m3627_MI, p1, p0);
		if (!L_5)
		{
			goto IL_002d;
		}
	}
	{
		return 1;
	}

IL_002d:
	{
		return 0;
	}
}
extern MethodInfo m8505_MI;
 t5 * m8505 (t1660 * __this, t5 * p0, t114 * p1, t771 * p2, MethodInfo* method){
	t114 * V_0 = {0};
	{
		if (p0)
		{
			goto IL_0005;
		}
	}
	{
		return NULL;
	}

IL_0005:
	{
		t114 * L_0 = m531(p0, &m531_MI);
		V_0 = L_0;
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(&m6784_MI, p1);
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		t114 * L_2 = (t114 *)VirtFuncInvoker0< t114 * >::Invoke(&m11046_MI, p1);
		p1 = L_2;
	}

IL_001e:
	{
		if ((((t114 *)V_0) == ((t114 *)p1)))
		{
			goto IL_002b;
		}
	}
	{
		bool L_3 = (bool)VirtFuncInvoker1< bool, t5 * >::Invoke(&m6811_MI, p1, p0);
		if (!L_3)
		{
			goto IL_002d;
		}
	}

IL_002b:
	{
		return p0;
	}

IL_002d:
	{
		bool L_4 = (bool)VirtFuncInvoker0< bool >::Invoke(&m6783_MI, V_0);
		if (!L_4)
		{
			goto IL_0052;
		}
	}
	{
		bool L_5 = (bool)VirtFuncInvoker0< bool >::Invoke(&m6783_MI, p1);
		if (!L_5)
		{
			goto IL_0052;
		}
	}
	{
		t114 * L_6 = (t114 *)VirtFuncInvoker0< t114 * >::Invoke(&m11046_MI, V_0);
		t114 * L_7 = (t114 *)VirtFuncInvoker0< t114 * >::Invoke(&m11046_MI, p1);
		bool L_8 = m8504(NULL, L_6, L_7, &m8504_MI);
		if (!L_8)
		{
			goto IL_0052;
		}
	}
	{
		return p0;
	}

IL_0052:
	{
		bool L_9 = m8507(NULL, V_0, p1, &m8507_MI);
		if (!L_9)
		{
			goto IL_00ce;
		}
	}
	{
		bool L_10 = (bool)VirtFuncInvoker0< bool >::Invoke(&m6787_MI, p1);
		if (!L_10)
		{
			goto IL_006e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t18_TI));
		t5 * L_11 = m6668(NULL, p1, p0, &m6668_MI);
		return L_11;
	}

IL_006e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t114_TI));
		t114 * L_12 = m532(NULL, LoadTypeToken(&t144_0_0_0), &m532_MI);
		if ((((t114 *)V_0) != ((t114 *)L_12)))
		{
			goto IL_00af;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t114_TI));
		t114 * L_13 = m532(NULL, LoadTypeToken(&t118_0_0_0), &m532_MI);
		if ((((t114 *)p1) != ((t114 *)L_13)))
		{
			goto IL_0095;
		}
	}
	{
		double L_14 = (((double)((*(uint16_t*)((uint16_t*)UnBox (p0, InitializedTypeInfo(&t144_TI)))))));
		t5 * L_15 = Box(InitializedTypeInfo(&t118_TI), &L_14);
		return L_15;
	}

IL_0095:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t114_TI));
		t114 * L_16 = m532(NULL, LoadTypeToken(&t116_0_0_0), &m532_MI);
		if ((((t114 *)p1) != ((t114 *)L_16)))
		{
			goto IL_00af;
		}
	}
	{
		float L_17 = (((float)((*(uint16_t*)((uint16_t*)UnBox (p0, InitializedTypeInfo(&t144_TI)))))));
		t5 * L_18 = Box(InitializedTypeInfo(&t116_TI), &L_17);
		return L_18;
	}

IL_00af:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t114_TI));
		t114 * L_19 = m532(NULL, LoadTypeToken(&t124_0_0_0), &m532_MI);
		if ((((t114 *)V_0) != ((t114 *)L_19)))
		{
			goto IL_00c6;
		}
	}
	{
		bool L_20 = (bool)VirtFuncInvoker0< bool >::Invoke(&m6791_MI, p1);
		if (!L_20)
		{
			goto IL_00c6;
		}
	}
	{
		return p0;
	}

IL_00c6:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t174_TI));
		t5 * L_21 = m10389(NULL, p0, p1, &m10389_MI);
		return L_21;
	}

IL_00ce:
	{
		return NULL;
	}
}
extern MethodInfo m8506_MI;
 void m8506 (t1660 * __this, t168** p0, t5 * p1, MethodInfo* method){
	{
		return;
	}
}
 bool m8507 (t5 * __this, t114 * p0, t114 * p1, MethodInfo* method){
	int32_t V_0 = {0};
	int32_t V_1 = {0};
	int32_t V_2 = {0};
	int32_t V_3 = {0};
	int32_t G_B28_0 = 0;
	int32_t G_B30_0 = 0;
	int32_t G_B38_0 = 0;
	int32_t G_B40_0 = 0;
	int32_t G_B48_0 = 0;
	int32_t G_B50_0 = 0;
	int32_t G_B58_0 = 0;
	int32_t G_B60_0 = 0;
	int32_t G_B68_0 = 0;
	int32_t G_B70_0 = 0;
	int32_t G_B78_0 = 0;
	int32_t G_B80_0 = 0;
	int32_t G_B89_0 = 0;
	int32_t G_B91_0 = 0;
	int32_t G_B95_0 = 0;
	{
		if ((((t114 *)p0) != ((t114 *)p1)))
		{
			goto IL_0006;
		}
	}
	{
		return 1;
	}

IL_0006:
	{
		if (p0)
		{
			goto IL_000b;
		}
	}
	{
		return 1;
	}

IL_000b:
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(&m6784_MI, p1);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(&m6784_MI, p0);
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_001b;
		}
	}
	{
		return 0;
	}

IL_001b:
	{
		bool L_2 = (bool)VirtFuncInvoker0< bool >::Invoke(&m6789_MI, p1);
		if (!L_2)
		{
			goto IL_002b;
		}
	}
	{
		bool L_3 = (bool)VirtFuncInvoker1< bool, t114 * >::Invoke(&m3627_MI, p1, p0);
		return L_3;
	}

IL_002b:
	{
		bool L_4 = (bool)VirtFuncInvoker0< bool >::Invoke(&m6787_MI, p1);
		if (!L_4)
		{
			goto IL_0043;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t18_TI));
		t114 * L_5 = m6659(NULL, p1, &m6659_MI);
		p1 = L_5;
		if ((((t114 *)p0) != ((t114 *)p1)))
		{
			goto IL_0043;
		}
	}
	{
		return 1;
	}

IL_0043:
	{
		bool L_6 = (bool)VirtFuncInvoker0< bool >::Invoke(&m6838_MI, p1);
		if (!L_6)
		{
			goto IL_006a;
		}
	}
	{
		t114 * L_7 = (t114 *)VirtFuncInvoker0< t114 * >::Invoke(&m6837_MI, p1);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t114_TI));
		t114 * L_8 = m532(NULL, LoadTypeToken(&t1428_0_0_0), &m532_MI);
		if ((((t114 *)L_7) != ((t114 *)L_8)))
		{
			goto IL_006a;
		}
	}
	{
		t675* L_9 = (t675*)VirtFuncInvoker0< t675* >::Invoke(&m6833_MI, p1);
		int32_t L_10 = 0;
		if ((((t114 *)(*(t114 **)(t114 **)SZArrayLdElema(L_9, L_10))) != ((t114 *)p0)))
		{
			goto IL_006a;
		}
	}
	{
		return 1;
	}

IL_006a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t114_TI));
		int32_t L_11 = m6805(NULL, p0, &m6805_MI);
		V_0 = L_11;
		int32_t L_12 = m6805(NULL, p1, &m6805_MI);
		V_1 = L_12;
		V_2 = V_0;
		if (((int32_t)(V_2-4)) == 0)
		{
			goto IL_00af;
		}
		if (((int32_t)(V_2-4)) == 1)
		{
			goto IL_014a;
		}
		if (((int32_t)(V_2-4)) == 2)
		{
			goto IL_00e7;
		}
		if (((int32_t)(V_2-4)) == 3)
		{
			goto IL_01f1;
		}
		if (((int32_t)(V_2-4)) == 4)
		{
			goto IL_01a1;
		}
		if (((int32_t)(V_2-4)) == 5)
		{
			goto IL_0289;
		}
		if (((int32_t)(V_2-4)) == 6)
		{
			goto IL_0241;
		}
		if (((int32_t)(V_2-4)) == 7)
		{
			goto IL_02d1;
		}
		if (((int32_t)(V_2-4)) == 8)
		{
			goto IL_02d1;
		}
		if (((int32_t)(V_2-4)) == 9)
		{
			goto IL_030a;
		}
	}
	{
		goto IL_0320;
	}

IL_00af:
	{
		V_3 = V_1;
		if (((int32_t)(V_3-8)) == 0)
		{
			goto IL_00d7;
		}
		if (((int32_t)(V_3-8)) == 1)
		{
			goto IL_00d7;
		}
		if (((int32_t)(V_3-8)) == 2)
		{
			goto IL_00d7;
		}
		if (((int32_t)(V_3-8)) == 3)
		{
			goto IL_00d7;
		}
		if (((int32_t)(V_3-8)) == 4)
		{
			goto IL_00d7;
		}
		if (((int32_t)(V_3-8)) == 5)
		{
			goto IL_00d7;
		}
		if (((int32_t)(V_3-8)) == 6)
		{
			goto IL_00d7;
		}
	}
	{
		goto IL_00d9;
	}

IL_00d7:
	{
		return 1;
	}

IL_00d9:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t114_TI));
		t114 * L_13 = m532(NULL, LoadTypeToken(&t5_0_0_0), &m532_MI);
		return ((((t114 *)p1) == ((t114 *)L_13))? 1 : 0);
	}

IL_00e7:
	{
		V_3 = V_1;
		if (((int32_t)(V_3-4)) == 0)
		{
			goto IL_011f;
		}
		if (((int32_t)(V_3-4)) == 1)
		{
			goto IL_0121;
		}
		if (((int32_t)(V_3-4)) == 2)
		{
			goto IL_0121;
		}
		if (((int32_t)(V_3-4)) == 3)
		{
			goto IL_011f;
		}
		if (((int32_t)(V_3-4)) == 4)
		{
			goto IL_011f;
		}
		if (((int32_t)(V_3-4)) == 5)
		{
			goto IL_011f;
		}
		if (((int32_t)(V_3-4)) == 6)
		{
			goto IL_011f;
		}
		if (((int32_t)(V_3-4)) == 7)
		{
			goto IL_011f;
		}
		if (((int32_t)(V_3-4)) == 8)
		{
			goto IL_011f;
		}
		if (((int32_t)(V_3-4)) == 9)
		{
			goto IL_011f;
		}
		if (((int32_t)(V_3-4)) == 10)
		{
			goto IL_011f;
		}
	}
	{
		goto IL_0121;
	}

IL_011f:
	{
		return 1;
	}

IL_0121:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t114_TI));
		t114 * L_14 = m532(NULL, LoadTypeToken(&t5_0_0_0), &m532_MI);
		if ((((t114 *)p1) == ((t114 *)L_14)))
		{
			goto IL_0148;
		}
	}
	{
		bool L_15 = (bool)VirtFuncInvoker0< bool >::Invoke(&m6787_MI, p0);
		if (!L_15)
		{
			goto IL_0145;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t114_TI));
		t114 * L_16 = m532(NULL, LoadTypeToken(&t18_0_0_0), &m532_MI);
		G_B28_0 = ((((t114 *)p1) == ((t114 *)L_16))? 1 : 0);
		goto IL_0146;
	}

IL_0145:
	{
		G_B28_0 = 0;
	}

IL_0146:
	{
		G_B30_0 = G_B28_0;
		goto IL_0149;
	}

IL_0148:
	{
		G_B30_0 = 1;
	}

IL_0149:
	{
		return G_B30_0;
	}

IL_014a:
	{
		V_3 = V_1;
		if (((int32_t)(V_3-7)) == 0)
		{
			goto IL_0176;
		}
		if (((int32_t)(V_3-7)) == 1)
		{
			goto IL_0178;
		}
		if (((int32_t)(V_3-7)) == 2)
		{
			goto IL_0176;
		}
		if (((int32_t)(V_3-7)) == 3)
		{
			goto IL_0178;
		}
		if (((int32_t)(V_3-7)) == 4)
		{
			goto IL_0176;
		}
		if (((int32_t)(V_3-7)) == 5)
		{
			goto IL_0178;
		}
		if (((int32_t)(V_3-7)) == 6)
		{
			goto IL_0176;
		}
		if (((int32_t)(V_3-7)) == 7)
		{
			goto IL_0176;
		}
	}
	{
		goto IL_0178;
	}

IL_0176:
	{
		return 1;
	}

IL_0178:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t114_TI));
		t114 * L_17 = m532(NULL, LoadTypeToken(&t5_0_0_0), &m532_MI);
		if ((((t114 *)p1) == ((t114 *)L_17)))
		{
			goto IL_019f;
		}
	}
	{
		bool L_18 = (bool)VirtFuncInvoker0< bool >::Invoke(&m6787_MI, p0);
		if (!L_18)
		{
			goto IL_019c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t114_TI));
		t114 * L_19 = m532(NULL, LoadTypeToken(&t18_0_0_0), &m532_MI);
		G_B38_0 = ((((t114 *)p1) == ((t114 *)L_19))? 1 : 0);
		goto IL_019d;
	}

IL_019c:
	{
		G_B38_0 = 0;
	}

IL_019d:
	{
		G_B40_0 = G_B38_0;
		goto IL_01a0;
	}

IL_019f:
	{
		G_B40_0 = 1;
	}

IL_01a0:
	{
		return G_B40_0;
	}

IL_01a1:
	{
		V_3 = V_1;
		if (((int32_t)(V_3-((int32_t)9))) == 0)
		{
			goto IL_01c6;
		}
		if (((int32_t)(V_3-((int32_t)9))) == 1)
		{
			goto IL_01c6;
		}
		if (((int32_t)(V_3-((int32_t)9))) == 2)
		{
			goto IL_01c6;
		}
		if (((int32_t)(V_3-((int32_t)9))) == 3)
		{
			goto IL_01c6;
		}
		if (((int32_t)(V_3-((int32_t)9))) == 4)
		{
			goto IL_01c6;
		}
		if (((int32_t)(V_3-((int32_t)9))) == 5)
		{
			goto IL_01c6;
		}
	}
	{
		goto IL_01c8;
	}

IL_01c6:
	{
		return 1;
	}

IL_01c8:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t114_TI));
		t114 * L_20 = m532(NULL, LoadTypeToken(&t5_0_0_0), &m532_MI);
		if ((((t114 *)p1) == ((t114 *)L_20)))
		{
			goto IL_01ef;
		}
	}
	{
		bool L_21 = (bool)VirtFuncInvoker0< bool >::Invoke(&m6787_MI, p0);
		if (!L_21)
		{
			goto IL_01ec;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t114_TI));
		t114 * L_22 = m532(NULL, LoadTypeToken(&t18_0_0_0), &m532_MI);
		G_B48_0 = ((((t114 *)p1) == ((t114 *)L_22))? 1 : 0);
		goto IL_01ed;
	}

IL_01ec:
	{
		G_B48_0 = 0;
	}

IL_01ed:
	{
		G_B50_0 = G_B48_0;
		goto IL_01f0;
	}

IL_01ef:
	{
		G_B50_0 = 1;
	}

IL_01f0:
	{
		return G_B50_0;
	}

IL_01f1:
	{
		V_3 = V_1;
		if (((int32_t)(V_3-((int32_t)9))) == 0)
		{
			goto IL_0216;
		}
		if (((int32_t)(V_3-((int32_t)9))) == 1)
		{
			goto IL_0218;
		}
		if (((int32_t)(V_3-((int32_t)9))) == 2)
		{
			goto IL_0216;
		}
		if (((int32_t)(V_3-((int32_t)9))) == 3)
		{
			goto IL_0218;
		}
		if (((int32_t)(V_3-((int32_t)9))) == 4)
		{
			goto IL_0216;
		}
		if (((int32_t)(V_3-((int32_t)9))) == 5)
		{
			goto IL_0216;
		}
	}
	{
		goto IL_0218;
	}

IL_0216:
	{
		return 1;
	}

IL_0218:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t114_TI));
		t114 * L_23 = m532(NULL, LoadTypeToken(&t5_0_0_0), &m532_MI);
		if ((((t114 *)p1) == ((t114 *)L_23)))
		{
			goto IL_023f;
		}
	}
	{
		bool L_24 = (bool)VirtFuncInvoker0< bool >::Invoke(&m6787_MI, p0);
		if (!L_24)
		{
			goto IL_023c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t114_TI));
		t114 * L_25 = m532(NULL, LoadTypeToken(&t18_0_0_0), &m532_MI);
		G_B58_0 = ((((t114 *)p1) == ((t114 *)L_25))? 1 : 0);
		goto IL_023d;
	}

IL_023c:
	{
		G_B58_0 = 0;
	}

IL_023d:
	{
		G_B60_0 = G_B58_0;
		goto IL_0240;
	}

IL_023f:
	{
		G_B60_0 = 1;
	}

IL_0240:
	{
		return G_B60_0;
	}

IL_0241:
	{
		V_3 = V_1;
		if (((int32_t)(V_3-((int32_t)11))) == 0)
		{
			goto IL_025e;
		}
		if (((int32_t)(V_3-((int32_t)11))) == 1)
		{
			goto IL_025e;
		}
		if (((int32_t)(V_3-((int32_t)11))) == 2)
		{
			goto IL_025e;
		}
		if (((int32_t)(V_3-((int32_t)11))) == 3)
		{
			goto IL_025e;
		}
	}
	{
		goto IL_0260;
	}

IL_025e:
	{
		return 1;
	}

IL_0260:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t114_TI));
		t114 * L_26 = m532(NULL, LoadTypeToken(&t5_0_0_0), &m532_MI);
		if ((((t114 *)p1) == ((t114 *)L_26)))
		{
			goto IL_0287;
		}
	}
	{
		bool L_27 = (bool)VirtFuncInvoker0< bool >::Invoke(&m6787_MI, p0);
		if (!L_27)
		{
			goto IL_0284;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t114_TI));
		t114 * L_28 = m532(NULL, LoadTypeToken(&t18_0_0_0), &m532_MI);
		G_B68_0 = ((((t114 *)p1) == ((t114 *)L_28))? 1 : 0);
		goto IL_0285;
	}

IL_0284:
	{
		G_B68_0 = 0;
	}

IL_0285:
	{
		G_B70_0 = G_B68_0;
		goto IL_0288;
	}

IL_0287:
	{
		G_B70_0 = 1;
	}

IL_0288:
	{
		return G_B70_0;
	}

IL_0289:
	{
		V_3 = V_1;
		if (((int32_t)(V_3-((int32_t)11))) == 0)
		{
			goto IL_02a6;
		}
		if (((int32_t)(V_3-((int32_t)11))) == 1)
		{
			goto IL_02a8;
		}
		if (((int32_t)(V_3-((int32_t)11))) == 2)
		{
			goto IL_02a6;
		}
		if (((int32_t)(V_3-((int32_t)11))) == 3)
		{
			goto IL_02a6;
		}
	}
	{
		goto IL_02a8;
	}

IL_02a6:
	{
		return 1;
	}

IL_02a8:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t114_TI));
		t114 * L_29 = m532(NULL, LoadTypeToken(&t5_0_0_0), &m532_MI);
		if ((((t114 *)p1) == ((t114 *)L_29)))
		{
			goto IL_02cf;
		}
	}
	{
		bool L_30 = (bool)VirtFuncInvoker0< bool >::Invoke(&m6787_MI, p0);
		if (!L_30)
		{
			goto IL_02cc;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t114_TI));
		t114 * L_31 = m532(NULL, LoadTypeToken(&t18_0_0_0), &m532_MI);
		G_B78_0 = ((((t114 *)p1) == ((t114 *)L_31))? 1 : 0);
		goto IL_02cd;
	}

IL_02cc:
	{
		G_B78_0 = 0;
	}

IL_02cd:
	{
		G_B80_0 = G_B78_0;
		goto IL_02d0;
	}

IL_02cf:
	{
		G_B80_0 = 1;
	}

IL_02d0:
	{
		return G_B80_0;
	}

IL_02d1:
	{
		V_3 = V_1;
		if ((((int32_t)V_3) == ((int32_t)((int32_t)13))))
		{
			goto IL_02df;
		}
	}
	{
		if ((((int32_t)V_3) == ((int32_t)((int32_t)14))))
		{
			goto IL_02df;
		}
	}
	{
		goto IL_02e1;
	}

IL_02df:
	{
		return 1;
	}

IL_02e1:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t114_TI));
		t114 * L_32 = m532(NULL, LoadTypeToken(&t5_0_0_0), &m532_MI);
		if ((((t114 *)p1) == ((t114 *)L_32)))
		{
			goto IL_0308;
		}
	}
	{
		bool L_33 = (bool)VirtFuncInvoker0< bool >::Invoke(&m6787_MI, p0);
		if (!L_33)
		{
			goto IL_0305;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t114_TI));
		t114 * L_34 = m532(NULL, LoadTypeToken(&t18_0_0_0), &m532_MI);
		G_B89_0 = ((((t114 *)p1) == ((t114 *)L_34))? 1 : 0);
		goto IL_0306;
	}

IL_0305:
	{
		G_B89_0 = 0;
	}

IL_0306:
	{
		G_B91_0 = G_B89_0;
		goto IL_0309;
	}

IL_0308:
	{
		G_B91_0 = 1;
	}

IL_0309:
	{
		return G_B91_0;
	}

IL_030a:
	{
		if ((((int32_t)V_1) == ((int32_t)((int32_t)14))))
		{
			goto IL_031e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t114_TI));
		t114 * L_35 = m532(NULL, LoadTypeToken(&t5_0_0_0), &m532_MI);
		G_B95_0 = ((((t114 *)p1) == ((t114 *)L_35))? 1 : 0);
		goto IL_031f;
	}

IL_031e:
	{
		G_B95_0 = 1;
	}

IL_031f:
	{
		return G_B95_0;
	}

IL_0320:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t114_TI));
		t114 * L_36 = m532(NULL, LoadTypeToken(&t5_0_0_0), &m532_MI);
		if ((((t114 *)p1) != ((t114 *)L_36)))
		{
			goto IL_0337;
		}
	}
	{
		bool L_37 = (bool)VirtFuncInvoker0< bool >::Invoke(&m6794_MI, p0);
		if (!L_37)
		{
			goto IL_0337;
		}
	}
	{
		return 1;
	}

IL_0337:
	{
		bool L_38 = (bool)VirtFuncInvoker0< bool >::Invoke(&m6791_MI, p1);
		if (!L_38)
		{
			goto IL_034e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t114_TI));
		t114 * L_39 = m532(NULL, LoadTypeToken(&t124_0_0_0), &m532_MI);
		if ((((t114 *)p0) != ((t114 *)L_39)))
		{
			goto IL_034e;
		}
	}
	{
		return 1;
	}

IL_034e:
	{
		bool L_40 = (bool)VirtFuncInvoker1< bool, t114 * >::Invoke(&m3627_MI, p1, p0);
		return L_40;
	}
}
 bool m8508 (t5 * __this, t675* p0, t776* p1, bool p2, MethodInfo* method){
	int32_t V_0 = 0;
	bool V_1 = false;
	t114 * V_2 = {0};
	{
		V_0 = 0;
		goto IL_0044;
	}

IL_0004:
	{
		int32_t L_0 = V_0;
		int32_t L_1 = V_0;
		t114 * L_2 = (t114 *)VirtFuncInvoker0< t114 * >::Invoke(&m3587_MI, (*(t775 **)(t775 **)SZArrayLdElema(p1, L_1)));
		bool L_3 = m8507(NULL, (*(t114 **)(t114 **)SZArrayLdElema(p0, L_0)), L_2, &m8507_MI);
		V_1 = L_3;
		if (V_1)
		{
			goto IL_003b;
		}
	}
	{
		if (!p2)
		{
			goto IL_003b;
		}
	}
	{
		int32_t L_4 = V_0;
		t114 * L_5 = (t114 *)VirtFuncInvoker0< t114 * >::Invoke(&m3587_MI, (*(t775 **)(t775 **)SZArrayLdElema(p1, L_4)));
		V_2 = L_5;
		bool L_6 = (bool)VirtFuncInvoker0< bool >::Invoke(&m6784_MI, V_2);
		if (!L_6)
		{
			goto IL_003b;
		}
	}
	{
		int32_t L_7 = V_0;
		t114 * L_8 = (t114 *)VirtFuncInvoker0< t114 * >::Invoke(&m11046_MI, V_2);
		bool L_9 = m8507(NULL, (*(t114 **)(t114 **)SZArrayLdElema(p0, L_7)), L_8, &m8507_MI);
		V_1 = L_9;
	}

IL_003b:
	{
		if (V_1)
		{
			goto IL_0040;
		}
	}
	{
		return 0;
	}

IL_0040:
	{
		V_0 = ((int32_t)(V_0+1));
	}

IL_0044:
	{
		if ((((int32_t)V_0) < ((int32_t)(((int32_t)(((t107 *)p0)->max_length))))))
		{
			goto IL_0004;
		}
	}
	{
		return 1;
	}
}
extern MethodInfo m8509_MI;
 t774 * m8509 (t1660 * __this, int32_t p0, t1661* p1, t675* p2, t772* p3, MethodInfo* method){
	{
		t774 * L_0 = m8510(__this, p0, p1, p2, p3, 0, &m8510_MI);
		return L_0;
	}
}
 t774 * m8510 (t1660 * __this, int32_t p0, t1661* p1, t675* p2, t772* p3, bool p4, MethodInfo* method){
	t774 * V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	t776* V_3 = {0};
	bool V_4 = false;
	t114 * V_5 = {0};
	t776* V_6 = {0};
	t774 * V_7 = {0};
	t776* V_8 = {0};
	{
		if (p1)
		{
			goto IL_000e;
		}
	}
	{
		t484 * L_0 = (t484 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t484_TI));
		m3596(L_0, (t11*) &_stringLiteral1076, &m3596_MI);
		il2cpp_codegen_raise_exception(L_0);
	}

IL_000e:
	{
		V_1 = 0;
		goto IL_0050;
	}

IL_0012:
	{
		int32_t L_1 = V_1;
		V_0 = (*(t774 **)(t774 **)SZArrayLdElema(p1, L_1));
		t776* L_2 = (t776*)VirtFuncInvoker0< t776* >::Invoke(&m3586_MI, V_0);
		V_3 = L_2;
		if ((((int32_t)(((int32_t)(((t107 *)V_3)->max_length)))) == ((int32_t)(((int32_t)(((t107 *)p2)->max_length))))))
		{
			goto IL_0027;
		}
	}
	{
		goto IL_004c;
	}

IL_0027:
	{
		V_2 = 0;
		goto IL_003e;
	}

IL_002b:
	{
		int32_t L_3 = V_2;
		int32_t L_4 = V_2;
		t114 * L_5 = (t114 *)VirtFuncInvoker0< t114 * >::Invoke(&m3587_MI, (*(t775 **)(t775 **)SZArrayLdElema(V_3, L_4)));
		if ((((t114 *)(*(t114 **)(t114 **)SZArrayLdElema(p2, L_3))) == ((t114 *)L_5)))
		{
			goto IL_003a;
		}
	}
	{
		goto IL_0044;
	}

IL_003a:
	{
		V_2 = ((int32_t)(V_2+1));
	}

IL_003e:
	{
		if ((((int32_t)V_2) < ((int32_t)(((int32_t)(((t107 *)p2)->max_length))))))
		{
			goto IL_002b;
		}
	}

IL_0044:
	{
		if ((((uint32_t)V_2) != ((uint32_t)(((int32_t)(((t107 *)p2)->max_length))))))
		{
			goto IL_004c;
		}
	}
	{
		return V_0;
	}

IL_004c:
	{
		V_1 = ((int32_t)(V_1+1));
	}

IL_0050:
	{
		if ((((int32_t)V_1) < ((int32_t)(((int32_t)(((t107 *)p1)->max_length))))))
		{
			goto IL_0012;
		}
	}
	{
		V_4 = 0;
		V_5 = (t114 *)NULL;
		V_1 = 0;
		goto IL_0102;
	}

IL_0063:
	{
		int32_t L_6 = V_1;
		V_0 = (*(t774 **)(t774 **)SZArrayLdElema(p1, L_6));
		t776* L_7 = (t776*)VirtFuncInvoker0< t776* >::Invoke(&m3586_MI, V_0);
		V_6 = L_7;
		if ((((int32_t)(((int32_t)(((t107 *)V_6)->max_length)))) <= ((int32_t)(((int32_t)(((t107 *)p2)->max_length))))))
		{
			goto IL_007d;
		}
	}
	{
		goto IL_00fe;
	}

IL_007d:
	{
		if ((((int32_t)(((t107 *)V_6)->max_length))))
		{
			goto IL_0088;
		}
	}
	{
		goto IL_00fe;
	}

IL_0088:
	{
		int32_t L_8 = ((int32_t)((((int32_t)(((t107 *)V_6)->max_length)))-1));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t114_TI));
		t114 * L_9 = m532(NULL, LoadTypeToken(&t143_0_0_0), &m532_MI);
		bool L_10 = m6083(NULL, (*(t775 **)(t775 **)SZArrayLdElema(V_6, L_8)), L_9, &m6083_MI);
		V_4 = L_10;
		if (V_4)
		{
			goto IL_00a8;
		}
	}
	{
		goto IL_00fe;
	}

IL_00a8:
	{
		int32_t L_11 = ((int32_t)((((int32_t)(((t107 *)V_6)->max_length)))-1));
		t114 * L_12 = (t114 *)VirtFuncInvoker0< t114 * >::Invoke(&m3587_MI, (*(t775 **)(t775 **)SZArrayLdElema(V_6, L_11)));
		t114 * L_13 = (t114 *)VirtFuncInvoker0< t114 * >::Invoke(&m11046_MI, L_12);
		V_5 = L_13;
		V_2 = 0;
		goto IL_00f0;
	}

IL_00c1:
	{
		if ((((int32_t)V_2) >= ((int32_t)((int32_t)((((int32_t)(((t107 *)V_6)->max_length)))-1)))))
		{
			goto IL_00da;
		}
	}
	{
		int32_t L_14 = V_2;
		int32_t L_15 = V_2;
		t114 * L_16 = (t114 *)VirtFuncInvoker0< t114 * >::Invoke(&m3587_MI, (*(t775 **)(t775 **)SZArrayLdElema(V_6, L_15)));
		if ((((t114 *)(*(t114 **)(t114 **)SZArrayLdElema(p2, L_14))) == ((t114 *)L_16)))
		{
			goto IL_00da;
		}
	}
	{
		goto IL_00f6;
	}

IL_00da:
	{
		if ((((int32_t)V_2) < ((int32_t)((int32_t)((((int32_t)(((t107 *)V_6)->max_length)))-1)))))
		{
			goto IL_00ec;
		}
	}
	{
		int32_t L_17 = V_2;
		if ((((t114 *)(*(t114 **)(t114 **)SZArrayLdElema(p2, L_17))) == ((t114 *)V_5)))
		{
			goto IL_00ec;
		}
	}
	{
		goto IL_00f6;
	}

IL_00ec:
	{
		V_2 = ((int32_t)(V_2+1));
	}

IL_00f0:
	{
		if ((((int32_t)V_2) < ((int32_t)(((int32_t)(((t107 *)p2)->max_length))))))
		{
			goto IL_00c1;
		}
	}

IL_00f6:
	{
		if ((((uint32_t)V_2) != ((uint32_t)(((int32_t)(((t107 *)p2)->max_length))))))
		{
			goto IL_00fe;
		}
	}
	{
		return V_0;
	}

IL_00fe:
	{
		V_1 = ((int32_t)(V_1+1));
	}

IL_0102:
	{
		if ((((int32_t)V_1) < ((int32_t)(((int32_t)(((t107 *)p1)->max_length))))))
		{
			goto IL_0063;
		}
	}
	{
		if (!((int32_t)((int32_t)p0&(int32_t)((int32_t)65536))))
		{
			goto IL_0116;
		}
	}
	{
		return (t774 *)NULL;
	}

IL_0116:
	{
		V_7 = (t774 *)NULL;
		V_1 = 0;
		goto IL_015b;
	}

IL_011d:
	{
		int32_t L_18 = V_1;
		V_0 = (*(t774 **)(t774 **)SZArrayLdElema(p1, L_18));
		t776* L_19 = (t776*)VirtFuncInvoker0< t776* >::Invoke(&m3586_MI, V_0);
		V_8 = L_19;
		if ((((int32_t)(((int32_t)(((t107 *)V_8)->max_length)))) == ((int32_t)(((int32_t)(((t107 *)p2)->max_length))))))
		{
			goto IL_0134;
		}
	}
	{
		goto IL_0157;
	}

IL_0134:
	{
		bool L_20 = m8508(NULL, p2, V_8, p4, &m8508_MI);
		if (L_20)
		{
			goto IL_0142;
		}
	}
	{
		goto IL_0157;
	}

IL_0142:
	{
		if (!V_7)
		{
			goto IL_0154;
		}
	}
	{
		t774 * L_21 = m8511(__this, V_7, V_0, p2, &m8511_MI);
		V_7 = L_21;
		goto IL_0157;
	}

IL_0154:
	{
		V_7 = V_0;
	}

IL_0157:
	{
		V_1 = ((int32_t)(V_1+1));
	}

IL_015b:
	{
		if ((((int32_t)V_1) < ((int32_t)(((int32_t)(((t107 *)p1)->max_length))))))
		{
			goto IL_011d;
		}
	}
	{
		return V_7;
	}
}
 t774 * m8511 (t1660 * __this, t774 * p0, t774 * p1, t675* p2, MethodInfo* method){
	t776* V_0 = {0};
	t776* V_1 = {0};
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	t114 * V_5 = {0};
	t114 * V_6 = {0};
	bool V_7 = false;
	bool V_8 = false;
	t774 * G_B19_0 = {0};
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(&m8565_MI, p0);
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(&m8565_MI, p1);
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		return p1;
	}

IL_0012:
	{
		bool L_2 = (bool)VirtFuncInvoker0< bool >::Invoke(&m8565_MI, p1);
		if (!L_2)
		{
			goto IL_0024;
		}
	}
	{
		bool L_3 = (bool)VirtFuncInvoker0< bool >::Invoke(&m8565_MI, p0);
		if (L_3)
		{
			goto IL_0024;
		}
	}
	{
		return p0;
	}

IL_0024:
	{
		t776* L_4 = (t776*)VirtFuncInvoker0< t776* >::Invoke(&m3586_MI, p0);
		V_0 = L_4;
		t776* L_5 = (t776*)VirtFuncInvoker0< t776* >::Invoke(&m3586_MI, p1);
		V_1 = L_5;
		V_2 = 0;
		V_3 = 0;
		goto IL_006d;
	}

IL_0038:
	{
		int32_t L_6 = V_3;
		t114 * L_7 = (t114 *)VirtFuncInvoker0< t114 * >::Invoke(&m3587_MI, (*(t775 **)(t775 **)SZArrayLdElema(V_0, L_6)));
		int32_t L_8 = V_3;
		t114 * L_9 = (t114 *)VirtFuncInvoker0< t114 * >::Invoke(&m3587_MI, (*(t775 **)(t775 **)SZArrayLdElema(V_1, L_8)));
		int32_t L_10 = m8512(__this, L_7, L_9, &m8512_MI);
		V_4 = L_10;
		if (!V_4)
		{
			goto IL_0062;
		}
	}
	{
		if (!V_2)
		{
			goto IL_0062;
		}
	}
	{
		if ((((int32_t)V_2) == ((int32_t)V_4)))
		{
			goto IL_0062;
		}
	}
	{
		t1653 * L_11 = (t1653 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1653_TI));
		m8455(L_11, &m8455_MI);
		il2cpp_codegen_raise_exception(L_11);
	}

IL_0062:
	{
		if (!V_4)
		{
			goto IL_0069;
		}
	}
	{
		V_2 = V_4;
	}

IL_0069:
	{
		V_3 = ((int32_t)(V_3+1));
	}

IL_006d:
	{
		if ((((int32_t)V_3) < ((int32_t)(((int32_t)(((t107 *)V_0)->max_length))))))
		{
			goto IL_0038;
		}
	}
	{
		if (!V_2)
		{
			goto IL_007f;
		}
	}
	{
		if ((((int32_t)V_2) <= ((int32_t)0)))
		{
			goto IL_007d;
		}
	}
	{
		G_B19_0 = p1;
		goto IL_007e;
	}

IL_007d:
	{
		G_B19_0 = p0;
	}

IL_007e:
	{
		return G_B19_0;
	}

IL_007f:
	{
		t114 * L_12 = (t114 *)VirtFuncInvoker0< t114 * >::Invoke(&m3584_MI, p0);
		V_5 = L_12;
		t114 * L_13 = (t114 *)VirtFuncInvoker0< t114 * >::Invoke(&m3584_MI, p1);
		V_6 = L_13;
		if ((((t114 *)V_5) == ((t114 *)V_6)))
		{
			goto IL_00af;
		}
	}
	{
		bool L_14 = (bool)VirtFuncInvoker1< bool, t114 * >::Invoke(&m6810_MI, V_5, V_6);
		if (!L_14)
		{
			goto IL_00a2;
		}
	}
	{
		return p0;
	}

IL_00a2:
	{
		bool L_15 = (bool)VirtFuncInvoker1< bool, t114 * >::Invoke(&m6810_MI, V_6, V_5);
		if (!L_15)
		{
			goto IL_00af;
		}
	}
	{
		return p1;
	}

IL_00af:
	{
		int32_t L_16 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m8559_MI, p0);
		V_7 = ((((int32_t)((((int32_t)((int32_t)((int32_t)L_16&(int32_t)2))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		int32_t L_17 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m8559_MI, p1);
		V_8 = ((((int32_t)((((int32_t)((int32_t)((int32_t)L_17&(int32_t)2))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		if (!V_7)
		{
			goto IL_00d9;
		}
	}
	{
		if (V_8)
		{
			goto IL_00d9;
		}
	}
	{
		return p1;
	}

IL_00d9:
	{
		if (!V_8)
		{
			goto IL_00e3;
		}
	}
	{
		if (V_7)
		{
			goto IL_00e3;
		}
	}
	{
		return p0;
	}

IL_00e3:
	{
		t1653 * L_18 = (t1653 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1653_TI));
		m8455(L_18, &m8455_MI);
		il2cpp_codegen_raise_exception(L_18);
	}
}
 int32_t m8512 (t1660 * __this, t114 * p0, t114 * p1, MethodInfo* method){
	{
		if ((((t114 *)p0) != ((t114 *)p1)))
		{
			goto IL_0006;
		}
	}
	{
		return 0;
	}

IL_0006:
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(&m6840_MI, p0);
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(&m6840_MI, p1);
		if (L_1)
		{
			goto IL_0018;
		}
	}
	{
		return 1;
	}

IL_0018:
	{
		bool L_2 = (bool)VirtFuncInvoker0< bool >::Invoke(&m6840_MI, p0);
		if (L_2)
		{
			goto IL_002a;
		}
	}
	{
		bool L_3 = (bool)VirtFuncInvoker0< bool >::Invoke(&m6840_MI, p1);
		if (!L_3)
		{
			goto IL_002a;
		}
	}
	{
		return (-1);
	}

IL_002a:
	{
		bool L_4 = (bool)VirtFuncInvoker0< bool >::Invoke(&m6781_MI, p0);
		if (!L_4)
		{
			goto IL_004d;
		}
	}
	{
		bool L_5 = (bool)VirtFuncInvoker0< bool >::Invoke(&m6781_MI, p1);
		if (!L_5)
		{
			goto IL_004d;
		}
	}
	{
		t114 * L_6 = (t114 *)VirtFuncInvoker0< t114 * >::Invoke(&m11046_MI, p0);
		t114 * L_7 = (t114 *)VirtFuncInvoker0< t114 * >::Invoke(&m11046_MI, p1);
		int32_t L_8 = m8512(__this, L_6, L_7, &m8512_MI);
		return L_8;
	}

IL_004d:
	{
		bool L_9 = (bool)VirtFuncInvoker1< bool, t114 * >::Invoke(&m6810_MI, p0, p1);
		if (!L_9)
		{
			goto IL_0058;
		}
	}
	{
		return (-1);
	}

IL_0058:
	{
		bool L_10 = (bool)VirtFuncInvoker1< bool, t114 * >::Invoke(&m6810_MI, p1, p0);
		if (!L_10)
		{
			goto IL_0063;
		}
	}
	{
		return 1;
	}

IL_0063:
	{
		bool L_11 = (bool)VirtFuncInvoker0< bool >::Invoke(&m6789_MI, p0);
		if (!L_11)
		{
			goto IL_007c;
		}
	}
	{
		t675* L_12 = (t675*)VirtFuncInvoker0< t675* >::Invoke(&m11185_MI, p1);
		int32_t L_13 = m11484(NULL, L_12, p0, &m11484_MI);
		if ((((int32_t)L_13) < ((int32_t)0)))
		{
			goto IL_007c;
		}
	}
	{
		return 1;
	}

IL_007c:
	{
		bool L_14 = (bool)VirtFuncInvoker0< bool >::Invoke(&m6789_MI, p1);
		if (!L_14)
		{
			goto IL_0095;
		}
	}
	{
		t675* L_15 = (t675*)VirtFuncInvoker0< t675* >::Invoke(&m11185_MI, p0);
		int32_t L_16 = m11484(NULL, L_15, p1, &m11484_MI);
		if ((((int32_t)L_16) < ((int32_t)0)))
		{
			goto IL_0095;
		}
	}
	{
		return (-1);
	}

IL_0095:
	{
		return 0;
	}
}
extern MethodInfo m8513_MI;
 t1407 * m8513 (t1660 * __this, int32_t p0, t1662* p1, t114 * p2, t675* p3, t772* p4, MethodInfo* method){
	bool V_0 = false;
	int32_t V_1 = 0;
	t1407 * V_2 = {0};
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	t1407 * V_7 = {0};
	t776* V_8 = {0};
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t G_B6_0 = 0;
	{
		if (!p1)
		{
			goto IL_0008;
		}
	}
	{
		if ((((int32_t)(((t107 *)p1)->max_length))))
		{
			goto IL_0018;
		}
	}

IL_0008:
	{
		t160 * L_0 = (t160 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t160_TI));
		m614(L_0, (t11*) &_stringLiteral1855, (t11*) &_stringLiteral1076, &m614_MI);
		il2cpp_codegen_raise_exception(L_0);
	}

IL_0018:
	{
		V_0 = ((((int32_t)((((t114 *)p2) == ((t5 *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		if (!p3)
		{
			goto IL_002a;
		}
	}
	{
		G_B6_0 = (((int32_t)(((t107 *)p3)->max_length)));
		goto IL_002b;
	}

IL_002a:
	{
		G_B6_0 = (-1);
	}

IL_002b:
	{
		V_1 = G_B6_0;
		V_2 = (t1407 *)NULL;
		V_4 = ((int32_t)2147483646);
		V_5 = ((int32_t)2147483647);
		V_6 = 0;
		V_3 = ((int32_t)((((int32_t)(((t107 *)p1)->max_length)))-1));
		goto IL_00d6;
	}

IL_004a:
	{
		int32_t L_1 = V_3;
		V_7 = (*(t1407 **)(t1407 **)SZArrayLdElema(p1, L_1));
		t776* L_2 = (t776*)VirtFuncInvoker0< t776* >::Invoke(&m11485_MI, V_7);
		V_8 = L_2;
		if ((((int32_t)V_1) < ((int32_t)0)))
		{
			goto IL_0068;
		}
	}
	{
		if ((((int32_t)V_1) == ((int32_t)(((int32_t)(((t107 *)V_8)->max_length))))))
		{
			goto IL_0068;
		}
	}
	{
		goto IL_00d2;
	}

IL_0068:
	{
		if (!V_0)
		{
			goto IL_0077;
		}
	}
	{
		t114 * L_3 = (t114 *)VirtFuncInvoker0< t114 * >::Invoke(&m11486_MI, V_7);
		if ((((t114 *)L_3) == ((t114 *)p2)))
		{
			goto IL_0077;
		}
	}
	{
		goto IL_00d2;
	}

IL_0077:
	{
		V_9 = ((int32_t)2147483646);
		if ((((int32_t)V_1) <= ((int32_t)0)))
		{
			goto IL_0094;
		}
	}
	{
		int32_t L_4 = m8514(NULL, p3, V_8, &m8514_MI);
		V_9 = L_4;
		if ((((uint32_t)V_9) != ((uint32_t)(-1))))
		{
			goto IL_0094;
		}
	}
	{
		goto IL_00d2;
	}

IL_0094:
	{
		t114 * L_5 = (t114 *)VirtFuncInvoker0< t114 * >::Invoke(&m3584_MI, V_7);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t769_TI));
		int32_t L_6 = m8520(NULL, L_5, &m8520_MI);
		V_10 = L_6;
		if (!V_2)
		{
			goto IL_00c7;
		}
	}
	{
		if ((((int32_t)V_4) >= ((int32_t)V_9)))
		{
			goto IL_00ad;
		}
	}
	{
		goto IL_00d2;
	}

IL_00ad:
	{
		if ((((uint32_t)V_4) != ((uint32_t)V_9)))
		{
			goto IL_00c7;
		}
	}
	{
		if ((((uint32_t)V_6) != ((uint32_t)V_10)))
		{
			goto IL_00bf;
		}
	}
	{
		V_5 = V_9;
		goto IL_00d2;
	}

IL_00bf:
	{
		if ((((int32_t)V_6) <= ((int32_t)V_10)))
		{
			goto IL_00c7;
		}
	}
	{
		goto IL_00d2;
	}

IL_00c7:
	{
		V_2 = V_7;
		V_4 = V_9;
		V_6 = V_10;
	}

IL_00d2:
	{
		V_3 = ((int32_t)(V_3-1));
	}

IL_00d6:
	{
		if ((((int32_t)V_3) >= ((int32_t)0)))
		{
			goto IL_004a;
		}
	}
	{
		if ((((int32_t)V_5) > ((int32_t)V_4)))
		{
			goto IL_00e9;
		}
	}
	{
		t1653 * L_7 = (t1653 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1653_TI));
		m8455(L_7, &m8455_MI);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_00e9:
	{
		return V_2;
	}
}
 int32_t m8514 (t5 * __this, t675* p0, t776* p1, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		V_0 = (-1);
		V_1 = 0;
		goto IL_0027;
	}

IL_0006:
	{
		int32_t L_0 = V_1;
		int32_t L_1 = V_1;
		t114 * L_2 = (t114 *)VirtFuncInvoker0< t114 * >::Invoke(&m3587_MI, (*(t775 **)(t775 **)SZArrayLdElema(p1, L_1)));
		int32_t L_3 = m8515(NULL, (*(t114 **)(t114 **)SZArrayLdElema(p0, L_0)), L_2, &m8515_MI);
		V_2 = L_3;
		if ((((uint32_t)V_2) != ((uint32_t)(-1))))
		{
			goto IL_001d;
		}
	}
	{
		return (-1);
	}

IL_001d:
	{
		if ((((int32_t)V_0) >= ((int32_t)V_2)))
		{
			goto IL_0023;
		}
	}
	{
		V_0 = V_2;
	}

IL_0023:
	{
		V_1 = ((int32_t)(V_1+1));
	}

IL_0027:
	{
		if ((((int32_t)V_1) < ((int32_t)(((int32_t)(((t107 *)p0)->max_length))))))
		{
			goto IL_0006;
		}
	}
	{
		return V_0;
	}
}
 int32_t m8515 (t5 * __this, t114 * p0, t114 * p1, MethodInfo* method){
	int32_t V_0 = {0};
	int32_t V_1 = {0};
	int32_t V_2 = {0};
	int32_t V_3 = {0};
	int32_t G_B4_0 = 0;
	int32_t G_B23_0 = 0;
	int32_t G_B31_0 = 0;
	int32_t G_B39_0 = 0;
	int32_t G_B47_0 = 0;
	int32_t G_B55_0 = 0;
	int32_t G_B63_0 = 0;
	int32_t G_B72_0 = 0;
	int32_t G_B76_0 = 0;
	int32_t G_B80_0 = 0;
	{
		if (p0)
		{
			goto IL_0010;
		}
	}
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(&m6794_MI, p1);
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		G_B4_0 = (-1);
		goto IL_000f;
	}

IL_000e:
	{
		G_B4_0 = 0;
	}

IL_000f:
	{
		return G_B4_0;
	}

IL_0010:
	{
		if ((((t114 *)p0) != ((t114 *)p1)))
		{
			goto IL_0016;
		}
	}
	{
		return 0;
	}

IL_0016:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t114_TI));
		t114 * L_1 = m532(NULL, LoadTypeToken(&t5_0_0_0), &m532_MI);
		if ((((t114 *)p1) != ((t114 *)L_1)))
		{
			goto IL_0025;
		}
	}
	{
		return 4;
	}

IL_0025:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t114_TI));
		int32_t L_2 = m6805(NULL, p0, &m6805_MI);
		V_0 = L_2;
		int32_t L_3 = m6805(NULL, p1, &m6805_MI);
		V_1 = L_3;
		V_2 = V_0;
		if (((int32_t)(V_2-4)) == 0)
		{
			goto IL_006a;
		}
		if (((int32_t)(V_2-4)) == 1)
		{
			goto IL_00ec;
		}
		if (((int32_t)(V_2-4)) == 2)
		{
			goto IL_0098;
		}
		if (((int32_t)(V_2-4)) == 3)
		{
			goto IL_0175;
		}
		if (((int32_t)(V_2-4)) == 4)
		{
			goto IL_0134;
		}
		if (((int32_t)(V_2-4)) == 5)
		{
			goto IL_01ef;
		}
		if (((int32_t)(V_2-4)) == 6)
		{
			goto IL_01b6;
		}
		if (((int32_t)(V_2-4)) == 7)
		{
			goto IL_0228;
		}
		if (((int32_t)(V_2-4)) == 8)
		{
			goto IL_0228;
		}
		if (((int32_t)(V_2-4)) == 9)
		{
			goto IL_0252;
		}
	}
	{
		goto IL_025c;
	}

IL_006a:
	{
		V_3 = V_1;
		if (((int32_t)(V_3-8)) == 0)
		{
			goto IL_0092;
		}
		if (((int32_t)(V_3-8)) == 1)
		{
			goto IL_0094;
		}
		if (((int32_t)(V_3-8)) == 2)
		{
			goto IL_0094;
		}
		if (((int32_t)(V_3-8)) == 3)
		{
			goto IL_0094;
		}
		if (((int32_t)(V_3-8)) == 4)
		{
			goto IL_0094;
		}
		if (((int32_t)(V_3-8)) == 5)
		{
			goto IL_0094;
		}
		if (((int32_t)(V_3-8)) == 6)
		{
			goto IL_0094;
		}
	}
	{
		goto IL_0096;
	}

IL_0092:
	{
		return 0;
	}

IL_0094:
	{
		return 2;
	}

IL_0096:
	{
		return (-1);
	}

IL_0098:
	{
		V_3 = V_1;
		if (((int32_t)(V_3-4)) == 0)
		{
			goto IL_00d0;
		}
		if (((int32_t)(V_3-4)) == 1)
		{
			goto IL_00d2;
		}
		if (((int32_t)(V_3-4)) == 2)
		{
			goto IL_00d2;
		}
		if (((int32_t)(V_3-4)) == 3)
		{
			goto IL_00d0;
		}
		if (((int32_t)(V_3-4)) == 4)
		{
			goto IL_00d0;
		}
		if (((int32_t)(V_3-4)) == 5)
		{
			goto IL_00d0;
		}
		if (((int32_t)(V_3-4)) == 6)
		{
			goto IL_00d0;
		}
		if (((int32_t)(V_3-4)) == 7)
		{
			goto IL_00d0;
		}
		if (((int32_t)(V_3-4)) == 8)
		{
			goto IL_00d0;
		}
		if (((int32_t)(V_3-4)) == 9)
		{
			goto IL_00d0;
		}
		if (((int32_t)(V_3-4)) == 10)
		{
			goto IL_00d0;
		}
	}
	{
		goto IL_00d2;
	}

IL_00d0:
	{
		return 2;
	}

IL_00d2:
	{
		bool L_4 = (bool)VirtFuncInvoker0< bool >::Invoke(&m6787_MI, p0);
		if (!L_4)
		{
			goto IL_00ea;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t114_TI));
		t114 * L_5 = m532(NULL, LoadTypeToken(&t18_0_0_0), &m532_MI);
		if ((((t114 *)p1) != ((t114 *)L_5)))
		{
			goto IL_00ea;
		}
	}
	{
		G_B23_0 = 1;
		goto IL_00eb;
	}

IL_00ea:
	{
		G_B23_0 = (-1);
	}

IL_00eb:
	{
		return G_B23_0;
	}

IL_00ec:
	{
		V_3 = V_1;
		if (((int32_t)(V_3-7)) == 0)
		{
			goto IL_0118;
		}
		if (((int32_t)(V_3-7)) == 1)
		{
			goto IL_011a;
		}
		if (((int32_t)(V_3-7)) == 2)
		{
			goto IL_0118;
		}
		if (((int32_t)(V_3-7)) == 3)
		{
			goto IL_011a;
		}
		if (((int32_t)(V_3-7)) == 4)
		{
			goto IL_0118;
		}
		if (((int32_t)(V_3-7)) == 5)
		{
			goto IL_011a;
		}
		if (((int32_t)(V_3-7)) == 6)
		{
			goto IL_0118;
		}
		if (((int32_t)(V_3-7)) == 7)
		{
			goto IL_0118;
		}
	}
	{
		goto IL_011a;
	}

IL_0118:
	{
		return 2;
	}

IL_011a:
	{
		bool L_6 = (bool)VirtFuncInvoker0< bool >::Invoke(&m6787_MI, p0);
		if (!L_6)
		{
			goto IL_0132;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t114_TI));
		t114 * L_7 = m532(NULL, LoadTypeToken(&t18_0_0_0), &m532_MI);
		if ((((t114 *)p1) != ((t114 *)L_7)))
		{
			goto IL_0132;
		}
	}
	{
		G_B31_0 = 1;
		goto IL_0133;
	}

IL_0132:
	{
		G_B31_0 = (-1);
	}

IL_0133:
	{
		return G_B31_0;
	}

IL_0134:
	{
		V_3 = V_1;
		if (((int32_t)(V_3-((int32_t)9))) == 0)
		{
			goto IL_0159;
		}
		if (((int32_t)(V_3-((int32_t)9))) == 1)
		{
			goto IL_0159;
		}
		if (((int32_t)(V_3-((int32_t)9))) == 2)
		{
			goto IL_0159;
		}
		if (((int32_t)(V_3-((int32_t)9))) == 3)
		{
			goto IL_0159;
		}
		if (((int32_t)(V_3-((int32_t)9))) == 4)
		{
			goto IL_0159;
		}
		if (((int32_t)(V_3-((int32_t)9))) == 5)
		{
			goto IL_0159;
		}
	}
	{
		goto IL_015b;
	}

IL_0159:
	{
		return 2;
	}

IL_015b:
	{
		bool L_8 = (bool)VirtFuncInvoker0< bool >::Invoke(&m6787_MI, p0);
		if (!L_8)
		{
			goto IL_0173;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t114_TI));
		t114 * L_9 = m532(NULL, LoadTypeToken(&t18_0_0_0), &m532_MI);
		if ((((t114 *)p1) != ((t114 *)L_9)))
		{
			goto IL_0173;
		}
	}
	{
		G_B39_0 = 1;
		goto IL_0174;
	}

IL_0173:
	{
		G_B39_0 = (-1);
	}

IL_0174:
	{
		return G_B39_0;
	}

IL_0175:
	{
		V_3 = V_1;
		if (((int32_t)(V_3-((int32_t)9))) == 0)
		{
			goto IL_019a;
		}
		if (((int32_t)(V_3-((int32_t)9))) == 1)
		{
			goto IL_019c;
		}
		if (((int32_t)(V_3-((int32_t)9))) == 2)
		{
			goto IL_019a;
		}
		if (((int32_t)(V_3-((int32_t)9))) == 3)
		{
			goto IL_019c;
		}
		if (((int32_t)(V_3-((int32_t)9))) == 4)
		{
			goto IL_019a;
		}
		if (((int32_t)(V_3-((int32_t)9))) == 5)
		{
			goto IL_019a;
		}
	}
	{
		goto IL_019c;
	}

IL_019a:
	{
		return 2;
	}

IL_019c:
	{
		bool L_10 = (bool)VirtFuncInvoker0< bool >::Invoke(&m6787_MI, p0);
		if (!L_10)
		{
			goto IL_01b4;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t114_TI));
		t114 * L_11 = m532(NULL, LoadTypeToken(&t18_0_0_0), &m532_MI);
		if ((((t114 *)p1) != ((t114 *)L_11)))
		{
			goto IL_01b4;
		}
	}
	{
		G_B47_0 = 1;
		goto IL_01b5;
	}

IL_01b4:
	{
		G_B47_0 = (-1);
	}

IL_01b5:
	{
		return G_B47_0;
	}

IL_01b6:
	{
		V_3 = V_1;
		if (((int32_t)(V_3-((int32_t)11))) == 0)
		{
			goto IL_01d3;
		}
		if (((int32_t)(V_3-((int32_t)11))) == 1)
		{
			goto IL_01d3;
		}
		if (((int32_t)(V_3-((int32_t)11))) == 2)
		{
			goto IL_01d3;
		}
		if (((int32_t)(V_3-((int32_t)11))) == 3)
		{
			goto IL_01d3;
		}
	}
	{
		goto IL_01d5;
	}

IL_01d3:
	{
		return 2;
	}

IL_01d5:
	{
		bool L_12 = (bool)VirtFuncInvoker0< bool >::Invoke(&m6787_MI, p0);
		if (!L_12)
		{
			goto IL_01ed;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t114_TI));
		t114 * L_13 = m532(NULL, LoadTypeToken(&t18_0_0_0), &m532_MI);
		if ((((t114 *)p1) != ((t114 *)L_13)))
		{
			goto IL_01ed;
		}
	}
	{
		G_B55_0 = 1;
		goto IL_01ee;
	}

IL_01ed:
	{
		G_B55_0 = (-1);
	}

IL_01ee:
	{
		return G_B55_0;
	}

IL_01ef:
	{
		V_3 = V_1;
		if (((int32_t)(V_3-((int32_t)11))) == 0)
		{
			goto IL_020c;
		}
		if (((int32_t)(V_3-((int32_t)11))) == 1)
		{
			goto IL_020e;
		}
		if (((int32_t)(V_3-((int32_t)11))) == 2)
		{
			goto IL_020c;
		}
		if (((int32_t)(V_3-((int32_t)11))) == 3)
		{
			goto IL_020c;
		}
	}
	{
		goto IL_020e;
	}

IL_020c:
	{
		return 2;
	}

IL_020e:
	{
		bool L_14 = (bool)VirtFuncInvoker0< bool >::Invoke(&m6787_MI, p0);
		if (!L_14)
		{
			goto IL_0226;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t114_TI));
		t114 * L_15 = m532(NULL, LoadTypeToken(&t18_0_0_0), &m532_MI);
		if ((((t114 *)p1) != ((t114 *)L_15)))
		{
			goto IL_0226;
		}
	}
	{
		G_B63_0 = 1;
		goto IL_0227;
	}

IL_0226:
	{
		G_B63_0 = (-1);
	}

IL_0227:
	{
		return G_B63_0;
	}

IL_0228:
	{
		V_3 = V_1;
		if ((((int32_t)V_3) == ((int32_t)((int32_t)13))))
		{
			goto IL_0236;
		}
	}
	{
		if ((((int32_t)V_3) == ((int32_t)((int32_t)14))))
		{
			goto IL_0236;
		}
	}
	{
		goto IL_0238;
	}

IL_0236:
	{
		return 2;
	}

IL_0238:
	{
		bool L_16 = (bool)VirtFuncInvoker0< bool >::Invoke(&m6787_MI, p0);
		if (!L_16)
		{
			goto IL_0250;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t114_TI));
		t114 * L_17 = m532(NULL, LoadTypeToken(&t18_0_0_0), &m532_MI);
		if ((((t114 *)p1) != ((t114 *)L_17)))
		{
			goto IL_0250;
		}
	}
	{
		G_B72_0 = 1;
		goto IL_0251;
	}

IL_0250:
	{
		G_B72_0 = (-1);
	}

IL_0251:
	{
		return G_B72_0;
	}

IL_0252:
	{
		if ((((uint32_t)V_1) != ((uint32_t)((int32_t)14))))
		{
			goto IL_025a;
		}
	}
	{
		G_B76_0 = 2;
		goto IL_025b;
	}

IL_025a:
	{
		G_B76_0 = (-1);
	}

IL_025b:
	{
		return G_B76_0;
	}

IL_025c:
	{
		bool L_18 = (bool)VirtFuncInvoker1< bool, t114 * >::Invoke(&m3627_MI, p1, p0);
		if (!L_18)
		{
			goto IL_0268;
		}
	}
	{
		G_B80_0 = 3;
		goto IL_0269;
	}

IL_0268:
	{
		G_B80_0 = (-1);
	}

IL_0269:
	{
		return G_B80_0;
	}
}
// Metadata Definition System.Reflection.Binder/Default
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m8501_MI = 
{
	".ctor", (methodPointerType)&m8501, &t1660_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 3246, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t768_0_0_0;
extern Il2CppType t1661_0_0_0;
extern Il2CppType t1661_0_0_0;
extern Il2CppType t168_1_0_0;
extern Il2CppType t168_1_0_0;
extern Il2CppType t772_0_0_0;
extern Il2CppType t771_0_0_0;
extern Il2CppType t585_0_0_0;
extern Il2CppType t5_1_0_2;
extern Il2CppType t5_1_0_0;
static ParameterInfo t1660_m8502_ParameterInfos[] = 
{
	{"bindingAttr", 0, 134221804, &EmptyCustomAttributesCache, &t768_0_0_0},
	{"match", 1, 134221805, &EmptyCustomAttributesCache, &t1661_0_0_0},
	{"args", 2, 134221806, &EmptyCustomAttributesCache, &t168_1_0_0},
	{"modifiers", 3, 134221807, &EmptyCustomAttributesCache, &t772_0_0_0},
	{"culture", 4, 134221808, &EmptyCustomAttributesCache, &t771_0_0_0},
	{"names", 5, 134221809, &EmptyCustomAttributesCache, &t585_0_0_0},
	{"state", 6, 134221810, &EmptyCustomAttributesCache, &t5_1_0_2},
};
extern Il2CppType t774_0_0_0;
extern void* RuntimeInvoker_t5_t110_t5_t2037_t5_t5_t5_t2357 (MethodInfo* method, void* obj, void** args);
MethodInfo m8502_MI = 
{
	"BindToMethod", (methodPointerType)&m8502, &t1660_TI, &t774_0_0_0, RuntimeInvoker_t5_t110_t5_t2037_t5_t5_t5_t2357, t1660_m8502_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 7, false, false, 3247, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t585_0_0_0;
extern Il2CppType t168_1_0_0;
extern Il2CppType t774_0_0_0;
extern Il2CppType t774_0_0_0;
static ParameterInfo t1660_m8503_ParameterInfos[] = 
{
	{"names", 0, 134221811, &EmptyCustomAttributesCache, &t585_0_0_0},
	{"args", 1, 134221812, &EmptyCustomAttributesCache, &t168_1_0_0},
	{"selected", 2, 134221813, &EmptyCustomAttributesCache, &t774_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t2037_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8503_MI = 
{
	"ReorderParameters", (methodPointerType)&m8503, &t1660_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t2037_t5, t1660_m8503_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, false, false, 3248, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t114_0_0_0;
extern Il2CppType t114_0_0_0;
static ParameterInfo t1660_m8504_ParameterInfos[] = 
{
	{"object_type", 0, 134221814, &EmptyCustomAttributesCache, &t114_0_0_0},
	{"target_type", 1, 134221815, &EmptyCustomAttributesCache, &t114_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8504_MI = 
{
	"IsArrayAssignable", (methodPointerType)&m8504, &t1660_TI, &t108_0_0_0, RuntimeInvoker_t108_t5_t5, t1660_m8504_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 2, false, false, 3249, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t5_0_0_0;
extern Il2CppType t114_0_0_0;
extern Il2CppType t771_0_0_0;
static ParameterInfo t1660_m8505_ParameterInfos[] = 
{
	{"value", 0, 134221816, &EmptyCustomAttributesCache, &t5_0_0_0},
	{"type", 1, 134221817, &EmptyCustomAttributesCache, &t114_0_0_0},
	{"culture", 2, 134221818, &EmptyCustomAttributesCache, &t771_0_0_0},
};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5_t5_t5_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8505_MI = 
{
	"ChangeType", (methodPointerType)&m8505, &t1660_TI, &t5_0_0_0, RuntimeInvoker_t5_t5_t5_t5, t1660_m8505_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 5, 3, false, false, 3250, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t168_1_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t1660_m8506_ParameterInfos[] = 
{
	{"args", 0, 134221819, &EmptyCustomAttributesCache, &t168_1_0_0},
	{"state", 1, 134221820, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t2037_t5 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t1660__CustomAttributeCache_m8506;
MethodInfo m8506_MI = 
{
	"ReorderArgumentArray", (methodPointerType)&m8506, &t1660_TI, &t109_0_0_0, RuntimeInvoker_t109_t2037_t5, t1660_m8506_ParameterInfos, &t1660__CustomAttributeCache_m8506, 198, 0, 6, 2, false, false, 3251, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t114_0_0_0;
extern Il2CppType t114_0_0_0;
static ParameterInfo t1660_m8507_ParameterInfos[] = 
{
	{"from", 0, 134221821, &EmptyCustomAttributesCache, &t114_0_0_0},
	{"to", 1, 134221822, &EmptyCustomAttributesCache, &t114_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8507_MI = 
{
	"check_type", (methodPointerType)&m8507, &t1660_TI, &t108_0_0_0, RuntimeInvoker_t108_t5_t5, t1660_m8507_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 2, false, false, 3252, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t675_0_0_0;
extern Il2CppType t776_0_0_0;
extern Il2CppType t776_0_0_0;
extern Il2CppType t108_0_0_0;
static ParameterInfo t1660_m8508_ParameterInfos[] = 
{
	{"types", 0, 134221823, &EmptyCustomAttributesCache, &t675_0_0_0},
	{"args", 1, 134221824, &EmptyCustomAttributesCache, &t776_0_0_0},
	{"allowByRefMatch", 2, 134221825, &EmptyCustomAttributesCache, &t108_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5_t5_t111 (MethodInfo* method, void* obj, void** args);
MethodInfo m8508_MI = 
{
	"check_arguments", (methodPointerType)&m8508, &t1660_TI, &t108_0_0_0, RuntimeInvoker_t108_t5_t5_t111, t1660_m8508_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 3, false, false, 3253, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t768_0_0_0;
extern Il2CppType t1661_0_0_0;
extern Il2CppType t675_0_0_0;
extern Il2CppType t772_0_0_0;
static ParameterInfo t1660_m8509_ParameterInfos[] = 
{
	{"bindingAttr", 0, 134221826, &EmptyCustomAttributesCache, &t768_0_0_0},
	{"match", 1, 134221827, &EmptyCustomAttributesCache, &t1661_0_0_0},
	{"types", 2, 134221828, &EmptyCustomAttributesCache, &t675_0_0_0},
	{"modifiers", 3, 134221829, &EmptyCustomAttributesCache, &t772_0_0_0},
};
extern Il2CppType t774_0_0_0;
extern void* RuntimeInvoker_t5_t110_t5_t5_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8509_MI = 
{
	"SelectMethod", (methodPointerType)&m8509, &t1660_TI, &t774_0_0_0, RuntimeInvoker_t5_t110_t5_t5_t5, t1660_m8509_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 7, 4, false, false, 3254, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t768_0_0_0;
extern Il2CppType t1661_0_0_0;
extern Il2CppType t675_0_0_0;
extern Il2CppType t772_0_0_0;
extern Il2CppType t108_0_0_0;
static ParameterInfo t1660_m8510_ParameterInfos[] = 
{
	{"bindingAttr", 0, 134221830, &EmptyCustomAttributesCache, &t768_0_0_0},
	{"match", 1, 134221831, &EmptyCustomAttributesCache, &t1661_0_0_0},
	{"types", 2, 134221832, &EmptyCustomAttributesCache, &t675_0_0_0},
	{"modifiers", 3, 134221833, &EmptyCustomAttributesCache, &t772_0_0_0},
	{"allowByRefMatch", 4, 134221834, &EmptyCustomAttributesCache, &t108_0_0_0},
};
extern Il2CppType t774_0_0_0;
extern void* RuntimeInvoker_t5_t110_t5_t5_t5_t111 (MethodInfo* method, void* obj, void** args);
MethodInfo m8510_MI = 
{
	"SelectMethod", (methodPointerType)&m8510, &t1660_TI, &t774_0_0_0, RuntimeInvoker_t5_t110_t5_t5_t5_t111, t1660_m8510_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 5, false, false, 3255, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t774_0_0_0;
extern Il2CppType t774_0_0_0;
extern Il2CppType t675_0_0_0;
static ParameterInfo t1660_m8511_ParameterInfos[] = 
{
	{"m1", 0, 134221835, &EmptyCustomAttributesCache, &t774_0_0_0},
	{"m2", 1, 134221836, &EmptyCustomAttributesCache, &t774_0_0_0},
	{"types", 2, 134221837, &EmptyCustomAttributesCache, &t675_0_0_0},
};
extern Il2CppType t774_0_0_0;
extern void* RuntimeInvoker_t5_t5_t5_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8511_MI = 
{
	"GetBetterMethod", (methodPointerType)&m8511, &t1660_TI, &t774_0_0_0, RuntimeInvoker_t5_t5_t5_t5, t1660_m8511_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, false, false, 3256, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t114_0_0_0;
extern Il2CppType t114_0_0_0;
static ParameterInfo t1660_m8512_ParameterInfos[] = 
{
	{"t1", 0, 134221838, &EmptyCustomAttributesCache, &t114_0_0_0},
	{"t2", 1, 134221839, &EmptyCustomAttributesCache, &t114_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8512_MI = 
{
	"CompareCloserType", (methodPointerType)&m8512, &t1660_TI, &t110_0_0_0, RuntimeInvoker_t110_t5_t5, t1660_m8512_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, false, 3257, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t768_0_0_0;
extern Il2CppType t1662_0_0_0;
extern Il2CppType t1662_0_0_0;
extern Il2CppType t114_0_0_0;
extern Il2CppType t675_0_0_0;
extern Il2CppType t772_0_0_0;
static ParameterInfo t1660_m8513_ParameterInfos[] = 
{
	{"bindingAttr", 0, 134221840, &EmptyCustomAttributesCache, &t768_0_0_0},
	{"match", 1, 134221841, &EmptyCustomAttributesCache, &t1662_0_0_0},
	{"returnType", 2, 134221842, &EmptyCustomAttributesCache, &t114_0_0_0},
	{"indexes", 3, 134221843, &EmptyCustomAttributesCache, &t675_0_0_0},
	{"modifiers", 4, 134221844, &EmptyCustomAttributesCache, &t772_0_0_0},
};
extern Il2CppType t1407_0_0_0;
extern void* RuntimeInvoker_t5_t110_t5_t5_t5_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8513_MI = 
{
	"SelectProperty", (methodPointerType)&m8513, &t1660_TI, &t1407_0_0_0, RuntimeInvoker_t5_t110_t5_t5_t5_t5, t1660_m8513_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 8, 5, false, false, 3258, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t675_0_0_0;
extern Il2CppType t776_0_0_0;
static ParameterInfo t1660_m8514_ParameterInfos[] = 
{
	{"types", 0, 134221845, &EmptyCustomAttributesCache, &t675_0_0_0},
	{"args", 1, 134221846, &EmptyCustomAttributesCache, &t776_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8514_MI = 
{
	"check_arguments_with_score", (methodPointerType)&m8514, &t1660_TI, &t110_0_0_0, RuntimeInvoker_t110_t5_t5, t1660_m8514_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 2, false, false, 3259, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t114_0_0_0;
extern Il2CppType t114_0_0_0;
static ParameterInfo t1660_m8515_ParameterInfos[] = 
{
	{"from", 0, 134221847, &EmptyCustomAttributesCache, &t114_0_0_0},
	{"to", 1, 134221848, &EmptyCustomAttributesCache, &t114_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8515_MI = 
{
	"check_type_with_score", (methodPointerType)&m8515, &t1660_TI, &t110_0_0_0, RuntimeInvoker_t110_t5_t5, t1660_m8515_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 2, false, false, 3260, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1660_MIs[] =
{
	&m8501_MI,
	&m8502_MI,
	&m8503_MI,
	&m8504_MI,
	&m8505_MI,
	&m8506_MI,
	&m8507_MI,
	&m8508_MI,
	&m8509_MI,
	&m8510_MI,
	&m8511_MI,
	&m8512_MI,
	&m8513_MI,
	&m8514_MI,
	&m8515_MI,
	NULL
};
static MethodInfo* t1660_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m8502_MI,
	&m8505_MI,
	&m8506_MI,
	&m8509_MI,
	&m8513_MI,
};
void t1660_CustomAttributesCacheGenerator_m8506(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t1430 * tmp;
		tmp = (t1430 *)il2cpp_codegen_object_new (&t1430_TI);
		m6881(tmp, il2cpp_codegen_string_new_wrapper("This method does not do anything in Mono"), &m6881_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1660__CustomAttributeCache_m8506 = {
1,
NULL,
&t1660_CustomAttributesCacheGenerator_m8506
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1660_0_0_0;
extern Il2CppType t1660_1_0_0;
struct t1660;
extern CustomAttributesCache t1660__CustomAttributeCache_m8506;
TypeInfo t1660_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Default", "", t1660_MIs, NULL, NULL, NULL, &t769_TI, NULL, &t769_TI, &t1660_TI, NULL, t1660_VT, &EmptyCustomAttributesCache, &t1660_TI, &t1660_0_0_0, &t1660_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1660), 0, -1, 0, 0, -1, 1048837, 0, false, false, false, false, false, false, false, false, false, false, false, false, 15, 0, 0, 0, 0, 9, 0, 0};
#ifndef _MSC_VER
#else
#endif

#include "t1685.h"
extern TypeInfo t1685_TI;
#include "t1685MD.h"
extern MethodInfo m8747_MI;
extern MethodInfo m11488_MI;
extern MethodInfo m3555_MI;


 void m8516 (t769 * __this, MethodInfo* method){
	{
		m460(__this, &m460_MI);
		return;
	}
}
extern MethodInfo m8517_MI;
 void m8517 (t5 * __this, MethodInfo* method){
	{
		t1660 * L_0 = (t1660 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1660_TI));
		m8501(L_0, &m8501_MI);
		((t769_SFs*)InitializedTypeInfo(&t769_TI)->static_fields)->f0 = L_0;
		return;
	}
}
 t769 * m8518 (t5 * __this, MethodInfo* method){
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t769_TI));
		return (((t769_SFs*)InitializedTypeInfo(&t769_TI)->static_fields)->f0);
	}
}
extern MethodInfo m8519_MI;
 bool m8519 (t5 * __this, t769 * p0, t168* p1, t776* p2, t771 * p3, MethodInfo* method){
	int32_t V_0 = 0;
	t5 * V_1 = {0};
	{
		if (p1)
		{
			goto IL_0010;
		}
	}
	{
		if ((((int32_t)(((t107 *)p2)->max_length))))
		{
			goto IL_000a;
		}
	}
	{
		return 1;
	}

IL_000a:
	{
		t1685 * L_0 = (t1685 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1685_TI));
		m8747(L_0, &m8747_MI);
		il2cpp_codegen_raise_exception(L_0);
	}

IL_0010:
	{
		if ((((int32_t)(((int32_t)(((t107 *)p2)->max_length)))) == ((int32_t)(((int32_t)(((t107 *)p1)->max_length))))))
		{
			goto IL_001e;
		}
	}
	{
		t1685 * L_1 = (t1685 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1685_TI));
		m8747(L_1, &m8747_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_001e:
	{
		V_0 = 0;
		goto IL_0047;
	}

IL_0022:
	{
		int32_t L_2 = V_0;
		int32_t L_3 = V_0;
		t114 * L_4 = (t114 *)VirtFuncInvoker0< t114 * >::Invoke(&m3587_MI, (*(t775 **)(t775 **)SZArrayLdElema(p2, L_3)));
		t5 * L_5 = (t5 *)VirtFuncInvoker3< t5 *, t5 *, t114 *, t771 * >::Invoke(&m11488_MI, p0, (*(t5 **)(t5 **)SZArrayLdElema(p1, L_2)), L_4, p3);
		V_1 = L_5;
		if (V_1)
		{
			goto IL_003f;
		}
	}
	{
		int32_t L_6 = V_0;
		if (!(*(t5 **)(t5 **)SZArrayLdElema(p1, L_6)))
		{
			goto IL_003f;
		}
	}
	{
		return 0;
	}

IL_003f:
	{
		ArrayElementTypeCheck (p1, V_1);
		*((t5 **)(t5 **)SZArrayLdElema(p1, V_0)) = (t5 *)V_1;
		V_0 = ((int32_t)(V_0+1));
	}

IL_0047:
	{
		if ((((int32_t)V_0) < ((int32_t)(((int32_t)(((t107 *)p1)->max_length))))))
		{
			goto IL_0022;
		}
	}
	{
		return 1;
	}
}
 int32_t m8520 (t5 * __this, t114 * p0, MethodInfo* method){
	t114 * V_0 = {0};
	int32_t V_1 = 0;
	{
		V_0 = p0;
		V_1 = 1;
		goto IL_0011;
	}

IL_0006:
	{
		V_1 = ((int32_t)(V_1+1));
		t114 * L_0 = (t114 *)VirtFuncInvoker0< t114 * >::Invoke(&m3555_MI, V_0);
		V_0 = L_0;
	}

IL_0011:
	{
		t114 * L_1 = (t114 *)VirtFuncInvoker0< t114 * >::Invoke(&m3555_MI, V_0);
		if (L_1)
		{
			goto IL_0006;
		}
	}
	{
		return V_1;
	}
}
 t774 * m8521 (t5 * __this, t1661* p0, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	t774 * V_4 = {0};
	int32_t V_5 = 0;
	t776* V_6 = {0};
	t776* V_7 = {0};
	bool V_8 = false;
	int32_t V_9 = 0;
	{
		V_0 = 0;
		V_1 = (-1);
		V_2 = (((int32_t)(((t107 *)p0)->max_length)));
		V_3 = 0;
		goto IL_009c;
	}

IL_000f:
	{
		int32_t L_0 = V_3;
		V_4 = (*(t774 **)(t774 **)SZArrayLdElema(p0, L_0));
		t114 * L_1 = (t114 *)VirtFuncInvoker0< t114 * >::Invoke(&m3584_MI, V_4);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t769_TI));
		int32_t L_2 = m8520(NULL, L_1, &m8520_MI);
		V_5 = L_2;
		if ((((uint32_t)V_5) != ((uint32_t)V_0)))
		{
			goto IL_002d;
		}
	}
	{
		t1653 * L_3 = (t1653 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1653_TI));
		m8455(L_3, &m8455_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_002d:
	{
		if ((((int32_t)V_1) < ((int32_t)0)))
		{
			goto IL_008e;
		}
	}
	{
		t776* L_4 = (t776*)VirtFuncInvoker0< t776* >::Invoke(&m3586_MI, V_4);
		V_6 = L_4;
		int32_t L_5 = V_1;
		t776* L_6 = (t776*)VirtFuncInvoker0< t776* >::Invoke(&m3586_MI, (*(t774 **)(t774 **)SZArrayLdElema(p0, L_5)));
		V_7 = L_6;
		V_8 = 1;
		if ((((int32_t)(((int32_t)(((t107 *)V_6)->max_length)))) == ((int32_t)(((int32_t)(((t107 *)V_7)->max_length))))))
		{
			goto IL_0056;
		}
	}
	{
		V_8 = 0;
		goto IL_0084;
	}

IL_0056:
	{
		V_9 = 0;
		goto IL_007c;
	}

IL_005b:
	{
		int32_t L_7 = V_9;
		t114 * L_8 = (t114 *)VirtFuncInvoker0< t114 * >::Invoke(&m3587_MI, (*(t775 **)(t775 **)SZArrayLdElema(V_6, L_7)));
		int32_t L_9 = V_9;
		t114 * L_10 = (t114 *)VirtFuncInvoker0< t114 * >::Invoke(&m3587_MI, (*(t775 **)(t775 **)SZArrayLdElema(V_7, L_9)));
		if ((((t114 *)L_8) == ((t114 *)L_10)))
		{
			goto IL_0076;
		}
	}
	{
		V_8 = 0;
		goto IL_0084;
	}

IL_0076:
	{
		V_9 = ((int32_t)(V_9+1));
	}

IL_007c:
	{
		if ((((int32_t)V_9) < ((int32_t)(((int32_t)(((t107 *)V_6)->max_length))))))
		{
			goto IL_005b;
		}
	}

IL_0084:
	{
		if (V_8)
		{
			goto IL_008e;
		}
	}
	{
		t1653 * L_11 = (t1653 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1653_TI));
		m8455(L_11, &m8455_MI);
		il2cpp_codegen_raise_exception(L_11);
	}

IL_008e:
	{
		if ((((int32_t)V_5) <= ((int32_t)V_0)))
		{
			goto IL_0098;
		}
	}
	{
		V_0 = V_5;
		V_1 = V_3;
	}

IL_0098:
	{
		V_3 = ((int32_t)(V_3+1));
	}

IL_009c:
	{
		if ((((int32_t)V_3) < ((int32_t)V_2)))
		{
			goto IL_000f;
		}
	}
	{
		int32_t L_12 = V_1;
		return (*(t774 **)(t774 **)SZArrayLdElema(p0, L_12));
	}
}
// Metadata Definition System.Reflection.Binder
extern Il2CppType t769_0_0_17;
FieldInfo t769_f0_FieldInfo = 
{
	"default_binder", &t769_0_0_17, &t769_TI, offsetof(t769_SFs, f0), &EmptyCustomAttributesCache};
static FieldInfo* t769_FIs[] =
{
	&t769_f0_FieldInfo,
	NULL
};
static PropertyInfo t769____DefaultBinder_PropertyInfo = 
{
	&t769_TI, "DefaultBinder", &m8518_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t769_PIs[] =
{
	&t769____DefaultBinder_PropertyInfo,
	NULL
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m8516_MI = 
{
	".ctor", (methodPointerType)&m8516, &t769_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, false, 3235, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m8517_MI = 
{
	".cctor", (methodPointerType)&m8517, &t769_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 3236, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t768_0_0_0;
extern Il2CppType t1661_0_0_0;
extern Il2CppType t168_1_0_0;
extern Il2CppType t772_0_0_0;
extern Il2CppType t771_0_0_0;
extern Il2CppType t585_0_0_0;
extern Il2CppType t5_1_0_2;
static ParameterInfo t769_m11489_ParameterInfos[] = 
{
	{"bindingAttr", 0, 134221777, &EmptyCustomAttributesCache, &t768_0_0_0},
	{"match", 1, 134221778, &EmptyCustomAttributesCache, &t1661_0_0_0},
	{"args", 2, 134221779, &EmptyCustomAttributesCache, &t168_1_0_0},
	{"modifiers", 3, 134221780, &EmptyCustomAttributesCache, &t772_0_0_0},
	{"culture", 4, 134221781, &EmptyCustomAttributesCache, &t771_0_0_0},
	{"names", 5, 134221782, &EmptyCustomAttributesCache, &t585_0_0_0},
	{"state", 6, 134221783, &EmptyCustomAttributesCache, &t5_1_0_2},
};
extern Il2CppType t774_0_0_0;
extern void* RuntimeInvoker_t5_t110_t5_t2037_t5_t5_t5_t2357 (MethodInfo* method, void* obj, void** args);
MethodInfo m11489_MI = 
{
	"BindToMethod", NULL, &t769_TI, &t774_0_0_0, RuntimeInvoker_t5_t110_t5_t2037_t5_t5_t5_t2357, t769_m11489_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 7, false, false, 3237, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t5_0_0_0;
extern Il2CppType t114_0_0_0;
extern Il2CppType t771_0_0_0;
static ParameterInfo t769_m11488_ParameterInfos[] = 
{
	{"value", 0, 134221784, &EmptyCustomAttributesCache, &t5_0_0_0},
	{"type", 1, 134221785, &EmptyCustomAttributesCache, &t114_0_0_0},
	{"culture", 2, 134221786, &EmptyCustomAttributesCache, &t771_0_0_0},
};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5_t5_t5_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m11488_MI = 
{
	"ChangeType", NULL, &t769_TI, &t5_0_0_0, RuntimeInvoker_t5_t5_t5_t5, t769_m11488_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 3, false, false, 3238, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t168_1_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t769_m11490_ParameterInfos[] = 
{
	{"args", 0, 134221787, &EmptyCustomAttributesCache, &t168_1_0_0},
	{"state", 1, 134221788, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t2037_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m11490_MI = 
{
	"ReorderArgumentArray", NULL, &t769_TI, &t109_0_0_0, RuntimeInvoker_t109_t2037_t5, t769_m11490_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 2, false, false, 3239, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t768_0_0_0;
extern Il2CppType t1661_0_0_0;
extern Il2CppType t675_0_0_0;
extern Il2CppType t772_0_0_0;
static ParameterInfo t769_m11483_ParameterInfos[] = 
{
	{"bindingAttr", 0, 134221789, &EmptyCustomAttributesCache, &t768_0_0_0},
	{"match", 1, 134221790, &EmptyCustomAttributesCache, &t1661_0_0_0},
	{"types", 2, 134221791, &EmptyCustomAttributesCache, &t675_0_0_0},
	{"modifiers", 3, 134221792, &EmptyCustomAttributesCache, &t772_0_0_0},
};
extern Il2CppType t774_0_0_0;
extern void* RuntimeInvoker_t5_t110_t5_t5_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m11483_MI = 
{
	"SelectMethod", NULL, &t769_TI, &t774_0_0_0, RuntimeInvoker_t5_t110_t5_t5_t5, t769_m11483_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 7, 4, false, false, 3240, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t768_0_0_0;
extern Il2CppType t1662_0_0_0;
extern Il2CppType t114_0_0_0;
extern Il2CppType t675_0_0_0;
extern Il2CppType t772_0_0_0;
static ParameterInfo t769_m11491_ParameterInfos[] = 
{
	{"bindingAttr", 0, 134221793, &EmptyCustomAttributesCache, &t768_0_0_0},
	{"match", 1, 134221794, &EmptyCustomAttributesCache, &t1662_0_0_0},
	{"returnType", 2, 134221795, &EmptyCustomAttributesCache, &t114_0_0_0},
	{"indexes", 3, 134221796, &EmptyCustomAttributesCache, &t675_0_0_0},
	{"modifiers", 4, 134221797, &EmptyCustomAttributesCache, &t772_0_0_0},
};
extern Il2CppType t1407_0_0_0;
extern void* RuntimeInvoker_t5_t110_t5_t5_t5_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m11491_MI = 
{
	"SelectProperty", NULL, &t769_TI, &t1407_0_0_0, RuntimeInvoker_t5_t110_t5_t5_t5_t5, t769_m11491_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 8, 5, false, false, 3241, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t769_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8518_MI = 
{
	"get_DefaultBinder", (methodPointerType)&m8518, &t769_TI, &t769_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2195, 0, 255, 0, false, false, 3242, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t769_0_0_0;
extern Il2CppType t168_0_0_0;
extern Il2CppType t776_0_0_0;
extern Il2CppType t771_0_0_0;
static ParameterInfo t769_m8519_ParameterInfos[] = 
{
	{"binder", 0, 134221798, &EmptyCustomAttributesCache, &t769_0_0_0},
	{"args", 1, 134221799, &EmptyCustomAttributesCache, &t168_0_0_0},
	{"pinfo", 2, 134221800, &EmptyCustomAttributesCache, &t776_0_0_0},
	{"culture", 3, 134221801, &EmptyCustomAttributesCache, &t771_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5_t5_t5_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8519_MI = 
{
	"ConvertArgs", (methodPointerType)&m8519, &t769_TI, &t108_0_0_0, RuntimeInvoker_t108_t5_t5_t5_t5, t769_m8519_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 4, false, false, 3243, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t114_0_0_0;
static ParameterInfo t769_m8520_ParameterInfos[] = 
{
	{"type", 0, 134221802, &EmptyCustomAttributesCache, &t114_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8520_MI = 
{
	"GetDerivedLevel", (methodPointerType)&m8520, &t769_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t769_m8520_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, false, 3244, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1661_0_0_0;
static ParameterInfo t769_m8521_ParameterInfos[] = 
{
	{"match", 0, 134221803, &EmptyCustomAttributesCache, &t1661_0_0_0},
};
extern Il2CppType t774_0_0_0;
extern void* RuntimeInvoker_t5_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8521_MI = 
{
	"FindMostDerivedMatch", (methodPointerType)&m8521, &t769_TI, &t774_0_0_0, RuntimeInvoker_t5_t5, t769_m8521_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, false, 3245, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t769_MIs[] =
{
	&m8516_MI,
	&m8517_MI,
	&m11489_MI,
	&m11488_MI,
	&m11490_MI,
	&m11483_MI,
	&m11491_MI,
	&m8518_MI,
	&m8519_MI,
	&m8520_MI,
	&m8521_MI,
	NULL
};
extern TypeInfo t1660_TI;
static TypeInfo* t769_TI__nestedTypes[2] =
{
	&t1660_TI,
	NULL
};
static MethodInfo* t769_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
};
void t769_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t576 * tmp;
		tmp = (t576 *)il2cpp_codegen_object_new (&t576_TI);
		m2699(tmp, true, &m2699_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t1697 * tmp;
		tmp = (t1697 *)il2cpp_codegen_object_new (&t1697_TI);
		m8786(tmp, 2, &m8786_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t769__CustomAttributeCache = {
2,
NULL,
&t769_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t769_1_0_0;
struct t769;
extern CustomAttributesCache t769__CustomAttributeCache;
TypeInfo t769_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Binder", "System.Reflection", t769_MIs, t769_PIs, t769_FIs, NULL, &t5_TI, t769_TI__nestedTypes, NULL, &t769_TI, NULL, t769_VT, &t769__CustomAttributeCache, &t769_TI, &t769_0_0_0, &t769_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t769), 0, -1, sizeof(t769_SFs), 0, -1, 1056897, 0, false, false, false, false, false, false, false, false, false, true, false, false, 11, 1, 1, 0, 1, 9, 0, 0};
#ifndef _MSC_VER
#else
#endif
#include "t768MD.h"



// Metadata Definition System.Reflection.BindingFlags
extern Il2CppType t110_0_0_1542;
FieldInfo t768_f1_FieldInfo = 
{
	"value__", &t110_0_0_1542, &t768_TI, offsetof(t768, f1) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t768_0_0_32854;
FieldInfo t768_f2_FieldInfo = 
{
	"Default", &t768_0_0_32854, &t768_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t768_0_0_32854;
FieldInfo t768_f3_FieldInfo = 
{
	"IgnoreCase", &t768_0_0_32854, &t768_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t768_0_0_32854;
FieldInfo t768_f4_FieldInfo = 
{
	"DeclaredOnly", &t768_0_0_32854, &t768_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t768_0_0_32854;
FieldInfo t768_f5_FieldInfo = 
{
	"Instance", &t768_0_0_32854, &t768_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t768_0_0_32854;
FieldInfo t768_f6_FieldInfo = 
{
	"Static", &t768_0_0_32854, &t768_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t768_0_0_32854;
FieldInfo t768_f7_FieldInfo = 
{
	"Public", &t768_0_0_32854, &t768_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t768_0_0_32854;
FieldInfo t768_f8_FieldInfo = 
{
	"NonPublic", &t768_0_0_32854, &t768_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t768_0_0_32854;
FieldInfo t768_f9_FieldInfo = 
{
	"FlattenHierarchy", &t768_0_0_32854, &t768_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t768_0_0_32854;
FieldInfo t768_f10_FieldInfo = 
{
	"InvokeMethod", &t768_0_0_32854, &t768_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t768_0_0_32854;
FieldInfo t768_f11_FieldInfo = 
{
	"CreateInstance", &t768_0_0_32854, &t768_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t768_0_0_32854;
FieldInfo t768_f12_FieldInfo = 
{
	"GetField", &t768_0_0_32854, &t768_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t768_0_0_32854;
FieldInfo t768_f13_FieldInfo = 
{
	"SetField", &t768_0_0_32854, &t768_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t768_0_0_32854;
FieldInfo t768_f14_FieldInfo = 
{
	"GetProperty", &t768_0_0_32854, &t768_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t768_0_0_32854;
FieldInfo t768_f15_FieldInfo = 
{
	"SetProperty", &t768_0_0_32854, &t768_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t768_0_0_32854;
FieldInfo t768_f16_FieldInfo = 
{
	"PutDispProperty", &t768_0_0_32854, &t768_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t768_0_0_32854;
FieldInfo t768_f17_FieldInfo = 
{
	"PutRefDispProperty", &t768_0_0_32854, &t768_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t768_0_0_32854;
FieldInfo t768_f18_FieldInfo = 
{
	"ExactBinding", &t768_0_0_32854, &t768_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t768_0_0_32854;
FieldInfo t768_f19_FieldInfo = 
{
	"SuppressChangeType", &t768_0_0_32854, &t768_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t768_0_0_32854;
FieldInfo t768_f20_FieldInfo = 
{
	"OptionalParamBinding", &t768_0_0_32854, &t768_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t768_0_0_32854;
FieldInfo t768_f21_FieldInfo = 
{
	"IgnoreReturn", &t768_0_0_32854, &t768_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t768_FIs[] =
{
	&t768_f1_FieldInfo,
	&t768_f2_FieldInfo,
	&t768_f3_FieldInfo,
	&t768_f4_FieldInfo,
	&t768_f5_FieldInfo,
	&t768_f6_FieldInfo,
	&t768_f7_FieldInfo,
	&t768_f8_FieldInfo,
	&t768_f9_FieldInfo,
	&t768_f10_FieldInfo,
	&t768_f11_FieldInfo,
	&t768_f12_FieldInfo,
	&t768_f13_FieldInfo,
	&t768_f14_FieldInfo,
	&t768_f15_FieldInfo,
	&t768_f16_FieldInfo,
	&t768_f17_FieldInfo,
	&t768_f18_FieldInfo,
	&t768_f19_FieldInfo,
	&t768_f20_FieldInfo,
	&t768_f21_FieldInfo,
	NULL
};
static const int32_t t768_f2_DefaultValueData = 0;
static Il2CppFieldDefaultValueEntry t768_f2_DefaultValue = 
{
	&t768_f2_FieldInfo, { (char*)&t768_f2_DefaultValueData, &t110_0_0_0 }};
static const int32_t t768_f3_DefaultValueData = 1;
static Il2CppFieldDefaultValueEntry t768_f3_DefaultValue = 
{
	&t768_f3_FieldInfo, { (char*)&t768_f3_DefaultValueData, &t110_0_0_0 }};
static const int32_t t768_f4_DefaultValueData = 2;
static Il2CppFieldDefaultValueEntry t768_f4_DefaultValue = 
{
	&t768_f4_FieldInfo, { (char*)&t768_f4_DefaultValueData, &t110_0_0_0 }};
static const int32_t t768_f5_DefaultValueData = 4;
static Il2CppFieldDefaultValueEntry t768_f5_DefaultValue = 
{
	&t768_f5_FieldInfo, { (char*)&t768_f5_DefaultValueData, &t110_0_0_0 }};
static const int32_t t768_f6_DefaultValueData = 8;
static Il2CppFieldDefaultValueEntry t768_f6_DefaultValue = 
{
	&t768_f6_FieldInfo, { (char*)&t768_f6_DefaultValueData, &t110_0_0_0 }};
static const int32_t t768_f7_DefaultValueData = 16;
static Il2CppFieldDefaultValueEntry t768_f7_DefaultValue = 
{
	&t768_f7_FieldInfo, { (char*)&t768_f7_DefaultValueData, &t110_0_0_0 }};
static const int32_t t768_f8_DefaultValueData = 32;
static Il2CppFieldDefaultValueEntry t768_f8_DefaultValue = 
{
	&t768_f8_FieldInfo, { (char*)&t768_f8_DefaultValueData, &t110_0_0_0 }};
static const int32_t t768_f9_DefaultValueData = 64;
static Il2CppFieldDefaultValueEntry t768_f9_DefaultValue = 
{
	&t768_f9_FieldInfo, { (char*)&t768_f9_DefaultValueData, &t110_0_0_0 }};
static const int32_t t768_f10_DefaultValueData = 256;
static Il2CppFieldDefaultValueEntry t768_f10_DefaultValue = 
{
	&t768_f10_FieldInfo, { (char*)&t768_f10_DefaultValueData, &t110_0_0_0 }};
static const int32_t t768_f11_DefaultValueData = 512;
static Il2CppFieldDefaultValueEntry t768_f11_DefaultValue = 
{
	&t768_f11_FieldInfo, { (char*)&t768_f11_DefaultValueData, &t110_0_0_0 }};
static const int32_t t768_f12_DefaultValueData = 1024;
static Il2CppFieldDefaultValueEntry t768_f12_DefaultValue = 
{
	&t768_f12_FieldInfo, { (char*)&t768_f12_DefaultValueData, &t110_0_0_0 }};
static const int32_t t768_f13_DefaultValueData = 2048;
static Il2CppFieldDefaultValueEntry t768_f13_DefaultValue = 
{
	&t768_f13_FieldInfo, { (char*)&t768_f13_DefaultValueData, &t110_0_0_0 }};
static const int32_t t768_f14_DefaultValueData = 4096;
static Il2CppFieldDefaultValueEntry t768_f14_DefaultValue = 
{
	&t768_f14_FieldInfo, { (char*)&t768_f14_DefaultValueData, &t110_0_0_0 }};
static const int32_t t768_f15_DefaultValueData = 8192;
static Il2CppFieldDefaultValueEntry t768_f15_DefaultValue = 
{
	&t768_f15_FieldInfo, { (char*)&t768_f15_DefaultValueData, &t110_0_0_0 }};
static const int32_t t768_f16_DefaultValueData = 16384;
static Il2CppFieldDefaultValueEntry t768_f16_DefaultValue = 
{
	&t768_f16_FieldInfo, { (char*)&t768_f16_DefaultValueData, &t110_0_0_0 }};
static const int32_t t768_f17_DefaultValueData = 32768;
static Il2CppFieldDefaultValueEntry t768_f17_DefaultValue = 
{
	&t768_f17_FieldInfo, { (char*)&t768_f17_DefaultValueData, &t110_0_0_0 }};
static const int32_t t768_f18_DefaultValueData = 65536;
static Il2CppFieldDefaultValueEntry t768_f18_DefaultValue = 
{
	&t768_f18_FieldInfo, { (char*)&t768_f18_DefaultValueData, &t110_0_0_0 }};
static const int32_t t768_f19_DefaultValueData = 131072;
static Il2CppFieldDefaultValueEntry t768_f19_DefaultValue = 
{
	&t768_f19_FieldInfo, { (char*)&t768_f19_DefaultValueData, &t110_0_0_0 }};
static const int32_t t768_f20_DefaultValueData = 262144;
static Il2CppFieldDefaultValueEntry t768_f20_DefaultValue = 
{
	&t768_f20_FieldInfo, { (char*)&t768_f20_DefaultValueData, &t110_0_0_0 }};
static const int32_t t768_f21_DefaultValueData = 16777216;
static Il2CppFieldDefaultValueEntry t768_f21_DefaultValue = 
{
	&t768_f21_FieldInfo, { (char*)&t768_f21_DefaultValueData, &t110_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t768_FDVs[] = 
{
	&t768_f2_DefaultValue,
	&t768_f3_DefaultValue,
	&t768_f4_DefaultValue,
	&t768_f5_DefaultValue,
	&t768_f6_DefaultValue,
	&t768_f7_DefaultValue,
	&t768_f8_DefaultValue,
	&t768_f9_DefaultValue,
	&t768_f10_DefaultValue,
	&t768_f11_DefaultValue,
	&t768_f12_DefaultValue,
	&t768_f13_DefaultValue,
	&t768_f14_DefaultValue,
	&t768_f15_DefaultValue,
	&t768_f16_DefaultValue,
	&t768_f17_DefaultValue,
	&t768_f18_DefaultValue,
	&t768_f19_DefaultValue,
	&t768_f20_DefaultValue,
	&t768_f21_DefaultValue,
	NULL
};
static MethodInfo* t768_MIs[] =
{
	NULL
};
static MethodInfo* t768_VT[] =
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
static Il2CppInterfaceOffsetPair t768_IOs[] = 
{
	{ &t120_TI, 4},
	{ &t121_TI, 5},
	{ &t122_TI, 21},
};
void t768_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t446 * tmp;
		tmp = (t446 *)il2cpp_codegen_object_new (&t446_TI);
		m1932(tmp, &m1932_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t576 * tmp;
		tmp = (t576 *)il2cpp_codegen_object_new (&t576_TI);
		m2699(tmp, true, &m2699_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t768__CustomAttributeCache = {
2,
NULL,
&t768_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t768_1_0_0;
extern CustomAttributesCache t768__CustomAttributeCache;
TypeInfo t768_TI = 
{
	&g_mscorlib_dll_Image, NULL, "BindingFlags", "System.Reflection", t768_MIs, NULL, t768_FIs, NULL, &t18_TI, NULL, NULL, &t110_TI, NULL, t768_VT, &t768__CustomAttributeCache, &t110_TI, &t768_0_0_0, &t768_1_0_0, t768_IOs, NULL, NULL, t768_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t768)+ sizeof (Il2CppObject), sizeof (int32_t), sizeof(int32_t), 0, 0, -1, 8449, 0, true, false, false, true, false, false, false, false, false, false, false, false, 0, 0, 21, 0, 0, 23, 0, 3};
#ifndef _MSC_VER
#else
#endif
#include "t1411MD.h"



// Metadata Definition System.Reflection.CallingConventions
extern Il2CppType t110_0_0_1542;
FieldInfo t1411_f1_FieldInfo = 
{
	"value__", &t110_0_0_1542, &t1411_TI, offsetof(t1411, f1) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t1411_0_0_32854;
FieldInfo t1411_f2_FieldInfo = 
{
	"Standard", &t1411_0_0_32854, &t1411_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1411_0_0_32854;
FieldInfo t1411_f3_FieldInfo = 
{
	"VarArgs", &t1411_0_0_32854, &t1411_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1411_0_0_32854;
FieldInfo t1411_f4_FieldInfo = 
{
	"Any", &t1411_0_0_32854, &t1411_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1411_0_0_32854;
FieldInfo t1411_f5_FieldInfo = 
{
	"HasThis", &t1411_0_0_32854, &t1411_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1411_0_0_32854;
FieldInfo t1411_f6_FieldInfo = 
{
	"ExplicitThis", &t1411_0_0_32854, &t1411_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t1411_FIs[] =
{
	&t1411_f1_FieldInfo,
	&t1411_f2_FieldInfo,
	&t1411_f3_FieldInfo,
	&t1411_f4_FieldInfo,
	&t1411_f5_FieldInfo,
	&t1411_f6_FieldInfo,
	NULL
};
static const int32_t t1411_f2_DefaultValueData = 1;
static Il2CppFieldDefaultValueEntry t1411_f2_DefaultValue = 
{
	&t1411_f2_FieldInfo, { (char*)&t1411_f2_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1411_f3_DefaultValueData = 2;
static Il2CppFieldDefaultValueEntry t1411_f3_DefaultValue = 
{
	&t1411_f3_FieldInfo, { (char*)&t1411_f3_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1411_f4_DefaultValueData = 3;
static Il2CppFieldDefaultValueEntry t1411_f4_DefaultValue = 
{
	&t1411_f4_FieldInfo, { (char*)&t1411_f4_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1411_f5_DefaultValueData = 32;
static Il2CppFieldDefaultValueEntry t1411_f5_DefaultValue = 
{
	&t1411_f5_FieldInfo, { (char*)&t1411_f5_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1411_f6_DefaultValueData = 64;
static Il2CppFieldDefaultValueEntry t1411_f6_DefaultValue = 
{
	&t1411_f6_FieldInfo, { (char*)&t1411_f6_DefaultValueData, &t110_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t1411_FDVs[] = 
{
	&t1411_f2_DefaultValue,
	&t1411_f3_DefaultValue,
	&t1411_f4_DefaultValue,
	&t1411_f5_DefaultValue,
	&t1411_f6_DefaultValue,
	NULL
};
static MethodInfo* t1411_MIs[] =
{
	NULL
};
static MethodInfo* t1411_VT[] =
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
static Il2CppInterfaceOffsetPair t1411_IOs[] = 
{
	{ &t120_TI, 4},
	{ &t121_TI, 5},
	{ &t122_TI, 21},
};
void t1411_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t576 * tmp;
		tmp = (t576 *)il2cpp_codegen_object_new (&t576_TI);
		m2699(tmp, true, &m2699_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t446 * tmp;
		tmp = (t446 *)il2cpp_codegen_object_new (&t446_TI);
		m1932(tmp, &m1932_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1411__CustomAttributeCache = {
2,
NULL,
&t1411_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1411_1_0_0;
extern CustomAttributesCache t1411__CustomAttributeCache;
TypeInfo t1411_TI = 
{
	&g_mscorlib_dll_Image, NULL, "CallingConventions", "System.Reflection", t1411_MIs, NULL, t1411_FIs, NULL, &t18_TI, NULL, NULL, &t110_TI, NULL, t1411_VT, &t1411__CustomAttributeCache, &t110_TI, &t1411_0_0_0, &t1411_1_0_0, t1411_IOs, NULL, NULL, t1411_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1411)+ sizeof (Il2CppObject), sizeof (int32_t), sizeof(int32_t), 0, 0, -1, 8449, 0, true, false, false, true, false, false, false, false, false, false, false, false, 0, 0, 6, 0, 0, 23, 0, 3};
#ifndef _MSC_VER
#else
#endif
#include "t797MD.h"

#include "t1410.h"
extern MethodInfo m8552_MI;
extern MethodInfo m11492_MI;


extern MethodInfo m8522_MI;
 void m8522 (t797 * __this, MethodInfo* method){
	{
		m8552(__this, &m8552_MI);
		return;
	}
}
extern MethodInfo m8523_MI;
 void m8523 (t5 * __this, MethodInfo* method){
	{
		((t797_SFs*)InitializedTypeInfo(&t797_TI)->static_fields)->f0 = (t11*) &_stringLiteral1856;
		((t797_SFs*)InitializedTypeInfo(&t797_TI)->static_fields)->f1 = (t11*) &_stringLiteral1857;
		return;
	}
}
extern MethodInfo m8524_MI;
 int32_t m8524 (t797 * __this, MethodInfo* method){
	{
		return (int32_t)(1);
	}
}
extern MethodInfo m3628_MI;
 t5 * m3628 (t797 * __this, t168* p0, MethodInfo* method){
	{
		if (p0)
		{
			goto IL_000d;
		}
	}
	{
		p0 = ((t168*)SZArrayNew(InitializedTypeInfo(&t168_TI), 0));
	}

IL_000d:
	{
		t5 * L_0 = (t5 *)VirtFuncInvoker4< t5 *, int32_t, t769 *, t168*, t771 * >::Invoke(&m11492_MI, __this, ((int32_t)512), (t769 *)NULL, p0, (t771 *)NULL);
		return L_0;
	}
}
// Metadata Definition System.Reflection.ConstructorInfo
extern Il2CppType t11_0_0_54;
extern CustomAttributesCache t797__CustomAttributeCache_ConstructorName;
FieldInfo t797_f0_FieldInfo = 
{
	"ConstructorName", &t11_0_0_54, &t797_TI, offsetof(t797_SFs, f0), &t797__CustomAttributeCache_ConstructorName};
extern Il2CppType t11_0_0_54;
extern CustomAttributesCache t797__CustomAttributeCache_TypeConstructorName;
FieldInfo t797_f1_FieldInfo = 
{
	"TypeConstructorName", &t11_0_0_54, &t797_TI, offsetof(t797_SFs, f1), &t797__CustomAttributeCache_TypeConstructorName};
static FieldInfo* t797_FIs[] =
{
	&t797_f0_FieldInfo,
	&t797_f1_FieldInfo,
	NULL
};
extern CustomAttributesCache t797__CustomAttributeCache_t797____MemberType_PropertyInfo;
static PropertyInfo t797____MemberType_PropertyInfo = 
{
	&t797_TI, "MemberType", &m8524_MI, NULL, 0, &t797__CustomAttributeCache_t797____MemberType_PropertyInfo};
static PropertyInfo* t797_PIs[] =
{
	&t797____MemberType_PropertyInfo,
	NULL
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m8522_MI = 
{
	".ctor", (methodPointerType)&m8522, &t797_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, false, 3261, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m8523_MI = 
{
	".cctor", (methodPointerType)&m8523, &t797_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 3262, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1410_0_0_0;
extern void* RuntimeInvoker_t1410 (MethodInfo* method, void* obj, void** args);
MethodInfo m8524_MI = 
{
	"get_MemberType", (methodPointerType)&m8524, &t797_TI, &t1410_0_0_0, RuntimeInvoker_t1410, NULL, &EmptyCustomAttributesCache, 2246, 0, 7, 0, false, false, 3263, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t168_0_0_0;
static ParameterInfo t797_m3628_ParameterInfos[] = 
{
	{"parameters", 0, 134221849, &EmptyCustomAttributesCache, &t168_0_0_0},
};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5_t5 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t797__CustomAttributeCache_m3628;
MethodInfo m3628_MI = 
{
	"Invoke", (methodPointerType)&m3628, &t797_TI, &t5_0_0_0, RuntimeInvoker_t5_t5, t797_m3628_ParameterInfos, &t797__CustomAttributeCache_m3628, 134, 0, 255, 1, false, false, 3264, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t768_0_0_0;
extern Il2CppType t769_0_0_0;
extern Il2CppType t168_0_0_0;
extern Il2CppType t771_0_0_0;
static ParameterInfo t797_m11492_ParameterInfos[] = 
{
	{"invokeAttr", 0, 134221850, &EmptyCustomAttributesCache, &t768_0_0_0},
	{"binder", 1, 134221851, &EmptyCustomAttributesCache, &t769_0_0_0},
	{"parameters", 2, 134221852, &EmptyCustomAttributesCache, &t168_0_0_0},
	{"culture", 3, 134221853, &EmptyCustomAttributesCache, &t771_0_0_0},
};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5_t110_t5_t5_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m11492_MI = 
{
	"Invoke", NULL, &t797_TI, &t5_0_0_0, RuntimeInvoker_t5_t110_t5_t5_t5, t797_m11492_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 29, 4, false, false, 3265, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t797_MIs[] =
{
	&m8522_MI,
	&m8523_MI,
	&m8524_MI,
	&m3628_MI,
	&m11492_MI,
	NULL
};
extern MethodInfo m10990_MI;
extern MethodInfo m6845_MI;
extern MethodInfo m8557_MI;
extern MethodInfo m8558_MI;
extern MethodInfo m8560_MI;
extern MethodInfo m8561_MI;
extern MethodInfo m8562_MI;
extern MethodInfo m8563_MI;
extern MethodInfo m8564_MI;
extern MethodInfo m8566_MI;
static MethodInfo* t797_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m3557_MI,
	&m10990_MI,
	NULL,
	&m8524_MI,
	NULL,
	NULL,
	&m6845_MI,
	NULL,
	NULL,
	NULL,
	NULL,
	&m8557_MI,
	&m8558_MI,
	NULL,
	NULL,
	NULL,
	&m8559_MI,
	&m8560_MI,
	&m3598_MI,
	&m8561_MI,
	&m8562_MI,
	&m8563_MI,
	&m8564_MI,
	&m8565_MI,
	&m8566_MI,
	NULL,
};
extern TypeInfo t2342_TI;
static TypeInfo* t797_ITIs[] = 
{
	&t2342_TI,
};
extern TypeInfo t2343_TI;
static Il2CppInterfaceOffsetPair t797_IOs[] = 
{
	{ &t2343_TI, 14},
	{ &t1990_TI, 4},
	{ &t2247_TI, 6},
	{ &t2342_TI, 29},
};
void t797_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t1699 * tmp;
		tmp = (t1699 *)il2cpp_codegen_object_new (&t1699_TI);
		m8787(tmp, il2cpp_codegen_type_get_object(InitializedTypeInfo(&t2342_TI)), &m8787_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t1697 * tmp;
		tmp = (t1697 *)il2cpp_codegen_object_new (&t1697_TI);
		m8786(tmp, 0, &m8786_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		t576 * tmp;
		tmp = (t576 *)il2cpp_codegen_object_new (&t576_TI);
		m2699(tmp, true, &m2699_MI);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
}
void t797_CustomAttributesCacheGenerator_ConstructorName(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t576 * tmp;
		tmp = (t576 *)il2cpp_codegen_object_new (&t576_TI);
		m2699(tmp, true, &m2699_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t797_CustomAttributesCacheGenerator_TypeConstructorName(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t576 * tmp;
		tmp = (t576 *)il2cpp_codegen_object_new (&t576_TI);
		m2699(tmp, true, &m2699_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t1553_TI;
#include "t1553.h"
#include "t1553MD.h"
extern MethodInfo m7614_MI;
extern TypeInfo t488_TI;
#include "t488.h"
#include "t488MD.h"
extern MethodInfo m2155_MI;
void t797_CustomAttributesCacheGenerator_m3628(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t1553 * tmp;
		tmp = (t1553 *)il2cpp_codegen_object_new (&t1553_TI);
		m7614(tmp, &m7614_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t488 * tmp;
		tmp = (t488 *)il2cpp_codegen_object_new (&t488_TI);
		m2155(tmp, &m2155_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
void t797_CustomAttributesCacheGenerator_t797____MemberType_PropertyInfo(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t576 * tmp;
		tmp = (t576 *)il2cpp_codegen_object_new (&t576_TI);
		m2699(tmp, true, &m2699_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t797__CustomAttributeCache = {
3,
NULL,
&t797_CustomAttributesCacheGenerator
};
CustomAttributesCache t797__CustomAttributeCache_ConstructorName = {
1,
NULL,
&t797_CustomAttributesCacheGenerator_ConstructorName
};
CustomAttributesCache t797__CustomAttributeCache_TypeConstructorName = {
1,
NULL,
&t797_CustomAttributesCacheGenerator_TypeConstructorName
};
CustomAttributesCache t797__CustomAttributeCache_m3628 = {
2,
NULL,
&t797_CustomAttributesCacheGenerator_m3628
};
CustomAttributesCache t797__CustomAttributeCache_t797____MemberType_PropertyInfo = {
1,
NULL,
&t797_CustomAttributesCacheGenerator_t797____MemberType_PropertyInfo
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t797_0_0_0;
extern Il2CppType t797_1_0_0;
struct t797;
extern CustomAttributesCache t797__CustomAttributeCache;
extern CustomAttributesCache t797__CustomAttributeCache_ConstructorName;
extern CustomAttributesCache t797__CustomAttributeCache_TypeConstructorName;
extern CustomAttributesCache t797__CustomAttributeCache_m3628;
extern CustomAttributesCache t797__CustomAttributeCache_t797____MemberType_PropertyInfo;
TypeInfo t797_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ConstructorInfo", "System.Reflection", t797_MIs, t797_PIs, t797_FIs, NULL, &t774_TI, NULL, NULL, &t797_TI, t797_ITIs, t797_VT, &t797__CustomAttributeCache, &t797_TI, &t797_0_0_0, &t797_1_0_0, t797_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t797), 0, -1, sizeof(t797_SFs), 0, -1, 1056897, 0, false, false, false, false, false, false, false, false, false, true, false, false, 5, 1, 2, 0, 0, 30, 1, 4};
#include "t1663.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1663_TI;
#include "t1663MD.h"



// Metadata Definition System.Reflection.EventAttributes
extern Il2CppType t110_0_0_1542;
FieldInfo t1663_f1_FieldInfo = 
{
	"value__", &t110_0_0_1542, &t1663_TI, offsetof(t1663, f1) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t1663_0_0_32854;
FieldInfo t1663_f2_FieldInfo = 
{
	"None", &t1663_0_0_32854, &t1663_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1663_0_0_32854;
FieldInfo t1663_f3_FieldInfo = 
{
	"SpecialName", &t1663_0_0_32854, &t1663_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1663_0_0_32854;
FieldInfo t1663_f4_FieldInfo = 
{
	"ReservedMask", &t1663_0_0_32854, &t1663_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1663_0_0_32854;
FieldInfo t1663_f5_FieldInfo = 
{
	"RTSpecialName", &t1663_0_0_32854, &t1663_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t1663_FIs[] =
{
	&t1663_f1_FieldInfo,
	&t1663_f2_FieldInfo,
	&t1663_f3_FieldInfo,
	&t1663_f4_FieldInfo,
	&t1663_f5_FieldInfo,
	NULL
};
static const int32_t t1663_f2_DefaultValueData = 0;
static Il2CppFieldDefaultValueEntry t1663_f2_DefaultValue = 
{
	&t1663_f2_FieldInfo, { (char*)&t1663_f2_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1663_f3_DefaultValueData = 512;
static Il2CppFieldDefaultValueEntry t1663_f3_DefaultValue = 
{
	&t1663_f3_FieldInfo, { (char*)&t1663_f3_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1663_f4_DefaultValueData = 1024;
static Il2CppFieldDefaultValueEntry t1663_f4_DefaultValue = 
{
	&t1663_f4_FieldInfo, { (char*)&t1663_f4_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1663_f5_DefaultValueData = 1024;
static Il2CppFieldDefaultValueEntry t1663_f5_DefaultValue = 
{
	&t1663_f5_FieldInfo, { (char*)&t1663_f5_DefaultValueData, &t110_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t1663_FDVs[] = 
{
	&t1663_f2_DefaultValue,
	&t1663_f3_DefaultValue,
	&t1663_f4_DefaultValue,
	&t1663_f5_DefaultValue,
	NULL
};
static MethodInfo* t1663_MIs[] =
{
	NULL
};
static MethodInfo* t1663_VT[] =
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
static Il2CppInterfaceOffsetPair t1663_IOs[] = 
{
	{ &t120_TI, 4},
	{ &t121_TI, 5},
	{ &t122_TI, 21},
};
void t1663_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t446 * tmp;
		tmp = (t446 *)il2cpp_codegen_object_new (&t446_TI);
		m1932(tmp, &m1932_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t576 * tmp;
		tmp = (t576 *)il2cpp_codegen_object_new (&t576_TI);
		m2699(tmp, true, &m2699_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1663__CustomAttributeCache = {
2,
NULL,
&t1663_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1663_0_0_0;
extern Il2CppType t1663_1_0_0;
extern CustomAttributesCache t1663__CustomAttributeCache;
TypeInfo t1663_TI = 
{
	&g_mscorlib_dll_Image, NULL, "EventAttributes", "System.Reflection", t1663_MIs, NULL, t1663_FIs, NULL, &t18_TI, NULL, NULL, &t110_TI, NULL, t1663_VT, &t1663__CustomAttributeCache, &t110_TI, &t1663_0_0_0, &t1663_1_0_0, t1663_IOs, NULL, NULL, t1663_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1663)+ sizeof (Il2CppObject), sizeof (int32_t), sizeof(int32_t), 0, 0, -1, 8449, 0, true, false, false, true, false, false, false, false, false, false, false, false, 0, 0, 5, 0, 0, 23, 0, 3};
#include "t1664.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1664_TI;
#include "t1664MD.h"

#include "t183.h"
#include "t222.h"


extern MethodInfo m8525_MI;
 void m8525 (t1664 * __this, t5 * p0, t124 p1, MethodInfo* method){
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m8526_MI;
 void m8526 (t1664 * __this, t5 * p0, t183 * p1, MethodInfo* method){
	if(__this->f9 != NULL)
	{
		m8526((t1664 *)__this->f9,p0, p1, method);
	}
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->f3.f0));
	if (__this->f2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (t5 *, t5 * __this, t5 * p0, t183 * p1, MethodInfo* method);
		((FunctionPointerType)__this->f0)(NULL,__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
	}
	if (__this->f2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (t5 * __this, t5 * p0, t183 * p1, MethodInfo* method);
		((FunctionPointerType)__this->f0)(__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
	}
	else
	{
		typedef void (*FunctionPointerType) (t5 * __this, t183 * p1, MethodInfo* method);
		((FunctionPointerType)__this->f0)(p0, p1,(MethodInfo*)(__this->f3.f0));
	}
}
void pinvoke_delegate_wrapper_t1664(Il2CppObject* delegate, t5 * p0, t183 * p1)
{
	typedef void (STDCALL *native_function_ptr_type)(t5 *, t183 *);
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Marshaling of parameter 'p0' to native representation
	t5 * _p0_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Object'."));

	// Marshaling of parameter 'p1' to native representation
	t183 * _p1_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Delegate'."));

	// Native function invocation
	_il2cpp_pinvoke_func(_p0_marshaled, _p1_marshaled);

	// Marshaling cleanup of parameter 'p0' native representation

	// Marshaling cleanup of parameter 'p1' native representation

}
extern MethodInfo m8527_MI;
 t5 * m8527 (t1664 * __this, t5 * p0, t183 * p1, t222 * p2, t5 * p3, MethodInfo* method){
	void *__d_args[3] = {0};
	__d_args[0] = p0;
	__d_args[1] = p1;
	return (t5 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p2, (Il2CppObject*)p3);
}
extern MethodInfo m8528_MI;
 void m8528 (t1664 * __this, t5 * p0, MethodInfo* method){
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
}
// Metadata Definition System.Reflection.EventInfo/AddEventAdapter
extern Il2CppType t5_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t1664_m8525_ParameterInfos[] = 
{
	{"object", 0, 134221855, &EmptyCustomAttributesCache, &t5_0_0_0},
	{"method", 1, 134221856, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m8525_MI = 
{
	".ctor", (methodPointerType)&m8525, &t1664_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t124, t1664_m8525_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, false, 3271, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t5_0_0_0;
extern Il2CppType t183_0_0_0;
extern Il2CppType t183_0_0_0;
static ParameterInfo t1664_m8526_ParameterInfos[] = 
{
	{"_this", 0, 134221857, &EmptyCustomAttributesCache, &t5_0_0_0},
	{"dele", 1, 134221858, &EmptyCustomAttributesCache, &t183_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8526_MI = 
{
	"Invoke", (methodPointerType)&m8526, &t1664_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t5, t1664_m8526_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 2, false, false, 3272, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t5_0_0_0;
extern Il2CppType t183_0_0_0;
extern Il2CppType t222_0_0_0;
extern Il2CppType t222_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t1664_m8527_ParameterInfos[] = 
{
	{"_this", 0, 134221859, &EmptyCustomAttributesCache, &t5_0_0_0},
	{"dele", 1, 134221860, &EmptyCustomAttributesCache, &t183_0_0_0},
	{"callback", 2, 134221861, &EmptyCustomAttributesCache, &t222_0_0_0},
	{"object", 3, 134221862, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t221_0_0_0;
extern void* RuntimeInvoker_t5_t5_t5_t5_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8527_MI = 
{
	"BeginInvoke", (methodPointerType)&m8527, &t1664_TI, &t221_0_0_0, RuntimeInvoker_t5_t5_t5_t5_t5, t1664_m8527_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 4, false, false, 3273, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t221_0_0_0;
extern Il2CppType t221_0_0_0;
static ParameterInfo t1664_m8528_ParameterInfos[] = 
{
	{"result", 0, 134221863, &EmptyCustomAttributesCache, &t221_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8528_MI = 
{
	"EndInvoke", (methodPointerType)&m8528, &t1664_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t1664_m8528_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, false, 3274, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1664_MIs[] =
{
	&m8525_MI,
	&m8526_MI,
	&m8527_MI,
	&m8528_MI,
	NULL
};
extern MethodInfo m2342_MI;
extern MethodInfo m2343_MI;
extern MethodInfo m2344_MI;
extern MethodInfo m2345_MI;
extern MethodInfo m2346_MI;
extern MethodInfo m2347_MI;
extern MethodInfo m2348_MI;
static MethodInfo* t1664_VT[] =
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
	&m8526_MI,
	&m8527_MI,
	&m8528_MI,
};
static Il2CppInterfaceOffsetPair t1664_IOs[] = 
{
	{ &t516_TI, 4},
	{ &t517_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1664_0_0_0;
extern Il2CppType t1664_1_0_0;
extern TypeInfo t353_TI;
struct t1664;
TypeInfo t1664_TI = 
{
	&g_mscorlib_dll_Image, NULL, "AddEventAdapter", "", t1664_MIs, NULL, NULL, NULL, &t353_TI, NULL, &t1403_TI, &t1664_TI, NULL, t1664_VT, &EmptyCustomAttributesCache, &t1664_TI, &t1664_0_0_0, &t1664_1_0_0, t1664_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)pinvoke_delegate_wrapper_t1664, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1664), 0, sizeof(methodPointerType), 0, 0, -1, 259, 0, false, false, false, false, false, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#ifndef _MSC_VER
#else
#endif
#include "t1403MD.h"

extern MethodInfo m11493_MI;
extern MethodInfo m6844_MI;


extern MethodInfo m8529_MI;
 void m8529 (t1403 * __this, MethodInfo* method){
	{
		m6844(__this, &m6844_MI);
		return;
	}
}
extern MethodInfo m8530_MI;
 t114 * m8530 (t1403 * __this, MethodInfo* method){
	t776* V_0 = {0};
	t695 * V_1 = {0};
	t114 * V_2 = {0};
	{
		t695 * L_0 = (t695 *)VirtFuncInvoker1< t695 *, bool >::Invoke(&m11493_MI, __this, 1);
		V_1 = L_0;
		t776* L_1 = (t776*)VirtFuncInvoker0< t776* >::Invoke(&m3586_MI, V_1);
		V_0 = L_1;
		if ((((int32_t)(((int32_t)(((t107 *)V_0)->max_length)))) <= ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_2 = 0;
		t114 * L_3 = (t114 *)VirtFuncInvoker0< t114 * >::Invoke(&m3587_MI, (*(t775 **)(t775 **)SZArrayLdElema(V_0, L_2)));
		V_2 = L_3;
		return V_2;
	}

IL_0020:
	{
		return (t114 *)NULL;
	}
}
extern MethodInfo m8531_MI;
 int32_t m8531 (t1403 * __this, MethodInfo* method){
	{
		return (int32_t)(2);
	}
}
// Metadata Definition System.Reflection.EventInfo
extern Il2CppType t1664_0_0_1;
FieldInfo t1403_f0_FieldInfo = 
{
	"cached_add_event", &t1664_0_0_1, &t1403_TI, offsetof(t1403, f0), &EmptyCustomAttributesCache};
static FieldInfo* t1403_FIs[] =
{
	&t1403_f0_FieldInfo,
	NULL
};
extern MethodInfo m11180_MI;
static PropertyInfo t1403____Attributes_PropertyInfo = 
{
	&t1403_TI, "Attributes", &m11180_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1403____EventHandlerType_PropertyInfo = 
{
	&t1403_TI, "EventHandlerType", &m8530_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1403____MemberType_PropertyInfo = 
{
	&t1403_TI, "MemberType", &m8531_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1403_PIs[] =
{
	&t1403____Attributes_PropertyInfo,
	&t1403____EventHandlerType_PropertyInfo,
	&t1403____MemberType_PropertyInfo,
	NULL
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m8529_MI = 
{
	".ctor", (methodPointerType)&m8529, &t1403_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, false, 3266, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1663_0_0_0;
extern void* RuntimeInvoker_t1663 (MethodInfo* method, void* obj, void** args);
MethodInfo m11180_MI = 
{
	"get_Attributes", NULL, &t1403_TI, &t1663_0_0_0, RuntimeInvoker_t1663, NULL, &EmptyCustomAttributesCache, 3526, 0, 14, 0, false, false, 3267, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t114_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8530_MI = 
{
	"get_EventHandlerType", (methodPointerType)&m8530, &t1403_TI, &t114_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2534, 0, 15, 0, false, false, 3268, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1410_0_0_0;
extern void* RuntimeInvoker_t1410 (MethodInfo* method, void* obj, void** args);
MethodInfo m8531_MI = 
{
	"get_MemberType", (methodPointerType)&m8531, &t1403_TI, &t1410_0_0_0, RuntimeInvoker_t1410, NULL, &EmptyCustomAttributesCache, 2246, 0, 7, 0, false, false, 3269, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t108_0_0_0;
static ParameterInfo t1403_m11493_ParameterInfos[] = 
{
	{"nonPublic", 0, 134221854, &EmptyCustomAttributesCache, &t108_0_0_0},
};
extern Il2CppType t695_0_0_0;
extern void* RuntimeInvoker_t5_t111 (MethodInfo* method, void* obj, void** args);
MethodInfo m11493_MI = 
{
	"GetAddMethod", NULL, &t1403_TI, &t695_0_0_0, RuntimeInvoker_t5_t111, t1403_m11493_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 16, 1, false, false, 3270, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1403_MIs[] =
{
	&m8529_MI,
	&m11180_MI,
	&m8530_MI,
	&m8531_MI,
	&m11493_MI,
	NULL
};
extern TypeInfo t1664_TI;
static TypeInfo* t1403_TI__nestedTypes[2] =
{
	&t1664_TI,
	NULL
};
static MethodInfo* t1403_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m3557_MI,
	&m10990_MI,
	NULL,
	&m8531_MI,
	NULL,
	NULL,
	&m6845_MI,
	NULL,
	NULL,
	NULL,
	NULL,
	&m8530_MI,
	NULL,
};
extern TypeInfo t2358_TI;
static TypeInfo* t1403_ITIs[] = 
{
	&t2358_TI,
};
static Il2CppInterfaceOffsetPair t1403_IOs[] = 
{
	{ &t1990_TI, 4},
	{ &t2247_TI, 6},
	{ &t2358_TI, 14},
};
void t1403_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t576 * tmp;
		tmp = (t576 *)il2cpp_codegen_object_new (&t576_TI);
		m2699(tmp, true, &m2699_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t1699 * tmp;
		tmp = (t1699 *)il2cpp_codegen_object_new (&t1699_TI);
		m8787(tmp, il2cpp_codegen_type_get_object(InitializedTypeInfo(&t2358_TI)), &m8787_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		t1697 * tmp;
		tmp = (t1697 *)il2cpp_codegen_object_new (&t1697_TI);
		m8786(tmp, 0, &m8786_MI);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1403__CustomAttributeCache = {
3,
NULL,
&t1403_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1403_0_0_0;
extern Il2CppType t1403_1_0_0;
struct t1403;
extern CustomAttributesCache t1403__CustomAttributeCache;
TypeInfo t1403_TI = 
{
	&g_mscorlib_dll_Image, NULL, "EventInfo", "System.Reflection", t1403_MIs, t1403_PIs, t1403_FIs, NULL, &t450_TI, t1403_TI__nestedTypes, NULL, &t1403_TI, t1403_ITIs, t1403_VT, &t1403__CustomAttributeCache, &t1403_TI, &t1403_0_0_0, &t1403_1_0_0, t1403_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1403), 0, -1, 0, 0, -1, 1056897, 0, false, false, false, false, false, false, false, false, false, false, false, false, 5, 3, 1, 0, 1, 17, 1, 3};
#ifndef _MSC_VER
#else
#endif
#include "t1623MD.h"



// Metadata Definition System.Reflection.FieldAttributes
extern Il2CppType t110_0_0_1542;
FieldInfo t1623_f1_FieldInfo = 
{
	"value__", &t110_0_0_1542, &t1623_TI, offsetof(t1623, f1) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t1623_0_0_32854;
FieldInfo t1623_f2_FieldInfo = 
{
	"FieldAccessMask", &t1623_0_0_32854, &t1623_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1623_0_0_32854;
FieldInfo t1623_f3_FieldInfo = 
{
	"PrivateScope", &t1623_0_0_32854, &t1623_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1623_0_0_32854;
FieldInfo t1623_f4_FieldInfo = 
{
	"Private", &t1623_0_0_32854, &t1623_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1623_0_0_32854;
FieldInfo t1623_f5_FieldInfo = 
{
	"FamANDAssem", &t1623_0_0_32854, &t1623_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1623_0_0_32854;
FieldInfo t1623_f6_FieldInfo = 
{
	"Assembly", &t1623_0_0_32854, &t1623_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1623_0_0_32854;
FieldInfo t1623_f7_FieldInfo = 
{
	"Family", &t1623_0_0_32854, &t1623_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1623_0_0_32854;
FieldInfo t1623_f8_FieldInfo = 
{
	"FamORAssem", &t1623_0_0_32854, &t1623_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1623_0_0_32854;
FieldInfo t1623_f9_FieldInfo = 
{
	"Public", &t1623_0_0_32854, &t1623_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1623_0_0_32854;
FieldInfo t1623_f10_FieldInfo = 
{
	"Static", &t1623_0_0_32854, &t1623_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1623_0_0_32854;
FieldInfo t1623_f11_FieldInfo = 
{
	"InitOnly", &t1623_0_0_32854, &t1623_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1623_0_0_32854;
FieldInfo t1623_f12_FieldInfo = 
{
	"Literal", &t1623_0_0_32854, &t1623_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1623_0_0_32854;
FieldInfo t1623_f13_FieldInfo = 
{
	"NotSerialized", &t1623_0_0_32854, &t1623_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1623_0_0_32854;
FieldInfo t1623_f14_FieldInfo = 
{
	"HasFieldRVA", &t1623_0_0_32854, &t1623_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1623_0_0_32854;
FieldInfo t1623_f15_FieldInfo = 
{
	"SpecialName", &t1623_0_0_32854, &t1623_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1623_0_0_32854;
FieldInfo t1623_f16_FieldInfo = 
{
	"RTSpecialName", &t1623_0_0_32854, &t1623_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1623_0_0_32854;
FieldInfo t1623_f17_FieldInfo = 
{
	"HasFieldMarshal", &t1623_0_0_32854, &t1623_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1623_0_0_32854;
FieldInfo t1623_f18_FieldInfo = 
{
	"PinvokeImpl", &t1623_0_0_32854, &t1623_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1623_0_0_32854;
FieldInfo t1623_f19_FieldInfo = 
{
	"HasDefault", &t1623_0_0_32854, &t1623_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1623_0_0_32854;
FieldInfo t1623_f20_FieldInfo = 
{
	"ReservedMask", &t1623_0_0_32854, &t1623_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t1623_FIs[] =
{
	&t1623_f1_FieldInfo,
	&t1623_f2_FieldInfo,
	&t1623_f3_FieldInfo,
	&t1623_f4_FieldInfo,
	&t1623_f5_FieldInfo,
	&t1623_f6_FieldInfo,
	&t1623_f7_FieldInfo,
	&t1623_f8_FieldInfo,
	&t1623_f9_FieldInfo,
	&t1623_f10_FieldInfo,
	&t1623_f11_FieldInfo,
	&t1623_f12_FieldInfo,
	&t1623_f13_FieldInfo,
	&t1623_f14_FieldInfo,
	&t1623_f15_FieldInfo,
	&t1623_f16_FieldInfo,
	&t1623_f17_FieldInfo,
	&t1623_f18_FieldInfo,
	&t1623_f19_FieldInfo,
	&t1623_f20_FieldInfo,
	NULL
};
static const int32_t t1623_f2_DefaultValueData = 7;
static Il2CppFieldDefaultValueEntry t1623_f2_DefaultValue = 
{
	&t1623_f2_FieldInfo, { (char*)&t1623_f2_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1623_f3_DefaultValueData = 0;
static Il2CppFieldDefaultValueEntry t1623_f3_DefaultValue = 
{
	&t1623_f3_FieldInfo, { (char*)&t1623_f3_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1623_f4_DefaultValueData = 1;
static Il2CppFieldDefaultValueEntry t1623_f4_DefaultValue = 
{
	&t1623_f4_FieldInfo, { (char*)&t1623_f4_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1623_f5_DefaultValueData = 2;
static Il2CppFieldDefaultValueEntry t1623_f5_DefaultValue = 
{
	&t1623_f5_FieldInfo, { (char*)&t1623_f5_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1623_f6_DefaultValueData = 3;
static Il2CppFieldDefaultValueEntry t1623_f6_DefaultValue = 
{
	&t1623_f6_FieldInfo, { (char*)&t1623_f6_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1623_f7_DefaultValueData = 4;
static Il2CppFieldDefaultValueEntry t1623_f7_DefaultValue = 
{
	&t1623_f7_FieldInfo, { (char*)&t1623_f7_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1623_f8_DefaultValueData = 5;
static Il2CppFieldDefaultValueEntry t1623_f8_DefaultValue = 
{
	&t1623_f8_FieldInfo, { (char*)&t1623_f8_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1623_f9_DefaultValueData = 6;
static Il2CppFieldDefaultValueEntry t1623_f9_DefaultValue = 
{
	&t1623_f9_FieldInfo, { (char*)&t1623_f9_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1623_f10_DefaultValueData = 16;
static Il2CppFieldDefaultValueEntry t1623_f10_DefaultValue = 
{
	&t1623_f10_FieldInfo, { (char*)&t1623_f10_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1623_f11_DefaultValueData = 32;
static Il2CppFieldDefaultValueEntry t1623_f11_DefaultValue = 
{
	&t1623_f11_FieldInfo, { (char*)&t1623_f11_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1623_f12_DefaultValueData = 64;
static Il2CppFieldDefaultValueEntry t1623_f12_DefaultValue = 
{
	&t1623_f12_FieldInfo, { (char*)&t1623_f12_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1623_f13_DefaultValueData = 128;
static Il2CppFieldDefaultValueEntry t1623_f13_DefaultValue = 
{
	&t1623_f13_FieldInfo, { (char*)&t1623_f13_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1623_f14_DefaultValueData = 256;
static Il2CppFieldDefaultValueEntry t1623_f14_DefaultValue = 
{
	&t1623_f14_FieldInfo, { (char*)&t1623_f14_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1623_f15_DefaultValueData = 512;
static Il2CppFieldDefaultValueEntry t1623_f15_DefaultValue = 
{
	&t1623_f15_FieldInfo, { (char*)&t1623_f15_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1623_f16_DefaultValueData = 1024;
static Il2CppFieldDefaultValueEntry t1623_f16_DefaultValue = 
{
	&t1623_f16_FieldInfo, { (char*)&t1623_f16_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1623_f17_DefaultValueData = 4096;
static Il2CppFieldDefaultValueEntry t1623_f17_DefaultValue = 
{
	&t1623_f17_FieldInfo, { (char*)&t1623_f17_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1623_f18_DefaultValueData = 8192;
static Il2CppFieldDefaultValueEntry t1623_f18_DefaultValue = 
{
	&t1623_f18_FieldInfo, { (char*)&t1623_f18_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1623_f19_DefaultValueData = 32768;
static Il2CppFieldDefaultValueEntry t1623_f19_DefaultValue = 
{
	&t1623_f19_FieldInfo, { (char*)&t1623_f19_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1623_f20_DefaultValueData = 38144;
static Il2CppFieldDefaultValueEntry t1623_f20_DefaultValue = 
{
	&t1623_f20_FieldInfo, { (char*)&t1623_f20_DefaultValueData, &t110_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t1623_FDVs[] = 
{
	&t1623_f2_DefaultValue,
	&t1623_f3_DefaultValue,
	&t1623_f4_DefaultValue,
	&t1623_f5_DefaultValue,
	&t1623_f6_DefaultValue,
	&t1623_f7_DefaultValue,
	&t1623_f8_DefaultValue,
	&t1623_f9_DefaultValue,
	&t1623_f10_DefaultValue,
	&t1623_f11_DefaultValue,
	&t1623_f12_DefaultValue,
	&t1623_f13_DefaultValue,
	&t1623_f14_DefaultValue,
	&t1623_f15_DefaultValue,
	&t1623_f16_DefaultValue,
	&t1623_f17_DefaultValue,
	&t1623_f18_DefaultValue,
	&t1623_f19_DefaultValue,
	&t1623_f20_DefaultValue,
	NULL
};
static MethodInfo* t1623_MIs[] =
{
	NULL
};
static MethodInfo* t1623_VT[] =
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
static Il2CppInterfaceOffsetPair t1623_IOs[] = 
{
	{ &t120_TI, 4},
	{ &t121_TI, 5},
	{ &t122_TI, 21},
};
void t1623_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t576 * tmp;
		tmp = (t576 *)il2cpp_codegen_object_new (&t576_TI);
		m2699(tmp, true, &m2699_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t446 * tmp;
		tmp = (t446 *)il2cpp_codegen_object_new (&t446_TI);
		m1932(tmp, &m1932_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1623__CustomAttributeCache = {
2,
NULL,
&t1623_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1623_0_0_0;
extern Il2CppType t1623_1_0_0;
extern CustomAttributesCache t1623__CustomAttributeCache;
TypeInfo t1623_TI = 
{
	&g_mscorlib_dll_Image, NULL, "FieldAttributes", "System.Reflection", t1623_MIs, NULL, t1623_FIs, NULL, &t18_TI, NULL, NULL, &t110_TI, NULL, t1623_VT, &t1623__CustomAttributeCache, &t110_TI, &t1623_0_0_0, &t1623_1_0_0, t1623_IOs, NULL, NULL, t1623_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1623)+ sizeof (Il2CppObject), sizeof (int32_t), sizeof(int32_t), 0, 0, -1, 8449, 0, true, false, false, true, false, false, false, false, false, false, false, false, 0, 0, 20, 0, 0, 23, 0, 3};
#ifndef _MSC_VER
#else
#endif

#include "t1192.h"
#include "t1221.h"
#include "t1995.h"
#include "t1422.h"
extern TypeInfo t1995_TI;
extern TypeInfo t1422_TI;
#include "t1192MD.h"
#include "t124MD.h"
#include "t1995MD.h"
#include "t1422MD.h"
extern MethodInfo m8542_MI;
extern MethodInfo m11494_MI;
extern MethodInfo m6849_MI;
extern MethodInfo m3595_MI;
extern MethodInfo m8539_MI;
extern MethodInfo m8537_MI;
extern MethodInfo m8543_MI;
extern MethodInfo m10699_MI;
extern MethodInfo m8541_MI;
extern MethodInfo m6867_MI;


extern MethodInfo m8532_MI;
 void m8532 (t1404 * __this, MethodInfo* method){
	{
		m6844(__this, &m6844_MI);
		return;
	}
}
extern MethodInfo m8533_MI;
 int32_t m8533 (t1404 * __this, MethodInfo* method){
	{
		return (int32_t)(4);
	}
}
extern MethodInfo m8534_MI;
 bool m8534 (t1404 * __this, MethodInfo* method){
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m11178_MI, __this);
		return ((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)((int32_t)64)))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
extern MethodInfo m8535_MI;
 bool m8535 (t1404 * __this, MethodInfo* method){
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m11178_MI, __this);
		return ((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)((int32_t)16)))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
extern MethodInfo m8536_MI;
 bool m8536 (t1404 * __this, MethodInfo* method){
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m11178_MI, __this);
		return ((((int32_t)((int32_t)((int32_t)L_0&(int32_t)7))) == ((int32_t)6))? 1 : 0);
	}
}
 bool m8537 (t1404 * __this, MethodInfo* method){
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m11178_MI, __this);
		return ((((int32_t)((int32_t)((int32_t)L_0&(int32_t)((int32_t)128)))) == ((int32_t)((int32_t)128)))? 1 : 0);
	}
}
extern MethodInfo m8538_MI;
 void m8538 (t1404 * __this, t5 * p0, t5 * p1, MethodInfo* method){
	{
		VirtActionInvoker5< t5 *, t5 *, int32_t, t769 *, t771 * >::Invoke(&m11494_MI, __this, p0, p1, 0, (t769 *)NULL, (t771 *)NULL);
		return;
	}
}
 t1404 * m8539 (t5 * __this, t124 p0, t124 p1, MethodInfo* method){
	typedef t1404 * (*m8539_ftn) (t124, t124);
	static m8539_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m8539_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.FieldInfo::internal_from_handle_type(System.IntPtr,System.IntPtr)");
	return _il2cpp_icall_func(p0, p1);
}
extern MethodInfo m8540_MI;
 t1404 * m8540 (t5 * __this, t1192  p0, MethodInfo* method){
	{
		t124 L_0 = m6849((&p0), &m6849_MI);
		bool L_1 = m3595(NULL, L_0, (((t124_SFs*)InitializedTypeInfo(&t124_TI)->static_fields)->f1), &m3595_MI);
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		t160 * L_2 = (t160 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t160_TI));
		m2582(L_2, (t11*) &_stringLiteral1858, &m2582_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_001e:
	{
		t124 L_3 = m6849((&p0), &m6849_MI);
		t1404 * L_4 = m8539(NULL, L_3, (((t124_SFs*)InitializedTypeInfo(&t124_TI)->static_fields)->f1), &m8539_MI);
		return L_4;
	}
}
 int32_t m8541 (t1404 * __this, MethodInfo* method){
	{
		t1221 * L_0 = (t1221 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1221_TI));
		m4996(L_0, (t11*) &_stringLiteral1859, &m4996_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
 t1622 * m8542 (t1404 * __this, MethodInfo* method){
	typedef t1622 * (*m8542_ftn) (t1404 *);
	static m8542_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m8542_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.FieldInfo::GetUnmanagedMarshal()");
	return _il2cpp_icall_func(__this);
}
 t1622 * m8543 (t1404 * __this, MethodInfo* method){
	{
		t1622 * L_0 = m8542(__this, &m8542_MI);
		return L_0;
	}
}
extern MethodInfo m8544_MI;
 t168* m8544 (t1404 * __this, MethodInfo* method){
	int32_t V_0 = 0;
	t1622 * V_1 = {0};
	t168* V_2 = {0};
	{
		V_0 = 0;
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(&m8537_MI, __this);
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		V_0 = ((int32_t)(V_0+1));
	}

IL_000e:
	{
		t114 * L_1 = (t114 *)VirtFuncInvoker0< t114 * >::Invoke(&m3584_MI, __this);
		bool L_2 = (bool)VirtFuncInvoker0< bool >::Invoke(&m6788_MI, L_1);
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		V_0 = ((int32_t)(V_0+1));
	}

IL_001f:
	{
		t1622 * L_3 = (t1622 *)VirtFuncInvoker0< t1622 * >::Invoke(&m8543_MI, __this);
		V_1 = L_3;
		if (!V_1)
		{
			goto IL_002d;
		}
	}
	{
		V_0 = ((int32_t)(V_0+1));
	}

IL_002d:
	{
		if (V_0)
		{
			goto IL_0032;
		}
	}
	{
		return (t168*)NULL;
	}

IL_0032:
	{
		V_2 = ((t168*)SZArrayNew(InitializedTypeInfo(&t168_TI), V_0));
		V_0 = 0;
		bool L_4 = (bool)VirtFuncInvoker0< bool >::Invoke(&m8537_MI, __this);
		if (!L_4)
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_5 = V_0;
		V_0 = ((int32_t)(L_5+1));
		t1995 * L_6 = (t1995 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1995_TI));
		m10699(L_6, &m10699_MI);
		ArrayElementTypeCheck (V_2, L_6);
		*((t5 **)(t5 **)SZArrayLdElema(V_2, L_5)) = (t5 *)L_6;
	}

IL_004f:
	{
		t114 * L_7 = (t114 *)VirtFuncInvoker0< t114 * >::Invoke(&m3584_MI, __this);
		bool L_8 = (bool)VirtFuncInvoker0< bool >::Invoke(&m6788_MI, L_7);
		if (!L_8)
		{
			goto IL_006e;
		}
	}
	{
		int32_t L_9 = V_0;
		V_0 = ((int32_t)(L_9+1));
		int32_t L_10 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m8541_MI, __this);
		t1422 * L_11 = (t1422 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1422_TI));
		m6867(L_11, L_10, &m6867_MI);
		ArrayElementTypeCheck (V_2, L_11);
		*((t5 **)(t5 **)SZArrayLdElema(V_2, L_9)) = (t5 *)L_11;
	}

IL_006e:
	{
		if (!V_1)
		{
			goto IL_007e;
		}
	}
	{
		int32_t L_12 = V_0;
		V_0 = ((int32_t)(L_12+1));
		t1416 * L_13 = m8454(V_1, &m8454_MI);
		ArrayElementTypeCheck (V_2, L_13);
		*((t5 **)(t5 **)SZArrayLdElema(V_2, L_12)) = (t5 *)L_13;
	}

IL_007e:
	{
		return V_2;
	}
}
// Metadata Definition System.Reflection.FieldInfo
static PropertyInfo t1404____Attributes_PropertyInfo = 
{
	&t1404_TI, "Attributes", &m11178_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m11495_MI;
static PropertyInfo t1404____FieldHandle_PropertyInfo = 
{
	&t1404_TI, "FieldHandle", &m11495_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m11496_MI;
static PropertyInfo t1404____FieldType_PropertyInfo = 
{
	&t1404_TI, "FieldType", &m11496_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1404____MemberType_PropertyInfo = 
{
	&t1404_TI, "MemberType", &m8533_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1404____IsLiteral_PropertyInfo = 
{
	&t1404_TI, "IsLiteral", &m8534_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1404____IsStatic_PropertyInfo = 
{
	&t1404_TI, "IsStatic", &m8535_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1404____IsPublic_PropertyInfo = 
{
	&t1404_TI, "IsPublic", &m8536_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1404____IsNotSerialized_PropertyInfo = 
{
	&t1404_TI, "IsNotSerialized", &m8537_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1404____UMarshal_PropertyInfo = 
{
	&t1404_TI, "UMarshal", &m8543_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1404_PIs[] =
{
	&t1404____Attributes_PropertyInfo,
	&t1404____FieldHandle_PropertyInfo,
	&t1404____FieldType_PropertyInfo,
	&t1404____MemberType_PropertyInfo,
	&t1404____IsLiteral_PropertyInfo,
	&t1404____IsStatic_PropertyInfo,
	&t1404____IsPublic_PropertyInfo,
	&t1404____IsNotSerialized_PropertyInfo,
	&t1404____UMarshal_PropertyInfo,
	NULL
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m8532_MI = 
{
	".ctor", (methodPointerType)&m8532, &t1404_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, false, 3275, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1623_0_0_0;
extern void* RuntimeInvoker_t1623 (MethodInfo* method, void* obj, void** args);
MethodInfo m11178_MI = 
{
	"get_Attributes", NULL, &t1404_TI, &t1623_0_0_0, RuntimeInvoker_t1623, NULL, &EmptyCustomAttributesCache, 3526, 0, 14, 0, false, false, 3276, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1192_0_0_0;
extern void* RuntimeInvoker_t1192 (MethodInfo* method, void* obj, void** args);
MethodInfo m11495_MI = 
{
	"get_FieldHandle", NULL, &t1404_TI, &t1192_0_0_0, RuntimeInvoker_t1192, NULL, &EmptyCustomAttributesCache, 3526, 0, 15, 0, false, false, 3277, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t114_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m11496_MI = 
{
	"get_FieldType", NULL, &t1404_TI, &t114_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 3526, 0, 16, 0, false, false, 3278, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t5_0_0_0;
static ParameterInfo t1404_m11497_ParameterInfos[] = 
{
	{"obj", 0, 134221864, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m11497_MI = 
{
	"GetValue", NULL, &t1404_TI, &t5_0_0_0, RuntimeInvoker_t5_t5, t1404_m11497_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 17, 1, false, false, 3279, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1410_0_0_0;
extern void* RuntimeInvoker_t1410 (MethodInfo* method, void* obj, void** args);
MethodInfo m8533_MI = 
{
	"get_MemberType", (methodPointerType)&m8533, &t1404_TI, &t1410_0_0_0, RuntimeInvoker_t1410, NULL, &EmptyCustomAttributesCache, 2246, 0, 7, 0, false, false, 3280, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
MethodInfo m8534_MI = 
{
	"get_IsLiteral", (methodPointerType)&m8534, &t1404_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2534, 0, 18, 0, false, false, 3281, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
MethodInfo m8535_MI = 
{
	"get_IsStatic", (methodPointerType)&m8535, &t1404_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2534, 0, 19, 0, false, false, 3282, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
MethodInfo m8536_MI = 
{
	"get_IsPublic", (methodPointerType)&m8536, &t1404_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2534, 0, 20, 0, false, false, 3283, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
MethodInfo m8537_MI = 
{
	"get_IsNotSerialized", (methodPointerType)&m8537, &t1404_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2534, 0, 21, 0, false, false, 3284, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t5_0_0_0;
extern Il2CppType t5_0_0_0;
extern Il2CppType t768_0_0_0;
extern Il2CppType t769_0_0_0;
extern Il2CppType t771_0_0_0;
static ParameterInfo t1404_m11494_ParameterInfos[] = 
{
	{"obj", 0, 134221865, &EmptyCustomAttributesCache, &t5_0_0_0},
	{"value", 1, 134221866, &EmptyCustomAttributesCache, &t5_0_0_0},
	{"invokeAttr", 2, 134221867, &EmptyCustomAttributesCache, &t768_0_0_0},
	{"binder", 3, 134221868, &EmptyCustomAttributesCache, &t769_0_0_0},
	{"culture", 4, 134221869, &EmptyCustomAttributesCache, &t771_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t5_t110_t5_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m11494_MI = 
{
	"SetValue", NULL, &t1404_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t5_t110_t5_t5, t1404_m11494_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 22, 5, false, false, 3285, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t5_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t1404_m8538_ParameterInfos[] = 
{
	{"obj", 0, 134221870, &EmptyCustomAttributesCache, &t5_0_0_0},
	{"value", 1, 134221871, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t5 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t1404__CustomAttributeCache_m8538;
MethodInfo m8538_MI = 
{
	"SetValue", (methodPointerType)&m8538, &t1404_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t5, t1404_m8538_ParameterInfos, &t1404__CustomAttributeCache_m8538, 486, 0, 23, 2, false, false, 3286, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t1404_m8539_ParameterInfos[] = 
{
	{"field_handle", 0, 134221872, &EmptyCustomAttributesCache, &t124_0_0_0},
	{"type_handle", 1, 134221873, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t1404_0_0_0;
extern void* RuntimeInvoker_t5_t124_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m8539_MI = 
{
	"internal_from_handle_type", (methodPointerType)&m8539, &t1404_TI, &t1404_0_0_0, RuntimeInvoker_t5_t124_t124, t1404_m8539_ParameterInfos, &EmptyCustomAttributesCache, 145, 4096, 255, 2, false, false, 3287, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1192_0_0_0;
extern Il2CppType t1192_0_0_0;
static ParameterInfo t1404_m8540_ParameterInfos[] = 
{
	{"handle", 0, 134221874, &EmptyCustomAttributesCache, &t1192_0_0_0},
};
extern Il2CppType t1404_0_0_0;
extern void* RuntimeInvoker_t5_t1192 (MethodInfo* method, void* obj, void** args);
MethodInfo m8540_MI = 
{
	"GetFieldFromHandle", (methodPointerType)&m8540, &t1404_TI, &t1404_0_0_0, RuntimeInvoker_t5_t1192, t1404_m8540_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 3288, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m8541_MI = 
{
	"GetFieldOffset", (methodPointerType)&m8541, &t1404_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 451, 0, 24, 0, false, false, 3289, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1622_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8542_MI = 
{
	"GetUnmanagedMarshal", (methodPointerType)&m8542, &t1404_TI, &t1622_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 129, 4096, 255, 0, false, false, 3290, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1622_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8543_MI = 
{
	"get_UMarshal", (methodPointerType)&m8543, &t1404_TI, &t1622_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2499, 0, 25, 0, false, false, 3291, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t168_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8544_MI = 
{
	"GetPseudoCustomAttributes", (methodPointerType)&m8544, &t1404_TI, &t168_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 131, 0, 255, 0, false, false, 3292, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1404_MIs[] =
{
	&m8532_MI,
	&m11178_MI,
	&m11495_MI,
	&m11496_MI,
	&m11497_MI,
	&m8533_MI,
	&m8534_MI,
	&m8535_MI,
	&m8536_MI,
	&m8537_MI,
	&m11494_MI,
	&m8538_MI,
	&m8539_MI,
	&m8540_MI,
	&m8541_MI,
	&m8542_MI,
	&m8543_MI,
	&m8544_MI,
	NULL
};
static MethodInfo* t1404_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m3557_MI,
	&m10990_MI,
	NULL,
	&m8533_MI,
	NULL,
	NULL,
	&m6845_MI,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	&m8534_MI,
	&m8535_MI,
	&m8536_MI,
	&m8537_MI,
	NULL,
	&m8538_MI,
	&m8541_MI,
	&m8543_MI,
};
extern TypeInfo t2347_TI;
static TypeInfo* t1404_ITIs[] = 
{
	&t2347_TI,
};
static Il2CppInterfaceOffsetPair t1404_IOs[] = 
{
	{ &t1990_TI, 4},
	{ &t2247_TI, 6},
	{ &t2347_TI, 14},
};
void t1404_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t1699 * tmp;
		tmp = (t1699 *)il2cpp_codegen_object_new (&t1699_TI);
		m8787(tmp, il2cpp_codegen_type_get_object(InitializedTypeInfo(&t2347_TI)), &m8787_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t576 * tmp;
		tmp = (t576 *)il2cpp_codegen_object_new (&t576_TI);
		m2699(tmp, true, &m2699_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		t1697 * tmp;
		tmp = (t1697 *)il2cpp_codegen_object_new (&t1697_TI);
		m8786(tmp, 0, &m8786_MI);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
}
void t1404_CustomAttributesCacheGenerator_m8538(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t488 * tmp;
		tmp = (t488 *)il2cpp_codegen_object_new (&t488_TI);
		m2155(tmp, &m2155_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t1553 * tmp;
		tmp = (t1553 *)il2cpp_codegen_object_new (&t1553_TI);
		m7614(tmp, &m7614_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1404__CustomAttributeCache = {
3,
NULL,
&t1404_CustomAttributesCacheGenerator
};
CustomAttributesCache t1404__CustomAttributeCache_m8538 = {
2,
NULL,
&t1404_CustomAttributesCacheGenerator_m8538
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1404_0_0_0;
extern Il2CppType t1404_1_0_0;
struct t1404;
extern CustomAttributesCache t1404__CustomAttributeCache;
extern CustomAttributesCache t1404__CustomAttributeCache_m8538;
TypeInfo t1404_TI = 
{
	&g_mscorlib_dll_Image, NULL, "FieldInfo", "System.Reflection", t1404_MIs, t1404_PIs, NULL, NULL, &t450_TI, NULL, NULL, &t1404_TI, t1404_ITIs, t1404_VT, &t1404__CustomAttributeCache, &t1404_TI, &t1404_0_0_0, &t1404_1_0_0, t1404_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1404), 0, -1, 0, 0, -1, 1056897, 0, false, false, false, false, false, false, false, false, false, false, false, false, 18, 9, 0, 0, 0, 26, 1, 3};
#include "t1637.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1637_TI;
#include "t1637MD.h"

#include "t764.h"
extern TypeInfo t764_TI;
extern MethodInfo m588_MI;


extern MethodInfo m8545_MI;
 void m8545 (t1637 * __this, MethodInfo* method){
	{
		m460(__this, &m460_MI);
		return;
	}
}
extern MethodInfo m8546_MI;
 t11* m8546 (t1637 * __this, MethodInfo* method){
	{
		bool L_0 = (__this->f1);
		if (!L_0)
		{
			goto IL_0024;
		}
	}
	{
		t114 * L_1 = (__this->f0);
		uint16_t L_2 = (__this->f2);
		uint16_t L_3 = L_2;
		t5 * L_4 = Box(InitializedTypeInfo(&t764_TI), &L_3);
		IL2CPP_RUNTIME_CLASS_INIT((&t11_TI));
		t11* L_5 = m588(NULL, (t11*) &_stringLiteral1860, L_1, L_4, &m588_MI);
		return L_5;
	}

IL_0024:
	{
		t114 * L_6 = (__this->f0);
		uint16_t L_7 = (__this->f2);
		uint16_t L_8 = L_7;
		t5 * L_9 = Box(InitializedTypeInfo(&t764_TI), &L_8);
		IL2CPP_RUNTIME_CLASS_INIT((&t11_TI));
		t11* L_10 = m588(NULL, (t11*) &_stringLiteral1861, L_6, L_9, &m588_MI);
		return L_10;
	}
}
// Metadata Definition System.Reflection.LocalVariableInfo
extern Il2CppType t114_0_0_3;
FieldInfo t1637_f0_FieldInfo = 
{
	"type", &t114_0_0_3, &t1637_TI, offsetof(t1637, f0), &EmptyCustomAttributesCache};
extern Il2CppType t108_0_0_3;
FieldInfo t1637_f1_FieldInfo = 
{
	"is_pinned", &t108_0_0_3, &t1637_TI, offsetof(t1637, f1), &EmptyCustomAttributesCache};
extern Il2CppType t764_0_0_3;
FieldInfo t1637_f2_FieldInfo = 
{
	"position", &t764_0_0_3, &t1637_TI, offsetof(t1637, f2), &EmptyCustomAttributesCache};
static FieldInfo* t1637_FIs[] =
{
	&t1637_f0_FieldInfo,
	&t1637_f1_FieldInfo,
	&t1637_f2_FieldInfo,
	NULL
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m8545_MI = 
{
	".ctor", (methodPointerType)&m8545, &t1637_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6275, 0, 255, 0, false, false, 3293, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t11_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8546_MI = 
{
	"ToString", (methodPointerType)&m8546, &t1637_TI, &t11_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 198, 0, 3, 0, false, false, 3294, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1637_MIs[] =
{
	&m8545_MI,
	&m8546_MI,
	NULL
};
static MethodInfo* t1637_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m8546_MI,
};
void t1637_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t576 * tmp;
		tmp = (t576 *)il2cpp_codegen_object_new (&t576_TI);
		m2699(tmp, true, &m2699_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1637__CustomAttributeCache = {
1,
NULL,
&t1637_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1637_0_0_0;
extern Il2CppType t1637_1_0_0;
struct t1637;
extern CustomAttributesCache t1637__CustomAttributeCache;
TypeInfo t1637_TI = 
{
	&g_mscorlib_dll_Image, NULL, "LocalVariableInfo", "System.Reflection", t1637_MIs, NULL, t1637_FIs, NULL, &t5_TI, NULL, NULL, &t1637_TI, NULL, t1637_VT, &t1637__CustomAttributeCache, &t1637_TI, &t1637_0_0_0, &t1637_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1637), 0, -1, 0, 0, -1, 1048577, 0, false, false, false, false, false, false, false, false, false, false, false, false, 2, 0, 3, 0, 0, 4, 0, 0};
#include "t1665.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1665_TI;
#include "t1665MD.h"

#include "t1183.h"
extern TypeInfo t1183_TI;
extern TypeInfo t1410_TI;
#include "t1183MD.h"
#include "t695MD.h"
extern Il2CppType t1665_0_0_0;
extern MethodInfo m8549_MI;
extern MethodInfo m9340_MI;
extern MethodInfo m11184_MI;
extern MethodInfo m4775_MI;
extern MethodInfo m4974_MI;
extern MethodInfo m4779_MI;
extern MethodInfo m8572_MI;
extern MethodInfo m8571_MI;
extern MethodInfo m8570_MI;
extern MethodInfo m462_MI;


extern MethodInfo m8547_MI;
 void m8547 (t1665 * __this, t829 * p0, t830  p1, MethodInfo* method){
	t11* V_0 = {0};
	t11* V_1 = {0};
	t1194 * V_2 = {0};
	t142 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t142 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	{
		m460(__this, &m460_MI);
		t11* L_0 = m4787(p0, (t11*) &_stringLiteral1862, &m4787_MI);
		V_0 = L_0;
		t11* L_1 = m4787(p0, (t11*) &_stringLiteral1100, &m4787_MI);
		V_1 = L_1;
		t11* L_2 = m4787(p0, (t11*) &_stringLiteral1863, &m4787_MI);
		__this->f0 = L_2;
		t11* L_3 = m4787(p0, (t11*) &_stringLiteral487, &m4787_MI);
		__this->f1 = L_3;
		int32_t L_4 = m4789(p0, (t11*) &_stringLiteral1864, &m4789_MI);
		__this->f2 = L_4;
	}

IL_0051:
	try
	{ // begin try (depth: 1)
		__this->f4 = (t675*)NULL;
		// IL_0058: leave.s IL_005d
		goto IL_005d;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (t142 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&t1183_TI, e.ex->object.klass))
			goto IL_005a;
		throw e;
	}

IL_005a:
	{ // begin catch(System.Runtime.Serialization.SerializationException)
		// IL_005b: leave.s IL_005d
		goto IL_005d;
	} // end catch (depth: 1)

IL_005d:
	{
		t1194 * L_5 = m8473(NULL, V_0, &m8473_MI);
		V_2 = L_5;
		t114 * L_6 = (t114 *)VirtFuncInvoker3< t114 *, t11*, bool, bool >::Invoke(&m8469_MI, V_2, V_1, 1, 1);
		__this->f3 = L_6;
		return;
	}
}
extern MethodInfo m8548_MI;
 void m8548 (t5 * __this, t829 * p0, t11* p1, t114 * p2, t11* p3, int32_t p4, MethodInfo* method){
	{
		m8549(NULL, p0, p1, p2, p3, p4, (t675*)(t675*)NULL, &m8549_MI);
		return;
	}
}
 void m8549 (t5 * __this, t829 * p0, t11* p1, t114 * p2, t11* p3, int32_t p4, t675* p5, MethodInfo* method){
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t114_TI));
		t114 * L_0 = m532(NULL, LoadTypeToken(&t1665_0_0_0), &m532_MI);
		m9340(p0, L_0, &m9340_MI);
		t1402 * L_1 = (t1402 *)VirtFuncInvoker0< t1402 * >::Invoke(&m11184_MI, p2);
		t1194 * L_2 = m8580(L_1, &m8580_MI);
		t11* L_3 = (t11*)VirtFuncInvoker0< t11* >::Invoke(&m8462_MI, L_2);
		t114 * L_4 = m532(NULL, LoadTypeToken(&t11_0_0_0), &m532_MI);
		m4775(p0, (t11*) &_stringLiteral1862, L_3, L_4, &m4775_MI);
		t11* L_5 = (t11*)VirtFuncInvoker0< t11* >::Invoke(&m3644_MI, p2);
		t114 * L_6 = m532(NULL, LoadTypeToken(&t11_0_0_0), &m532_MI);
		m4775(p0, (t11*) &_stringLiteral1100, L_5, L_6, &m4775_MI);
		t114 * L_7 = m532(NULL, LoadTypeToken(&t11_0_0_0), &m532_MI);
		m4775(p0, (t11*) &_stringLiteral1863, p1, L_7, &m4775_MI);
		t114 * L_8 = m532(NULL, LoadTypeToken(&t11_0_0_0), &m532_MI);
		m4775(p0, (t11*) &_stringLiteral487, p3, L_8, &m4775_MI);
		m4777(p0, (t11*) &_stringLiteral1864, p4, &m4777_MI);
		t114 * L_9 = m532(NULL, LoadTypeToken(&t675_0_0_0), &m532_MI);
		m4775(p0, (t11*) &_stringLiteral1865, (t5 *)(t5 *)p5, L_9, &m4775_MI);
		return;
	}
}
extern MethodInfo m8550_MI;
 void m8550 (t1665 * __this, t829 * p0, t830  p1, MethodInfo* method){
	{
		t491 * L_0 = (t491 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t491_TI));
		m2164(L_0, &m2164_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m8551_MI;
 t5 * m8551 (t1665 * __this, t830  p0, MethodInfo* method){
	t1408* V_0 = {0};
	int32_t V_1 = 0;
	t1406* V_2 = {0};
	int32_t V_3 = 0;
	t695 * V_4 = {0};
	t1404 * V_5 = {0};
	t1407 * V_6 = {0};
	t1403 * V_7 = {0};
	int32_t V_8 = {0};
	{
		int32_t L_0 = (__this->f2);
		V_8 = L_0;
		if (((int32_t)(V_8-1)) == 0)
		{
			goto IL_003f;
		}
		if (((int32_t)(V_8-1)) == 1)
		{
			goto IL_019e;
		}
		if (((int32_t)(V_8-1)) == 2)
		{
			goto IL_0031;
		}
		if (((int32_t)(V_8-1)) == 3)
		{
			goto IL_012e;
		}
		if (((int32_t)(V_8-1)) == 4)
		{
			goto IL_0031;
		}
		if (((int32_t)(V_8-1)) == 5)
		{
			goto IL_0031;
		}
		if (((int32_t)(V_8-1)) == 6)
		{
			goto IL_0031;
		}
		if (((int32_t)(V_8-1)) == 7)
		{
			goto IL_0090;
		}
	}

IL_0031:
	{
		if ((((int32_t)V_8) == ((int32_t)((int32_t)16))))
		{
			goto IL_0166;
		}
	}
	{
		goto IL_01d6;
	}

IL_003f:
	{
		t114 * L_1 = (__this->f3);
		t1408* L_2 = (t1408*)VirtFuncInvoker1< t1408*, int32_t >::Invoke(&m11190_MI, L_1, ((int32_t)60));
		V_0 = L_2;
		V_1 = 0;
		goto IL_006e;
	}

IL_0051:
	{
		int32_t L_3 = V_1;
		t11* L_4 = (t11*)VirtFuncInvoker0< t11* >::Invoke(&m467_MI, (*(t797 **)(t797 **)SZArrayLdElema(V_0, L_3)));
		t11* L_5 = (__this->f1);
		bool L_6 = (bool)VirtFuncInvoker1< bool, t11* >::Invoke(&m4974_MI, L_4, L_5);
		if (!L_6)
		{
			goto IL_006a;
		}
	}
	{
		int32_t L_7 = V_1;
		return (*(t797 **)(t797 **)SZArrayLdElema(V_0, L_7));
	}

IL_006a:
	{
		V_1 = ((int32_t)(V_1+1));
	}

IL_006e:
	{
		if ((((int32_t)V_1) < ((int32_t)(((int32_t)(((t107 *)V_0)->max_length))))))
		{
			goto IL_0051;
		}
	}
	{
		t11* L_8 = (__this->f1);
		t114 * L_9 = (__this->f3);
		IL2CPP_RUNTIME_CLASS_INIT((&t11_TI));
		t11* L_10 = m588(NULL, (t11*) &_stringLiteral1866, L_8, L_9, &m588_MI);
		t1183 * L_11 = (t1183 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1183_TI));
		m4779(L_11, L_10, &m4779_MI);
		il2cpp_codegen_raise_exception(L_11);
	}

IL_0090:
	{
		t114 * L_12 = (__this->f3);
		t1406* L_13 = (t1406*)VirtFuncInvoker1< t1406*, int32_t >::Invoke(&m11189_MI, L_12, ((int32_t)60));
		V_2 = L_13;
		V_3 = 0;
		goto IL_010c;
	}

IL_00a2:
	{
		int32_t L_14 = V_3;
		t11* L_15 = (t11*)VirtFuncInvoker0< t11* >::Invoke(&m467_MI, (*(t695 **)(t695 **)SZArrayLdElema(V_2, L_14)));
		t11* L_16 = (__this->f1);
		bool L_17 = (bool)VirtFuncInvoker1< bool, t11* >::Invoke(&m4974_MI, L_15, L_16);
		if (!L_17)
		{
			goto IL_00bb;
		}
	}
	{
		int32_t L_18 = V_3;
		return (*(t695 **)(t695 **)SZArrayLdElema(V_2, L_18));
	}

IL_00bb:
	{
		t675* L_19 = (__this->f4);
		if (!L_19)
		{
			goto IL_0108;
		}
	}
	{
		int32_t L_20 = V_3;
		bool L_21 = (bool)VirtFuncInvoker0< bool >::Invoke(&m8572_MI, (*(t695 **)(t695 **)SZArrayLdElema(V_2, L_20)));
		if (!L_21)
		{
			goto IL_0108;
		}
	}
	{
		int32_t L_22 = V_3;
		t675* L_23 = (t675*)VirtFuncInvoker0< t675* >::Invoke(&m8571_MI, (*(t695 **)(t695 **)SZArrayLdElema(V_2, L_22)));
		t675* L_24 = (__this->f4);
		if ((((uint32_t)(((int32_t)(((t107 *)L_23)->max_length)))) != ((uint32_t)(((int32_t)(((t107 *)L_24)->max_length))))))
		{
			goto IL_0108;
		}
	}
	{
		int32_t L_25 = V_3;
		t675* L_26 = (__this->f4);
		t695 * L_27 = (t695 *)VirtFuncInvoker1< t695 *, t675* >::Invoke(&m8570_MI, (*(t695 **)(t695 **)SZArrayLdElema(V_2, L_25)), L_26);
		V_4 = L_27;
		t11* L_28 = (t11*)VirtFuncInvoker0< t11* >::Invoke(&m467_MI, V_4);
		t11* L_29 = (__this->f1);
		IL2CPP_RUNTIME_CLASS_INIT((&t11_TI));
		bool L_30 = m2356(NULL, L_28, L_29, &m2356_MI);
		if (!L_30)
		{
			goto IL_0108;
		}
	}
	{
		return V_4;
	}

IL_0108:
	{
		V_3 = ((int32_t)(V_3+1));
	}

IL_010c:
	{
		if ((((int32_t)V_3) < ((int32_t)(((int32_t)(((t107 *)V_2)->max_length))))))
		{
			goto IL_00a2;
		}
	}
	{
		t11* L_31 = (__this->f1);
		t114 * L_32 = (__this->f3);
		IL2CPP_RUNTIME_CLASS_INIT((&t11_TI));
		t11* L_33 = m588(NULL, (t11*) &_stringLiteral1867, L_31, L_32, &m588_MI);
		t1183 * L_34 = (t1183 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1183_TI));
		m4779(L_34, L_33, &m4779_MI);
		il2cpp_codegen_raise_exception(L_34);
	}

IL_012e:
	{
		t114 * L_35 = (__this->f3);
		t11* L_36 = (__this->f0);
		t1404 * L_37 = (t1404 *)VirtFuncInvoker2< t1404 *, t11*, int32_t >::Invoke(&m11187_MI, L_35, L_36, ((int32_t)60));
		V_5 = L_37;
		if (!V_5)
		{
			goto IL_014a;
		}
	}
	{
		return V_5;
	}

IL_014a:
	{
		t11* L_38 = (__this->f0);
		t114 * L_39 = (__this->f3);
		IL2CPP_RUNTIME_CLASS_INIT((&t11_TI));
		t11* L_40 = m588(NULL, (t11*) &_stringLiteral1868, L_38, L_39, &m588_MI);
		t1183 * L_41 = (t1183 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1183_TI));
		m4779(L_41, L_40, &m4779_MI);
		il2cpp_codegen_raise_exception(L_41);
	}

IL_0166:
	{
		t114 * L_42 = (__this->f3);
		t11* L_43 = (__this->f0);
		t1407 * L_44 = (t1407 *)VirtFuncInvoker2< t1407 *, t11*, int32_t >::Invoke(&m6820_MI, L_42, L_43, ((int32_t)60));
		V_6 = L_44;
		if (!V_6)
		{
			goto IL_0182;
		}
	}
	{
		return V_6;
	}

IL_0182:
	{
		t11* L_45 = (__this->f0);
		t114 * L_46 = (__this->f3);
		IL2CPP_RUNTIME_CLASS_INIT((&t11_TI));
		t11* L_47 = m588(NULL, (t11*) &_stringLiteral1869, L_45, L_46, &m588_MI);
		t1183 * L_48 = (t1183 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1183_TI));
		m4779(L_48, L_47, &m4779_MI);
		il2cpp_codegen_raise_exception(L_48);
	}

IL_019e:
	{
		t114 * L_49 = (__this->f3);
		t11* L_50 = (__this->f0);
		t1403 * L_51 = (t1403 *)VirtFuncInvoker2< t1403 *, t11*, int32_t >::Invoke(&m11186_MI, L_49, L_50, ((int32_t)60));
		V_7 = L_51;
		if (!V_7)
		{
			goto IL_01ba;
		}
	}
	{
		return V_7;
	}

IL_01ba:
	{
		t11* L_52 = (__this->f0);
		t114 * L_53 = (__this->f3);
		IL2CPP_RUNTIME_CLASS_INIT((&t11_TI));
		t11* L_54 = m588(NULL, (t11*) &_stringLiteral1870, L_52, L_53, &m588_MI);
		t1183 * L_55 = (t1183 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1183_TI));
		m4779(L_55, L_54, &m4779_MI);
		il2cpp_codegen_raise_exception(L_55);
	}

IL_01d6:
	{
		int32_t L_56 = (__this->f2);
		int32_t L_57 = L_56;
		t5 * L_58 = Box(InitializedTypeInfo(&t1410_TI), &L_57);
		IL2CPP_RUNTIME_CLASS_INIT((&t11_TI));
		t11* L_59 = m462(NULL, (t11*) &_stringLiteral1871, L_58, &m462_MI);
		t1183 * L_60 = (t1183 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1183_TI));
		m4779(L_60, L_59, &m4779_MI);
		il2cpp_codegen_raise_exception(L_60);
	}
}
// Metadata Definition System.Reflection.MemberInfoSerializationHolder
extern Il2CppType t11_0_0_33;
FieldInfo t1665_f0_FieldInfo = 
{
	"_memberName", &t11_0_0_33, &t1665_TI, offsetof(t1665, f0), &EmptyCustomAttributesCache};
extern Il2CppType t11_0_0_33;
FieldInfo t1665_f1_FieldInfo = 
{
	"_memberSignature", &t11_0_0_33, &t1665_TI, offsetof(t1665, f1), &EmptyCustomAttributesCache};
extern Il2CppType t1410_0_0_33;
FieldInfo t1665_f2_FieldInfo = 
{
	"_memberType", &t1410_0_0_33, &t1665_TI, offsetof(t1665, f2), &EmptyCustomAttributesCache};
extern Il2CppType t114_0_0_33;
FieldInfo t1665_f3_FieldInfo = 
{
	"_reflectedType", &t114_0_0_33, &t1665_TI, offsetof(t1665, f3), &EmptyCustomAttributesCache};
extern Il2CppType t675_0_0_33;
FieldInfo t1665_f4_FieldInfo = 
{
	"_genericArguments", &t675_0_0_33, &t1665_TI, offsetof(t1665, f4), &EmptyCustomAttributesCache};
static FieldInfo* t1665_FIs[] =
{
	&t1665_f0_FieldInfo,
	&t1665_f1_FieldInfo,
	&t1665_f2_FieldInfo,
	&t1665_f3_FieldInfo,
	&t1665_f4_FieldInfo,
	NULL
};
extern Il2CppType t829_0_0_0;
extern Il2CppType t830_0_0_0;
static ParameterInfo t1665_m8547_ParameterInfos[] = 
{
	{"info", 0, 134221875, &EmptyCustomAttributesCache, &t829_0_0_0},
	{"ctx", 1, 134221876, &EmptyCustomAttributesCache, &t830_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t830 (MethodInfo* method, void* obj, void** args);
MethodInfo m8547_MI = 
{
	".ctor", (methodPointerType)&m8547, &t1665_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t830, t1665_m8547_ParameterInfos, &EmptyCustomAttributesCache, 6273, 0, 255, 2, false, false, 3295, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t829_0_0_0;
extern Il2CppType t11_0_0_0;
extern Il2CppType t114_0_0_0;
extern Il2CppType t11_0_0_0;
extern Il2CppType t1410_0_0_0;
extern Il2CppType t1410_0_0_0;
static ParameterInfo t1665_m8548_ParameterInfos[] = 
{
	{"info", 0, 134221877, &EmptyCustomAttributesCache, &t829_0_0_0},
	{"name", 1, 134221878, &EmptyCustomAttributesCache, &t11_0_0_0},
	{"klass", 2, 134221879, &EmptyCustomAttributesCache, &t114_0_0_0},
	{"signature", 3, 134221880, &EmptyCustomAttributesCache, &t11_0_0_0},
	{"type", 4, 134221881, &EmptyCustomAttributesCache, &t1410_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t5_t5_t5_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m8548_MI = 
{
	"Serialize", (methodPointerType)&m8548, &t1665_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t5_t5_t5_t110, t1665_m8548_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 5, false, false, 3296, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t829_0_0_0;
extern Il2CppType t11_0_0_0;
extern Il2CppType t114_0_0_0;
extern Il2CppType t11_0_0_0;
extern Il2CppType t1410_0_0_0;
extern Il2CppType t675_0_0_0;
static ParameterInfo t1665_m8549_ParameterInfos[] = 
{
	{"info", 0, 134221882, &EmptyCustomAttributesCache, &t829_0_0_0},
	{"name", 1, 134221883, &EmptyCustomAttributesCache, &t11_0_0_0},
	{"klass", 2, 134221884, &EmptyCustomAttributesCache, &t114_0_0_0},
	{"signature", 3, 134221885, &EmptyCustomAttributesCache, &t11_0_0_0},
	{"type", 4, 134221886, &EmptyCustomAttributesCache, &t1410_0_0_0},
	{"genericArguments", 5, 134221887, &EmptyCustomAttributesCache, &t675_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t5_t5_t5_t110_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8549_MI = 
{
	"Serialize", (methodPointerType)&m8549, &t1665_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t5_t5_t5_t110_t5, t1665_m8549_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 6, false, false, 3297, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t829_0_0_0;
extern Il2CppType t830_0_0_0;
static ParameterInfo t1665_m8550_ParameterInfos[] = 
{
	{"info", 0, 134221888, &EmptyCustomAttributesCache, &t829_0_0_0},
	{"context", 1, 134221889, &EmptyCustomAttributesCache, &t830_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t830 (MethodInfo* method, void* obj, void** args);
MethodInfo m8550_MI = 
{
	"GetObjectData", (methodPointerType)&m8550, &t1665_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t830, t1665_m8550_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 4, 2, false, false, 3298, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t830_0_0_0;
static ParameterInfo t1665_m8551_ParameterInfos[] = 
{
	{"context", 0, 134221890, &EmptyCustomAttributesCache, &t830_0_0_0},
};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5_t830 (MethodInfo* method, void* obj, void** args);
MethodInfo m8551_MI = 
{
	"GetRealObject", (methodPointerType)&m8551, &t1665_TI, &t5_0_0_0, RuntimeInvoker_t5_t830, t1665_m8551_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 5, 1, false, false, 3299, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1665_MIs[] =
{
	&m8547_MI,
	&m8548_MI,
	&m8549_MI,
	&m8550_MI,
	&m8551_MI,
	NULL
};
static MethodInfo* t1665_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m8550_MI,
	&m8551_MI,
};
extern TypeInfo t2359_TI;
static TypeInfo* t1665_ITIs[] = 
{
	&t517_TI,
	&t2359_TI,
};
static Il2CppInterfaceOffsetPair t1665_IOs[] = 
{
	{ &t517_TI, 4},
	{ &t2359_TI, 5},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1665_1_0_0;
struct t1665;
TypeInfo t1665_TI = 
{
	&g_mscorlib_dll_Image, NULL, "MemberInfoSerializationHolder", "System.Reflection", t1665_MIs, NULL, t1665_FIs, NULL, &t5_TI, NULL, NULL, &t1665_TI, t1665_ITIs, t1665_VT, &EmptyCustomAttributesCache, &t1665_TI, &t1665_0_0_0, &t1665_1_0_0, t1665_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1665), 0, -1, 0, 0, -1, 1056768, 0, false, false, false, false, false, false, false, false, false, false, false, false, 5, 0, 5, 0, 0, 6, 2, 2};
#ifndef _MSC_VER
#else
#endif
#include "t1410MD.h"



// Metadata Definition System.Reflection.MemberTypes
extern Il2CppType t110_0_0_1542;
FieldInfo t1410_f1_FieldInfo = 
{
	"value__", &t110_0_0_1542, &t1410_TI, offsetof(t1410, f1) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t1410_0_0_32854;
FieldInfo t1410_f2_FieldInfo = 
{
	"Constructor", &t1410_0_0_32854, &t1410_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1410_0_0_32854;
FieldInfo t1410_f3_FieldInfo = 
{
	"Event", &t1410_0_0_32854, &t1410_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1410_0_0_32854;
FieldInfo t1410_f4_FieldInfo = 
{
	"Field", &t1410_0_0_32854, &t1410_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1410_0_0_32854;
FieldInfo t1410_f5_FieldInfo = 
{
	"Method", &t1410_0_0_32854, &t1410_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1410_0_0_32854;
FieldInfo t1410_f6_FieldInfo = 
{
	"Property", &t1410_0_0_32854, &t1410_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1410_0_0_32854;
FieldInfo t1410_f7_FieldInfo = 
{
	"TypeInfo", &t1410_0_0_32854, &t1410_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1410_0_0_32854;
FieldInfo t1410_f8_FieldInfo = 
{
	"Custom", &t1410_0_0_32854, &t1410_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1410_0_0_32854;
FieldInfo t1410_f9_FieldInfo = 
{
	"NestedType", &t1410_0_0_32854, &t1410_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1410_0_0_32854;
FieldInfo t1410_f10_FieldInfo = 
{
	"All", &t1410_0_0_32854, &t1410_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t1410_FIs[] =
{
	&t1410_f1_FieldInfo,
	&t1410_f2_FieldInfo,
	&t1410_f3_FieldInfo,
	&t1410_f4_FieldInfo,
	&t1410_f5_FieldInfo,
	&t1410_f6_FieldInfo,
	&t1410_f7_FieldInfo,
	&t1410_f8_FieldInfo,
	&t1410_f9_FieldInfo,
	&t1410_f10_FieldInfo,
	NULL
};
static const int32_t t1410_f2_DefaultValueData = 1;
static Il2CppFieldDefaultValueEntry t1410_f2_DefaultValue = 
{
	&t1410_f2_FieldInfo, { (char*)&t1410_f2_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1410_f3_DefaultValueData = 2;
static Il2CppFieldDefaultValueEntry t1410_f3_DefaultValue = 
{
	&t1410_f3_FieldInfo, { (char*)&t1410_f3_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1410_f4_DefaultValueData = 4;
static Il2CppFieldDefaultValueEntry t1410_f4_DefaultValue = 
{
	&t1410_f4_FieldInfo, { (char*)&t1410_f4_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1410_f5_DefaultValueData = 8;
static Il2CppFieldDefaultValueEntry t1410_f5_DefaultValue = 
{
	&t1410_f5_FieldInfo, { (char*)&t1410_f5_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1410_f6_DefaultValueData = 16;
static Il2CppFieldDefaultValueEntry t1410_f6_DefaultValue = 
{
	&t1410_f6_FieldInfo, { (char*)&t1410_f6_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1410_f7_DefaultValueData = 32;
static Il2CppFieldDefaultValueEntry t1410_f7_DefaultValue = 
{
	&t1410_f7_FieldInfo, { (char*)&t1410_f7_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1410_f8_DefaultValueData = 64;
static Il2CppFieldDefaultValueEntry t1410_f8_DefaultValue = 
{
	&t1410_f8_FieldInfo, { (char*)&t1410_f8_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1410_f9_DefaultValueData = 128;
static Il2CppFieldDefaultValueEntry t1410_f9_DefaultValue = 
{
	&t1410_f9_FieldInfo, { (char*)&t1410_f9_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1410_f10_DefaultValueData = 191;
static Il2CppFieldDefaultValueEntry t1410_f10_DefaultValue = 
{
	&t1410_f10_FieldInfo, { (char*)&t1410_f10_DefaultValueData, &t110_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t1410_FDVs[] = 
{
	&t1410_f2_DefaultValue,
	&t1410_f3_DefaultValue,
	&t1410_f4_DefaultValue,
	&t1410_f5_DefaultValue,
	&t1410_f6_DefaultValue,
	&t1410_f7_DefaultValue,
	&t1410_f8_DefaultValue,
	&t1410_f9_DefaultValue,
	&t1410_f10_DefaultValue,
	NULL
};
static MethodInfo* t1410_MIs[] =
{
	NULL
};
static MethodInfo* t1410_VT[] =
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
static Il2CppInterfaceOffsetPair t1410_IOs[] = 
{
	{ &t120_TI, 4},
	{ &t121_TI, 5},
	{ &t122_TI, 21},
};
void t1410_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t446 * tmp;
		tmp = (t446 *)il2cpp_codegen_object_new (&t446_TI);
		m1932(tmp, &m1932_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t576 * tmp;
		tmp = (t576 *)il2cpp_codegen_object_new (&t576_TI);
		m2699(tmp, true, &m2699_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1410__CustomAttributeCache = {
2,
NULL,
&t1410_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1410_1_0_0;
extern CustomAttributesCache t1410__CustomAttributeCache;
TypeInfo t1410_TI = 
{
	&g_mscorlib_dll_Image, NULL, "MemberTypes", "System.Reflection", t1410_MIs, NULL, t1410_FIs, NULL, &t18_TI, NULL, NULL, &t110_TI, NULL, t1410_VT, &t1410__CustomAttributeCache, &t110_TI, &t1410_0_0_0, &t1410_1_0_0, t1410_IOs, NULL, NULL, t1410_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1410)+ sizeof (Il2CppObject), sizeof (int32_t), sizeof(int32_t), 0, 0, -1, 8449, 0, true, false, false, true, false, false, false, false, false, false, false, false, 0, 0, 10, 0, 0, 23, 0, 3};
#ifndef _MSC_VER
#else
#endif
#include "t1615MD.h"



// Metadata Definition System.Reflection.MethodAttributes
extern Il2CppType t110_0_0_1542;
FieldInfo t1615_f1_FieldInfo = 
{
	"value__", &t110_0_0_1542, &t1615_TI, offsetof(t1615, f1) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t1615_0_0_32854;
FieldInfo t1615_f2_FieldInfo = 
{
	"MemberAccessMask", &t1615_0_0_32854, &t1615_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1615_0_0_32854;
FieldInfo t1615_f3_FieldInfo = 
{
	"PrivateScope", &t1615_0_0_32854, &t1615_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1615_0_0_32854;
FieldInfo t1615_f4_FieldInfo = 
{
	"Private", &t1615_0_0_32854, &t1615_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1615_0_0_32854;
FieldInfo t1615_f5_FieldInfo = 
{
	"FamANDAssem", &t1615_0_0_32854, &t1615_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1615_0_0_32854;
FieldInfo t1615_f6_FieldInfo = 
{
	"Assembly", &t1615_0_0_32854, &t1615_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1615_0_0_32854;
FieldInfo t1615_f7_FieldInfo = 
{
	"Family", &t1615_0_0_32854, &t1615_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1615_0_0_32854;
FieldInfo t1615_f8_FieldInfo = 
{
	"FamORAssem", &t1615_0_0_32854, &t1615_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1615_0_0_32854;
FieldInfo t1615_f9_FieldInfo = 
{
	"Public", &t1615_0_0_32854, &t1615_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1615_0_0_32854;
FieldInfo t1615_f10_FieldInfo = 
{
	"Static", &t1615_0_0_32854, &t1615_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1615_0_0_32854;
FieldInfo t1615_f11_FieldInfo = 
{
	"Final", &t1615_0_0_32854, &t1615_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1615_0_0_32854;
FieldInfo t1615_f12_FieldInfo = 
{
	"Virtual", &t1615_0_0_32854, &t1615_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1615_0_0_32854;
FieldInfo t1615_f13_FieldInfo = 
{
	"HideBySig", &t1615_0_0_32854, &t1615_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1615_0_0_32854;
FieldInfo t1615_f14_FieldInfo = 
{
	"VtableLayoutMask", &t1615_0_0_32854, &t1615_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1615_0_0_32854;
FieldInfo t1615_f15_FieldInfo = 
{
	"CheckAccessOnOverride", &t1615_0_0_32854, &t1615_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1615_0_0_32854;
FieldInfo t1615_f16_FieldInfo = 
{
	"ReuseSlot", &t1615_0_0_32854, &t1615_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1615_0_0_32854;
FieldInfo t1615_f17_FieldInfo = 
{
	"NewSlot", &t1615_0_0_32854, &t1615_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1615_0_0_32854;
FieldInfo t1615_f18_FieldInfo = 
{
	"Abstract", &t1615_0_0_32854, &t1615_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1615_0_0_32854;
FieldInfo t1615_f19_FieldInfo = 
{
	"SpecialName", &t1615_0_0_32854, &t1615_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1615_0_0_32854;
FieldInfo t1615_f20_FieldInfo = 
{
	"PinvokeImpl", &t1615_0_0_32854, &t1615_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1615_0_0_32854;
FieldInfo t1615_f21_FieldInfo = 
{
	"UnmanagedExport", &t1615_0_0_32854, &t1615_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1615_0_0_32854;
FieldInfo t1615_f22_FieldInfo = 
{
	"RTSpecialName", &t1615_0_0_32854, &t1615_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1615_0_0_32854;
FieldInfo t1615_f23_FieldInfo = 
{
	"ReservedMask", &t1615_0_0_32854, &t1615_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1615_0_0_32854;
FieldInfo t1615_f24_FieldInfo = 
{
	"HasSecurity", &t1615_0_0_32854, &t1615_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1615_0_0_32854;
FieldInfo t1615_f25_FieldInfo = 
{
	"RequireSecObject", &t1615_0_0_32854, &t1615_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t1615_FIs[] =
{
	&t1615_f1_FieldInfo,
	&t1615_f2_FieldInfo,
	&t1615_f3_FieldInfo,
	&t1615_f4_FieldInfo,
	&t1615_f5_FieldInfo,
	&t1615_f6_FieldInfo,
	&t1615_f7_FieldInfo,
	&t1615_f8_FieldInfo,
	&t1615_f9_FieldInfo,
	&t1615_f10_FieldInfo,
	&t1615_f11_FieldInfo,
	&t1615_f12_FieldInfo,
	&t1615_f13_FieldInfo,
	&t1615_f14_FieldInfo,
	&t1615_f15_FieldInfo,
	&t1615_f16_FieldInfo,
	&t1615_f17_FieldInfo,
	&t1615_f18_FieldInfo,
	&t1615_f19_FieldInfo,
	&t1615_f20_FieldInfo,
	&t1615_f21_FieldInfo,
	&t1615_f22_FieldInfo,
	&t1615_f23_FieldInfo,
	&t1615_f24_FieldInfo,
	&t1615_f25_FieldInfo,
	NULL
};
static const int32_t t1615_f2_DefaultValueData = 7;
static Il2CppFieldDefaultValueEntry t1615_f2_DefaultValue = 
{
	&t1615_f2_FieldInfo, { (char*)&t1615_f2_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1615_f3_DefaultValueData = 0;
static Il2CppFieldDefaultValueEntry t1615_f3_DefaultValue = 
{
	&t1615_f3_FieldInfo, { (char*)&t1615_f3_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1615_f4_DefaultValueData = 1;
static Il2CppFieldDefaultValueEntry t1615_f4_DefaultValue = 
{
	&t1615_f4_FieldInfo, { (char*)&t1615_f4_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1615_f5_DefaultValueData = 2;
static Il2CppFieldDefaultValueEntry t1615_f5_DefaultValue = 
{
	&t1615_f5_FieldInfo, { (char*)&t1615_f5_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1615_f6_DefaultValueData = 3;
static Il2CppFieldDefaultValueEntry t1615_f6_DefaultValue = 
{
	&t1615_f6_FieldInfo, { (char*)&t1615_f6_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1615_f7_DefaultValueData = 4;
static Il2CppFieldDefaultValueEntry t1615_f7_DefaultValue = 
{
	&t1615_f7_FieldInfo, { (char*)&t1615_f7_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1615_f8_DefaultValueData = 5;
static Il2CppFieldDefaultValueEntry t1615_f8_DefaultValue = 
{
	&t1615_f8_FieldInfo, { (char*)&t1615_f8_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1615_f9_DefaultValueData = 6;
static Il2CppFieldDefaultValueEntry t1615_f9_DefaultValue = 
{
	&t1615_f9_FieldInfo, { (char*)&t1615_f9_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1615_f10_DefaultValueData = 16;
static Il2CppFieldDefaultValueEntry t1615_f10_DefaultValue = 
{
	&t1615_f10_FieldInfo, { (char*)&t1615_f10_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1615_f11_DefaultValueData = 32;
static Il2CppFieldDefaultValueEntry t1615_f11_DefaultValue = 
{
	&t1615_f11_FieldInfo, { (char*)&t1615_f11_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1615_f12_DefaultValueData = 64;
static Il2CppFieldDefaultValueEntry t1615_f12_DefaultValue = 
{
	&t1615_f12_FieldInfo, { (char*)&t1615_f12_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1615_f13_DefaultValueData = 128;
static Il2CppFieldDefaultValueEntry t1615_f13_DefaultValue = 
{
	&t1615_f13_FieldInfo, { (char*)&t1615_f13_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1615_f14_DefaultValueData = 256;
static Il2CppFieldDefaultValueEntry t1615_f14_DefaultValue = 
{
	&t1615_f14_FieldInfo, { (char*)&t1615_f14_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1615_f15_DefaultValueData = 512;
static Il2CppFieldDefaultValueEntry t1615_f15_DefaultValue = 
{
	&t1615_f15_FieldInfo, { (char*)&t1615_f15_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1615_f16_DefaultValueData = 0;
static Il2CppFieldDefaultValueEntry t1615_f16_DefaultValue = 
{
	&t1615_f16_FieldInfo, { (char*)&t1615_f16_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1615_f17_DefaultValueData = 256;
static Il2CppFieldDefaultValueEntry t1615_f17_DefaultValue = 
{
	&t1615_f17_FieldInfo, { (char*)&t1615_f17_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1615_f18_DefaultValueData = 1024;
static Il2CppFieldDefaultValueEntry t1615_f18_DefaultValue = 
{
	&t1615_f18_FieldInfo, { (char*)&t1615_f18_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1615_f19_DefaultValueData = 2048;
static Il2CppFieldDefaultValueEntry t1615_f19_DefaultValue = 
{
	&t1615_f19_FieldInfo, { (char*)&t1615_f19_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1615_f20_DefaultValueData = 8192;
static Il2CppFieldDefaultValueEntry t1615_f20_DefaultValue = 
{
	&t1615_f20_FieldInfo, { (char*)&t1615_f20_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1615_f21_DefaultValueData = 8;
static Il2CppFieldDefaultValueEntry t1615_f21_DefaultValue = 
{
	&t1615_f21_FieldInfo, { (char*)&t1615_f21_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1615_f22_DefaultValueData = 4096;
static Il2CppFieldDefaultValueEntry t1615_f22_DefaultValue = 
{
	&t1615_f22_FieldInfo, { (char*)&t1615_f22_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1615_f23_DefaultValueData = 53248;
static Il2CppFieldDefaultValueEntry t1615_f23_DefaultValue = 
{
	&t1615_f23_FieldInfo, { (char*)&t1615_f23_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1615_f24_DefaultValueData = 16384;
static Il2CppFieldDefaultValueEntry t1615_f24_DefaultValue = 
{
	&t1615_f24_FieldInfo, { (char*)&t1615_f24_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1615_f25_DefaultValueData = 32768;
static Il2CppFieldDefaultValueEntry t1615_f25_DefaultValue = 
{
	&t1615_f25_FieldInfo, { (char*)&t1615_f25_DefaultValueData, &t110_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t1615_FDVs[] = 
{
	&t1615_f2_DefaultValue,
	&t1615_f3_DefaultValue,
	&t1615_f4_DefaultValue,
	&t1615_f5_DefaultValue,
	&t1615_f6_DefaultValue,
	&t1615_f7_DefaultValue,
	&t1615_f8_DefaultValue,
	&t1615_f9_DefaultValue,
	&t1615_f10_DefaultValue,
	&t1615_f11_DefaultValue,
	&t1615_f12_DefaultValue,
	&t1615_f13_DefaultValue,
	&t1615_f14_DefaultValue,
	&t1615_f15_DefaultValue,
	&t1615_f16_DefaultValue,
	&t1615_f17_DefaultValue,
	&t1615_f18_DefaultValue,
	&t1615_f19_DefaultValue,
	&t1615_f20_DefaultValue,
	&t1615_f21_DefaultValue,
	&t1615_f22_DefaultValue,
	&t1615_f23_DefaultValue,
	&t1615_f24_DefaultValue,
	&t1615_f25_DefaultValue,
	NULL
};
static MethodInfo* t1615_MIs[] =
{
	NULL
};
static MethodInfo* t1615_VT[] =
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
static Il2CppInterfaceOffsetPair t1615_IOs[] = 
{
	{ &t120_TI, 4},
	{ &t121_TI, 5},
	{ &t122_TI, 21},
};
void t1615_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t576 * tmp;
		tmp = (t576 *)il2cpp_codegen_object_new (&t576_TI);
		m2699(tmp, true, &m2699_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t446 * tmp;
		tmp = (t446 *)il2cpp_codegen_object_new (&t446_TI);
		m1932(tmp, &m1932_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1615__CustomAttributeCache = {
2,
NULL,
&t1615_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1615_1_0_0;
extern CustomAttributesCache t1615__CustomAttributeCache;
TypeInfo t1615_TI = 
{
	&g_mscorlib_dll_Image, NULL, "MethodAttributes", "System.Reflection", t1615_MIs, NULL, t1615_FIs, NULL, &t18_TI, NULL, NULL, &t110_TI, NULL, t1615_VT, &t1615__CustomAttributeCache, &t110_TI, &t1615_0_0_0, &t1615_1_0_0, t1615_IOs, NULL, NULL, t1615_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1615)+ sizeof (Il2CppObject), sizeof (int32_t), sizeof(int32_t), 0, 0, -1, 8449, 0, true, false, false, true, false, false, false, false, false, false, false, false, 0, 0, 25, 0, 0, 23, 0, 3};
#ifndef _MSC_VER
#else
#endif

#include "t1616.h"
extern TypeInfo t142_TI;
#include "t1616MD.h"
#include "t142MD.h"
extern MethodInfo m10821_MI;
extern MethodInfo m8554_MI;
extern MethodInfo m8556_MI;
extern MethodInfo m6835_MI;
extern MethodInfo m11498_MI;
extern MethodInfo m8332_MI;
extern MethodInfo m8163_MI;
extern MethodInfo m3547_MI;


 void m8552 (t774 * __this, MethodInfo* method){
	{
		m6844(__this, &m6844_MI);
		return;
	}
}
extern MethodInfo m8553_MI;
 t774 * m8553 (t5 * __this, t1616  p0, MethodInfo* method){
	{
		t124 L_0 = m10821((&p0), &m10821_MI);
		t774 * L_1 = m8554(NULL, L_0, (((t124_SFs*)InitializedTypeInfo(&t124_TI)->static_fields)->f1), &m8554_MI);
		return L_1;
	}
}
 t774 * m8554 (t5 * __this, t124 p0, t124 p1, MethodInfo* method){
	t774 * V_0 = {0};
	{
		bool L_0 = m3595(NULL, p0, (((t124_SFs*)InitializedTypeInfo(&t124_TI)->static_fields)->f1), &m3595_MI);
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		t160 * L_1 = (t160 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t160_TI));
		m2582(L_1, (t11*) &_stringLiteral1858, &m2582_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0018:
	{
		t774 * L_2 = m8556(NULL, p0, p1, &m8556_MI);
		V_0 = L_2;
		if (V_0)
		{
			goto IL_002e;
		}
	}
	{
		t160 * L_3 = (t160 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t160_TI));
		m2582(L_3, (t11*) &_stringLiteral1858, &m2582_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_002e:
	{
		return V_0;
	}
}
extern MethodInfo m8555_MI;
 t774 * m8555 (t5 * __this, t1616  p0, MethodInfo* method){
	t774 * V_0 = {0};
	t114 * V_1 = {0};
	{
		t124 L_0 = m10821((&p0), &m10821_MI);
		t774 * L_1 = m8554(NULL, L_0, (((t124_SFs*)InitializedTypeInfo(&t124_TI)->static_fields)->f1), &m8554_MI);
		V_0 = L_1;
		t114 * L_2 = (t114 *)VirtFuncInvoker0< t114 * >::Invoke(&m3584_MI, V_0);
		V_1 = L_2;
		bool L_3 = (bool)VirtFuncInvoker0< bool >::Invoke(&m6838_MI, V_1);
		if (L_3)
		{
			goto IL_0029;
		}
	}
	{
		bool L_4 = (bool)VirtFuncInvoker0< bool >::Invoke(&m6835_MI, V_1);
		if (!L_4)
		{
			goto IL_0034;
		}
	}

IL_0029:
	{
		t160 * L_5 = (t160 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t160_TI));
		m2582(L_5, (t11*) &_stringLiteral1872, &m2582_MI);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0034:
	{
		return V_0;
	}
}
 t774 * m8556 (t5 * __this, t124 p0, t124 p1, MethodInfo* method){
	typedef t774 * (*m8556_ftn) (t124, t124);
	static m8556_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m8556_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MethodBase::GetMethodFromHandleInternalType(System.IntPtr,System.IntPtr)");
	return _il2cpp_icall_func(p0, p1);
}
 int32_t m8557 (t774 * __this, MethodInfo* method){
	t776* V_0 = {0};
	{
		t776* L_0 = (t776*)VirtFuncInvoker0< t776* >::Invoke(&m3586_MI, __this);
		V_0 = L_0;
		if (V_0)
		{
			goto IL_000c;
		}
	}
	{
		return 0;
	}

IL_000c:
	{
		return (((int32_t)(((t107 *)V_0)->max_length)));
	}
}
 t5 * m8558 (t774 * __this, t5 * p0, t168* p1, MethodInfo* method){
	{
		t5 * L_0 = (t5 *)VirtFuncInvoker5< t5 *, t5 *, int32_t, t769 *, t168*, t771 * >::Invoke(&m11498_MI, __this, p0, 0, (t769 *)NULL, p1, (t771 *)NULL);
		return L_0;
	}
}
 int32_t m8559 (t774 * __this, MethodInfo* method){
	{
		return (int32_t)(1);
	}
}
 bool m8560 (t774 * __this, MethodInfo* method){
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m11177_MI, __this);
		return ((((int32_t)((int32_t)((int32_t)L_0&(int32_t)7))) == ((int32_t)6))? 1 : 0);
	}
}
 bool m3598 (t774 * __this, MethodInfo* method){
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m11177_MI, __this);
		return ((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)((int32_t)16)))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
 bool m8561 (t774 * __this, MethodInfo* method){
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m11177_MI, __this);
		return ((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)((int32_t)64)))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
 int32_t m8562 (t774 * __this, t5 * p0, int32_t p1, bool p2, MethodInfo* method){
	t1625 * V_0 = {0};
	t1610 * V_1 = {0};
	{
		if (!((t1625 *)IsInst(__this, InitializedTypeInfo(&t1625_TI))))
		{
			goto IL_0019;
		}
	}
	{
		V_0 = ((t1625 *)Castclass(__this, InitializedTypeInfo(&t1625_TI)));
		int32_t L_0 = (int32_t)VirtFuncInvoker3< int32_t, t5 *, int32_t, bool >::Invoke(&m8332_MI, V_0, p0, p1, p2);
		return L_0;
	}

IL_0019:
	{
		if (!((t1610 *)IsInst(__this, InitializedTypeInfo(&t1610_TI))))
		{
			goto IL_0032;
		}
	}
	{
		V_1 = ((t1610 *)Castclass(__this, InitializedTypeInfo(&t1610_TI)));
		int32_t L_1 = (int32_t)VirtFuncInvoker3< int32_t, t5 *, int32_t, bool >::Invoke(&m8163_MI, V_1, p0, p1, p2);
		return L_1;
	}

IL_0032:
	{
		t142 * L_2 = (t142 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t142_TI));
		m3547(L_2, (t11*) &_stringLiteral1873, &m3547_MI);
		il2cpp_codegen_raise_exception(L_2);
	}
}
 t675* m8563 (t774 * __this, MethodInfo* method){
	{
		t491 * L_0 = (t491 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t491_TI));
		m2164(L_0, &m2164_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
 bool m8564 (t774 * __this, MethodInfo* method){
	{
		return 0;
	}
}
 bool m8565 (t774 * __this, MethodInfo* method){
	{
		return 0;
	}
}
 bool m8566 (t774 * __this, MethodInfo* method){
	{
		return 0;
	}
}
// Metadata Definition System.Reflection.MethodBase
extern MethodInfo m11499_MI;
static PropertyInfo t774____MethodHandle_PropertyInfo = 
{
	&t774_TI, "MethodHandle", &m11499_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t774____Attributes_PropertyInfo = 
{
	&t774_TI, "Attributes", &m11177_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t774____CallingConvention_PropertyInfo = 
{
	&t774_TI, "CallingConvention", &m8559_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t774____IsPublic_PropertyInfo = 
{
	&t774_TI, "IsPublic", &m8560_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t774____IsStatic_PropertyInfo = 
{
	&t774_TI, "IsStatic", &m3598_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t774____IsVirtual_PropertyInfo = 
{
	&t774_TI, "IsVirtual", &m8561_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t774____ContainsGenericParameters_PropertyInfo = 
{
	&t774_TI, "ContainsGenericParameters", &m8564_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t774____IsGenericMethodDefinition_PropertyInfo = 
{
	&t774_TI, "IsGenericMethodDefinition", &m8565_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t774____IsGenericMethod_PropertyInfo = 
{
	&t774_TI, "IsGenericMethod", &m8566_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t774_PIs[] =
{
	&t774____MethodHandle_PropertyInfo,
	&t774____Attributes_PropertyInfo,
	&t774____CallingConvention_PropertyInfo,
	&t774____IsPublic_PropertyInfo,
	&t774____IsStatic_PropertyInfo,
	&t774____IsVirtual_PropertyInfo,
	&t774____ContainsGenericParameters_PropertyInfo,
	&t774____IsGenericMethodDefinition_PropertyInfo,
	&t774____IsGenericMethod_PropertyInfo,
	NULL
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m8552_MI = 
{
	".ctor", (methodPointerType)&m8552, &t774_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, false, 3300, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1616_0_0_0;
extern Il2CppType t1616_0_0_0;
static ParameterInfo t774_m8553_ParameterInfos[] = 
{
	{"handle", 0, 134221891, &EmptyCustomAttributesCache, &t1616_0_0_0},
};
extern Il2CppType t774_0_0_0;
extern void* RuntimeInvoker_t5_t1616 (MethodInfo* method, void* obj, void** args);
MethodInfo m8553_MI = 
{
	"GetMethodFromHandleNoGenericCheck", (methodPointerType)&m8553, &t774_TI, &t774_0_0_0, RuntimeInvoker_t5_t1616, t774_m8553_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, false, 3301, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t774_m8554_ParameterInfos[] = 
{
	{"handle", 0, 134221892, &EmptyCustomAttributesCache, &t124_0_0_0},
	{"declaringType", 1, 134221893, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t774_0_0_0;
extern void* RuntimeInvoker_t5_t124_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m8554_MI = 
{
	"GetMethodFromIntPtr", (methodPointerType)&m8554, &t774_TI, &t774_0_0_0, RuntimeInvoker_t5_t124_t124, t774_m8554_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 2, false, false, 3302, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1616_0_0_0;
static ParameterInfo t774_m8555_ParameterInfos[] = 
{
	{"handle", 0, 134221894, &EmptyCustomAttributesCache, &t1616_0_0_0},
};
extern Il2CppType t774_0_0_0;
extern void* RuntimeInvoker_t5_t1616 (MethodInfo* method, void* obj, void** args);
MethodInfo m8555_MI = 
{
	"GetMethodFromHandle", (methodPointerType)&m8555, &t774_TI, &t774_0_0_0, RuntimeInvoker_t5_t1616, t774_m8555_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 3303, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t774_m8556_ParameterInfos[] = 
{
	{"method_handle", 0, 134221895, &EmptyCustomAttributesCache, &t124_0_0_0},
	{"type_handle", 1, 134221896, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t774_0_0_0;
extern void* RuntimeInvoker_t5_t124_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m8556_MI = 
{
	"GetMethodFromHandleInternalType", (methodPointerType)&m8556, &t774_TI, &t774_0_0_0, RuntimeInvoker_t5_t124_t124, t774_m8556_ParameterInfos, &EmptyCustomAttributesCache, 145, 4096, 255, 2, false, false, 3304, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t776_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m3586_MI = 
{
	"GetParameters", NULL, &t774_TI, &t776_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 1478, 0, 14, 0, false, false, 3305, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m8557_MI = 
{
	"GetParameterCount", (methodPointerType)&m8557, &t774_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 451, 0, 15, 0, false, false, 3306, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t5_0_0_0;
extern Il2CppType t168_0_0_0;
static ParameterInfo t774_m8558_ParameterInfos[] = 
{
	{"obj", 0, 134221897, &EmptyCustomAttributesCache, &t5_0_0_0},
	{"parameters", 1, 134221898, &EmptyCustomAttributesCache, &t168_0_0_0},
};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5_t5_t5 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t774__CustomAttributeCache_m8558;
MethodInfo m8558_MI = 
{
	"Invoke", (methodPointerType)&m8558, &t774_TI, &t5_0_0_0, RuntimeInvoker_t5_t5_t5, t774_m8558_ParameterInfos, &t774__CustomAttributeCache_m8558, 486, 0, 16, 2, false, false, 3307, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t5_0_0_0;
extern Il2CppType t768_0_0_0;
extern Il2CppType t769_0_0_0;
extern Il2CppType t168_0_0_0;
extern Il2CppType t771_0_0_0;
static ParameterInfo t774_m11498_ParameterInfos[] = 
{
	{"obj", 0, 134221899, &EmptyCustomAttributesCache, &t5_0_0_0},
	{"invokeAttr", 1, 134221900, &EmptyCustomAttributesCache, &t768_0_0_0},
	{"binder", 2, 134221901, &EmptyCustomAttributesCache, &t769_0_0_0},
	{"parameters", 3, 134221902, &EmptyCustomAttributesCache, &t168_0_0_0},
	{"culture", 4, 134221903, &EmptyCustomAttributesCache, &t771_0_0_0},
};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5_t5_t110_t5_t5_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m11498_MI = 
{
	"Invoke", NULL, &t774_TI, &t5_0_0_0, RuntimeInvoker_t5_t5_t110_t5_t5_t5, t774_m11498_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 17, 5, false, false, 3308, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1616_0_0_0;
extern void* RuntimeInvoker_t1616 (MethodInfo* method, void* obj, void** args);
MethodInfo m11499_MI = 
{
	"get_MethodHandle", NULL, &t774_TI, &t1616_0_0_0, RuntimeInvoker_t1616, NULL, &EmptyCustomAttributesCache, 3526, 0, 18, 0, false, false, 3309, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1615_0_0_0;
extern void* RuntimeInvoker_t1615 (MethodInfo* method, void* obj, void** args);
MethodInfo m11177_MI = 
{
	"get_Attributes", NULL, &t774_TI, &t1615_0_0_0, RuntimeInvoker_t1615, NULL, &EmptyCustomAttributesCache, 3526, 0, 19, 0, false, false, 3310, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1411_0_0_0;
extern void* RuntimeInvoker_t1411 (MethodInfo* method, void* obj, void** args);
MethodInfo m8559_MI = 
{
	"get_CallingConvention", (methodPointerType)&m8559, &t774_TI, &t1411_0_0_0, RuntimeInvoker_t1411, NULL, &EmptyCustomAttributesCache, 2502, 0, 20, 0, false, false, 3311, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
MethodInfo m8560_MI = 
{
	"get_IsPublic", (methodPointerType)&m8560, &t774_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2534, 0, 21, 0, false, false, 3312, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
MethodInfo m3598_MI = 
{
	"get_IsStatic", (methodPointerType)&m3598, &t774_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2534, 0, 22, 0, false, false, 3313, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
MethodInfo m8561_MI = 
{
	"get_IsVirtual", (methodPointerType)&m8561, &t774_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2534, 0, 23, 0, false, false, 3314, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t5_0_0_0;
extern Il2CppType t110_0_0_0;
extern Il2CppType t108_0_0_0;
static ParameterInfo t774_m8562_ParameterInfos[] = 
{
	{"obj", 0, 134221904, &EmptyCustomAttributesCache, &t5_0_0_0},
	{"table", 1, 134221905, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"inc", 2, 134221906, &EmptyCustomAttributesCache, &t108_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5_t110_t111 (MethodInfo* method, void* obj, void** args);
MethodInfo m8562_MI = 
{
	"get_next_table_index", (methodPointerType)&m8562, &t774_TI, &t110_0_0_0, RuntimeInvoker_t110_t5_t110_t111, t774_m8562_ParameterInfos, &EmptyCustomAttributesCache, 451, 0, 24, 3, false, false, 3315, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t675_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t774__CustomAttributeCache_m8563;
MethodInfo m8563_MI = 
{
	"GetGenericArguments", (methodPointerType)&m8563, &t774_TI, &t675_0_0_0, RuntimeInvoker_t5, NULL, &t774__CustomAttributeCache_m8563, 454, 0, 25, 0, false, false, 3316, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
MethodInfo m8564_MI = 
{
	"get_ContainsGenericParameters", (methodPointerType)&m8564, &t774_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2502, 0, 26, 0, false, false, 3317, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
MethodInfo m8565_MI = 
{
	"get_IsGenericMethodDefinition", (methodPointerType)&m8565, &t774_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2502, 0, 27, 0, false, false, 3318, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
MethodInfo m8566_MI = 
{
	"get_IsGenericMethod", (methodPointerType)&m8566, &t774_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2502, 0, 28, 0, false, false, 3319, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t774_MIs[] =
{
	&m8552_MI,
	&m8553_MI,
	&m8554_MI,
	&m8555_MI,
	&m8556_MI,
	&m3586_MI,
	&m8557_MI,
	&m8558_MI,
	&m11498_MI,
	&m11499_MI,
	&m11177_MI,
	&m8559_MI,
	&m8560_MI,
	&m3598_MI,
	&m8561_MI,
	&m8562_MI,
	&m8563_MI,
	&m8564_MI,
	&m8565_MI,
	&m8566_MI,
	NULL
};
static MethodInfo* t774_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m3557_MI,
	&m10990_MI,
	NULL,
	NULL,
	NULL,
	NULL,
	&m6845_MI,
	NULL,
	NULL,
	NULL,
	NULL,
	&m8557_MI,
	&m8558_MI,
	NULL,
	NULL,
	NULL,
	&m8559_MI,
	&m8560_MI,
	&m3598_MI,
	&m8561_MI,
	&m8562_MI,
	&m8563_MI,
	&m8564_MI,
	&m8565_MI,
	&m8566_MI,
};
static TypeInfo* t774_ITIs[] = 
{
	&t2343_TI,
};
static Il2CppInterfaceOffsetPair t774_IOs[] = 
{
	{ &t1990_TI, 4},
	{ &t2247_TI, 6},
	{ &t2343_TI, 14},
};
void t774_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t1697 * tmp;
		tmp = (t1697 *)il2cpp_codegen_object_new (&t1697_TI);
		m8786(tmp, 0, &m8786_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t1699 * tmp;
		tmp = (t1699 *)il2cpp_codegen_object_new (&t1699_TI);
		m8787(tmp, il2cpp_codegen_type_get_object(InitializedTypeInfo(&t2343_TI)), &m8787_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		t576 * tmp;
		tmp = (t576 *)il2cpp_codegen_object_new (&t576_TI);
		m2699(tmp, true, &m2699_MI);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
}
void t774_CustomAttributesCacheGenerator_m8558(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t1553 * tmp;
		tmp = (t1553 *)il2cpp_codegen_object_new (&t1553_TI);
		m7614(tmp, &m7614_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t488 * tmp;
		tmp = (t488 *)il2cpp_codegen_object_new (&t488_TI);
		m2155(tmp, &m2155_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
void t774_CustomAttributesCacheGenerator_m8563(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t576 * tmp;
		tmp = (t576 *)il2cpp_codegen_object_new (&t576_TI);
		m2699(tmp, true, &m2699_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t774__CustomAttributeCache = {
3,
NULL,
&t774_CustomAttributesCacheGenerator
};
CustomAttributesCache t774__CustomAttributeCache_m8558 = {
2,
NULL,
&t774_CustomAttributesCacheGenerator_m8558
};
CustomAttributesCache t774__CustomAttributeCache_m8563 = {
1,
NULL,
&t774_CustomAttributesCacheGenerator_m8563
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t774_1_0_0;
struct t774;
extern CustomAttributesCache t774__CustomAttributeCache;
extern CustomAttributesCache t774__CustomAttributeCache_m8558;
extern CustomAttributesCache t774__CustomAttributeCache_m8563;
TypeInfo t774_TI = 
{
	&g_mscorlib_dll_Image, NULL, "MethodBase", "System.Reflection", t774_MIs, t774_PIs, NULL, NULL, &t450_TI, NULL, NULL, &t774_TI, t774_ITIs, t774_VT, &t774__CustomAttributeCache, &t774_TI, &t774_0_0_0, &t774_1_0_0, t774_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t774), 0, -1, 0, 0, -1, 1056897, 0, false, false, false, false, false, false, false, false, false, false, false, false, 20, 9, 0, 0, 0, 29, 1, 3};
#include "t1639.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1639_TI;
#include "t1639MD.h"



// Metadata Definition System.Reflection.MethodImplAttributes
extern Il2CppType t110_0_0_1542;
FieldInfo t1639_f1_FieldInfo = 
{
	"value__", &t110_0_0_1542, &t1639_TI, offsetof(t1639, f1) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t1639_0_0_32854;
FieldInfo t1639_f2_FieldInfo = 
{
	"CodeTypeMask", &t1639_0_0_32854, &t1639_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1639_0_0_32854;
FieldInfo t1639_f3_FieldInfo = 
{
	"IL", &t1639_0_0_32854, &t1639_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1639_0_0_32854;
FieldInfo t1639_f4_FieldInfo = 
{
	"Native", &t1639_0_0_32854, &t1639_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1639_0_0_32854;
FieldInfo t1639_f5_FieldInfo = 
{
	"OPTIL", &t1639_0_0_32854, &t1639_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1639_0_0_32854;
FieldInfo t1639_f6_FieldInfo = 
{
	"Runtime", &t1639_0_0_32854, &t1639_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1639_0_0_32854;
FieldInfo t1639_f7_FieldInfo = 
{
	"ManagedMask", &t1639_0_0_32854, &t1639_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1639_0_0_32854;
FieldInfo t1639_f8_FieldInfo = 
{
	"Unmanaged", &t1639_0_0_32854, &t1639_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1639_0_0_32854;
FieldInfo t1639_f9_FieldInfo = 
{
	"Managed", &t1639_0_0_32854, &t1639_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1639_0_0_32854;
FieldInfo t1639_f10_FieldInfo = 
{
	"ForwardRef", &t1639_0_0_32854, &t1639_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1639_0_0_32854;
FieldInfo t1639_f11_FieldInfo = 
{
	"PreserveSig", &t1639_0_0_32854, &t1639_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1639_0_0_32854;
FieldInfo t1639_f12_FieldInfo = 
{
	"InternalCall", &t1639_0_0_32854, &t1639_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1639_0_0_32854;
FieldInfo t1639_f13_FieldInfo = 
{
	"Synchronized", &t1639_0_0_32854, &t1639_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1639_0_0_32854;
FieldInfo t1639_f14_FieldInfo = 
{
	"NoInlining", &t1639_0_0_32854, &t1639_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1639_0_0_32854;
FieldInfo t1639_f15_FieldInfo = 
{
	"MaxMethodImplVal", &t1639_0_0_32854, &t1639_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t1639_FIs[] =
{
	&t1639_f1_FieldInfo,
	&t1639_f2_FieldInfo,
	&t1639_f3_FieldInfo,
	&t1639_f4_FieldInfo,
	&t1639_f5_FieldInfo,
	&t1639_f6_FieldInfo,
	&t1639_f7_FieldInfo,
	&t1639_f8_FieldInfo,
	&t1639_f9_FieldInfo,
	&t1639_f10_FieldInfo,
	&t1639_f11_FieldInfo,
	&t1639_f12_FieldInfo,
	&t1639_f13_FieldInfo,
	&t1639_f14_FieldInfo,
	&t1639_f15_FieldInfo,
	NULL
};
static const int32_t t1639_f2_DefaultValueData = 3;
static Il2CppFieldDefaultValueEntry t1639_f2_DefaultValue = 
{
	&t1639_f2_FieldInfo, { (char*)&t1639_f2_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1639_f3_DefaultValueData = 0;
static Il2CppFieldDefaultValueEntry t1639_f3_DefaultValue = 
{
	&t1639_f3_FieldInfo, { (char*)&t1639_f3_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1639_f4_DefaultValueData = 1;
static Il2CppFieldDefaultValueEntry t1639_f4_DefaultValue = 
{
	&t1639_f4_FieldInfo, { (char*)&t1639_f4_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1639_f5_DefaultValueData = 2;
static Il2CppFieldDefaultValueEntry t1639_f5_DefaultValue = 
{
	&t1639_f5_FieldInfo, { (char*)&t1639_f5_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1639_f6_DefaultValueData = 3;
static Il2CppFieldDefaultValueEntry t1639_f6_DefaultValue = 
{
	&t1639_f6_FieldInfo, { (char*)&t1639_f6_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1639_f7_DefaultValueData = 4;
static Il2CppFieldDefaultValueEntry t1639_f7_DefaultValue = 
{
	&t1639_f7_FieldInfo, { (char*)&t1639_f7_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1639_f8_DefaultValueData = 4;
static Il2CppFieldDefaultValueEntry t1639_f8_DefaultValue = 
{
	&t1639_f8_FieldInfo, { (char*)&t1639_f8_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1639_f9_DefaultValueData = 0;
static Il2CppFieldDefaultValueEntry t1639_f9_DefaultValue = 
{
	&t1639_f9_FieldInfo, { (char*)&t1639_f9_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1639_f10_DefaultValueData = 16;
static Il2CppFieldDefaultValueEntry t1639_f10_DefaultValue = 
{
	&t1639_f10_FieldInfo, { (char*)&t1639_f10_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1639_f11_DefaultValueData = 128;
static Il2CppFieldDefaultValueEntry t1639_f11_DefaultValue = 
{
	&t1639_f11_FieldInfo, { (char*)&t1639_f11_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1639_f12_DefaultValueData = 4096;
static Il2CppFieldDefaultValueEntry t1639_f12_DefaultValue = 
{
	&t1639_f12_FieldInfo, { (char*)&t1639_f12_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1639_f13_DefaultValueData = 32;
static Il2CppFieldDefaultValueEntry t1639_f13_DefaultValue = 
{
	&t1639_f13_FieldInfo, { (char*)&t1639_f13_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1639_f14_DefaultValueData = 8;
static Il2CppFieldDefaultValueEntry t1639_f14_DefaultValue = 
{
	&t1639_f14_FieldInfo, { (char*)&t1639_f14_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1639_f15_DefaultValueData = 65535;
static Il2CppFieldDefaultValueEntry t1639_f15_DefaultValue = 
{
	&t1639_f15_FieldInfo, { (char*)&t1639_f15_DefaultValueData, &t110_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t1639_FDVs[] = 
{
	&t1639_f2_DefaultValue,
	&t1639_f3_DefaultValue,
	&t1639_f4_DefaultValue,
	&t1639_f5_DefaultValue,
	&t1639_f6_DefaultValue,
	&t1639_f7_DefaultValue,
	&t1639_f8_DefaultValue,
	&t1639_f9_DefaultValue,
	&t1639_f10_DefaultValue,
	&t1639_f11_DefaultValue,
	&t1639_f12_DefaultValue,
	&t1639_f13_DefaultValue,
	&t1639_f14_DefaultValue,
	&t1639_f15_DefaultValue,
	NULL
};
static MethodInfo* t1639_MIs[] =
{
	NULL
};
static MethodInfo* t1639_VT[] =
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
static Il2CppInterfaceOffsetPair t1639_IOs[] = 
{
	{ &t120_TI, 4},
	{ &t121_TI, 5},
	{ &t122_TI, 21},
};
void t1639_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t576 * tmp;
		tmp = (t576 *)il2cpp_codegen_object_new (&t576_TI);
		m2699(tmp, true, &m2699_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1639__CustomAttributeCache = {
1,
NULL,
&t1639_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1639_0_0_0;
extern Il2CppType t1639_1_0_0;
extern CustomAttributesCache t1639__CustomAttributeCache;
TypeInfo t1639_TI = 
{
	&g_mscorlib_dll_Image, NULL, "MethodImplAttributes", "System.Reflection", t1639_MIs, NULL, t1639_FIs, NULL, &t18_TI, NULL, NULL, &t110_TI, NULL, t1639_VT, &t1639__CustomAttributeCache, &t110_TI, &t1639_0_0_0, &t1639_1_0_0, t1639_IOs, NULL, NULL, t1639_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1639)+ sizeof (Il2CppObject), sizeof (int32_t), sizeof(int32_t), 0, 0, -1, 8449, 0, true, false, false, true, false, false, false, false, false, false, false, false, 0, 0, 15, 0, 0, 23, 0, 3};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m6831_MI;


extern MethodInfo m8567_MI;
 void m8567 (t695 * __this, MethodInfo* method){
	{
		m8552(__this, &m8552_MI);
		return;
	}
}
extern MethodInfo m8568_MI;
 int32_t m8568 (t695 * __this, MethodInfo* method){
	{
		return (int32_t)(8);
	}
}
extern MethodInfo m8569_MI;
 t114 * m8569 (t695 * __this, MethodInfo* method){
	{
		return (t114 *)NULL;
	}
}
 t695 * m8570 (t695 * __this, t675* p0, MethodInfo* method){
	{
		t114 * L_0 = m531(__this, &m531_MI);
		t11* L_1 = (t11*)VirtFuncInvoker0< t11* >::Invoke(&m6831_MI, L_0);
		t491 * L_2 = (t491 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t491_TI));
		m4781(L_2, L_1, &m4781_MI);
		il2cpp_codegen_raise_exception(L_2);
	}
}
 t675* m8571 (t695 * __this, MethodInfo* method){
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t114_TI));
		return (((t114_SFs*)InitializedTypeInfo(&t114_TI)->static_fields)->f3);
	}
}
 bool m8572 (t695 * __this, MethodInfo* method){
	{
		return 0;
	}
}
extern MethodInfo m8573_MI;
 bool m8573 (t695 * __this, MethodInfo* method){
	{
		return 0;
	}
}
extern MethodInfo m8574_MI;
 bool m8574 (t695 * __this, MethodInfo* method){
	{
		return 0;
	}
}
// Metadata Definition System.Reflection.MethodInfo
static PropertyInfo t695____MemberType_PropertyInfo = 
{
	&t695_TI, "MemberType", &m8568_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t695____ReturnType_PropertyInfo = 
{
	&t695_TI, "ReturnType", &m8569_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t695____IsGenericMethod_PropertyInfo = 
{
	&t695_TI, "IsGenericMethod", &m8572_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t695____IsGenericMethodDefinition_PropertyInfo = 
{
	&t695_TI, "IsGenericMethodDefinition", &m8573_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t695____ContainsGenericParameters_PropertyInfo = 
{
	&t695_TI, "ContainsGenericParameters", &m8574_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t695_PIs[] =
{
	&t695____MemberType_PropertyInfo,
	&t695____ReturnType_PropertyInfo,
	&t695____IsGenericMethod_PropertyInfo,
	&t695____IsGenericMethodDefinition_PropertyInfo,
	&t695____ContainsGenericParameters_PropertyInfo,
	NULL
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m8567_MI = 
{
	".ctor", (methodPointerType)&m8567, &t695_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, false, 3320, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t695_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m11500_MI = 
{
	"GetBaseDefinition", NULL, &t695_TI, &t695_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 1478, 0, 29, 0, false, false, 3321, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1410_0_0_0;
extern void* RuntimeInvoker_t1410 (MethodInfo* method, void* obj, void** args);
MethodInfo m8568_MI = 
{
	"get_MemberType", (methodPointerType)&m8568, &t695_TI, &t1410_0_0_0, RuntimeInvoker_t1410, NULL, &EmptyCustomAttributesCache, 2246, 0, 7, 0, false, false, 3322, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t114_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8569_MI = 
{
	"get_ReturnType", (methodPointerType)&m8569, &t695_TI, &t114_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2502, 0, 30, 0, false, false, 3323, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t675_0_0_0;
extern CustomAttributesCache t695__CustomAttributeCache_t695_m8570_Arg0_ParameterInfo;
static ParameterInfo t695_m8570_ParameterInfos[] = 
{
	{"typeArguments", 0, 134221907, &t695__CustomAttributeCache_t695_m8570_Arg0_ParameterInfo, &t675_0_0_0},
};
extern Il2CppType t695_0_0_0;
extern void* RuntimeInvoker_t5_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8570_MI = 
{
	"MakeGenericMethod", (methodPointerType)&m8570, &t695_TI, &t695_0_0_0, RuntimeInvoker_t5_t5, t695_m8570_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 31, 1, false, false, 3324, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t675_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t695__CustomAttributeCache_m8571;
MethodInfo m8571_MI = 
{
	"GetGenericArguments", (methodPointerType)&m8571, &t695_TI, &t675_0_0_0, RuntimeInvoker_t5, NULL, &t695__CustomAttributeCache_m8571, 198, 0, 25, 0, false, false, 3325, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
MethodInfo m8572_MI = 
{
	"get_IsGenericMethod", (methodPointerType)&m8572, &t695_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2246, 0, 28, 0, false, false, 3326, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
MethodInfo m8573_MI = 
{
	"get_IsGenericMethodDefinition", (methodPointerType)&m8573, &t695_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2246, 0, 27, 0, false, false, 3327, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
MethodInfo m8574_MI = 
{
	"get_ContainsGenericParameters", (methodPointerType)&m8574, &t695_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2246, 0, 26, 0, false, false, 3328, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t695_MIs[] =
{
	&m8567_MI,
	&m11500_MI,
	&m8568_MI,
	&m8569_MI,
	&m8570_MI,
	&m8571_MI,
	&m8572_MI,
	&m8573_MI,
	&m8574_MI,
	NULL
};
static MethodInfo* t695_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m3557_MI,
	&m10990_MI,
	NULL,
	&m8568_MI,
	NULL,
	NULL,
	&m6845_MI,
	NULL,
	NULL,
	NULL,
	NULL,
	&m8557_MI,
	&m8558_MI,
	NULL,
	NULL,
	NULL,
	&m8559_MI,
	&m8560_MI,
	&m3598_MI,
	&m8561_MI,
	&m8562_MI,
	&m8571_MI,
	&m8574_MI,
	&m8573_MI,
	&m8572_MI,
	NULL,
	&m8569_MI,
	&m8570_MI,
};
extern TypeInfo t2344_TI;
static TypeInfo* t695_ITIs[] = 
{
	&t2344_TI,
};
static Il2CppInterfaceOffsetPair t695_IOs[] = 
{
	{ &t2343_TI, 14},
	{ &t1990_TI, 4},
	{ &t2247_TI, 6},
	{ &t2344_TI, 29},
};
void t695_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t1699 * tmp;
		tmp = (t1699 *)il2cpp_codegen_object_new (&t1699_TI);
		m8787(tmp, il2cpp_codegen_type_get_object(InitializedTypeInfo(&t2344_TI)), &m8787_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t1697 * tmp;
		tmp = (t1697 *)il2cpp_codegen_object_new (&t1697_TI);
		m8786(tmp, 0, &m8786_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		t576 * tmp;
		tmp = (t576 *)il2cpp_codegen_object_new (&t576_TI);
		m2699(tmp, true, &m2699_MI);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
}
void t695_CustomAttributesCacheGenerator_t695_m8570_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t143 * tmp;
		tmp = (t143 *)il2cpp_codegen_object_new (&t143_TI);
		m551(tmp, &m551_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t695_CustomAttributesCacheGenerator_m8571(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t576 * tmp;
		tmp = (t576 *)il2cpp_codegen_object_new (&t576_TI);
		m2699(tmp, true, &m2699_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t695__CustomAttributeCache = {
3,
NULL,
&t695_CustomAttributesCacheGenerator
};
CustomAttributesCache t695__CustomAttributeCache_t695_m8570_Arg0_ParameterInfo = {
1,
NULL,
&t695_CustomAttributesCacheGenerator_t695_m8570_Arg0_ParameterInfo
};
CustomAttributesCache t695__CustomAttributeCache_m8571 = {
1,
NULL,
&t695_CustomAttributesCacheGenerator_m8571
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t695_1_0_0;
struct t695;
extern CustomAttributesCache t695__CustomAttributeCache;
extern CustomAttributesCache t695__CustomAttributeCache_m8571;
TypeInfo t695_TI = 
{
	&g_mscorlib_dll_Image, NULL, "MethodInfo", "System.Reflection", t695_MIs, t695_PIs, NULL, NULL, &t774_TI, NULL, NULL, &t695_TI, t695_ITIs, t695_VT, &t695__CustomAttributeCache, &t695_TI, &t695_0_0_0, &t695_1_0_0, t695_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t695), 0, -1, 0, 0, -1, 1056897, 0, false, false, false, false, false, false, false, false, false, false, false, false, 9, 5, 0, 0, 0, 32, 1, 4};
#include "t1666.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1666_TI;
#include "t1666MD.h"

extern MethodInfo m8575_MI;


 void m8575 (t1666 * __this, MethodInfo* method){
	{
		m460(__this, &m460_MI);
		return;
	}
}
extern MethodInfo m8576_MI;
 void m8576 (t5 * __this, MethodInfo* method){
	{
		t1666 * L_0 = (t1666 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1666_TI));
		m8575(L_0, &m8575_MI);
		((t1666_SFs*)InitializedTypeInfo(&t1666_TI)->static_fields)->f0 = L_0;
		return;
	}
}
extern MethodInfo m8577_MI;
 void m8577 (t1666 * __this, t829 * p0, t830  p1, MethodInfo* method){
	{
		return;
	}
}
// Metadata Definition System.Reflection.Missing
extern Il2CppType t1666_0_0_54;
FieldInfo t1666_f0_FieldInfo = 
{
	"Value", &t1666_0_0_54, &t1666_TI, offsetof(t1666_SFs, f0), &EmptyCustomAttributesCache};
static FieldInfo* t1666_FIs[] =
{
	&t1666_f0_FieldInfo,
	NULL
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m8575_MI = 
{
	".ctor", (methodPointerType)&m8575, &t1666_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6275, 0, 255, 0, false, false, 3329, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m8576_MI = 
{
	".cctor", (methodPointerType)&m8576, &t1666_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 3330, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t829_0_0_0;
extern Il2CppType t830_0_0_0;
static ParameterInfo t1666_m8577_ParameterInfos[] = 
{
	{"info", 0, 134221908, &EmptyCustomAttributesCache, &t829_0_0_0},
	{"context", 1, 134221909, &EmptyCustomAttributesCache, &t830_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t830 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t1666__CustomAttributeCache_m8577;
MethodInfo m8577_MI = 
{
	"System.Runtime.Serialization.ISerializable.GetObjectData", (methodPointerType)&m8577, &t1666_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t830, t1666_m8577_ParameterInfos, &t1666__CustomAttributeCache_m8577, 481, 0, 4, 2, false, false, 3331, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1666_MIs[] =
{
	&m8575_MI,
	&m8576_MI,
	&m8577_MI,
	NULL
};
static MethodInfo* t1666_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m8577_MI,
};
static TypeInfo* t1666_ITIs[] = 
{
	&t517_TI,
};
static Il2CppInterfaceOffsetPair t1666_IOs[] = 
{
	{ &t517_TI, 4},
};
void t1666_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t576 * tmp;
		tmp = (t576 *)il2cpp_codegen_object_new (&t576_TI);
		m2699(tmp, true, &m2699_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t1666_CustomAttributesCacheGenerator_m8577(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t1430 * tmp;
		tmp = (t1430 *)il2cpp_codegen_object_new (&t1430_TI);
		m6880(tmp, &m6880_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1666__CustomAttributeCache = {
1,
NULL,
&t1666_CustomAttributesCacheGenerator
};
CustomAttributesCache t1666__CustomAttributeCache_m8577 = {
1,
NULL,
&t1666_CustomAttributesCacheGenerator_m8577
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1666_0_0_0;
extern Il2CppType t1666_1_0_0;
struct t1666;
extern CustomAttributesCache t1666__CustomAttributeCache;
extern CustomAttributesCache t1666__CustomAttributeCache_m8577;
TypeInfo t1666_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Missing", "System.Reflection", t1666_MIs, NULL, t1666_FIs, NULL, &t5_TI, NULL, NULL, &t1666_TI, t1666_ITIs, t1666_VT, &t1666__CustomAttributeCache, &t1666_TI, &t1666_0_0_0, &t1666_1_0_0, t1666_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1666), 0, -1, sizeof(t1666_SFs), 0, -1, 1057025, 0, false, false, false, false, false, false, false, false, false, true, false, false, 3, 0, 1, 0, 0, 5, 1, 1};
#ifndef _MSC_VER
#else
#endif

#include "t1667.h"
extern TypeInfo t1667_TI;
#include "t1667MD.h"
#include "t2011MD.h"
extern MethodInfo m8590_MI;
extern MethodInfo m10945_MI;
extern MethodInfo m8591_MI;
extern MethodInfo m10908_MI;
extern MethodInfo m8586_MI;
extern MethodInfo m3577_MI;
extern MethodInfo m3569_MI;
extern MethodInfo m5051_MI;


extern MethodInfo m8578_MI;
 void m8578 (t1402 * __this, MethodInfo* method){
	{
		m460(__this, &m460_MI);
		return;
	}
}
extern MethodInfo m8579_MI;
 void m8579 (t5 * __this, MethodInfo* method){
	{
		t124 L_0 = { &m8590_MI };
		t1667 * L_1 = (t1667 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1667_TI));
		m10945(L_1, NULL, L_0, &m10945_MI);
		((t1402_SFs*)InitializedTypeInfo(&t1402_TI)->static_fields)->f1 = L_1;
		t124 L_2 = { &m8591_MI };
		t1667 * L_3 = (t1667 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1667_TI));
		m10945(L_3, NULL, L_2, &m10945_MI);
		((t1402_SFs*)InitializedTypeInfo(&t1402_TI)->static_fields)->f2 = L_3;
		return;
	}
}
 t1194 * m8580 (t1402 * __this, MethodInfo* method){
	{
		t1194 * L_0 = (__this->f4);
		return L_0;
	}
}
extern MethodInfo m8581_MI;
 t11* m8581 (t1402 * __this, MethodInfo* method){
	{
		t11* L_0 = (__this->f6);
		return L_0;
	}
}
 t11* m8582 (t1402 * __this, MethodInfo* method){
	{
		t11* L_0 = (__this->f7);
		return L_0;
	}
}
extern MethodInfo m8583_MI;
 t168* m8583 (t1402 * __this, t114 * p0, bool p1, MethodInfo* method){
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1989_TI));
		t168* L_0 = m10637(NULL, __this, p0, p1, &m10637_MI);
		return L_0;
	}
}
extern MethodInfo m8584_MI;
 void m8584 (t1402 * __this, t829 * p0, t830  p1, MethodInfo* method){
	{
		if (p0)
		{
			goto IL_000e;
		}
	}
	{
		t484 * L_0 = (t484 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t484_TI));
		m3596(L_0, (t11*) &_stringLiteral248, &m3596_MI);
		il2cpp_codegen_raise_exception(L_0);
	}

IL_000e:
	{
		m10908(NULL, __this, p0, p1, &m10908_MI);
		return;
	}
}
extern MethodInfo m8585_MI;
 t114 * m8585 (t1402 * __this, t11* p0, MethodInfo* method){
	{
		t114 * L_0 = (t114 *)VirtFuncInvoker3< t114 *, t11*, bool, bool >::Invoke(&m8586_MI, __this, p0, 0, 0);
		return L_0;
	}
}
 t114 * m8586 (t1402 * __this, t11* p0, bool p1, bool p2, MethodInfo* method){
	{
		if (p0)
		{
			goto IL_000e;
		}
	}
	{
		t484 * L_0 = (t484 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t484_TI));
		m3596(L_0, (t11*) &_stringLiteral1594, &m3596_MI);
		il2cpp_codegen_raise_exception(L_0);
	}

IL_000e:
	{
		IL2CPP_RUNTIME_CLASS_INIT((&t11_TI));
		bool L_1 = m2356(NULL, p0, (((t11_SFs*)(&t11_TI)->static_fields)->f2), &m2356_MI);
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		t160 * L_2 = (t160 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t160_TI));
		m2582(L_2, (t11*) &_stringLiteral1874, &m2582_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0026:
	{
		t1194 * L_3 = (__this->f4);
		t114 * L_4 = m8468(L_3, __this, p0, p1, p2, &m8468_MI);
		return L_4;
	}
}
extern MethodInfo m8587_MI;
 bool m8587 (t1402 * __this, t114 * p0, bool p1, MethodInfo* method){
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1989_TI));
		bool L_0 = m10639(NULL, __this, p0, p1, &m10639_MI);
		return L_0;
	}
}
 bool m8588 (t1402 * __this, MethodInfo* method){
	{
		bool L_0 = (__this->f8);
		return L_0;
	}
}
extern MethodInfo m8589_MI;
 t11* m8589 (t1402 * __this, MethodInfo* method){
	{
		t11* L_0 = (__this->f6);
		return L_0;
	}
}
 bool m8590 (t5 * __this, t114 * p0, t5 * p1, MethodInfo* method){
	t11* V_0 = {0};
	{
		V_0 = ((t11*)Castclass(p1, (&t11_TI)));
		bool L_0 = m3577(V_0, (t11*) &_stringLiteral557, &m3577_MI);
		if (!L_0)
		{
			goto IL_002f;
		}
	}
	{
		t11* L_1 = (t11*)VirtFuncInvoker0< t11* >::Invoke(&m3571_MI, p0);
		int32_t L_2 = m2358(V_0, &m2358_MI);
		t11* L_3 = m2386(V_0, 0, ((int32_t)(L_2-1)), &m2386_MI);
		bool L_4 = m3569(L_1, L_3, &m3569_MI);
		return L_4;
	}

IL_002f:
	{
		t11* L_5 = (t11*)VirtFuncInvoker0< t11* >::Invoke(&m3571_MI, p0);
		IL2CPP_RUNTIME_CLASS_INIT((&t11_TI));
		bool L_6 = m2356(NULL, L_5, V_0, &m2356_MI);
		return L_6;
	}
}
 bool m8591 (t5 * __this, t114 * p0, t5 * p1, MethodInfo* method){
	t11* V_0 = {0};
	{
		V_0 = ((t11*)Castclass(p1, (&t11_TI)));
		bool L_0 = m3577(V_0, (t11*) &_stringLiteral557, &m3577_MI);
		if (!L_0)
		{
			goto IL_0039;
		}
	}
	{
		t11* L_1 = (t11*)VirtFuncInvoker0< t11* >::Invoke(&m3571_MI, p0);
		t11* L_2 = m5051(L_1, &m5051_MI);
		int32_t L_3 = m2358(V_0, &m2358_MI);
		t11* L_4 = m2386(V_0, 0, ((int32_t)(L_3-1)), &m2386_MI);
		t11* L_5 = m5051(L_4, &m5051_MI);
		bool L_6 = m3569(L_2, L_5, &m3569_MI);
		return L_6;
	}

IL_0039:
	{
		t11* L_7 = (t11*)VirtFuncInvoker0< t11* >::Invoke(&m3571_MI, p0);
		IL2CPP_RUNTIME_CLASS_INIT((&t11_TI));
		int32_t L_8 = m6376(NULL, L_7, V_0, 1, &m6376_MI);
		return ((((int32_t)L_8) == ((int32_t)0))? 1 : 0);
	}
}
// Metadata Definition System.Reflection.Module
extern Il2CppType t768_0_0_32849;
FieldInfo t1402_f0_FieldInfo = 
{
	"defaultBindingFlags", &t768_0_0_32849, &t1402_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1667_0_0_54;
FieldInfo t1402_f1_FieldInfo = 
{
	"FilterTypeName", &t1667_0_0_54, &t1402_TI, offsetof(t1402_SFs, f1), &EmptyCustomAttributesCache};
extern Il2CppType t1667_0_0_54;
FieldInfo t1402_f2_FieldInfo = 
{
	"FilterTypeNameIgnoreCase", &t1667_0_0_54, &t1402_TI, offsetof(t1402_SFs, f2), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_1;
FieldInfo t1402_f3_FieldInfo = 
{
	"_impl", &t124_0_0_1, &t1402_TI, offsetof(t1402, f3), &EmptyCustomAttributesCache};
extern Il2CppType t1194_0_0_3;
FieldInfo t1402_f4_FieldInfo = 
{
	"assembly", &t1194_0_0_3, &t1402_TI, offsetof(t1402, f4), &EmptyCustomAttributesCache};
extern Il2CppType t11_0_0_3;
FieldInfo t1402_f5_FieldInfo = 
{
	"fqname", &t11_0_0_3, &t1402_TI, offsetof(t1402, f5), &EmptyCustomAttributesCache};
extern Il2CppType t11_0_0_3;
FieldInfo t1402_f6_FieldInfo = 
{
	"name", &t11_0_0_3, &t1402_TI, offsetof(t1402, f6), &EmptyCustomAttributesCache};
extern Il2CppType t11_0_0_3;
FieldInfo t1402_f7_FieldInfo = 
{
	"scopename", &t11_0_0_3, &t1402_TI, offsetof(t1402, f7), &EmptyCustomAttributesCache};
extern Il2CppType t108_0_0_3;
FieldInfo t1402_f8_FieldInfo = 
{
	"is_resource", &t108_0_0_3, &t1402_TI, offsetof(t1402, f8), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_3;
FieldInfo t1402_f9_FieldInfo = 
{
	"token", &t110_0_0_3, &t1402_TI, offsetof(t1402, f9), &EmptyCustomAttributesCache};
static FieldInfo* t1402_FIs[] =
{
	&t1402_f0_FieldInfo,
	&t1402_f1_FieldInfo,
	&t1402_f2_FieldInfo,
	&t1402_f3_FieldInfo,
	&t1402_f4_FieldInfo,
	&t1402_f5_FieldInfo,
	&t1402_f6_FieldInfo,
	&t1402_f7_FieldInfo,
	&t1402_f8_FieldInfo,
	&t1402_f9_FieldInfo,
	NULL
};
static const int32_t t1402_f0_DefaultValueData = 28;
static Il2CppFieldDefaultValueEntry t1402_f0_DefaultValue = 
{
	&t1402_f0_FieldInfo, { (char*)&t1402_f0_DefaultValueData, &t110_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t1402_FDVs[] = 
{
	&t1402_f0_DefaultValue,
	NULL
};
static PropertyInfo t1402____Assembly_PropertyInfo = 
{
	&t1402_TI, "Assembly", &m8580_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1402____Name_PropertyInfo = 
{
	&t1402_TI, "Name", &m8581_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1402____ScopeName_PropertyInfo = 
{
	&t1402_TI, "ScopeName", &m8582_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1402_PIs[] =
{
	&t1402____Assembly_PropertyInfo,
	&t1402____Name_PropertyInfo,
	&t1402____ScopeName_PropertyInfo,
	NULL
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m8578_MI = 
{
	".ctor", (methodPointerType)&m8578, &t1402_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6275, 0, 255, 0, false, false, 3332, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m8579_MI = 
{
	".cctor", (methodPointerType)&m8579, &t1402_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 3333, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1194_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8580_MI = 
{
	"get_Assembly", (methodPointerType)&m8580, &t1402_TI, &t1194_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 3334, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t11_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8581_MI = 
{
	"get_Name", (methodPointerType)&m8581, &t1402_TI, &t11_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 3335, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t11_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8582_MI = 
{
	"get_ScopeName", (methodPointerType)&m8582, &t1402_TI, &t11_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 3336, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t114_0_0_0;
extern Il2CppType t108_0_0_0;
static ParameterInfo t1402_m8583_ParameterInfos[] = 
{
	{"attributeType", 0, 134221910, &EmptyCustomAttributesCache, &t114_0_0_0},
	{"inherit", 1, 134221911, &EmptyCustomAttributesCache, &t108_0_0_0},
};
extern Il2CppType t168_0_0_0;
extern void* RuntimeInvoker_t5_t5_t111 (MethodInfo* method, void* obj, void** args);
MethodInfo m8583_MI = 
{
	"GetCustomAttributes", (methodPointerType)&m8583, &t1402_TI, &t168_0_0_0, RuntimeInvoker_t5_t5_t111, t1402_m8583_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 7, 2, false, false, 3337, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t829_0_0_0;
extern Il2CppType t830_0_0_0;
static ParameterInfo t1402_m8584_ParameterInfos[] = 
{
	{"info", 0, 134221912, &EmptyCustomAttributesCache, &t829_0_0_0},
	{"context", 1, 134221913, &EmptyCustomAttributesCache, &t830_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t830 (MethodInfo* method, void* obj, void** args);
MethodInfo m8584_MI = 
{
	"GetObjectData", (methodPointerType)&m8584, &t1402_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t830, t1402_m8584_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 8, 2, false, false, 3338, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t11_0_0_0;
static ParameterInfo t1402_m8585_ParameterInfos[] = 
{
	{"className", 0, 134221914, &EmptyCustomAttributesCache, &t11_0_0_0},
};
extern Il2CppType t114_0_0_0;
extern void* RuntimeInvoker_t5_t5 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t1402__CustomAttributeCache_m8585;
MethodInfo m8585_MI = 
{
	"GetType", (methodPointerType)&m8585, &t1402_TI, &t114_0_0_0, RuntimeInvoker_t5_t5, t1402_m8585_ParameterInfos, &t1402__CustomAttributeCache_m8585, 454, 0, 9, 1, false, false, 3339, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t11_0_0_0;
extern Il2CppType t108_0_0_0;
extern Il2CppType t108_0_0_0;
static ParameterInfo t1402_m8586_ParameterInfos[] = 
{
	{"className", 0, 134221915, &EmptyCustomAttributesCache, &t11_0_0_0},
	{"throwOnError", 1, 134221916, &EmptyCustomAttributesCache, &t108_0_0_0},
	{"ignoreCase", 2, 134221917, &EmptyCustomAttributesCache, &t108_0_0_0},
};
extern Il2CppType t114_0_0_0;
extern void* RuntimeInvoker_t5_t5_t111_t111 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t1402__CustomAttributeCache_m8586;
MethodInfo m8586_MI = 
{
	"GetType", (methodPointerType)&m8586, &t1402_TI, &t114_0_0_0, RuntimeInvoker_t5_t5_t111_t111, t1402_m8586_ParameterInfos, &t1402__CustomAttributeCache_m8586, 454, 0, 10, 3, false, false, 3340, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t114_0_0_0;
extern Il2CppType t108_0_0_0;
static ParameterInfo t1402_m8587_ParameterInfos[] = 
{
	{"attributeType", 0, 134221918, &EmptyCustomAttributesCache, &t114_0_0_0},
	{"inherit", 1, 134221919, &EmptyCustomAttributesCache, &t108_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5_t111 (MethodInfo* method, void* obj, void** args);
MethodInfo m8587_MI = 
{
	"IsDefined", (methodPointerType)&m8587, &t1402_TI, &t108_0_0_0, RuntimeInvoker_t108_t5_t111, t1402_m8587_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 11, 2, false, false, 3341, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
MethodInfo m8588_MI = 
{
	"IsResource", (methodPointerType)&m8588, &t1402_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, false, 3342, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t11_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8589_MI = 
{
	"ToString", (methodPointerType)&m8589, &t1402_TI, &t11_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 198, 0, 3, 0, false, false, 3343, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t114_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t1402_m8590_ParameterInfos[] = 
{
	{"m", 0, 134221920, &EmptyCustomAttributesCache, &t114_0_0_0},
	{"filterCriteria", 1, 134221921, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8590_MI = 
{
	"filter_by_type_name", (methodPointerType)&m8590, &t1402_TI, &t108_0_0_0, RuntimeInvoker_t108_t5_t5, t1402_m8590_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 2, false, false, 3344, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t114_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t1402_m8591_ParameterInfos[] = 
{
	{"m", 0, 134221922, &EmptyCustomAttributesCache, &t114_0_0_0},
	{"filterCriteria", 1, 134221923, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8591_MI = 
{
	"filter_by_type_name_ignore_case", (methodPointerType)&m8591, &t1402_TI, &t108_0_0_0, RuntimeInvoker_t108_t5_t5, t1402_m8591_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 2, false, false, 3345, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1402_MIs[] =
{
	&m8578_MI,
	&m8579_MI,
	&m8580_MI,
	&m8581_MI,
	&m8582_MI,
	&m8583_MI,
	&m8584_MI,
	&m8585_MI,
	&m8586_MI,
	&m8587_MI,
	&m8588_MI,
	&m8589_MI,
	&m8590_MI,
	&m8591_MI,
	NULL
};
static MethodInfo* t1402_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m8589_MI,
	&m8584_MI,
	&m8583_MI,
	&m8587_MI,
	&m8583_MI,
	&m8584_MI,
	&m8585_MI,
	&m8586_MI,
	&m8587_MI,
};
extern TypeInfo t2352_TI;
static TypeInfo* t1402_ITIs[] = 
{
	&t517_TI,
	&t1990_TI,
	&t2352_TI,
};
static Il2CppInterfaceOffsetPair t1402_IOs[] = 
{
	{ &t517_TI, 4},
	{ &t1990_TI, 5},
	{ &t2352_TI, 7},
};
void t1402_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t1699 * tmp;
		tmp = (t1699 *)il2cpp_codegen_object_new (&t1699_TI);
		m8787(tmp, il2cpp_codegen_type_get_object(InitializedTypeInfo(&t2352_TI)), &m8787_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t576 * tmp;
		tmp = (t576 *)il2cpp_codegen_object_new (&t576_TI);
		m2699(tmp, true, &m2699_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		t1697 * tmp;
		tmp = (t1697 *)il2cpp_codegen_object_new (&t1697_TI);
		m8786(tmp, 0, &m8786_MI);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
}
void t1402_CustomAttributesCacheGenerator_m8585(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t576 * tmp;
		tmp = (t576 *)il2cpp_codegen_object_new (&t576_TI);
		m2699(tmp, true, &m2699_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t1402_CustomAttributesCacheGenerator_m8586(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t576 * tmp;
		tmp = (t576 *)il2cpp_codegen_object_new (&t576_TI);
		m2699(tmp, true, &m2699_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1402__CustomAttributeCache = {
3,
NULL,
&t1402_CustomAttributesCacheGenerator
};
CustomAttributesCache t1402__CustomAttributeCache_m8585 = {
1,
NULL,
&t1402_CustomAttributesCacheGenerator_m8585
};
CustomAttributesCache t1402__CustomAttributeCache_m8586 = {
1,
NULL,
&t1402_CustomAttributesCacheGenerator_m8586
};
extern Il2CppImage g_mscorlib_dll_Image;
struct t1402;
extern CustomAttributesCache t1402__CustomAttributeCache;
extern CustomAttributesCache t1402__CustomAttributeCache_m8585;
extern CustomAttributesCache t1402__CustomAttributeCache_m8586;
TypeInfo t1402_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Module", "System.Reflection", t1402_MIs, t1402_PIs, t1402_FIs, NULL, &t5_TI, NULL, NULL, &t1402_TI, t1402_ITIs, t1402_VT, &t1402__CustomAttributeCache, &t1402_TI, &t1402_0_0_0, &t1402_1_0_0, t1402_IOs, NULL, NULL, t1402_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1402), 0, -1, sizeof(t1402_SFs), 0, -1, 8193, 0, false, false, false, false, false, false, false, false, false, true, false, false, 14, 3, 10, 0, 0, 12, 3, 3};
#include "t1668.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1668_TI;
#include "t1668MD.h"

#include "t1669.h"
extern MethodInfo m8592_MI;


 void m8592 (t5 * __this, t1669 * p0, t1668 * p1, MethodInfo* method){
	typedef void (*m8592_ftn) (t1669 *, t1668 *);
	static m8592_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m8592_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoEventInfo::get_event_info(System.Reflection.MonoEvent,System.Reflection.MonoEventInfo&)");
	_il2cpp_icall_func(p0, p1);
}
extern MethodInfo m8593_MI;
 t1668  m8593 (t5 * __this, t1669 * p0, MethodInfo* method){
	t1668  V_0 = {0};
	{
		m8592(NULL, p0, (&V_0), &m8592_MI);
		return V_0;
	}
}
// Metadata Definition System.Reflection.MonoEventInfo
extern Il2CppType t114_0_0_6;
FieldInfo t1668_f0_FieldInfo = 
{
	"declaring_type", &t114_0_0_6, &t1668_TI, offsetof(t1668, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t114_0_0_6;
FieldInfo t1668_f1_FieldInfo = 
{
	"reflected_type", &t114_0_0_6, &t1668_TI, offsetof(t1668, f1) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t11_0_0_6;
FieldInfo t1668_f2_FieldInfo = 
{
	"name", &t11_0_0_6, &t1668_TI, offsetof(t1668, f2) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t695_0_0_6;
FieldInfo t1668_f3_FieldInfo = 
{
	"add_method", &t695_0_0_6, &t1668_TI, offsetof(t1668, f3) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t695_0_0_6;
FieldInfo t1668_f4_FieldInfo = 
{
	"remove_method", &t695_0_0_6, &t1668_TI, offsetof(t1668, f4) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t695_0_0_6;
FieldInfo t1668_f5_FieldInfo = 
{
	"raise_method", &t695_0_0_6, &t1668_TI, offsetof(t1668, f5) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t1663_0_0_6;
FieldInfo t1668_f6_FieldInfo = 
{
	"attrs", &t1663_0_0_6, &t1668_TI, offsetof(t1668, f6) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t1406_0_0_6;
FieldInfo t1668_f7_FieldInfo = 
{
	"other_methods", &t1406_0_0_6, &t1668_TI, offsetof(t1668, f7) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t1668_FIs[] =
{
	&t1668_f0_FieldInfo,
	&t1668_f1_FieldInfo,
	&t1668_f2_FieldInfo,
	&t1668_f3_FieldInfo,
	&t1668_f4_FieldInfo,
	&t1668_f5_FieldInfo,
	&t1668_f6_FieldInfo,
	&t1668_f7_FieldInfo,
	NULL
};
extern Il2CppType t1669_0_0_0;
extern Il2CppType t1669_0_0_0;
extern Il2CppType t1668_1_0_2;
extern Il2CppType t1668_1_0_0;
static ParameterInfo t1668_m8592_ParameterInfos[] = 
{
	{"ev", 0, 134221924, &EmptyCustomAttributesCache, &t1669_0_0_0},
	{"info", 1, 134221925, &EmptyCustomAttributesCache, &t1668_1_0_2},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t2360 (MethodInfo* method, void* obj, void** args);
MethodInfo m8592_MI = 
{
	"get_event_info", (methodPointerType)&m8592, &t1668_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t2360, t1668_m8592_ParameterInfos, &EmptyCustomAttributesCache, 145, 4096, 255, 2, false, false, 3346, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1669_0_0_0;
static ParameterInfo t1668_m8593_ParameterInfos[] = 
{
	{"ev", 0, 134221926, &EmptyCustomAttributesCache, &t1669_0_0_0},
};
extern Il2CppType t1668_0_0_0;
extern void* RuntimeInvoker_t1668_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8593_MI = 
{
	"GetEventInfo", (methodPointerType)&m8593, &t1668_TI, &t1668_0_0_0, RuntimeInvoker_t1668_t5, t1668_m8593_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, false, 3347, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1668_MIs[] =
{
	&m8592_MI,
	&m8593_MI,
	NULL
};
extern MethodInfo m2042_MI;
extern MethodInfo m2043_MI;
extern MethodInfo m2148_MI;
static MethodInfo* t1668_VT[] =
{
	&m2042_MI,
	&m465_MI,
	&m2043_MI,
	&m2148_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1668_0_0_0;
TypeInfo t1668_TI = 
{
	&g_mscorlib_dll_Image, NULL, "MonoEventInfo", "System.Reflection", t1668_MIs, NULL, t1668_FIs, NULL, &t267_TI, NULL, NULL, &t1668_TI, NULL, t1668_VT, &EmptyCustomAttributesCache, &t1668_TI, &t1668_0_0_0, &t1668_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1668)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048840, 0, true, false, false, false, false, false, false, false, false, false, false, false, 2, 0, 8, 0, 0, 4, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1669_TI;
#include "t1669MD.h"

extern MethodInfo m8599_MI;
extern MethodInfo m1957_MI;
extern MethodInfo m10638_MI;
extern MethodInfo m8598_MI;
extern MethodInfo m8600_MI;


extern MethodInfo m8594_MI;
 void m8594 (t1669 * __this, MethodInfo* method){
	{
		m8529(__this, &m8529_MI);
		return;
	}
}
extern MethodInfo m8595_MI;
 int32_t m8595 (t1669 * __this, MethodInfo* method){
	t1668  V_0 = {0};
	{
		t1668  L_0 = m8593(NULL, __this, &m8593_MI);
		V_0 = L_0;
		int32_t L_1 = ((&V_0)->f6);
		return L_1;
	}
}
extern MethodInfo m8596_MI;
 t695 * m8596 (t1669 * __this, bool p0, MethodInfo* method){
	t1668  V_0 = {0};
	{
		t1668  L_0 = m8593(NULL, __this, &m8593_MI);
		V_0 = L_0;
		if (p0)
		{
			goto IL_0021;
		}
	}
	{
		t695 * L_1 = ((&V_0)->f3);
		if (!L_1)
		{
			goto IL_0029;
		}
	}
	{
		t695 * L_2 = ((&V_0)->f3);
		bool L_3 = (bool)VirtFuncInvoker0< bool >::Invoke(&m8560_MI, L_2);
		if (!L_3)
		{
			goto IL_0029;
		}
	}

IL_0021:
	{
		t695 * L_4 = ((&V_0)->f3);
		return L_4;
	}

IL_0029:
	{
		return (t695 *)NULL;
	}
}
extern MethodInfo m8597_MI;
 t114 * m8597 (t1669 * __this, MethodInfo* method){
	t1668  V_0 = {0};
	{
		t1668  L_0 = m8593(NULL, __this, &m8593_MI);
		V_0 = L_0;
		t114 * L_1 = ((&V_0)->f0);
		return L_1;
	}
}
 t114 * m8598 (t1669 * __this, MethodInfo* method){
	t1668  V_0 = {0};
	{
		t1668  L_0 = m8593(NULL, __this, &m8593_MI);
		V_0 = L_0;
		t114 * L_1 = ((&V_0)->f1);
		return L_1;
	}
}
 t11* m8599 (t1669 * __this, MethodInfo* method){
	t1668  V_0 = {0};
	{
		t1668  L_0 = m8593(NULL, __this, &m8593_MI);
		V_0 = L_0;
		t11* L_1 = ((&V_0)->f2);
		return L_1;
	}
}
 t11* m8600 (t1669 * __this, MethodInfo* method){
	{
		t114 * L_0 = (t114 *)VirtFuncInvoker0< t114 * >::Invoke(&m8530_MI, __this);
		t11* L_1 = (t11*)VirtFuncInvoker0< t11* >::Invoke(&m8599_MI, __this);
		IL2CPP_RUNTIME_CLASS_INIT((&t11_TI));
		t11* L_2 = m1957(NULL, L_0, (t11*) &_stringLiteral111, L_1, &m1957_MI);
		return L_2;
	}
}
extern MethodInfo m8601_MI;
 bool m8601 (t1669 * __this, t114 * p0, bool p1, MethodInfo* method){
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1989_TI));
		bool L_0 = m10639(NULL, __this, p0, p1, &m10639_MI);
		return L_0;
	}
}
extern MethodInfo m8602_MI;
 t168* m8602 (t1669 * __this, bool p0, MethodInfo* method){
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1989_TI));
		t168* L_0 = m10638(NULL, __this, p0, &m10638_MI);
		return L_0;
	}
}
extern MethodInfo m8603_MI;
 t168* m8603 (t1669 * __this, t114 * p0, bool p1, MethodInfo* method){
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1989_TI));
		t168* L_0 = m10637(NULL, __this, p0, p1, &m10637_MI);
		return L_0;
	}
}
extern MethodInfo m8604_MI;
 void m8604 (t1669 * __this, t829 * p0, t830  p1, MethodInfo* method){
	{
		t11* L_0 = (t11*)VirtFuncInvoker0< t11* >::Invoke(&m8599_MI, __this);
		t114 * L_1 = (t114 *)VirtFuncInvoker0< t114 * >::Invoke(&m8598_MI, __this);
		t11* L_2 = (t11*)VirtFuncInvoker0< t11* >::Invoke(&m8600_MI, __this);
		m8548(NULL, p0, L_0, L_1, L_2, 2, &m8548_MI);
		return;
	}
}
// Metadata Definition System.Reflection.MonoEvent
extern Il2CppType t124_0_0_1;
FieldInfo t1669_f1_FieldInfo = 
{
	"klass", &t124_0_0_1, &t1669_TI, offsetof(t1669, f1), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_1;
FieldInfo t1669_f2_FieldInfo = 
{
	"handle", &t124_0_0_1, &t1669_TI, offsetof(t1669, f2), &EmptyCustomAttributesCache};
static FieldInfo* t1669_FIs[] =
{
	&t1669_f1_FieldInfo,
	&t1669_f2_FieldInfo,
	NULL
};
static PropertyInfo t1669____Attributes_PropertyInfo = 
{
	&t1669_TI, "Attributes", &m8595_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1669____DeclaringType_PropertyInfo = 
{
	&t1669_TI, "DeclaringType", &m8597_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1669____ReflectedType_PropertyInfo = 
{
	&t1669_TI, "ReflectedType", &m8598_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1669____Name_PropertyInfo = 
{
	&t1669_TI, "Name", &m8599_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1669_PIs[] =
{
	&t1669____Attributes_PropertyInfo,
	&t1669____DeclaringType_PropertyInfo,
	&t1669____ReflectedType_PropertyInfo,
	&t1669____Name_PropertyInfo,
	NULL
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m8594_MI = 
{
	".ctor", (methodPointerType)&m8594, &t1669_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 3348, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1663_0_0_0;
extern void* RuntimeInvoker_t1663 (MethodInfo* method, void* obj, void** args);
MethodInfo m8595_MI = 
{
	"get_Attributes", (methodPointerType)&m8595, &t1669_TI, &t1663_0_0_0, RuntimeInvoker_t1663, NULL, &EmptyCustomAttributesCache, 2246, 0, 14, 0, false, false, 3349, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t108_0_0_0;
static ParameterInfo t1669_m8596_ParameterInfos[] = 
{
	{"nonPublic", 0, 134221927, &EmptyCustomAttributesCache, &t108_0_0_0},
};
extern Il2CppType t695_0_0_0;
extern void* RuntimeInvoker_t5_t111 (MethodInfo* method, void* obj, void** args);
MethodInfo m8596_MI = 
{
	"GetAddMethod", (methodPointerType)&m8596, &t1669_TI, &t695_0_0_0, RuntimeInvoker_t5_t111, t1669_m8596_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 16, 1, false, false, 3350, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t114_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8597_MI = 
{
	"get_DeclaringType", (methodPointerType)&m8597, &t1669_TI, &t114_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2246, 0, 6, 0, false, false, 3351, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t114_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8598_MI = 
{
	"get_ReflectedType", (methodPointerType)&m8598, &t1669_TI, &t114_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2246, 0, 9, 0, false, false, 3352, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t11_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8599_MI = 
{
	"get_Name", (methodPointerType)&m8599, &t1669_TI, &t11_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2246, 0, 8, 0, false, false, 3353, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t11_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8600_MI = 
{
	"ToString", (methodPointerType)&m8600, &t1669_TI, &t11_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 198, 0, 3, 0, false, false, 3354, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t114_0_0_0;
extern Il2CppType t108_0_0_0;
static ParameterInfo t1669_m8601_ParameterInfos[] = 
{
	{"attributeType", 0, 134221928, &EmptyCustomAttributesCache, &t114_0_0_0},
	{"inherit", 1, 134221929, &EmptyCustomAttributesCache, &t108_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5_t111 (MethodInfo* method, void* obj, void** args);
MethodInfo m8601_MI = 
{
	"IsDefined", (methodPointerType)&m8601, &t1669_TI, &t108_0_0_0, RuntimeInvoker_t108_t5_t111, t1669_m8601_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 11, 2, false, false, 3355, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t108_0_0_0;
static ParameterInfo t1669_m8602_ParameterInfos[] = 
{
	{"inherit", 0, 134221930, &EmptyCustomAttributesCache, &t108_0_0_0},
};
extern Il2CppType t168_0_0_0;
extern void* RuntimeInvoker_t5_t111 (MethodInfo* method, void* obj, void** args);
MethodInfo m8602_MI = 
{
	"GetCustomAttributes", (methodPointerType)&m8602, &t1669_TI, &t168_0_0_0, RuntimeInvoker_t5_t111, t1669_m8602_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 12, 1, false, false, 3356, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t114_0_0_0;
extern Il2CppType t108_0_0_0;
static ParameterInfo t1669_m8603_ParameterInfos[] = 
{
	{"attributeType", 0, 134221931, &EmptyCustomAttributesCache, &t114_0_0_0},
	{"inherit", 1, 134221932, &EmptyCustomAttributesCache, &t108_0_0_0},
};
extern Il2CppType t168_0_0_0;
extern void* RuntimeInvoker_t5_t5_t111 (MethodInfo* method, void* obj, void** args);
MethodInfo m8603_MI = 
{
	"GetCustomAttributes", (methodPointerType)&m8603, &t1669_TI, &t168_0_0_0, RuntimeInvoker_t5_t5_t111, t1669_m8603_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 13, 2, false, false, 3357, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t829_0_0_0;
extern Il2CppType t830_0_0_0;
static ParameterInfo t1669_m8604_ParameterInfos[] = 
{
	{"info", 0, 134221933, &EmptyCustomAttributesCache, &t829_0_0_0},
	{"context", 1, 134221934, &EmptyCustomAttributesCache, &t830_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t830 (MethodInfo* method, void* obj, void** args);
MethodInfo m8604_MI = 
{
	"GetObjectData", (methodPointerType)&m8604, &t1669_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t830, t1669_m8604_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 17, 2, false, false, 3358, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1669_MIs[] =
{
	&m8594_MI,
	&m8595_MI,
	&m8596_MI,
	&m8597_MI,
	&m8598_MI,
	&m8599_MI,
	&m8600_MI,
	&m8601_MI,
	&m8602_MI,
	&m8603_MI,
	&m8604_MI,
	NULL
};
static MethodInfo* t1669_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m8600_MI,
	&m8603_MI,
	&m8601_MI,
	&m8597_MI,
	&m8531_MI,
	&m8599_MI,
	&m8598_MI,
	&m6845_MI,
	&m8601_MI,
	&m8602_MI,
	&m8603_MI,
	&m8595_MI,
	&m8530_MI,
	&m8596_MI,
	&m8604_MI,
};
static TypeInfo* t1669_ITIs[] = 
{
	&t517_TI,
};
static Il2CppInterfaceOffsetPair t1669_IOs[] = 
{
	{ &t2358_TI, 14},
	{ &t1990_TI, 4},
	{ &t2247_TI, 6},
	{ &t517_TI, 17},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1669_1_0_0;
struct t1669;
TypeInfo t1669_TI = 
{
	&g_mscorlib_dll_Image, NULL, "MonoEvent", "System.Reflection", t1669_MIs, t1669_PIs, t1669_FIs, NULL, &t1403_TI, NULL, NULL, &t1669_TI, t1669_ITIs, t1669_VT, &EmptyCustomAttributesCache, &t1669_TI, &t1669_0_0_0, &t1669_1_0_0, t1669_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1669), 0, -1, 0, 0, -1, 1057024, 0, false, false, false, false, false, false, false, false, false, false, false, false, 11, 4, 2, 0, 0, 18, 1, 4};
#include "t1670.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1670_TI;
#include "t1670MD.h"

#include "t1683.h"
#include "t1980.h"
extern TypeInfo t1683_TI;
extern TypeInfo t1980_TI;
#include "t1683MD.h"
#include "t1980MD.h"
extern MethodInfo m8609_MI;
extern MethodInfo m8742_MI;
extern MethodInfo m8624_MI;
extern MethodInfo m8617_MI;
extern MethodInfo m10571_MI;
extern MethodInfo m2041_MI;
extern MethodInfo m8620_MI;
extern MethodInfo m8605_MI;
extern MethodInfo m8612_MI;
extern MethodInfo m8610_MI;
extern MethodInfo m8619_MI;
extern MethodInfo m8611_MI;
extern MethodInfo m6834_MI;


 void m8605 (t1670 * __this, MethodInfo* method){
	{
		m8532(__this, &m8532_MI);
		return;
	}
}
extern MethodInfo m8606_MI;
 int32_t m8606 (t1670 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->f4);
		return L_0;
	}
}
extern MethodInfo m8607_MI;
 t1192  m8607 (t1670 * __this, MethodInfo* method){
	{
		t1192  L_0 = (__this->f1);
		return L_0;
	}
}
extern MethodInfo m8608_MI;
 t114 * m8608 (t1670 * __this, MethodInfo* method){
	{
		t114 * L_0 = (__this->f3);
		return L_0;
	}
}
 t114 * m8609 (t1670 * __this, bool p0, MethodInfo* method){
	typedef t114 * (*m8609_ftn) (t1670 *, bool);
	static m8609_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m8609_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoField::GetParentType(System.Boolean)");
	return _il2cpp_icall_func(__this, p0);
}
 t114 * m8610 (t1670 * __this, MethodInfo* method){
	{
		t114 * L_0 = m8609(__this, 0, &m8609_MI);
		return L_0;
	}
}
 t114 * m8611 (t1670 * __this, MethodInfo* method){
	{
		t114 * L_0 = m8609(__this, 1, &m8609_MI);
		return L_0;
	}
}
 t11* m8612 (t1670 * __this, MethodInfo* method){
	{
		t11* L_0 = (__this->f2);
		return L_0;
	}
}
extern MethodInfo m8613_MI;
 bool m8613 (t1670 * __this, t114 * p0, bool p1, MethodInfo* method){
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1989_TI));
		bool L_0 = m10639(NULL, __this, p0, p1, &m10639_MI);
		return L_0;
	}
}
extern MethodInfo m8614_MI;
 t168* m8614 (t1670 * __this, bool p0, MethodInfo* method){
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1989_TI));
		t168* L_0 = m10638(NULL, __this, p0, &m10638_MI);
		return L_0;
	}
}
extern MethodInfo m8615_MI;
 t168* m8615 (t1670 * __this, t114 * p0, bool p1, MethodInfo* method){
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1989_TI));
		t168* L_0 = m10637(NULL, __this, p0, p1, &m10637_MI);
		return L_0;
	}
}
extern MethodInfo m8616_MI;
 int32_t m8616 (t1670 * __this, MethodInfo* method){
	typedef int32_t (*m8616_ftn) (t1670 *);
	static m8616_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m8616_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoField::GetFieldOffset()");
	return _il2cpp_icall_func(__this);
}
 t5 * m8617 (t1670 * __this, t5 * p0, MethodInfo* method){
	typedef t5 * (*m8617_ftn) (t1670 *, t5 *);
	static m8617_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m8617_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoField::GetValueInternal(System.Object)");
	return _il2cpp_icall_func(__this, p0);
}
extern MethodInfo m8618_MI;
 t5 * m8618 (t1670 * __this, t5 * p0, MethodInfo* method){
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(&m8535_MI, __this);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		if (p0)
		{
			goto IL_0016;
		}
	}
	{
		t1683 * L_1 = (t1683 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1683_TI));
		m8742(L_1, (t11*) &_stringLiteral1875, &m8742_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0016:
	{
		bool L_2 = (bool)VirtFuncInvoker0< bool >::Invoke(&m8534_MI, __this);
		if (L_2)
		{
			goto IL_0024;
		}
	}
	{
		m8624(__this, &m8624_MI);
	}

IL_0024:
	{
		t5 * L_3 = m8617(__this, p0, &m8617_MI);
		return L_3;
	}
}
 t11* m8619 (t1670 * __this, MethodInfo* method){
	{
		t114 * L_0 = (__this->f3);
		t11* L_1 = (__this->f2);
		IL2CPP_RUNTIME_CLASS_INIT((&t11_TI));
		t11* L_2 = m588(NULL, (t11*) &_stringLiteral1876, L_0, L_1, &m588_MI);
		return L_2;
	}
}
 void m8620 (t5 * __this, t1404 * p0, t5 * p1, t5 * p2, MethodInfo* method){
	typedef void (*m8620_ftn) (t1404 *, t5 *, t5 *);
	static m8620_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m8620_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoField::SetValueInternal(System.Reflection.FieldInfo,System.Object,System.Object)");
	_il2cpp_icall_func(p0, p1, p2);
}
extern MethodInfo m8621_MI;
 void m8621 (t1670 * __this, t5 * p0, t5 * p1, int32_t p2, t769 * p3, t771 * p4, MethodInfo* method){
	t5 * V_0 = {0};
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(&m8535_MI, __this);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		if (p0)
		{
			goto IL_0016;
		}
	}
	{
		t1683 * L_1 = (t1683 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1683_TI));
		m8742(L_1, (t11*) &_stringLiteral1875, &m8742_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0016:
	{
		bool L_2 = (bool)VirtFuncInvoker0< bool >::Invoke(&m8534_MI, __this);
		if (!L_2)
		{
			goto IL_0029;
		}
	}
	{
		t1980 * L_3 = (t1980 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1980_TI));
		m10571(L_3, (t11*) &_stringLiteral1877, &m10571_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		if (p3)
		{
			goto IL_0036;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t769_TI));
		t769 * L_4 = m8518(NULL, &m8518_MI);
		p3 = L_4;
	}

IL_0036:
	{
		m8624(__this, &m8624_MI);
		if (!p1)
		{
			goto IL_0090;
		}
	}
	{
		t114 * L_5 = (__this->f3);
		t5 * L_6 = (t5 *)VirtFuncInvoker3< t5 *, t5 *, t114 *, t771 * >::Invoke(&m11488_MI, p3, p1, L_5, p4);
		V_0 = L_6;
		if (V_0)
		{
			goto IL_008b;
		}
	}
	{
		t168* L_7 = ((t168*)SZArrayNew(InitializedTypeInfo(&t168_TI), 4));
		ArrayElementTypeCheck (L_7, (t11*) &_stringLiteral1878);
		*((t5 **)(t5 **)SZArrayLdElema(L_7, 0)) = (t5 *)(t11*) &_stringLiteral1878;
		t168* L_8 = L_7;
		t114 * L_9 = m531(p1, &m531_MI);
		ArrayElementTypeCheck (L_8, L_9);
		*((t5 **)(t5 **)SZArrayLdElema(L_8, 1)) = (t5 *)L_9;
		t168* L_10 = L_8;
		ArrayElementTypeCheck (L_10, (t11*) &_stringLiteral1879);
		*((t5 **)(t5 **)SZArrayLdElema(L_10, 2)) = (t5 *)(t11*) &_stringLiteral1879;
		t168* L_11 = L_10;
		t114 * L_12 = (__this->f3);
		ArrayElementTypeCheck (L_11, L_12);
		*((t5 **)(t5 **)SZArrayLdElema(L_11, 3)) = (t5 *)L_12;
		IL2CPP_RUNTIME_CLASS_INIT((&t11_TI));
		t11* L_13 = m2041(NULL, L_11, &m2041_MI);
		t160 * L_14 = (t160 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t160_TI));
		m614(L_14, L_13, (t11*) &_stringLiteral1880, &m614_MI);
		il2cpp_codegen_raise_exception(L_14);
	}

IL_008b:
	{
		p1 = V_0;
	}

IL_0090:
	{
		m8620(NULL, __this, p0, p1, &m8620_MI);
		return;
	}
}
extern MethodInfo m8622_MI;
 t1670 * m8622 (t1670 * __this, t11* p0, MethodInfo* method){
	t1670 * V_0 = {0};
	{
		t1670 * L_0 = (t1670 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1670_TI));
		m8605(L_0, &m8605_MI);
		V_0 = L_0;
		V_0->f2 = p0;
		t114 * L_1 = (__this->f3);
		V_0->f3 = L_1;
		int32_t L_2 = (__this->f4);
		V_0->f4 = L_2;
		t124 L_3 = (__this->f0);
		V_0->f0 = L_3;
		t1192  L_4 = (__this->f1);
		V_0->f1 = L_4;
		return V_0;
	}
}
extern MethodInfo m8623_MI;
 void m8623 (t1670 * __this, t829 * p0, t830  p1, MethodInfo* method){
	{
		t11* L_0 = (t11*)VirtFuncInvoker0< t11* >::Invoke(&m8612_MI, __this);
		t114 * L_1 = (t114 *)VirtFuncInvoker0< t114 * >::Invoke(&m8610_MI, __this);
		t11* L_2 = (t11*)VirtFuncInvoker0< t11* >::Invoke(&m8619_MI, __this);
		m8548(NULL, p0, L_0, L_1, L_2, 4, &m8548_MI);
		return;
	}
}
 void m8624 (t1670 * __this, MethodInfo* method){
	{
		t114 * L_0 = (t114 *)VirtFuncInvoker0< t114 * >::Invoke(&m8611_MI, __this);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(&m6834_MI, L_0);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		t133 * L_2 = (t133 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t133_TI));
		m4759(L_2, (t11*) &_stringLiteral1881, &m4759_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0018:
	{
		return;
	}
}
// Metadata Definition System.Reflection.MonoField
extern Il2CppType t124_0_0_3;
FieldInfo t1670_f0_FieldInfo = 
{
	"klass", &t124_0_0_3, &t1670_TI, offsetof(t1670, f0), &EmptyCustomAttributesCache};
extern Il2CppType t1192_0_0_3;
FieldInfo t1670_f1_FieldInfo = 
{
	"fhandle", &t1192_0_0_3, &t1670_TI, offsetof(t1670, f1), &EmptyCustomAttributesCache};
extern Il2CppType t11_0_0_1;
FieldInfo t1670_f2_FieldInfo = 
{
	"name", &t11_0_0_1, &t1670_TI, offsetof(t1670, f2), &EmptyCustomAttributesCache};
extern Il2CppType t114_0_0_1;
FieldInfo t1670_f3_FieldInfo = 
{
	"type", &t114_0_0_1, &t1670_TI, offsetof(t1670, f3), &EmptyCustomAttributesCache};
extern Il2CppType t1623_0_0_1;
FieldInfo t1670_f4_FieldInfo = 
{
	"attrs", &t1623_0_0_1, &t1670_TI, offsetof(t1670, f4), &EmptyCustomAttributesCache};
static FieldInfo* t1670_FIs[] =
{
	&t1670_f0_FieldInfo,
	&t1670_f1_FieldInfo,
	&t1670_f2_FieldInfo,
	&t1670_f3_FieldInfo,
	&t1670_f4_FieldInfo,
	NULL
};
static PropertyInfo t1670____Attributes_PropertyInfo = 
{
	&t1670_TI, "Attributes", &m8606_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1670____FieldHandle_PropertyInfo = 
{
	&t1670_TI, "FieldHandle", &m8607_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1670____FieldType_PropertyInfo = 
{
	&t1670_TI, "FieldType", &m8608_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1670____ReflectedType_PropertyInfo = 
{
	&t1670_TI, "ReflectedType", &m8610_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1670____DeclaringType_PropertyInfo = 
{
	&t1670_TI, "DeclaringType", &m8611_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1670____Name_PropertyInfo = 
{
	&t1670_TI, "Name", &m8612_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1670_PIs[] =
{
	&t1670____Attributes_PropertyInfo,
	&t1670____FieldHandle_PropertyInfo,
	&t1670____FieldType_PropertyInfo,
	&t1670____ReflectedType_PropertyInfo,
	&t1670____DeclaringType_PropertyInfo,
	&t1670____Name_PropertyInfo,
	NULL
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m8605_MI = 
{
	".ctor", (methodPointerType)&m8605, &t1670_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 3359, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1623_0_0_0;
extern void* RuntimeInvoker_t1623 (MethodInfo* method, void* obj, void** args);
MethodInfo m8606_MI = 
{
	"get_Attributes", (methodPointerType)&m8606, &t1670_TI, &t1623_0_0_0, RuntimeInvoker_t1623, NULL, &EmptyCustomAttributesCache, 2246, 0, 14, 0, false, false, 3360, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1192_0_0_0;
extern void* RuntimeInvoker_t1192 (MethodInfo* method, void* obj, void** args);
MethodInfo m8607_MI = 
{
	"get_FieldHandle", (methodPointerType)&m8607, &t1670_TI, &t1192_0_0_0, RuntimeInvoker_t1192, NULL, &EmptyCustomAttributesCache, 2246, 0, 15, 0, false, false, 3361, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t114_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8608_MI = 
{
	"get_FieldType", (methodPointerType)&m8608, &t1670_TI, &t114_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2246, 0, 16, 0, false, false, 3362, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t108_0_0_0;
static ParameterInfo t1670_m8609_ParameterInfos[] = 
{
	{"declaring", 0, 134221935, &EmptyCustomAttributesCache, &t108_0_0_0},
};
extern Il2CppType t114_0_0_0;
extern void* RuntimeInvoker_t5_t111 (MethodInfo* method, void* obj, void** args);
MethodInfo m8609_MI = 
{
	"GetParentType", (methodPointerType)&m8609, &t1670_TI, &t114_0_0_0, RuntimeInvoker_t5_t111, t1670_m8609_ParameterInfos, &EmptyCustomAttributesCache, 129, 4096, 255, 1, false, false, 3363, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t114_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8610_MI = 
{
	"get_ReflectedType", (methodPointerType)&m8610, &t1670_TI, &t114_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2246, 0, 9, 0, false, false, 3364, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t114_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8611_MI = 
{
	"get_DeclaringType", (methodPointerType)&m8611, &t1670_TI, &t114_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2246, 0, 6, 0, false, false, 3365, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t11_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8612_MI = 
{
	"get_Name", (methodPointerType)&m8612, &t1670_TI, &t11_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2246, 0, 8, 0, false, false, 3366, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t114_0_0_0;
extern Il2CppType t108_0_0_0;
static ParameterInfo t1670_m8613_ParameterInfos[] = 
{
	{"attributeType", 0, 134221936, &EmptyCustomAttributesCache, &t114_0_0_0},
	{"inherit", 1, 134221937, &EmptyCustomAttributesCache, &t108_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5_t111 (MethodInfo* method, void* obj, void** args);
MethodInfo m8613_MI = 
{
	"IsDefined", (methodPointerType)&m8613, &t1670_TI, &t108_0_0_0, RuntimeInvoker_t108_t5_t111, t1670_m8613_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 11, 2, false, false, 3367, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t108_0_0_0;
static ParameterInfo t1670_m8614_ParameterInfos[] = 
{
	{"inherit", 0, 134221938, &EmptyCustomAttributesCache, &t108_0_0_0},
};
extern Il2CppType t168_0_0_0;
extern void* RuntimeInvoker_t5_t111 (MethodInfo* method, void* obj, void** args);
MethodInfo m8614_MI = 
{
	"GetCustomAttributes", (methodPointerType)&m8614, &t1670_TI, &t168_0_0_0, RuntimeInvoker_t5_t111, t1670_m8614_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 12, 1, false, false, 3368, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t114_0_0_0;
extern Il2CppType t108_0_0_0;
static ParameterInfo t1670_m8615_ParameterInfos[] = 
{
	{"attributeType", 0, 134221939, &EmptyCustomAttributesCache, &t114_0_0_0},
	{"inherit", 1, 134221940, &EmptyCustomAttributesCache, &t108_0_0_0},
};
extern Il2CppType t168_0_0_0;
extern void* RuntimeInvoker_t5_t5_t111 (MethodInfo* method, void* obj, void** args);
MethodInfo m8615_MI = 
{
	"GetCustomAttributes", (methodPointerType)&m8615, &t1670_TI, &t168_0_0_0, RuntimeInvoker_t5_t5_t111, t1670_m8615_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 13, 2, false, false, 3369, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m8616_MI = 
{
	"GetFieldOffset", (methodPointerType)&m8616, &t1670_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 195, 4096, 24, 0, false, false, 3370, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t5_0_0_0;
static ParameterInfo t1670_m8617_ParameterInfos[] = 
{
	{"obj", 0, 134221941, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8617_MI = 
{
	"GetValueInternal", (methodPointerType)&m8617, &t1670_TI, &t5_0_0_0, RuntimeInvoker_t5_t5, t1670_m8617_ParameterInfos, &EmptyCustomAttributesCache, 129, 4096, 255, 1, false, false, 3371, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t5_0_0_0;
static ParameterInfo t1670_m8618_ParameterInfos[] = 
{
	{"obj", 0, 134221942, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8618_MI = 
{
	"GetValue", (methodPointerType)&m8618, &t1670_TI, &t5_0_0_0, RuntimeInvoker_t5_t5, t1670_m8618_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 17, 1, false, false, 3372, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t11_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8619_MI = 
{
	"ToString", (methodPointerType)&m8619, &t1670_TI, &t11_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 198, 0, 3, 0, false, false, 3373, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1404_0_0_0;
extern Il2CppType t5_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t1670_m8620_ParameterInfos[] = 
{
	{"fi", 0, 134221943, &EmptyCustomAttributesCache, &t1404_0_0_0},
	{"obj", 1, 134221944, &EmptyCustomAttributesCache, &t5_0_0_0},
	{"value", 2, 134221945, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t5_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8620_MI = 
{
	"SetValueInternal", (methodPointerType)&m8620, &t1670_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t5_t5, t1670_m8620_ParameterInfos, &EmptyCustomAttributesCache, 145, 4096, 255, 3, false, false, 3374, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t5_0_0_0;
extern Il2CppType t5_0_0_0;
extern Il2CppType t768_0_0_0;
extern Il2CppType t769_0_0_0;
extern Il2CppType t771_0_0_0;
static ParameterInfo t1670_m8621_ParameterInfos[] = 
{
	{"obj", 0, 134221946, &EmptyCustomAttributesCache, &t5_0_0_0},
	{"val", 1, 134221947, &EmptyCustomAttributesCache, &t5_0_0_0},
	{"invokeAttr", 2, 134221948, &EmptyCustomAttributesCache, &t768_0_0_0},
	{"binder", 3, 134221949, &EmptyCustomAttributesCache, &t769_0_0_0},
	{"culture", 4, 134221950, &EmptyCustomAttributesCache, &t771_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t5_t110_t5_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8621_MI = 
{
	"SetValue", (methodPointerType)&m8621, &t1670_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t5_t110_t5_t5, t1670_m8621_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 22, 5, false, false, 3375, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t11_0_0_0;
static ParameterInfo t1670_m8622_ParameterInfos[] = 
{
	{"newName", 0, 134221951, &EmptyCustomAttributesCache, &t11_0_0_0},
};
extern Il2CppType t1670_0_0_0;
extern void* RuntimeInvoker_t5_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8622_MI = 
{
	"Clone", (methodPointerType)&m8622, &t1670_TI, &t1670_0_0_0, RuntimeInvoker_t5_t5, t1670_m8622_ParameterInfos, &EmptyCustomAttributesCache, 131, 0, 255, 1, false, false, 3376, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t829_0_0_0;
extern Il2CppType t830_0_0_0;
static ParameterInfo t1670_m8623_ParameterInfos[] = 
{
	{"info", 0, 134221952, &EmptyCustomAttributesCache, &t829_0_0_0},
	{"context", 1, 134221953, &EmptyCustomAttributesCache, &t830_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t830 (MethodInfo* method, void* obj, void** args);
MethodInfo m8623_MI = 
{
	"GetObjectData", (methodPointerType)&m8623, &t1670_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t830, t1670_m8623_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 26, 2, false, false, 3377, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m8624_MI = 
{
	"CheckGeneric", (methodPointerType)&m8624, &t1670_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 3378, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1670_MIs[] =
{
	&m8605_MI,
	&m8606_MI,
	&m8607_MI,
	&m8608_MI,
	&m8609_MI,
	&m8610_MI,
	&m8611_MI,
	&m8612_MI,
	&m8613_MI,
	&m8614_MI,
	&m8615_MI,
	&m8616_MI,
	&m8617_MI,
	&m8618_MI,
	&m8619_MI,
	&m8620_MI,
	&m8621_MI,
	&m8622_MI,
	&m8623_MI,
	&m8624_MI,
	NULL
};
static MethodInfo* t1670_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m8619_MI,
	&m8615_MI,
	&m8613_MI,
	&m8611_MI,
	&m8533_MI,
	&m8612_MI,
	&m8610_MI,
	&m6845_MI,
	&m8613_MI,
	&m8614_MI,
	&m8615_MI,
	&m8606_MI,
	&m8607_MI,
	&m8608_MI,
	&m8618_MI,
	&m8534_MI,
	&m8535_MI,
	&m8536_MI,
	&m8537_MI,
	&m8621_MI,
	&m8538_MI,
	&m8616_MI,
	&m8543_MI,
	&m8623_MI,
};
static TypeInfo* t1670_ITIs[] = 
{
	&t517_TI,
};
static Il2CppInterfaceOffsetPair t1670_IOs[] = 
{
	{ &t2347_TI, 14},
	{ &t1990_TI, 4},
	{ &t2247_TI, 6},
	{ &t517_TI, 26},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1670_0_0_0;
extern Il2CppType t1670_1_0_0;
struct t1670;
TypeInfo t1670_TI = 
{
	&g_mscorlib_dll_Image, NULL, "MonoField", "System.Reflection", t1670_MIs, t1670_PIs, t1670_FIs, NULL, &t1404_TI, NULL, NULL, &t1670_TI, t1670_ITIs, t1670_VT, &EmptyCustomAttributesCache, &t1670_TI, &t1670_0_0_0, &t1670_1_0_0, t1670_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1670), 0, -1, 0, 0, -1, 1056768, 0, false, false, false, false, false, false, false, false, false, false, false, false, 20, 6, 5, 0, 0, 27, 1, 4};
#include "t1671.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1671_TI;
#include "t1671MD.h"

#include "t1619MD.h"
extern MethodInfo m8637_MI;
extern MethodInfo m4767_MI;


extern MethodInfo m8625_MI;
 void m8625 (t1671 * __this, MethodInfo* method){
	{
		m8637(__this, &m8637_MI);
		t133 * L_0 = (t133 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t133_TI));
		m4767(L_0, &m4767_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m8626_MI;
 t114 * m8626 (t1671 * __this, MethodInfo* method){
	typedef t114 * (*m8626_ftn) (t1671 *);
	static m8626_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m8626_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoGenericMethod::get_ReflectedType()");
	return _il2cpp_icall_func(__this);
}
// Metadata Definition System.Reflection.MonoGenericMethod
static PropertyInfo t1671____ReflectedType_PropertyInfo = 
{
	&t1671_TI, "ReflectedType", &m8626_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1671_PIs[] =
{
	&t1671____ReflectedType_PropertyInfo,
	NULL
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m8625_MI = 
{
	".ctor", (methodPointerType)&m8625, &t1671_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6275, 0, 255, 0, false, false, 3379, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t114_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8626_MI = 
{
	"get_ReflectedType", (methodPointerType)&m8626, &t1671_TI, &t114_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2246, 4096, 9, 0, false, false, 3380, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1671_MIs[] =
{
	&m8625_MI,
	&m8626_MI,
	NULL
};
extern MethodInfo m8658_MI;
extern MethodInfo m8654_MI;
extern MethodInfo m8652_MI;
extern MethodInfo m8650_MI;
extern MethodInfo m8651_MI;
extern MethodInfo m8653_MI;
extern MethodInfo m8643_MI;
extern MethodInfo m8645_MI;
extern MethodInfo m8646_MI;
extern MethodInfo m8647_MI;
extern MethodInfo m8648_MI;
extern MethodInfo m8662_MI;
extern MethodInfo m8665_MI;
extern MethodInfo m8663_MI;
extern MethodInfo m8664_MI;
extern MethodInfo m8641_MI;
extern MethodInfo m8642_MI;
extern MethodInfo m8660_MI;
extern MethodInfo m8659_MI;
static MethodInfo* t1671_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m8658_MI,
	&m8654_MI,
	&m8652_MI,
	&m8650_MI,
	&m8568_MI,
	&m8651_MI,
	&m8626_MI,
	&m6845_MI,
	&m8652_MI,
	&m8653_MI,
	&m8654_MI,
	&m8643_MI,
	&m8557_MI,
	&m8558_MI,
	&m8645_MI,
	&m8646_MI,
	&m8647_MI,
	&m8648_MI,
	&m8560_MI,
	&m3598_MI,
	&m8561_MI,
	&m8562_MI,
	&m8662_MI,
	&m8665_MI,
	&m8663_MI,
	&m8664_MI,
	&m8641_MI,
	&m8642_MI,
	&m8660_MI,
	&m8659_MI,
};
static Il2CppInterfaceOffsetPair t1671_IOs[] = 
{
	{ &t517_TI, 32},
	{ &t2344_TI, 29},
	{ &t2343_TI, 14},
	{ &t1990_TI, 4},
	{ &t2247_TI, 6},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1671_0_0_0;
extern Il2CppType t1671_1_0_0;
extern TypeInfo t1619_TI;
struct t1671;
TypeInfo t1671_TI = 
{
	&g_mscorlib_dll_Image, NULL, "MonoGenericMethod", "System.Reflection", t1671_MIs, t1671_PIs, NULL, NULL, &t1619_TI, NULL, NULL, &t1671_TI, NULL, t1671_VT, &EmptyCustomAttributesCache, &t1671_TI, &t1671_0_0_0, &t1671_1_0_0, t1671_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1671), 0, -1, 0, 0, -1, 1056768, 0, false, false, false, false, false, false, false, false, false, false, false, false, 2, 1, 0, 0, 0, 33, 0, 5};
#include "t1672.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1672_TI;
#include "t1672MD.h"

#include "t1673MD.h"
extern MethodInfo m8666_MI;


extern MethodInfo m8627_MI;
 void m8627 (t1672 * __this, MethodInfo* method){
	{
		m8666(__this, &m8666_MI);
		t133 * L_0 = (t133 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t133_TI));
		m4767(L_0, &m4767_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m8628_MI;
 t114 * m8628 (t1672 * __this, MethodInfo* method){
	typedef t114 * (*m8628_ftn) (t1672 *);
	static m8628_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m8628_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoGenericCMethod::get_ReflectedType()");
	return _il2cpp_icall_func(__this);
}
// Metadata Definition System.Reflection.MonoGenericCMethod
static PropertyInfo t1672____ReflectedType_PropertyInfo = 
{
	&t1672_TI, "ReflectedType", &m8628_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1672_PIs[] =
{
	&t1672____ReflectedType_PropertyInfo,
	NULL
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m8627_MI = 
{
	".ctor", (methodPointerType)&m8627, &t1672_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6275, 0, 255, 0, false, false, 3381, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t114_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8628_MI = 
{
	"get_ReflectedType", (methodPointerType)&m8628, &t1672_TI, &t114_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2246, 4096, 9, 0, false, false, 3382, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1672_MIs[] =
{
	&m8627_MI,
	&m8628_MI,
	NULL
};
extern MethodInfo m8680_MI;
extern MethodInfo m8679_MI;
extern MethodInfo m8677_MI;
extern MethodInfo m8675_MI;
extern MethodInfo m8676_MI;
extern MethodInfo m8678_MI;
extern MethodInfo m8667_MI;
extern MethodInfo m8669_MI;
extern MethodInfo m8671_MI;
extern MethodInfo m8672_MI;
extern MethodInfo m8673_MI;
extern MethodInfo m8670_MI;
extern MethodInfo m8681_MI;
static MethodInfo* t1672_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m8680_MI,
	&m8679_MI,
	&m8677_MI,
	&m8675_MI,
	&m8524_MI,
	&m8676_MI,
	&m8628_MI,
	&m6845_MI,
	&m8677_MI,
	&m8678_MI,
	&m8679_MI,
	&m8667_MI,
	&m8557_MI,
	&m8558_MI,
	&m8669_MI,
	&m8671_MI,
	&m8672_MI,
	&m8673_MI,
	&m8560_MI,
	&m3598_MI,
	&m8561_MI,
	&m8562_MI,
	&m8563_MI,
	&m8564_MI,
	&m8565_MI,
	&m8566_MI,
	&m8670_MI,
	&m8681_MI,
};
static Il2CppInterfaceOffsetPair t1672_IOs[] = 
{
	{ &t517_TI, 30},
	{ &t2342_TI, 29},
	{ &t2343_TI, 14},
	{ &t1990_TI, 4},
	{ &t2247_TI, 6},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1672_0_0_0;
extern Il2CppType t1672_1_0_0;
extern TypeInfo t1673_TI;
struct t1672;
TypeInfo t1672_TI = 
{
	&g_mscorlib_dll_Image, NULL, "MonoGenericCMethod", "System.Reflection", t1672_MIs, t1672_PIs, NULL, NULL, &t1673_TI, NULL, NULL, &t1672_TI, NULL, t1672_VT, &EmptyCustomAttributesCache, &t1672_TI, &t1672_0_0_0, &t1672_1_0_0, t1672_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1672), 0, -1, 0, 0, -1, 1056768, 0, false, false, false, false, false, false, false, false, false, false, false, false, 2, 1, 0, 0, 0, 31, 0, 5};
#include "t1674.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1674_TI;
#include "t1674MD.h"

extern MethodInfo m8629_MI;
extern MethodInfo m8630_MI;
extern MethodInfo m8635_MI;


 void m8629 (t5 * __this, t124 p0, t1674 * p1, MethodInfo* method){
	typedef void (*m8629_ftn) (t124, t1674 *);
	static m8629_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m8629_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoMethodInfo::get_method_info(System.IntPtr,System.Reflection.MonoMethodInfo&)");
	_il2cpp_icall_func(p0, p1);
}
 t1674  m8630 (t5 * __this, t124 p0, MethodInfo* method){
	t1674  V_0 = {0};
	{
		m8629(NULL, p0, (&V_0), &m8629_MI);
		return V_0;
	}
}
extern MethodInfo m8631_MI;
 t114 * m8631 (t5 * __this, t124 p0, MethodInfo* method){
	t1674  V_0 = {0};
	{
		t1674  L_0 = m8630(NULL, p0, &m8630_MI);
		V_0 = L_0;
		t114 * L_1 = ((&V_0)->f0);
		return L_1;
	}
}
extern MethodInfo m8632_MI;
 t114 * m8632 (t5 * __this, t124 p0, MethodInfo* method){
	t1674  V_0 = {0};
	{
		t1674  L_0 = m8630(NULL, p0, &m8630_MI);
		V_0 = L_0;
		t114 * L_1 = ((&V_0)->f1);
		return L_1;
	}
}
extern MethodInfo m8633_MI;
 int32_t m8633 (t5 * __this, t124 p0, MethodInfo* method){
	t1674  V_0 = {0};
	{
		t1674  L_0 = m8630(NULL, p0, &m8630_MI);
		V_0 = L_0;
		int32_t L_1 = ((&V_0)->f2);
		return L_1;
	}
}
extern MethodInfo m8634_MI;
 int32_t m8634 (t5 * __this, t124 p0, MethodInfo* method){
	t1674  V_0 = {0};
	{
		t1674  L_0 = m8630(NULL, p0, &m8630_MI);
		V_0 = L_0;
		int32_t L_1 = ((&V_0)->f4);
		return L_1;
	}
}
 t776* m8635 (t5 * __this, t124 p0, t450 * p1, MethodInfo* method){
	typedef t776* (*m8635_ftn) (t124, t450 *);
	static m8635_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m8635_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoMethodInfo::get_parameter_info(System.IntPtr,System.Reflection.MemberInfo)");
	return _il2cpp_icall_func(p0, p1);
}
extern MethodInfo m8636_MI;
 t776* m8636 (t5 * __this, t124 p0, t450 * p1, MethodInfo* method){
	{
		t776* L_0 = m8635(NULL, p0, p1, &m8635_MI);
		return L_0;
	}
}
// Metadata Definition System.Reflection.MonoMethodInfo
extern Il2CppType t114_0_0_1;
FieldInfo t1674_f0_FieldInfo = 
{
	"parent", &t114_0_0_1, &t1674_TI, offsetof(t1674, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t114_0_0_1;
FieldInfo t1674_f1_FieldInfo = 
{
	"ret", &t114_0_0_1, &t1674_TI, offsetof(t1674, f1) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t1615_0_0_3;
FieldInfo t1674_f2_FieldInfo = 
{
	"attrs", &t1615_0_0_3, &t1674_TI, offsetof(t1674, f2) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t1639_0_0_3;
FieldInfo t1674_f3_FieldInfo = 
{
	"iattrs", &t1639_0_0_3, &t1674_TI, offsetof(t1674, f3) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t1411_0_0_1;
FieldInfo t1674_f4_FieldInfo = 
{
	"callconv", &t1411_0_0_1, &t1674_TI, offsetof(t1674, f4) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t1674_FIs[] =
{
	&t1674_f0_FieldInfo,
	&t1674_f1_FieldInfo,
	&t1674_f2_FieldInfo,
	&t1674_f3_FieldInfo,
	&t1674_f4_FieldInfo,
	NULL
};
extern Il2CppType t124_0_0_0;
extern Il2CppType t1674_1_0_2;
extern Il2CppType t1674_1_0_0;
static ParameterInfo t1674_m8629_ParameterInfos[] = 
{
	{"handle", 0, 134221954, &EmptyCustomAttributesCache, &t124_0_0_0},
	{"info", 1, 134221955, &EmptyCustomAttributesCache, &t1674_1_0_2},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t124_t2361 (MethodInfo* method, void* obj, void** args);
MethodInfo m8629_MI = 
{
	"get_method_info", (methodPointerType)&m8629, &t1674_TI, &t109_0_0_0, RuntimeInvoker_t109_t124_t2361, t1674_m8629_ParameterInfos, &EmptyCustomAttributesCache, 145, 4096, 255, 2, false, false, 3383, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
static ParameterInfo t1674_m8630_ParameterInfos[] = 
{
	{"handle", 0, 134221956, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t1674_0_0_0;
extern void* RuntimeInvoker_t1674_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m8630_MI = 
{
	"GetMethodInfo", (methodPointerType)&m8630, &t1674_TI, &t1674_0_0_0, RuntimeInvoker_t1674_t124, t1674_m8630_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, false, 3384, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
static ParameterInfo t1674_m8631_ParameterInfos[] = 
{
	{"handle", 0, 134221957, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t114_0_0_0;
extern void* RuntimeInvoker_t5_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m8631_MI = 
{
	"GetDeclaringType", (methodPointerType)&m8631, &t1674_TI, &t114_0_0_0, RuntimeInvoker_t5_t124, t1674_m8631_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, false, 3385, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
static ParameterInfo t1674_m8632_ParameterInfos[] = 
{
	{"handle", 0, 134221958, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t114_0_0_0;
extern void* RuntimeInvoker_t5_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m8632_MI = 
{
	"GetReturnType", (methodPointerType)&m8632, &t1674_TI, &t114_0_0_0, RuntimeInvoker_t5_t124, t1674_m8632_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, false, 3386, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
static ParameterInfo t1674_m8633_ParameterInfos[] = 
{
	{"handle", 0, 134221959, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t1615_0_0_0;
extern void* RuntimeInvoker_t1615_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m8633_MI = 
{
	"GetAttributes", (methodPointerType)&m8633, &t1674_TI, &t1615_0_0_0, RuntimeInvoker_t1615_t124, t1674_m8633_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, false, 3387, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
static ParameterInfo t1674_m8634_ParameterInfos[] = 
{
	{"handle", 0, 134221960, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t1411_0_0_0;
extern void* RuntimeInvoker_t1411_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m8634_MI = 
{
	"GetCallingConvention", (methodPointerType)&m8634, &t1674_TI, &t1411_0_0_0, RuntimeInvoker_t1411_t124, t1674_m8634_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, false, 3388, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern Il2CppType t450_0_0_0;
static ParameterInfo t1674_m8635_ParameterInfos[] = 
{
	{"handle", 0, 134221961, &EmptyCustomAttributesCache, &t124_0_0_0},
	{"member", 1, 134221962, &EmptyCustomAttributesCache, &t450_0_0_0},
};
extern Il2CppType t776_0_0_0;
extern void* RuntimeInvoker_t5_t124_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8635_MI = 
{
	"get_parameter_info", (methodPointerType)&m8635, &t1674_TI, &t776_0_0_0, RuntimeInvoker_t5_t124_t5, t1674_m8635_ParameterInfos, &EmptyCustomAttributesCache, 145, 4096, 255, 2, false, false, 3389, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern Il2CppType t450_0_0_0;
static ParameterInfo t1674_m8636_ParameterInfos[] = 
{
	{"handle", 0, 134221963, &EmptyCustomAttributesCache, &t124_0_0_0},
	{"member", 1, 134221964, &EmptyCustomAttributesCache, &t450_0_0_0},
};
extern Il2CppType t776_0_0_0;
extern void* RuntimeInvoker_t5_t124_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8636_MI = 
{
	"GetParametersInfo", (methodPointerType)&m8636, &t1674_TI, &t776_0_0_0, RuntimeInvoker_t5_t124_t5, t1674_m8636_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 2, false, false, 3390, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1674_MIs[] =
{
	&m8629_MI,
	&m8630_MI,
	&m8631_MI,
	&m8632_MI,
	&m8633_MI,
	&m8634_MI,
	&m8635_MI,
	&m8636_MI,
	NULL
};
static MethodInfo* t1674_VT[] =
{
	&m2042_MI,
	&m465_MI,
	&m2043_MI,
	&m2148_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1674_0_0_0;
TypeInfo t1674_TI = 
{
	&g_mscorlib_dll_Image, NULL, "MonoMethodInfo", "System.Reflection", t1674_MIs, NULL, t1674_FIs, NULL, &t267_TI, NULL, NULL, &t1674_TI, NULL, t1674_VT, &EmptyCustomAttributesCache, &t1674_TI, &t1674_0_0_0, &t1674_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1674)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048840, 0, true, false, false, false, false, false, false, false, false, false, false, false, 8, 0, 5, 0, 0, 4, 0, 0};
#include "t1619.h"
#ifndef _MSC_VER
#else
#endif

#include "t1684.h"
#include "t1413.h"
#include "t1707.h"
extern TypeInfo t1616_TI;
extern TypeInfo t1684_TI;
extern TypeInfo t1935_TI;
extern TypeInfo t1983_TI;
extern TypeInfo t1707_TI;
extern TypeInfo t1413_TI;
#include "t1684MD.h"
#include "t1707MD.h"
extern MethodInfo m10819_MI;
extern MethodInfo m8639_MI;
extern MethodInfo m8640_MI;
extern MethodInfo m8748_MI;
extern MethodInfo m8644_MI;
extern MethodInfo m8744_MI;
extern MethodInfo m8806_MI;
extern MethodInfo m8655_MI;
extern MethodInfo m6841_MI;
extern MethodInfo m8657_MI;
extern MethodInfo m8649_MI;
extern MethodInfo m10158_MI;
extern MethodInfo m8661_MI;


 void m8637 (t1619 * __this, MethodInfo* method){
	{
		m8567(__this, &m8567_MI);
		return;
	}
}
extern MethodInfo m8638_MI;
 void m8638 (t1619 * __this, t1616  p0, MethodInfo* method){
	{
		m8567(__this, &m8567_MI);
		t124 L_0 = m10821((&p0), &m10821_MI);
		__this->f0 = L_0;
		return;
	}
}
 t11* m8639 (t5 * __this, t774 * p0, MethodInfo* method){
	typedef t11* (*m8639_ftn) (t774 *);
	static m8639_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m8639_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoMethod::get_name(System.Reflection.MethodBase)");
	return _il2cpp_icall_func(p0);
}
 t1619 * m8640 (t5 * __this, t1619 * p0, MethodInfo* method){
	typedef t1619 * (*m8640_ftn) (t1619 *);
	static m8640_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m8640_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoMethod::get_base_definition(System.Reflection.MonoMethod)");
	return _il2cpp_icall_func(p0);
}
 t695 * m8641 (t1619 * __this, MethodInfo* method){
	{
		t1619 * L_0 = m8640(NULL, __this, &m8640_MI);
		return L_0;
	}
}
 t114 * m8642 (t1619 * __this, MethodInfo* method){
	{
		t124 L_0 = (__this->f0);
		t114 * L_1 = m8632(NULL, L_0, &m8632_MI);
		return L_1;
	}
}
 t776* m8643 (t1619 * __this, MethodInfo* method){
	t776* V_0 = {0};
	t776* V_1 = {0};
	{
		t124 L_0 = (__this->f0);
		t776* L_1 = m8636(NULL, L_0, __this, &m8636_MI);
		V_0 = L_1;
		V_1 = ((t776*)SZArrayNew(InitializedTypeInfo(&t776_TI), (((int32_t)(((t107 *)V_0)->max_length)))));
		VirtActionInvoker2< t107 *, int32_t >::Invoke(&m4993_MI, V_0, (t107 *)(t107 *)V_1, 0);
		return V_1;
	}
}
 t5 * m8644 (t1619 * __this, t5 * p0, t168* p1, t142 ** p2, MethodInfo* method){
	typedef t5 * (*m8644_ftn) (t1619 *, t5 *, t168*, t142 **);
	static m8644_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m8644_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoMethod::InternalInvoke(System.Object,System.Object[],System.Exception&)");
	return _il2cpp_icall_func(__this, p0, p1, p2);
}
 t5 * m8645 (t1619 * __this, t5 * p0, int32_t p1, t769 * p2, t168* p3, t771 * p4, MethodInfo* method){
	t776* V_0 = {0};
	int32_t V_1 = 0;
	t142 * V_2 = {0};
	t5 * V_3 = {0};
	t142 * V_4 = {0};
	t142 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t142 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	{
		if (p2)
		{
			goto IL_000c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t769_TI));
		t769 * L_0 = m8518(NULL, &m8518_MI);
		p2 = L_0;
	}

IL_000c:
	{
		t124 L_1 = (__this->f0);
		t776* L_2 = m8636(NULL, L_1, __this, &m8636_MI);
		V_0 = L_2;
		if (p3)
		{
			goto IL_0022;
		}
	}
	{
		if ((((int32_t)(((t107 *)V_0)->max_length))))
		{
			goto IL_002f;
		}
	}

IL_0022:
	{
		if (!p3)
		{
			goto IL_003a;
		}
	}
	{
		if ((((int32_t)(((int32_t)(((t107 *)p3)->max_length)))) == ((int32_t)(((int32_t)(((t107 *)V_0)->max_length))))))
		{
			goto IL_003a;
		}
	}

IL_002f:
	{
		t1685 * L_3 = (t1685 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1685_TI));
		m8748(L_3, (t11*) &_stringLiteral1882, &m8748_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_003a:
	{
		if (((int32_t)((int32_t)p1&(int32_t)((int32_t)65536))))
		{
			goto IL_005d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t769_TI));
		bool L_4 = m8519(NULL, p2, p3, V_0, p4, &m8519_MI);
		if (L_4)
		{
			goto IL_005b;
		}
	}
	{
		t160 * L_5 = (t160 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t160_TI));
		m2582(L_5, (t11*) &_stringLiteral1883, &m2582_MI);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_005b:
	{
		goto IL_0089;
	}

IL_005d:
	{
		V_1 = 0;
		goto IL_0083;
	}

IL_0061:
	{
		int32_t L_6 = V_1;
		t114 * L_7 = m531((*(t5 **)(t5 **)SZArrayLdElema(p3, L_6)), &m531_MI);
		int32_t L_8 = V_1;
		t114 * L_9 = (t114 *)VirtFuncInvoker0< t114 * >::Invoke(&m3587_MI, (*(t775 **)(t775 **)SZArrayLdElema(V_0, L_8)));
		if ((((t114 *)L_7) == ((t114 *)L_9)))
		{
			goto IL_007f;
		}
	}
	{
		t160 * L_10 = (t160 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t160_TI));
		m2582(L_10, (t11*) &_stringLiteral1882, &m2582_MI);
		il2cpp_codegen_raise_exception(L_10);
	}

IL_007f:
	{
		V_1 = ((int32_t)(V_1+1));
	}

IL_0083:
	{
		if ((((int32_t)V_1) < ((int32_t)(((int32_t)(((t107 *)V_0)->max_length))))))
		{
			goto IL_0061;
		}
	}

IL_0089:
	{
		bool L_11 = (bool)VirtFuncInvoker0< bool >::Invoke(&m8665_MI, __this);
		if (!L_11)
		{
			goto IL_009c;
		}
	}
	{
		t133 * L_12 = (t133 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t133_TI));
		m4759(L_12, (t11*) &_stringLiteral1884, &m4759_MI);
		il2cpp_codegen_raise_exception(L_12);
	}

IL_009c:
	{
		V_3 = NULL;
	}

IL_009e:
	try
	{ // begin try (depth: 1)
		t5 * L_13 = m8644(__this, p0, p3, (&V_2), &m8644_MI);
		V_3 = L_13;
		// IL_00aa: leave.s IL_00c2
		goto IL_00c2;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (t142 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&t1935_TI, e.ex->object.klass))
			goto IL_00ac;
		if(il2cpp_codegen_class_is_assignable_from (&t1983_TI, e.ex->object.klass))
			goto IL_00b1;
		if(il2cpp_codegen_class_is_assignable_from (&t142_TI, e.ex->object.klass))
			goto IL_00b6;
		throw e;
	}

IL_00ac:
	{ // begin catch(System.Threading.ThreadAbortException)
		il2cpp_codegen_raise_exception(__exception_local);
		// IL_00af: leave.s IL_00c2
		goto IL_00c2;
	} // end catch (depth: 1)

IL_00b1:
	{ // begin catch(System.MethodAccessException)
		il2cpp_codegen_raise_exception(__exception_local);
		// IL_00b4: leave.s IL_00c2
		goto IL_00c2;
	} // end catch (depth: 1)

IL_00b6:
	{ // begin catch(System.Exception)
		V_4 = ((t142 *)__exception_local);
		t1684 * L_14 = (t1684 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1684_TI));
		m8744(L_14, V_4, &m8744_MI);
		il2cpp_codegen_raise_exception(L_14);
		// IL_00c0: leave.s IL_00c2
		goto IL_00c2;
	} // end catch (depth: 1)

IL_00c2:
	{
		if (!V_2)
		{
			goto IL_00c7;
		}
	}
	{
		il2cpp_codegen_raise_exception(V_2);
	}

IL_00c7:
	{
		return V_3;
	}
}
 t1616  m8646 (t1619 * __this, MethodInfo* method){
	{
		t124 L_0 = (__this->f0);
		t1616  L_1 = {0};
		m10819(&L_1, L_0, &m10819_MI);
		return L_1;
	}
}
 int32_t m8647 (t1619 * __this, MethodInfo* method){
	{
		t124 L_0 = (__this->f0);
		int32_t L_1 = m8633(NULL, L_0, &m8633_MI);
		return L_1;
	}
}
 int32_t m8648 (t1619 * __this, MethodInfo* method){
	{
		t124 L_0 = (__this->f0);
		int32_t L_1 = m8634(NULL, L_0, &m8634_MI);
		return L_1;
	}
}
 t114 * m8649 (t1619 * __this, MethodInfo* method){
	{
		t114 * L_0 = (__this->f2);
		return L_0;
	}
}
 t114 * m8650 (t1619 * __this, MethodInfo* method){
	{
		t124 L_0 = (__this->f0);
		t114 * L_1 = m8631(NULL, L_0, &m8631_MI);
		return L_1;
	}
}
 t11* m8651 (t1619 * __this, MethodInfo* method){
	{
		t11* L_0 = (__this->f1);
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		t11* L_1 = (__this->f1);
		return L_1;
	}

IL_000f:
	{
		t11* L_2 = m8639(NULL, __this, &m8639_MI);
		return L_2;
	}
}
 bool m8652 (t1619 * __this, t114 * p0, bool p1, MethodInfo* method){
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1989_TI));
		bool L_0 = m10639(NULL, __this, p0, p1, &m10639_MI);
		return L_0;
	}
}
 t168* m8653 (t1619 * __this, bool p0, MethodInfo* method){
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1989_TI));
		t168* L_0 = m10638(NULL, __this, p0, &m10638_MI);
		return L_0;
	}
}
 t168* m8654 (t1619 * __this, t114 * p0, bool p1, MethodInfo* method){
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1989_TI));
		t168* L_0 = m10637(NULL, __this, p0, p1, &m10637_MI);
		return L_0;
	}
}
 t1413 * m8655 (t5 * __this, t124 p0, MethodInfo* method){
	typedef t1413 * (*m8655_ftn) (t124);
	static m8655_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m8655_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoMethod::GetDllImportAttribute(System.IntPtr)");
	return _il2cpp_icall_func(p0);
}
extern MethodInfo m8656_MI;
 t168* m8656 (t1619 * __this, MethodInfo* method){
	int32_t V_0 = 0;
	t1674  V_1 = {0};
	t168* V_2 = {0};
	t1413 * V_3 = {0};
	{
		V_0 = 0;
		t124 L_0 = (__this->f0);
		t1674  L_1 = m8630(NULL, L_0, &m8630_MI);
		V_1 = L_1;
		int32_t L_2 = ((&V_1)->f3);
		if (!((int32_t)((int32_t)L_2&(int32_t)((int32_t)128))))
		{
			goto IL_0021;
		}
	}
	{
		V_0 = ((int32_t)(V_0+1));
	}

IL_0021:
	{
		int32_t L_3 = ((&V_1)->f2);
		if (!((int32_t)((int32_t)L_3&(int32_t)((int32_t)8192))))
		{
			goto IL_0034;
		}
	}
	{
		V_0 = ((int32_t)(V_0+1));
	}

IL_0034:
	{
		if (V_0)
		{
			goto IL_0039;
		}
	}
	{
		return (t168*)NULL;
	}

IL_0039:
	{
		V_2 = ((t168*)SZArrayNew(InitializedTypeInfo(&t168_TI), V_0));
		V_0 = 0;
		int32_t L_4 = ((&V_1)->f3);
		if (!((int32_t)((int32_t)L_4&(int32_t)((int32_t)128))))
		{
			goto IL_005d;
		}
	}
	{
		int32_t L_5 = V_0;
		V_0 = ((int32_t)(L_5+1));
		t1707 * L_6 = (t1707 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1707_TI));
		m8806(L_6, &m8806_MI);
		ArrayElementTypeCheck (V_2, L_6);
		*((t5 **)(t5 **)SZArrayLdElema(V_2, L_5)) = (t5 *)L_6;
	}

IL_005d:
	{
		int32_t L_7 = ((&V_1)->f2);
		if (!((int32_t)((int32_t)L_7&(int32_t)((int32_t)8192))))
		{
			goto IL_0096;
		}
	}
	{
		t124 L_8 = (__this->f0);
		t1413 * L_9 = m8655(NULL, L_8, &m8655_MI);
		V_3 = L_9;
		int32_t L_10 = ((&V_1)->f3);
		if (!((int32_t)((int32_t)L_10&(int32_t)((int32_t)128))))
		{
			goto IL_008e;
		}
	}
	{
		V_3->f5 = 1;
	}

IL_008e:
	{
		int32_t L_11 = V_0;
		V_0 = ((int32_t)(L_11+1));
		ArrayElementTypeCheck (V_2, V_3);
		*((t5 **)(t5 **)SZArrayLdElema(V_2, L_11)) = (t5 *)V_3;
	}

IL_0096:
	{
		return V_2;
	}
}
 bool m8657 (t5 * __this, t114 * p0, MethodInfo* method){
	int32_t G_B5_0 = 0;
	int32_t G_B7_0 = 0;
	int32_t G_B9_0 = 0;
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(&m6785_MI, p0);
		if (!L_0)
		{
			goto IL_0033;
		}
	}
	{
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(&m6791_MI, p0);
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		t114 * L_2 = (t114 *)VirtFuncInvoker0< t114 * >::Invoke(&m11046_MI, p0);
		bool L_3 = (bool)VirtFuncInvoker0< bool >::Invoke(&m3646_MI, L_2);
		if (L_3)
		{
			goto IL_002d;
		}
	}
	{
		t114 * L_4 = (t114 *)VirtFuncInvoker0< t114 * >::Invoke(&m11046_MI, p0);
		bool L_5 = m6841(L_4, &m6841_MI);
		G_B5_0 = ((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
		goto IL_002e;
	}

IL_002d:
	{
		G_B5_0 = 0;
	}

IL_002e:
	{
		G_B7_0 = G_B5_0;
		goto IL_0031;
	}

IL_0030:
	{
		G_B7_0 = 1;
	}

IL_0031:
	{
		G_B9_0 = G_B7_0;
		goto IL_0034;
	}

IL_0033:
	{
		G_B9_0 = 0;
	}

IL_0034:
	{
		return G_B9_0;
	}
}
 t11* m8658 (t1619 * __this, MethodInfo* method){
	t448 * V_0 = {0};
	t114 * V_1 = {0};
	t675* V_2 = {0};
	int32_t V_3 = 0;
	t776* V_4 = {0};
	int32_t V_5 = 0;
	t114 * V_6 = {0};
	bool V_7 = false;
	{
		t448 * L_0 = (t448 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t448_TI));
		m1971(L_0, &m1971_MI);
		V_0 = L_0;
		t114 * L_1 = (t114 *)VirtFuncInvoker0< t114 * >::Invoke(&m8642_MI, __this);
		V_1 = L_1;
		bool L_2 = m8657(NULL, V_1, &m8657_MI);
		if (!L_2)
		{
			goto IL_0024;
		}
	}
	{
		t11* L_3 = (t11*)VirtFuncInvoker0< t11* >::Invoke(&m6831_MI, V_1);
		m3574(V_0, L_3, &m3574_MI);
		goto IL_0031;
	}

IL_0024:
	{
		t11* L_4 = (t11*)VirtFuncInvoker0< t11* >::Invoke(&m3571_MI, V_1);
		m3574(V_0, L_4, &m3574_MI);
	}

IL_0031:
	{
		m3574(V_0, (t11*) &_stringLiteral111, &m3574_MI);
		t11* L_5 = (t11*)VirtFuncInvoker0< t11* >::Invoke(&m8651_MI, __this);
		m3574(V_0, L_5, &m3574_MI);
		bool L_6 = (bool)VirtFuncInvoker0< bool >::Invoke(&m8664_MI, __this);
		if (!L_6)
		{
			goto IL_009e;
		}
	}
	{
		t675* L_7 = (t675*)VirtFuncInvoker0< t675* >::Invoke(&m8662_MI, __this);
		V_2 = L_7;
		m3574(V_0, (t11*) &_stringLiteral209, &m3574_MI);
		V_3 = 0;
		goto IL_008c;
	}

IL_0069:
	{
		if ((((int32_t)V_3) <= ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		m3574(V_0, (t11*) &_stringLiteral1113, &m3574_MI);
	}

IL_0079:
	{
		int32_t L_8 = V_3;
		t11* L_9 = (t11*)VirtFuncInvoker0< t11* >::Invoke(&m3571_MI, (*(t114 **)(t114 **)SZArrayLdElema(V_2, L_8)));
		m3574(V_0, L_9, &m3574_MI);
		V_3 = ((int32_t)(V_3+1));
	}

IL_008c:
	{
		if ((((int32_t)V_3) < ((int32_t)(((int32_t)(((t107 *)V_2)->max_length))))))
		{
			goto IL_0069;
		}
	}
	{
		m3574(V_0, (t11*) &_stringLiteral210, &m3574_MI);
	}

IL_009e:
	{
		m3574(V_0, (t11*) &_stringLiteral217, &m3574_MI);
		t776* L_10 = (t776*)VirtFuncInvoker0< t776* >::Invoke(&m8643_MI, __this);
		V_4 = L_10;
		V_5 = 0;
		goto IL_0127;
	}

IL_00b7:
	{
		if ((((int32_t)V_5) <= ((int32_t)0)))
		{
			goto IL_00c8;
		}
	}
	{
		m3574(V_0, (t11*) &_stringLiteral218, &m3574_MI);
	}

IL_00c8:
	{
		int32_t L_11 = V_5;
		t114 * L_12 = (t114 *)VirtFuncInvoker0< t114 * >::Invoke(&m3587_MI, (*(t775 **)(t775 **)SZArrayLdElema(V_4, L_11)));
		V_6 = L_12;
		bool L_13 = (bool)VirtFuncInvoker0< bool >::Invoke(&m6784_MI, V_6);
		V_7 = L_13;
		if (!V_7)
		{
			goto IL_00ea;
		}
	}
	{
		t114 * L_14 = (t114 *)VirtFuncInvoker0< t114 * >::Invoke(&m11046_MI, V_6);
		V_6 = L_14;
	}

IL_00ea:
	{
		bool L_15 = m8657(NULL, V_6, &m8657_MI);
		if (!L_15)
		{
			goto IL_0103;
		}
	}
	{
		t11* L_16 = (t11*)VirtFuncInvoker0< t11* >::Invoke(&m6831_MI, V_6);
		m3574(V_0, L_16, &m3574_MI);
		goto IL_0111;
	}

IL_0103:
	{
		t11* L_17 = (t11*)VirtFuncInvoker0< t11* >::Invoke(&m3571_MI, V_6);
		m3574(V_0, L_17, &m3574_MI);
	}

IL_0111:
	{
		if (!V_7)
		{
			goto IL_0121;
		}
	}
	{
		m3574(V_0, (t11*) &_stringLiteral1291, &m3574_MI);
	}

IL_0121:
	{
		V_5 = ((int32_t)(V_5+1));
	}

IL_0127:
	{
		if ((((int32_t)V_5) < ((int32_t)(((int32_t)(((t107 *)V_4)->max_length))))))
		{
			goto IL_00b7;
		}
	}
	{
		int32_t L_18 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m8648_MI, __this);
		if (!((int32_t)((int32_t)L_18&(int32_t)2)))
		{
			goto IL_0158;
		}
	}
	{
		if ((((int32_t)(((int32_t)(((t107 *)V_4)->max_length)))) <= ((int32_t)0)))
		{
			goto IL_014c;
		}
	}
	{
		m3574(V_0, (t11*) &_stringLiteral218, &m3574_MI);
	}

IL_014c:
	{
		m3574(V_0, (t11*) &_stringLiteral1885, &m3574_MI);
	}

IL_0158:
	{
		m3574(V_0, (t11*) &_stringLiteral92, &m3574_MI);
		t11* L_19 = (t11*)VirtFuncInvoker0< t11* >::Invoke(&m1975_MI, V_0);
		return L_19;
	}
}
 void m8659 (t1619 * __this, t829 * p0, t830  p1, MethodInfo* method){
	t675* V_0 = {0};
	t675* G_B4_0 = {0};
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(&m8664_MI, __this);
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(&m8663_MI, __this);
		if (L_1)
		{
			goto IL_0018;
		}
	}
	{
		t675* L_2 = (t675*)VirtFuncInvoker0< t675* >::Invoke(&m8662_MI, __this);
		G_B4_0 = L_2;
		goto IL_0019;
	}

IL_0018:
	{
		G_B4_0 = ((t675*)(NULL));
	}

IL_0019:
	{
		V_0 = G_B4_0;
		t11* L_3 = (t11*)VirtFuncInvoker0< t11* >::Invoke(&m8651_MI, __this);
		t114 * L_4 = (t114 *)VirtFuncInvoker0< t114 * >::Invoke(&m8649_MI, __this);
		t11* L_5 = (t11*)VirtFuncInvoker0< t11* >::Invoke(&m8658_MI, __this);
		m8549(NULL, p0, L_3, L_4, L_5, 8, V_0, &m8549_MI);
		return;
	}
}
 t695 * m8660 (t1619 * __this, t675* p0, MethodInfo* method){
	t114 * V_0 = {0};
	t675* V_1 = {0};
	int32_t V_2 = 0;
	t695 * V_3 = {0};
	{
		if (p0)
		{
			goto IL_000e;
		}
	}
	{
		t484 * L_0 = (t484 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t484_TI));
		m3596(L_0, (t11*) &_stringLiteral1886, &m3596_MI);
		il2cpp_codegen_raise_exception(L_0);
	}

IL_000e:
	{
		V_1 = p0;
		V_2 = 0;
		goto IL_0025;
	}

IL_0014:
	{
		int32_t L_1 = V_2;
		V_0 = (*(t114 **)(t114 **)SZArrayLdElema(V_1, L_1));
		if (V_0)
		{
			goto IL_0021;
		}
	}
	{
		t484 * L_2 = (t484 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t484_TI));
		m10158(L_2, &m10158_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0021:
	{
		V_2 = ((int32_t)(V_2+1));
	}

IL_0025:
	{
		if ((((int32_t)V_2) < ((int32_t)(((int32_t)(((t107 *)V_1)->max_length))))))
		{
			goto IL_0014;
		}
	}
	{
		t695 * L_3 = m8661(__this, p0, &m8661_MI);
		V_3 = L_3;
		if (V_3)
		{
			goto IL_005b;
		}
	}
	{
		t675* L_4 = (t675*)VirtFuncInvoker0< t675* >::Invoke(&m8662_MI, __this);
		int32_t L_5 = (((int32_t)(((t107 *)L_4)->max_length)));
		t5 * L_6 = Box(InitializedTypeInfo(&t110_TI), &L_5);
		int32_t L_7 = (((int32_t)(((t107 *)p0)->max_length)));
		t5 * L_8 = Box(InitializedTypeInfo(&t110_TI), &L_7);
		IL2CPP_RUNTIME_CLASS_INIT((&t11_TI));
		t11* L_9 = m588(NULL, (t11*) &_stringLiteral1887, L_6, L_8, &m588_MI);
		t160 * L_10 = (t160 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t160_TI));
		m2582(L_10, L_9, &m2582_MI);
		il2cpp_codegen_raise_exception(L_10);
	}

IL_005b:
	{
		return V_3;
	}
}
 t695 * m8661 (t1619 * __this, t675* p0, MethodInfo* method){
	typedef t695 * (*m8661_ftn) (t1619 *, t675*);
	static m8661_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m8661_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoMethod::MakeGenericMethod_impl(System.Type[])");
	return _il2cpp_icall_func(__this, p0);
}
 t675* m8662 (t1619 * __this, MethodInfo* method){
	typedef t675* (*m8662_ftn) (t1619 *);
	static m8662_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m8662_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoMethod::GetGenericArguments()");
	return _il2cpp_icall_func(__this);
}
 bool m8663 (t1619 * __this, MethodInfo* method){
	typedef bool (*m8663_ftn) (t1619 *);
	static m8663_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m8663_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoMethod::get_IsGenericMethodDefinition()");
	return _il2cpp_icall_func(__this);
}
 bool m8664 (t1619 * __this, MethodInfo* method){
	typedef bool (*m8664_ftn) (t1619 *);
	static m8664_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m8664_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoMethod::get_IsGenericMethod()");
	return _il2cpp_icall_func(__this);
}
 bool m8665 (t1619 * __this, MethodInfo* method){
	t114 * V_0 = {0};
	t675* V_1 = {0};
	int32_t V_2 = 0;
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(&m8664_MI, __this);
		if (!L_0)
		{
			goto IL_002b;
		}
	}
	{
		t675* L_1 = (t675*)VirtFuncInvoker0< t675* >::Invoke(&m8662_MI, __this);
		V_1 = L_1;
		V_2 = 0;
		goto IL_0025;
	}

IL_0013:
	{
		int32_t L_2 = V_2;
		V_0 = (*(t114 **)(t114 **)SZArrayLdElema(V_1, L_2));
		bool L_3 = (bool)VirtFuncInvoker0< bool >::Invoke(&m6834_MI, V_0);
		if (!L_3)
		{
			goto IL_0021;
		}
	}
	{
		return 1;
	}

IL_0021:
	{
		V_2 = ((int32_t)(V_2+1));
	}

IL_0025:
	{
		if ((((int32_t)V_2) < ((int32_t)(((int32_t)(((t107 *)V_1)->max_length))))))
		{
			goto IL_0013;
		}
	}

IL_002b:
	{
		t114 * L_4 = (t114 *)VirtFuncInvoker0< t114 * >::Invoke(&m8650_MI, __this);
		bool L_5 = (bool)VirtFuncInvoker0< bool >::Invoke(&m6834_MI, L_4);
		return L_5;
	}
}
// Metadata Definition System.Reflection.MonoMethod
extern Il2CppType t124_0_0_3;
FieldInfo t1619_f0_FieldInfo = 
{
	"mhandle", &t124_0_0_3, &t1619_TI, offsetof(t1619, f0), &EmptyCustomAttributesCache};
extern Il2CppType t11_0_0_1;
FieldInfo t1619_f1_FieldInfo = 
{
	"name", &t11_0_0_1, &t1619_TI, offsetof(t1619, f1), &EmptyCustomAttributesCache};
extern Il2CppType t114_0_0_1;
FieldInfo t1619_f2_FieldInfo = 
{
	"reftype", &t114_0_0_1, &t1619_TI, offsetof(t1619, f2), &EmptyCustomAttributesCache};
static FieldInfo* t1619_FIs[] =
{
	&t1619_f0_FieldInfo,
	&t1619_f1_FieldInfo,
	&t1619_f2_FieldInfo,
	NULL
};
static PropertyInfo t1619____ReturnType_PropertyInfo = 
{
	&t1619_TI, "ReturnType", &m8642_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1619____MethodHandle_PropertyInfo = 
{
	&t1619_TI, "MethodHandle", &m8646_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1619____Attributes_PropertyInfo = 
{
	&t1619_TI, "Attributes", &m8647_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1619____CallingConvention_PropertyInfo = 
{
	&t1619_TI, "CallingConvention", &m8648_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1619____ReflectedType_PropertyInfo = 
{
	&t1619_TI, "ReflectedType", &m8649_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1619____DeclaringType_PropertyInfo = 
{
	&t1619_TI, "DeclaringType", &m8650_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1619____Name_PropertyInfo = 
{
	&t1619_TI, "Name", &m8651_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1619____IsGenericMethodDefinition_PropertyInfo = 
{
	&t1619_TI, "IsGenericMethodDefinition", &m8663_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1619____IsGenericMethod_PropertyInfo = 
{
	&t1619_TI, "IsGenericMethod", &m8664_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1619____ContainsGenericParameters_PropertyInfo = 
{
	&t1619_TI, "ContainsGenericParameters", &m8665_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1619_PIs[] =
{
	&t1619____ReturnType_PropertyInfo,
	&t1619____MethodHandle_PropertyInfo,
	&t1619____Attributes_PropertyInfo,
	&t1619____CallingConvention_PropertyInfo,
	&t1619____ReflectedType_PropertyInfo,
	&t1619____DeclaringType_PropertyInfo,
	&t1619____Name_PropertyInfo,
	&t1619____IsGenericMethodDefinition_PropertyInfo,
	&t1619____IsGenericMethod_PropertyInfo,
	&t1619____ContainsGenericParameters_PropertyInfo,
	NULL
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m8637_MI = 
{
	".ctor", (methodPointerType)&m8637, &t1619_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6275, 0, 255, 0, false, false, 3391, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1616_0_0_0;
static ParameterInfo t1619_m8638_ParameterInfos[] = 
{
	{"mhandle", 0, 134221965, &EmptyCustomAttributesCache, &t1616_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t1616 (MethodInfo* method, void* obj, void** args);
MethodInfo m8638_MI = 
{
	".ctor", (methodPointerType)&m8638, &t1619_TI, &t109_0_0_0, RuntimeInvoker_t109_t1616, t1619_m8638_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 1, false, false, 3392, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t774_0_0_0;
static ParameterInfo t1619_m8639_ParameterInfos[] = 
{
	{"method", 0, 134221966, &EmptyCustomAttributesCache, &t774_0_0_0},
};
extern Il2CppType t11_0_0_0;
extern void* RuntimeInvoker_t5_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8639_MI = 
{
	"get_name", (methodPointerType)&m8639, &t1619_TI, &t11_0_0_0, RuntimeInvoker_t5_t5, t1619_m8639_ParameterInfos, &EmptyCustomAttributesCache, 147, 4096, 255, 1, false, false, 3393, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1619_0_0_0;
extern Il2CppType t1619_0_0_0;
static ParameterInfo t1619_m8640_ParameterInfos[] = 
{
	{"method", 0, 134221967, &EmptyCustomAttributesCache, &t1619_0_0_0},
};
extern Il2CppType t1619_0_0_0;
extern void* RuntimeInvoker_t5_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8640_MI = 
{
	"get_base_definition", (methodPointerType)&m8640, &t1619_TI, &t1619_0_0_0, RuntimeInvoker_t5_t5, t1619_m8640_ParameterInfos, &EmptyCustomAttributesCache, 147, 4096, 255, 1, false, false, 3394, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t695_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8641_MI = 
{
	"GetBaseDefinition", (methodPointerType)&m8641, &t1619_TI, &t695_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 198, 0, 29, 0, false, false, 3395, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t114_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8642_MI = 
{
	"get_ReturnType", (methodPointerType)&m8642, &t1619_TI, &t114_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2246, 0, 30, 0, false, false, 3396, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t776_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8643_MI = 
{
	"GetParameters", (methodPointerType)&m8643, &t1619_TI, &t776_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 198, 0, 14, 0, false, false, 3397, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t5_0_0_0;
extern Il2CppType t168_0_0_0;
extern Il2CppType t142_1_0_2;
extern Il2CppType t142_1_0_0;
static ParameterInfo t1619_m8644_ParameterInfos[] = 
{
	{"obj", 0, 134221968, &EmptyCustomAttributesCache, &t5_0_0_0},
	{"parameters", 1, 134221969, &EmptyCustomAttributesCache, &t168_0_0_0},
	{"exc", 2, 134221970, &EmptyCustomAttributesCache, &t142_1_0_2},
};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5_t5_t5_t2038 (MethodInfo* method, void* obj, void** args);
MethodInfo m8644_MI = 
{
	"InternalInvoke", (methodPointerType)&m8644, &t1619_TI, &t5_0_0_0, RuntimeInvoker_t5_t5_t5_t2038, t1619_m8644_ParameterInfos, &EmptyCustomAttributesCache, 131, 4096, 255, 3, false, false, 3398, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t5_0_0_0;
extern Il2CppType t768_0_0_0;
extern Il2CppType t769_0_0_0;
extern Il2CppType t168_0_0_0;
extern Il2CppType t771_0_0_0;
static ParameterInfo t1619_m8645_ParameterInfos[] = 
{
	{"obj", 0, 134221971, &EmptyCustomAttributesCache, &t5_0_0_0},
	{"invokeAttr", 1, 134221972, &EmptyCustomAttributesCache, &t768_0_0_0},
	{"binder", 2, 134221973, &EmptyCustomAttributesCache, &t769_0_0_0},
	{"parameters", 3, 134221974, &EmptyCustomAttributesCache, &t168_0_0_0},
	{"culture", 4, 134221975, &EmptyCustomAttributesCache, &t771_0_0_0},
};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5_t5_t110_t5_t5_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8645_MI = 
{
	"Invoke", (methodPointerType)&m8645, &t1619_TI, &t5_0_0_0, RuntimeInvoker_t5_t5_t110_t5_t5_t5, t1619_m8645_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 17, 5, false, false, 3399, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1616_0_0_0;
extern void* RuntimeInvoker_t1616 (MethodInfo* method, void* obj, void** args);
MethodInfo m8646_MI = 
{
	"get_MethodHandle", (methodPointerType)&m8646, &t1619_TI, &t1616_0_0_0, RuntimeInvoker_t1616, NULL, &EmptyCustomAttributesCache, 2246, 0, 18, 0, false, false, 3400, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1615_0_0_0;
extern void* RuntimeInvoker_t1615 (MethodInfo* method, void* obj, void** args);
MethodInfo m8647_MI = 
{
	"get_Attributes", (methodPointerType)&m8647, &t1619_TI, &t1615_0_0_0, RuntimeInvoker_t1615, NULL, &EmptyCustomAttributesCache, 2246, 0, 19, 0, false, false, 3401, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1411_0_0_0;
extern void* RuntimeInvoker_t1411 (MethodInfo* method, void* obj, void** args);
MethodInfo m8648_MI = 
{
	"get_CallingConvention", (methodPointerType)&m8648, &t1619_TI, &t1411_0_0_0, RuntimeInvoker_t1411, NULL, &EmptyCustomAttributesCache, 2246, 0, 20, 0, false, false, 3402, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t114_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8649_MI = 
{
	"get_ReflectedType", (methodPointerType)&m8649, &t1619_TI, &t114_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2246, 0, 9, 0, false, false, 3403, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t114_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8650_MI = 
{
	"get_DeclaringType", (methodPointerType)&m8650, &t1619_TI, &t114_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2246, 0, 6, 0, false, false, 3404, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t11_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8651_MI = 
{
	"get_Name", (methodPointerType)&m8651, &t1619_TI, &t11_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2246, 0, 8, 0, false, false, 3405, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t114_0_0_0;
extern Il2CppType t108_0_0_0;
static ParameterInfo t1619_m8652_ParameterInfos[] = 
{
	{"attributeType", 0, 134221976, &EmptyCustomAttributesCache, &t114_0_0_0},
	{"inherit", 1, 134221977, &EmptyCustomAttributesCache, &t108_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5_t111 (MethodInfo* method, void* obj, void** args);
MethodInfo m8652_MI = 
{
	"IsDefined", (methodPointerType)&m8652, &t1619_TI, &t108_0_0_0, RuntimeInvoker_t108_t5_t111, t1619_m8652_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 11, 2, false, false, 3406, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t108_0_0_0;
static ParameterInfo t1619_m8653_ParameterInfos[] = 
{
	{"inherit", 0, 134221978, &EmptyCustomAttributesCache, &t108_0_0_0},
};
extern Il2CppType t168_0_0_0;
extern void* RuntimeInvoker_t5_t111 (MethodInfo* method, void* obj, void** args);
MethodInfo m8653_MI = 
{
	"GetCustomAttributes", (methodPointerType)&m8653, &t1619_TI, &t168_0_0_0, RuntimeInvoker_t5_t111, t1619_m8653_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 12, 1, false, false, 3407, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t114_0_0_0;
extern Il2CppType t108_0_0_0;
static ParameterInfo t1619_m8654_ParameterInfos[] = 
{
	{"attributeType", 0, 134221979, &EmptyCustomAttributesCache, &t114_0_0_0},
	{"inherit", 1, 134221980, &EmptyCustomAttributesCache, &t108_0_0_0},
};
extern Il2CppType t168_0_0_0;
extern void* RuntimeInvoker_t5_t5_t111 (MethodInfo* method, void* obj, void** args);
MethodInfo m8654_MI = 
{
	"GetCustomAttributes", (methodPointerType)&m8654, &t1619_TI, &t168_0_0_0, RuntimeInvoker_t5_t5_t111, t1619_m8654_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 13, 2, false, false, 3408, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
static ParameterInfo t1619_m8655_ParameterInfos[] = 
{
	{"mhandle", 0, 134221981, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t1413_0_0_0;
extern void* RuntimeInvoker_t5_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m8655_MI = 
{
	"GetDllImportAttribute", (methodPointerType)&m8655, &t1619_TI, &t1413_0_0_0, RuntimeInvoker_t5_t124, t1619_m8655_ParameterInfos, &EmptyCustomAttributesCache, 147, 4096, 255, 1, false, false, 3409, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t168_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8656_MI = 
{
	"GetPseudoCustomAttributes", (methodPointerType)&m8656, &t1619_TI, &t168_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 131, 0, 255, 0, false, false, 3410, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t114_0_0_0;
static ParameterInfo t1619_m8657_ParameterInfos[] = 
{
	{"type", 0, 134221982, &EmptyCustomAttributesCache, &t114_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8657_MI = 
{
	"ShouldPrintFullName", (methodPointerType)&m8657, &t1619_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t1619_m8657_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 1, false, false, 3411, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t11_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8658_MI = 
{
	"ToString", (methodPointerType)&m8658, &t1619_TI, &t11_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 198, 0, 3, 0, false, false, 3412, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t829_0_0_0;
extern Il2CppType t830_0_0_0;
static ParameterInfo t1619_m8659_ParameterInfos[] = 
{
	{"info", 0, 134221983, &EmptyCustomAttributesCache, &t829_0_0_0},
	{"context", 1, 134221984, &EmptyCustomAttributesCache, &t830_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t830 (MethodInfo* method, void* obj, void** args);
MethodInfo m8659_MI = 
{
	"GetObjectData", (methodPointerType)&m8659, &t1619_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t830, t1619_m8659_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 32, 2, false, false, 3413, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t675_0_0_0;
static ParameterInfo t1619_m8660_ParameterInfos[] = 
{
	{"methodInstantiation", 0, 134221985, &EmptyCustomAttributesCache, &t675_0_0_0},
};
extern Il2CppType t695_0_0_0;
extern void* RuntimeInvoker_t5_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8660_MI = 
{
	"MakeGenericMethod", (methodPointerType)&m8660, &t1619_TI, &t695_0_0_0, RuntimeInvoker_t5_t5, t1619_m8660_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 31, 1, false, false, 3414, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t675_0_0_0;
static ParameterInfo t1619_m8661_ParameterInfos[] = 
{
	{"types", 0, 134221986, &EmptyCustomAttributesCache, &t675_0_0_0},
};
extern Il2CppType t695_0_0_0;
extern void* RuntimeInvoker_t5_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8661_MI = 
{
	"MakeGenericMethod_impl", (methodPointerType)&m8661, &t1619_TI, &t695_0_0_0, RuntimeInvoker_t5_t5, t1619_m8661_ParameterInfos, &EmptyCustomAttributesCache, 129, 4096, 255, 1, false, false, 3415, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t675_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8662_MI = 
{
	"GetGenericArguments", (methodPointerType)&m8662, &t1619_TI, &t675_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 198, 4096, 25, 0, false, false, 3416, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
MethodInfo m8663_MI = 
{
	"get_IsGenericMethodDefinition", (methodPointerType)&m8663, &t1619_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2246, 4096, 27, 0, false, false, 3417, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
MethodInfo m8664_MI = 
{
	"get_IsGenericMethod", (methodPointerType)&m8664, &t1619_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2246, 4096, 28, 0, false, false, 3418, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
MethodInfo m8665_MI = 
{
	"get_ContainsGenericParameters", (methodPointerType)&m8665, &t1619_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2246, 0, 26, 0, false, false, 3419, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1619_MIs[] =
{
	&m8637_MI,
	&m8638_MI,
	&m8639_MI,
	&m8640_MI,
	&m8641_MI,
	&m8642_MI,
	&m8643_MI,
	&m8644_MI,
	&m8645_MI,
	&m8646_MI,
	&m8647_MI,
	&m8648_MI,
	&m8649_MI,
	&m8650_MI,
	&m8651_MI,
	&m8652_MI,
	&m8653_MI,
	&m8654_MI,
	&m8655_MI,
	&m8656_MI,
	&m8657_MI,
	&m8658_MI,
	&m8659_MI,
	&m8660_MI,
	&m8661_MI,
	&m8662_MI,
	&m8663_MI,
	&m8664_MI,
	&m8665_MI,
	NULL
};
static MethodInfo* t1619_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m8658_MI,
	&m8654_MI,
	&m8652_MI,
	&m8650_MI,
	&m8568_MI,
	&m8651_MI,
	&m8649_MI,
	&m6845_MI,
	&m8652_MI,
	&m8653_MI,
	&m8654_MI,
	&m8643_MI,
	&m8557_MI,
	&m8558_MI,
	&m8645_MI,
	&m8646_MI,
	&m8647_MI,
	&m8648_MI,
	&m8560_MI,
	&m3598_MI,
	&m8561_MI,
	&m8562_MI,
	&m8662_MI,
	&m8665_MI,
	&m8663_MI,
	&m8664_MI,
	&m8641_MI,
	&m8642_MI,
	&m8660_MI,
	&m8659_MI,
};
static TypeInfo* t1619_ITIs[] = 
{
	&t517_TI,
};
static Il2CppInterfaceOffsetPair t1619_IOs[] = 
{
	{ &t2344_TI, 29},
	{ &t2343_TI, 14},
	{ &t1990_TI, 4},
	{ &t2247_TI, 6},
	{ &t517_TI, 32},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1619_1_0_0;
struct t1619;
TypeInfo t1619_TI = 
{
	&g_mscorlib_dll_Image, NULL, "MonoMethod", "System.Reflection", t1619_MIs, t1619_PIs, t1619_FIs, NULL, &t695_TI, NULL, NULL, &t1619_TI, t1619_ITIs, t1619_VT, &EmptyCustomAttributesCache, &t1619_TI, &t1619_0_0_0, &t1619_1_0_0, t1619_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1619), 0, -1, 0, 0, -1, 1056768, 0, false, false, false, false, false, false, false, false, false, false, false, false, 29, 10, 3, 0, 0, 33, 1, 5};
#include "t1673.h"
#ifndef _MSC_VER
#else
#endif

#include "t1981.h"
extern TypeInfo t1981_TI;
#include "t1981MD.h"
extern MethodInfo m10608_MI;
extern MethodInfo m8668_MI;
extern MethodInfo m8674_MI;


 void m8666 (t1673 * __this, MethodInfo* method){
	{
		m8522(__this, &m8522_MI);
		return;
	}
}
 t776* m8667 (t1673 * __this, MethodInfo* method){
	{
		t124 L_0 = (__this->f2);
		t776* L_1 = m8636(NULL, L_0, __this, &m8636_MI);
		return L_1;
	}
}
 t5 * m8668 (t1673 * __this, t5 * p0, t168* p1, t142 ** p2, MethodInfo* method){
	typedef t5 * (*m8668_ftn) (t1673 *, t5 *, t168*, t142 **);
	static m8668_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m8668_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoCMethod::InternalInvoke(System.Object,System.Object[],System.Exception&)");
	return _il2cpp_icall_func(__this, p0, p1, p2);
}
 t5 * m8669 (t1673 * __this, t5 * p0, int32_t p1, t769 * p2, t168* p3, t771 * p4, MethodInfo* method){
	t776* V_0 = {0};
	int32_t V_1 = 0;
	t142 * V_2 = {0};
	t5 * V_3 = {0};
	t142 * V_4 = {0};
	t142 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t142 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	t5 * G_B31_0 = {0};
	{
		if (p2)
		{
			goto IL_000c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t769_TI));
		t769 * L_0 = m8518(NULL, &m8518_MI);
		p2 = L_0;
	}

IL_000c:
	{
		t776* L_1 = (t776*)VirtFuncInvoker0< t776* >::Invoke(&m8667_MI, __this);
		V_0 = L_1;
		if (p3)
		{
			goto IL_001c;
		}
	}
	{
		if ((((int32_t)(((t107 *)V_0)->max_length))))
		{
			goto IL_0029;
		}
	}

IL_001c:
	{
		if (!p3)
		{
			goto IL_0034;
		}
	}
	{
		if ((((int32_t)(((int32_t)(((t107 *)p3)->max_length)))) == ((int32_t)(((int32_t)(((t107 *)V_0)->max_length))))))
		{
			goto IL_0034;
		}
	}

IL_0029:
	{
		t1685 * L_2 = (t1685 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1685_TI));
		m8748(L_2, (t11*) &_stringLiteral1882, &m8748_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0034:
	{
		if (((int32_t)((int32_t)p1&(int32_t)((int32_t)65536))))
		{
			goto IL_0057;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t769_TI));
		bool L_3 = m8519(NULL, p2, p3, V_0, p4, &m8519_MI);
		if (L_3)
		{
			goto IL_0055;
		}
	}
	{
		t160 * L_4 = (t160 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t160_TI));
		m2582(L_4, (t11*) &_stringLiteral1883, &m2582_MI);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0055:
	{
		goto IL_0083;
	}

IL_0057:
	{
		V_1 = 0;
		goto IL_007d;
	}

IL_005b:
	{
		int32_t L_5 = V_1;
		t114 * L_6 = m531((*(t5 **)(t5 **)SZArrayLdElema(p3, L_5)), &m531_MI);
		int32_t L_7 = V_1;
		t114 * L_8 = (t114 *)VirtFuncInvoker0< t114 * >::Invoke(&m3587_MI, (*(t775 **)(t775 **)SZArrayLdElema(V_0, L_7)));
		if ((((t114 *)L_6) == ((t114 *)L_8)))
		{
			goto IL_0079;
		}
	}
	{
		t160 * L_9 = (t160 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t160_TI));
		m2582(L_9, (t11*) &_stringLiteral1882, &m2582_MI);
		il2cpp_codegen_raise_exception(L_9);
	}

IL_0079:
	{
		V_1 = ((int32_t)(V_1+1));
	}

IL_007d:
	{
		if ((((int32_t)V_1) < ((int32_t)(((int32_t)(((t107 *)V_0)->max_length))))))
		{
			goto IL_005b;
		}
	}

IL_0083:
	{
		if (p0)
		{
			goto IL_00ae;
		}
	}
	{
		t114 * L_10 = (t114 *)VirtFuncInvoker0< t114 * >::Invoke(&m8675_MI, __this);
		bool L_11 = (bool)VirtFuncInvoker0< bool >::Invoke(&m6834_MI, L_10);
		if (!L_11)
		{
			goto IL_00ae;
		}
	}
	{
		t114 * L_12 = (t114 *)VirtFuncInvoker0< t114 * >::Invoke(&m8675_MI, __this);
		IL2CPP_RUNTIME_CLASS_INIT((&t11_TI));
		t11* L_13 = m1957(NULL, (t11*) &_stringLiteral1888, L_12, (t11*) &_stringLiteral1889, &m1957_MI);
		t1981 * L_14 = (t1981 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1981_TI));
		m10608(L_14, L_13, &m10608_MI);
		il2cpp_codegen_raise_exception(L_14);
	}

IL_00ae:
	{
		if (!((int32_t)((int32_t)p1&(int32_t)((int32_t)512))))
		{
			goto IL_00da;
		}
	}
	{
		t114 * L_15 = (t114 *)VirtFuncInvoker0< t114 * >::Invoke(&m8675_MI, __this);
		bool L_16 = (bool)VirtFuncInvoker0< bool >::Invoke(&m6782_MI, L_15);
		if (!L_16)
		{
			goto IL_00da;
		}
	}
	{
		t114 * L_17 = (t114 *)VirtFuncInvoker0< t114 * >::Invoke(&m8675_MI, __this);
		IL2CPP_RUNTIME_CLASS_INIT((&t11_TI));
		t11* L_18 = m462(NULL, (t11*) &_stringLiteral1890, L_17, &m462_MI);
		t1981 * L_19 = (t1981 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1981_TI));
		m10608(L_19, L_18, &m10608_MI);
		il2cpp_codegen_raise_exception(L_19);
	}

IL_00da:
	{
		V_2 = (t142 *)NULL;
		V_3 = NULL;
	}

IL_00de:
	try
	{ // begin try (depth: 1)
		t5 * L_20 = m8668(__this, p0, p3, (&V_2), &m8668_MI);
		V_3 = L_20;
		// IL_00ea: leave.s IL_00fd
		goto IL_00fd;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (t142 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&t1983_TI, e.ex->object.klass))
			goto IL_00ec;
		if(il2cpp_codegen_class_is_assignable_from (&t142_TI, e.ex->object.klass))
			goto IL_00f1;
		throw e;
	}

IL_00ec:
	{ // begin catch(System.MethodAccessException)
		il2cpp_codegen_raise_exception(__exception_local);
		// IL_00ef: leave.s IL_00fd
		goto IL_00fd;
	} // end catch (depth: 1)

IL_00f1:
	{ // begin catch(System.Exception)
		V_4 = ((t142 *)__exception_local);
		t1684 * L_21 = (t1684 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1684_TI));
		m8744(L_21, V_4, &m8744_MI);
		il2cpp_codegen_raise_exception(L_21);
		// IL_00fb: leave.s IL_00fd
		goto IL_00fd;
	} // end catch (depth: 1)

IL_00fd:
	{
		if (!V_2)
		{
			goto IL_0102;
		}
	}
	{
		il2cpp_codegen_raise_exception(V_2);
	}

IL_0102:
	{
		if (p0)
		{
			goto IL_0108;
		}
	}
	{
		G_B31_0 = V_3;
		goto IL_0109;
	}

IL_0108:
	{
		G_B31_0 = NULL;
	}

IL_0109:
	{
		return G_B31_0;
	}
}
 t5 * m8670 (t1673 * __this, int32_t p0, t769 * p1, t168* p2, t771 * p3, MethodInfo* method){
	{
		t5 * L_0 = (t5 *)VirtFuncInvoker5< t5 *, t5 *, int32_t, t769 *, t168*, t771 * >::Invoke(&m8669_MI, __this, NULL, p0, p1, p2, p3);
		return L_0;
	}
}
 t1616  m8671 (t1673 * __this, MethodInfo* method){
	{
		t124 L_0 = (__this->f2);
		t1616  L_1 = {0};
		m10819(&L_1, L_0, &m10819_MI);
		return L_1;
	}
}
 int32_t m8672 (t1673 * __this, MethodInfo* method){
	{
		t124 L_0 = (__this->f2);
		int32_t L_1 = m8633(NULL, L_0, &m8633_MI);
		return L_1;
	}
}
 int32_t m8673 (t1673 * __this, MethodInfo* method){
	{
		t124 L_0 = (__this->f2);
		int32_t L_1 = m8634(NULL, L_0, &m8634_MI);
		return L_1;
	}
}
 t114 * m8674 (t1673 * __this, MethodInfo* method){
	{
		t114 * L_0 = (__this->f4);
		return L_0;
	}
}
 t114 * m8675 (t1673 * __this, MethodInfo* method){
	{
		t124 L_0 = (__this->f2);
		t114 * L_1 = m8631(NULL, L_0, &m8631_MI);
		return L_1;
	}
}
 t11* m8676 (t1673 * __this, MethodInfo* method){
	{
		t11* L_0 = (__this->f3);
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		t11* L_1 = (__this->f3);
		return L_1;
	}

IL_000f:
	{
		t11* L_2 = m8639(NULL, __this, &m8639_MI);
		return L_2;
	}
}
 bool m8677 (t1673 * __this, t114 * p0, bool p1, MethodInfo* method){
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1989_TI));
		bool L_0 = m10639(NULL, __this, p0, p1, &m10639_MI);
		return L_0;
	}
}
 t168* m8678 (t1673 * __this, bool p0, MethodInfo* method){
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1989_TI));
		t168* L_0 = m10638(NULL, __this, p0, &m10638_MI);
		return L_0;
	}
}
 t168* m8679 (t1673 * __this, t114 * p0, bool p1, MethodInfo* method){
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1989_TI));
		t168* L_0 = m10637(NULL, __this, p0, p1, &m10637_MI);
		return L_0;
	}
}
 t11* m8680 (t1673 * __this, MethodInfo* method){
	t448 * V_0 = {0};
	t776* V_1 = {0};
	int32_t V_2 = 0;
	{
		t448 * L_0 = (t448 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t448_TI));
		m1971(L_0, &m1971_MI);
		V_0 = L_0;
		m3574(V_0, (t11*) &_stringLiteral1891, &m3574_MI);
		t11* L_1 = (t11*)VirtFuncInvoker0< t11* >::Invoke(&m8676_MI, __this);
		m3574(V_0, L_1, &m3574_MI);
		m3574(V_0, (t11*) &_stringLiteral217, &m3574_MI);
		t776* L_2 = (t776*)VirtFuncInvoker0< t776* >::Invoke(&m8667_MI, __this);
		V_1 = L_2;
		V_2 = 0;
		goto IL_005e;
	}

IL_0036:
	{
		if ((((int32_t)V_2) <= ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		m3574(V_0, (t11*) &_stringLiteral218, &m3574_MI);
	}

IL_0046:
	{
		int32_t L_3 = V_2;
		t114 * L_4 = (t114 *)VirtFuncInvoker0< t114 * >::Invoke(&m3587_MI, (*(t775 **)(t775 **)SZArrayLdElema(V_1, L_3)));
		t11* L_5 = (t11*)VirtFuncInvoker0< t11* >::Invoke(&m3571_MI, L_4);
		m3574(V_0, L_5, &m3574_MI);
		V_2 = ((int32_t)(V_2+1));
	}

IL_005e:
	{
		if ((((int32_t)V_2) < ((int32_t)(((int32_t)(((t107 *)V_1)->max_length))))))
		{
			goto IL_0036;
		}
	}
	{
		int32_t L_6 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m8673_MI, __this);
		if ((((uint32_t)L_6) != ((uint32_t)3)))
		{
			goto IL_0079;
		}
	}
	{
		m3574(V_0, (t11*) &_stringLiteral1892, &m3574_MI);
	}

IL_0079:
	{
		m3574(V_0, (t11*) &_stringLiteral92, &m3574_MI);
		t11* L_7 = (t11*)VirtFuncInvoker0< t11* >::Invoke(&m1975_MI, V_0);
		return L_7;
	}
}
 void m8681 (t1673 * __this, t829 * p0, t830  p1, MethodInfo* method){
	{
		t11* L_0 = (t11*)VirtFuncInvoker0< t11* >::Invoke(&m8676_MI, __this);
		t114 * L_1 = (t114 *)VirtFuncInvoker0< t114 * >::Invoke(&m8674_MI, __this);
		t11* L_2 = (t11*)VirtFuncInvoker0< t11* >::Invoke(&m8680_MI, __this);
		m8548(NULL, p0, L_0, L_1, L_2, 1, &m8548_MI);
		return;
	}
}
// Metadata Definition System.Reflection.MonoCMethod
extern Il2CppType t124_0_0_3;
FieldInfo t1673_f2_FieldInfo = 
{
	"mhandle", &t124_0_0_3, &t1673_TI, offsetof(t1673, f2), &EmptyCustomAttributesCache};
extern Il2CppType t11_0_0_1;
FieldInfo t1673_f3_FieldInfo = 
{
	"name", &t11_0_0_1, &t1673_TI, offsetof(t1673, f3), &EmptyCustomAttributesCache};
extern Il2CppType t114_0_0_1;
FieldInfo t1673_f4_FieldInfo = 
{
	"reftype", &t114_0_0_1, &t1673_TI, offsetof(t1673, f4), &EmptyCustomAttributesCache};
static FieldInfo* t1673_FIs[] =
{
	&t1673_f2_FieldInfo,
	&t1673_f3_FieldInfo,
	&t1673_f4_FieldInfo,
	NULL
};
static PropertyInfo t1673____MethodHandle_PropertyInfo = 
{
	&t1673_TI, "MethodHandle", &m8671_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1673____Attributes_PropertyInfo = 
{
	&t1673_TI, "Attributes", &m8672_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1673____CallingConvention_PropertyInfo = 
{
	&t1673_TI, "CallingConvention", &m8673_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1673____ReflectedType_PropertyInfo = 
{
	&t1673_TI, "ReflectedType", &m8674_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1673____DeclaringType_PropertyInfo = 
{
	&t1673_TI, "DeclaringType", &m8675_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1673____Name_PropertyInfo = 
{
	&t1673_TI, "Name", &m8676_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1673_PIs[] =
{
	&t1673____MethodHandle_PropertyInfo,
	&t1673____Attributes_PropertyInfo,
	&t1673____CallingConvention_PropertyInfo,
	&t1673____ReflectedType_PropertyInfo,
	&t1673____DeclaringType_PropertyInfo,
	&t1673____Name_PropertyInfo,
	NULL
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m8666_MI = 
{
	".ctor", (methodPointerType)&m8666, &t1673_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 3420, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t776_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8667_MI = 
{
	"GetParameters", (methodPointerType)&m8667, &t1673_TI, &t776_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 198, 0, 14, 0, false, false, 3421, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t5_0_0_0;
extern Il2CppType t168_0_0_0;
extern Il2CppType t142_1_0_2;
static ParameterInfo t1673_m8668_ParameterInfos[] = 
{
	{"obj", 0, 134221987, &EmptyCustomAttributesCache, &t5_0_0_0},
	{"parameters", 1, 134221988, &EmptyCustomAttributesCache, &t168_0_0_0},
	{"exc", 2, 134221989, &EmptyCustomAttributesCache, &t142_1_0_2},
};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5_t5_t5_t2038 (MethodInfo* method, void* obj, void** args);
MethodInfo m8668_MI = 
{
	"InternalInvoke", (methodPointerType)&m8668, &t1673_TI, &t5_0_0_0, RuntimeInvoker_t5_t5_t5_t2038, t1673_m8668_ParameterInfos, &EmptyCustomAttributesCache, 131, 4096, 255, 3, false, false, 3422, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t5_0_0_0;
extern Il2CppType t768_0_0_0;
extern Il2CppType t769_0_0_0;
extern Il2CppType t168_0_0_0;
extern Il2CppType t771_0_0_0;
static ParameterInfo t1673_m8669_ParameterInfos[] = 
{
	{"obj", 0, 134221990, &EmptyCustomAttributesCache, &t5_0_0_0},
	{"invokeAttr", 1, 134221991, &EmptyCustomAttributesCache, &t768_0_0_0},
	{"binder", 2, 134221992, &EmptyCustomAttributesCache, &t769_0_0_0},
	{"parameters", 3, 134221993, &EmptyCustomAttributesCache, &t168_0_0_0},
	{"culture", 4, 134221994, &EmptyCustomAttributesCache, &t771_0_0_0},
};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5_t5_t110_t5_t5_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8669_MI = 
{
	"Invoke", (methodPointerType)&m8669, &t1673_TI, &t5_0_0_0, RuntimeInvoker_t5_t5_t110_t5_t5_t5, t1673_m8669_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 17, 5, false, false, 3423, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t768_0_0_0;
extern Il2CppType t769_0_0_0;
extern Il2CppType t168_0_0_0;
extern Il2CppType t771_0_0_0;
static ParameterInfo t1673_m8670_ParameterInfos[] = 
{
	{"invokeAttr", 0, 134221995, &EmptyCustomAttributesCache, &t768_0_0_0},
	{"binder", 1, 134221996, &EmptyCustomAttributesCache, &t769_0_0_0},
	{"parameters", 2, 134221997, &EmptyCustomAttributesCache, &t168_0_0_0},
	{"culture", 3, 134221998, &EmptyCustomAttributesCache, &t771_0_0_0},
};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5_t110_t5_t5_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8670_MI = 
{
	"Invoke", (methodPointerType)&m8670, &t1673_TI, &t5_0_0_0, RuntimeInvoker_t5_t110_t5_t5_t5, t1673_m8670_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 29, 4, false, false, 3424, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1616_0_0_0;
extern void* RuntimeInvoker_t1616 (MethodInfo* method, void* obj, void** args);
MethodInfo m8671_MI = 
{
	"get_MethodHandle", (methodPointerType)&m8671, &t1673_TI, &t1616_0_0_0, RuntimeInvoker_t1616, NULL, &EmptyCustomAttributesCache, 2246, 0, 18, 0, false, false, 3425, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1615_0_0_0;
extern void* RuntimeInvoker_t1615 (MethodInfo* method, void* obj, void** args);
MethodInfo m8672_MI = 
{
	"get_Attributes", (methodPointerType)&m8672, &t1673_TI, &t1615_0_0_0, RuntimeInvoker_t1615, NULL, &EmptyCustomAttributesCache, 2246, 0, 19, 0, false, false, 3426, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1411_0_0_0;
extern void* RuntimeInvoker_t1411 (MethodInfo* method, void* obj, void** args);
MethodInfo m8673_MI = 
{
	"get_CallingConvention", (methodPointerType)&m8673, &t1673_TI, &t1411_0_0_0, RuntimeInvoker_t1411, NULL, &EmptyCustomAttributesCache, 2246, 0, 20, 0, false, false, 3427, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t114_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8674_MI = 
{
	"get_ReflectedType", (methodPointerType)&m8674, &t1673_TI, &t114_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2246, 0, 9, 0, false, false, 3428, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t114_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8675_MI = 
{
	"get_DeclaringType", (methodPointerType)&m8675, &t1673_TI, &t114_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2246, 0, 6, 0, false, false, 3429, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t11_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8676_MI = 
{
	"get_Name", (methodPointerType)&m8676, &t1673_TI, &t11_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2246, 0, 8, 0, false, false, 3430, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t114_0_0_0;
extern Il2CppType t108_0_0_0;
static ParameterInfo t1673_m8677_ParameterInfos[] = 
{
	{"attributeType", 0, 134221999, &EmptyCustomAttributesCache, &t114_0_0_0},
	{"inherit", 1, 134222000, &EmptyCustomAttributesCache, &t108_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5_t111 (MethodInfo* method, void* obj, void** args);
MethodInfo m8677_MI = 
{
	"IsDefined", (methodPointerType)&m8677, &t1673_TI, &t108_0_0_0, RuntimeInvoker_t108_t5_t111, t1673_m8677_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 11, 2, false, false, 3431, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t108_0_0_0;
static ParameterInfo t1673_m8678_ParameterInfos[] = 
{
	{"inherit", 0, 134222001, &EmptyCustomAttributesCache, &t108_0_0_0},
};
extern Il2CppType t168_0_0_0;
extern void* RuntimeInvoker_t5_t111 (MethodInfo* method, void* obj, void** args);
MethodInfo m8678_MI = 
{
	"GetCustomAttributes", (methodPointerType)&m8678, &t1673_TI, &t168_0_0_0, RuntimeInvoker_t5_t111, t1673_m8678_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 12, 1, false, false, 3432, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t114_0_0_0;
extern Il2CppType t108_0_0_0;
static ParameterInfo t1673_m8679_ParameterInfos[] = 
{
	{"attributeType", 0, 134222002, &EmptyCustomAttributesCache, &t114_0_0_0},
	{"inherit", 1, 134222003, &EmptyCustomAttributesCache, &t108_0_0_0},
};
extern Il2CppType t168_0_0_0;
extern void* RuntimeInvoker_t5_t5_t111 (MethodInfo* method, void* obj, void** args);
MethodInfo m8679_MI = 
{
	"GetCustomAttributes", (methodPointerType)&m8679, &t1673_TI, &t168_0_0_0, RuntimeInvoker_t5_t5_t111, t1673_m8679_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 13, 2, false, false, 3433, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t11_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8680_MI = 
{
	"ToString", (methodPointerType)&m8680, &t1673_TI, &t11_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 198, 0, 3, 0, false, false, 3434, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t829_0_0_0;
extern Il2CppType t830_0_0_0;
static ParameterInfo t1673_m8681_ParameterInfos[] = 
{
	{"info", 0, 134222004, &EmptyCustomAttributesCache, &t829_0_0_0},
	{"context", 1, 134222005, &EmptyCustomAttributesCache, &t830_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t830 (MethodInfo* method, void* obj, void** args);
MethodInfo m8681_MI = 
{
	"GetObjectData", (methodPointerType)&m8681, &t1673_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t830, t1673_m8681_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 30, 2, false, false, 3435, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1673_MIs[] =
{
	&m8666_MI,
	&m8667_MI,
	&m8668_MI,
	&m8669_MI,
	&m8670_MI,
	&m8671_MI,
	&m8672_MI,
	&m8673_MI,
	&m8674_MI,
	&m8675_MI,
	&m8676_MI,
	&m8677_MI,
	&m8678_MI,
	&m8679_MI,
	&m8680_MI,
	&m8681_MI,
	NULL
};
static MethodInfo* t1673_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m8680_MI,
	&m8679_MI,
	&m8677_MI,
	&m8675_MI,
	&m8524_MI,
	&m8676_MI,
	&m8674_MI,
	&m6845_MI,
	&m8677_MI,
	&m8678_MI,
	&m8679_MI,
	&m8667_MI,
	&m8557_MI,
	&m8558_MI,
	&m8669_MI,
	&m8671_MI,
	&m8672_MI,
	&m8673_MI,
	&m8560_MI,
	&m3598_MI,
	&m8561_MI,
	&m8562_MI,
	&m8563_MI,
	&m8564_MI,
	&m8565_MI,
	&m8566_MI,
	&m8670_MI,
	&m8681_MI,
};
static TypeInfo* t1673_ITIs[] = 
{
	&t517_TI,
};
static Il2CppInterfaceOffsetPair t1673_IOs[] = 
{
	{ &t2342_TI, 29},
	{ &t2343_TI, 14},
	{ &t1990_TI, 4},
	{ &t2247_TI, 6},
	{ &t517_TI, 30},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1673_0_0_0;
extern Il2CppType t1673_1_0_0;
struct t1673;
TypeInfo t1673_TI = 
{
	&g_mscorlib_dll_Image, NULL, "MonoCMethod", "System.Reflection", t1673_MIs, t1673_PIs, t1673_FIs, NULL, &t797_TI, NULL, NULL, &t1673_TI, t1673_ITIs, t1673_VT, &EmptyCustomAttributesCache, &t1673_TI, &t1673_0_0_0, &t1673_1_0_0, t1673_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1673), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, false, false, false, false, false, false, false, 16, 6, 3, 0, 0, 31, 1, 5};
#include "t1675.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1675_TI;
#include "t1675MD.h"

#include "t1677.h"
#include "t1678.h"


extern MethodInfo m8682_MI;
 void m8682 (t5 * __this, t1677 * p0, t1675 * p1, int32_t p2, MethodInfo* method){
	typedef void (*m8682_ftn) (t1677 *, t1675 *, int32_t);
	static m8682_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m8682_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoPropertyInfo::get_property_info(System.Reflection.MonoProperty,System.Reflection.MonoPropertyInfo&,System.Reflection.PInfo)");
	_il2cpp_icall_func(p0, p1, p2);
}
extern MethodInfo m8683_MI;
 t675* m8683 (t5 * __this, t1677 * p0, bool p1, MethodInfo* method){
	typedef t675* (*m8683_ftn) (t1677 *, bool);
	static m8683_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m8683_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoPropertyInfo::GetTypeModifiers(System.Reflection.MonoProperty,System.Boolean)");
	return _il2cpp_icall_func(p0, p1);
}
// Metadata Definition System.Reflection.MonoPropertyInfo
extern Il2CppType t114_0_0_6;
FieldInfo t1675_f0_FieldInfo = 
{
	"parent", &t114_0_0_6, &t1675_TI, offsetof(t1675, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t11_0_0_6;
FieldInfo t1675_f1_FieldInfo = 
{
	"name", &t11_0_0_6, &t1675_TI, offsetof(t1675, f1) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t695_0_0_6;
FieldInfo t1675_f2_FieldInfo = 
{
	"get_method", &t695_0_0_6, &t1675_TI, offsetof(t1675, f2) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t695_0_0_6;
FieldInfo t1675_f3_FieldInfo = 
{
	"set_method", &t695_0_0_6, &t1675_TI, offsetof(t1675, f3) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t1676_0_0_6;
FieldInfo t1675_f4_FieldInfo = 
{
	"attrs", &t1676_0_0_6, &t1675_TI, offsetof(t1675, f4) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t1675_FIs[] =
{
	&t1675_f0_FieldInfo,
	&t1675_f1_FieldInfo,
	&t1675_f2_FieldInfo,
	&t1675_f3_FieldInfo,
	&t1675_f4_FieldInfo,
	NULL
};
extern Il2CppType t1677_0_0_0;
extern Il2CppType t1677_0_0_0;
extern Il2CppType t1675_1_0_0;
extern Il2CppType t1675_1_0_0;
extern Il2CppType t1678_0_0_0;
extern Il2CppType t1678_0_0_0;
static ParameterInfo t1675_m8682_ParameterInfos[] = 
{
	{"prop", 0, 134222006, &EmptyCustomAttributesCache, &t1677_0_0_0},
	{"info", 1, 134222007, &EmptyCustomAttributesCache, &t1675_1_0_0},
	{"req_info", 2, 134222008, &EmptyCustomAttributesCache, &t1678_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t2362_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m8682_MI = 
{
	"get_property_info", (methodPointerType)&m8682, &t1675_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t2362_t110, t1675_m8682_ParameterInfos, &EmptyCustomAttributesCache, 147, 4096, 255, 3, false, false, 3436, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1677_0_0_0;
extern Il2CppType t108_0_0_0;
static ParameterInfo t1675_m8683_ParameterInfos[] = 
{
	{"prop", 0, 134222009, &EmptyCustomAttributesCache, &t1677_0_0_0},
	{"optional", 1, 134222010, &EmptyCustomAttributesCache, &t108_0_0_0},
};
extern Il2CppType t675_0_0_0;
extern void* RuntimeInvoker_t5_t5_t111 (MethodInfo* method, void* obj, void** args);
MethodInfo m8683_MI = 
{
	"GetTypeModifiers", (methodPointerType)&m8683, &t1675_TI, &t675_0_0_0, RuntimeInvoker_t5_t5_t111, t1675_m8683_ParameterInfos, &EmptyCustomAttributesCache, 147, 4096, 255, 2, false, false, 3437, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1675_MIs[] =
{
	&m8682_MI,
	&m8683_MI,
	NULL
};
static MethodInfo* t1675_VT[] =
{
	&m2042_MI,
	&m465_MI,
	&m2043_MI,
	&m2148_MI,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1675_0_0_0;
TypeInfo t1675_TI = 
{
	&g_mscorlib_dll_Image, NULL, "MonoPropertyInfo", "System.Reflection", t1675_MIs, NULL, t1675_FIs, NULL, &t267_TI, NULL, NULL, &t1675_TI, NULL, t1675_VT, &EmptyCustomAttributesCache, &t1675_TI, &t1675_0_0_0, &t1675_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1675)+ sizeof (Il2CppObject), 0, -1, 0, 0, -1, 1048840, 0, true, false, false, false, false, false, false, false, false, false, false, false, 2, 0, 5, 0, 0, 4, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1678_TI;
#include "t1678MD.h"



// Metadata Definition System.Reflection.PInfo
extern Il2CppType t110_0_0_1542;
FieldInfo t1678_f1_FieldInfo = 
{
	"value__", &t110_0_0_1542, &t1678_TI, offsetof(t1678, f1) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t1678_0_0_32854;
FieldInfo t1678_f2_FieldInfo = 
{
	"Attributes", &t1678_0_0_32854, &t1678_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1678_0_0_32854;
FieldInfo t1678_f3_FieldInfo = 
{
	"GetMethod", &t1678_0_0_32854, &t1678_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1678_0_0_32854;
FieldInfo t1678_f4_FieldInfo = 
{
	"SetMethod", &t1678_0_0_32854, &t1678_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1678_0_0_32854;
FieldInfo t1678_f5_FieldInfo = 
{
	"ReflectedType", &t1678_0_0_32854, &t1678_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1678_0_0_32854;
FieldInfo t1678_f6_FieldInfo = 
{
	"DeclaringType", &t1678_0_0_32854, &t1678_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1678_0_0_32854;
FieldInfo t1678_f7_FieldInfo = 
{
	"Name", &t1678_0_0_32854, &t1678_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t1678_FIs[] =
{
	&t1678_f1_FieldInfo,
	&t1678_f2_FieldInfo,
	&t1678_f3_FieldInfo,
	&t1678_f4_FieldInfo,
	&t1678_f5_FieldInfo,
	&t1678_f6_FieldInfo,
	&t1678_f7_FieldInfo,
	NULL
};
static const int32_t t1678_f2_DefaultValueData = 1;
static Il2CppFieldDefaultValueEntry t1678_f2_DefaultValue = 
{
	&t1678_f2_FieldInfo, { (char*)&t1678_f2_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1678_f3_DefaultValueData = 2;
static Il2CppFieldDefaultValueEntry t1678_f3_DefaultValue = 
{
	&t1678_f3_FieldInfo, { (char*)&t1678_f3_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1678_f4_DefaultValueData = 4;
static Il2CppFieldDefaultValueEntry t1678_f4_DefaultValue = 
{
	&t1678_f4_FieldInfo, { (char*)&t1678_f4_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1678_f5_DefaultValueData = 8;
static Il2CppFieldDefaultValueEntry t1678_f5_DefaultValue = 
{
	&t1678_f5_FieldInfo, { (char*)&t1678_f5_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1678_f6_DefaultValueData = 16;
static Il2CppFieldDefaultValueEntry t1678_f6_DefaultValue = 
{
	&t1678_f6_FieldInfo, { (char*)&t1678_f6_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1678_f7_DefaultValueData = 32;
static Il2CppFieldDefaultValueEntry t1678_f7_DefaultValue = 
{
	&t1678_f7_FieldInfo, { (char*)&t1678_f7_DefaultValueData, &t110_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t1678_FDVs[] = 
{
	&t1678_f2_DefaultValue,
	&t1678_f3_DefaultValue,
	&t1678_f4_DefaultValue,
	&t1678_f5_DefaultValue,
	&t1678_f6_DefaultValue,
	&t1678_f7_DefaultValue,
	NULL
};
static MethodInfo* t1678_MIs[] =
{
	NULL
};
static MethodInfo* t1678_VT[] =
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
static Il2CppInterfaceOffsetPair t1678_IOs[] = 
{
	{ &t120_TI, 4},
	{ &t121_TI, 5},
	{ &t122_TI, 21},
};
void t1678_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t446 * tmp;
		tmp = (t446 *)il2cpp_codegen_object_new (&t446_TI);
		m1932(tmp, &m1932_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1678__CustomAttributeCache = {
1,
NULL,
&t1678_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1678_1_0_0;
extern CustomAttributesCache t1678__CustomAttributeCache;
TypeInfo t1678_TI = 
{
	&g_mscorlib_dll_Image, NULL, "PInfo", "System.Reflection", t1678_MIs, NULL, t1678_FIs, NULL, &t18_TI, NULL, NULL, &t110_TI, NULL, t1678_VT, &t1678__CustomAttributeCache, &t110_TI, &t1678_0_0_0, &t1678_1_0_0, t1678_IOs, NULL, NULL, t1678_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1678)+ sizeof (Il2CppObject), sizeof (int32_t), sizeof(int32_t), 0, 0, -1, 256, 0, true, false, false, true, false, false, false, false, false, false, false, false, 0, 0, 7, 0, 0, 23, 0, 3};
#include "t1679.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1679_TI;
#include "t1679MD.h"



extern MethodInfo m8684_MI;
 void m8684 (t1679 * __this, t5 * p0, t124 p1, MethodInfo* method){
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m8685_MI;
 t5 * m8685 (t1679 * __this, t5 * p0, MethodInfo* method){
	if(__this->f9 != NULL)
	{
		m8685((t1679 *)__this->f9,p0, method);
	}
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->f3.f0));
	if (__this->f2 != NULL && ___methodIsStatic)
	{
		typedef t5 * (*FunctionPointerType) (t5 *, t5 * __this, t5 * p0, MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(NULL,__this->f2,p0,(MethodInfo*)(__this->f3.f0));
	}
	if (__this->f2 != NULL || ___methodIsStatic)
	{
		typedef t5 * (*FunctionPointerType) (t5 * __this, t5 * p0, MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(__this->f2,p0,(MethodInfo*)(__this->f3.f0));
	}
	else
	{
		typedef t5 * (*FunctionPointerType) (t5 * __this, MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(p0,(MethodInfo*)(__this->f3.f0));
	}
}
t5 * pinvoke_delegate_wrapper_t1679(Il2CppObject* delegate, t5 * p0)
{
	typedef t5 * (STDCALL *native_function_ptr_type)(t5 *);
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Marshaling of parameter 'p0' to native representation
	t5 * _p0_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Object'."));

	// Native function invocation and marshaling of return value back from native representation
	t5 * _return_value = _il2cpp_pinvoke_func(_p0_marshaled);
	t5 * __return_value_unmarshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Object'."));

	// Marshaling cleanup of parameter 'p0' native representation

	return __return_value_unmarshaled;
}
extern MethodInfo m8686_MI;
 t5 * m8686 (t1679 * __this, t5 * p0, t222 * p1, t5 * p2, MethodInfo* method){
	void *__d_args[2] = {0};
	__d_args[0] = p0;
	return (t5 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p1, (Il2CppObject*)p2);
}
extern MethodInfo m8687_MI;
 t5 * m8687 (t1679 * __this, t5 * p0, MethodInfo* method){
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
	return (t5 *)__result;
}
// Metadata Definition System.Reflection.MonoProperty/GetterAdapter
extern Il2CppType t5_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t1679_m8684_ParameterInfos[] = 
{
	{"object", 0, 134222040, &EmptyCustomAttributesCache, &t5_0_0_0},
	{"method", 1, 134222041, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m8684_MI = 
{
	".ctor", (methodPointerType)&m8684, &t1679_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t124, t1679_m8684_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, false, 3464, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t5_0_0_0;
static ParameterInfo t1679_m8685_ParameterInfos[] = 
{
	{"_this", 0, 134222042, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8685_MI = 
{
	"Invoke", (methodPointerType)&m8685, &t1679_TI, &t5_0_0_0, RuntimeInvoker_t5_t5, t1679_m8685_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 1, false, false, 3465, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t5_0_0_0;
extern Il2CppType t222_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t1679_m8686_ParameterInfos[] = 
{
	{"_this", 0, 134222043, &EmptyCustomAttributesCache, &t5_0_0_0},
	{"callback", 1, 134222044, &EmptyCustomAttributesCache, &t222_0_0_0},
	{"object", 2, 134222045, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t221_0_0_0;
extern void* RuntimeInvoker_t5_t5_t5_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8686_MI = 
{
	"BeginInvoke", (methodPointerType)&m8686, &t1679_TI, &t221_0_0_0, RuntimeInvoker_t5_t5_t5_t5, t1679_m8686_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 3, false, false, 3466, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t221_0_0_0;
static ParameterInfo t1679_m8687_ParameterInfos[] = 
{
	{"result", 0, 134222046, &EmptyCustomAttributesCache, &t221_0_0_0},
};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8687_MI = 
{
	"EndInvoke", (methodPointerType)&m8687, &t1679_TI, &t5_0_0_0, RuntimeInvoker_t5_t5, t1679_m8687_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, false, 3467, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1679_MIs[] =
{
	&m8684_MI,
	&m8685_MI,
	&m8686_MI,
	&m8687_MI,
	NULL
};
static MethodInfo* t1679_VT[] =
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
	&m8685_MI,
	&m8686_MI,
	&m8687_MI,
};
static Il2CppInterfaceOffsetPair t1679_IOs[] = 
{
	{ &t516_TI, 4},
	{ &t517_TI, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1679_0_0_0;
extern Il2CppType t1679_1_0_0;
struct t1679;
extern TypeInfo t1677_TI;
TypeInfo t1679_TI = 
{
	&g_mscorlib_dll_Image, NULL, "GetterAdapter", "", t1679_MIs, NULL, NULL, NULL, &t353_TI, NULL, &t1677_TI, &t1679_TI, NULL, t1679_VT, &EmptyCustomAttributesCache, &t1679_TI, &t1679_0_0_0, &t1679_1_0_0, t1679_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)pinvoke_delegate_wrapper_t1679, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1679), 0, sizeof(methodPointerType), 0, 0, -1, 259, 0, false, false, false, false, false, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#include "t1680.h"
extern Il2CppGenericContainer t1680_IGC;
extern TypeInfo t1680_gp_T_0_TI;
Il2CppGenericParamFull t1680_gp_T_0_TI_GenericParamFull = { { &t1680_IGC, 0}, {NULL, "T", 0, 0, NULL} };
extern TypeInfo t1680_gp_R_1_TI;
Il2CppGenericParamFull t1680_gp_R_1_TI_GenericParamFull = { { &t1680_IGC, 1}, {NULL, "R", 0, 0, NULL} };
static Il2CppGenericParamFull* t1680_IGPA[2] = 
{
	&t1680_gp_T_0_TI_GenericParamFull,
	&t1680_gp_R_1_TI_GenericParamFull,
};
extern TypeInfo t1680_TI;
Il2CppGenericContainer t1680_IGC = { { NULL, NULL }, NULL, &t1680_TI, 2, 0, t1680_IGPA };
extern Il2CppType t5_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t1680_m11501_ParameterInfos[] = 
{
	{"object", 0, 134222047, &EmptyCustomAttributesCache, &t5_0_0_0},
	{"method", 1, 134222048, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t109_0_0_0;
MethodInfo m11501_MI = 
{
	".ctor", NULL, &t1680_TI, &t109_0_0_0, NULL, t1680_m11501_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, false, 3468, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1680_gp_0_0_0_0;
extern Il2CppType t1680_gp_0_0_0_0;
static ParameterInfo t1680_m11502_ParameterInfos[] = 
{
	{"_this", 0, 134222049, &EmptyCustomAttributesCache, &t1680_gp_0_0_0_0},
};
extern Il2CppType t1680_gp_1_0_0_0;
MethodInfo m11502_MI = 
{
	"Invoke", NULL, &t1680_TI, &t1680_gp_1_0_0_0, NULL, t1680_m11502_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 1, false, false, 3469, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1680_gp_0_0_0_0;
extern Il2CppType t222_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t1680_m11503_ParameterInfos[] = 
{
	{"_this", 0, 134222050, &EmptyCustomAttributesCache, &t1680_gp_0_0_0_0},
	{"callback", 1, 134222051, &EmptyCustomAttributesCache, &t222_0_0_0},
	{"object", 2, 134222052, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t221_0_0_0;
MethodInfo m11503_MI = 
{
	"BeginInvoke", NULL, &t1680_TI, &t221_0_0_0, NULL, t1680_m11503_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 3, false, false, 3470, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t221_0_0_0;
static ParameterInfo t1680_m11504_ParameterInfos[] = 
{
	{"result", 0, 134222053, &EmptyCustomAttributesCache, &t221_0_0_0},
};
extern Il2CppType t1680_gp_1_0_0_0;
MethodInfo m11504_MI = 
{
	"EndInvoke", NULL, &t1680_TI, &t1680_gp_1_0_0_0, NULL, t1680_m11504_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, false, 3471, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1680_MIs[] =
{
	&m11501_MI,
	&m11502_MI,
	&m11503_MI,
	&m11504_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1680_0_0_0;
extern Il2CppType t1680_1_0_0;
struct t1680;
TypeInfo t1680_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Getter`2", "", t1680_MIs, NULL, NULL, NULL, NULL, NULL, &t1677_TI, &t1680_TI, NULL, NULL, NULL, NULL, &t1680_0_0_0, &t1680_1_0_0, NULL, NULL, &t1680_IGC, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, -1, 0, 0, -1, 259, 0, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 0, 0, 0};
#include "t1681.h"
extern Il2CppGenericContainer t1681_IGC;
extern TypeInfo t1681_gp_R_0_TI;
Il2CppGenericParamFull t1681_gp_R_0_TI_GenericParamFull = { { &t1681_IGC, 0}, {NULL, "R", 0, 0, NULL} };
static Il2CppGenericParamFull* t1681_IGPA[1] = 
{
	&t1681_gp_R_0_TI_GenericParamFull,
};
extern TypeInfo t1681_TI;
Il2CppGenericContainer t1681_IGC = { { NULL, NULL }, NULL, &t1681_TI, 1, 0, t1681_IGPA };
extern Il2CppType t5_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t1681_m11505_ParameterInfos[] = 
{
	{"object", 0, 134222054, &EmptyCustomAttributesCache, &t5_0_0_0},
	{"method", 1, 134222055, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t109_0_0_0;
MethodInfo m11505_MI = 
{
	".ctor", NULL, &t1681_TI, &t109_0_0_0, NULL, t1681_m11505_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, false, 3472, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1681_gp_0_0_0_0;
MethodInfo m11506_MI = 
{
	"Invoke", NULL, &t1681_TI, &t1681_gp_0_0_0_0, NULL, NULL, &EmptyCustomAttributesCache, 454, 3, 10, 0, false, false, 3473, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t222_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t1681_m11507_ParameterInfos[] = 
{
	{"callback", 0, 134222056, &EmptyCustomAttributesCache, &t222_0_0_0},
	{"object", 1, 134222057, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t221_0_0_0;
MethodInfo m11507_MI = 
{
	"BeginInvoke", NULL, &t1681_TI, &t221_0_0_0, NULL, t1681_m11507_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 2, false, false, 3474, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t221_0_0_0;
static ParameterInfo t1681_m11508_ParameterInfos[] = 
{
	{"result", 0, 134222058, &EmptyCustomAttributesCache, &t221_0_0_0},
};
extern Il2CppType t1681_gp_0_0_0_0;
MethodInfo m11508_MI = 
{
	"EndInvoke", NULL, &t1681_TI, &t1681_gp_0_0_0_0, NULL, t1681_m11508_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, false, 3475, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1681_MIs[] =
{
	&m11505_MI,
	&m11506_MI,
	&m11507_MI,
	&m11508_MI,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1681_0_0_0;
extern Il2CppType t1681_1_0_0;
struct t1681;
TypeInfo t1681_TI = 
{
	&g_mscorlib_dll_Image, NULL, "StaticGetter`1", "", t1681_MIs, NULL, NULL, NULL, NULL, NULL, &t1677_TI, &t1681_TI, NULL, NULL, NULL, NULL, &t1681_0_0_0, &t1681_1_0_0, NULL, NULL, &t1681_IGC, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, -1, 0, 0, -1, 259, 0, false, false, false, false, true, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
#include "t1677MD.h"

#include "t1676.h"
#include "t1983.h"
#include "t183MD.h"
#include "t1983MD.h"
extern Il2CppType t1681_0_0_0;
extern Il2CppType t1680_0_0_0;
extern MethodInfo m8689_MI;
extern MethodInfo m8729_MI;
extern MethodInfo m8714_MI;
extern MethodInfo m6638_MI;
extern MethodInfo m10610_MI;
extern MethodInfo m6637_MI;
extern MethodInfo m8706_MI;
extern MethodInfo m8698_MI;
extern MethodInfo m8696_MI;
extern MethodInfo m8700_MI;
extern MethodInfo m8693_MI;
extern MethodInfo m8694_MI;
extern MethodInfo m8708_MI;


extern MethodInfo m8688_MI;
 void m8688 (t1677 * __this, MethodInfo* method){
	{
		m8729(__this, &m8729_MI);
		return;
	}
}
 void m8689 (t1677 * __this, int32_t p0, MethodInfo* method){
	{
		int32_t L_0 = (__this->f3);
		if ((((int32_t)((int32_t)((int32_t)L_0&(int32_t)p0))) == ((int32_t)p0)))
		{
			goto IL_0026;
		}
	}
	{
		t1675 * L_1 = &(__this->f2);
		m8682(NULL, __this, L_1, p0, &m8682_MI);
		int32_t L_2 = (__this->f3);
		__this->f3 = ((int32_t)((int32_t)L_2|(int32_t)p0));
	}

IL_0026:
	{
		return;
	}
}
extern MethodInfo m8690_MI;
 int32_t m8690 (t1677 * __this, MethodInfo* method){
	{
		m8689(__this, 1, &m8689_MI);
		t1675 * L_0 = &(__this->f2);
		int32_t L_1 = (L_0->f4);
		return L_1;
	}
}
extern MethodInfo m8691_MI;
 bool m8691 (t1677 * __this, MethodInfo* method){
	{
		m8689(__this, 2, &m8689_MI);
		t1675 * L_0 = &(__this->f2);
		t695 * L_1 = (L_0->f2);
		return ((((int32_t)((((t695 *)L_1) == ((t5 *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
extern MethodInfo m8692_MI;
 bool m8692 (t1677 * __this, MethodInfo* method){
	{
		m8689(__this, 4, &m8689_MI);
		t1675 * L_0 = &(__this->f2);
		t695 * L_1 = (L_0->f3);
		return ((((int32_t)((((t695 *)L_1) == ((t5 *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
 t114 * m8693 (t1677 * __this, MethodInfo* method){
	t776* V_0 = {0};
	{
		m8689(__this, 6, &m8689_MI);
		t1675 * L_0 = &(__this->f2);
		t695 * L_1 = (L_0->f2);
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		t1675 * L_2 = &(__this->f2);
		t695 * L_3 = (L_2->f2);
		t114 * L_4 = (t114 *)VirtFuncInvoker0< t114 * >::Invoke(&m8569_MI, L_3);
		return L_4;
	}

IL_0025:
	{
		t1675 * L_5 = &(__this->f2);
		t695 * L_6 = (L_5->f3);
		t776* L_7 = (t776*)VirtFuncInvoker0< t776* >::Invoke(&m3586_MI, L_6);
		V_0 = L_7;
		int32_t L_8 = ((int32_t)((((int32_t)(((t107 *)V_0)->max_length)))-1));
		t114 * L_9 = (t114 *)VirtFuncInvoker0< t114 * >::Invoke(&m3587_MI, (*(t775 **)(t775 **)SZArrayLdElema(V_0, L_8)));
		return L_9;
	}
}
 t114 * m8694 (t1677 * __this, MethodInfo* method){
	{
		m8689(__this, 8, &m8689_MI);
		t1675 * L_0 = &(__this->f2);
		t114 * L_1 = (L_0->f0);
		return L_1;
	}
}
extern MethodInfo m8695_MI;
 t114 * m8695 (t1677 * __this, MethodInfo* method){
	{
		m8689(__this, ((int32_t)16), &m8689_MI);
		t1675 * L_0 = &(__this->f2);
		t114 * L_1 = (L_0->f0);
		return L_1;
	}
}
 t11* m8696 (t1677 * __this, MethodInfo* method){
	{
		m8689(__this, ((int32_t)32), &m8689_MI);
		t1675 * L_0 = &(__this->f2);
		t11* L_1 = (L_0->f1);
		return L_1;
	}
}
extern MethodInfo m8697_MI;
 t1406* m8697 (t1677 * __this, bool p0, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	t1406* V_2 = {0};
	int32_t V_3 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		m8689(__this, 6, &m8689_MI);
		t1675 * L_0 = &(__this->f2);
		t695 * L_1 = (L_0->f3);
		if (!L_1)
		{
			goto IL_002f;
		}
	}
	{
		if (p0)
		{
			goto IL_002d;
		}
	}
	{
		t1675 * L_2 = &(__this->f2);
		t695 * L_3 = (L_2->f3);
		bool L_4 = (bool)VirtFuncInvoker0< bool >::Invoke(&m8560_MI, L_3);
		if (!L_4)
		{
			goto IL_002f;
		}
	}

IL_002d:
	{
		V_1 = 1;
	}

IL_002f:
	{
		t1675 * L_5 = &(__this->f2);
		t695 * L_6 = (L_5->f2);
		if (!L_6)
		{
			goto IL_0053;
		}
	}
	{
		if (p0)
		{
			goto IL_0051;
		}
	}
	{
		t1675 * L_7 = &(__this->f2);
		t695 * L_8 = (L_7->f2);
		bool L_9 = (bool)VirtFuncInvoker0< bool >::Invoke(&m8560_MI, L_8);
		if (!L_9)
		{
			goto IL_0053;
		}
	}

IL_0051:
	{
		V_0 = 1;
	}

IL_0053:
	{
		V_2 = ((t1406*)SZArrayNew(InitializedTypeInfo(&t1406_TI), ((int32_t)(V_0+V_1))));
		V_3 = 0;
		if (!V_1)
		{
			goto IL_0073;
		}
	}
	{
		int32_t L_10 = V_3;
		V_3 = ((int32_t)(L_10+1));
		t1675 * L_11 = &(__this->f2);
		t695 * L_12 = (L_11->f3);
		ArrayElementTypeCheck (V_2, L_12);
		*((t695 **)(t695 **)SZArrayLdElema(V_2, L_10)) = (t695 *)L_12;
	}

IL_0073:
	{
		if (!V_0)
		{
			goto IL_0088;
		}
	}
	{
		int32_t L_13 = V_3;
		V_3 = ((int32_t)(L_13+1));
		t1675 * L_14 = &(__this->f2);
		t695 * L_15 = (L_14->f2);
		ArrayElementTypeCheck (V_2, L_15);
		*((t695 **)(t695 **)SZArrayLdElema(V_2, L_13)) = (t695 *)L_15;
	}

IL_0088:
	{
		return V_2;
	}
}
 t695 * m8698 (t1677 * __this, bool p0, MethodInfo* method){
	{
		m8689(__this, 2, &m8689_MI);
		t1675 * L_0 = &(__this->f2);
		t695 * L_1 = (L_0->f2);
		if (!L_1)
		{
			goto IL_0035;
		}
	}
	{
		if (p0)
		{
			goto IL_0029;
		}
	}
	{
		t1675 * L_2 = &(__this->f2);
		t695 * L_3 = (L_2->f2);
		bool L_4 = (bool)VirtFuncInvoker0< bool >::Invoke(&m8560_MI, L_3);
		if (!L_4)
		{
			goto IL_0035;
		}
	}

IL_0029:
	{
		t1675 * L_5 = &(__this->f2);
		t695 * L_6 = (L_5->f2);
		return L_6;
	}

IL_0035:
	{
		return (t695 *)NULL;
	}
}
extern MethodInfo m8699_MI;
 t776* m8699 (t1677 * __this, MethodInfo* method){
	t776* V_0 = {0};
	t776* V_1 = {0};
	int32_t V_2 = 0;
	t775 * V_3 = {0};
	{
		m8689(__this, 6, &m8689_MI);
		t1675 * L_0 = &(__this->f2);
		t695 * L_1 = (L_0->f2);
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		t1675 * L_2 = &(__this->f2);
		t695 * L_3 = (L_2->f2);
		t776* L_4 = (t776*)VirtFuncInvoker0< t776* >::Invoke(&m3586_MI, L_3);
		V_0 = L_4;
		goto IL_0063;
	}

IL_0027:
	{
		t1675 * L_5 = &(__this->f2);
		t695 * L_6 = (L_5->f3);
		if (!L_6)
		{
			goto IL_005c;
		}
	}
	{
		t1675 * L_7 = &(__this->f2);
		t695 * L_8 = (L_7->f3);
		t776* L_9 = (t776*)VirtFuncInvoker0< t776* >::Invoke(&m3586_MI, L_8);
		V_1 = L_9;
		V_0 = ((t776*)SZArrayNew(InitializedTypeInfo(&t776_TI), ((int32_t)((((int32_t)(((t107 *)V_1)->max_length)))-1))));
		m6741(NULL, (t107 *)(t107 *)V_1, (t107 *)(t107 *)V_0, (((int32_t)(((t107 *)V_0)->max_length))), &m6741_MI);
		goto IL_0063;
	}

IL_005c:
	{
		return ((t776*)SZArrayNew(InitializedTypeInfo(&t776_TI), 0));
	}

IL_0063:
	{
		V_2 = 0;
		goto IL_0079;
	}

IL_0067:
	{
		int32_t L_10 = V_2;
		V_3 = (*(t775 **)(t775 **)SZArrayLdElema(V_0, L_10));
		t775 * L_11 = (t775 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t775_TI));
		m8714(L_11, V_3, __this, &m8714_MI);
		ArrayElementTypeCheck (V_0, L_11);
		*((t775 **)(t775 **)SZArrayLdElema(V_0, V_2)) = (t775 *)L_11;
		V_2 = ((int32_t)(V_2+1));
	}

IL_0079:
	{
		if ((((int32_t)V_2) < ((int32_t)(((int32_t)(((t107 *)V_0)->max_length))))))
		{
			goto IL_0067;
		}
	}
	{
		return V_0;
	}
}
 t695 * m8700 (t1677 * __this, bool p0, MethodInfo* method){
	{
		m8689(__this, 4, &m8689_MI);
		t1675 * L_0 = &(__this->f2);
		t695 * L_1 = (L_0->f3);
		if (!L_1)
		{
			goto IL_0035;
		}
	}
	{
		if (p0)
		{
			goto IL_0029;
		}
	}
	{
		t1675 * L_2 = &(__this->f2);
		t695 * L_3 = (L_2->f3);
		bool L_4 = (bool)VirtFuncInvoker0< bool >::Invoke(&m8560_MI, L_3);
		if (!L_4)
		{
			goto IL_0035;
		}
	}

IL_0029:
	{
		t1675 * L_5 = &(__this->f2);
		t695 * L_6 = (L_5->f3);
		return L_6;
	}

IL_0035:
	{
		return (t695 *)NULL;
	}
}
extern MethodInfo m8701_MI;
 bool m8701 (t1677 * __this, t114 * p0, bool p1, MethodInfo* method){
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1989_TI));
		bool L_0 = m10639(NULL, __this, p0, 0, &m10639_MI);
		return L_0;
	}
}
extern MethodInfo m8702_MI;
 t168* m8702 (t1677 * __this, bool p0, MethodInfo* method){
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1989_TI));
		t168* L_0 = m10638(NULL, __this, 0, &m10638_MI);
		return L_0;
	}
}
extern MethodInfo m8703_MI;
 t168* m8703 (t1677 * __this, t114 * p0, bool p1, MethodInfo* method){
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1989_TI));
		t168* L_0 = m10637(NULL, __this, p0, 0, &m10637_MI);
		return L_0;
	}
}
extern MethodInfo m8704_MI;
 t1679 * m8704 (t5 * __this, t695 * p0, MethodInfo* method){
	t675* V_0 = {0};
	t114 * V_1 = {0};
	t5 * V_2 = {0};
	t695 * V_3 = {0};
	t114 * V_4 = {0};
	t11* V_5 = {0};
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(&m3598_MI, p0);
		if (!L_0)
		{
			goto IL_002d;
		}
	}
	{
		t675* L_1 = ((t675*)SZArrayNew(InitializedTypeInfo(&t675_TI), 1));
		t114 * L_2 = (t114 *)VirtFuncInvoker0< t114 * >::Invoke(&m8569_MI, p0);
		ArrayElementTypeCheck (L_1, L_2);
		*((t114 **)(t114 **)SZArrayLdElema(L_1, 0)) = (t114 *)L_2;
		V_0 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t114_TI));
		t114 * L_3 = m532(NULL, LoadTypeToken(&t1681_0_0_0), &m532_MI);
		V_4 = L_3;
		V_5 = (t11*) &_stringLiteral1893;
		goto IL_0059;
	}

IL_002d:
	{
		t675* L_4 = ((t675*)SZArrayNew(InitializedTypeInfo(&t675_TI), 2));
		t114 * L_5 = (t114 *)VirtFuncInvoker0< t114 * >::Invoke(&m3584_MI, p0);
		ArrayElementTypeCheck (L_4, L_5);
		*((t114 **)(t114 **)SZArrayLdElema(L_4, 0)) = (t114 *)L_5;
		t675* L_6 = L_4;
		t114 * L_7 = (t114 *)VirtFuncInvoker0< t114 * >::Invoke(&m8569_MI, p0);
		ArrayElementTypeCheck (L_6, L_7);
		*((t114 **)(t114 **)SZArrayLdElema(L_6, 1)) = (t114 *)L_7;
		V_0 = L_6;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t114_TI));
		t114 * L_8 = m532(NULL, LoadTypeToken(&t1680_0_0_0), &m532_MI);
		V_4 = L_8;
		V_5 = (t11*) &_stringLiteral1894;
	}

IL_0059:
	{
		t114 * L_9 = (t114 *)VirtFuncInvoker1< t114 *, t675* >::Invoke(&m3625_MI, V_4, V_0);
		V_1 = L_9;
		t183 * L_10 = m6638(NULL, V_1, p0, 0, &m6638_MI);
		V_2 = L_10;
		if (V_2)
		{
			goto IL_0074;
		}
	}
	{
		t1983 * L_11 = (t1983 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1983_TI));
		m10610(L_11, &m10610_MI);
		il2cpp_codegen_raise_exception(L_11);
	}

IL_0074:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t114_TI));
		t114 * L_12 = m532(NULL, LoadTypeToken(&t1677_0_0_0), &m532_MI);
		t695 * L_13 = (t695 *)VirtFuncInvoker2< t695 *, t11*, int32_t >::Invoke(&m6815_MI, L_12, V_5, ((int32_t)40));
		V_3 = L_13;
		t695 * L_14 = (t695 *)VirtFuncInvoker1< t695 *, t675* >::Invoke(&m8570_MI, V_3, V_0);
		V_3 = L_14;
		t114 * L_15 = m532(NULL, LoadTypeToken(&t1679_0_0_0), &m532_MI);
		t183 * L_16 = m6637(NULL, L_15, V_2, V_3, 1, &m6637_MI);
		return ((t1679 *)Castclass(L_16, InitializedTypeInfo(&t1679_TI)));
	}
}
extern MethodInfo m8705_MI;
 t5 * m8705 (t1677 * __this, t5 * p0, t168* p1, MethodInfo* method){
	{
		if (!p1)
		{
			goto IL_0008;
		}
	}
	{
		if ((((int32_t)(((t107 *)p1)->max_length))))
		{
			goto IL_0008;
		}
	}

IL_0008:
	{
		t5 * L_0 = (t5 *)VirtFuncInvoker5< t5 *, t5 *, int32_t, t769 *, t168*, t771 * >::Invoke(&m8706_MI, __this, p0, 0, (t769 *)NULL, p1, (t771 *)NULL);
		return L_0;
	}
}
 t5 * m8706 (t1677 * __this, t5 * p0, int32_t p1, t769 * p2, t168* p3, t771 * p4, MethodInfo* method){
	t5 * V_0 = {0};
	t695 * V_1 = {0};
	t1892 * V_2 = {0};
	t142 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t142 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	{
		V_0 = NULL;
		t695 * L_0 = (t695 *)VirtFuncInvoker1< t695 *, bool >::Invoke(&m8698_MI, __this, 1);
		V_1 = L_0;
		if (V_1)
		{
			goto IL_0028;
		}
	}
	{
		t11* L_1 = (t11*)VirtFuncInvoker0< t11* >::Invoke(&m8696_MI, __this);
		IL2CPP_RUNTIME_CLASS_INIT((&t11_TI));
		t11* L_2 = m2328(NULL, (t11*) &_stringLiteral1895, L_1, (t11*) &_stringLiteral85, &m2328_MI);
		t160 * L_3 = (t160 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t160_TI));
		m2582(L_3, L_2, &m2582_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0028:
	try
	{ // begin try (depth: 1)
		{
			if (!p3)
			{
				goto IL_0032;
			}
		}

IL_002c:
		{
			if ((((int32_t)(((t107 *)p3)->max_length))))
			{
				goto IL_0041;
			}
		}

IL_0032:
		{
			t5 * L_4 = (t5 *)VirtFuncInvoker5< t5 *, t5 *, int32_t, t769 *, t168*, t771 * >::Invoke(&m11498_MI, V_1, p0, p1, p2, (t168*)(t168*)NULL, p4);
			V_0 = L_4;
			goto IL_004f;
		}

IL_0041:
		{
			t5 * L_5 = (t5 *)VirtFuncInvoker5< t5 *, t5 *, int32_t, t769 *, t168*, t771 * >::Invoke(&m11498_MI, V_1, p0, p1, p2, p3, p4);
			V_0 = L_5;
		}

IL_004f:
		{
			// IL_004f: leave.s IL_005b
			goto IL_005b;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (t142 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&t1892_TI, e.ex->object.klass))
			goto IL_0051;
		throw e;
	}

IL_0051:
	{ // begin catch(System.Security.SecurityException)
		V_2 = ((t1892 *)__exception_local);
		t1684 * L_6 = (t1684 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1684_TI));
		m8744(L_6, V_2, &m8744_MI);
		il2cpp_codegen_raise_exception(L_6);
		// IL_0059: leave.s IL_005b
		goto IL_005b;
	} // end catch (depth: 1)

IL_005b:
	{
		return V_0;
	}
}
extern MethodInfo m8707_MI;
 void m8707 (t1677 * __this, t5 * p0, t5 * p1, int32_t p2, t769 * p3, t168* p4, t771 * p5, MethodInfo* method){
	t695 * V_0 = {0};
	t168* V_1 = {0};
	int32_t V_2 = 0;
	{
		t695 * L_0 = (t695 *)VirtFuncInvoker1< t695 *, bool >::Invoke(&m8700_MI, __this, 1);
		V_0 = L_0;
		if (V_0)
		{
			goto IL_0026;
		}
	}
	{
		t11* L_1 = (t11*)VirtFuncInvoker0< t11* >::Invoke(&m8696_MI, __this);
		IL2CPP_RUNTIME_CLASS_INIT((&t11_TI));
		t11* L_2 = m2328(NULL, (t11*) &_stringLiteral1896, L_1, (t11*) &_stringLiteral85, &m2328_MI);
		t160 * L_3 = (t160 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t160_TI));
		m2582(L_3, L_2, &m2582_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0026:
	{
		if (!p4)
		{
			goto IL_0030;
		}
	}
	{
		if ((((int32_t)(((t107 *)p4)->max_length))))
		{
			goto IL_003d;
		}
	}

IL_0030:
	{
		t168* L_4 = ((t168*)SZArrayNew(InitializedTypeInfo(&t168_TI), 1));
		ArrayElementTypeCheck (L_4, p1);
		*((t5 **)(t5 **)SZArrayLdElema(L_4, 0)) = (t5 *)p1;
		V_1 = L_4;
		goto IL_0058;
	}

IL_003d:
	{
		V_2 = (((int32_t)(((t107 *)p4)->max_length)));
		V_1 = ((t168*)SZArrayNew(InitializedTypeInfo(&t168_TI), ((int32_t)(V_2+1))));
		VirtActionInvoker2< t107 *, int32_t >::Invoke(&m4993_MI, p4, (t107 *)(t107 *)V_1, 0);
		ArrayElementTypeCheck (V_1, p1);
		*((t5 **)(t5 **)SZArrayLdElema(V_1, V_2)) = (t5 *)p1;
	}

IL_0058:
	{
		VirtFuncInvoker5< t5 *, t5 *, int32_t, t769 *, t168*, t771 * >::Invoke(&m11498_MI, V_0, p0, p2, p3, V_1, p5);
		return;
	}
}
 t11* m8708 (t1677 * __this, MethodInfo* method){
	{
		t114 * L_0 = (t114 *)VirtFuncInvoker0< t114 * >::Invoke(&m8693_MI, __this);
		t11* L_1 = (t11*)VirtFuncInvoker0< t11* >::Invoke(&m6831_MI, L_0);
		t11* L_2 = (t11*)VirtFuncInvoker0< t11* >::Invoke(&m8696_MI, __this);
		IL2CPP_RUNTIME_CLASS_INIT((&t11_TI));
		t11* L_3 = m2328(NULL, L_1, (t11*) &_stringLiteral111, L_2, &m2328_MI);
		return L_3;
	}
}
extern MethodInfo m8709_MI;
 t675* m8709 (t1677 * __this, MethodInfo* method){
	t675* V_0 = {0};
	{
		t675* L_0 = m8683(NULL, __this, 1, &m8683_MI);
		V_0 = L_0;
		if (V_0)
		{
			goto IL_0011;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t114_TI));
		return (((t114_SFs*)InitializedTypeInfo(&t114_TI)->static_fields)->f3);
	}

IL_0011:
	{
		return V_0;
	}
}
extern MethodInfo m8710_MI;
 t675* m8710 (t1677 * __this, MethodInfo* method){
	t675* V_0 = {0};
	{
		t675* L_0 = m8683(NULL, __this, 0, &m8683_MI);
		V_0 = L_0;
		if (V_0)
		{
			goto IL_0011;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t114_TI));
		return (((t114_SFs*)InitializedTypeInfo(&t114_TI)->static_fields)->f3);
	}

IL_0011:
	{
		return V_0;
	}
}
extern MethodInfo m8711_MI;
 void m8711 (t1677 * __this, t829 * p0, t830  p1, MethodInfo* method){
	{
		t11* L_0 = (t11*)VirtFuncInvoker0< t11* >::Invoke(&m8696_MI, __this);
		t114 * L_1 = (t114 *)VirtFuncInvoker0< t114 * >::Invoke(&m8694_MI, __this);
		t11* L_2 = (t11*)VirtFuncInvoker0< t11* >::Invoke(&m8708_MI, __this);
		m8548(NULL, p0, L_0, L_1, L_2, ((int32_t)16), &m8548_MI);
		return;
	}
}
// Metadata Definition System.Reflection.MonoProperty
extern Il2CppType t124_0_0_3;
FieldInfo t1677_f0_FieldInfo = 
{
	"klass", &t124_0_0_3, &t1677_TI, offsetof(t1677, f0), &EmptyCustomAttributesCache};
extern Il2CppType t124_0_0_3;
FieldInfo t1677_f1_FieldInfo = 
{
	"prop", &t124_0_0_3, &t1677_TI, offsetof(t1677, f1), &EmptyCustomAttributesCache};
extern Il2CppType t1675_0_0_1;
FieldInfo t1677_f2_FieldInfo = 
{
	"info", &t1675_0_0_1, &t1677_TI, offsetof(t1677, f2), &EmptyCustomAttributesCache};
extern Il2CppType t1678_0_0_1;
FieldInfo t1677_f3_FieldInfo = 
{
	"cached", &t1678_0_0_1, &t1677_TI, offsetof(t1677, f3), &EmptyCustomAttributesCache};
extern Il2CppType t1679_0_0_1;
FieldInfo t1677_f4_FieldInfo = 
{
	"cached_getter", &t1679_0_0_1, &t1677_TI, offsetof(t1677, f4), &EmptyCustomAttributesCache};
static FieldInfo* t1677_FIs[] =
{
	&t1677_f0_FieldInfo,
	&t1677_f1_FieldInfo,
	&t1677_f2_FieldInfo,
	&t1677_f3_FieldInfo,
	&t1677_f4_FieldInfo,
	NULL
};
static PropertyInfo t1677____Attributes_PropertyInfo = 
{
	&t1677_TI, "Attributes", &m8690_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1677____CanRead_PropertyInfo = 
{
	&t1677_TI, "CanRead", &m8691_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1677____CanWrite_PropertyInfo = 
{
	&t1677_TI, "CanWrite", &m8692_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1677____PropertyType_PropertyInfo = 
{
	&t1677_TI, "PropertyType", &m8693_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1677____ReflectedType_PropertyInfo = 
{
	&t1677_TI, "ReflectedType", &m8694_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1677____DeclaringType_PropertyInfo = 
{
	&t1677_TI, "DeclaringType", &m8695_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1677____Name_PropertyInfo = 
{
	&t1677_TI, "Name", &m8696_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1677_PIs[] =
{
	&t1677____Attributes_PropertyInfo,
	&t1677____CanRead_PropertyInfo,
	&t1677____CanWrite_PropertyInfo,
	&t1677____PropertyType_PropertyInfo,
	&t1677____ReflectedType_PropertyInfo,
	&t1677____DeclaringType_PropertyInfo,
	&t1677____Name_PropertyInfo,
	NULL
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m8688_MI = 
{
	".ctor", (methodPointerType)&m8688, &t1677_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 3438, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1678_0_0_0;
static ParameterInfo t1677_m8689_ParameterInfos[] = 
{
	{"flags", 0, 134222011, &EmptyCustomAttributesCache, &t1678_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m8689_MI = 
{
	"CachePropertyInfo", (methodPointerType)&m8689, &t1677_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t1677_m8689_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 3439, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1676_0_0_0;
extern void* RuntimeInvoker_t1676 (MethodInfo* method, void* obj, void** args);
MethodInfo m8690_MI = 
{
	"get_Attributes", (methodPointerType)&m8690, &t1677_TI, &t1676_0_0_0, RuntimeInvoker_t1676, NULL, &EmptyCustomAttributesCache, 2246, 0, 14, 0, false, false, 3440, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
MethodInfo m8691_MI = 
{
	"get_CanRead", (methodPointerType)&m8691, &t1677_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2246, 0, 15, 0, false, false, 3441, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
MethodInfo m8692_MI = 
{
	"get_CanWrite", (methodPointerType)&m8692, &t1677_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2246, 0, 16, 0, false, false, 3442, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t114_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8693_MI = 
{
	"get_PropertyType", (methodPointerType)&m8693, &t1677_TI, &t114_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2246, 0, 17, 0, false, false, 3443, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t114_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8694_MI = 
{
	"get_ReflectedType", (methodPointerType)&m8694, &t1677_TI, &t114_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2246, 0, 9, 0, false, false, 3444, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t114_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8695_MI = 
{
	"get_DeclaringType", (methodPointerType)&m8695, &t1677_TI, &t114_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2246, 0, 6, 0, false, false, 3445, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t11_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8696_MI = 
{
	"get_Name", (methodPointerType)&m8696, &t1677_TI, &t11_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2246, 0, 8, 0, false, false, 3446, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t108_0_0_0;
static ParameterInfo t1677_m8697_ParameterInfos[] = 
{
	{"nonPublic", 0, 134222012, &EmptyCustomAttributesCache, &t108_0_0_0},
};
extern Il2CppType t1406_0_0_0;
extern void* RuntimeInvoker_t5_t111 (MethodInfo* method, void* obj, void** args);
MethodInfo m8697_MI = 
{
	"GetAccessors", (methodPointerType)&m8697, &t1677_TI, &t1406_0_0_0, RuntimeInvoker_t5_t111, t1677_m8697_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 18, 1, false, false, 3447, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t108_0_0_0;
static ParameterInfo t1677_m8698_ParameterInfos[] = 
{
	{"nonPublic", 0, 134222013, &EmptyCustomAttributesCache, &t108_0_0_0},
};
extern Il2CppType t695_0_0_0;
extern void* RuntimeInvoker_t5_t111 (MethodInfo* method, void* obj, void** args);
MethodInfo m8698_MI = 
{
	"GetGetMethod", (methodPointerType)&m8698, &t1677_TI, &t695_0_0_0, RuntimeInvoker_t5_t111, t1677_m8698_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 20, 1, false, false, 3448, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t776_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8699_MI = 
{
	"GetIndexParameters", (methodPointerType)&m8699, &t1677_TI, &t776_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 198, 0, 21, 0, false, false, 3449, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t108_0_0_0;
static ParameterInfo t1677_m8700_ParameterInfos[] = 
{
	{"nonPublic", 0, 134222014, &EmptyCustomAttributesCache, &t108_0_0_0},
};
extern Il2CppType t695_0_0_0;
extern void* RuntimeInvoker_t5_t111 (MethodInfo* method, void* obj, void** args);
MethodInfo m8700_MI = 
{
	"GetSetMethod", (methodPointerType)&m8700, &t1677_TI, &t695_0_0_0, RuntimeInvoker_t5_t111, t1677_m8700_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 22, 1, false, false, 3450, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t114_0_0_0;
extern Il2CppType t108_0_0_0;
static ParameterInfo t1677_m8701_ParameterInfos[] = 
{
	{"attributeType", 0, 134222015, &EmptyCustomAttributesCache, &t114_0_0_0},
	{"inherit", 1, 134222016, &EmptyCustomAttributesCache, &t108_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5_t111 (MethodInfo* method, void* obj, void** args);
MethodInfo m8701_MI = 
{
	"IsDefined", (methodPointerType)&m8701, &t1677_TI, &t108_0_0_0, RuntimeInvoker_t108_t5_t111, t1677_m8701_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 11, 2, false, false, 3451, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t108_0_0_0;
static ParameterInfo t1677_m8702_ParameterInfos[] = 
{
	{"inherit", 0, 134222017, &EmptyCustomAttributesCache, &t108_0_0_0},
};
extern Il2CppType t168_0_0_0;
extern void* RuntimeInvoker_t5_t111 (MethodInfo* method, void* obj, void** args);
MethodInfo m8702_MI = 
{
	"GetCustomAttributes", (methodPointerType)&m8702, &t1677_TI, &t168_0_0_0, RuntimeInvoker_t5_t111, t1677_m8702_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 12, 1, false, false, 3452, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t114_0_0_0;
extern Il2CppType t108_0_0_0;
static ParameterInfo t1677_m8703_ParameterInfos[] = 
{
	{"attributeType", 0, 134222018, &EmptyCustomAttributesCache, &t114_0_0_0},
	{"inherit", 1, 134222019, &EmptyCustomAttributesCache, &t108_0_0_0},
};
extern Il2CppType t168_0_0_0;
extern void* RuntimeInvoker_t5_t5_t111 (MethodInfo* method, void* obj, void** args);
MethodInfo m8703_MI = 
{
	"GetCustomAttributes", (methodPointerType)&m8703, &t1677_TI, &t168_0_0_0, RuntimeInvoker_t5_t5_t111, t1677_m8703_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 13, 2, false, false, 3453, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t2366_0_0_0;
extern Il2CppType t2366_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t1677_m11509_ParameterInfos[] = 
{
	{"getter", 0, 134222020, &EmptyCustomAttributesCache, &t2366_0_0_0},
	{"obj", 1, 134222021, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t5_0_0_0;
extern Il2CppGenericContainer m11509_IGC;
extern TypeInfo m11509_gp_T_0_TI;
Il2CppGenericParamFull m11509_gp_T_0_TI_GenericParamFull = { { &m11509_IGC, 0}, {NULL, "T", 0, 0, NULL} };
extern TypeInfo m11509_gp_R_1_TI;
Il2CppGenericParamFull m11509_gp_R_1_TI_GenericParamFull = { { &m11509_IGC, 1}, {NULL, "R", 0, 0, NULL} };
static Il2CppGenericParamFull* m11509_IGPA[2] = 
{
	&m11509_gp_T_0_TI_GenericParamFull,
	&m11509_gp_R_1_TI_GenericParamFull,
};
extern MethodInfo m11509_MI;
Il2CppGenericContainer m11509_IGC = { { NULL, NULL }, NULL, &m11509_MI, 2, 1, m11509_IGPA };
extern Il2CppType m11509_gp_0_0_0_0;
extern Il2CppGenericMethod m11510_GM;
extern Il2CppType m11509_gp_1_0_0_0;
static Il2CppRGCTXDefinition m11509_RGCTXData[4] = 
{
	{ IL2CPP_RGCTX_DATA_CLASS, &m11509_gp_0_0_0_0 }/* Class Definition */,
	{ IL2CPP_RGCTX_DATA_METHOD, &m11510_GM }/* Method Definition */,
	{ IL2CPP_RGCTX_DATA_CLASS, &m11509_gp_1_0_0_0 }/* Class Definition */,
	{IL2CPP_RGCTX_DATA_INVALID, NULL},
};
MethodInfo m11509_MI = 
{
	"GetterAdapterFrame", NULL, &t1677_TI, &t5_0_0_0, NULL, t1677_m11509_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 2, true, false, 3454, m11509_RGCTXData, (methodPointerType)NULL, &m11509_IGC};
extern Il2CppType t2369_0_0_0;
extern Il2CppType t2369_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t1677_m11511_ParameterInfos[] = 
{
	{"getter", 0, 134222022, &EmptyCustomAttributesCache, &t2369_0_0_0},
	{"obj", 1, 134222023, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t5_0_0_0;
extern Il2CppGenericContainer m11511_IGC;
extern TypeInfo m11511_gp_R_0_TI;
Il2CppGenericParamFull m11511_gp_R_0_TI_GenericParamFull = { { &m11511_IGC, 0}, {NULL, "R", 0, 0, NULL} };
static Il2CppGenericParamFull* m11511_IGPA[1] = 
{
	&m11511_gp_R_0_TI_GenericParamFull,
};
extern MethodInfo m11511_MI;
Il2CppGenericContainer m11511_IGC = { { NULL, NULL }, NULL, &m11511_MI, 1, 1, m11511_IGPA };
extern Il2CppGenericMethod m11512_GM;
extern Il2CppType m11511_gp_0_0_0_0;
static Il2CppRGCTXDefinition m11511_RGCTXData[3] = 
{
	{ IL2CPP_RGCTX_DATA_METHOD, &m11512_GM }/* Method Definition */,
	{ IL2CPP_RGCTX_DATA_CLASS, &m11511_gp_0_0_0_0 }/* Class Definition */,
	{IL2CPP_RGCTX_DATA_INVALID, NULL},
};
MethodInfo m11511_MI = 
{
	"StaticGetterAdapterFrame", NULL, &t1677_TI, &t5_0_0_0, NULL, t1677_m11511_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 2, true, false, 3455, m11511_RGCTXData, (methodPointerType)NULL, &m11511_IGC};
extern Il2CppType t695_0_0_0;
static ParameterInfo t1677_m8704_ParameterInfos[] = 
{
	{"method", 0, 134222024, &EmptyCustomAttributesCache, &t695_0_0_0},
};
extern Il2CppType t1679_0_0_0;
extern void* RuntimeInvoker_t5_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8704_MI = 
{
	"CreateGetterDelegate", (methodPointerType)&m8704, &t1677_TI, &t1679_0_0_0, RuntimeInvoker_t5_t5, t1677_m8704_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 1, false, false, 3456, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t5_0_0_0;
extern Il2CppType t168_0_0_0;
static ParameterInfo t1677_m8705_ParameterInfos[] = 
{
	{"obj", 0, 134222025, &EmptyCustomAttributesCache, &t5_0_0_0},
	{"index", 1, 134222026, &EmptyCustomAttributesCache, &t168_0_0_0},
};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5_t5_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8705_MI = 
{
	"GetValue", (methodPointerType)&m8705, &t1677_TI, &t5_0_0_0, RuntimeInvoker_t5_t5_t5, t1677_m8705_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 23, 2, false, false, 3457, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t5_0_0_0;
extern Il2CppType t768_0_0_0;
extern Il2CppType t769_0_0_0;
extern Il2CppType t168_0_0_0;
extern Il2CppType t771_0_0_0;
static ParameterInfo t1677_m8706_ParameterInfos[] = 
{
	{"obj", 0, 134222027, &EmptyCustomAttributesCache, &t5_0_0_0},
	{"invokeAttr", 1, 134222028, &EmptyCustomAttributesCache, &t768_0_0_0},
	{"binder", 2, 134222029, &EmptyCustomAttributesCache, &t769_0_0_0},
	{"index", 3, 134222030, &EmptyCustomAttributesCache, &t168_0_0_0},
	{"culture", 4, 134222031, &EmptyCustomAttributesCache, &t771_0_0_0},
};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5_t5_t110_t5_t5_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8706_MI = 
{
	"GetValue", (methodPointerType)&m8706, &t1677_TI, &t5_0_0_0, RuntimeInvoker_t5_t5_t110_t5_t5_t5, t1677_m8706_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 24, 5, false, false, 3458, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t5_0_0_0;
extern Il2CppType t5_0_0_0;
extern Il2CppType t768_0_0_0;
extern Il2CppType t769_0_0_0;
extern Il2CppType t168_0_0_0;
extern Il2CppType t771_0_0_0;
static ParameterInfo t1677_m8707_ParameterInfos[] = 
{
	{"obj", 0, 134222032, &EmptyCustomAttributesCache, &t5_0_0_0},
	{"value", 1, 134222033, &EmptyCustomAttributesCache, &t5_0_0_0},
	{"invokeAttr", 2, 134222034, &EmptyCustomAttributesCache, &t768_0_0_0},
	{"binder", 3, 134222035, &EmptyCustomAttributesCache, &t769_0_0_0},
	{"index", 4, 134222036, &EmptyCustomAttributesCache, &t168_0_0_0},
	{"culture", 5, 134222037, &EmptyCustomAttributesCache, &t771_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t5_t110_t5_t5_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8707_MI = 
{
	"SetValue", (methodPointerType)&m8707, &t1677_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t5_t110_t5_t5_t5, t1677_m8707_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 26, 6, false, false, 3459, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t11_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8708_MI = 
{
	"ToString", (methodPointerType)&m8708, &t1677_TI, &t11_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 198, 0, 3, 0, false, false, 3460, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t675_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8709_MI = 
{
	"GetOptionalCustomModifiers", (methodPointerType)&m8709, &t1677_TI, &t675_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 198, 0, 27, 0, false, false, 3461, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t675_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8710_MI = 
{
	"GetRequiredCustomModifiers", (methodPointerType)&m8710, &t1677_TI, &t675_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 198, 0, 28, 0, false, false, 3462, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t829_0_0_0;
extern Il2CppType t830_0_0_0;
static ParameterInfo t1677_m8711_ParameterInfos[] = 
{
	{"info", 0, 134222038, &EmptyCustomAttributesCache, &t829_0_0_0},
	{"context", 1, 134222039, &EmptyCustomAttributesCache, &t830_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t830 (MethodInfo* method, void* obj, void** args);
MethodInfo m8711_MI = 
{
	"GetObjectData", (methodPointerType)&m8711, &t1677_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t830, t1677_m8711_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 29, 2, false, false, 3463, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1677_MIs[] =
{
	&m8688_MI,
	&m8689_MI,
	&m8690_MI,
	&m8691_MI,
	&m8692_MI,
	&m8693_MI,
	&m8694_MI,
	&m8695_MI,
	&m8696_MI,
	&m8697_MI,
	&m8698_MI,
	&m8699_MI,
	&m8700_MI,
	&m8701_MI,
	&m8702_MI,
	&m8703_MI,
	&m11509_MI,
	&m11511_MI,
	&m8704_MI,
	&m8705_MI,
	&m8706_MI,
	&m8707_MI,
	&m8708_MI,
	&m8709_MI,
	&m8710_MI,
	&m8711_MI,
	NULL
};
extern TypeInfo t1679_TI;
extern TypeInfo t1680_TI;
extern TypeInfo t1681_TI;
static TypeInfo* t1677_TI__nestedTypes[4] =
{
	&t1679_TI,
	&t1680_TI,
	&t1681_TI,
	NULL
};
extern MethodInfo m8730_MI;
extern MethodInfo m8731_MI;
extern MethodInfo m8733_MI;
static MethodInfo* t1677_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m8708_MI,
	&m8703_MI,
	&m8701_MI,
	&m8695_MI,
	&m8730_MI,
	&m8696_MI,
	&m8694_MI,
	&m6845_MI,
	&m8701_MI,
	&m8702_MI,
	&m8703_MI,
	&m8690_MI,
	&m8691_MI,
	&m8692_MI,
	&m8693_MI,
	&m8697_MI,
	&m8731_MI,
	&m8698_MI,
	&m8699_MI,
	&m8700_MI,
	&m8705_MI,
	&m8706_MI,
	&m8733_MI,
	&m8707_MI,
	&m8709_MI,
	&m8710_MI,
	&m8711_MI,
};
static TypeInfo* t1677_ITIs[] = 
{
	&t517_TI,
};
extern TypeInfo t2371_TI;
static Il2CppInterfaceOffsetPair t1677_IOs[] = 
{
	{ &t2371_TI, 14},
	{ &t1990_TI, 4},
	{ &t2247_TI, 6},
	{ &t517_TI, 29},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1677_1_0_0;
struct t1677;
TypeInfo t1677_TI = 
{
	&g_mscorlib_dll_Image, NULL, "MonoProperty", "System.Reflection", t1677_MIs, t1677_PIs, t1677_FIs, NULL, &t1407_TI, t1677_TI__nestedTypes, NULL, &t1677_TI, t1677_ITIs, t1677_VT, &EmptyCustomAttributesCache, &t1677_TI, &t1677_0_0_0, &t1677_1_0_0, t1677_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1677), 0, -1, 0, 0, -1, 1056768, 0, false, false, false, false, false, false, false, false, false, false, false, false, 26, 7, 5, 0, 3, 30, 1, 4};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1649_TI;
#include "t1649MD.h"



// Metadata Definition System.Reflection.ParameterAttributes
extern Il2CppType t110_0_0_1542;
FieldInfo t1649_f1_FieldInfo = 
{
	"value__", &t110_0_0_1542, &t1649_TI, offsetof(t1649, f1) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t1649_0_0_32854;
FieldInfo t1649_f2_FieldInfo = 
{
	"None", &t1649_0_0_32854, &t1649_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1649_0_0_32854;
FieldInfo t1649_f3_FieldInfo = 
{
	"In", &t1649_0_0_32854, &t1649_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1649_0_0_32854;
FieldInfo t1649_f4_FieldInfo = 
{
	"Out", &t1649_0_0_32854, &t1649_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1649_0_0_32854;
FieldInfo t1649_f5_FieldInfo = 
{
	"Lcid", &t1649_0_0_32854, &t1649_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1649_0_0_32854;
FieldInfo t1649_f6_FieldInfo = 
{
	"Retval", &t1649_0_0_32854, &t1649_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1649_0_0_32854;
FieldInfo t1649_f7_FieldInfo = 
{
	"Optional", &t1649_0_0_32854, &t1649_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1649_0_0_32854;
FieldInfo t1649_f8_FieldInfo = 
{
	"ReservedMask", &t1649_0_0_32854, &t1649_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1649_0_0_32854;
FieldInfo t1649_f9_FieldInfo = 
{
	"HasDefault", &t1649_0_0_32854, &t1649_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1649_0_0_32854;
FieldInfo t1649_f10_FieldInfo = 
{
	"HasFieldMarshal", &t1649_0_0_32854, &t1649_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1649_0_0_32854;
FieldInfo t1649_f11_FieldInfo = 
{
	"Reserved3", &t1649_0_0_32854, &t1649_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1649_0_0_32854;
FieldInfo t1649_f12_FieldInfo = 
{
	"Reserved4", &t1649_0_0_32854, &t1649_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t1649_FIs[] =
{
	&t1649_f1_FieldInfo,
	&t1649_f2_FieldInfo,
	&t1649_f3_FieldInfo,
	&t1649_f4_FieldInfo,
	&t1649_f5_FieldInfo,
	&t1649_f6_FieldInfo,
	&t1649_f7_FieldInfo,
	&t1649_f8_FieldInfo,
	&t1649_f9_FieldInfo,
	&t1649_f10_FieldInfo,
	&t1649_f11_FieldInfo,
	&t1649_f12_FieldInfo,
	NULL
};
static const int32_t t1649_f2_DefaultValueData = 0;
static Il2CppFieldDefaultValueEntry t1649_f2_DefaultValue = 
{
	&t1649_f2_FieldInfo, { (char*)&t1649_f2_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1649_f3_DefaultValueData = 1;
static Il2CppFieldDefaultValueEntry t1649_f3_DefaultValue = 
{
	&t1649_f3_FieldInfo, { (char*)&t1649_f3_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1649_f4_DefaultValueData = 2;
static Il2CppFieldDefaultValueEntry t1649_f4_DefaultValue = 
{
	&t1649_f4_FieldInfo, { (char*)&t1649_f4_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1649_f5_DefaultValueData = 4;
static Il2CppFieldDefaultValueEntry t1649_f5_DefaultValue = 
{
	&t1649_f5_FieldInfo, { (char*)&t1649_f5_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1649_f6_DefaultValueData = 8;
static Il2CppFieldDefaultValueEntry t1649_f6_DefaultValue = 
{
	&t1649_f6_FieldInfo, { (char*)&t1649_f6_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1649_f7_DefaultValueData = 16;
static Il2CppFieldDefaultValueEntry t1649_f7_DefaultValue = 
{
	&t1649_f7_FieldInfo, { (char*)&t1649_f7_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1649_f8_DefaultValueData = 61440;
static Il2CppFieldDefaultValueEntry t1649_f8_DefaultValue = 
{
	&t1649_f8_FieldInfo, { (char*)&t1649_f8_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1649_f9_DefaultValueData = 4096;
static Il2CppFieldDefaultValueEntry t1649_f9_DefaultValue = 
{
	&t1649_f9_FieldInfo, { (char*)&t1649_f9_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1649_f10_DefaultValueData = 8192;
static Il2CppFieldDefaultValueEntry t1649_f10_DefaultValue = 
{
	&t1649_f10_FieldInfo, { (char*)&t1649_f10_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1649_f11_DefaultValueData = 16384;
static Il2CppFieldDefaultValueEntry t1649_f11_DefaultValue = 
{
	&t1649_f11_FieldInfo, { (char*)&t1649_f11_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1649_f12_DefaultValueData = 32768;
static Il2CppFieldDefaultValueEntry t1649_f12_DefaultValue = 
{
	&t1649_f12_FieldInfo, { (char*)&t1649_f12_DefaultValueData, &t110_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t1649_FDVs[] = 
{
	&t1649_f2_DefaultValue,
	&t1649_f3_DefaultValue,
	&t1649_f4_DefaultValue,
	&t1649_f5_DefaultValue,
	&t1649_f6_DefaultValue,
	&t1649_f7_DefaultValue,
	&t1649_f8_DefaultValue,
	&t1649_f9_DefaultValue,
	&t1649_f10_DefaultValue,
	&t1649_f11_DefaultValue,
	&t1649_f12_DefaultValue,
	NULL
};
static MethodInfo* t1649_MIs[] =
{
	NULL
};
static MethodInfo* t1649_VT[] =
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
static Il2CppInterfaceOffsetPair t1649_IOs[] = 
{
	{ &t120_TI, 4},
	{ &t121_TI, 5},
	{ &t122_TI, 21},
};
void t1649_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t576 * tmp;
		tmp = (t576 *)il2cpp_codegen_object_new (&t576_TI);
		m2699(tmp, true, &m2699_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t446 * tmp;
		tmp = (t446 *)il2cpp_codegen_object_new (&t446_TI);
		m1932(tmp, &m1932_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1649__CustomAttributeCache = {
2,
NULL,
&t1649_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1649_0_0_0;
extern Il2CppType t1649_1_0_0;
extern CustomAttributesCache t1649__CustomAttributeCache;
TypeInfo t1649_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ParameterAttributes", "System.Reflection", t1649_MIs, NULL, t1649_FIs, NULL, &t18_TI, NULL, NULL, &t110_TI, NULL, t1649_VT, &t1649__CustomAttributeCache, &t110_TI, &t1649_0_0_0, &t1649_1_0_0, t1649_IOs, NULL, NULL, t1649_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1649)+ sizeof (Il2CppObject), sizeof (int32_t), sizeof(int32_t), 0, 0, -1, 8449, 0, true, false, false, true, false, false, false, false, false, false, false, false, 0, 0, 12, 0, 0, 23, 0, 3};
#ifndef _MSC_VER
#else
#endif

#include "t1418.h"
#include "t1420.h"
#include "t1412.h"
extern TypeInfo t1418_TI;
extern TypeInfo t1420_TI;
extern TypeInfo t1412_TI;
#include "t1418MD.h"
#include "t1420MD.h"
#include "t1412MD.h"
extern Il2CppType t109_0_0_0;
extern MethodInfo m8716_MI;
extern MethodInfo m8723_MI;
extern MethodInfo m3585_MI;
extern MethodInfo m8720_MI;
extern MethodInfo m2410_MI;
extern MethodInfo m8717_MI;
extern MethodInfo m8719_MI;
extern MethodInfo m8718_MI;
extern MethodInfo m6862_MI;
extern MethodInfo m6864_MI;
extern MethodInfo m6858_MI;


extern MethodInfo m8712_MI;
 void m8712 (t775 * __this, MethodInfo* method){
	{
		m460(__this, &m460_MI);
		return;
	}
}
extern MethodInfo m8713_MI;
 void m8713 (t775 * __this, t1648 * p0, t114 * p1, t450 * p2, int32_t p3, MethodInfo* method){
	{
		m460(__this, &m460_MI);
		__this->f0 = p1;
		__this->f2 = p2;
		if (!p0)
		{
			goto IL_003f;
		}
	}
	{
		t11* L_0 = (t11*)VirtFuncInvoker0< t11* >::Invoke(&m8389_MI, p0);
		__this->f3 = L_0;
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m8390_MI, p0);
		__this->f4 = ((int32_t)(L_1-1));
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m8388_MI, p0);
		__this->f5 = L_2;
		goto IL_0057;
	}

IL_003f:
	{
		__this->f3 = (t11*)NULL;
		__this->f4 = ((int32_t)(p3-1));
		__this->f5 = 0;
	}

IL_0057:
	{
		return;
	}
}
 void m8714 (t775 * __this, t775 * p0, t450 * p1, MethodInfo* method){
	{
		m460(__this, &m460_MI);
		t114 * L_0 = (t114 *)VirtFuncInvoker0< t114 * >::Invoke(&m3587_MI, p0);
		__this->f0 = L_0;
		__this->f2 = p1;
		t11* L_1 = (t11*)VirtFuncInvoker0< t11* >::Invoke(&m8722_MI, p0);
		__this->f3 = L_1;
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m8723_MI, p0);
		__this->f4 = L_2;
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m8716_MI, p0);
		__this->f5 = L_3;
		return;
	}
}
extern MethodInfo m8715_MI;
 t11* m8715 (t775 * __this, MethodInfo* method){
	t114 * V_0 = {0};
	bool V_1 = false;
	t11* V_2 = {0};
	int32_t G_B7_0 = 0;
	t11* G_B10_0 = {0};
	{
		t114 * L_0 = (__this->f0);
		V_0 = L_0;
		goto IL_0010;
	}

IL_0009:
	{
		t114 * L_1 = (t114 *)VirtFuncInvoker0< t114 * >::Invoke(&m11046_MI, V_0);
		V_0 = L_1;
	}

IL_0010:
	{
		bool L_2 = (bool)VirtFuncInvoker0< bool >::Invoke(&m6781_MI, V_0);
		if (L_2)
		{
			goto IL_0009;
		}
	}
	{
		bool L_3 = (bool)VirtFuncInvoker0< bool >::Invoke(&m3646_MI, V_0);
		if (L_3)
		{
			goto IL_0054;
		}
	}
	{
		t114 * L_4 = (__this->f0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t114_TI));
		t114 * L_5 = m532(NULL, LoadTypeToken(&t109_0_0_0), &m532_MI);
		if ((((t114 *)L_4) == ((t114 *)L_5)))
		{
			goto IL_0054;
		}
	}
	{
		t114 * L_6 = (__this->f0);
		t11* L_7 = (t11*)VirtFuncInvoker0< t11* >::Invoke(&m3585_MI, L_6);
		t450 * L_8 = (__this->f2);
		t114 * L_9 = (t114 *)VirtFuncInvoker0< t114 * >::Invoke(&m3584_MI, L_8);
		t11* L_10 = (t11*)VirtFuncInvoker0< t11* >::Invoke(&m3585_MI, L_9);
		IL2CPP_RUNTIME_CLASS_INIT((&t11_TI));
		bool L_11 = m2356(NULL, L_7, L_10, &m2356_MI);
		G_B7_0 = ((int32_t)(L_11));
		goto IL_0055;
	}

IL_0054:
	{
		G_B7_0 = 1;
	}

IL_0055:
	{
		V_1 = G_B7_0;
		if (!V_1)
		{
			goto IL_0066;
		}
	}
	{
		t114 * L_12 = (__this->f0);
		t11* L_13 = (t11*)VirtFuncInvoker0< t11* >::Invoke(&m3571_MI, L_12);
		G_B10_0 = L_13;
		goto IL_0071;
	}

IL_0066:
	{
		t114 * L_14 = (__this->f0);
		t11* L_15 = (t11*)VirtFuncInvoker0< t11* >::Invoke(&m3644_MI, L_14);
		G_B10_0 = L_15;
	}

IL_0071:
	{
		V_2 = G_B10_0;
		bool L_16 = m8720(__this, &m8720_MI);
		if (L_16)
		{
			goto IL_0095;
		}
	}
	{
		uint16_t L_17 = ((int32_t)32);
		t5 * L_18 = Box(InitializedTypeInfo(&t144_TI), &L_17);
		IL2CPP_RUNTIME_CLASS_INIT((&t11_TI));
		t11* L_19 = m1972(NULL, V_2, L_18, &m1972_MI);
		V_2 = L_19;
		t11* L_20 = (__this->f3);
		t11* L_21 = m2410(NULL, V_2, L_20, &m2410_MI);
		V_2 = L_21;
	}

IL_0095:
	{
		return V_2;
	}
}
 t114 * m3587 (t775 * __this, MethodInfo* method){
	{
		t114 * L_0 = (__this->f0);
		return L_0;
	}
}
 int32_t m8716 (t775 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->f5);
		return L_0;
	}
}
 bool m8717 (t775 * __this, MethodInfo* method){
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m8716_MI, __this);
		return ((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)1))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
 bool m8718 (t775 * __this, MethodInfo* method){
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m8716_MI, __this);
		return ((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)((int32_t)16)))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
 bool m8719 (t775 * __this, MethodInfo* method){
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m8716_MI, __this);
		return ((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)2))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
 bool m8720 (t775 * __this, MethodInfo* method){
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m8716_MI, __this);
		return ((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)8))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
extern MethodInfo m8721_MI;
 t450 * m8721 (t775 * __this, MethodInfo* method){
	{
		t450 * L_0 = (__this->f2);
		return L_0;
	}
}
 t11* m8722 (t775 * __this, MethodInfo* method){
	{
		t11* L_0 = (__this->f3);
		return L_0;
	}
}
 int32_t m8723 (t775 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->f4);
		return L_0;
	}
}
extern MethodInfo m8724_MI;
 t168* m8724 (t775 * __this, t114 * p0, bool p1, MethodInfo* method){
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1989_TI));
		t168* L_0 = m10637(NULL, __this, p0, p1, &m10637_MI);
		return L_0;
	}
}
extern MethodInfo m8725_MI;
 bool m8725 (t775 * __this, t114 * p0, bool p1, MethodInfo* method){
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1989_TI));
		bool L_0 = m10639(NULL, __this, p0, p1, &m10639_MI);
		return L_0;
	}
}
extern MethodInfo m8726_MI;
 t168* m8726 (t775 * __this, MethodInfo* method){
	int32_t V_0 = 0;
	t168* V_1 = {0};
	{
		V_0 = 0;
		bool L_0 = m8717(__this, &m8717_MI);
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		V_0 = ((int32_t)(V_0+1));
	}

IL_000e:
	{
		bool L_1 = m8719(__this, &m8719_MI);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		V_0 = ((int32_t)(V_0+1));
	}

IL_001a:
	{
		bool L_2 = m8718(__this, &m8718_MI);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		V_0 = ((int32_t)(V_0+1));
	}

IL_0026:
	{
		t1622 * L_3 = (__this->f6);
		if (!L_3)
		{
			goto IL_0032;
		}
	}
	{
		V_0 = ((int32_t)(V_0+1));
	}

IL_0032:
	{
		if (V_0)
		{
			goto IL_0037;
		}
	}
	{
		return (t168*)NULL;
	}

IL_0037:
	{
		V_1 = ((t168*)SZArrayNew(InitializedTypeInfo(&t168_TI), V_0));
		V_0 = 0;
		bool L_4 = m8717(__this, &m8717_MI);
		if (!L_4)
		{
			goto IL_0054;
		}
	}
	{
		int32_t L_5 = V_0;
		V_0 = ((int32_t)(L_5+1));
		t1418 * L_6 = (t1418 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1418_TI));
		m6862(L_6, &m6862_MI);
		ArrayElementTypeCheck (V_1, L_6);
		*((t5 **)(t5 **)SZArrayLdElema(V_1, L_5)) = (t5 *)L_6;
	}

IL_0054:
	{
		bool L_7 = m8718(__this, &m8718_MI);
		if (!L_7)
		{
			goto IL_0068;
		}
	}
	{
		int32_t L_8 = V_0;
		V_0 = ((int32_t)(L_8+1));
		t1420 * L_9 = (t1420 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1420_TI));
		m6864(L_9, &m6864_MI);
		ArrayElementTypeCheck (V_1, L_9);
		*((t5 **)(t5 **)SZArrayLdElema(V_1, L_8)) = (t5 *)L_9;
	}

IL_0068:
	{
		bool L_10 = m8719(__this, &m8719_MI);
		if (!L_10)
		{
			goto IL_007c;
		}
	}
	{
		int32_t L_11 = V_0;
		V_0 = ((int32_t)(L_11+1));
		t1412 * L_12 = (t1412 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1412_TI));
		m6858(L_12, &m6858_MI);
		ArrayElementTypeCheck (V_1, L_12);
		*((t5 **)(t5 **)SZArrayLdElema(V_1, L_11)) = (t5 *)L_12;
	}

IL_007c:
	{
		t1622 * L_13 = (__this->f6);
		if (!L_13)
		{
			goto IL_0096;
		}
	}
	{
		int32_t L_14 = V_0;
		V_0 = ((int32_t)(L_14+1));
		t1622 * L_15 = (__this->f6);
		t1416 * L_16 = m8454(L_15, &m8454_MI);
		ArrayElementTypeCheck (V_1, L_16);
		*((t5 **)(t5 **)SZArrayLdElema(V_1, L_14)) = (t5 *)L_16;
	}

IL_0096:
	{
		return V_1;
	}
}
// Metadata Definition System.Reflection.ParameterInfo
extern Il2CppType t114_0_0_4;
FieldInfo t775_f0_FieldInfo = 
{
	"ClassImpl", &t114_0_0_4, &t775_TI, offsetof(t775, f0), &EmptyCustomAttributesCache};
extern Il2CppType t5_0_0_4;
FieldInfo t775_f1_FieldInfo = 
{
	"DefaultValueImpl", &t5_0_0_4, &t775_TI, offsetof(t775, f1), &EmptyCustomAttributesCache};
extern Il2CppType t450_0_0_4;
FieldInfo t775_f2_FieldInfo = 
{
	"MemberImpl", &t450_0_0_4, &t775_TI, offsetof(t775, f2), &EmptyCustomAttributesCache};
extern Il2CppType t11_0_0_4;
FieldInfo t775_f3_FieldInfo = 
{
	"NameImpl", &t11_0_0_4, &t775_TI, offsetof(t775, f3), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_4;
FieldInfo t775_f4_FieldInfo = 
{
	"PositionImpl", &t110_0_0_4, &t775_TI, offsetof(t775, f4), &EmptyCustomAttributesCache};
extern Il2CppType t1649_0_0_4;
FieldInfo t775_f5_FieldInfo = 
{
	"AttrsImpl", &t1649_0_0_4, &t775_TI, offsetof(t775, f5), &EmptyCustomAttributesCache};
extern Il2CppType t1622_0_0_1;
FieldInfo t775_f6_FieldInfo = 
{
	"marshalAs", &t1622_0_0_1, &t775_TI, offsetof(t775, f6), &EmptyCustomAttributesCache};
static FieldInfo* t775_FIs[] =
{
	&t775_f0_FieldInfo,
	&t775_f1_FieldInfo,
	&t775_f2_FieldInfo,
	&t775_f3_FieldInfo,
	&t775_f4_FieldInfo,
	&t775_f5_FieldInfo,
	&t775_f6_FieldInfo,
	NULL
};
static PropertyInfo t775____ParameterType_PropertyInfo = 
{
	&t775_TI, "ParameterType", &m3587_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t775____Attributes_PropertyInfo = 
{
	&t775_TI, "Attributes", &m8716_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t775____IsIn_PropertyInfo = 
{
	&t775_TI, "IsIn", &m8717_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t775____IsOptional_PropertyInfo = 
{
	&t775_TI, "IsOptional", &m8718_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t775____IsOut_PropertyInfo = 
{
	&t775_TI, "IsOut", &m8719_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t775____IsRetval_PropertyInfo = 
{
	&t775_TI, "IsRetval", &m8720_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t775____Member_PropertyInfo = 
{
	&t775_TI, "Member", &m8721_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t775____Name_PropertyInfo = 
{
	&t775_TI, "Name", &m8722_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t775____Position_PropertyInfo = 
{
	&t775_TI, "Position", &m8723_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t775_PIs[] =
{
	&t775____ParameterType_PropertyInfo,
	&t775____Attributes_PropertyInfo,
	&t775____IsIn_PropertyInfo,
	&t775____IsOptional_PropertyInfo,
	&t775____IsOut_PropertyInfo,
	&t775____IsRetval_PropertyInfo,
	&t775____Member_PropertyInfo,
	&t775____Name_PropertyInfo,
	&t775____Position_PropertyInfo,
	NULL
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m8712_MI = 
{
	".ctor", (methodPointerType)&m8712, &t775_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, false, 3476, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1648_0_0_0;
extern Il2CppType t114_0_0_0;
extern Il2CppType t450_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t775_m8713_ParameterInfos[] = 
{
	{"pb", 0, 134222059, &EmptyCustomAttributesCache, &t1648_0_0_0},
	{"type", 1, 134222060, &EmptyCustomAttributesCache, &t114_0_0_0},
	{"member", 2, 134222061, &EmptyCustomAttributesCache, &t450_0_0_0},
	{"position", 3, 134222062, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t5_t5_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m8713_MI = 
{
	".ctor", (methodPointerType)&m8713, &t775_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t5_t5_t110, t775_m8713_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 4, false, false, 3477, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t775_0_0_0;
extern Il2CppType t775_0_0_0;
extern Il2CppType t450_0_0_0;
static ParameterInfo t775_m8714_ParameterInfos[] = 
{
	{"pinfo", 0, 134222063, &EmptyCustomAttributesCache, &t775_0_0_0},
	{"member", 1, 134222064, &EmptyCustomAttributesCache, &t450_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8714_MI = 
{
	".ctor", (methodPointerType)&m8714, &t775_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t5, t775_m8714_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 2, false, false, 3478, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t11_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8715_MI = 
{
	"ToString", (methodPointerType)&m8715, &t775_TI, &t11_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 198, 0, 3, 0, false, false, 3479, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t114_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m3587_MI = 
{
	"get_ParameterType", (methodPointerType)&m3587, &t775_TI, &t114_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2502, 0, 6, 0, false, false, 3480, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1649_0_0_0;
extern void* RuntimeInvoker_t1649 (MethodInfo* method, void* obj, void** args);
MethodInfo m8716_MI = 
{
	"get_Attributes", (methodPointerType)&m8716, &t775_TI, &t1649_0_0_0, RuntimeInvoker_t1649, NULL, &EmptyCustomAttributesCache, 2502, 0, 7, 0, false, false, 3481, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
MethodInfo m8717_MI = 
{
	"get_IsIn", (methodPointerType)&m8717, &t775_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 3482, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
MethodInfo m8718_MI = 
{
	"get_IsOptional", (methodPointerType)&m8718, &t775_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 3483, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
MethodInfo m8719_MI = 
{
	"get_IsOut", (methodPointerType)&m8719, &t775_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 3484, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
MethodInfo m8720_MI = 
{
	"get_IsRetval", (methodPointerType)&m8720, &t775_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 3485, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t450_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8721_MI = 
{
	"get_Member", (methodPointerType)&m8721, &t775_TI, &t450_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2502, 0, 8, 0, false, false, 3486, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t11_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8722_MI = 
{
	"get_Name", (methodPointerType)&m8722, &t775_TI, &t11_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2502, 0, 9, 0, false, false, 3487, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m8723_MI = 
{
	"get_Position", (methodPointerType)&m8723, &t775_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 2502, 0, 10, 0, false, false, 3488, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t114_0_0_0;
extern Il2CppType t108_0_0_0;
static ParameterInfo t775_m8724_ParameterInfos[] = 
{
	{"attributeType", 0, 134222065, &EmptyCustomAttributesCache, &t114_0_0_0},
	{"inherit", 1, 134222066, &EmptyCustomAttributesCache, &t108_0_0_0},
};
extern Il2CppType t168_0_0_0;
extern void* RuntimeInvoker_t5_t5_t111 (MethodInfo* method, void* obj, void** args);
MethodInfo m8724_MI = 
{
	"GetCustomAttributes", (methodPointerType)&m8724, &t775_TI, &t168_0_0_0, RuntimeInvoker_t5_t5_t111, t775_m8724_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 11, 2, false, false, 3489, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t114_0_0_0;
extern Il2CppType t108_0_0_0;
static ParameterInfo t775_m8725_ParameterInfos[] = 
{
	{"attributeType", 0, 134222067, &EmptyCustomAttributesCache, &t114_0_0_0},
	{"inherit", 1, 134222068, &EmptyCustomAttributesCache, &t108_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5_t111 (MethodInfo* method, void* obj, void** args);
MethodInfo m8725_MI = 
{
	"IsDefined", (methodPointerType)&m8725, &t775_TI, &t108_0_0_0, RuntimeInvoker_t108_t5_t111, t775_m8725_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 12, 2, false, false, 3490, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t168_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8726_MI = 
{
	"GetPseudoCustomAttributes", (methodPointerType)&m8726, &t775_TI, &t168_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 131, 0, 255, 0, false, false, 3491, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t775_MIs[] =
{
	&m8712_MI,
	&m8713_MI,
	&m8714_MI,
	&m8715_MI,
	&m3587_MI,
	&m8716_MI,
	&m8717_MI,
	&m8718_MI,
	&m8719_MI,
	&m8720_MI,
	&m8721_MI,
	&m8722_MI,
	&m8723_MI,
	&m8724_MI,
	&m8725_MI,
	&m8726_MI,
	NULL
};
static MethodInfo* t775_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m8715_MI,
	&m8724_MI,
	&m8725_MI,
	&m3587_MI,
	&m8716_MI,
	&m8721_MI,
	&m8722_MI,
	&m8723_MI,
	&m8724_MI,
	&m8725_MI,
};
extern TypeInfo t2372_TI;
static TypeInfo* t775_ITIs[] = 
{
	&t1990_TI,
	&t2372_TI,
};
static Il2CppInterfaceOffsetPair t775_IOs[] = 
{
	{ &t1990_TI, 4},
	{ &t2372_TI, 6},
};
void t775_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t1699 * tmp;
		tmp = (t1699 *)il2cpp_codegen_object_new (&t1699_TI);
		m8787(tmp, il2cpp_codegen_type_get_object(InitializedTypeInfo(&t2372_TI)), &m8787_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t576 * tmp;
		tmp = (t576 *)il2cpp_codegen_object_new (&t576_TI);
		m2699(tmp, true, &m2699_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		t1697 * tmp;
		tmp = (t1697 *)il2cpp_codegen_object_new (&t1697_TI);
		m8786(tmp, 0, &m8786_MI);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t775__CustomAttributeCache = {
3,
NULL,
&t775_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t775_1_0_0;
struct t775;
extern CustomAttributesCache t775__CustomAttributeCache;
TypeInfo t775_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ParameterInfo", "System.Reflection", t775_MIs, t775_PIs, t775_FIs, NULL, &t5_TI, NULL, NULL, &t775_TI, t775_ITIs, t775_VT, &t775__CustomAttributeCache, &t775_TI, &t775_0_0_0, &t775_1_0_0, t775_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t775), 0, -1, 0, 0, -1, 1056769, 0, false, false, false, false, false, false, false, false, false, false, false, false, 16, 9, 7, 0, 0, 13, 2, 2};
#ifndef _MSC_VER
#else
#endif
#include "t770MD.h"



// Conversion methods for marshalling of: System.Reflection.ParameterModifier
void t770_marshal(const t770& unmarshaled, t770_marshaled& marshaled)
{
	marshaled.f0 = il2cpp_codegen_marshal_array<int32_t>((Il2CppCodeGenArray*)unmarshaled.f0);
}
void t770_marshal_back(const t770_marshaled& marshaled, t770& unmarshaled)
{
	extern TypeInfo t108_TI;
	unmarshaled.f0 = (t1034*)il2cpp_codegen_marshal_array_result(&t108_TI, marshaled.f0, 1);
}
// Conversion method for clean up from marshalling of: System.Reflection.ParameterModifier
void t770_marshal_cleanup(t770_marshaled& marshaled)
{
}
// Metadata Definition System.Reflection.ParameterModifier
extern Il2CppType t1034_0_0_1;
FieldInfo t770_f0_FieldInfo = 
{
	"_byref", &t1034_0_0_1, &t770_TI, offsetof(t770, f0) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t770_FIs[] =
{
	&t770_f0_FieldInfo,
	NULL
};
static MethodInfo* t770_MIs[] =
{
	NULL
};
static MethodInfo* t770_VT[] =
{
	&m2042_MI,
	&m465_MI,
	&m2043_MI,
	&m2148_MI,
};
extern TypeInfo t172_TI;
#include "t172.h"
#include "t172MD.h"
extern MethodInfo m657_MI;
void t770_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t172 * tmp;
		tmp = (t172 *)il2cpp_codegen_object_new (&t172_TI);
		m657(tmp, il2cpp_codegen_string_new_wrapper("Item"), &m657_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t576 * tmp;
		tmp = (t576 *)il2cpp_codegen_object_new (&t576_TI);
		m2699(tmp, true, &m2699_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t770__CustomAttributeCache = {
2,
NULL,
&t770_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t770_0_0_0;
extern Il2CppType t770_1_0_0;
extern CustomAttributesCache t770__CustomAttributeCache;
TypeInfo t770_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ParameterModifier", "System.Reflection", t770_MIs, NULL, t770_FIs, NULL, &t267_TI, NULL, NULL, &t770_TI, NULL, t770_VT, &t770__CustomAttributeCache, &t770_TI, &t770_0_0_0, &t770_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)t770_marshal, (methodPointerType)t770_marshal_back, (methodPointerType)t770_marshal_cleanup, sizeof (t770)+ sizeof (Il2CppObject), 0, sizeof(t770_marshaled), 0, 0, -1, 1057033, 0, true, false, false, false, false, false, false, false, false, false, false, false, 0, 0, 1, 0, 0, 4, 0, 0};
#include "t1682.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1682_TI;
#include "t1682MD.h"



extern MethodInfo m8727_MI;
 void m8727 (t1682 * __this, MethodInfo* method){
	{
		m460(__this, &m460_MI);
		return;
	}
}
extern MethodInfo m8728_MI;
 void m8728 (t1682 * __this, t829 * p0, t830  p1, MethodInfo* method){
	{
		t491 * L_0 = (t491 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t491_TI));
		m4781(L_0, (t11*) &_stringLiteral1897, &m4781_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// Metadata Definition System.Reflection.Pointer
extern Il2CppType t2093_0_0_1;
FieldInfo t1682_f0_FieldInfo = 
{
	"data", &t2093_0_0_1, &t1682_TI, offsetof(t1682, f0), &EmptyCustomAttributesCache};
extern Il2CppType t114_0_0_1;
FieldInfo t1682_f1_FieldInfo = 
{
	"type", &t114_0_0_1, &t1682_TI, offsetof(t1682, f1), &EmptyCustomAttributesCache};
static FieldInfo* t1682_FIs[] =
{
	&t1682_f0_FieldInfo,
	&t1682_f1_FieldInfo,
	NULL
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m8727_MI = 
{
	".ctor", (methodPointerType)&m8727, &t1682_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6273, 0, 255, 0, false, false, 3492, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t829_0_0_0;
extern Il2CppType t830_0_0_0;
static ParameterInfo t1682_m8728_ParameterInfos[] = 
{
	{"info", 0, 134222069, &EmptyCustomAttributesCache, &t829_0_0_0},
	{"context", 1, 134222070, &EmptyCustomAttributesCache, &t830_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t830 (MethodInfo* method, void* obj, void** args);
MethodInfo m8728_MI = 
{
	"System.Runtime.Serialization.ISerializable.GetObjectData", (methodPointerType)&m8728, &t1682_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t830, t1682_m8728_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 4, 2, false, false, 3493, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1682_MIs[] =
{
	&m8727_MI,
	&m8728_MI,
	NULL
};
static MethodInfo* t1682_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m8728_MI,
};
static TypeInfo* t1682_ITIs[] = 
{
	&t517_TI,
};
static Il2CppInterfaceOffsetPair t1682_IOs[] = 
{
	{ &t517_TI, 4},
};
extern TypeInfo t974_TI;
#include "t974.h"
#include "t974MD.h"
extern MethodInfo m3843_MI;
void t1682_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
CustomAttributesCache t1682__CustomAttributeCache = {
2,
NULL,
&t1682_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1682_0_0_0;
extern Il2CppType t1682_1_0_0;
struct t1682;
extern CustomAttributesCache t1682__CustomAttributeCache;
TypeInfo t1682_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Pointer", "System.Reflection", t1682_MIs, NULL, t1682_FIs, NULL, &t5_TI, NULL, NULL, &t1682_TI, t1682_ITIs, t1682_VT, &t1682__CustomAttributeCache, &t1682_TI, &t1682_0_0_0, &t1682_1_0_0, t1682_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1682), 0, -1, 0, 0, -1, 1057025, 0, false, false, false, false, false, false, false, false, false, false, false, false, 2, 0, 2, 0, 0, 5, 1, 1};
#include "t1659.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1659_TI;
#include "t1659MD.h"



// Metadata Definition System.Reflection.ProcessorArchitecture
extern Il2CppType t110_0_0_1542;
FieldInfo t1659_f1_FieldInfo = 
{
	"value__", &t110_0_0_1542, &t1659_TI, offsetof(t1659, f1) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t1659_0_0_32854;
FieldInfo t1659_f2_FieldInfo = 
{
	"None", &t1659_0_0_32854, &t1659_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1659_0_0_32854;
FieldInfo t1659_f3_FieldInfo = 
{
	"MSIL", &t1659_0_0_32854, &t1659_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1659_0_0_32854;
FieldInfo t1659_f4_FieldInfo = 
{
	"X86", &t1659_0_0_32854, &t1659_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1659_0_0_32854;
FieldInfo t1659_f5_FieldInfo = 
{
	"IA64", &t1659_0_0_32854, &t1659_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1659_0_0_32854;
FieldInfo t1659_f6_FieldInfo = 
{
	"Amd64", &t1659_0_0_32854, &t1659_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t1659_FIs[] =
{
	&t1659_f1_FieldInfo,
	&t1659_f2_FieldInfo,
	&t1659_f3_FieldInfo,
	&t1659_f4_FieldInfo,
	&t1659_f5_FieldInfo,
	&t1659_f6_FieldInfo,
	NULL
};
static const int32_t t1659_f2_DefaultValueData = 0;
static Il2CppFieldDefaultValueEntry t1659_f2_DefaultValue = 
{
	&t1659_f2_FieldInfo, { (char*)&t1659_f2_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1659_f3_DefaultValueData = 1;
static Il2CppFieldDefaultValueEntry t1659_f3_DefaultValue = 
{
	&t1659_f3_FieldInfo, { (char*)&t1659_f3_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1659_f4_DefaultValueData = 2;
static Il2CppFieldDefaultValueEntry t1659_f4_DefaultValue = 
{
	&t1659_f4_FieldInfo, { (char*)&t1659_f4_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1659_f5_DefaultValueData = 3;
static Il2CppFieldDefaultValueEntry t1659_f5_DefaultValue = 
{
	&t1659_f5_FieldInfo, { (char*)&t1659_f5_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1659_f6_DefaultValueData = 4;
static Il2CppFieldDefaultValueEntry t1659_f6_DefaultValue = 
{
	&t1659_f6_FieldInfo, { (char*)&t1659_f6_DefaultValueData, &t110_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t1659_FDVs[] = 
{
	&t1659_f2_DefaultValue,
	&t1659_f3_DefaultValue,
	&t1659_f4_DefaultValue,
	&t1659_f5_DefaultValue,
	&t1659_f6_DefaultValue,
	NULL
};
static MethodInfo* t1659_MIs[] =
{
	NULL
};
static MethodInfo* t1659_VT[] =
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
static Il2CppInterfaceOffsetPair t1659_IOs[] = 
{
	{ &t120_TI, 4},
	{ &t121_TI, 5},
	{ &t122_TI, 21},
};
void t1659_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t576 * tmp;
		tmp = (t576 *)il2cpp_codegen_object_new (&t576_TI);
		m2699(tmp, true, &m2699_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1659__CustomAttributeCache = {
1,
NULL,
&t1659_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1659_0_0_0;
extern Il2CppType t1659_1_0_0;
extern CustomAttributesCache t1659__CustomAttributeCache;
TypeInfo t1659_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ProcessorArchitecture", "System.Reflection", t1659_MIs, NULL, t1659_FIs, NULL, &t18_TI, NULL, NULL, &t110_TI, NULL, t1659_VT, &t1659__CustomAttributeCache, &t110_TI, &t1659_0_0_0, &t1659_1_0_0, t1659_IOs, NULL, NULL, t1659_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1659)+ sizeof (Il2CppObject), sizeof (int32_t), sizeof(int32_t), 0, 0, -1, 8449, 0, true, false, false, true, false, false, false, false, false, false, false, false, 0, 0, 6, 0, 0, 23, 0, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1676_TI;
#include "t1676MD.h"



// Metadata Definition System.Reflection.PropertyAttributes
extern Il2CppType t110_0_0_1542;
FieldInfo t1676_f1_FieldInfo = 
{
	"value__", &t110_0_0_1542, &t1676_TI, offsetof(t1676, f1) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t1676_0_0_32854;
FieldInfo t1676_f2_FieldInfo = 
{
	"None", &t1676_0_0_32854, &t1676_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1676_0_0_32854;
FieldInfo t1676_f3_FieldInfo = 
{
	"SpecialName", &t1676_0_0_32854, &t1676_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1676_0_0_32854;
FieldInfo t1676_f4_FieldInfo = 
{
	"ReservedMask", &t1676_0_0_32854, &t1676_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1676_0_0_32854;
FieldInfo t1676_f5_FieldInfo = 
{
	"RTSpecialName", &t1676_0_0_32854, &t1676_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1676_0_0_32854;
FieldInfo t1676_f6_FieldInfo = 
{
	"HasDefault", &t1676_0_0_32854, &t1676_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1676_0_0_32854;
FieldInfo t1676_f7_FieldInfo = 
{
	"Reserved2", &t1676_0_0_32854, &t1676_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1676_0_0_32854;
FieldInfo t1676_f8_FieldInfo = 
{
	"Reserved3", &t1676_0_0_32854, &t1676_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1676_0_0_32854;
FieldInfo t1676_f9_FieldInfo = 
{
	"Reserved4", &t1676_0_0_32854, &t1676_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t1676_FIs[] =
{
	&t1676_f1_FieldInfo,
	&t1676_f2_FieldInfo,
	&t1676_f3_FieldInfo,
	&t1676_f4_FieldInfo,
	&t1676_f5_FieldInfo,
	&t1676_f6_FieldInfo,
	&t1676_f7_FieldInfo,
	&t1676_f8_FieldInfo,
	&t1676_f9_FieldInfo,
	NULL
};
static const int32_t t1676_f2_DefaultValueData = 0;
static Il2CppFieldDefaultValueEntry t1676_f2_DefaultValue = 
{
	&t1676_f2_FieldInfo, { (char*)&t1676_f2_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1676_f3_DefaultValueData = 512;
static Il2CppFieldDefaultValueEntry t1676_f3_DefaultValue = 
{
	&t1676_f3_FieldInfo, { (char*)&t1676_f3_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1676_f4_DefaultValueData = 62464;
static Il2CppFieldDefaultValueEntry t1676_f4_DefaultValue = 
{
	&t1676_f4_FieldInfo, { (char*)&t1676_f4_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1676_f5_DefaultValueData = 1024;
static Il2CppFieldDefaultValueEntry t1676_f5_DefaultValue = 
{
	&t1676_f5_FieldInfo, { (char*)&t1676_f5_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1676_f6_DefaultValueData = 4096;
static Il2CppFieldDefaultValueEntry t1676_f6_DefaultValue = 
{
	&t1676_f6_FieldInfo, { (char*)&t1676_f6_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1676_f7_DefaultValueData = 8192;
static Il2CppFieldDefaultValueEntry t1676_f7_DefaultValue = 
{
	&t1676_f7_FieldInfo, { (char*)&t1676_f7_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1676_f8_DefaultValueData = 16384;
static Il2CppFieldDefaultValueEntry t1676_f8_DefaultValue = 
{
	&t1676_f8_FieldInfo, { (char*)&t1676_f8_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1676_f9_DefaultValueData = 32768;
static Il2CppFieldDefaultValueEntry t1676_f9_DefaultValue = 
{
	&t1676_f9_FieldInfo, { (char*)&t1676_f9_DefaultValueData, &t110_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t1676_FDVs[] = 
{
	&t1676_f2_DefaultValue,
	&t1676_f3_DefaultValue,
	&t1676_f4_DefaultValue,
	&t1676_f5_DefaultValue,
	&t1676_f6_DefaultValue,
	&t1676_f7_DefaultValue,
	&t1676_f8_DefaultValue,
	&t1676_f9_DefaultValue,
	NULL
};
static MethodInfo* t1676_MIs[] =
{
	NULL
};
static MethodInfo* t1676_VT[] =
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
static Il2CppInterfaceOffsetPair t1676_IOs[] = 
{
	{ &t120_TI, 4},
	{ &t121_TI, 5},
	{ &t122_TI, 21},
};
void t1676_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t446 * tmp;
		tmp = (t446 *)il2cpp_codegen_object_new (&t446_TI);
		m1932(tmp, &m1932_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t576 * tmp;
		tmp = (t576 *)il2cpp_codegen_object_new (&t576_TI);
		m2699(tmp, true, &m2699_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1676__CustomAttributeCache = {
2,
NULL,
&t1676_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1676_0_0_0;
extern Il2CppType t1676_1_0_0;
extern CustomAttributesCache t1676__CustomAttributeCache;
TypeInfo t1676_TI = 
{
	&g_mscorlib_dll_Image, NULL, "PropertyAttributes", "System.Reflection", t1676_MIs, NULL, t1676_FIs, NULL, &t18_TI, NULL, NULL, &t110_TI, NULL, t1676_VT, &t1676__CustomAttributeCache, &t110_TI, &t1676_0_0_0, &t1676_1_0_0, t1676_IOs, NULL, NULL, t1676_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1676)+ sizeof (Il2CppObject), sizeof (int32_t), sizeof(int32_t), 0, 0, -1, 8449, 0, true, false, false, true, false, false, false, false, false, false, false, false, 0, 0, 9, 0, 0, 23, 0, 3};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m11513_MI;
extern MethodInfo m11514_MI;
extern MethodInfo m11515_MI;


 void m8729 (t1407 * __this, MethodInfo* method){
	{
		m6844(__this, &m6844_MI);
		return;
	}
}
 int32_t m8730 (t1407 * __this, MethodInfo* method){
	{
		return (int32_t)(((int32_t)16));
	}
}
 t695 * m8731 (t1407 * __this, MethodInfo* method){
	{
		t695 * L_0 = (t695 *)VirtFuncInvoker1< t695 *, bool >::Invoke(&m11513_MI, __this, 0);
		return L_0;
	}
}
extern MethodInfo m8732_MI;
 t5 * m8732 (t1407 * __this, t5 * p0, t168* p1, MethodInfo* method){
	{
		t5 * L_0 = (t5 *)VirtFuncInvoker5< t5 *, t5 *, int32_t, t769 *, t168*, t771 * >::Invoke(&m11514_MI, __this, p0, 0, (t769 *)NULL, p1, (t771 *)NULL);
		return L_0;
	}
}
 void m8733 (t1407 * __this, t5 * p0, t5 * p1, t168* p2, MethodInfo* method){
	{
		VirtActionInvoker6< t5 *, t5 *, int32_t, t769 *, t168*, t771 * >::Invoke(&m11515_MI, __this, p0, p1, 0, (t769 *)NULL, p2, (t771 *)NULL);
		return;
	}
}
extern MethodInfo m8734_MI;
 t675* m8734 (t1407 * __this, MethodInfo* method){
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t114_TI));
		return (((t114_SFs*)InitializedTypeInfo(&t114_TI)->static_fields)->f3);
	}
}
extern MethodInfo m8735_MI;
 t675* m8735 (t1407 * __this, MethodInfo* method){
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t114_TI));
		return (((t114_SFs*)InitializedTypeInfo(&t114_TI)->static_fields)->f3);
	}
}
// Metadata Definition System.Reflection.PropertyInfo
extern MethodInfo m11179_MI;
static PropertyInfo t1407____Attributes_PropertyInfo = 
{
	&t1407_TI, "Attributes", &m11179_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m11516_MI;
static PropertyInfo t1407____CanRead_PropertyInfo = 
{
	&t1407_TI, "CanRead", &m11516_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m11517_MI;
static PropertyInfo t1407____CanWrite_PropertyInfo = 
{
	&t1407_TI, "CanWrite", &m11517_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1407____MemberType_PropertyInfo = 
{
	&t1407_TI, "MemberType", &m8730_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1407____PropertyType_PropertyInfo = 
{
	&t1407_TI, "PropertyType", &m11486_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1407_PIs[] =
{
	&t1407____Attributes_PropertyInfo,
	&t1407____CanRead_PropertyInfo,
	&t1407____CanWrite_PropertyInfo,
	&t1407____MemberType_PropertyInfo,
	&t1407____PropertyType_PropertyInfo,
	NULL
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m8729_MI = 
{
	".ctor", (methodPointerType)&m8729, &t1407_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, false, 3494, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1676_0_0_0;
extern void* RuntimeInvoker_t1676 (MethodInfo* method, void* obj, void** args);
MethodInfo m11179_MI = 
{
	"get_Attributes", NULL, &t1407_TI, &t1676_0_0_0, RuntimeInvoker_t1676, NULL, &EmptyCustomAttributesCache, 3526, 0, 14, 0, false, false, 3495, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
MethodInfo m11516_MI = 
{
	"get_CanRead", NULL, &t1407_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 3526, 0, 15, 0, false, false, 3496, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
MethodInfo m11517_MI = 
{
	"get_CanWrite", NULL, &t1407_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 3526, 0, 16, 0, false, false, 3497, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1410_0_0_0;
extern void* RuntimeInvoker_t1410 (MethodInfo* method, void* obj, void** args);
MethodInfo m8730_MI = 
{
	"get_MemberType", (methodPointerType)&m8730, &t1407_TI, &t1410_0_0_0, RuntimeInvoker_t1410, NULL, &EmptyCustomAttributesCache, 2246, 0, 7, 0, false, false, 3498, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t114_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m11486_MI = 
{
	"get_PropertyType", NULL, &t1407_TI, &t114_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 3526, 0, 17, 0, false, false, 3499, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t108_0_0_0;
static ParameterInfo t1407_m11518_ParameterInfos[] = 
{
	{"nonPublic", 0, 134222071, &EmptyCustomAttributesCache, &t108_0_0_0},
};
extern Il2CppType t1406_0_0_0;
extern void* RuntimeInvoker_t5_t111 (MethodInfo* method, void* obj, void** args);
MethodInfo m11518_MI = 
{
	"GetAccessors", NULL, &t1407_TI, &t1406_0_0_0, RuntimeInvoker_t5_t111, t1407_m11518_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 18, 1, false, false, 3500, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t695_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8731_MI = 
{
	"GetGetMethod", (methodPointerType)&m8731, &t1407_TI, &t695_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 486, 0, 19, 0, false, false, 3501, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t108_0_0_0;
static ParameterInfo t1407_m11513_ParameterInfos[] = 
{
	{"nonPublic", 0, 134222072, &EmptyCustomAttributesCache, &t108_0_0_0},
};
extern Il2CppType t695_0_0_0;
extern void* RuntimeInvoker_t5_t111 (MethodInfo* method, void* obj, void** args);
MethodInfo m11513_MI = 
{
	"GetGetMethod", NULL, &t1407_TI, &t695_0_0_0, RuntimeInvoker_t5_t111, t1407_m11513_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 20, 1, false, false, 3502, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t776_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m11485_MI = 
{
	"GetIndexParameters", NULL, &t1407_TI, &t776_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 1478, 0, 21, 0, false, false, 3503, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t108_0_0_0;
static ParameterInfo t1407_m11519_ParameterInfos[] = 
{
	{"nonPublic", 0, 134222073, &EmptyCustomAttributesCache, &t108_0_0_0},
};
extern Il2CppType t695_0_0_0;
extern void* RuntimeInvoker_t5_t111 (MethodInfo* method, void* obj, void** args);
MethodInfo m11519_MI = 
{
	"GetSetMethod", NULL, &t1407_TI, &t695_0_0_0, RuntimeInvoker_t5_t111, t1407_m11519_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 22, 1, false, false, 3504, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t5_0_0_0;
extern Il2CppType t168_0_0_0;
static ParameterInfo t1407_m8732_ParameterInfos[] = 
{
	{"obj", 0, 134222074, &EmptyCustomAttributesCache, &t5_0_0_0},
	{"index", 1, 134222075, &EmptyCustomAttributesCache, &t168_0_0_0},
};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5_t5_t5 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t1407__CustomAttributeCache_m8732;
MethodInfo m8732_MI = 
{
	"GetValue", (methodPointerType)&m8732, &t1407_TI, &t5_0_0_0, RuntimeInvoker_t5_t5_t5, t1407_m8732_ParameterInfos, &t1407__CustomAttributeCache_m8732, 454, 0, 23, 2, false, false, 3505, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t5_0_0_0;
extern Il2CppType t768_0_0_0;
extern Il2CppType t769_0_0_0;
extern Il2CppType t168_0_0_0;
extern Il2CppType t771_0_0_0;
static ParameterInfo t1407_m11514_ParameterInfos[] = 
{
	{"obj", 0, 134222076, &EmptyCustomAttributesCache, &t5_0_0_0},
	{"invokeAttr", 1, 134222077, &EmptyCustomAttributesCache, &t768_0_0_0},
	{"binder", 2, 134222078, &EmptyCustomAttributesCache, &t769_0_0_0},
	{"index", 3, 134222079, &EmptyCustomAttributesCache, &t168_0_0_0},
	{"culture", 4, 134222080, &EmptyCustomAttributesCache, &t771_0_0_0},
};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5_t5_t110_t5_t5_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m11514_MI = 
{
	"GetValue", NULL, &t1407_TI, &t5_0_0_0, RuntimeInvoker_t5_t5_t110_t5_t5_t5, t1407_m11514_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 24, 5, false, false, 3506, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t5_0_0_0;
extern Il2CppType t5_0_0_0;
extern Il2CppType t168_0_0_0;
static ParameterInfo t1407_m8733_ParameterInfos[] = 
{
	{"obj", 0, 134222081, &EmptyCustomAttributesCache, &t5_0_0_0},
	{"value", 1, 134222082, &EmptyCustomAttributesCache, &t5_0_0_0},
	{"index", 2, 134222083, &EmptyCustomAttributesCache, &t168_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t5_t5 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t1407__CustomAttributeCache_m8733;
MethodInfo m8733_MI = 
{
	"SetValue", (methodPointerType)&m8733, &t1407_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t5_t5, t1407_m8733_ParameterInfos, &t1407__CustomAttributeCache_m8733, 454, 0, 25, 3, false, false, 3507, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t5_0_0_0;
extern Il2CppType t5_0_0_0;
extern Il2CppType t768_0_0_0;
extern Il2CppType t769_0_0_0;
extern Il2CppType t168_0_0_0;
extern Il2CppType t771_0_0_0;
static ParameterInfo t1407_m11515_ParameterInfos[] = 
{
	{"obj", 0, 134222084, &EmptyCustomAttributesCache, &t5_0_0_0},
	{"value", 1, 134222085, &EmptyCustomAttributesCache, &t5_0_0_0},
	{"invokeAttr", 2, 134222086, &EmptyCustomAttributesCache, &t768_0_0_0},
	{"binder", 3, 134222087, &EmptyCustomAttributesCache, &t769_0_0_0},
	{"index", 4, 134222088, &EmptyCustomAttributesCache, &t168_0_0_0},
	{"culture", 5, 134222089, &EmptyCustomAttributesCache, &t771_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t5_t110_t5_t5_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m11515_MI = 
{
	"SetValue", NULL, &t1407_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t5_t110_t5_t5_t5, t1407_m11515_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 26, 6, false, false, 3508, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t675_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8734_MI = 
{
	"GetOptionalCustomModifiers", (methodPointerType)&m8734, &t1407_TI, &t675_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 454, 0, 27, 0, false, false, 3509, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t675_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8735_MI = 
{
	"GetRequiredCustomModifiers", (methodPointerType)&m8735, &t1407_TI, &t675_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 454, 0, 28, 0, false, false, 3510, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1407_MIs[] =
{
	&m8729_MI,
	&m11179_MI,
	&m11516_MI,
	&m11517_MI,
	&m8730_MI,
	&m11486_MI,
	&m11518_MI,
	&m8731_MI,
	&m11513_MI,
	&m11485_MI,
	&m11519_MI,
	&m8732_MI,
	&m11514_MI,
	&m8733_MI,
	&m11515_MI,
	&m8734_MI,
	&m8735_MI,
	NULL
};
static MethodInfo* t1407_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m3557_MI,
	&m10990_MI,
	NULL,
	&m8730_MI,
	NULL,
	NULL,
	&m6845_MI,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	&m8731_MI,
	NULL,
	NULL,
	NULL,
	&m8732_MI,
	NULL,
	&m8733_MI,
	NULL,
	&m8734_MI,
	&m8735_MI,
};
static TypeInfo* t1407_ITIs[] = 
{
	&t2371_TI,
};
static Il2CppInterfaceOffsetPair t1407_IOs[] = 
{
	{ &t1990_TI, 4},
	{ &t2247_TI, 6},
	{ &t2371_TI, 14},
};
void t1407_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t1697 * tmp;
		tmp = (t1697 *)il2cpp_codegen_object_new (&t1697_TI);
		m8786(tmp, 0, &m8786_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t576 * tmp;
		tmp = (t576 *)il2cpp_codegen_object_new (&t576_TI);
		m2699(tmp, true, &m2699_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		t1699 * tmp;
		tmp = (t1699 *)il2cpp_codegen_object_new (&t1699_TI);
		m8787(tmp, il2cpp_codegen_type_get_object(InitializedTypeInfo(&t2371_TI)), &m8787_MI);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
}
void t1407_CustomAttributesCacheGenerator_m8732(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t488 * tmp;
		tmp = (t488 *)il2cpp_codegen_object_new (&t488_TI);
		m2155(tmp, &m2155_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t1553 * tmp;
		tmp = (t1553 *)il2cpp_codegen_object_new (&t1553_TI);
		m7614(tmp, &m7614_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
void t1407_CustomAttributesCacheGenerator_m8733(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t1553 * tmp;
		tmp = (t1553 *)il2cpp_codegen_object_new (&t1553_TI);
		m7614(tmp, &m7614_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t488 * tmp;
		tmp = (t488 *)il2cpp_codegen_object_new (&t488_TI);
		m2155(tmp, &m2155_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1407__CustomAttributeCache = {
3,
NULL,
&t1407_CustomAttributesCacheGenerator
};
CustomAttributesCache t1407__CustomAttributeCache_m8732 = {
2,
NULL,
&t1407_CustomAttributesCacheGenerator_m8732
};
CustomAttributesCache t1407__CustomAttributeCache_m8733 = {
2,
NULL,
&t1407_CustomAttributesCacheGenerator_m8733
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1407_0_0_0;
extern Il2CppType t1407_1_0_0;
struct t1407;
extern CustomAttributesCache t1407__CustomAttributeCache;
extern CustomAttributesCache t1407__CustomAttributeCache_m8732;
extern CustomAttributesCache t1407__CustomAttributeCache_m8733;
TypeInfo t1407_TI = 
{
	&g_mscorlib_dll_Image, NULL, "PropertyInfo", "System.Reflection", t1407_MIs, t1407_PIs, NULL, NULL, &t450_TI, NULL, NULL, &t1407_TI, t1407_ITIs, t1407_VT, &t1407__CustomAttributeCache, &t1407_TI, &t1407_0_0_0, &t1407_1_0_0, t1407_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1407), 0, -1, 0, 0, -1, 1056897, 0, false, false, false, false, false, false, false, false, false, false, false, false, 17, 5, 0, 0, 0, 29, 1, 3};
#include "t1601.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1601_TI;
#include "t1601MD.h"



// Metadata Definition System.Reflection.ResourceAttributes
extern Il2CppType t110_0_0_1542;
FieldInfo t1601_f1_FieldInfo = 
{
	"value__", &t110_0_0_1542, &t1601_TI, offsetof(t1601, f1) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t1601_0_0_32854;
FieldInfo t1601_f2_FieldInfo = 
{
	"Public", &t1601_0_0_32854, &t1601_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1601_0_0_32854;
FieldInfo t1601_f3_FieldInfo = 
{
	"Private", &t1601_0_0_32854, &t1601_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t1601_FIs[] =
{
	&t1601_f1_FieldInfo,
	&t1601_f2_FieldInfo,
	&t1601_f3_FieldInfo,
	NULL
};
static const int32_t t1601_f2_DefaultValueData = 1;
static Il2CppFieldDefaultValueEntry t1601_f2_DefaultValue = 
{
	&t1601_f2_FieldInfo, { (char*)&t1601_f2_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1601_f3_DefaultValueData = 2;
static Il2CppFieldDefaultValueEntry t1601_f3_DefaultValue = 
{
	&t1601_f3_FieldInfo, { (char*)&t1601_f3_DefaultValueData, &t110_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t1601_FDVs[] = 
{
	&t1601_f2_DefaultValue,
	&t1601_f3_DefaultValue,
	NULL
};
static MethodInfo* t1601_MIs[] =
{
	NULL
};
static MethodInfo* t1601_VT[] =
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
static Il2CppInterfaceOffsetPair t1601_IOs[] = 
{
	{ &t120_TI, 4},
	{ &t121_TI, 5},
	{ &t122_TI, 21},
};
void t1601_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t446 * tmp;
		tmp = (t446 *)il2cpp_codegen_object_new (&t446_TI);
		m1932(tmp, &m1932_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t576 * tmp;
		tmp = (t576 *)il2cpp_codegen_object_new (&t576_TI);
		m2699(tmp, true, &m2699_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1601__CustomAttributeCache = {
2,
NULL,
&t1601_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1601_0_0_0;
extern Il2CppType t1601_1_0_0;
extern CustomAttributesCache t1601__CustomAttributeCache;
TypeInfo t1601_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ResourceAttributes", "System.Reflection", t1601_MIs, NULL, t1601_FIs, NULL, &t18_TI, NULL, NULL, &t110_TI, NULL, t1601_VT, &t1601__CustomAttributeCache, &t110_TI, &t1601_0_0_0, &t1601_1_0_0, t1601_IOs, NULL, NULL, t1601_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1601)+ sizeof (Il2CppObject), sizeof (int32_t), sizeof(int32_t), 0, 0, -1, 8449, 0, true, false, false, true, false, false, false, false, false, false, false, false, 0, 0, 3, 0, 0, 23, 0, 3};
#ifndef _MSC_VER
#else
#endif
#include "t1657MD.h"

#include "t1496.h"
extern TypeInfo t1496_TI;
#include "t1496MD.h"
extern MethodInfo m4780_MI;
extern MethodInfo m4776_MI;
extern MethodInfo m7087_MI;
extern MethodInfo m8739_MI;
extern MethodInfo m7332_MI;
extern MethodInfo m7331_MI;


extern MethodInfo m8736_MI;
 void m8736 (t1657 * __this, t829 * p0, t830  p1, MethodInfo* method){
	{
		m460(__this, &m460_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t114_TI));
		t114 * L_0 = m532(NULL, LoadTypeToken(&t1044_0_0_0), &m532_MI);
		t5 * L_1 = m4778(p0, (t11*) &_stringLiteral1898, L_0, &m4778_MI);
		__this->f0 = ((t1044*)Castclass(L_1, InitializedTypeInfo(&t1044_TI)));
		t11* L_2 = m4787(p0, (t11*) &_stringLiteral1899, &m4787_MI);
		__this->f1 = L_2;
		bool L_3 = m4780(p0, (t11*) &_stringLiteral1900, &m4780_MI);
		__this->f2 = L_3;
		t114 * L_4 = m532(NULL, LoadTypeToken(&t1044_0_0_0), &m532_MI);
		t5 * L_5 = m4778(p0, (t11*) &_stringLiteral1901, L_4, &m4778_MI);
		__this->f3 = ((t1044*)Castclass(L_5, InitializedTypeInfo(&t1044_TI)));
		return;
	}
}
extern MethodInfo m8737_MI;
 void m8737 (t1657 * __this, t829 * p0, t830  p1, MethodInfo* method){
	{
		t1044* L_0 = (__this->f0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t114_TI));
		t114 * L_1 = m532(NULL, LoadTypeToken(&t1044_0_0_0), &m532_MI);
		m4775(p0, (t11*) &_stringLiteral1898, (t5 *)(t5 *)L_0, L_1, &m4775_MI);
		t11* L_2 = (__this->f1);
		m4790(p0, (t11*) &_stringLiteral1899, L_2, &m4790_MI);
		bool L_3 = (__this->f2);
		m4776(p0, (t11*) &_stringLiteral1900, L_3, &m4776_MI);
		t1044* L_4 = (__this->f3);
		t114 * L_5 = m532(NULL, LoadTypeToken(&t1044_0_0_0), &m532_MI);
		m4775(p0, (t11*) &_stringLiteral1901, (t5 *)(t5 *)L_4, L_5, &m4775_MI);
		return;
	}
}
extern MethodInfo m8738_MI;
 void m8738 (t1657 * __this, t5 * p0, MethodInfo* method){
	{
		return;
	}
}
 t1046 * m8739 (t1657 * __this, MethodInfo* method){
	t142 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t142 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	{
		t1046 * L_0 = (__this->f4);
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		t1046 * L_1 = (__this->f4);
		return L_1;
	}

IL_000f:
	{
		t1044* L_2 = (__this->f3);
		if (!L_2)
		{
			goto IL_0034;
		}
	}

IL_0017:
	try
	{ // begin try (depth: 1)
		t1044* L_3 = (__this->f3);
		t1046 * L_4 = m7087(NULL, L_3, &m7087_MI);
		__this->f4 = L_4;
		// IL_0028: leave.s IL_0034
		goto IL_0034;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (t142 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&t5_TI, e.ex->object.klass))
			goto IL_002a;
		throw e;
	}

IL_002a:
	{ // begin catch(System.Object)
		__this->f3 = (t1044*)NULL;
		// IL_0032: leave.s IL_0034
		goto IL_0034;
	} // end catch (depth: 1)

IL_0034:
	{
		t1046 * L_5 = (__this->f4);
		return L_5;
	}
}
extern MethodInfo m8740_MI;
 t1496 * m8740 (t1657 * __this, MethodInfo* method){
	t1046 * V_0 = {0};
	{
		t1046 * L_0 = m8739(__this, &m8739_MI);
		V_0 = L_0;
		if (!V_0)
		{
			goto IL_0011;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1496_TI));
		t1496 * L_1 = (t1496 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1496_TI));
		m7332(L_1, V_0, &m7332_MI);
		return L_1;
	}

IL_0011:
	{
		t1044* L_2 = (__this->f0);
		if (!L_2)
		{
			goto IL_0025;
		}
	}
	{
		t1044* L_3 = (__this->f0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1496_TI));
		t1496 * L_4 = (t1496 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1496_TI));
		m7331(L_4, L_3, &m7331_MI);
		return L_4;
	}

IL_0025:
	{
		return (t1496 *)NULL;
	}
}
// Metadata Definition System.Reflection.StrongNameKeyPair
extern Il2CppType t1044_0_0_1;
FieldInfo t1657_f0_FieldInfo = 
{
	"_publicKey", &t1044_0_0_1, &t1657_TI, offsetof(t1657, f0), &EmptyCustomAttributesCache};
extern Il2CppType t11_0_0_1;
FieldInfo t1657_f1_FieldInfo = 
{
	"_keyPairContainer", &t11_0_0_1, &t1657_TI, offsetof(t1657, f1), &EmptyCustomAttributesCache};
extern Il2CppType t108_0_0_1;
FieldInfo t1657_f2_FieldInfo = 
{
	"_keyPairExported", &t108_0_0_1, &t1657_TI, offsetof(t1657, f2), &EmptyCustomAttributesCache};
extern Il2CppType t1044_0_0_1;
FieldInfo t1657_f3_FieldInfo = 
{
	"_keyPairArray", &t1044_0_0_1, &t1657_TI, offsetof(t1657, f3), &EmptyCustomAttributesCache};
extern Il2CppType t1046_0_0_129;
FieldInfo t1657_f4_FieldInfo = 
{
	"_rsa", &t1046_0_0_129, &t1657_TI, offsetof(t1657, f4), &EmptyCustomAttributesCache};
static FieldInfo* t1657_FIs[] =
{
	&t1657_f0_FieldInfo,
	&t1657_f1_FieldInfo,
	&t1657_f2_FieldInfo,
	&t1657_f3_FieldInfo,
	&t1657_f4_FieldInfo,
	NULL
};
extern Il2CppType t829_0_0_0;
extern Il2CppType t830_0_0_0;
static ParameterInfo t1657_m8736_ParameterInfos[] = 
{
	{"info", 0, 134222090, &EmptyCustomAttributesCache, &t829_0_0_0},
	{"context", 1, 134222091, &EmptyCustomAttributesCache, &t830_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t830 (MethodInfo* method, void* obj, void** args);
MethodInfo m8736_MI = 
{
	".ctor", (methodPointerType)&m8736, &t1657_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t830, t1657_m8736_ParameterInfos, &EmptyCustomAttributesCache, 6276, 0, 255, 2, false, false, 3511, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t829_0_0_0;
extern Il2CppType t830_0_0_0;
static ParameterInfo t1657_m8737_ParameterInfos[] = 
{
	{"info", 0, 134222092, &EmptyCustomAttributesCache, &t829_0_0_0},
	{"context", 1, 134222093, &EmptyCustomAttributesCache, &t830_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t830 (MethodInfo* method, void* obj, void** args);
MethodInfo m8737_MI = 
{
	"System.Runtime.Serialization.ISerializable.GetObjectData", (methodPointerType)&m8737, &t1657_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t830, t1657_m8737_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 4, 2, false, false, 3512, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t5_0_0_0;
static ParameterInfo t1657_m8738_ParameterInfos[] = 
{
	{"sender", 0, 134222094, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8738_MI = 
{
	"System.Runtime.Serialization.IDeserializationCallback.OnDeserialization", (methodPointerType)&m8738, &t1657_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t1657_m8738_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 5, 1, false, false, 3513, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1046_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8739_MI = 
{
	"GetRSA", (methodPointerType)&m8739, &t1657_TI, &t1046_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 3514, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1496_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8740_MI = 
{
	"StrongName", (methodPointerType)&m8740, &t1657_TI, &t1496_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 131, 0, 255, 0, false, false, 3515, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1657_MIs[] =
{
	&m8736_MI,
	&m8737_MI,
	&m8738_MI,
	&m8739_MI,
	&m8740_MI,
	NULL
};
static MethodInfo* t1657_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m8737_MI,
	&m8738_MI,
};
static TypeInfo* t1657_ITIs[] = 
{
	&t517_TI,
	&t1184_TI,
};
static Il2CppInterfaceOffsetPair t1657_IOs[] = 
{
	{ &t517_TI, 4},
	{ &t1184_TI, 5},
};
void t1657_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t576 * tmp;
		tmp = (t576 *)il2cpp_codegen_object_new (&t576_TI);
		m2699(tmp, true, &m2699_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1657__CustomAttributeCache = {
1,
NULL,
&t1657_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1657_1_0_0;
struct t1657;
extern CustomAttributesCache t1657__CustomAttributeCache;
TypeInfo t1657_TI = 
{
	&g_mscorlib_dll_Image, NULL, "StrongNameKeyPair", "System.Reflection", t1657_MIs, NULL, t1657_FIs, NULL, &t5_TI, NULL, NULL, &t1657_TI, t1657_ITIs, t1657_VT, &t1657__CustomAttributeCache, &t1657_TI, &t1657_0_0_0, &t1657_1_0_0, t1657_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1657), 0, -1, 0, 0, -1, 1056769, 0, false, false, false, false, false, false, false, false, false, false, false, false, 5, 0, 5, 0, 0, 6, 2, 2};
#ifndef _MSC_VER
#else
#endif

#include "t1429MD.h"
extern MethodInfo m6878_MI;
extern MethodInfo m6062_MI;


extern MethodInfo m8741_MI;
 void m8741 (t1683 * __this, MethodInfo* method){
	{
		t11* L_0 = m6878(NULL, (t11*) &_stringLiteral1902, &m6878_MI);
		m3547(__this, L_0, &m3547_MI);
		return;
	}
}
 void m8742 (t1683 * __this, t11* p0, MethodInfo* method){
	{
		m3547(__this, p0, &m3547_MI);
		return;
	}
}
extern MethodInfo m8743_MI;
 void m8743 (t1683 * __this, t829 * p0, t830  p1, MethodInfo* method){
	{
		m6062(__this, p0, p1, &m6062_MI);
		return;
	}
}
// Metadata Definition System.Reflection.TargetException
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m8741_MI = 
{
	".ctor", (methodPointerType)&m8741, &t1683_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 3516, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t11_0_0_0;
static ParameterInfo t1683_m8742_ParameterInfos[] = 
{
	{"message", 0, 134222095, &EmptyCustomAttributesCache, &t11_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8742_MI = 
{
	".ctor", (methodPointerType)&m8742, &t1683_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t1683_m8742_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 3517, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t829_0_0_0;
extern Il2CppType t830_0_0_0;
static ParameterInfo t1683_m8743_ParameterInfos[] = 
{
	{"info", 0, 134222096, &EmptyCustomAttributesCache, &t829_0_0_0},
	{"context", 1, 134222097, &EmptyCustomAttributesCache, &t830_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t830 (MethodInfo* method, void* obj, void** args);
MethodInfo m8743_MI = 
{
	".ctor", (methodPointerType)&m8743, &t1683_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t830, t1683_m8743_ParameterInfos, &EmptyCustomAttributesCache, 6276, 0, 255, 2, false, false, 3518, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1683_MIs[] =
{
	&m8741_MI,
	&m8742_MI,
	&m8743_MI,
	NULL
};
static MethodInfo* t1683_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m3501_MI,
	&m3502_MI,
	&m3503_MI,
	&m584_MI,
	&m3504_MI,
	&m3505_MI,
	&m3502_MI,
	&m3506_MI,
};
static Il2CppInterfaceOffsetPair t1683_IOs[] = 
{
	{ &t517_TI, 4},
	{ &t728_TI, 5},
};
void t1683_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t576 * tmp;
		tmp = (t576 *)il2cpp_codegen_object_new (&t576_TI);
		m2699(tmp, true, &m2699_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1683__CustomAttributeCache = {
1,
NULL,
&t1683_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1683_0_0_0;
extern Il2CppType t1683_1_0_0;
struct t1683;
extern CustomAttributesCache t1683__CustomAttributeCache;
TypeInfo t1683_TI = 
{
	&g_mscorlib_dll_Image, NULL, "TargetException", "System.Reflection", t1683_MIs, NULL, NULL, NULL, &t142_TI, NULL, NULL, &t1683_TI, NULL, t1683_VT, &t1683__CustomAttributeCache, &t1683_TI, &t1683_0_0_0, &t1683_1_0_0, t1683_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1683), 0, -1, 0, 0, -1, 1056769, 0, false, false, false, false, false, false, false, false, false, false, false, false, 3, 0, 0, 0, 0, 11, 0, 2};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m3593_MI;


 void m8744 (t1684 * __this, t142 * p0, MethodInfo* method){
	{
		m3593(__this, (t11*) &_stringLiteral1903, p0, &m3593_MI);
		return;
	}
}
extern MethodInfo m8745_MI;
 void m8745 (t1684 * __this, t11* p0, t142 * p1, MethodInfo* method){
	{
		m3593(__this, p0, p1, &m3593_MI);
		return;
	}
}
extern MethodInfo m8746_MI;
 void m8746 (t1684 * __this, t829 * p0, t830  p1, MethodInfo* method){
	{
		m6062(__this, p0, p1, &m6062_MI);
		return;
	}
}
// Metadata Definition System.Reflection.TargetInvocationException
extern Il2CppType t142_0_0_0;
extern Il2CppType t142_0_0_0;
static ParameterInfo t1684_m8744_ParameterInfos[] = 
{
	{"inner", 0, 134222098, &EmptyCustomAttributesCache, &t142_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8744_MI = 
{
	".ctor", (methodPointerType)&m8744, &t1684_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t1684_m8744_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 3519, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t11_0_0_0;
extern Il2CppType t142_0_0_0;
static ParameterInfo t1684_m8745_ParameterInfos[] = 
{
	{"message", 0, 134222099, &EmptyCustomAttributesCache, &t11_0_0_0},
	{"inner", 1, 134222100, &EmptyCustomAttributesCache, &t142_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8745_MI = 
{
	".ctor", (methodPointerType)&m8745, &t1684_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t5, t1684_m8745_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, false, 3520, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t829_0_0_0;
extern Il2CppType t830_0_0_0;
static ParameterInfo t1684_m8746_ParameterInfos[] = 
{
	{"info", 0, 134222101, &EmptyCustomAttributesCache, &t829_0_0_0},
	{"sc", 1, 134222102, &EmptyCustomAttributesCache, &t830_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t830 (MethodInfo* method, void* obj, void** args);
MethodInfo m8746_MI = 
{
	".ctor", (methodPointerType)&m8746, &t1684_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t830, t1684_m8746_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 2, false, false, 3521, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1684_MIs[] =
{
	&m8744_MI,
	&m8745_MI,
	&m8746_MI,
	NULL
};
static MethodInfo* t1684_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m3501_MI,
	&m3502_MI,
	&m3503_MI,
	&m584_MI,
	&m3504_MI,
	&m3505_MI,
	&m3502_MI,
	&m3506_MI,
};
static Il2CppInterfaceOffsetPair t1684_IOs[] = 
{
	{ &t517_TI, 4},
	{ &t728_TI, 5},
};
void t1684_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t576 * tmp;
		tmp = (t576 *)il2cpp_codegen_object_new (&t576_TI);
		m2699(tmp, true, &m2699_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1684__CustomAttributeCache = {
1,
NULL,
&t1684_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1684_0_0_0;
extern Il2CppType t1684_1_0_0;
struct t1684;
extern CustomAttributesCache t1684__CustomAttributeCache;
TypeInfo t1684_TI = 
{
	&g_mscorlib_dll_Image, NULL, "TargetInvocationException", "System.Reflection", t1684_MIs, NULL, NULL, NULL, &t142_TI, NULL, NULL, &t1684_TI, NULL, t1684_VT, &t1684__CustomAttributeCache, &t1684_TI, &t1684_0_0_0, &t1684_1_0_0, t1684_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1684), 0, -1, 0, 0, -1, 1057025, 0, false, false, false, false, false, false, false, false, false, false, false, false, 3, 0, 0, 0, 0, 11, 0, 2};
#ifndef _MSC_VER
#else
#endif



 void m8747 (t1685 * __this, MethodInfo* method){
	{
		t11* L_0 = m6878(NULL, (t11*) &_stringLiteral1904, &m6878_MI);
		m3547(__this, L_0, &m3547_MI);
		return;
	}
}
 void m8748 (t1685 * __this, t11* p0, MethodInfo* method){
	{
		m3547(__this, p0, &m3547_MI);
		return;
	}
}
extern MethodInfo m8749_MI;
 void m8749 (t1685 * __this, t829 * p0, t830  p1, MethodInfo* method){
	{
		m6062(__this, p0, p1, &m6062_MI);
		return;
	}
}
// Metadata Definition System.Reflection.TargetParameterCountException
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m8747_MI = 
{
	".ctor", (methodPointerType)&m8747, &t1685_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 3522, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t11_0_0_0;
static ParameterInfo t1685_m8748_ParameterInfos[] = 
{
	{"message", 0, 134222103, &EmptyCustomAttributesCache, &t11_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8748_MI = 
{
	".ctor", (methodPointerType)&m8748, &t1685_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t1685_m8748_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 3523, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t829_0_0_0;
extern Il2CppType t830_0_0_0;
static ParameterInfo t1685_m8749_ParameterInfos[] = 
{
	{"info", 0, 134222104, &EmptyCustomAttributesCache, &t829_0_0_0},
	{"context", 1, 134222105, &EmptyCustomAttributesCache, &t830_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t830 (MethodInfo* method, void* obj, void** args);
MethodInfo m8749_MI = 
{
	".ctor", (methodPointerType)&m8749, &t1685_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t830, t1685_m8749_ParameterInfos, &EmptyCustomAttributesCache, 6275, 0, 255, 2, false, false, 3524, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1685_MIs[] =
{
	&m8747_MI,
	&m8748_MI,
	&m8749_MI,
	NULL
};
static MethodInfo* t1685_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m3501_MI,
	&m3502_MI,
	&m3503_MI,
	&m584_MI,
	&m3504_MI,
	&m3505_MI,
	&m3502_MI,
	&m3506_MI,
};
static Il2CppInterfaceOffsetPair t1685_IOs[] = 
{
	{ &t517_TI, 4},
	{ &t728_TI, 5},
};
void t1685_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t576 * tmp;
		tmp = (t576 *)il2cpp_codegen_object_new (&t576_TI);
		m2699(tmp, true, &m2699_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1685__CustomAttributeCache = {
1,
NULL,
&t1685_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1685_0_0_0;
extern Il2CppType t1685_1_0_0;
struct t1685;
extern CustomAttributesCache t1685__CustomAttributeCache;
TypeInfo t1685_TI = 
{
	&g_mscorlib_dll_Image, NULL, "TargetParameterCountException", "System.Reflection", t1685_MIs, NULL, NULL, NULL, &t142_TI, NULL, NULL, &t1685_TI, NULL, t1685_VT, &t1685__CustomAttributeCache, &t1685_TI, &t1685_0_0_0, &t1685_1_0_0, t1685_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1685), 0, -1, 0, 0, -1, 1057025, 0, false, false, false, false, false, false, false, false, false, false, false, false, 3, 0, 0, 0, 0, 11, 0, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1409_TI;
#include "t1409MD.h"



// Metadata Definition System.Reflection.TypeAttributes
extern Il2CppType t110_0_0_1542;
FieldInfo t1409_f1_FieldInfo = 
{
	"value__", &t110_0_0_1542, &t1409_TI, offsetof(t1409, f1) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t1409_0_0_32854;
FieldInfo t1409_f2_FieldInfo = 
{
	"VisibilityMask", &t1409_0_0_32854, &t1409_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1409_0_0_32854;
FieldInfo t1409_f3_FieldInfo = 
{
	"NotPublic", &t1409_0_0_32854, &t1409_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1409_0_0_32854;
FieldInfo t1409_f4_FieldInfo = 
{
	"Public", &t1409_0_0_32854, &t1409_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1409_0_0_32854;
FieldInfo t1409_f5_FieldInfo = 
{
	"NestedPublic", &t1409_0_0_32854, &t1409_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1409_0_0_32854;
FieldInfo t1409_f6_FieldInfo = 
{
	"NestedPrivate", &t1409_0_0_32854, &t1409_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1409_0_0_32854;
FieldInfo t1409_f7_FieldInfo = 
{
	"NestedFamily", &t1409_0_0_32854, &t1409_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1409_0_0_32854;
FieldInfo t1409_f8_FieldInfo = 
{
	"NestedAssembly", &t1409_0_0_32854, &t1409_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1409_0_0_32854;
FieldInfo t1409_f9_FieldInfo = 
{
	"NestedFamANDAssem", &t1409_0_0_32854, &t1409_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1409_0_0_32854;
FieldInfo t1409_f10_FieldInfo = 
{
	"NestedFamORAssem", &t1409_0_0_32854, &t1409_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1409_0_0_32854;
FieldInfo t1409_f11_FieldInfo = 
{
	"LayoutMask", &t1409_0_0_32854, &t1409_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1409_0_0_32854;
FieldInfo t1409_f12_FieldInfo = 
{
	"AutoLayout", &t1409_0_0_32854, &t1409_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1409_0_0_32854;
FieldInfo t1409_f13_FieldInfo = 
{
	"SequentialLayout", &t1409_0_0_32854, &t1409_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1409_0_0_32854;
FieldInfo t1409_f14_FieldInfo = 
{
	"ExplicitLayout", &t1409_0_0_32854, &t1409_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1409_0_0_32854;
FieldInfo t1409_f15_FieldInfo = 
{
	"ClassSemanticsMask", &t1409_0_0_32854, &t1409_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1409_0_0_32854;
FieldInfo t1409_f16_FieldInfo = 
{
	"Class", &t1409_0_0_32854, &t1409_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1409_0_0_32854;
FieldInfo t1409_f17_FieldInfo = 
{
	"Interface", &t1409_0_0_32854, &t1409_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1409_0_0_32854;
FieldInfo t1409_f18_FieldInfo = 
{
	"Abstract", &t1409_0_0_32854, &t1409_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1409_0_0_32854;
FieldInfo t1409_f19_FieldInfo = 
{
	"Sealed", &t1409_0_0_32854, &t1409_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1409_0_0_32854;
FieldInfo t1409_f20_FieldInfo = 
{
	"SpecialName", &t1409_0_0_32854, &t1409_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1409_0_0_32854;
FieldInfo t1409_f21_FieldInfo = 
{
	"Import", &t1409_0_0_32854, &t1409_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1409_0_0_32854;
FieldInfo t1409_f22_FieldInfo = 
{
	"Serializable", &t1409_0_0_32854, &t1409_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1409_0_0_32854;
FieldInfo t1409_f23_FieldInfo = 
{
	"StringFormatMask", &t1409_0_0_32854, &t1409_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1409_0_0_32854;
FieldInfo t1409_f24_FieldInfo = 
{
	"AnsiClass", &t1409_0_0_32854, &t1409_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1409_0_0_32854;
FieldInfo t1409_f25_FieldInfo = 
{
	"UnicodeClass", &t1409_0_0_32854, &t1409_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1409_0_0_32854;
FieldInfo t1409_f26_FieldInfo = 
{
	"AutoClass", &t1409_0_0_32854, &t1409_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1409_0_0_32854;
FieldInfo t1409_f27_FieldInfo = 
{
	"BeforeFieldInit", &t1409_0_0_32854, &t1409_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1409_0_0_32854;
FieldInfo t1409_f28_FieldInfo = 
{
	"ReservedMask", &t1409_0_0_32854, &t1409_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1409_0_0_32854;
FieldInfo t1409_f29_FieldInfo = 
{
	"RTSpecialName", &t1409_0_0_32854, &t1409_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1409_0_0_32854;
FieldInfo t1409_f30_FieldInfo = 
{
	"HasSecurity", &t1409_0_0_32854, &t1409_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1409_0_0_32854;
FieldInfo t1409_f31_FieldInfo = 
{
	"CustomFormatClass", &t1409_0_0_32854, &t1409_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1409_0_0_32854;
FieldInfo t1409_f32_FieldInfo = 
{
	"CustomFormatMask", &t1409_0_0_32854, &t1409_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t1409_FIs[] =
{
	&t1409_f1_FieldInfo,
	&t1409_f2_FieldInfo,
	&t1409_f3_FieldInfo,
	&t1409_f4_FieldInfo,
	&t1409_f5_FieldInfo,
	&t1409_f6_FieldInfo,
	&t1409_f7_FieldInfo,
	&t1409_f8_FieldInfo,
	&t1409_f9_FieldInfo,
	&t1409_f10_FieldInfo,
	&t1409_f11_FieldInfo,
	&t1409_f12_FieldInfo,
	&t1409_f13_FieldInfo,
	&t1409_f14_FieldInfo,
	&t1409_f15_FieldInfo,
	&t1409_f16_FieldInfo,
	&t1409_f17_FieldInfo,
	&t1409_f18_FieldInfo,
	&t1409_f19_FieldInfo,
	&t1409_f20_FieldInfo,
	&t1409_f21_FieldInfo,
	&t1409_f22_FieldInfo,
	&t1409_f23_FieldInfo,
	&t1409_f24_FieldInfo,
	&t1409_f25_FieldInfo,
	&t1409_f26_FieldInfo,
	&t1409_f27_FieldInfo,
	&t1409_f28_FieldInfo,
	&t1409_f29_FieldInfo,
	&t1409_f30_FieldInfo,
	&t1409_f31_FieldInfo,
	&t1409_f32_FieldInfo,
	NULL
};
static const int32_t t1409_f2_DefaultValueData = 7;
static Il2CppFieldDefaultValueEntry t1409_f2_DefaultValue = 
{
	&t1409_f2_FieldInfo, { (char*)&t1409_f2_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1409_f3_DefaultValueData = 0;
static Il2CppFieldDefaultValueEntry t1409_f3_DefaultValue = 
{
	&t1409_f3_FieldInfo, { (char*)&t1409_f3_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1409_f4_DefaultValueData = 1;
static Il2CppFieldDefaultValueEntry t1409_f4_DefaultValue = 
{
	&t1409_f4_FieldInfo, { (char*)&t1409_f4_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1409_f5_DefaultValueData = 2;
static Il2CppFieldDefaultValueEntry t1409_f5_DefaultValue = 
{
	&t1409_f5_FieldInfo, { (char*)&t1409_f5_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1409_f6_DefaultValueData = 3;
static Il2CppFieldDefaultValueEntry t1409_f6_DefaultValue = 
{
	&t1409_f6_FieldInfo, { (char*)&t1409_f6_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1409_f7_DefaultValueData = 4;
static Il2CppFieldDefaultValueEntry t1409_f7_DefaultValue = 
{
	&t1409_f7_FieldInfo, { (char*)&t1409_f7_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1409_f8_DefaultValueData = 5;
static Il2CppFieldDefaultValueEntry t1409_f8_DefaultValue = 
{
	&t1409_f8_FieldInfo, { (char*)&t1409_f8_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1409_f9_DefaultValueData = 6;
static Il2CppFieldDefaultValueEntry t1409_f9_DefaultValue = 
{
	&t1409_f9_FieldInfo, { (char*)&t1409_f9_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1409_f10_DefaultValueData = 7;
static Il2CppFieldDefaultValueEntry t1409_f10_DefaultValue = 
{
	&t1409_f10_FieldInfo, { (char*)&t1409_f10_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1409_f11_DefaultValueData = 24;
static Il2CppFieldDefaultValueEntry t1409_f11_DefaultValue = 
{
	&t1409_f11_FieldInfo, { (char*)&t1409_f11_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1409_f12_DefaultValueData = 0;
static Il2CppFieldDefaultValueEntry t1409_f12_DefaultValue = 
{
	&t1409_f12_FieldInfo, { (char*)&t1409_f12_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1409_f13_DefaultValueData = 8;
static Il2CppFieldDefaultValueEntry t1409_f13_DefaultValue = 
{
	&t1409_f13_FieldInfo, { (char*)&t1409_f13_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1409_f14_DefaultValueData = 16;
static Il2CppFieldDefaultValueEntry t1409_f14_DefaultValue = 
{
	&t1409_f14_FieldInfo, { (char*)&t1409_f14_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1409_f15_DefaultValueData = 32;
static Il2CppFieldDefaultValueEntry t1409_f15_DefaultValue = 
{
	&t1409_f15_FieldInfo, { (char*)&t1409_f15_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1409_f16_DefaultValueData = 0;
static Il2CppFieldDefaultValueEntry t1409_f16_DefaultValue = 
{
	&t1409_f16_FieldInfo, { (char*)&t1409_f16_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1409_f17_DefaultValueData = 32;
static Il2CppFieldDefaultValueEntry t1409_f17_DefaultValue = 
{
	&t1409_f17_FieldInfo, { (char*)&t1409_f17_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1409_f18_DefaultValueData = 128;
static Il2CppFieldDefaultValueEntry t1409_f18_DefaultValue = 
{
	&t1409_f18_FieldInfo, { (char*)&t1409_f18_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1409_f19_DefaultValueData = 256;
static Il2CppFieldDefaultValueEntry t1409_f19_DefaultValue = 
{
	&t1409_f19_FieldInfo, { (char*)&t1409_f19_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1409_f20_DefaultValueData = 1024;
static Il2CppFieldDefaultValueEntry t1409_f20_DefaultValue = 
{
	&t1409_f20_FieldInfo, { (char*)&t1409_f20_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1409_f21_DefaultValueData = 4096;
static Il2CppFieldDefaultValueEntry t1409_f21_DefaultValue = 
{
	&t1409_f21_FieldInfo, { (char*)&t1409_f21_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1409_f22_DefaultValueData = 8192;
static Il2CppFieldDefaultValueEntry t1409_f22_DefaultValue = 
{
	&t1409_f22_FieldInfo, { (char*)&t1409_f22_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1409_f23_DefaultValueData = 196608;
static Il2CppFieldDefaultValueEntry t1409_f23_DefaultValue = 
{
	&t1409_f23_FieldInfo, { (char*)&t1409_f23_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1409_f24_DefaultValueData = 0;
static Il2CppFieldDefaultValueEntry t1409_f24_DefaultValue = 
{
	&t1409_f24_FieldInfo, { (char*)&t1409_f24_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1409_f25_DefaultValueData = 65536;
static Il2CppFieldDefaultValueEntry t1409_f25_DefaultValue = 
{
	&t1409_f25_FieldInfo, { (char*)&t1409_f25_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1409_f26_DefaultValueData = 131072;
static Il2CppFieldDefaultValueEntry t1409_f26_DefaultValue = 
{
	&t1409_f26_FieldInfo, { (char*)&t1409_f26_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1409_f27_DefaultValueData = 1048576;
static Il2CppFieldDefaultValueEntry t1409_f27_DefaultValue = 
{
	&t1409_f27_FieldInfo, { (char*)&t1409_f27_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1409_f28_DefaultValueData = 264192;
static Il2CppFieldDefaultValueEntry t1409_f28_DefaultValue = 
{
	&t1409_f28_FieldInfo, { (char*)&t1409_f28_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1409_f29_DefaultValueData = 2048;
static Il2CppFieldDefaultValueEntry t1409_f29_DefaultValue = 
{
	&t1409_f29_FieldInfo, { (char*)&t1409_f29_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1409_f30_DefaultValueData = 262144;
static Il2CppFieldDefaultValueEntry t1409_f30_DefaultValue = 
{
	&t1409_f30_FieldInfo, { (char*)&t1409_f30_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1409_f31_DefaultValueData = 196608;
static Il2CppFieldDefaultValueEntry t1409_f31_DefaultValue = 
{
	&t1409_f31_FieldInfo, { (char*)&t1409_f31_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1409_f32_DefaultValueData = 12582912;
static Il2CppFieldDefaultValueEntry t1409_f32_DefaultValue = 
{
	&t1409_f32_FieldInfo, { (char*)&t1409_f32_DefaultValueData, &t110_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t1409_FDVs[] = 
{
	&t1409_f2_DefaultValue,
	&t1409_f3_DefaultValue,
	&t1409_f4_DefaultValue,
	&t1409_f5_DefaultValue,
	&t1409_f6_DefaultValue,
	&t1409_f7_DefaultValue,
	&t1409_f8_DefaultValue,
	&t1409_f9_DefaultValue,
	&t1409_f10_DefaultValue,
	&t1409_f11_DefaultValue,
	&t1409_f12_DefaultValue,
	&t1409_f13_DefaultValue,
	&t1409_f14_DefaultValue,
	&t1409_f15_DefaultValue,
	&t1409_f16_DefaultValue,
	&t1409_f17_DefaultValue,
	&t1409_f18_DefaultValue,
	&t1409_f19_DefaultValue,
	&t1409_f20_DefaultValue,
	&t1409_f21_DefaultValue,
	&t1409_f22_DefaultValue,
	&t1409_f23_DefaultValue,
	&t1409_f24_DefaultValue,
	&t1409_f25_DefaultValue,
	&t1409_f26_DefaultValue,
	&t1409_f27_DefaultValue,
	&t1409_f28_DefaultValue,
	&t1409_f29_DefaultValue,
	&t1409_f30_DefaultValue,
	&t1409_f31_DefaultValue,
	&t1409_f32_DefaultValue,
	NULL
};
static MethodInfo* t1409_MIs[] =
{
	NULL
};
static MethodInfo* t1409_VT[] =
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
static Il2CppInterfaceOffsetPair t1409_IOs[] = 
{
	{ &t120_TI, 4},
	{ &t121_TI, 5},
	{ &t122_TI, 21},
};
void t1409_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t576 * tmp;
		tmp = (t576 *)il2cpp_codegen_object_new (&t576_TI);
		m2699(tmp, true, &m2699_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t446 * tmp;
		tmp = (t446 *)il2cpp_codegen_object_new (&t446_TI);
		m1932(tmp, &m1932_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1409__CustomAttributeCache = {
2,
NULL,
&t1409_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1409_1_0_0;
extern CustomAttributesCache t1409__CustomAttributeCache;
TypeInfo t1409_TI = 
{
	&g_mscorlib_dll_Image, NULL, "TypeAttributes", "System.Reflection", t1409_MIs, NULL, t1409_FIs, NULL, &t18_TI, NULL, NULL, &t110_TI, NULL, t1409_VT, &t1409__CustomAttributeCache, &t110_TI, &t1409_0_0_0, &t1409_1_0_0, t1409_IOs, NULL, NULL, t1409_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1409)+ sizeof (Il2CppObject), sizeof (int32_t), sizeof(int32_t), 0, 0, -1, 8449, 0, true, false, false, true, false, false, false, false, false, false, false, false, 0, 0, 32, 0, 0, 23, 0, 3};
#include "t1686.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1686_TI;
#include "t1686MD.h"

extern MethodInfo m4829_MI;
extern MethodInfo m3642_MI;
extern MethodInfo m6818_MI;
extern MethodInfo m6824_MI;


extern MethodInfo m8750_MI;
 void m8750 (t1686 * __this, MethodInfo* method){
	{
		m6774(__this, &m6774_MI);
		return;
	}
}
extern MethodInfo m8751_MI;
 t1194 * m8751 (t1686 * __this, MethodInfo* method){
	{
		t114 * L_0 = (__this->f8);
		t1194 * L_1 = (t1194 *)VirtFuncInvoker0< t1194 * >::Invoke(&m4829_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m8752_MI;
 t11* m8752 (t1686 * __this, MethodInfo* method){
	{
		t114 * L_0 = (__this->f8);
		t11* L_1 = (t11*)VirtFuncInvoker0< t11* >::Invoke(&m3642_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m8753_MI;
 t114 * m8753 (t1686 * __this, MethodInfo* method){
	{
		t114 * L_0 = (__this->f8);
		t114 * L_1 = (t114 *)VirtFuncInvoker0< t114 * >::Invoke(&m3555_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m8754_MI;
 t11* m8754 (t1686 * __this, MethodInfo* method){
	{
		t114 * L_0 = (__this->f8);
		t11* L_1 = (t11*)VirtFuncInvoker0< t11* >::Invoke(&m3644_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m8755_MI;
 t1402 * m8755 (t1686 * __this, MethodInfo* method){
	{
		t114 * L_0 = (__this->f8);
		t1402 * L_1 = (t1402 *)VirtFuncInvoker0< t1402 * >::Invoke(&m11184_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m8756_MI;
 t11* m8756 (t1686 * __this, MethodInfo* method){
	{
		t114 * L_0 = (__this->f8);
		t11* L_1 = (t11*)VirtFuncInvoker0< t11* >::Invoke(&m3571_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m8757_MI;
 t11* m8757 (t1686 * __this, MethodInfo* method){
	{
		t114 * L_0 = (__this->f8);
		t11* L_1 = (t11*)VirtFuncInvoker0< t11* >::Invoke(&m3585_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m8758_MI;
 t115  m8758 (t1686 * __this, MethodInfo* method){
	{
		t114 * L_0 = (__this->f8);
		t115  L_1 = (t115 )VirtFuncInvoker0< t115  >::Invoke(&m6797_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m8759_MI;
 t114 * m8759 (t1686 * __this, MethodInfo* method){
	{
		t114 * L_0 = (__this->f8);
		t114 * L_1 = (t114 *)VirtFuncInvoker0< t114 * >::Invoke(&m11045_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m8760_MI;
 int32_t m8760 (t1686 * __this, MethodInfo* method){
	{
		t114 * L_0 = (__this->f8);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m6779_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m8761_MI;
 t797 * m8761 (t1686 * __this, int32_t p0, t769 * p1, int32_t p2, t675* p3, t772* p4, MethodInfo* method){
	{
		t114 * L_0 = (__this->f8);
		t797 * L_1 = (t797 *)VirtFuncInvoker5< t797 *, int32_t, t769 *, int32_t, t675*, t772* >::Invoke(&m6830_MI, L_0, p0, p1, p2, p3, p4);
		return L_1;
	}
}
extern MethodInfo m8762_MI;
 t1408* m8762 (t1686 * __this, int32_t p0, MethodInfo* method){
	{
		t114 * L_0 = (__this->f8);
		t1408* L_1 = (t1408*)VirtFuncInvoker1< t1408*, int32_t >::Invoke(&m11190_MI, L_0, p0);
		return L_1;
	}
}
extern MethodInfo m8763_MI;
 t168* m8763 (t1686 * __this, bool p0, MethodInfo* method){
	{
		t114 * L_0 = (__this->f8);
		t168* L_1 = (t168*)VirtFuncInvoker1< t168*, bool >::Invoke(&m11192_MI, L_0, p0);
		return L_1;
	}
}
extern MethodInfo m8764_MI;
 t168* m8764 (t1686 * __this, t114 * p0, bool p1, MethodInfo* method){
	{
		t114 * L_0 = (__this->f8);
		t168* L_1 = (t168*)VirtFuncInvoker2< t168*, t114 *, bool >::Invoke(&m3557_MI, L_0, p0, p1);
		return L_1;
	}
}
extern MethodInfo m8765_MI;
 t114 * m8765 (t1686 * __this, MethodInfo* method){
	{
		t114 * L_0 = (__this->f8);
		t114 * L_1 = (t114 *)VirtFuncInvoker0< t114 * >::Invoke(&m11046_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m8766_MI;
 t1403 * m8766 (t1686 * __this, t11* p0, int32_t p1, MethodInfo* method){
	{
		t114 * L_0 = (__this->f8);
		t1403 * L_1 = (t1403 *)VirtFuncInvoker2< t1403 *, t11*, int32_t >::Invoke(&m11186_MI, L_0, p0, p1);
		return L_1;
	}
}
extern MethodInfo m8767_MI;
 t1404 * m8767 (t1686 * __this, t11* p0, int32_t p1, MethodInfo* method){
	{
		t114 * L_0 = (__this->f8);
		t1404 * L_1 = (t1404 *)VirtFuncInvoker2< t1404 *, t11*, int32_t >::Invoke(&m11187_MI, L_0, p0, p1);
		return L_1;
	}
}
extern MethodInfo m8768_MI;
 t1405* m8768 (t1686 * __this, int32_t p0, MethodInfo* method){
	{
		t114 * L_0 = (__this->f8);
		t1405* L_1 = (t1405*)VirtFuncInvoker1< t1405*, int32_t >::Invoke(&m11188_MI, L_0, p0);
		return L_1;
	}
}
extern MethodInfo m8769_MI;
 t675* m8769 (t1686 * __this, MethodInfo* method){
	{
		t114 * L_0 = (__this->f8);
		t675* L_1 = (t675*)VirtFuncInvoker0< t675* >::Invoke(&m11185_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m8770_MI;
 t695 * m8770 (t1686 * __this, t11* p0, int32_t p1, t769 * p2, int32_t p3, t675* p4, t772* p5, MethodInfo* method){
	{
		t114 * L_0 = (__this->f8);
		t695 * L_1 = m6818(L_0, p0, p1, p2, p3, p4, p5, &m6818_MI);
		return L_1;
	}
}
extern MethodInfo m8771_MI;
 t1406* m8771 (t1686 * __this, int32_t p0, MethodInfo* method){
	{
		t114 * L_0 = (__this->f8);
		t1406* L_1 = (t1406*)VirtFuncInvoker1< t1406*, int32_t >::Invoke(&m11189_MI, L_0, p0);
		return L_1;
	}
}
extern MethodInfo m8772_MI;
 t1407 * m8772 (t1686 * __this, t11* p0, int32_t p1, t769 * p2, t114 * p3, t675* p4, t772* p5, MethodInfo* method){
	{
		t114 * L_0 = (__this->f8);
		t1407 * L_1 = m6824(L_0, p0, p1, p2, p3, p4, p5, &m6824_MI);
		return L_1;
	}
}
extern MethodInfo m8773_MI;
 bool m8773 (t1686 * __this, MethodInfo* method){
	{
		t114 * L_0 = (__this->f8);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(&m6781_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m8774_MI;
 t5 * m8774 (t1686 * __this, t11* p0, int32_t p1, t769 * p2, t5 * p3, t168* p4, t772* p5, t771 * p6, t585* p7, MethodInfo* method){
	{
		t114 * L_0 = (__this->f8);
		t5 * L_1 = (t5 *)VirtFuncInvoker8< t5 *, t11*, int32_t, t769 *, t5 *, t168*, t772*, t771 *, t585* >::Invoke(&m3565_MI, L_0, p0, p1, p2, p3, p4, p5, p6, p7);
		return L_1;
	}
}
extern MethodInfo m8775_MI;
 bool m8775 (t1686 * __this, MethodInfo* method){
	{
		t114 * L_0 = (__this->f8);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(&m6783_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m8776_MI;
 bool m8776 (t1686 * __this, MethodInfo* method){
	{
		t114 * L_0 = (__this->f8);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(&m6784_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m8777_MI;
 bool m8777 (t1686 * __this, t114 * p0, bool p1, MethodInfo* method){
	{
		t114 * L_0 = (__this->f8);
		bool L_1 = (bool)VirtFuncInvoker2< bool, t114 *, bool >::Invoke(&m10990_MI, L_0, p0, p1);
		return L_1;
	}
}
extern MethodInfo m8778_MI;
 bool m8778 (t1686 * __this, MethodInfo* method){
	{
		t114 * L_0 = (__this->f8);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(&m6791_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m8779_MI;
 bool m8779 (t1686 * __this, MethodInfo* method){
	{
		t114 * L_0 = (__this->f8);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(&m3646_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m8780_MI;
 bool m8780 (t1686 * __this, MethodInfo* method){
	{
		t114 * L_0 = (__this->f8);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(&m6794_MI, L_0);
		return L_1;
	}
}
// Metadata Definition System.Reflection.TypeDelegator
extern Il2CppType t114_0_0_4;
FieldInfo t1686_f8_FieldInfo = 
{
	"typeImpl", &t114_0_0_4, &t1686_TI, offsetof(t1686, f8), &EmptyCustomAttributesCache};
static FieldInfo* t1686_FIs[] =
{
	&t1686_f8_FieldInfo,
	NULL
};
static PropertyInfo t1686____Assembly_PropertyInfo = 
{
	&t1686_TI, "Assembly", &m8751_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1686____AssemblyQualifiedName_PropertyInfo = 
{
	&t1686_TI, "AssemblyQualifiedName", &m8752_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1686____BaseType_PropertyInfo = 
{
	&t1686_TI, "BaseType", &m8753_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1686____FullName_PropertyInfo = 
{
	&t1686_TI, "FullName", &m8754_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1686____Module_PropertyInfo = 
{
	&t1686_TI, "Module", &m8755_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1686____Name_PropertyInfo = 
{
	&t1686_TI, "Name", &m8756_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1686____Namespace_PropertyInfo = 
{
	&t1686_TI, "Namespace", &m8757_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1686____TypeHandle_PropertyInfo = 
{
	&t1686_TI, "TypeHandle", &m8758_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1686____UnderlyingSystemType_PropertyInfo = 
{
	&t1686_TI, "UnderlyingSystemType", &m8759_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1686_PIs[] =
{
	&t1686____Assembly_PropertyInfo,
	&t1686____AssemblyQualifiedName_PropertyInfo,
	&t1686____BaseType_PropertyInfo,
	&t1686____FullName_PropertyInfo,
	&t1686____Module_PropertyInfo,
	&t1686____Name_PropertyInfo,
	&t1686____Namespace_PropertyInfo,
	&t1686____TypeHandle_PropertyInfo,
	&t1686____UnderlyingSystemType_PropertyInfo,
	NULL
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m8750_MI = 
{
	".ctor", (methodPointerType)&m8750, &t1686_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, false, 3525, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1194_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8751_MI = 
{
	"get_Assembly", (methodPointerType)&m8751, &t1686_TI, &t1194_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2246, 0, 14, 0, false, false, 3526, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t11_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8752_MI = 
{
	"get_AssemblyQualifiedName", (methodPointerType)&m8752, &t1686_TI, &t11_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2246, 0, 15, 0, false, false, 3527, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t114_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8753_MI = 
{
	"get_BaseType", (methodPointerType)&m8753, &t1686_TI, &t114_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2246, 0, 17, 0, false, false, 3528, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t11_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8754_MI = 
{
	"get_FullName", (methodPointerType)&m8754, &t1686_TI, &t11_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2246, 0, 18, 0, false, false, 3529, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1402_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8755_MI = 
{
	"get_Module", (methodPointerType)&m8755, &t1686_TI, &t1402_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2246, 0, 10, 0, false, false, 3530, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t11_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8756_MI = 
{
	"get_Name", (methodPointerType)&m8756, &t1686_TI, &t11_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2246, 0, 8, 0, false, false, 3531, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t11_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8757_MI = 
{
	"get_Namespace", (methodPointerType)&m8757, &t1686_TI, &t11_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2246, 0, 34, 0, false, false, 3532, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t115_0_0_0;
extern void* RuntimeInvoker_t115 (MethodInfo* method, void* obj, void** args);
MethodInfo m8758_MI = 
{
	"get_TypeHandle", (methodPointerType)&m8758, &t1686_TI, &t115_0_0_0, RuntimeInvoker_t115, NULL, &EmptyCustomAttributesCache, 2246, 0, 35, 0, false, false, 3533, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t114_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8759_MI = 
{
	"get_UnderlyingSystemType", (methodPointerType)&m8759, &t1686_TI, &t114_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2246, 0, 36, 0, false, false, 3534, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1409_0_0_0;
extern void* RuntimeInvoker_t1409 (MethodInfo* method, void* obj, void** args);
MethodInfo m8760_MI = 
{
	"GetAttributeFlagsImpl", (methodPointerType)&m8760, &t1686_TI, &t1409_0_0_0, RuntimeInvoker_t1409, NULL, &EmptyCustomAttributesCache, 196, 0, 62, 0, false, false, 3535, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t768_0_0_0;
extern Il2CppType t769_0_0_0;
extern Il2CppType t1411_0_0_0;
extern Il2CppType t675_0_0_0;
extern Il2CppType t772_0_0_0;
static ParameterInfo t1686_m8761_ParameterInfos[] = 
{
	{"bindingAttr", 0, 134222106, &EmptyCustomAttributesCache, &t768_0_0_0},
	{"binder", 1, 134222107, &EmptyCustomAttributesCache, &t769_0_0_0},
	{"callConvention", 2, 134222108, &EmptyCustomAttributesCache, &t1411_0_0_0},
	{"types", 3, 134222109, &EmptyCustomAttributesCache, &t675_0_0_0},
	{"modifiers", 4, 134222110, &EmptyCustomAttributesCache, &t772_0_0_0},
};
extern Il2CppType t797_0_0_0;
extern void* RuntimeInvoker_t5_t110_t5_t110_t5_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8761_MI = 
{
	"GetConstructorImpl", (methodPointerType)&m8761, &t1686_TI, &t797_0_0_0, RuntimeInvoker_t5_t110_t5_t110_t5_t5, t1686_m8761_ParameterInfos, &EmptyCustomAttributesCache, 196, 0, 61, 5, false, false, 3536, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t768_0_0_0;
static ParameterInfo t1686_m8762_ParameterInfos[] = 
{
	{"bindingAttr", 0, 134222111, &EmptyCustomAttributesCache, &t768_0_0_0},
};
extern Il2CppType t1408_0_0_0;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t1686__CustomAttributeCache_m8762;
MethodInfo m8762_MI = 
{
	"GetConstructors", (methodPointerType)&m8762, &t1686_TI, &t1408_0_0_0, RuntimeInvoker_t5_t110, t1686_m8762_ParameterInfos, &t1686__CustomAttributeCache_m8762, 198, 0, 74, 1, false, false, 3537, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t108_0_0_0;
static ParameterInfo t1686_m8763_ParameterInfos[] = 
{
	{"inherit", 0, 134222112, &EmptyCustomAttributesCache, &t108_0_0_0},
};
extern Il2CppType t168_0_0_0;
extern void* RuntimeInvoker_t5_t111 (MethodInfo* method, void* obj, void** args);
MethodInfo m8763_MI = 
{
	"GetCustomAttributes", (methodPointerType)&m8763, &t1686_TI, &t168_0_0_0, RuntimeInvoker_t5_t111, t1686_m8763_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 12, 1, false, false, 3538, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t114_0_0_0;
extern Il2CppType t108_0_0_0;
static ParameterInfo t1686_m8764_ParameterInfos[] = 
{
	{"attributeType", 0, 134222113, &EmptyCustomAttributesCache, &t114_0_0_0},
	{"inherit", 1, 134222114, &EmptyCustomAttributesCache, &t108_0_0_0},
};
extern Il2CppType t168_0_0_0;
extern void* RuntimeInvoker_t5_t5_t111 (MethodInfo* method, void* obj, void** args);
MethodInfo m8764_MI = 
{
	"GetCustomAttributes", (methodPointerType)&m8764, &t1686_TI, &t168_0_0_0, RuntimeInvoker_t5_t5_t111, t1686_m8764_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 13, 2, false, false, 3539, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t114_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8765_MI = 
{
	"GetElementType", (methodPointerType)&m8765, &t1686_TI, &t114_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 198, 0, 44, 0, false, false, 3540, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t11_0_0_0;
extern Il2CppType t768_0_0_0;
static ParameterInfo t1686_m8766_ParameterInfos[] = 
{
	{"name", 0, 134222115, &EmptyCustomAttributesCache, &t11_0_0_0},
	{"bindingAttr", 1, 134222116, &EmptyCustomAttributesCache, &t768_0_0_0},
};
extern Il2CppType t1403_0_0_0;
extern void* RuntimeInvoker_t5_t5_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m8766_MI = 
{
	"GetEvent", (methodPointerType)&m8766, &t1686_TI, &t1403_0_0_0, RuntimeInvoker_t5_t5_t110, t1686_m8766_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 45, 2, false, false, 3541, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t11_0_0_0;
extern Il2CppType t768_0_0_0;
static ParameterInfo t1686_m8767_ParameterInfos[] = 
{
	{"name", 0, 134222117, &EmptyCustomAttributesCache, &t11_0_0_0},
	{"bindingAttr", 1, 134222118, &EmptyCustomAttributesCache, &t768_0_0_0},
};
extern Il2CppType t1404_0_0_0;
extern void* RuntimeInvoker_t5_t5_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m8767_MI = 
{
	"GetField", (methodPointerType)&m8767, &t1686_TI, &t1404_0_0_0, RuntimeInvoker_t5_t5_t110, t1686_m8767_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 46, 2, false, false, 3542, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t768_0_0_0;
static ParameterInfo t1686_m8768_ParameterInfos[] = 
{
	{"bindingAttr", 0, 134222119, &EmptyCustomAttributesCache, &t768_0_0_0},
};
extern Il2CppType t1405_0_0_0;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m8768_MI = 
{
	"GetFields", (methodPointerType)&m8768, &t1686_TI, &t1405_0_0_0, RuntimeInvoker_t5_t110, t1686_m8768_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 47, 1, false, false, 3543, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t675_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8769_MI = 
{
	"GetInterfaces", (methodPointerType)&m8769, &t1686_TI, &t675_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 198, 0, 40, 0, false, false, 3544, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t11_0_0_0;
extern Il2CppType t768_0_0_0;
extern Il2CppType t769_0_0_0;
extern Il2CppType t1411_0_0_0;
extern Il2CppType t675_0_0_0;
extern Il2CppType t772_0_0_0;
static ParameterInfo t1686_m8770_ParameterInfos[] = 
{
	{"name", 0, 134222120, &EmptyCustomAttributesCache, &t11_0_0_0},
	{"bindingAttr", 1, 134222121, &EmptyCustomAttributesCache, &t768_0_0_0},
	{"binder", 2, 134222122, &EmptyCustomAttributesCache, &t769_0_0_0},
	{"callConvention", 3, 134222123, &EmptyCustomAttributesCache, &t1411_0_0_0},
	{"types", 4, 134222124, &EmptyCustomAttributesCache, &t675_0_0_0},
	{"modifiers", 5, 134222125, &EmptyCustomAttributesCache, &t772_0_0_0},
};
extern Il2CppType t695_0_0_0;
extern void* RuntimeInvoker_t5_t5_t110_t5_t110_t5_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8770_MI = 
{
	"GetMethodImpl", (methodPointerType)&m8770, &t1686_TI, &t695_0_0_0, RuntimeInvoker_t5_t5_t110_t5_t110_t5_t5, t1686_m8770_ParameterInfos, &EmptyCustomAttributesCache, 196, 0, 53, 6, false, false, 3545, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t768_0_0_0;
static ParameterInfo t1686_m8771_ParameterInfos[] = 
{
	{"bindingAttr", 0, 134222126, &EmptyCustomAttributesCache, &t768_0_0_0},
};
extern Il2CppType t1406_0_0_0;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m8771_MI = 
{
	"GetMethods", (methodPointerType)&m8771, &t1686_TI, &t1406_0_0_0, RuntimeInvoker_t5_t110, t1686_m8771_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 54, 1, false, false, 3546, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t11_0_0_0;
extern Il2CppType t768_0_0_0;
extern Il2CppType t769_0_0_0;
extern Il2CppType t114_0_0_0;
extern Il2CppType t675_0_0_0;
extern Il2CppType t772_0_0_0;
static ParameterInfo t1686_m8772_ParameterInfos[] = 
{
	{"name", 0, 134222127, &EmptyCustomAttributesCache, &t11_0_0_0},
	{"bindingAttr", 1, 134222128, &EmptyCustomAttributesCache, &t768_0_0_0},
	{"binder", 2, 134222129, &EmptyCustomAttributesCache, &t769_0_0_0},
	{"returnType", 3, 134222130, &EmptyCustomAttributesCache, &t114_0_0_0},
	{"types", 4, 134222131, &EmptyCustomAttributesCache, &t675_0_0_0},
	{"modifiers", 5, 134222132, &EmptyCustomAttributesCache, &t772_0_0_0},
};
extern Il2CppType t1407_0_0_0;
extern void* RuntimeInvoker_t5_t5_t110_t5_t5_t5_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8772_MI = 
{
	"GetPropertyImpl", (methodPointerType)&m8772, &t1686_TI, &t1407_0_0_0, RuntimeInvoker_t5_t5_t110_t5_t5_t5_t5, t1686_m8772_ParameterInfos, &EmptyCustomAttributesCache, 196, 0, 60, 6, false, false, 3547, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
MethodInfo m8773_MI = 
{
	"HasElementTypeImpl", (methodPointerType)&m8773, &t1686_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 196, 0, 63, 0, false, false, 3548, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t11_0_0_0;
extern Il2CppType t768_0_0_0;
extern Il2CppType t769_0_0_0;
extern Il2CppType t5_0_0_0;
extern Il2CppType t168_0_0_0;
extern Il2CppType t772_0_0_0;
extern Il2CppType t771_0_0_0;
extern Il2CppType t585_0_0_0;
static ParameterInfo t1686_m8774_ParameterInfos[] = 
{
	{"name", 0, 134222133, &EmptyCustomAttributesCache, &t11_0_0_0},
	{"invokeAttr", 1, 134222134, &EmptyCustomAttributesCache, &t768_0_0_0},
	{"binder", 2, 134222135, &EmptyCustomAttributesCache, &t769_0_0_0},
	{"target", 3, 134222136, &EmptyCustomAttributesCache, &t5_0_0_0},
	{"args", 4, 134222137, &EmptyCustomAttributesCache, &t168_0_0_0},
	{"modifiers", 5, 134222138, &EmptyCustomAttributesCache, &t772_0_0_0},
	{"culture", 6, 134222139, &EmptyCustomAttributesCache, &t771_0_0_0},
	{"namedParameters", 7, 134222140, &EmptyCustomAttributesCache, &t585_0_0_0},
};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5_t5_t110_t5_t5_t5_t5_t5_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8774_MI = 
{
	"InvokeMember", (methodPointerType)&m8774, &t1686_TI, &t5_0_0_0, RuntimeInvoker_t5_t5_t110_t5_t5_t5_t5_t5_t5, t1686_m8774_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 75, 8, false, false, 3549, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
MethodInfo m8775_MI = 
{
	"IsArrayImpl", (methodPointerType)&m8775, &t1686_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 196, 0, 64, 0, false, false, 3550, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
MethodInfo m8776_MI = 
{
	"IsByRefImpl", (methodPointerType)&m8776, &t1686_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 196, 0, 65, 0, false, false, 3551, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t114_0_0_0;
extern Il2CppType t108_0_0_0;
static ParameterInfo t1686_m8777_ParameterInfos[] = 
{
	{"attributeType", 0, 134222141, &EmptyCustomAttributesCache, &t114_0_0_0},
	{"inherit", 1, 134222142, &EmptyCustomAttributesCache, &t108_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5_t111 (MethodInfo* method, void* obj, void** args);
MethodInfo m8777_MI = 
{
	"IsDefined", (methodPointerType)&m8777, &t1686_TI, &t108_0_0_0, RuntimeInvoker_t108_t5_t111, t1686_m8777_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 11, 2, false, false, 3552, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
MethodInfo m8778_MI = 
{
	"IsPointerImpl", (methodPointerType)&m8778, &t1686_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 196, 0, 66, 0, false, false, 3553, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
MethodInfo m8779_MI = 
{
	"IsPrimitiveImpl", (methodPointerType)&m8779, &t1686_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 196, 0, 67, 0, false, false, 3554, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
MethodInfo m8780_MI = 
{
	"IsValueTypeImpl", (methodPointerType)&m8780, &t1686_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 196, 0, 68, 0, false, false, 3555, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1686_MIs[] =
{
	&m8750_MI,
	&m8751_MI,
	&m8752_MI,
	&m8753_MI,
	&m8754_MI,
	&m8755_MI,
	&m8756_MI,
	&m8757_MI,
	&m8758_MI,
	&m8759_MI,
	&m8760_MI,
	&m8761_MI,
	&m8762_MI,
	&m8763_MI,
	&m8764_MI,
	&m8765_MI,
	&m8766_MI,
	&m8767_MI,
	&m8768_MI,
	&m8769_MI,
	&m8770_MI,
	&m8771_MI,
	&m8772_MI,
	&m8773_MI,
	&m8774_MI,
	&m8775_MI,
	&m8776_MI,
	&m8777_MI,
	&m8778_MI,
	&m8779_MI,
	&m8780_MI,
	NULL
};
extern MethodInfo m6780_MI;
extern MethodInfo m6796_MI;
static MethodInfo* t1686_VT[] =
{
	&m6798_MI,
	&m465_MI,
	&m6813_MI,
	&m6831_MI,
	&m8764_MI,
	&m8777_MI,
	&m6780_MI,
	&m6795_MI,
	&m8756_MI,
	&m6796_MI,
	&m8755_MI,
	&m8777_MI,
	&m8763_MI,
	&m8764_MI,
	&m8751_MI,
	&m8752_MI,
	&m6779_MI,
	&m8753_MI,
	&m8754_MI,
	&m6781_MI,
	&m6782_MI,
	&m6783_MI,
	&m6784_MI,
	&m6785_MI,
	&m6786_MI,
	&m6787_MI,
	&m6788_MI,
	&m6789_MI,
	&m6790_MI,
	&m6791_MI,
	&m3646_MI,
	&m6792_MI,
	&m6793_MI,
	&m6794_MI,
	&m8757_MI,
	&m8758_MI,
	&m8759_MI,
	&m6799_MI,
	&m6809_MI,
	&m6810_MI,
	&m8769_MI,
	&m3627_MI,
	&m6811_MI,
	&m6812_MI,
	&m8765_MI,
	&m8766_MI,
	&m8767_MI,
	&m8768_MI,
	&m6814_MI,
	&m6815_MI,
	&m6816_MI,
	&m3645_MI,
	&m6817_MI,
	&m8770_MI,
	&m8771_MI,
	&m6819_MI,
	&m6820_MI,
	&m6821_MI,
	&m6822_MI,
	&m6823_MI,
	&m8772_MI,
	&m8761_MI,
	&m8760_MI,
	&m8773_MI,
	&m8775_MI,
	&m8776_MI,
	&m8778_MI,
	&m8779_MI,
	&m8780_MI,
	&m6827_MI,
	&m6828_MI,
	&m3626_MI,
	&m6829_MI,
	&m6830_MI,
	&m8762_MI,
	&m8774_MI,
	&m6833_MI,
	&m6834_MI,
	&m6835_MI,
	&m6837_MI,
	&m6838_MI,
	&m3625_MI,
	&m6840_MI,
};
static Il2CppInterfaceOffsetPair t1686_IOs[] = 
{
	{ &t2245_TI, 14},
	{ &t2246_TI, 14},
	{ &t1990_TI, 4},
	{ &t2247_TI, 6},
};
void t1686_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t576 * tmp;
		tmp = (t576 *)il2cpp_codegen_object_new (&t576_TI);
		m2699(tmp, true, &m2699_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t1686_CustomAttributesCacheGenerator_m8762(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t576 * tmp;
		tmp = (t576 *)il2cpp_codegen_object_new (&t576_TI);
		m2699(tmp, true, &m2699_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1686__CustomAttributeCache = {
1,
NULL,
&t1686_CustomAttributesCacheGenerator
};
CustomAttributesCache t1686__CustomAttributeCache_m8762 = {
1,
NULL,
&t1686_CustomAttributesCacheGenerator_m8762
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1686_0_0_0;
extern Il2CppType t1686_1_0_0;
struct t1686;
extern CustomAttributesCache t1686__CustomAttributeCache;
extern CustomAttributesCache t1686__CustomAttributeCache_m8762;
TypeInfo t1686_TI = 
{
	&g_mscorlib_dll_Image, NULL, "TypeDelegator", "System.Reflection", t1686_MIs, t1686_PIs, t1686_FIs, NULL, &t114_TI, NULL, NULL, &t1686_TI, NULL, t1686_VT, &t1686__CustomAttributeCache, &t1686_TI, &t1686_0_0_0, &t1686_1_0_0, t1686_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1686), 0, -1, 0, 0, -1, 1056769, 0, false, false, false, false, false, false, false, false, false, false, false, false, 31, 9, 1, 0, 0, 83, 0, 4};
#include "t975.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t975_TI;
#include "t975MD.h"



extern MethodInfo m3844_MI;
 void m3844 (t975 * __this, t11* p0, MethodInfo* method){
	{
		m3526(__this, &m3526_MI);
		if (p0)
		{
			goto IL_0014;
		}
	}
	{
		t484 * L_0 = (t484 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t484_TI));
		m3596(L_0, (t11*) &_stringLiteral1905, &m3596_MI);
		il2cpp_codegen_raise_exception(L_0);
	}

IL_0014:
	{
		__this->f0 = p0;
		return;
	}
}
// Metadata Definition System.Resources.NeutralResourcesLanguageAttribute
extern Il2CppType t11_0_0_1;
FieldInfo t975_f0_FieldInfo = 
{
	"culture", &t11_0_0_1, &t975_TI, offsetof(t975, f0), &EmptyCustomAttributesCache};
static FieldInfo* t975_FIs[] =
{
	&t975_f0_FieldInfo,
	NULL
};
extern Il2CppType t11_0_0_0;
static ParameterInfo t975_m3844_ParameterInfos[] = 
{
	{"cultureName", 0, 134222143, &EmptyCustomAttributesCache, &t11_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m3844_MI = 
{
	".ctor", (methodPointerType)&m3844, &t975_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t975_m3844_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 3556, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t975_MIs[] =
{
	&m3844_MI,
	NULL
};
static MethodInfo* t975_VT[] =
{
	&m3527_MI,
	&m465_MI,
	&m3528_MI,
	&m467_MI,
};
static Il2CppInterfaceOffsetPair t975_IOs[] = 
{
	{ &t740_TI, 4},
};
void t975_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t767 * tmp;
		tmp = (t767 *)il2cpp_codegen_object_new (&t767_TI);
		m3562(tmp, 1, &m3562_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t576 * tmp;
		tmp = (t576 *)il2cpp_codegen_object_new (&t576_TI);
		m2699(tmp, true, &m2699_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t975__CustomAttributeCache = {
2,
NULL,
&t975_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t975_0_0_0;
extern Il2CppType t975_1_0_0;
struct t975;
extern CustomAttributesCache t975__CustomAttributeCache;
TypeInfo t975_TI = 
{
	&g_mscorlib_dll_Image, NULL, "NeutralResourcesLanguageAttribute", "System.Resources", t975_MIs, NULL, t975_FIs, NULL, &t628_TI, NULL, NULL, &t975_TI, NULL, t975_VT, &t975__CustomAttributeCache, &t975_TI, &t975_0_0_0, &t975_1_0_0, t975_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t975), 0, -1, 0, 0, -1, 1048833, 0, false, false, false, false, false, false, false, false, false, false, false, false, 1, 0, 1, 0, 0, 4, 0, 1};
#include "t968.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t968_TI;
#include "t968MD.h"

extern MethodInfo m10912_MI;


extern MethodInfo m3837_MI;
 void m3837 (t968 * __this, t11* p0, MethodInfo* method){
	{
		m3526(__this, &m3526_MI);
		t1023 * L_0 = (t1023 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1023_TI));
		m10912(L_0, p0, &m10912_MI);
		__this->f0 = L_0;
		return;
	}
}
// Metadata Definition System.Resources.SatelliteContractVersionAttribute
extern Il2CppType t1023_0_0_1;
FieldInfo t968_f0_FieldInfo = 
{
	"ver", &t1023_0_0_1, &t968_TI, offsetof(t968, f0), &EmptyCustomAttributesCache};
static FieldInfo* t968_FIs[] =
{
	&t968_f0_FieldInfo,
	NULL
};
extern Il2CppType t11_0_0_0;
static ParameterInfo t968_m3837_ParameterInfos[] = 
{
	{"version", 0, 134222144, &EmptyCustomAttributesCache, &t11_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m3837_MI = 
{
	".ctor", (methodPointerType)&m3837, &t968_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t968_m3837_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 3557, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t968_MIs[] =
{
	&m3837_MI,
	NULL
};
static MethodInfo* t968_VT[] =
{
	&m3527_MI,
	&m465_MI,
	&m3528_MI,
	&m467_MI,
};
static Il2CppInterfaceOffsetPair t968_IOs[] = 
{
	{ &t740_TI, 4},
};
void t968_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t767 * tmp;
		tmp = (t767 *)il2cpp_codegen_object_new (&t767_TI);
		m3562(tmp, 1, &m3562_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t576 * tmp;
		tmp = (t576 *)il2cpp_codegen_object_new (&t576_TI);
		m2699(tmp, true, &m2699_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t968__CustomAttributeCache = {
2,
NULL,
&t968_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t968_0_0_0;
extern Il2CppType t968_1_0_0;
struct t968;
extern CustomAttributesCache t968__CustomAttributeCache;
TypeInfo t968_TI = 
{
	&g_mscorlib_dll_Image, NULL, "SatelliteContractVersionAttribute", "System.Resources", t968_MIs, NULL, t968_FIs, NULL, &t628_TI, NULL, NULL, &t968_TI, NULL, t968_VT, &t968__CustomAttributeCache, &t968_TI, &t968_0_0_0, &t968_1_0_0, t968_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t968), 0, -1, 0, 0, -1, 1048833, 0, false, false, false, false, false, false, false, false, false, false, false, false, 1, 0, 1, 0, 0, 4, 0, 1};
#include "t1687.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1687_TI;
#include "t1687MD.h"



// Metadata Definition System.Runtime.CompilerServices.CompilationRelaxations
extern Il2CppType t110_0_0_1542;
FieldInfo t1687_f1_FieldInfo = 
{
	"value__", &t110_0_0_1542, &t1687_TI, offsetof(t1687, f1) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t1687_0_0_32854;
FieldInfo t1687_f2_FieldInfo = 
{
	"NoStringInterning", &t1687_0_0_32854, &t1687_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t1687_FIs[] =
{
	&t1687_f1_FieldInfo,
	&t1687_f2_FieldInfo,
	NULL
};
static const int32_t t1687_f2_DefaultValueData = 8;
static Il2CppFieldDefaultValueEntry t1687_f2_DefaultValue = 
{
	&t1687_f2_FieldInfo, { (char*)&t1687_f2_DefaultValueData, &t110_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t1687_FDVs[] = 
{
	&t1687_f2_DefaultValue,
	NULL
};
static MethodInfo* t1687_MIs[] =
{
	NULL
};
static MethodInfo* t1687_VT[] =
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
static Il2CppInterfaceOffsetPair t1687_IOs[] = 
{
	{ &t120_TI, 4},
	{ &t121_TI, 5},
	{ &t122_TI, 21},
};
void t1687_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t576 * tmp;
		tmp = (t576 *)il2cpp_codegen_object_new (&t576_TI);
		m2699(tmp, true, &m2699_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t446 * tmp;
		tmp = (t446 *)il2cpp_codegen_object_new (&t446_TI);
		m1932(tmp, &m1932_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1687__CustomAttributeCache = {
2,
NULL,
&t1687_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1687_0_0_0;
extern Il2CppType t1687_1_0_0;
extern CustomAttributesCache t1687__CustomAttributeCache;
TypeInfo t1687_TI = 
{
	&g_mscorlib_dll_Image, NULL, "CompilationRelaxations", "System.Runtime.CompilerServices", t1687_MIs, NULL, t1687_FIs, NULL, &t18_TI, NULL, NULL, &t110_TI, NULL, t1687_VT, &t1687__CustomAttributeCache, &t110_TI, &t1687_0_0_0, &t1687_1_0_0, t1687_IOs, NULL, NULL, t1687_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1687)+ sizeof (Il2CppObject), sizeof (int32_t), sizeof(int32_t), 0, 0, -1, 8449, 0, true, false, false, true, false, false, false, false, false, false, false, false, 0, 0, 2, 0, 0, 23, 0, 3};
#include "t971.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t971_TI;
#include "t971MD.h"



extern MethodInfo m3840_MI;
 void m3840 (t971 * __this, int32_t p0, MethodInfo* method){
	{
		m3526(__this, &m3526_MI);
		__this->f0 = p0;
		return;
	}
}
// Metadata Definition System.Runtime.CompilerServices.CompilationRelaxationsAttribute
extern Il2CppType t110_0_0_1;
FieldInfo t971_f0_FieldInfo = 
{
	"relax", &t110_0_0_1, &t971_TI, offsetof(t971, f0), &EmptyCustomAttributesCache};
static FieldInfo* t971_FIs[] =
{
	&t971_f0_FieldInfo,
	NULL
};
extern Il2CppType t1687_0_0_0;
static ParameterInfo t971_m3840_ParameterInfos[] = 
{
	{"relaxations", 0, 134222145, &EmptyCustomAttributesCache, &t1687_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m3840_MI = 
{
	".ctor", (methodPointerType)&m3840, &t971_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t971_m3840_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 3558, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t971_MIs[] =
{
	&m3840_MI,
	NULL
};
static MethodInfo* t971_VT[] =
{
	&m3527_MI,
	&m465_MI,
	&m3528_MI,
	&m467_MI,
};
static Il2CppInterfaceOffsetPair t971_IOs[] = 
{
	{ &t740_TI, 4},
};
void t971_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t767 * tmp;
		tmp = (t767 *)il2cpp_codegen_object_new (&t767_TI);
		m3562(tmp, 71, &m3562_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t576 * tmp;
		tmp = (t576 *)il2cpp_codegen_object_new (&t576_TI);
		m2699(tmp, true, &m2699_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t971__CustomAttributeCache = {
2,
NULL,
&t971_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t971_0_0_0;
extern Il2CppType t971_1_0_0;
struct t971;
extern CustomAttributesCache t971__CustomAttributeCache;
TypeInfo t971_TI = 
{
	&g_mscorlib_dll_Image, NULL, "CompilationRelaxationsAttribute", "System.Runtime.CompilerServices", t971_MIs, NULL, t971_FIs, NULL, &t628_TI, NULL, NULL, &t971_TI, NULL, t971_VT, &t971__CustomAttributeCache, &t971_TI, &t971_0_0_0, &t971_1_0_0, t971_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t971), 0, -1, 0, 0, -1, 1056769, 0, false, false, false, false, false, false, false, false, false, false, false, false, 1, 0, 1, 0, 0, 4, 0, 1};
#include "t1688.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1688_TI;
#include "t1688MD.h"

#include "t1689.h"


extern MethodInfo m8781_MI;
 void m8781 (t1688 * __this, int32_t p0, MethodInfo* method){
	{
		m3526(__this, &m3526_MI);
		__this->f0 = p0;
		return;
	}
}
// Metadata Definition System.Runtime.CompilerServices.DefaultDependencyAttribute
extern Il2CppType t1689_0_0_1;
FieldInfo t1688_f0_FieldInfo = 
{
	"hint", &t1689_0_0_1, &t1688_TI, offsetof(t1688, f0), &EmptyCustomAttributesCache};
static FieldInfo* t1688_FIs[] =
{
	&t1688_f0_FieldInfo,
	NULL
};
extern Il2CppType t1689_0_0_0;
extern Il2CppType t1689_0_0_0;
static ParameterInfo t1688_m8781_ParameterInfos[] = 
{
	{"loadHintArgument", 0, 134222146, &EmptyCustomAttributesCache, &t1689_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m8781_MI = 
{
	".ctor", (methodPointerType)&m8781, &t1688_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t1688_m8781_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 3559, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1688_MIs[] =
{
	&m8781_MI,
	NULL
};
static MethodInfo* t1688_VT[] =
{
	&m3527_MI,
	&m465_MI,
	&m3528_MI,
	&m467_MI,
};
static Il2CppInterfaceOffsetPair t1688_IOs[] = 
{
	{ &t740_TI, 4},
};
void t1688_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t767 * tmp;
		tmp = (t767 *)il2cpp_codegen_object_new (&t767_TI);
		m3562(tmp, 1, &m3562_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1688__CustomAttributeCache = {
1,
NULL,
&t1688_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1688_0_0_0;
extern Il2CppType t1688_1_0_0;
struct t1688;
extern CustomAttributesCache t1688__CustomAttributeCache;
TypeInfo t1688_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DefaultDependencyAttribute", "System.Runtime.CompilerServices", t1688_MIs, NULL, t1688_FIs, NULL, &t628_TI, NULL, NULL, &t1688_TI, NULL, t1688_VT, &t1688__CustomAttributeCache, &t1688_TI, &t1688_0_0_0, &t1688_1_0_0, t1688_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1688), 0, -1, 0, 0, -1, 1057025, 0, false, false, false, false, false, false, false, false, false, false, false, false, 1, 0, 1, 0, 0, 4, 0, 1};
#include "t1690.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1690_TI;
#include "t1690MD.h"



// Metadata Definition System.Runtime.CompilerServices.IsVolatile
static MethodInfo* t1690_MIs[] =
{
	NULL
};
static MethodInfo* t1690_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
};
void t1690_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t576 * tmp;
		tmp = (t576 *)il2cpp_codegen_object_new (&t576_TI);
		m2699(tmp, true, &m2699_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1690__CustomAttributeCache = {
1,
NULL,
&t1690_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1690_0_0_0;
extern Il2CppType t1690_1_0_0;
struct t1690;
extern CustomAttributesCache t1690__CustomAttributeCache;
TypeInfo t1690_TI = 
{
	&g_mscorlib_dll_Image, NULL, "IsVolatile", "System.Runtime.CompilerServices", t1690_MIs, NULL, NULL, NULL, &t5_TI, NULL, NULL, &t1690_TI, NULL, t1690_VT, &t1690__CustomAttributeCache, &t1690_TI, &t1690_0_0_0, &t1690_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1690), 0, -1, 0, 0, -1, 1048961, 0, false, false, false, false, false, false, false, false, false, false, false, false, 0, 0, 0, 0, 0, 4, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1689_TI;
#include "t1689MD.h"



// Metadata Definition System.Runtime.CompilerServices.LoadHint
extern Il2CppType t110_0_0_1542;
FieldInfo t1689_f1_FieldInfo = 
{
	"value__", &t110_0_0_1542, &t1689_TI, offsetof(t1689, f1) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t1689_0_0_32854;
FieldInfo t1689_f2_FieldInfo = 
{
	"Default", &t1689_0_0_32854, &t1689_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1689_0_0_32854;
FieldInfo t1689_f3_FieldInfo = 
{
	"Always", &t1689_0_0_32854, &t1689_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1689_0_0_32854;
FieldInfo t1689_f4_FieldInfo = 
{
	"Sometimes", &t1689_0_0_32854, &t1689_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t1689_FIs[] =
{
	&t1689_f1_FieldInfo,
	&t1689_f2_FieldInfo,
	&t1689_f3_FieldInfo,
	&t1689_f4_FieldInfo,
	NULL
};
static const int32_t t1689_f2_DefaultValueData = 0;
static Il2CppFieldDefaultValueEntry t1689_f2_DefaultValue = 
{
	&t1689_f2_FieldInfo, { (char*)&t1689_f2_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1689_f3_DefaultValueData = 1;
static Il2CppFieldDefaultValueEntry t1689_f3_DefaultValue = 
{
	&t1689_f3_FieldInfo, { (char*)&t1689_f3_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1689_f4_DefaultValueData = 2;
static Il2CppFieldDefaultValueEntry t1689_f4_DefaultValue = 
{
	&t1689_f4_FieldInfo, { (char*)&t1689_f4_DefaultValueData, &t110_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t1689_FDVs[] = 
{
	&t1689_f2_DefaultValue,
	&t1689_f3_DefaultValue,
	&t1689_f4_DefaultValue,
	NULL
};
static MethodInfo* t1689_MIs[] =
{
	NULL
};
static MethodInfo* t1689_VT[] =
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
static Il2CppInterfaceOffsetPair t1689_IOs[] = 
{
	{ &t120_TI, 4},
	{ &t121_TI, 5},
	{ &t122_TI, 21},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1689_1_0_0;
TypeInfo t1689_TI = 
{
	&g_mscorlib_dll_Image, NULL, "LoadHint", "System.Runtime.CompilerServices", t1689_MIs, NULL, t1689_FIs, NULL, &t18_TI, NULL, NULL, &t110_TI, NULL, t1689_VT, &EmptyCustomAttributesCache, &t110_TI, &t1689_0_0_0, &t1689_1_0_0, t1689_IOs, NULL, NULL, t1689_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1689)+ sizeof (Il2CppObject), sizeof (int32_t), sizeof(int32_t), 0, 0, -1, 8449, 0, true, false, false, true, false, false, false, false, false, false, false, false, 0, 0, 4, 0, 0, 23, 0, 3};
#include "t1691.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1691_TI;
#include "t1691MD.h"



extern MethodInfo m8782_MI;
 void m8782 (t1691 * __this, MethodInfo* method){
	{
		m3526(__this, &m3526_MI);
		return;
	}
}
// Metadata Definition System.Runtime.CompilerServices.StringFreezingAttribute
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m8782_MI = 
{
	".ctor", (methodPointerType)&m8782, &t1691_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 3560, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1691_MIs[] =
{
	&m8782_MI,
	NULL
};
static MethodInfo* t1691_VT[] =
{
	&m3527_MI,
	&m465_MI,
	&m3528_MI,
	&m467_MI,
};
static Il2CppInterfaceOffsetPair t1691_IOs[] = 
{
	{ &t740_TI, 4},
};
void t1691_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t767 * tmp;
		tmp = (t767 *)il2cpp_codegen_object_new (&t767_TI);
		m3562(tmp, 1, &m3562_MI);
		m3563(tmp, false, &m3563_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1691__CustomAttributeCache = {
1,
NULL,
&t1691_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1691_0_0_0;
extern Il2CppType t1691_1_0_0;
struct t1691;
extern CustomAttributesCache t1691__CustomAttributeCache;
TypeInfo t1691_TI = 
{
	&g_mscorlib_dll_Image, NULL, "StringFreezingAttribute", "System.Runtime.CompilerServices", t1691_MIs, NULL, NULL, NULL, &t628_TI, NULL, NULL, &t1691_TI, NULL, t1691_VT, &t1691__CustomAttributeCache, &t1691_TI, &t1691_0_0_0, &t1691_1_0_0, t1691_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1691), 0, -1, 0, 0, -1, 1057025, 0, false, false, false, false, false, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 4, 0, 1};
#include "t1692.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1692_TI;
#include "t1692MD.h"



// Metadata Definition System.Runtime.ConstrainedExecution.Cer
extern Il2CppType t110_0_0_1542;
FieldInfo t1692_f1_FieldInfo = 
{
	"value__", &t110_0_0_1542, &t1692_TI, offsetof(t1692, f1) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t1692_0_0_32854;
FieldInfo t1692_f2_FieldInfo = 
{
	"None", &t1692_0_0_32854, &t1692_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1692_0_0_32854;
FieldInfo t1692_f3_FieldInfo = 
{
	"MayFail", &t1692_0_0_32854, &t1692_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1692_0_0_32854;
FieldInfo t1692_f4_FieldInfo = 
{
	"Success", &t1692_0_0_32854, &t1692_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t1692_FIs[] =
{
	&t1692_f1_FieldInfo,
	&t1692_f2_FieldInfo,
	&t1692_f3_FieldInfo,
	&t1692_f4_FieldInfo,
	NULL
};
static const int32_t t1692_f2_DefaultValueData = 0;
static Il2CppFieldDefaultValueEntry t1692_f2_DefaultValue = 
{
	&t1692_f2_FieldInfo, { (char*)&t1692_f2_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1692_f3_DefaultValueData = 1;
static Il2CppFieldDefaultValueEntry t1692_f3_DefaultValue = 
{
	&t1692_f3_FieldInfo, { (char*)&t1692_f3_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1692_f4_DefaultValueData = 2;
static Il2CppFieldDefaultValueEntry t1692_f4_DefaultValue = 
{
	&t1692_f4_FieldInfo, { (char*)&t1692_f4_DefaultValueData, &t110_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t1692_FDVs[] = 
{
	&t1692_f2_DefaultValue,
	&t1692_f3_DefaultValue,
	&t1692_f4_DefaultValue,
	NULL
};
static MethodInfo* t1692_MIs[] =
{
	NULL
};
static MethodInfo* t1692_VT[] =
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
static Il2CppInterfaceOffsetPair t1692_IOs[] = 
{
	{ &t120_TI, 4},
	{ &t121_TI, 5},
	{ &t122_TI, 21},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1692_0_0_0;
extern Il2CppType t1692_1_0_0;
TypeInfo t1692_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Cer", "System.Runtime.ConstrainedExecution", t1692_MIs, NULL, t1692_FIs, NULL, &t18_TI, NULL, NULL, &t110_TI, NULL, t1692_VT, &EmptyCustomAttributesCache, &t110_TI, &t1692_0_0_0, &t1692_1_0_0, t1692_IOs, NULL, NULL, t1692_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1692)+ sizeof (Il2CppObject), sizeof (int32_t), sizeof(int32_t), 0, 0, -1, 8449, 0, true, false, false, true, false, false, false, false, false, false, false, false, 0, 0, 4, 0, 0, 23, 0, 3};
#include "t1693.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1693_TI;
#include "t1693MD.h"



// Metadata Definition System.Runtime.ConstrainedExecution.Consistency
extern Il2CppType t110_0_0_1542;
FieldInfo t1693_f1_FieldInfo = 
{
	"value__", &t110_0_0_1542, &t1693_TI, offsetof(t1693, f1) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t1693_0_0_32854;
FieldInfo t1693_f2_FieldInfo = 
{
	"MayCorruptAppDomain", &t1693_0_0_32854, &t1693_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1693_0_0_32854;
FieldInfo t1693_f3_FieldInfo = 
{
	"MayCorruptInstance", &t1693_0_0_32854, &t1693_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1693_0_0_32854;
FieldInfo t1693_f4_FieldInfo = 
{
	"MayCorruptProcess", &t1693_0_0_32854, &t1693_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1693_0_0_32854;
FieldInfo t1693_f5_FieldInfo = 
{
	"WillNotCorruptState", &t1693_0_0_32854, &t1693_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t1693_FIs[] =
{
	&t1693_f1_FieldInfo,
	&t1693_f2_FieldInfo,
	&t1693_f3_FieldInfo,
	&t1693_f4_FieldInfo,
	&t1693_f5_FieldInfo,
	NULL
};
static const int32_t t1693_f2_DefaultValueData = 1;
static Il2CppFieldDefaultValueEntry t1693_f2_DefaultValue = 
{
	&t1693_f2_FieldInfo, { (char*)&t1693_f2_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1693_f3_DefaultValueData = 2;
static Il2CppFieldDefaultValueEntry t1693_f3_DefaultValue = 
{
	&t1693_f3_FieldInfo, { (char*)&t1693_f3_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1693_f4_DefaultValueData = 0;
static Il2CppFieldDefaultValueEntry t1693_f4_DefaultValue = 
{
	&t1693_f4_FieldInfo, { (char*)&t1693_f4_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1693_f5_DefaultValueData = 3;
static Il2CppFieldDefaultValueEntry t1693_f5_DefaultValue = 
{
	&t1693_f5_FieldInfo, { (char*)&t1693_f5_DefaultValueData, &t110_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t1693_FDVs[] = 
{
	&t1693_f2_DefaultValue,
	&t1693_f3_DefaultValue,
	&t1693_f4_DefaultValue,
	&t1693_f5_DefaultValue,
	NULL
};
static MethodInfo* t1693_MIs[] =
{
	NULL
};
static MethodInfo* t1693_VT[] =
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
static Il2CppInterfaceOffsetPair t1693_IOs[] = 
{
	{ &t120_TI, 4},
	{ &t121_TI, 5},
	{ &t122_TI, 21},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1693_0_0_0;
extern Il2CppType t1693_1_0_0;
TypeInfo t1693_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Consistency", "System.Runtime.ConstrainedExecution", t1693_MIs, NULL, t1693_FIs, NULL, &t18_TI, NULL, NULL, &t110_TI, NULL, t1693_VT, &EmptyCustomAttributesCache, &t110_TI, &t1693_0_0_0, &t1693_1_0_0, t1693_IOs, NULL, NULL, t1693_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1693)+ sizeof (Il2CppObject), sizeof (int32_t), sizeof(int32_t), 0, 0, -1, 8449, 0, true, false, false, true, false, false, false, false, false, false, false, false, 0, 0, 5, 0, 0, 23, 0, 3};
#include "t1694.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1694_TI;
#include "t1694MD.h"



extern MethodInfo m8783_MI;
 void m8783 (t1694 * __this, MethodInfo* method){
	{
		m460(__this, &m460_MI);
		return;
	}
}
extern MethodInfo m8784_MI;
 void m8784 (t1694 * __this, MethodInfo* method){
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
// Metadata Definition System.Runtime.ConstrainedExecution.CriticalFinalizerObject
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t1694__CustomAttributeCache_m8783;
MethodInfo m8783_MI = 
{
	".ctor", (methodPointerType)&m8783, &t1694_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &t1694__CustomAttributeCache_m8783, 6276, 0, 255, 0, false, false, 3561, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t1694__CustomAttributeCache_m8784;
MethodInfo m8784_MI = 
{
	"Finalize", (methodPointerType)&m8784, &t1694_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &t1694__CustomAttributeCache_m8784, 196, 0, 1, 0, false, false, 3562, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1694_MIs[] =
{
	&m8783_MI,
	&m8784_MI,
	NULL
};
static MethodInfo* t1694_VT[] =
{
	&m464_MI,
	&m8784_MI,
	&m466_MI,
	&m467_MI,
};
void t1694_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t576 * tmp;
		tmp = (t576 *)il2cpp_codegen_object_new (&t576_TI);
		m2699(tmp, true, &m2699_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t1695_TI;
#include "t1695.h"
#include "t1695MD.h"
extern MethodInfo m8785_MI;
void t1694_CustomAttributesCacheGenerator_m8783(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t1695 * tmp;
		tmp = (t1695 *)il2cpp_codegen_object_new (&t1695_TI);
		m8785(tmp, 3, 1, &m8785_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t1694_CustomAttributesCacheGenerator_m8784(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t1695 * tmp;
		tmp = (t1695 *)il2cpp_codegen_object_new (&t1695_TI);
		m8785(tmp, 3, 2, &m8785_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1694__CustomAttributeCache = {
1,
NULL,
&t1694_CustomAttributesCacheGenerator
};
CustomAttributesCache t1694__CustomAttributeCache_m8783 = {
1,
NULL,
&t1694_CustomAttributesCacheGenerator_m8783
};
CustomAttributesCache t1694__CustomAttributeCache_m8784 = {
1,
NULL,
&t1694_CustomAttributesCacheGenerator_m8784
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1694_0_0_0;
extern Il2CppType t1694_1_0_0;
struct t1694;
extern CustomAttributesCache t1694__CustomAttributeCache;
extern CustomAttributesCache t1694__CustomAttributeCache_m8783;
extern CustomAttributesCache t1694__CustomAttributeCache_m8784;
TypeInfo t1694_TI = 
{
	&g_mscorlib_dll_Image, NULL, "CriticalFinalizerObject", "System.Runtime.ConstrainedExecution", t1694_MIs, NULL, NULL, NULL, &t5_TI, NULL, NULL, &t1694_TI, NULL, t1694_VT, &t1694__CustomAttributeCache, &t1694_TI, &t1694_0_0_0, &t1694_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1694), 0, -1, 0, 0, -1, 1048705, 0, false, false, false, false, false, false, false, false, true, false, false, false, 2, 0, 0, 0, 0, 4, 0, 0};
#ifndef _MSC_VER
#else
#endif



 void m8785 (t1695 * __this, int32_t p0, int32_t p1, MethodInfo* method){
	{
		m3526(__this, &m3526_MI);
		__this->f0 = p0;
		__this->f1 = p1;
		return;
	}
}
// Metadata Definition System.Runtime.ConstrainedExecution.ReliabilityContractAttribute
extern Il2CppType t1693_0_0_1;
FieldInfo t1695_f0_FieldInfo = 
{
	"consistency", &t1693_0_0_1, &t1695_TI, offsetof(t1695, f0), &EmptyCustomAttributesCache};
extern Il2CppType t1692_0_0_1;
FieldInfo t1695_f1_FieldInfo = 
{
	"cer", &t1692_0_0_1, &t1695_TI, offsetof(t1695, f1), &EmptyCustomAttributesCache};
static FieldInfo* t1695_FIs[] =
{
	&t1695_f0_FieldInfo,
	&t1695_f1_FieldInfo,
	NULL
};
extern Il2CppType t1693_0_0_0;
extern Il2CppType t1692_0_0_0;
static ParameterInfo t1695_m8785_ParameterInfos[] = 
{
	{"consistencyGuarantee", 0, 134222147, &EmptyCustomAttributesCache, &t1693_0_0_0},
	{"cer", 1, 134222148, &EmptyCustomAttributesCache, &t1692_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m8785_MI = 
{
	".ctor", (methodPointerType)&m8785, &t1695_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110, t1695_m8785_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, false, 3563, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1695_MIs[] =
{
	&m8785_MI,
	NULL
};
static MethodInfo* t1695_VT[] =
{
	&m3527_MI,
	&m465_MI,
	&m3528_MI,
	&m467_MI,
};
static Il2CppInterfaceOffsetPair t1695_IOs[] = 
{
	{ &t740_TI, 4},
};
void t1695_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t767 * tmp;
		tmp = (t767 *)il2cpp_codegen_object_new (&t767_TI);
		m3562(tmp, 1133, &m3562_MI);
		m3563(tmp, false, &m3563_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1695__CustomAttributeCache = {
1,
NULL,
&t1695_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1695_0_0_0;
extern Il2CppType t1695_1_0_0;
struct t1695;
extern CustomAttributesCache t1695__CustomAttributeCache;
TypeInfo t1695_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ReliabilityContractAttribute", "System.Runtime.ConstrainedExecution", t1695_MIs, NULL, t1695_FIs, NULL, &t628_TI, NULL, NULL, &t1695_TI, NULL, t1695_VT, &t1695__CustomAttributeCache, &t1695_TI, &t1695_0_0_0, &t1695_1_0_0, t1695_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1695), 0, -1, 0, 0, -1, 1048833, 0, false, false, false, false, false, false, false, false, false, false, false, false, 1, 0, 2, 0, 0, 4, 0, 1};
#include "t1696.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1696_TI;
#include "t1696MD.h"



// Metadata Definition System.Runtime.Hosting.ActivationArguments
static MethodInfo* t1696_MIs[] =
{
	NULL
};
static MethodInfo* t1696_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
};
void t1696_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t576 * tmp;
		tmp = (t576 *)il2cpp_codegen_object_new (&t576_TI);
		m2699(tmp, true, &m2699_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1696__CustomAttributeCache = {
1,
NULL,
&t1696_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1696_0_0_0;
extern Il2CppType t1696_1_0_0;
struct t1696;
extern CustomAttributesCache t1696__CustomAttributeCache;
TypeInfo t1696_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ActivationArguments", "System.Runtime.Hosting", t1696_MIs, NULL, NULL, NULL, &t5_TI, NULL, NULL, &t1696_TI, NULL, t1696_VT, &t1696__CustomAttributeCache, &t1696_TI, &t1696_0_0_0, &t1696_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1696), 0, -1, 0, 0, -1, 1057025, 0, false, false, false, false, false, false, false, false, false, false, false, false, 0, 0, 0, 0, 0, 4, 0, 0};
#include "t1414.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1414_TI;
#include "t1414MD.h"



// Metadata Definition System.Runtime.InteropServices.CallingConvention
extern Il2CppType t110_0_0_1542;
FieldInfo t1414_f1_FieldInfo = 
{
	"value__", &t110_0_0_1542, &t1414_TI, offsetof(t1414, f1) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t1414_0_0_32854;
FieldInfo t1414_f2_FieldInfo = 
{
	"Winapi", &t1414_0_0_32854, &t1414_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1414_0_0_32854;
FieldInfo t1414_f3_FieldInfo = 
{
	"Cdecl", &t1414_0_0_32854, &t1414_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1414_0_0_32854;
FieldInfo t1414_f4_FieldInfo = 
{
	"StdCall", &t1414_0_0_32854, &t1414_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1414_0_0_32854;
FieldInfo t1414_f5_FieldInfo = 
{
	"ThisCall", &t1414_0_0_32854, &t1414_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1414_0_0_32854;
FieldInfo t1414_f6_FieldInfo = 
{
	"FastCall", &t1414_0_0_32854, &t1414_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t1414_FIs[] =
{
	&t1414_f1_FieldInfo,
	&t1414_f2_FieldInfo,
	&t1414_f3_FieldInfo,
	&t1414_f4_FieldInfo,
	&t1414_f5_FieldInfo,
	&t1414_f6_FieldInfo,
	NULL
};
static const int32_t t1414_f2_DefaultValueData = 1;
static Il2CppFieldDefaultValueEntry t1414_f2_DefaultValue = 
{
	&t1414_f2_FieldInfo, { (char*)&t1414_f2_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1414_f3_DefaultValueData = 2;
static Il2CppFieldDefaultValueEntry t1414_f3_DefaultValue = 
{
	&t1414_f3_FieldInfo, { (char*)&t1414_f3_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1414_f4_DefaultValueData = 3;
static Il2CppFieldDefaultValueEntry t1414_f4_DefaultValue = 
{
	&t1414_f4_FieldInfo, { (char*)&t1414_f4_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1414_f5_DefaultValueData = 4;
static Il2CppFieldDefaultValueEntry t1414_f5_DefaultValue = 
{
	&t1414_f5_FieldInfo, { (char*)&t1414_f5_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1414_f6_DefaultValueData = 5;
static Il2CppFieldDefaultValueEntry t1414_f6_DefaultValue = 
{
	&t1414_f6_FieldInfo, { (char*)&t1414_f6_DefaultValueData, &t110_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t1414_FDVs[] = 
{
	&t1414_f2_DefaultValue,
	&t1414_f3_DefaultValue,
	&t1414_f4_DefaultValue,
	&t1414_f5_DefaultValue,
	&t1414_f6_DefaultValue,
	NULL
};
static MethodInfo* t1414_MIs[] =
{
	NULL
};
static MethodInfo* t1414_VT[] =
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
static Il2CppInterfaceOffsetPair t1414_IOs[] = 
{
	{ &t120_TI, 4},
	{ &t121_TI, 5},
	{ &t122_TI, 21},
};
void t1414_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t576 * tmp;
		tmp = (t576 *)il2cpp_codegen_object_new (&t576_TI);
		m2699(tmp, true, &m2699_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1414__CustomAttributeCache = {
1,
NULL,
&t1414_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1414_0_0_0;
extern Il2CppType t1414_1_0_0;
extern CustomAttributesCache t1414__CustomAttributeCache;
TypeInfo t1414_TI = 
{
	&g_mscorlib_dll_Image, NULL, "CallingConvention", "System.Runtime.InteropServices", t1414_MIs, NULL, t1414_FIs, NULL, &t18_TI, NULL, NULL, &t110_TI, NULL, t1414_VT, &t1414__CustomAttributeCache, &t110_TI, &t1414_0_0_0, &t1414_1_0_0, t1414_IOs, NULL, NULL, t1414_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1414)+ sizeof (Il2CppObject), sizeof (int32_t), sizeof(int32_t), 0, 0, -1, 8449, 0, true, false, false, true, false, false, false, false, false, false, false, false, 0, 0, 6, 0, 0, 23, 0, 3};
#include "t1415.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1415_TI;
#include "t1415MD.h"



// Metadata Definition System.Runtime.InteropServices.CharSet
extern Il2CppType t110_0_0_1542;
FieldInfo t1415_f1_FieldInfo = 
{
	"value__", &t110_0_0_1542, &t1415_TI, offsetof(t1415, f1) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t1415_0_0_32854;
FieldInfo t1415_f2_FieldInfo = 
{
	"None", &t1415_0_0_32854, &t1415_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1415_0_0_32854;
FieldInfo t1415_f3_FieldInfo = 
{
	"Ansi", &t1415_0_0_32854, &t1415_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1415_0_0_32854;
FieldInfo t1415_f4_FieldInfo = 
{
	"Unicode", &t1415_0_0_32854, &t1415_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1415_0_0_32854;
FieldInfo t1415_f5_FieldInfo = 
{
	"Auto", &t1415_0_0_32854, &t1415_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t1415_FIs[] =
{
	&t1415_f1_FieldInfo,
	&t1415_f2_FieldInfo,
	&t1415_f3_FieldInfo,
	&t1415_f4_FieldInfo,
	&t1415_f5_FieldInfo,
	NULL
};
static const int32_t t1415_f2_DefaultValueData = 1;
static Il2CppFieldDefaultValueEntry t1415_f2_DefaultValue = 
{
	&t1415_f2_FieldInfo, { (char*)&t1415_f2_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1415_f3_DefaultValueData = 2;
static Il2CppFieldDefaultValueEntry t1415_f3_DefaultValue = 
{
	&t1415_f3_FieldInfo, { (char*)&t1415_f3_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1415_f4_DefaultValueData = 3;
static Il2CppFieldDefaultValueEntry t1415_f4_DefaultValue = 
{
	&t1415_f4_FieldInfo, { (char*)&t1415_f4_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1415_f5_DefaultValueData = 4;
static Il2CppFieldDefaultValueEntry t1415_f5_DefaultValue = 
{
	&t1415_f5_FieldInfo, { (char*)&t1415_f5_DefaultValueData, &t110_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t1415_FDVs[] = 
{
	&t1415_f2_DefaultValue,
	&t1415_f3_DefaultValue,
	&t1415_f4_DefaultValue,
	&t1415_f5_DefaultValue,
	NULL
};
static MethodInfo* t1415_MIs[] =
{
	NULL
};
static MethodInfo* t1415_VT[] =
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
static Il2CppInterfaceOffsetPair t1415_IOs[] = 
{
	{ &t120_TI, 4},
	{ &t121_TI, 5},
	{ &t122_TI, 21},
};
void t1415_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t576 * tmp;
		tmp = (t576 *)il2cpp_codegen_object_new (&t576_TI);
		m2699(tmp, true, &m2699_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1415__CustomAttributeCache = {
1,
NULL,
&t1415_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1415_0_0_0;
extern Il2CppType t1415_1_0_0;
extern CustomAttributesCache t1415__CustomAttributeCache;
TypeInfo t1415_TI = 
{
	&g_mscorlib_dll_Image, NULL, "CharSet", "System.Runtime.InteropServices", t1415_MIs, NULL, t1415_FIs, NULL, &t18_TI, NULL, NULL, &t110_TI, NULL, t1415_VT, &t1415__CustomAttributeCache, &t110_TI, &t1415_0_0_0, &t1415_1_0_0, t1415_IOs, NULL, NULL, t1415_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1415)+ sizeof (Il2CppObject), sizeof (int32_t), sizeof(int32_t), 0, 0, -1, 8449, 0, true, false, false, true, false, false, false, false, false, false, false, false, 0, 0, 5, 0, 0, 23, 0, 3};
#ifndef _MSC_VER
#else
#endif

#include "t1698.h"


 void m8786 (t1697 * __this, int32_t p0, MethodInfo* method){
	{
		m3526(__this, &m3526_MI);
		__this->f0 = p0;
		return;
	}
}
// Metadata Definition System.Runtime.InteropServices.ClassInterfaceAttribute
extern Il2CppType t1698_0_0_1;
FieldInfo t1697_f0_FieldInfo = 
{
	"ciType", &t1698_0_0_1, &t1697_TI, offsetof(t1697, f0), &EmptyCustomAttributesCache};
static FieldInfo* t1697_FIs[] =
{
	&t1697_f0_FieldInfo,
	NULL
};
extern Il2CppType t1698_0_0_0;
extern Il2CppType t1698_0_0_0;
static ParameterInfo t1697_m8786_ParameterInfos[] = 
{
	{"classInterfaceType", 0, 134222149, &EmptyCustomAttributesCache, &t1698_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m8786_MI = 
{
	".ctor", (methodPointerType)&m8786, &t1697_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t1697_m8786_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 3564, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1697_MIs[] =
{
	&m8786_MI,
	NULL
};
static MethodInfo* t1697_VT[] =
{
	&m3527_MI,
	&m465_MI,
	&m3528_MI,
	&m467_MI,
};
static Il2CppInterfaceOffsetPair t1697_IOs[] = 
{
	{ &t740_TI, 4},
};
void t1697_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t767 * tmp;
		tmp = (t767 *)il2cpp_codegen_object_new (&t767_TI);
		m3562(tmp, 5, &m3562_MI);
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
CustomAttributesCache t1697__CustomAttributeCache = {
2,
NULL,
&t1697_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1697_0_0_0;
extern Il2CppType t1697_1_0_0;
struct t1697;
extern CustomAttributesCache t1697__CustomAttributeCache;
TypeInfo t1697_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ClassInterfaceAttribute", "System.Runtime.InteropServices", t1697_MIs, NULL, t1697_FIs, NULL, &t628_TI, NULL, NULL, &t1697_TI, NULL, t1697_VT, &t1697__CustomAttributeCache, &t1697_TI, &t1697_0_0_0, &t1697_1_0_0, t1697_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1697), 0, -1, 0, 0, -1, 1048833, 0, false, false, false, false, false, false, false, false, false, false, false, false, 1, 0, 1, 0, 0, 4, 0, 1};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1698_TI;
#include "t1698MD.h"



// Metadata Definition System.Runtime.InteropServices.ClassInterfaceType
extern Il2CppType t110_0_0_1542;
FieldInfo t1698_f1_FieldInfo = 
{
	"value__", &t110_0_0_1542, &t1698_TI, offsetof(t1698, f1) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t1698_0_0_32854;
FieldInfo t1698_f2_FieldInfo = 
{
	"None", &t1698_0_0_32854, &t1698_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1698_0_0_32854;
FieldInfo t1698_f3_FieldInfo = 
{
	"AutoDispatch", &t1698_0_0_32854, &t1698_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1698_0_0_32854;
FieldInfo t1698_f4_FieldInfo = 
{
	"AutoDual", &t1698_0_0_32854, &t1698_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t1698_FIs[] =
{
	&t1698_f1_FieldInfo,
	&t1698_f2_FieldInfo,
	&t1698_f3_FieldInfo,
	&t1698_f4_FieldInfo,
	NULL
};
static const int32_t t1698_f2_DefaultValueData = 0;
static Il2CppFieldDefaultValueEntry t1698_f2_DefaultValue = 
{
	&t1698_f2_FieldInfo, { (char*)&t1698_f2_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1698_f3_DefaultValueData = 1;
static Il2CppFieldDefaultValueEntry t1698_f3_DefaultValue = 
{
	&t1698_f3_FieldInfo, { (char*)&t1698_f3_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1698_f4_DefaultValueData = 2;
static Il2CppFieldDefaultValueEntry t1698_f4_DefaultValue = 
{
	&t1698_f4_FieldInfo, { (char*)&t1698_f4_DefaultValueData, &t110_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t1698_FDVs[] = 
{
	&t1698_f2_DefaultValue,
	&t1698_f3_DefaultValue,
	&t1698_f4_DefaultValue,
	NULL
};
static MethodInfo* t1698_MIs[] =
{
	NULL
};
static MethodInfo* t1698_VT[] =
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
static Il2CppInterfaceOffsetPair t1698_IOs[] = 
{
	{ &t120_TI, 4},
	{ &t121_TI, 5},
	{ &t122_TI, 21},
};
void t1698_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t576 * tmp;
		tmp = (t576 *)il2cpp_codegen_object_new (&t576_TI);
		m2699(tmp, true, &m2699_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1698__CustomAttributeCache = {
1,
NULL,
&t1698_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1698_1_0_0;
extern CustomAttributesCache t1698__CustomAttributeCache;
TypeInfo t1698_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ClassInterfaceType", "System.Runtime.InteropServices", t1698_MIs, NULL, t1698_FIs, NULL, &t18_TI, NULL, NULL, &t110_TI, NULL, t1698_VT, &t1698__CustomAttributeCache, &t110_TI, &t1698_0_0_0, &t1698_1_0_0, t1698_IOs, NULL, NULL, t1698_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1698)+ sizeof (Il2CppObject), sizeof (int32_t), sizeof(int32_t), 0, 0, -1, 8449, 0, true, false, false, true, false, false, false, false, false, false, false, false, 0, 0, 4, 0, 0, 23, 0, 3};
#ifndef _MSC_VER
#else
#endif



 void m8787 (t1699 * __this, t114 * p0, MethodInfo* method){
	{
		m3526(__this, &m3526_MI);
		__this->f0 = p0;
		return;
	}
}
// Metadata Definition System.Runtime.InteropServices.ComDefaultInterfaceAttribute
extern Il2CppType t114_0_0_1;
FieldInfo t1699_f0_FieldInfo = 
{
	"_type", &t114_0_0_1, &t1699_TI, offsetof(t1699, f0), &EmptyCustomAttributesCache};
static FieldInfo* t1699_FIs[] =
{
	&t1699_f0_FieldInfo,
	NULL
};
extern Il2CppType t114_0_0_0;
static ParameterInfo t1699_m8787_ParameterInfos[] = 
{
	{"defaultInterface", 0, 134222150, &EmptyCustomAttributesCache, &t114_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8787_MI = 
{
	".ctor", (methodPointerType)&m8787, &t1699_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t1699_m8787_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 3565, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1699_MIs[] =
{
	&m8787_MI,
	NULL
};
static MethodInfo* t1699_VT[] =
{
	&m3527_MI,
	&m465_MI,
	&m3528_MI,
	&m467_MI,
};
static Il2CppInterfaceOffsetPair t1699_IOs[] = 
{
	{ &t740_TI, 4},
};
void t1699_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
		m3563(tmp, false, &m3563_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1699__CustomAttributeCache = {
2,
NULL,
&t1699_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1699_0_0_0;
extern Il2CppType t1699_1_0_0;
struct t1699;
extern CustomAttributesCache t1699__CustomAttributeCache;
TypeInfo t1699_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ComDefaultInterfaceAttribute", "System.Runtime.InteropServices", t1699_MIs, NULL, t1699_FIs, NULL, &t628_TI, NULL, NULL, &t1699_TI, NULL, t1699_VT, &t1699__CustomAttributeCache, &t1699_TI, &t1699_0_0_0, &t1699_1_0_0, t1699_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1699), 0, -1, 0, 0, -1, 1048833, 0, false, false, false, false, false, false, false, false, false, false, false, false, 1, 0, 1, 0, 0, 4, 0, 1};
#include "t1700.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1700_TI;
#include "t1700MD.h"



// Metadata Definition System.Runtime.InteropServices.ComInterfaceType
extern Il2CppType t110_0_0_1542;
FieldInfo t1700_f1_FieldInfo = 
{
	"value__", &t110_0_0_1542, &t1700_TI, offsetof(t1700, f1) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t1700_0_0_32854;
FieldInfo t1700_f2_FieldInfo = 
{
	"InterfaceIsDual", &t1700_0_0_32854, &t1700_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1700_0_0_32854;
FieldInfo t1700_f3_FieldInfo = 
{
	"InterfaceIsIUnknown", &t1700_0_0_32854, &t1700_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1700_0_0_32854;
FieldInfo t1700_f4_FieldInfo = 
{
	"InterfaceIsIDispatch", &t1700_0_0_32854, &t1700_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t1700_FIs[] =
{
	&t1700_f1_FieldInfo,
	&t1700_f2_FieldInfo,
	&t1700_f3_FieldInfo,
	&t1700_f4_FieldInfo,
	NULL
};
static const int32_t t1700_f2_DefaultValueData = 0;
static Il2CppFieldDefaultValueEntry t1700_f2_DefaultValue = 
{
	&t1700_f2_FieldInfo, { (char*)&t1700_f2_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1700_f3_DefaultValueData = 1;
static Il2CppFieldDefaultValueEntry t1700_f3_DefaultValue = 
{
	&t1700_f3_FieldInfo, { (char*)&t1700_f3_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1700_f4_DefaultValueData = 2;
static Il2CppFieldDefaultValueEntry t1700_f4_DefaultValue = 
{
	&t1700_f4_FieldInfo, { (char*)&t1700_f4_DefaultValueData, &t110_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t1700_FDVs[] = 
{
	&t1700_f2_DefaultValue,
	&t1700_f3_DefaultValue,
	&t1700_f4_DefaultValue,
	NULL
};
static MethodInfo* t1700_MIs[] =
{
	NULL
};
static MethodInfo* t1700_VT[] =
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
static Il2CppInterfaceOffsetPair t1700_IOs[] = 
{
	{ &t120_TI, 4},
	{ &t121_TI, 5},
	{ &t122_TI, 21},
};
void t1700_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t576 * tmp;
		tmp = (t576 *)il2cpp_codegen_object_new (&t576_TI);
		m2699(tmp, true, &m2699_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1700__CustomAttributeCache = {
1,
NULL,
&t1700_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1700_0_0_0;
extern Il2CppType t1700_1_0_0;
extern CustomAttributesCache t1700__CustomAttributeCache;
TypeInfo t1700_TI = 
{
	&g_mscorlib_dll_Image, NULL, "ComInterfaceType", "System.Runtime.InteropServices", t1700_MIs, NULL, t1700_FIs, NULL, &t18_TI, NULL, NULL, &t110_TI, NULL, t1700_VT, &t1700__CustomAttributeCache, &t110_TI, &t1700_0_0_0, &t1700_1_0_0, t1700_IOs, NULL, NULL, t1700_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1700)+ sizeof (Il2CppObject), sizeof (int32_t), sizeof(int32_t), 0, 0, -1, 8449, 0, true, false, false, true, false, false, false, false, false, false, false, false, 0, 0, 4, 0, 0, 23, 0, 3};
#include "t1701.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1701_TI;
#include "t1701MD.h"



extern MethodInfo m8788_MI;
 void m8788 (t1701 * __this, int32_t p0, MethodInfo* method){
	{
		m3526(__this, &m3526_MI);
		__this->f0 = p0;
		return;
	}
}
// Metadata Definition System.Runtime.InteropServices.DispIdAttribute
extern Il2CppType t110_0_0_1;
FieldInfo t1701_f0_FieldInfo = 
{
	"id", &t110_0_0_1, &t1701_TI, offsetof(t1701, f0), &EmptyCustomAttributesCache};
static FieldInfo* t1701_FIs[] =
{
	&t1701_f0_FieldInfo,
	NULL
};
extern Il2CppType t110_0_0_0;
static ParameterInfo t1701_m8788_ParameterInfos[] = 
{
	{"dispId", 0, 134222151, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m8788_MI = 
{
	".ctor", (methodPointerType)&m8788, &t1701_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t1701_m8788_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 3566, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1701_MIs[] =
{
	&m8788_MI,
	NULL
};
static MethodInfo* t1701_VT[] =
{
	&m3527_MI,
	&m465_MI,
	&m3528_MI,
	&m467_MI,
};
static Il2CppInterfaceOffsetPair t1701_IOs[] = 
{
	{ &t740_TI, 4},
};
void t1701_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
		m3562(tmp, 960, &m3562_MI);
		m3563(tmp, false, &m3563_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1701__CustomAttributeCache = {
2,
NULL,
&t1701_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1701_0_0_0;
extern Il2CppType t1701_1_0_0;
struct t1701;
extern CustomAttributesCache t1701__CustomAttributeCache;
TypeInfo t1701_TI = 
{
	&g_mscorlib_dll_Image, NULL, "DispIdAttribute", "System.Runtime.InteropServices", t1701_MIs, NULL, t1701_FIs, NULL, &t628_TI, NULL, NULL, &t1701_TI, NULL, t1701_VT, &t1701__CustomAttributeCache, &t1701_TI, &t1701_0_0_0, &t1701_1_0_0, t1701_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1701), 0, -1, 0, 0, -1, 1048833, 0, false, false, false, false, false, false, false, false, false, false, false, false, 1, 0, 1, 0, 0, 4, 0, 1};
#include "t1702.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1702_TI;
#include "t1702MD.h"

#include "t1703.h"
#include "t110MD.h"
extern MethodInfo m8790_MI;
extern MethodInfo m8794_MI;
extern MethodInfo m8795_MI;
extern MethodInfo m8789_MI;
extern MethodInfo m8796_MI;
extern MethodInfo m3486_MI;


 void m8789 (t1702 * __this, t5 * p0, int32_t p1, MethodInfo* method){
	{
		if ((((int32_t)p1) < ((int32_t)0)))
		{
			goto IL_0008;
		}
	}
	{
		if ((((int32_t)p1) <= ((int32_t)3)))
		{
			goto IL_000d;
		}
	}

IL_0008:
	{
		p1 = 2;
	}

IL_000d:
	{
		int32_t L_0 = m8795(NULL, p0, 0, p1, &m8795_MI);
		__this->f0 = L_0;
		return;
	}
}
 bool m8790 (t1702 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->f0);
		return ((((int32_t)((((int32_t)L_0) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
extern MethodInfo m8791_MI;
 t5 * m8791 (t1702 * __this, MethodInfo* method){
	{
		bool L_0 = m8790(__this, &m8790_MI);
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		t11* L_1 = m6878(NULL, (t11*) &_stringLiteral1906, &m6878_MI);
		t133 * L_2 = (t133 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t133_TI));
		m4759(L_2, L_1, &m4759_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0018:
	{
		int32_t L_3 = (__this->f0);
		t5 * L_4 = m8794(NULL, L_3, &m8794_MI);
		return L_4;
	}
}
extern MethodInfo m8792_MI;
 t1702  m8792 (t5 * __this, t5 * p0, int32_t p1, MethodInfo* method){
	{
		t1702  L_0 = {0};
		m8789(&L_0, p0, p1, &m8789_MI);
		return L_0;
	}
}
extern MethodInfo m8793_MI;
 void m8793 (t1702 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->f0);
		m8796(NULL, L_0, &m8796_MI);
		__this->f0 = 0;
		return;
	}
}
 t5 * m8794 (t5 * __this, int32_t p0, MethodInfo* method){
	typedef t5 * (*m8794_ftn) (int32_t);
	static m8794_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m8794_ftn)il2cpp_codegen_resolve_icall ("System.Runtime.InteropServices.GCHandle::GetTarget(System.Int32)");
	return _il2cpp_icall_func(p0);
}
 int32_t m8795 (t5 * __this, t5 * p0, int32_t p1, int32_t p2, MethodInfo* method){
	typedef int32_t (*m8795_ftn) (t5 *, int32_t, int32_t);
	static m8795_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m8795_ftn)il2cpp_codegen_resolve_icall ("System.Runtime.InteropServices.GCHandle::GetTargetHandle(System.Object,System.Int32,System.Runtime.InteropServices.GCHandleType)");
	return _il2cpp_icall_func(p0, p1, p2);
}
 void m8796 (t5 * __this, int32_t p0, MethodInfo* method){
	typedef void (*m8796_ftn) (int32_t);
	static m8796_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m8796_ftn)il2cpp_codegen_resolve_icall ("System.Runtime.InteropServices.GCHandle::FreeHandle(System.Int32)");
	_il2cpp_icall_func(p0);
}
extern MethodInfo m8797_MI;
 bool m8797 (t1702 * __this, t5 * p0, MethodInfo* method){
	t1702  V_0 = {0};
	{
		if (!p0)
		{
			goto IL_000b;
		}
	}
	{
		if (((t5 *)IsInst(p0, InitializedTypeInfo(&t1702_TI))))
		{
			goto IL_000d;
		}
	}

IL_000b:
	{
		return 0;
	}

IL_000d:
	{
		int32_t L_0 = (__this->f0);
		V_0 = ((*(t1702 *)((t1702 *)UnBox (p0, InitializedTypeInfo(&t1702_TI)))));
		int32_t L_1 = ((&V_0)->f0);
		return ((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0);
	}
}
extern MethodInfo m8798_MI;
 int32_t m8798 (t1702 * __this, MethodInfo* method){
	{
		int32_t* L_0 = &(__this->f0);
		int32_t L_1 = m3486(L_0, &m3486_MI);
		return L_1;
	}
}
// Metadata Definition System.Runtime.InteropServices.GCHandle
extern Il2CppType t110_0_0_1;
FieldInfo t1702_f0_FieldInfo = 
{
	"handle", &t110_0_0_1, &t1702_TI, offsetof(t1702, f0) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t1702_FIs[] =
{
	&t1702_f0_FieldInfo,
	NULL
};
static PropertyInfo t1702____IsAllocated_PropertyInfo = 
{
	&t1702_TI, "IsAllocated", &m8790_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1702____Target_PropertyInfo = 
{
	&t1702_TI, "Target", &m8791_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1702_PIs[] =
{
	&t1702____IsAllocated_PropertyInfo,
	&t1702____Target_PropertyInfo,
	NULL
};
extern Il2CppType t5_0_0_0;
extern Il2CppType t1703_0_0_0;
extern Il2CppType t1703_0_0_0;
static ParameterInfo t1702_m8789_ParameterInfos[] = 
{
	{"value", 0, 134222152, &EmptyCustomAttributesCache, &t5_0_0_0},
	{"type", 1, 134222153, &EmptyCustomAttributesCache, &t1703_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m8789_MI = 
{
	".ctor", (methodPointerType)&m8789, &t1702_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t1702_m8789_ParameterInfos, &EmptyCustomAttributesCache, 6273, 0, 255, 2, false, false, 3567, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
MethodInfo m8790_MI = 
{
	"get_IsAllocated", (methodPointerType)&m8790, &t1702_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 3568, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8791_MI = 
{
	"get_Target", (methodPointerType)&m8791, &t1702_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 3569, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t5_0_0_0;
extern Il2CppType t1703_0_0_0;
static ParameterInfo t1702_m8792_ParameterInfos[] = 
{
	{"value", 0, 134222154, &EmptyCustomAttributesCache, &t5_0_0_0},
	{"type", 1, 134222155, &EmptyCustomAttributesCache, &t1703_0_0_0},
};
extern Il2CppType t1702_0_0_0;
extern void* RuntimeInvoker_t1702_t5_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m8792_MI = 
{
	"Alloc", (methodPointerType)&m8792, &t1702_TI, &t1702_0_0_0, RuntimeInvoker_t1702_t5_t110, t1702_m8792_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 2, false, false, 3570, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m8793_MI = 
{
	"Free", (methodPointerType)&m8793, &t1702_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, false, 3571, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t110_0_0_0;
static ParameterInfo t1702_m8794_ParameterInfos[] = 
{
	{"handle", 0, 134222156, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m8794_MI = 
{
	"GetTarget", (methodPointerType)&m8794, &t1702_TI, &t5_0_0_0, RuntimeInvoker_t5_t110, t1702_m8794_ParameterInfos, &EmptyCustomAttributesCache, 145, 4096, 255, 1, false, false, 3572, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t5_0_0_0;
extern Il2CppType t110_0_0_0;
extern Il2CppType t1703_0_0_0;
static ParameterInfo t1702_m8795_ParameterInfos[] = 
{
	{"obj", 0, 134222157, &EmptyCustomAttributesCache, &t5_0_0_0},
	{"handle", 1, 134222158, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"type", 2, 134222159, &EmptyCustomAttributesCache, &t1703_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5_t110_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m8795_MI = 
{
	"GetTargetHandle", (methodPointerType)&m8795, &t1702_TI, &t110_0_0_0, RuntimeInvoker_t110_t5_t110_t110, t1702_m8795_ParameterInfos, &EmptyCustomAttributesCache, 145, 4096, 255, 3, false, false, 3573, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t110_0_0_0;
static ParameterInfo t1702_m8796_ParameterInfos[] = 
{
	{"handle", 0, 134222160, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m8796_MI = 
{
	"FreeHandle", (methodPointerType)&m8796, &t1702_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t1702_m8796_ParameterInfos, &EmptyCustomAttributesCache, 145, 4096, 255, 1, false, false, 3574, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t5_0_0_0;
static ParameterInfo t1702_m8797_ParameterInfos[] = 
{
	{"o", 0, 134222161, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8797_MI = 
{
	"Equals", (methodPointerType)&m8797, &t1702_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t1702_m8797_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 0, 1, false, false, 3575, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m8798_MI = 
{
	"GetHashCode", (methodPointerType)&m8798, &t1702_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 198, 0, 2, 0, false, false, 3576, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1702_MIs[] =
{
	&m8789_MI,
	&m8790_MI,
	&m8791_MI,
	&m8792_MI,
	&m8793_MI,
	&m8794_MI,
	&m8795_MI,
	&m8796_MI,
	&m8797_MI,
	&m8798_MI,
	NULL
};
static MethodInfo* t1702_VT[] =
{
	&m8797_MI,
	&m465_MI,
	&m8798_MI,
	&m2148_MI,
};
void t1702_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t576 * tmp;
		tmp = (t576 *)il2cpp_codegen_object_new (&t576_TI);
		m2699(tmp, true, &m2699_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t1430 * tmp;
		tmp = (t1430 *)il2cpp_codegen_object_new (&t1430_TI);
		m6881(tmp, il2cpp_codegen_string_new_wrapper("Struct should be [StructLayout(LayoutKind.Sequential)] but will need to be reordered for that."), &m6881_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1702__CustomAttributeCache = {
2,
NULL,
&t1702_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1702_0_0_0;
extern Il2CppType t1702_1_0_0;
extern CustomAttributesCache t1702__CustomAttributeCache;
TypeInfo t1702_TI = 
{
	&g_mscorlib_dll_Image, NULL, "GCHandle", "System.Runtime.InteropServices", t1702_MIs, t1702_PIs, t1702_FIs, NULL, &t267_TI, NULL, NULL, &t1702_TI, NULL, t1702_VT, &t1702__CustomAttributeCache, &t1702_TI, &t1702_0_0_0, &t1702_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1702)+ sizeof (Il2CppObject), 0, sizeof(t1702 ), 0, 0, -1, 1048841, 0, true, false, false, false, false, false, false, false, false, false, true, true, 10, 2, 1, 0, 0, 4, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1703_TI;
#include "t1703MD.h"



// Metadata Definition System.Runtime.InteropServices.GCHandleType
extern Il2CppType t110_0_0_1542;
FieldInfo t1703_f1_FieldInfo = 
{
	"value__", &t110_0_0_1542, &t1703_TI, offsetof(t1703, f1) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t1703_0_0_32854;
FieldInfo t1703_f2_FieldInfo = 
{
	"Weak", &t1703_0_0_32854, &t1703_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1703_0_0_32854;
FieldInfo t1703_f3_FieldInfo = 
{
	"WeakTrackResurrection", &t1703_0_0_32854, &t1703_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1703_0_0_32854;
FieldInfo t1703_f4_FieldInfo = 
{
	"Normal", &t1703_0_0_32854, &t1703_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1703_0_0_32854;
FieldInfo t1703_f5_FieldInfo = 
{
	"Pinned", &t1703_0_0_32854, &t1703_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t1703_FIs[] =
{
	&t1703_f1_FieldInfo,
	&t1703_f2_FieldInfo,
	&t1703_f3_FieldInfo,
	&t1703_f4_FieldInfo,
	&t1703_f5_FieldInfo,
	NULL
};
static const int32_t t1703_f2_DefaultValueData = 0;
static Il2CppFieldDefaultValueEntry t1703_f2_DefaultValue = 
{
	&t1703_f2_FieldInfo, { (char*)&t1703_f2_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1703_f3_DefaultValueData = 1;
static Il2CppFieldDefaultValueEntry t1703_f3_DefaultValue = 
{
	&t1703_f3_FieldInfo, { (char*)&t1703_f3_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1703_f4_DefaultValueData = 2;
static Il2CppFieldDefaultValueEntry t1703_f4_DefaultValue = 
{
	&t1703_f4_FieldInfo, { (char*)&t1703_f4_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1703_f5_DefaultValueData = 3;
static Il2CppFieldDefaultValueEntry t1703_f5_DefaultValue = 
{
	&t1703_f5_FieldInfo, { (char*)&t1703_f5_DefaultValueData, &t110_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t1703_FDVs[] = 
{
	&t1703_f2_DefaultValue,
	&t1703_f3_DefaultValue,
	&t1703_f4_DefaultValue,
	&t1703_f5_DefaultValue,
	NULL
};
static MethodInfo* t1703_MIs[] =
{
	NULL
};
static MethodInfo* t1703_VT[] =
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
static Il2CppInterfaceOffsetPair t1703_IOs[] = 
{
	{ &t120_TI, 4},
	{ &t121_TI, 5},
	{ &t122_TI, 21},
};
void t1703_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t576 * tmp;
		tmp = (t576 *)il2cpp_codegen_object_new (&t576_TI);
		m2699(tmp, true, &m2699_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1703__CustomAttributeCache = {
1,
NULL,
&t1703_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1703_1_0_0;
extern CustomAttributesCache t1703__CustomAttributeCache;
TypeInfo t1703_TI = 
{
	&g_mscorlib_dll_Image, NULL, "GCHandleType", "System.Runtime.InteropServices", t1703_MIs, NULL, t1703_FIs, NULL, &t18_TI, NULL, NULL, &t110_TI, NULL, t1703_VT, &t1703__CustomAttributeCache, &t110_TI, &t1703_0_0_0, &t1703_1_0_0, t1703_IOs, NULL, NULL, t1703_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1703)+ sizeof (Il2CppObject), sizeof (int32_t), sizeof(int32_t), 0, 0, -1, 8449, 0, true, false, false, true, false, false, false, false, false, false, false, false, 0, 0, 5, 0, 0, 23, 0, 3};
#include "t1704.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1704_TI;
#include "t1704MD.h"



extern MethodInfo m8799_MI;
 void m8799 (t1704 * __this, int32_t p0, MethodInfo* method){
	{
		m3526(__this, &m3526_MI);
		__this->f0 = p0;
		return;
	}
}
// Metadata Definition System.Runtime.InteropServices.InterfaceTypeAttribute
extern Il2CppType t1700_0_0_1;
FieldInfo t1704_f0_FieldInfo = 
{
	"intType", &t1700_0_0_1, &t1704_TI, offsetof(t1704, f0), &EmptyCustomAttributesCache};
static FieldInfo* t1704_FIs[] =
{
	&t1704_f0_FieldInfo,
	NULL
};
extern Il2CppType t1700_0_0_0;
static ParameterInfo t1704_m8799_ParameterInfos[] = 
{
	{"interfaceType", 0, 134222162, &EmptyCustomAttributesCache, &t1700_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m8799_MI = 
{
	".ctor", (methodPointerType)&m8799, &t1704_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t1704_m8799_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 3577, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1704_MIs[] =
{
	&m8799_MI,
	NULL
};
static MethodInfo* t1704_VT[] =
{
	&m3527_MI,
	&m465_MI,
	&m3528_MI,
	&m467_MI,
};
static Il2CppInterfaceOffsetPair t1704_IOs[] = 
{
	{ &t740_TI, 4},
};
void t1704_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
		m3562(tmp, 1024, &m3562_MI);
		m3563(tmp, false, &m3563_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1704__CustomAttributeCache = {
2,
NULL,
&t1704_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1704_0_0_0;
extern Il2CppType t1704_1_0_0;
struct t1704;
extern CustomAttributesCache t1704__CustomAttributeCache;
TypeInfo t1704_TI = 
{
	&g_mscorlib_dll_Image, NULL, "InterfaceTypeAttribute", "System.Runtime.InteropServices", t1704_MIs, NULL, t1704_FIs, NULL, &t628_TI, NULL, NULL, &t1704_TI, NULL, t1704_VT, &t1704__CustomAttributeCache, &t1704_TI, &t1704_0_0_0, &t1704_1_0_0, t1704_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1704), 0, -1, 0, 0, -1, 1048833, 0, false, false, false, false, false, false, false, false, false, false, false, false, 1, 0, 1, 0, 0, 4, 0, 1};
#include "t1705.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1705_TI;
#include "t1705MD.h"

#include "t1977.h"
#include "t1978.h"
#include "t1206MD.h"
#include "t1977MD.h"
extern MethodInfo m10557_MI;
extern MethodInfo m10808_MI;
extern MethodInfo m8801_MI;


extern MethodInfo m8800_MI;
 void m8800 (t5 * __this, MethodInfo* method){
	int32_t G_B3_0 = 0;
	{
		((t1705_SFs*)InitializedTypeInfo(&t1705_TI)->static_fields)->f0 = 2;
		t1977 * L_0 = m10557(NULL, &m10557_MI);
		int32_t L_1 = m10808(L_0, &m10808_MI);
		if ((((uint32_t)L_1) != ((uint32_t)2)))
		{
			goto IL_0016;
		}
	}
	{
		G_B3_0 = 2;
		goto IL_0017;
	}

IL_0016:
	{
		G_B3_0 = 1;
	}

IL_0017:
	{
		((t1705_SFs*)InitializedTypeInfo(&t1705_TI)->static_fields)->f1 = G_B3_0;
		return;
	}
}
 void m8801 (t5 * __this, t124 p0, int32_t p1, t107 * p2, int32_t p3, MethodInfo* method){
	typedef void (*m8801_ftn) (t124, int32_t, t107 *, int32_t);
	static m8801_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m8801_ftn)il2cpp_codegen_resolve_icall ("System.Runtime.InteropServices.Marshal::copy_from_unmanaged(System.IntPtr,System.Int32,System.Array,System.Int32)");
	_il2cpp_icall_func(p0, p1, p2, p3);
}
extern MethodInfo m8802_MI;
 void m8802 (t5 * __this, t124 p0, t1044* p1, int32_t p2, int32_t p3, MethodInfo* method){
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1705_TI));
		m8801(NULL, p0, p2, (t107 *)(t107 *)p1, p3, &m8801_MI);
		return;
	}
}
extern MethodInfo m8803_MI;
 void m8803 (t5 * __this, t124 p0, t146* p1, int32_t p2, int32_t p3, MethodInfo* method){
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1705_TI));
		m8801(NULL, p0, p2, (t107 *)(t107 *)p1, p3, &m8801_MI);
		return;
	}
}
// Metadata Definition System.Runtime.InteropServices.Marshal
extern Il2CppType t110_0_0_54;
FieldInfo t1705_f0_FieldInfo = 
{
	"SystemMaxDBCSCharSize", &t110_0_0_54, &t1705_TI, offsetof(t1705_SFs, f0), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_54;
FieldInfo t1705_f1_FieldInfo = 
{
	"SystemDefaultCharSize", &t110_0_0_54, &t1705_TI, offsetof(t1705_SFs, f1), &EmptyCustomAttributesCache};
static FieldInfo* t1705_FIs[] =
{
	&t1705_f0_FieldInfo,
	&t1705_f1_FieldInfo,
	NULL
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m8800_MI = 
{
	".cctor", (methodPointerType)&m8800, &t1705_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 3578, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern Il2CppType t110_0_0_0;
extern Il2CppType t107_0_0_0;
extern Il2CppType t107_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t1705_m8801_ParameterInfos[] = 
{
	{"source", 0, 134222163, &EmptyCustomAttributesCache, &t124_0_0_0},
	{"startIndex", 1, 134222164, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"destination", 2, 134222165, &EmptyCustomAttributesCache, &t107_0_0_0},
	{"length", 3, 134222166, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t124_t110_t5_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m8801_MI = 
{
	"copy_from_unmanaged", (methodPointerType)&m8801, &t1705_TI, &t109_0_0_0, RuntimeInvoker_t109_t124_t110_t5_t110, t1705_m8801_ParameterInfos, &EmptyCustomAttributesCache, 145, 4096, 255, 4, false, false, 3579, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern Il2CppType t1044_0_0_0;
extern Il2CppType t110_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t1705_m8802_ParameterInfos[] = 
{
	{"source", 0, 134222167, &EmptyCustomAttributesCache, &t124_0_0_0},
	{"destination", 1, 134222168, &EmptyCustomAttributesCache, &t1044_0_0_0},
	{"startIndex", 2, 134222169, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"length", 3, 134222170, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t124_t5_t110_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m8802_MI = 
{
	"Copy", (methodPointerType)&m8802, &t1705_TI, &t109_0_0_0, RuntimeInvoker_t109_t124_t5_t110_t110, t1705_m8802_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 4, false, false, 3580, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t124_0_0_0;
extern Il2CppType t146_0_0_0;
extern Il2CppType t146_0_0_0;
extern Il2CppType t110_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t1705_m8803_ParameterInfos[] = 
{
	{"source", 0, 134222171, &EmptyCustomAttributesCache, &t124_0_0_0},
	{"destination", 1, 134222172, &EmptyCustomAttributesCache, &t146_0_0_0},
	{"startIndex", 2, 134222173, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"length", 3, 134222174, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t124_t5_t110_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m8803_MI = 
{
	"Copy", (methodPointerType)&m8803, &t1705_TI, &t109_0_0_0, RuntimeInvoker_t109_t124_t5_t110_t110, t1705_m8803_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 4, false, false, 3581, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1705_MIs[] =
{
	&m8800_MI,
	&m8801_MI,
	&m8802_MI,
	&m8803_MI,
	NULL
};
static MethodInfo* t1705_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
};
extern TypeInfo t1898_TI;
#include "t1898.h"
#include "t1898MD.h"
extern MethodInfo m9771_MI;
void t1705_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t1898 * tmp;
		tmp = (t1898 *)il2cpp_codegen_object_new (&t1898_TI);
		m9771(tmp, &m9771_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1705__CustomAttributeCache = {
1,
NULL,
&t1705_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1705_0_0_0;
extern Il2CppType t1705_1_0_0;
struct t1705;
extern CustomAttributesCache t1705__CustomAttributeCache;
TypeInfo t1705_TI = 
{
	&g_mscorlib_dll_Image, NULL, "Marshal", "System.Runtime.InteropServices", t1705_MIs, NULL, t1705_FIs, NULL, &t5_TI, NULL, NULL, &t1705_TI, NULL, t1705_VT, &t1705__CustomAttributeCache, &t1705_TI, &t1705_0_0_0, &t1705_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1705), 0, -1, sizeof(t1705_SFs), 0, -1, 262529, 0, false, false, false, false, false, false, false, false, false, true, false, false, 4, 0, 2, 0, 0, 4, 0, 0};
#include "t1706.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1706_TI;
#include "t1706MD.h"

extern MethodInfo m3592_MI;


extern MethodInfo m8804_MI;
 void m8804 (t1706 * __this, MethodInfo* method){
	{
		t11* L_0 = m6878(NULL, (t11*) &_stringLiteral1907, &m6878_MI);
		m4996(__this, L_0, &m4996_MI);
		m3592(__this, ((int32_t)-2146233035), &m3592_MI);
		return;
	}
}
extern MethodInfo m8805_MI;
 void m8805 (t1706 * __this, t829 * p0, t830  p1, MethodInfo* method){
	{
		m10839(__this, p0, p1, &m10839_MI);
		return;
	}
}
// Metadata Definition System.Runtime.InteropServices.MarshalDirectiveException
extern Il2CppType t110_0_0_32849;
FieldInfo t1706_f11_FieldInfo = 
{
	"ErrorCode", &t110_0_0_32849, &t1706_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t1706_FIs[] =
{
	&t1706_f11_FieldInfo,
	NULL
};
static const int32_t t1706_f11_DefaultValueData = -2146233035;
static Il2CppFieldDefaultValueEntry t1706_f11_DefaultValue = 
{
	&t1706_f11_FieldInfo, { (char*)&t1706_f11_DefaultValueData, &t110_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t1706_FDVs[] = 
{
	&t1706_f11_DefaultValue,
	NULL
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m8804_MI = 
{
	".ctor", (methodPointerType)&m8804, &t1706_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 3582, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t829_0_0_0;
extern Il2CppType t830_0_0_0;
static ParameterInfo t1706_m8805_ParameterInfos[] = 
{
	{"info", 0, 134222175, &EmptyCustomAttributesCache, &t829_0_0_0},
	{"context", 1, 134222176, &EmptyCustomAttributesCache, &t830_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t830 (MethodInfo* method, void* obj, void** args);
MethodInfo m8805_MI = 
{
	".ctor", (methodPointerType)&m8805, &t1706_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t830, t1706_m8805_ParameterInfos, &EmptyCustomAttributesCache, 6276, 0, 255, 2, false, false, 3583, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1706_MIs[] =
{
	&m8804_MI,
	&m8805_MI,
	NULL
};
static MethodInfo* t1706_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m3501_MI,
	&m3502_MI,
	&m3503_MI,
	&m584_MI,
	&m3504_MI,
	&m3505_MI,
	&m3502_MI,
	&m3506_MI,
};
static Il2CppInterfaceOffsetPair t1706_IOs[] = 
{
	{ &t517_TI, 4},
	{ &t728_TI, 5},
};
void t1706_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t576 * tmp;
		tmp = (t576 *)il2cpp_codegen_object_new (&t576_TI);
		m2699(tmp, true, &m2699_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1706__CustomAttributeCache = {
1,
NULL,
&t1706_CustomAttributesCacheGenerator
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType t1706_0_0_0;
extern Il2CppType t1706_1_0_0;
struct t1706;
extern CustomAttributesCache t1706__CustomAttributeCache;
TypeInfo t1706_TI = 
{
	&g_mscorlib_dll_Image, NULL, "MarshalDirectiveException", "System.Runtime.InteropServices", t1706_MIs, NULL, t1706_FIs, NULL, &t1221_TI, NULL, NULL, &t1706_TI, NULL, t1706_VT, &t1706__CustomAttributeCache, &t1706_TI, &t1706_0_0_0, &t1706_1_0_0, t1706_IOs, NULL, NULL, t1706_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1706), 0, -1, 0, 0, -1, 1056769, 0, false, false, false, false, false, false, false, false, false, false, false, false, 2, 0, 1, 0, 0, 11, 0, 2};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
