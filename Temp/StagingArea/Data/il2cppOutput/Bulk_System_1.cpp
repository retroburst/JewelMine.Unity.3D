#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
#include "t1109.h"
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
extern TypeInfo t1109_TI;
#include "t1109MD.h"

#include "t109.h"
#include "t5.h"
#include "t5MD.h"
extern MethodInfo m460_MI;

#include "t107.h"

extern MethodInfo m4360_MI;
 void m4360 (t1109 * __this, t5 * p0, MethodInfo* method){
	{
		m460(__this, &m460_MI);
		__this->f0 = p0;
		return;
	}
}
// Metadata Definition System.Text.RegularExpressions.MRUList/Node
extern Il2CppType t5_0_0_6;
FieldInfo t1109_f0_FieldInfo = 
{
	"value", &t5_0_0_6, &t1109_TI, offsetof(t1109, f0), &EmptyCustomAttributesCache};
extern Il2CppType t1109_0_0_6;
FieldInfo t1109_f1_FieldInfo = 
{
	"previous", &t1109_0_0_6, &t1109_TI, offsetof(t1109, f1), &EmptyCustomAttributesCache};
extern Il2CppType t1109_0_0_6;
FieldInfo t1109_f2_FieldInfo = 
{
	"next", &t1109_0_0_6, &t1109_TI, offsetof(t1109, f2), &EmptyCustomAttributesCache};
static FieldInfo* t1109_FIs[] =
{
	&t1109_f0_FieldInfo,
	&t1109_f1_FieldInfo,
	&t1109_f2_FieldInfo,
	NULL
};
extern Il2CppType t5_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t1109_m4360_ParameterInfos[] = 
{
	{"value", 0, 134218177, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m4360_MI = 
{
	".ctor", (methodPointerType)&m4360, &t1109_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t1109_m4360_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 566, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1109_MIs[] =
{
	&m4360_MI,
	NULL
};
extern MethodInfo m464_MI;
extern MethodInfo m465_MI;
extern MethodInfo m466_MI;
extern MethodInfo m467_MI;
static MethodInfo* t1109_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType t1109_0_0_0;
extern Il2CppType t1109_1_0_0;
extern TypeInfo t5_TI;
struct t1109;
extern TypeInfo t1108_TI;
TypeInfo t1109_TI = 
{
	&g_System_dll_Image, NULL, "Node", "", t1109_MIs, NULL, t1109_FIs, NULL, &t5_TI, NULL, &t1108_TI, &t1109_TI, NULL, t1109_VT, &EmptyCustomAttributesCache, &t1109_TI, &t1109_0_0_0, &t1109_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1109), 0, -1, 0, 0, -1, 1048579, 0, false, false, false, false, false, false, false, false, false, false, false, false, 1, 0, 3, 0, 0, 4, 0, 0};
#include "t1108.h"
#ifndef _MSC_VER
#else
#endif
#include "t1108MD.h"

#include "t108.h"
extern TypeInfo t108_TI;


extern MethodInfo m4361_MI;
 void m4361 (t1108 * __this, MethodInfo* method){
	t1109 * V_0 = {0};
	{
		m460(__this, &m460_MI);
		V_0 = (t1109 *)NULL;
		__this->f1 = (t1109 *)NULL;
		__this->f0 = V_0;
		return;
	}
}
extern MethodInfo m4362_MI;
 void m4362 (t1108 * __this, t5 * p0, MethodInfo* method){
	t1109 * V_0 = {0};
	t1109 * V_1 = {0};
	{
		t1109 * L_0 = (__this->f0);
		if (L_0)
		{
			goto IL_0023;
		}
	}
	{
		t1109 * L_1 = (t1109 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1109_TI));
		m4360(L_1, p0, &m4360_MI);
		V_0 = L_1;
		t1109 * L_2 = V_0;
		V_1 = L_2;
		__this->f1 = L_2;
		__this->f0 = V_1;
		return;
	}

IL_0023:
	{
		t1109 * L_3 = (__this->f0);
		V_0 = L_3;
		goto IL_0036;
	}

IL_002f:
	{
		t1109 * L_4 = (V_0->f1);
		V_0 = L_4;
	}

IL_0036:
	{
		if (!V_0)
		{
			goto IL_004d;
		}
	}
	{
		t5 * L_5 = (V_0->f0);
		bool L_6 = (bool)VirtFuncInvoker1< bool, t5 * >::Invoke(&m464_MI, p0, L_5);
		if (!L_6)
		{
			goto IL_002f;
		}
	}

IL_004d:
	{
		if (V_0)
		{
			goto IL_005f;
		}
	}
	{
		t1109 * L_7 = (t1109 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1109_TI));
		m4360(L_7, p0, &m4360_MI);
		V_0 = L_7;
		goto IL_00ab;
	}

IL_005f:
	{
		t1109 * L_8 = (__this->f0);
		if ((((t1109 *)V_0) != ((t1109 *)L_8)))
		{
			goto IL_006c;
		}
	}
	{
		return;
	}

IL_006c:
	{
		t1109 * L_9 = (__this->f1);
		if ((((t1109 *)V_0) != ((t1109 *)L_9)))
		{
			goto IL_0089;
		}
	}
	{
		t1109 * L_10 = (V_0->f2);
		__this->f1 = L_10;
		goto IL_009a;
	}

IL_0089:
	{
		t1109 * L_11 = (V_0->f1);
		t1109 * L_12 = (V_0->f2);
		L_11->f2 = L_12;
	}

IL_009a:
	{
		t1109 * L_13 = (V_0->f2);
		t1109 * L_14 = (V_0->f1);
		L_13->f1 = L_14;
	}

IL_00ab:
	{
		t1109 * L_15 = (__this->f0);
		L_15->f2 = V_0;
		t1109 * L_16 = (__this->f0);
		V_0->f1 = L_16;
		V_0->f2 = (t1109 *)NULL;
		__this->f0 = V_0;
		return;
	}
}
extern MethodInfo m4363_MI;
 t5 * m4363 (t1108 * __this, MethodInfo* method){
	t5 * V_0 = {0};
	{
		t1109 * L_0 = (__this->f1);
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		return NULL;
	}

IL_000d:
	{
		t1109 * L_1 = (__this->f1);
		t5 * L_2 = (L_1->f0);
		V_0 = L_2;
		t1109 * L_3 = (__this->f1);
		t1109 * L_4 = (L_3->f2);
		__this->f1 = L_4;
		t1109 * L_5 = (__this->f1);
		if (L_5)
		{
			goto IL_0041;
		}
	}
	{
		__this->f0 = (t1109 *)NULL;
		goto IL_004d;
	}

IL_0041:
	{
		t1109 * L_6 = (__this->f1);
		L_6->f1 = (t1109 *)NULL;
	}

IL_004d:
	{
		return V_0;
	}
}
// Metadata Definition System.Text.RegularExpressions.MRUList
extern Il2CppType t1109_0_0_1;
FieldInfo t1108_f0_FieldInfo = 
{
	"head", &t1109_0_0_1, &t1108_TI, offsetof(t1108, f0), &EmptyCustomAttributesCache};
extern Il2CppType t1109_0_0_1;
FieldInfo t1108_f1_FieldInfo = 
{
	"tail", &t1109_0_0_1, &t1108_TI, offsetof(t1108, f1), &EmptyCustomAttributesCache};
static FieldInfo* t1108_FIs[] =
{
	&t1108_f0_FieldInfo,
	&t1108_f1_FieldInfo,
	NULL
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m4361_MI = 
{
	".ctor", (methodPointerType)&m4361, &t1108_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 563, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t5_0_0_0;
static ParameterInfo t1108_m4362_ParameterInfos[] = 
{
	{"o", 0, 134218176, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m4362_MI = 
{
	"Use", (methodPointerType)&m4362, &t1108_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t1108_m4362_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 564, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m4363_MI = 
{
	"Evict", (methodPointerType)&m4363, &t1108_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, false, 565, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1108_MIs[] =
{
	&m4361_MI,
	&m4362_MI,
	&m4363_MI,
	NULL
};
extern TypeInfo t1109_TI;
static TypeInfo* t1108_TI__nestedTypes[2] =
{
	&t1109_TI,
	NULL
};
static MethodInfo* t1108_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType t1108_0_0_0;
extern Il2CppType t1108_1_0_0;
struct t1108;
TypeInfo t1108_TI = 
{
	&g_System_dll_Image, NULL, "MRUList", "System.Text.RegularExpressions", t1108_MIs, NULL, t1108_FIs, NULL, &t5_TI, t1108_TI__nestedTypes, NULL, &t1108_TI, NULL, t1108_VT, &EmptyCustomAttributesCache, &t1108_TI, &t1108_0_0_0, &t1108_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1108), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, false, false, false, false, false, false, false, 3, 0, 2, 0, 1, 4, 0, 0};
#include "t1110.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1110_TI;
#include "t1110MD.h"



// Metadata Definition System.Text.RegularExpressions.Category
extern Il2CppType t764_0_0_1542;
FieldInfo t1110_f1_FieldInfo = 
{
	"value__", &t764_0_0_1542, &t1110_TI, offsetof(t1110, f1) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t1110_0_0_32854;
FieldInfo t1110_f2_FieldInfo = 
{
	"None", &t1110_0_0_32854, &t1110_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1110_0_0_32854;
FieldInfo t1110_f3_FieldInfo = 
{
	"Any", &t1110_0_0_32854, &t1110_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1110_0_0_32854;
FieldInfo t1110_f4_FieldInfo = 
{
	"AnySingleline", &t1110_0_0_32854, &t1110_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1110_0_0_32854;
FieldInfo t1110_f5_FieldInfo = 
{
	"Word", &t1110_0_0_32854, &t1110_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1110_0_0_32854;
FieldInfo t1110_f6_FieldInfo = 
{
	"Digit", &t1110_0_0_32854, &t1110_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1110_0_0_32854;
FieldInfo t1110_f7_FieldInfo = 
{
	"WhiteSpace", &t1110_0_0_32854, &t1110_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1110_0_0_32854;
FieldInfo t1110_f8_FieldInfo = 
{
	"EcmaAny", &t1110_0_0_32854, &t1110_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1110_0_0_32854;
FieldInfo t1110_f9_FieldInfo = 
{
	"EcmaAnySingleline", &t1110_0_0_32854, &t1110_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1110_0_0_32854;
FieldInfo t1110_f10_FieldInfo = 
{
	"EcmaWord", &t1110_0_0_32854, &t1110_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1110_0_0_32854;
FieldInfo t1110_f11_FieldInfo = 
{
	"EcmaDigit", &t1110_0_0_32854, &t1110_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1110_0_0_32854;
FieldInfo t1110_f12_FieldInfo = 
{
	"EcmaWhiteSpace", &t1110_0_0_32854, &t1110_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1110_0_0_32854;
FieldInfo t1110_f13_FieldInfo = 
{
	"UnicodeL", &t1110_0_0_32854, &t1110_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1110_0_0_32854;
FieldInfo t1110_f14_FieldInfo = 
{
	"UnicodeM", &t1110_0_0_32854, &t1110_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1110_0_0_32854;
FieldInfo t1110_f15_FieldInfo = 
{
	"UnicodeN", &t1110_0_0_32854, &t1110_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1110_0_0_32854;
FieldInfo t1110_f16_FieldInfo = 
{
	"UnicodeZ", &t1110_0_0_32854, &t1110_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1110_0_0_32854;
FieldInfo t1110_f17_FieldInfo = 
{
	"UnicodeP", &t1110_0_0_32854, &t1110_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1110_0_0_32854;
FieldInfo t1110_f18_FieldInfo = 
{
	"UnicodeS", &t1110_0_0_32854, &t1110_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1110_0_0_32854;
FieldInfo t1110_f19_FieldInfo = 
{
	"UnicodeC", &t1110_0_0_32854, &t1110_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1110_0_0_32854;
FieldInfo t1110_f20_FieldInfo = 
{
	"UnicodeLu", &t1110_0_0_32854, &t1110_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1110_0_0_32854;
FieldInfo t1110_f21_FieldInfo = 
{
	"UnicodeLl", &t1110_0_0_32854, &t1110_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1110_0_0_32854;
FieldInfo t1110_f22_FieldInfo = 
{
	"UnicodeLt", &t1110_0_0_32854, &t1110_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1110_0_0_32854;
FieldInfo t1110_f23_FieldInfo = 
{
	"UnicodeLm", &t1110_0_0_32854, &t1110_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1110_0_0_32854;
FieldInfo t1110_f24_FieldInfo = 
{
	"UnicodeLo", &t1110_0_0_32854, &t1110_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1110_0_0_32854;
FieldInfo t1110_f25_FieldInfo = 
{
	"UnicodeMn", &t1110_0_0_32854, &t1110_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1110_0_0_32854;
FieldInfo t1110_f26_FieldInfo = 
{
	"UnicodeMe", &t1110_0_0_32854, &t1110_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1110_0_0_32854;
FieldInfo t1110_f27_FieldInfo = 
{
	"UnicodeMc", &t1110_0_0_32854, &t1110_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1110_0_0_32854;
FieldInfo t1110_f28_FieldInfo = 
{
	"UnicodeNd", &t1110_0_0_32854, &t1110_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1110_0_0_32854;
FieldInfo t1110_f29_FieldInfo = 
{
	"UnicodeNl", &t1110_0_0_32854, &t1110_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1110_0_0_32854;
FieldInfo t1110_f30_FieldInfo = 
{
	"UnicodeNo", &t1110_0_0_32854, &t1110_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1110_0_0_32854;
FieldInfo t1110_f31_FieldInfo = 
{
	"UnicodeZs", &t1110_0_0_32854, &t1110_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1110_0_0_32854;
FieldInfo t1110_f32_FieldInfo = 
{
	"UnicodeZl", &t1110_0_0_32854, &t1110_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1110_0_0_32854;
FieldInfo t1110_f33_FieldInfo = 
{
	"UnicodeZp", &t1110_0_0_32854, &t1110_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1110_0_0_32854;
FieldInfo t1110_f34_FieldInfo = 
{
	"UnicodePd", &t1110_0_0_32854, &t1110_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1110_0_0_32854;
FieldInfo t1110_f35_FieldInfo = 
{
	"UnicodePs", &t1110_0_0_32854, &t1110_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1110_0_0_32854;
FieldInfo t1110_f36_FieldInfo = 
{
	"UnicodePi", &t1110_0_0_32854, &t1110_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1110_0_0_32854;
FieldInfo t1110_f37_FieldInfo = 
{
	"UnicodePe", &t1110_0_0_32854, &t1110_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1110_0_0_32854;
FieldInfo t1110_f38_FieldInfo = 
{
	"UnicodePf", &t1110_0_0_32854, &t1110_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1110_0_0_32854;
FieldInfo t1110_f39_FieldInfo = 
{
	"UnicodePc", &t1110_0_0_32854, &t1110_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1110_0_0_32854;
FieldInfo t1110_f40_FieldInfo = 
{
	"UnicodePo", &t1110_0_0_32854, &t1110_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1110_0_0_32854;
FieldInfo t1110_f41_FieldInfo = 
{
	"UnicodeSm", &t1110_0_0_32854, &t1110_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1110_0_0_32854;
FieldInfo t1110_f42_FieldInfo = 
{
	"UnicodeSc", &t1110_0_0_32854, &t1110_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1110_0_0_32854;
FieldInfo t1110_f43_FieldInfo = 
{
	"UnicodeSk", &t1110_0_0_32854, &t1110_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1110_0_0_32854;
FieldInfo t1110_f44_FieldInfo = 
{
	"UnicodeSo", &t1110_0_0_32854, &t1110_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1110_0_0_32854;
FieldInfo t1110_f45_FieldInfo = 
{
	"UnicodeCc", &t1110_0_0_32854, &t1110_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1110_0_0_32854;
FieldInfo t1110_f46_FieldInfo = 
{
	"UnicodeCf", &t1110_0_0_32854, &t1110_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1110_0_0_32854;
FieldInfo t1110_f47_FieldInfo = 
{
	"UnicodeCo", &t1110_0_0_32854, &t1110_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1110_0_0_32854;
FieldInfo t1110_f48_FieldInfo = 
{
	"UnicodeCs", &t1110_0_0_32854, &t1110_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1110_0_0_32854;
FieldInfo t1110_f49_FieldInfo = 
{
	"UnicodeCn", &t1110_0_0_32854, &t1110_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1110_0_0_32854;
FieldInfo t1110_f50_FieldInfo = 
{
	"UnicodeBasicLatin", &t1110_0_0_32854, &t1110_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1110_0_0_32854;
FieldInfo t1110_f51_FieldInfo = 
{
	"UnicodeLatin1Supplement", &t1110_0_0_32854, &t1110_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1110_0_0_32854;
FieldInfo t1110_f52_FieldInfo = 
{
	"UnicodeLatinExtendedA", &t1110_0_0_32854, &t1110_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1110_0_0_32854;
FieldInfo t1110_f53_FieldInfo = 
{
	"UnicodeLatinExtendedB", &t1110_0_0_32854, &t1110_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1110_0_0_32854;
FieldInfo t1110_f54_FieldInfo = 
{
	"UnicodeIPAExtensions", &t1110_0_0_32854, &t1110_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1110_0_0_32854;
FieldInfo t1110_f55_FieldInfo = 
{
	"UnicodeSpacingModifierLetters", &t1110_0_0_32854, &t1110_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1110_0_0_32854;
FieldInfo t1110_f56_FieldInfo = 
{
	"UnicodeCombiningDiacriticalMarks", &t1110_0_0_32854, &t1110_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1110_0_0_32854;
FieldInfo t1110_f57_FieldInfo = 
{
	"UnicodeGreek", &t1110_0_0_32854, &t1110_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1110_0_0_32854;
FieldInfo t1110_f58_FieldInfo = 
{
	"UnicodeCyrillic", &t1110_0_0_32854, &t1110_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1110_0_0_32854;
FieldInfo t1110_f59_FieldInfo = 
{
	"UnicodeArmenian", &t1110_0_0_32854, &t1110_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1110_0_0_32854;
FieldInfo t1110_f60_FieldInfo = 
{
	"UnicodeHebrew", &t1110_0_0_32854, &t1110_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1110_0_0_32854;
FieldInfo t1110_f61_FieldInfo = 
{
	"UnicodeArabic", &t1110_0_0_32854, &t1110_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1110_0_0_32854;
FieldInfo t1110_f62_FieldInfo = 
{
	"UnicodeSyriac", &t1110_0_0_32854, &t1110_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1110_0_0_32854;
FieldInfo t1110_f63_FieldInfo = 
{
	"UnicodeThaana", &t1110_0_0_32854, &t1110_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1110_0_0_32854;
FieldInfo t1110_f64_FieldInfo = 
{
	"UnicodeDevanagari", &t1110_0_0_32854, &t1110_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1110_0_0_32854;
FieldInfo t1110_f65_FieldInfo = 
{
	"UnicodeBengali", &t1110_0_0_32854, &t1110_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1110_0_0_32854;
FieldInfo t1110_f66_FieldInfo = 
{
	"UnicodeGurmukhi", &t1110_0_0_32854, &t1110_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1110_0_0_32854;
FieldInfo t1110_f67_FieldInfo = 
{
	"UnicodeGujarati", &t1110_0_0_32854, &t1110_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1110_0_0_32854;
FieldInfo t1110_f68_FieldInfo = 
{
	"UnicodeOriya", &t1110_0_0_32854, &t1110_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1110_0_0_32854;
FieldInfo t1110_f69_FieldInfo = 
{
	"UnicodeTamil", &t1110_0_0_32854, &t1110_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1110_0_0_32854;
FieldInfo t1110_f70_FieldInfo = 
{
	"UnicodeTelugu", &t1110_0_0_32854, &t1110_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1110_0_0_32854;
FieldInfo t1110_f71_FieldInfo = 
{
	"UnicodeKannada", &t1110_0_0_32854, &t1110_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1110_0_0_32854;
FieldInfo t1110_f72_FieldInfo = 
{
	"UnicodeMalayalam", &t1110_0_0_32854, &t1110_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1110_0_0_32854;
FieldInfo t1110_f73_FieldInfo = 
{
	"UnicodeSinhala", &t1110_0_0_32854, &t1110_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1110_0_0_32854;
FieldInfo t1110_f74_FieldInfo = 
{
	"UnicodeThai", &t1110_0_0_32854, &t1110_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1110_0_0_32854;
FieldInfo t1110_f75_FieldInfo = 
{
	"UnicodeLao", &t1110_0_0_32854, &t1110_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1110_0_0_32854;
FieldInfo t1110_f76_FieldInfo = 
{
	"UnicodeTibetan", &t1110_0_0_32854, &t1110_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1110_0_0_32854;
FieldInfo t1110_f77_FieldInfo = 
{
	"UnicodeMyanmar", &t1110_0_0_32854, &t1110_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1110_0_0_32854;
FieldInfo t1110_f78_FieldInfo = 
{
	"UnicodeGeorgian", &t1110_0_0_32854, &t1110_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1110_0_0_32854;
FieldInfo t1110_f79_FieldInfo = 
{
	"UnicodeHangulJamo", &t1110_0_0_32854, &t1110_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1110_0_0_32854;
FieldInfo t1110_f80_FieldInfo = 
{
	"UnicodeEthiopic", &t1110_0_0_32854, &t1110_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1110_0_0_32854;
FieldInfo t1110_f81_FieldInfo = 
{
	"UnicodeCherokee", &t1110_0_0_32854, &t1110_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1110_0_0_32854;
FieldInfo t1110_f82_FieldInfo = 
{
	"UnicodeUnifiedCanadianAboriginalSyllabics", &t1110_0_0_32854, &t1110_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1110_0_0_32854;
FieldInfo t1110_f83_FieldInfo = 
{
	"UnicodeOgham", &t1110_0_0_32854, &t1110_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1110_0_0_32854;
FieldInfo t1110_f84_FieldInfo = 
{
	"UnicodeRunic", &t1110_0_0_32854, &t1110_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1110_0_0_32854;
FieldInfo t1110_f85_FieldInfo = 
{
	"UnicodeKhmer", &t1110_0_0_32854, &t1110_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1110_0_0_32854;
FieldInfo t1110_f86_FieldInfo = 
{
	"UnicodeMongolian", &t1110_0_0_32854, &t1110_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1110_0_0_32854;
FieldInfo t1110_f87_FieldInfo = 
{
	"UnicodeLatinExtendedAdditional", &t1110_0_0_32854, &t1110_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1110_0_0_32854;
FieldInfo t1110_f88_FieldInfo = 
{
	"UnicodeGreekExtended", &t1110_0_0_32854, &t1110_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1110_0_0_32854;
FieldInfo t1110_f89_FieldInfo = 
{
	"UnicodeGeneralPunctuation", &t1110_0_0_32854, &t1110_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1110_0_0_32854;
FieldInfo t1110_f90_FieldInfo = 
{
	"UnicodeSuperscriptsandSubscripts", &t1110_0_0_32854, &t1110_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1110_0_0_32854;
FieldInfo t1110_f91_FieldInfo = 
{
	"UnicodeCurrencySymbols", &t1110_0_0_32854, &t1110_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1110_0_0_32854;
FieldInfo t1110_f92_FieldInfo = 
{
	"UnicodeCombiningMarksforSymbols", &t1110_0_0_32854, &t1110_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1110_0_0_32854;
FieldInfo t1110_f93_FieldInfo = 
{
	"UnicodeLetterlikeSymbols", &t1110_0_0_32854, &t1110_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1110_0_0_32854;
FieldInfo t1110_f94_FieldInfo = 
{
	"UnicodeNumberForms", &t1110_0_0_32854, &t1110_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1110_0_0_32854;
FieldInfo t1110_f95_FieldInfo = 
{
	"UnicodeArrows", &t1110_0_0_32854, &t1110_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1110_0_0_32854;
FieldInfo t1110_f96_FieldInfo = 
{
	"UnicodeMathematicalOperators", &t1110_0_0_32854, &t1110_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1110_0_0_32854;
FieldInfo t1110_f97_FieldInfo = 
{
	"UnicodeMiscellaneousTechnical", &t1110_0_0_32854, &t1110_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1110_0_0_32854;
FieldInfo t1110_f98_FieldInfo = 
{
	"UnicodeControlPictures", &t1110_0_0_32854, &t1110_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1110_0_0_32854;
FieldInfo t1110_f99_FieldInfo = 
{
	"UnicodeOpticalCharacterRecognition", &t1110_0_0_32854, &t1110_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1110_0_0_32854;
FieldInfo t1110_f100_FieldInfo = 
{
	"UnicodeEnclosedAlphanumerics", &t1110_0_0_32854, &t1110_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1110_0_0_32854;
FieldInfo t1110_f101_FieldInfo = 
{
	"UnicodeBoxDrawing", &t1110_0_0_32854, &t1110_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1110_0_0_32854;
FieldInfo t1110_f102_FieldInfo = 
{
	"UnicodeBlockElements", &t1110_0_0_32854, &t1110_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1110_0_0_32854;
FieldInfo t1110_f103_FieldInfo = 
{
	"UnicodeGeometricShapes", &t1110_0_0_32854, &t1110_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1110_0_0_32854;
FieldInfo t1110_f104_FieldInfo = 
{
	"UnicodeMiscellaneousSymbols", &t1110_0_0_32854, &t1110_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1110_0_0_32854;
FieldInfo t1110_f105_FieldInfo = 
{
	"UnicodeDingbats", &t1110_0_0_32854, &t1110_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1110_0_0_32854;
FieldInfo t1110_f106_FieldInfo = 
{
	"UnicodeBraillePatterns", &t1110_0_0_32854, &t1110_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1110_0_0_32854;
FieldInfo t1110_f107_FieldInfo = 
{
	"UnicodeCJKRadicalsSupplement", &t1110_0_0_32854, &t1110_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1110_0_0_32854;
FieldInfo t1110_f108_FieldInfo = 
{
	"UnicodeKangxiRadicals", &t1110_0_0_32854, &t1110_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1110_0_0_32854;
FieldInfo t1110_f109_FieldInfo = 
{
	"UnicodeIdeographicDescriptionCharacters", &t1110_0_0_32854, &t1110_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1110_0_0_32854;
FieldInfo t1110_f110_FieldInfo = 
{
	"UnicodeCJKSymbolsandPunctuation", &t1110_0_0_32854, &t1110_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1110_0_0_32854;
FieldInfo t1110_f111_FieldInfo = 
{
	"UnicodeHiragana", &t1110_0_0_32854, &t1110_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1110_0_0_32854;
FieldInfo t1110_f112_FieldInfo = 
{
	"UnicodeKatakana", &t1110_0_0_32854, &t1110_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1110_0_0_32854;
FieldInfo t1110_f113_FieldInfo = 
{
	"UnicodeBopomofo", &t1110_0_0_32854, &t1110_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1110_0_0_32854;
FieldInfo t1110_f114_FieldInfo = 
{
	"UnicodeHangulCompatibilityJamo", &t1110_0_0_32854, &t1110_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1110_0_0_32854;
FieldInfo t1110_f115_FieldInfo = 
{
	"UnicodeKanbun", &t1110_0_0_32854, &t1110_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1110_0_0_32854;
FieldInfo t1110_f116_FieldInfo = 
{
	"UnicodeBopomofoExtended", &t1110_0_0_32854, &t1110_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1110_0_0_32854;
FieldInfo t1110_f117_FieldInfo = 
{
	"UnicodeEnclosedCJKLettersandMonths", &t1110_0_0_32854, &t1110_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1110_0_0_32854;
FieldInfo t1110_f118_FieldInfo = 
{
	"UnicodeCJKCompatibility", &t1110_0_0_32854, &t1110_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1110_0_0_32854;
FieldInfo t1110_f119_FieldInfo = 
{
	"UnicodeCJKUnifiedIdeographsExtensionA", &t1110_0_0_32854, &t1110_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1110_0_0_32854;
FieldInfo t1110_f120_FieldInfo = 
{
	"UnicodeCJKUnifiedIdeographs", &t1110_0_0_32854, &t1110_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1110_0_0_32854;
FieldInfo t1110_f121_FieldInfo = 
{
	"UnicodeYiSyllables", &t1110_0_0_32854, &t1110_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1110_0_0_32854;
FieldInfo t1110_f122_FieldInfo = 
{
	"UnicodeYiRadicals", &t1110_0_0_32854, &t1110_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1110_0_0_32854;
FieldInfo t1110_f123_FieldInfo = 
{
	"UnicodeHangulSyllables", &t1110_0_0_32854, &t1110_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1110_0_0_32854;
FieldInfo t1110_f124_FieldInfo = 
{
	"UnicodeHighSurrogates", &t1110_0_0_32854, &t1110_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1110_0_0_32854;
FieldInfo t1110_f125_FieldInfo = 
{
	"UnicodeHighPrivateUseSurrogates", &t1110_0_0_32854, &t1110_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1110_0_0_32854;
FieldInfo t1110_f126_FieldInfo = 
{
	"UnicodeLowSurrogates", &t1110_0_0_32854, &t1110_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1110_0_0_32854;
FieldInfo t1110_f127_FieldInfo = 
{
	"UnicodePrivateUse", &t1110_0_0_32854, &t1110_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1110_0_0_32854;
FieldInfo t1110_f128_FieldInfo = 
{
	"UnicodeCJKCompatibilityIdeographs", &t1110_0_0_32854, &t1110_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1110_0_0_32854;
FieldInfo t1110_f129_FieldInfo = 
{
	"UnicodeAlphabeticPresentationForms", &t1110_0_0_32854, &t1110_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1110_0_0_32854;
FieldInfo t1110_f130_FieldInfo = 
{
	"UnicodeArabicPresentationFormsA", &t1110_0_0_32854, &t1110_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1110_0_0_32854;
FieldInfo t1110_f131_FieldInfo = 
{
	"UnicodeCombiningHalfMarks", &t1110_0_0_32854, &t1110_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1110_0_0_32854;
FieldInfo t1110_f132_FieldInfo = 
{
	"UnicodeCJKCompatibilityForms", &t1110_0_0_32854, &t1110_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1110_0_0_32854;
FieldInfo t1110_f133_FieldInfo = 
{
	"UnicodeSmallFormVariants", &t1110_0_0_32854, &t1110_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1110_0_0_32854;
FieldInfo t1110_f134_FieldInfo = 
{
	"UnicodeArabicPresentationFormsB", &t1110_0_0_32854, &t1110_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1110_0_0_32854;
FieldInfo t1110_f135_FieldInfo = 
{
	"UnicodeSpecials", &t1110_0_0_32854, &t1110_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1110_0_0_32854;
FieldInfo t1110_f136_FieldInfo = 
{
	"UnicodeHalfwidthandFullwidthForms", &t1110_0_0_32854, &t1110_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1110_0_0_32854;
FieldInfo t1110_f137_FieldInfo = 
{
	"UnicodeOldItalic", &t1110_0_0_32854, &t1110_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1110_0_0_32854;
FieldInfo t1110_f138_FieldInfo = 
{
	"UnicodeGothic", &t1110_0_0_32854, &t1110_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1110_0_0_32854;
FieldInfo t1110_f139_FieldInfo = 
{
	"UnicodeDeseret", &t1110_0_0_32854, &t1110_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1110_0_0_32854;
FieldInfo t1110_f140_FieldInfo = 
{
	"UnicodeByzantineMusicalSymbols", &t1110_0_0_32854, &t1110_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1110_0_0_32854;
FieldInfo t1110_f141_FieldInfo = 
{
	"UnicodeMusicalSymbols", &t1110_0_0_32854, &t1110_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1110_0_0_32854;
FieldInfo t1110_f142_FieldInfo = 
{
	"UnicodeMathematicalAlphanumericSymbols", &t1110_0_0_32854, &t1110_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1110_0_0_32854;
FieldInfo t1110_f143_FieldInfo = 
{
	"UnicodeCJKUnifiedIdeographsExtensionB", &t1110_0_0_32854, &t1110_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1110_0_0_32854;
FieldInfo t1110_f144_FieldInfo = 
{
	"UnicodeCJKCompatibilityIdeographsSupplement", &t1110_0_0_32854, &t1110_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1110_0_0_32854;
FieldInfo t1110_f145_FieldInfo = 
{
	"UnicodeTags", &t1110_0_0_32854, &t1110_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1110_0_0_32854;
FieldInfo t1110_f146_FieldInfo = 
{
	"LastValue", &t1110_0_0_32854, &t1110_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t1110_FIs[] =
{
	&t1110_f1_FieldInfo,
	&t1110_f2_FieldInfo,
	&t1110_f3_FieldInfo,
	&t1110_f4_FieldInfo,
	&t1110_f5_FieldInfo,
	&t1110_f6_FieldInfo,
	&t1110_f7_FieldInfo,
	&t1110_f8_FieldInfo,
	&t1110_f9_FieldInfo,
	&t1110_f10_FieldInfo,
	&t1110_f11_FieldInfo,
	&t1110_f12_FieldInfo,
	&t1110_f13_FieldInfo,
	&t1110_f14_FieldInfo,
	&t1110_f15_FieldInfo,
	&t1110_f16_FieldInfo,
	&t1110_f17_FieldInfo,
	&t1110_f18_FieldInfo,
	&t1110_f19_FieldInfo,
	&t1110_f20_FieldInfo,
	&t1110_f21_FieldInfo,
	&t1110_f22_FieldInfo,
	&t1110_f23_FieldInfo,
	&t1110_f24_FieldInfo,
	&t1110_f25_FieldInfo,
	&t1110_f26_FieldInfo,
	&t1110_f27_FieldInfo,
	&t1110_f28_FieldInfo,
	&t1110_f29_FieldInfo,
	&t1110_f30_FieldInfo,
	&t1110_f31_FieldInfo,
	&t1110_f32_FieldInfo,
	&t1110_f33_FieldInfo,
	&t1110_f34_FieldInfo,
	&t1110_f35_FieldInfo,
	&t1110_f36_FieldInfo,
	&t1110_f37_FieldInfo,
	&t1110_f38_FieldInfo,
	&t1110_f39_FieldInfo,
	&t1110_f40_FieldInfo,
	&t1110_f41_FieldInfo,
	&t1110_f42_FieldInfo,
	&t1110_f43_FieldInfo,
	&t1110_f44_FieldInfo,
	&t1110_f45_FieldInfo,
	&t1110_f46_FieldInfo,
	&t1110_f47_FieldInfo,
	&t1110_f48_FieldInfo,
	&t1110_f49_FieldInfo,
	&t1110_f50_FieldInfo,
	&t1110_f51_FieldInfo,
	&t1110_f52_FieldInfo,
	&t1110_f53_FieldInfo,
	&t1110_f54_FieldInfo,
	&t1110_f55_FieldInfo,
	&t1110_f56_FieldInfo,
	&t1110_f57_FieldInfo,
	&t1110_f58_FieldInfo,
	&t1110_f59_FieldInfo,
	&t1110_f60_FieldInfo,
	&t1110_f61_FieldInfo,
	&t1110_f62_FieldInfo,
	&t1110_f63_FieldInfo,
	&t1110_f64_FieldInfo,
	&t1110_f65_FieldInfo,
	&t1110_f66_FieldInfo,
	&t1110_f67_FieldInfo,
	&t1110_f68_FieldInfo,
	&t1110_f69_FieldInfo,
	&t1110_f70_FieldInfo,
	&t1110_f71_FieldInfo,
	&t1110_f72_FieldInfo,
	&t1110_f73_FieldInfo,
	&t1110_f74_FieldInfo,
	&t1110_f75_FieldInfo,
	&t1110_f76_FieldInfo,
	&t1110_f77_FieldInfo,
	&t1110_f78_FieldInfo,
	&t1110_f79_FieldInfo,
	&t1110_f80_FieldInfo,
	&t1110_f81_FieldInfo,
	&t1110_f82_FieldInfo,
	&t1110_f83_FieldInfo,
	&t1110_f84_FieldInfo,
	&t1110_f85_FieldInfo,
	&t1110_f86_FieldInfo,
	&t1110_f87_FieldInfo,
	&t1110_f88_FieldInfo,
	&t1110_f89_FieldInfo,
	&t1110_f90_FieldInfo,
	&t1110_f91_FieldInfo,
	&t1110_f92_FieldInfo,
	&t1110_f93_FieldInfo,
	&t1110_f94_FieldInfo,
	&t1110_f95_FieldInfo,
	&t1110_f96_FieldInfo,
	&t1110_f97_FieldInfo,
	&t1110_f98_FieldInfo,
	&t1110_f99_FieldInfo,
	&t1110_f100_FieldInfo,
	&t1110_f101_FieldInfo,
	&t1110_f102_FieldInfo,
	&t1110_f103_FieldInfo,
	&t1110_f104_FieldInfo,
	&t1110_f105_FieldInfo,
	&t1110_f106_FieldInfo,
	&t1110_f107_FieldInfo,
	&t1110_f108_FieldInfo,
	&t1110_f109_FieldInfo,
	&t1110_f110_FieldInfo,
	&t1110_f111_FieldInfo,
	&t1110_f112_FieldInfo,
	&t1110_f113_FieldInfo,
	&t1110_f114_FieldInfo,
	&t1110_f115_FieldInfo,
	&t1110_f116_FieldInfo,
	&t1110_f117_FieldInfo,
	&t1110_f118_FieldInfo,
	&t1110_f119_FieldInfo,
	&t1110_f120_FieldInfo,
	&t1110_f121_FieldInfo,
	&t1110_f122_FieldInfo,
	&t1110_f123_FieldInfo,
	&t1110_f124_FieldInfo,
	&t1110_f125_FieldInfo,
	&t1110_f126_FieldInfo,
	&t1110_f127_FieldInfo,
	&t1110_f128_FieldInfo,
	&t1110_f129_FieldInfo,
	&t1110_f130_FieldInfo,
	&t1110_f131_FieldInfo,
	&t1110_f132_FieldInfo,
	&t1110_f133_FieldInfo,
	&t1110_f134_FieldInfo,
	&t1110_f135_FieldInfo,
	&t1110_f136_FieldInfo,
	&t1110_f137_FieldInfo,
	&t1110_f138_FieldInfo,
	&t1110_f139_FieldInfo,
	&t1110_f140_FieldInfo,
	&t1110_f141_FieldInfo,
	&t1110_f142_FieldInfo,
	&t1110_f143_FieldInfo,
	&t1110_f144_FieldInfo,
	&t1110_f145_FieldInfo,
	&t1110_f146_FieldInfo,
	NULL
};
static const uint16_t t1110_f2_DefaultValueData = 0;
extern Il2CppType t764_0_0_0;
static Il2CppFieldDefaultValueEntry t1110_f2_DefaultValue = 
{
	&t1110_f2_FieldInfo, { (char*)&t1110_f2_DefaultValueData, &t764_0_0_0 }};
static const uint16_t t1110_f3_DefaultValueData = 1;
static Il2CppFieldDefaultValueEntry t1110_f3_DefaultValue = 
{
	&t1110_f3_FieldInfo, { (char*)&t1110_f3_DefaultValueData, &t764_0_0_0 }};
static const uint16_t t1110_f4_DefaultValueData = 2;
static Il2CppFieldDefaultValueEntry t1110_f4_DefaultValue = 
{
	&t1110_f4_FieldInfo, { (char*)&t1110_f4_DefaultValueData, &t764_0_0_0 }};
static const uint16_t t1110_f5_DefaultValueData = 3;
static Il2CppFieldDefaultValueEntry t1110_f5_DefaultValue = 
{
	&t1110_f5_FieldInfo, { (char*)&t1110_f5_DefaultValueData, &t764_0_0_0 }};
static const uint16_t t1110_f6_DefaultValueData = 4;
static Il2CppFieldDefaultValueEntry t1110_f6_DefaultValue = 
{
	&t1110_f6_FieldInfo, { (char*)&t1110_f6_DefaultValueData, &t764_0_0_0 }};
static const uint16_t t1110_f7_DefaultValueData = 5;
static Il2CppFieldDefaultValueEntry t1110_f7_DefaultValue = 
{
	&t1110_f7_FieldInfo, { (char*)&t1110_f7_DefaultValueData, &t764_0_0_0 }};
static const uint16_t t1110_f8_DefaultValueData = 6;
static Il2CppFieldDefaultValueEntry t1110_f8_DefaultValue = 
{
	&t1110_f8_FieldInfo, { (char*)&t1110_f8_DefaultValueData, &t764_0_0_0 }};
static const uint16_t t1110_f9_DefaultValueData = 7;
static Il2CppFieldDefaultValueEntry t1110_f9_DefaultValue = 
{
	&t1110_f9_FieldInfo, { (char*)&t1110_f9_DefaultValueData, &t764_0_0_0 }};
static const uint16_t t1110_f10_DefaultValueData = 8;
static Il2CppFieldDefaultValueEntry t1110_f10_DefaultValue = 
{
	&t1110_f10_FieldInfo, { (char*)&t1110_f10_DefaultValueData, &t764_0_0_0 }};
static const uint16_t t1110_f11_DefaultValueData = 9;
static Il2CppFieldDefaultValueEntry t1110_f11_DefaultValue = 
{
	&t1110_f11_FieldInfo, { (char*)&t1110_f11_DefaultValueData, &t764_0_0_0 }};
static const uint16_t t1110_f12_DefaultValueData = 10;
static Il2CppFieldDefaultValueEntry t1110_f12_DefaultValue = 
{
	&t1110_f12_FieldInfo, { (char*)&t1110_f12_DefaultValueData, &t764_0_0_0 }};
static const uint16_t t1110_f13_DefaultValueData = 11;
static Il2CppFieldDefaultValueEntry t1110_f13_DefaultValue = 
{
	&t1110_f13_FieldInfo, { (char*)&t1110_f13_DefaultValueData, &t764_0_0_0 }};
static const uint16_t t1110_f14_DefaultValueData = 12;
static Il2CppFieldDefaultValueEntry t1110_f14_DefaultValue = 
{
	&t1110_f14_FieldInfo, { (char*)&t1110_f14_DefaultValueData, &t764_0_0_0 }};
static const uint16_t t1110_f15_DefaultValueData = 13;
static Il2CppFieldDefaultValueEntry t1110_f15_DefaultValue = 
{
	&t1110_f15_FieldInfo, { (char*)&t1110_f15_DefaultValueData, &t764_0_0_0 }};
static const uint16_t t1110_f16_DefaultValueData = 14;
static Il2CppFieldDefaultValueEntry t1110_f16_DefaultValue = 
{
	&t1110_f16_FieldInfo, { (char*)&t1110_f16_DefaultValueData, &t764_0_0_0 }};
static const uint16_t t1110_f17_DefaultValueData = 15;
static Il2CppFieldDefaultValueEntry t1110_f17_DefaultValue = 
{
	&t1110_f17_FieldInfo, { (char*)&t1110_f17_DefaultValueData, &t764_0_0_0 }};
static const uint16_t t1110_f18_DefaultValueData = 16;
static Il2CppFieldDefaultValueEntry t1110_f18_DefaultValue = 
{
	&t1110_f18_FieldInfo, { (char*)&t1110_f18_DefaultValueData, &t764_0_0_0 }};
static const uint16_t t1110_f19_DefaultValueData = 17;
static Il2CppFieldDefaultValueEntry t1110_f19_DefaultValue = 
{
	&t1110_f19_FieldInfo, { (char*)&t1110_f19_DefaultValueData, &t764_0_0_0 }};
static const uint16_t t1110_f20_DefaultValueData = 18;
static Il2CppFieldDefaultValueEntry t1110_f20_DefaultValue = 
{
	&t1110_f20_FieldInfo, { (char*)&t1110_f20_DefaultValueData, &t764_0_0_0 }};
static const uint16_t t1110_f21_DefaultValueData = 19;
static Il2CppFieldDefaultValueEntry t1110_f21_DefaultValue = 
{
	&t1110_f21_FieldInfo, { (char*)&t1110_f21_DefaultValueData, &t764_0_0_0 }};
static const uint16_t t1110_f22_DefaultValueData = 20;
static Il2CppFieldDefaultValueEntry t1110_f22_DefaultValue = 
{
	&t1110_f22_FieldInfo, { (char*)&t1110_f22_DefaultValueData, &t764_0_0_0 }};
static const uint16_t t1110_f23_DefaultValueData = 21;
static Il2CppFieldDefaultValueEntry t1110_f23_DefaultValue = 
{
	&t1110_f23_FieldInfo, { (char*)&t1110_f23_DefaultValueData, &t764_0_0_0 }};
static const uint16_t t1110_f24_DefaultValueData = 22;
static Il2CppFieldDefaultValueEntry t1110_f24_DefaultValue = 
{
	&t1110_f24_FieldInfo, { (char*)&t1110_f24_DefaultValueData, &t764_0_0_0 }};
static const uint16_t t1110_f25_DefaultValueData = 23;
static Il2CppFieldDefaultValueEntry t1110_f25_DefaultValue = 
{
	&t1110_f25_FieldInfo, { (char*)&t1110_f25_DefaultValueData, &t764_0_0_0 }};
static const uint16_t t1110_f26_DefaultValueData = 24;
static Il2CppFieldDefaultValueEntry t1110_f26_DefaultValue = 
{
	&t1110_f26_FieldInfo, { (char*)&t1110_f26_DefaultValueData, &t764_0_0_0 }};
static const uint16_t t1110_f27_DefaultValueData = 25;
static Il2CppFieldDefaultValueEntry t1110_f27_DefaultValue = 
{
	&t1110_f27_FieldInfo, { (char*)&t1110_f27_DefaultValueData, &t764_0_0_0 }};
static const uint16_t t1110_f28_DefaultValueData = 26;
static Il2CppFieldDefaultValueEntry t1110_f28_DefaultValue = 
{
	&t1110_f28_FieldInfo, { (char*)&t1110_f28_DefaultValueData, &t764_0_0_0 }};
static const uint16_t t1110_f29_DefaultValueData = 27;
static Il2CppFieldDefaultValueEntry t1110_f29_DefaultValue = 
{
	&t1110_f29_FieldInfo, { (char*)&t1110_f29_DefaultValueData, &t764_0_0_0 }};
static const uint16_t t1110_f30_DefaultValueData = 28;
static Il2CppFieldDefaultValueEntry t1110_f30_DefaultValue = 
{
	&t1110_f30_FieldInfo, { (char*)&t1110_f30_DefaultValueData, &t764_0_0_0 }};
static const uint16_t t1110_f31_DefaultValueData = 29;
static Il2CppFieldDefaultValueEntry t1110_f31_DefaultValue = 
{
	&t1110_f31_FieldInfo, { (char*)&t1110_f31_DefaultValueData, &t764_0_0_0 }};
static const uint16_t t1110_f32_DefaultValueData = 30;
static Il2CppFieldDefaultValueEntry t1110_f32_DefaultValue = 
{
	&t1110_f32_FieldInfo, { (char*)&t1110_f32_DefaultValueData, &t764_0_0_0 }};
static const uint16_t t1110_f33_DefaultValueData = 31;
static Il2CppFieldDefaultValueEntry t1110_f33_DefaultValue = 
{
	&t1110_f33_FieldInfo, { (char*)&t1110_f33_DefaultValueData, &t764_0_0_0 }};
static const uint16_t t1110_f34_DefaultValueData = 32;
static Il2CppFieldDefaultValueEntry t1110_f34_DefaultValue = 
{
	&t1110_f34_FieldInfo, { (char*)&t1110_f34_DefaultValueData, &t764_0_0_0 }};
static const uint16_t t1110_f35_DefaultValueData = 33;
static Il2CppFieldDefaultValueEntry t1110_f35_DefaultValue = 
{
	&t1110_f35_FieldInfo, { (char*)&t1110_f35_DefaultValueData, &t764_0_0_0 }};
static const uint16_t t1110_f36_DefaultValueData = 34;
static Il2CppFieldDefaultValueEntry t1110_f36_DefaultValue = 
{
	&t1110_f36_FieldInfo, { (char*)&t1110_f36_DefaultValueData, &t764_0_0_0 }};
static const uint16_t t1110_f37_DefaultValueData = 35;
static Il2CppFieldDefaultValueEntry t1110_f37_DefaultValue = 
{
	&t1110_f37_FieldInfo, { (char*)&t1110_f37_DefaultValueData, &t764_0_0_0 }};
static const uint16_t t1110_f38_DefaultValueData = 36;
static Il2CppFieldDefaultValueEntry t1110_f38_DefaultValue = 
{
	&t1110_f38_FieldInfo, { (char*)&t1110_f38_DefaultValueData, &t764_0_0_0 }};
static const uint16_t t1110_f39_DefaultValueData = 37;
static Il2CppFieldDefaultValueEntry t1110_f39_DefaultValue = 
{
	&t1110_f39_FieldInfo, { (char*)&t1110_f39_DefaultValueData, &t764_0_0_0 }};
static const uint16_t t1110_f40_DefaultValueData = 38;
static Il2CppFieldDefaultValueEntry t1110_f40_DefaultValue = 
{
	&t1110_f40_FieldInfo, { (char*)&t1110_f40_DefaultValueData, &t764_0_0_0 }};
static const uint16_t t1110_f41_DefaultValueData = 39;
static Il2CppFieldDefaultValueEntry t1110_f41_DefaultValue = 
{
	&t1110_f41_FieldInfo, { (char*)&t1110_f41_DefaultValueData, &t764_0_0_0 }};
static const uint16_t t1110_f42_DefaultValueData = 40;
static Il2CppFieldDefaultValueEntry t1110_f42_DefaultValue = 
{
	&t1110_f42_FieldInfo, { (char*)&t1110_f42_DefaultValueData, &t764_0_0_0 }};
static const uint16_t t1110_f43_DefaultValueData = 41;
static Il2CppFieldDefaultValueEntry t1110_f43_DefaultValue = 
{
	&t1110_f43_FieldInfo, { (char*)&t1110_f43_DefaultValueData, &t764_0_0_0 }};
static const uint16_t t1110_f44_DefaultValueData = 42;
static Il2CppFieldDefaultValueEntry t1110_f44_DefaultValue = 
{
	&t1110_f44_FieldInfo, { (char*)&t1110_f44_DefaultValueData, &t764_0_0_0 }};
static const uint16_t t1110_f45_DefaultValueData = 43;
static Il2CppFieldDefaultValueEntry t1110_f45_DefaultValue = 
{
	&t1110_f45_FieldInfo, { (char*)&t1110_f45_DefaultValueData, &t764_0_0_0 }};
static const uint16_t t1110_f46_DefaultValueData = 44;
static Il2CppFieldDefaultValueEntry t1110_f46_DefaultValue = 
{
	&t1110_f46_FieldInfo, { (char*)&t1110_f46_DefaultValueData, &t764_0_0_0 }};
static const uint16_t t1110_f47_DefaultValueData = 45;
static Il2CppFieldDefaultValueEntry t1110_f47_DefaultValue = 
{
	&t1110_f47_FieldInfo, { (char*)&t1110_f47_DefaultValueData, &t764_0_0_0 }};
static const uint16_t t1110_f48_DefaultValueData = 46;
static Il2CppFieldDefaultValueEntry t1110_f48_DefaultValue = 
{
	&t1110_f48_FieldInfo, { (char*)&t1110_f48_DefaultValueData, &t764_0_0_0 }};
static const uint16_t t1110_f49_DefaultValueData = 47;
static Il2CppFieldDefaultValueEntry t1110_f49_DefaultValue = 
{
	&t1110_f49_FieldInfo, { (char*)&t1110_f49_DefaultValueData, &t764_0_0_0 }};
static const uint16_t t1110_f50_DefaultValueData = 48;
static Il2CppFieldDefaultValueEntry t1110_f50_DefaultValue = 
{
	&t1110_f50_FieldInfo, { (char*)&t1110_f50_DefaultValueData, &t764_0_0_0 }};
static const uint16_t t1110_f51_DefaultValueData = 49;
static Il2CppFieldDefaultValueEntry t1110_f51_DefaultValue = 
{
	&t1110_f51_FieldInfo, { (char*)&t1110_f51_DefaultValueData, &t764_0_0_0 }};
static const uint16_t t1110_f52_DefaultValueData = 50;
static Il2CppFieldDefaultValueEntry t1110_f52_DefaultValue = 
{
	&t1110_f52_FieldInfo, { (char*)&t1110_f52_DefaultValueData, &t764_0_0_0 }};
static const uint16_t t1110_f53_DefaultValueData = 51;
static Il2CppFieldDefaultValueEntry t1110_f53_DefaultValue = 
{
	&t1110_f53_FieldInfo, { (char*)&t1110_f53_DefaultValueData, &t764_0_0_0 }};
static const uint16_t t1110_f54_DefaultValueData = 52;
static Il2CppFieldDefaultValueEntry t1110_f54_DefaultValue = 
{
	&t1110_f54_FieldInfo, { (char*)&t1110_f54_DefaultValueData, &t764_0_0_0 }};
static const uint16_t t1110_f55_DefaultValueData = 53;
static Il2CppFieldDefaultValueEntry t1110_f55_DefaultValue = 
{
	&t1110_f55_FieldInfo, { (char*)&t1110_f55_DefaultValueData, &t764_0_0_0 }};
static const uint16_t t1110_f56_DefaultValueData = 54;
static Il2CppFieldDefaultValueEntry t1110_f56_DefaultValue = 
{
	&t1110_f56_FieldInfo, { (char*)&t1110_f56_DefaultValueData, &t764_0_0_0 }};
static const uint16_t t1110_f57_DefaultValueData = 55;
static Il2CppFieldDefaultValueEntry t1110_f57_DefaultValue = 
{
	&t1110_f57_FieldInfo, { (char*)&t1110_f57_DefaultValueData, &t764_0_0_0 }};
static const uint16_t t1110_f58_DefaultValueData = 56;
static Il2CppFieldDefaultValueEntry t1110_f58_DefaultValue = 
{
	&t1110_f58_FieldInfo, { (char*)&t1110_f58_DefaultValueData, &t764_0_0_0 }};
static const uint16_t t1110_f59_DefaultValueData = 57;
static Il2CppFieldDefaultValueEntry t1110_f59_DefaultValue = 
{
	&t1110_f59_FieldInfo, { (char*)&t1110_f59_DefaultValueData, &t764_0_0_0 }};
static const uint16_t t1110_f60_DefaultValueData = 58;
static Il2CppFieldDefaultValueEntry t1110_f60_DefaultValue = 
{
	&t1110_f60_FieldInfo, { (char*)&t1110_f60_DefaultValueData, &t764_0_0_0 }};
static const uint16_t t1110_f61_DefaultValueData = 59;
static Il2CppFieldDefaultValueEntry t1110_f61_DefaultValue = 
{
	&t1110_f61_FieldInfo, { (char*)&t1110_f61_DefaultValueData, &t764_0_0_0 }};
static const uint16_t t1110_f62_DefaultValueData = 60;
static Il2CppFieldDefaultValueEntry t1110_f62_DefaultValue = 
{
	&t1110_f62_FieldInfo, { (char*)&t1110_f62_DefaultValueData, &t764_0_0_0 }};
static const uint16_t t1110_f63_DefaultValueData = 61;
static Il2CppFieldDefaultValueEntry t1110_f63_DefaultValue = 
{
	&t1110_f63_FieldInfo, { (char*)&t1110_f63_DefaultValueData, &t764_0_0_0 }};
static const uint16_t t1110_f64_DefaultValueData = 62;
static Il2CppFieldDefaultValueEntry t1110_f64_DefaultValue = 
{
	&t1110_f64_FieldInfo, { (char*)&t1110_f64_DefaultValueData, &t764_0_0_0 }};
static const uint16_t t1110_f65_DefaultValueData = 63;
static Il2CppFieldDefaultValueEntry t1110_f65_DefaultValue = 
{
	&t1110_f65_FieldInfo, { (char*)&t1110_f65_DefaultValueData, &t764_0_0_0 }};
static const uint16_t t1110_f66_DefaultValueData = 64;
static Il2CppFieldDefaultValueEntry t1110_f66_DefaultValue = 
{
	&t1110_f66_FieldInfo, { (char*)&t1110_f66_DefaultValueData, &t764_0_0_0 }};
static const uint16_t t1110_f67_DefaultValueData = 65;
static Il2CppFieldDefaultValueEntry t1110_f67_DefaultValue = 
{
	&t1110_f67_FieldInfo, { (char*)&t1110_f67_DefaultValueData, &t764_0_0_0 }};
static const uint16_t t1110_f68_DefaultValueData = 66;
static Il2CppFieldDefaultValueEntry t1110_f68_DefaultValue = 
{
	&t1110_f68_FieldInfo, { (char*)&t1110_f68_DefaultValueData, &t764_0_0_0 }};
static const uint16_t t1110_f69_DefaultValueData = 67;
static Il2CppFieldDefaultValueEntry t1110_f69_DefaultValue = 
{
	&t1110_f69_FieldInfo, { (char*)&t1110_f69_DefaultValueData, &t764_0_0_0 }};
static const uint16_t t1110_f70_DefaultValueData = 68;
static Il2CppFieldDefaultValueEntry t1110_f70_DefaultValue = 
{
	&t1110_f70_FieldInfo, { (char*)&t1110_f70_DefaultValueData, &t764_0_0_0 }};
static const uint16_t t1110_f71_DefaultValueData = 69;
static Il2CppFieldDefaultValueEntry t1110_f71_DefaultValue = 
{
	&t1110_f71_FieldInfo, { (char*)&t1110_f71_DefaultValueData, &t764_0_0_0 }};
static const uint16_t t1110_f72_DefaultValueData = 70;
static Il2CppFieldDefaultValueEntry t1110_f72_DefaultValue = 
{
	&t1110_f72_FieldInfo, { (char*)&t1110_f72_DefaultValueData, &t764_0_0_0 }};
static const uint16_t t1110_f73_DefaultValueData = 71;
static Il2CppFieldDefaultValueEntry t1110_f73_DefaultValue = 
{
	&t1110_f73_FieldInfo, { (char*)&t1110_f73_DefaultValueData, &t764_0_0_0 }};
static const uint16_t t1110_f74_DefaultValueData = 72;
static Il2CppFieldDefaultValueEntry t1110_f74_DefaultValue = 
{
	&t1110_f74_FieldInfo, { (char*)&t1110_f74_DefaultValueData, &t764_0_0_0 }};
static const uint16_t t1110_f75_DefaultValueData = 73;
static Il2CppFieldDefaultValueEntry t1110_f75_DefaultValue = 
{
	&t1110_f75_FieldInfo, { (char*)&t1110_f75_DefaultValueData, &t764_0_0_0 }};
static const uint16_t t1110_f76_DefaultValueData = 74;
static Il2CppFieldDefaultValueEntry t1110_f76_DefaultValue = 
{
	&t1110_f76_FieldInfo, { (char*)&t1110_f76_DefaultValueData, &t764_0_0_0 }};
static const uint16_t t1110_f77_DefaultValueData = 75;
static Il2CppFieldDefaultValueEntry t1110_f77_DefaultValue = 
{
	&t1110_f77_FieldInfo, { (char*)&t1110_f77_DefaultValueData, &t764_0_0_0 }};
static const uint16_t t1110_f78_DefaultValueData = 76;
static Il2CppFieldDefaultValueEntry t1110_f78_DefaultValue = 
{
	&t1110_f78_FieldInfo, { (char*)&t1110_f78_DefaultValueData, &t764_0_0_0 }};
static const uint16_t t1110_f79_DefaultValueData = 77;
static Il2CppFieldDefaultValueEntry t1110_f79_DefaultValue = 
{
	&t1110_f79_FieldInfo, { (char*)&t1110_f79_DefaultValueData, &t764_0_0_0 }};
static const uint16_t t1110_f80_DefaultValueData = 78;
static Il2CppFieldDefaultValueEntry t1110_f80_DefaultValue = 
{
	&t1110_f80_FieldInfo, { (char*)&t1110_f80_DefaultValueData, &t764_0_0_0 }};
static const uint16_t t1110_f81_DefaultValueData = 79;
static Il2CppFieldDefaultValueEntry t1110_f81_DefaultValue = 
{
	&t1110_f81_FieldInfo, { (char*)&t1110_f81_DefaultValueData, &t764_0_0_0 }};
static const uint16_t t1110_f82_DefaultValueData = 80;
static Il2CppFieldDefaultValueEntry t1110_f82_DefaultValue = 
{
	&t1110_f82_FieldInfo, { (char*)&t1110_f82_DefaultValueData, &t764_0_0_0 }};
static const uint16_t t1110_f83_DefaultValueData = 81;
static Il2CppFieldDefaultValueEntry t1110_f83_DefaultValue = 
{
	&t1110_f83_FieldInfo, { (char*)&t1110_f83_DefaultValueData, &t764_0_0_0 }};
static const uint16_t t1110_f84_DefaultValueData = 82;
static Il2CppFieldDefaultValueEntry t1110_f84_DefaultValue = 
{
	&t1110_f84_FieldInfo, { (char*)&t1110_f84_DefaultValueData, &t764_0_0_0 }};
static const uint16_t t1110_f85_DefaultValueData = 83;
static Il2CppFieldDefaultValueEntry t1110_f85_DefaultValue = 
{
	&t1110_f85_FieldInfo, { (char*)&t1110_f85_DefaultValueData, &t764_0_0_0 }};
static const uint16_t t1110_f86_DefaultValueData = 84;
static Il2CppFieldDefaultValueEntry t1110_f86_DefaultValue = 
{
	&t1110_f86_FieldInfo, { (char*)&t1110_f86_DefaultValueData, &t764_0_0_0 }};
static const uint16_t t1110_f87_DefaultValueData = 85;
static Il2CppFieldDefaultValueEntry t1110_f87_DefaultValue = 
{
	&t1110_f87_FieldInfo, { (char*)&t1110_f87_DefaultValueData, &t764_0_0_0 }};
static const uint16_t t1110_f88_DefaultValueData = 86;
static Il2CppFieldDefaultValueEntry t1110_f88_DefaultValue = 
{
	&t1110_f88_FieldInfo, { (char*)&t1110_f88_DefaultValueData, &t764_0_0_0 }};
static const uint16_t t1110_f89_DefaultValueData = 87;
static Il2CppFieldDefaultValueEntry t1110_f89_DefaultValue = 
{
	&t1110_f89_FieldInfo, { (char*)&t1110_f89_DefaultValueData, &t764_0_0_0 }};
static const uint16_t t1110_f90_DefaultValueData = 88;
static Il2CppFieldDefaultValueEntry t1110_f90_DefaultValue = 
{
	&t1110_f90_FieldInfo, { (char*)&t1110_f90_DefaultValueData, &t764_0_0_0 }};
static const uint16_t t1110_f91_DefaultValueData = 89;
static Il2CppFieldDefaultValueEntry t1110_f91_DefaultValue = 
{
	&t1110_f91_FieldInfo, { (char*)&t1110_f91_DefaultValueData, &t764_0_0_0 }};
static const uint16_t t1110_f92_DefaultValueData = 90;
static Il2CppFieldDefaultValueEntry t1110_f92_DefaultValue = 
{
	&t1110_f92_FieldInfo, { (char*)&t1110_f92_DefaultValueData, &t764_0_0_0 }};
static const uint16_t t1110_f93_DefaultValueData = 91;
static Il2CppFieldDefaultValueEntry t1110_f93_DefaultValue = 
{
	&t1110_f93_FieldInfo, { (char*)&t1110_f93_DefaultValueData, &t764_0_0_0 }};
static const uint16_t t1110_f94_DefaultValueData = 92;
static Il2CppFieldDefaultValueEntry t1110_f94_DefaultValue = 
{
	&t1110_f94_FieldInfo, { (char*)&t1110_f94_DefaultValueData, &t764_0_0_0 }};
static const uint16_t t1110_f95_DefaultValueData = 93;
static Il2CppFieldDefaultValueEntry t1110_f95_DefaultValue = 
{
	&t1110_f95_FieldInfo, { (char*)&t1110_f95_DefaultValueData, &t764_0_0_0 }};
static const uint16_t t1110_f96_DefaultValueData = 94;
static Il2CppFieldDefaultValueEntry t1110_f96_DefaultValue = 
{
	&t1110_f96_FieldInfo, { (char*)&t1110_f96_DefaultValueData, &t764_0_0_0 }};
static const uint16_t t1110_f97_DefaultValueData = 95;
static Il2CppFieldDefaultValueEntry t1110_f97_DefaultValue = 
{
	&t1110_f97_FieldInfo, { (char*)&t1110_f97_DefaultValueData, &t764_0_0_0 }};
static const uint16_t t1110_f98_DefaultValueData = 96;
static Il2CppFieldDefaultValueEntry t1110_f98_DefaultValue = 
{
	&t1110_f98_FieldInfo, { (char*)&t1110_f98_DefaultValueData, &t764_0_0_0 }};
static const uint16_t t1110_f99_DefaultValueData = 97;
static Il2CppFieldDefaultValueEntry t1110_f99_DefaultValue = 
{
	&t1110_f99_FieldInfo, { (char*)&t1110_f99_DefaultValueData, &t764_0_0_0 }};
static const uint16_t t1110_f100_DefaultValueData = 98;
static Il2CppFieldDefaultValueEntry t1110_f100_DefaultValue = 
{
	&t1110_f100_FieldInfo, { (char*)&t1110_f100_DefaultValueData, &t764_0_0_0 }};
static const uint16_t t1110_f101_DefaultValueData = 99;
static Il2CppFieldDefaultValueEntry t1110_f101_DefaultValue = 
{
	&t1110_f101_FieldInfo, { (char*)&t1110_f101_DefaultValueData, &t764_0_0_0 }};
static const uint16_t t1110_f102_DefaultValueData = 100;
static Il2CppFieldDefaultValueEntry t1110_f102_DefaultValue = 
{
	&t1110_f102_FieldInfo, { (char*)&t1110_f102_DefaultValueData, &t764_0_0_0 }};
static const uint16_t t1110_f103_DefaultValueData = 101;
static Il2CppFieldDefaultValueEntry t1110_f103_DefaultValue = 
{
	&t1110_f103_FieldInfo, { (char*)&t1110_f103_DefaultValueData, &t764_0_0_0 }};
static const uint16_t t1110_f104_DefaultValueData = 102;
static Il2CppFieldDefaultValueEntry t1110_f104_DefaultValue = 
{
	&t1110_f104_FieldInfo, { (char*)&t1110_f104_DefaultValueData, &t764_0_0_0 }};
static const uint16_t t1110_f105_DefaultValueData = 103;
static Il2CppFieldDefaultValueEntry t1110_f105_DefaultValue = 
{
	&t1110_f105_FieldInfo, { (char*)&t1110_f105_DefaultValueData, &t764_0_0_0 }};
static const uint16_t t1110_f106_DefaultValueData = 104;
static Il2CppFieldDefaultValueEntry t1110_f106_DefaultValue = 
{
	&t1110_f106_FieldInfo, { (char*)&t1110_f106_DefaultValueData, &t764_0_0_0 }};
static const uint16_t t1110_f107_DefaultValueData = 105;
static Il2CppFieldDefaultValueEntry t1110_f107_DefaultValue = 
{
	&t1110_f107_FieldInfo, { (char*)&t1110_f107_DefaultValueData, &t764_0_0_0 }};
static const uint16_t t1110_f108_DefaultValueData = 106;
static Il2CppFieldDefaultValueEntry t1110_f108_DefaultValue = 
{
	&t1110_f108_FieldInfo, { (char*)&t1110_f108_DefaultValueData, &t764_0_0_0 }};
static const uint16_t t1110_f109_DefaultValueData = 107;
static Il2CppFieldDefaultValueEntry t1110_f109_DefaultValue = 
{
	&t1110_f109_FieldInfo, { (char*)&t1110_f109_DefaultValueData, &t764_0_0_0 }};
static const uint16_t t1110_f110_DefaultValueData = 108;
static Il2CppFieldDefaultValueEntry t1110_f110_DefaultValue = 
{
	&t1110_f110_FieldInfo, { (char*)&t1110_f110_DefaultValueData, &t764_0_0_0 }};
static const uint16_t t1110_f111_DefaultValueData = 109;
static Il2CppFieldDefaultValueEntry t1110_f111_DefaultValue = 
{
	&t1110_f111_FieldInfo, { (char*)&t1110_f111_DefaultValueData, &t764_0_0_0 }};
static const uint16_t t1110_f112_DefaultValueData = 110;
static Il2CppFieldDefaultValueEntry t1110_f112_DefaultValue = 
{
	&t1110_f112_FieldInfo, { (char*)&t1110_f112_DefaultValueData, &t764_0_0_0 }};
static const uint16_t t1110_f113_DefaultValueData = 111;
static Il2CppFieldDefaultValueEntry t1110_f113_DefaultValue = 
{
	&t1110_f113_FieldInfo, { (char*)&t1110_f113_DefaultValueData, &t764_0_0_0 }};
static const uint16_t t1110_f114_DefaultValueData = 112;
static Il2CppFieldDefaultValueEntry t1110_f114_DefaultValue = 
{
	&t1110_f114_FieldInfo, { (char*)&t1110_f114_DefaultValueData, &t764_0_0_0 }};
static const uint16_t t1110_f115_DefaultValueData = 113;
static Il2CppFieldDefaultValueEntry t1110_f115_DefaultValue = 
{
	&t1110_f115_FieldInfo, { (char*)&t1110_f115_DefaultValueData, &t764_0_0_0 }};
static const uint16_t t1110_f116_DefaultValueData = 114;
static Il2CppFieldDefaultValueEntry t1110_f116_DefaultValue = 
{
	&t1110_f116_FieldInfo, { (char*)&t1110_f116_DefaultValueData, &t764_0_0_0 }};
static const uint16_t t1110_f117_DefaultValueData = 115;
static Il2CppFieldDefaultValueEntry t1110_f117_DefaultValue = 
{
	&t1110_f117_FieldInfo, { (char*)&t1110_f117_DefaultValueData, &t764_0_0_0 }};
static const uint16_t t1110_f118_DefaultValueData = 116;
static Il2CppFieldDefaultValueEntry t1110_f118_DefaultValue = 
{
	&t1110_f118_FieldInfo, { (char*)&t1110_f118_DefaultValueData, &t764_0_0_0 }};
static const uint16_t t1110_f119_DefaultValueData = 117;
static Il2CppFieldDefaultValueEntry t1110_f119_DefaultValue = 
{
	&t1110_f119_FieldInfo, { (char*)&t1110_f119_DefaultValueData, &t764_0_0_0 }};
static const uint16_t t1110_f120_DefaultValueData = 118;
static Il2CppFieldDefaultValueEntry t1110_f120_DefaultValue = 
{
	&t1110_f120_FieldInfo, { (char*)&t1110_f120_DefaultValueData, &t764_0_0_0 }};
static const uint16_t t1110_f121_DefaultValueData = 119;
static Il2CppFieldDefaultValueEntry t1110_f121_DefaultValue = 
{
	&t1110_f121_FieldInfo, { (char*)&t1110_f121_DefaultValueData, &t764_0_0_0 }};
static const uint16_t t1110_f122_DefaultValueData = 120;
static Il2CppFieldDefaultValueEntry t1110_f122_DefaultValue = 
{
	&t1110_f122_FieldInfo, { (char*)&t1110_f122_DefaultValueData, &t764_0_0_0 }};
static const uint16_t t1110_f123_DefaultValueData = 121;
static Il2CppFieldDefaultValueEntry t1110_f123_DefaultValue = 
{
	&t1110_f123_FieldInfo, { (char*)&t1110_f123_DefaultValueData, &t764_0_0_0 }};
static const uint16_t t1110_f124_DefaultValueData = 122;
static Il2CppFieldDefaultValueEntry t1110_f124_DefaultValue = 
{
	&t1110_f124_FieldInfo, { (char*)&t1110_f124_DefaultValueData, &t764_0_0_0 }};
static const uint16_t t1110_f125_DefaultValueData = 123;
static Il2CppFieldDefaultValueEntry t1110_f125_DefaultValue = 
{
	&t1110_f125_FieldInfo, { (char*)&t1110_f125_DefaultValueData, &t764_0_0_0 }};
static const uint16_t t1110_f126_DefaultValueData = 124;
static Il2CppFieldDefaultValueEntry t1110_f126_DefaultValue = 
{
	&t1110_f126_FieldInfo, { (char*)&t1110_f126_DefaultValueData, &t764_0_0_0 }};
static const uint16_t t1110_f127_DefaultValueData = 125;
static Il2CppFieldDefaultValueEntry t1110_f127_DefaultValue = 
{
	&t1110_f127_FieldInfo, { (char*)&t1110_f127_DefaultValueData, &t764_0_0_0 }};
static const uint16_t t1110_f128_DefaultValueData = 126;
static Il2CppFieldDefaultValueEntry t1110_f128_DefaultValue = 
{
	&t1110_f128_FieldInfo, { (char*)&t1110_f128_DefaultValueData, &t764_0_0_0 }};
static const uint16_t t1110_f129_DefaultValueData = 127;
static Il2CppFieldDefaultValueEntry t1110_f129_DefaultValue = 
{
	&t1110_f129_FieldInfo, { (char*)&t1110_f129_DefaultValueData, &t764_0_0_0 }};
static const uint16_t t1110_f130_DefaultValueData = 128;
static Il2CppFieldDefaultValueEntry t1110_f130_DefaultValue = 
{
	&t1110_f130_FieldInfo, { (char*)&t1110_f130_DefaultValueData, &t764_0_0_0 }};
static const uint16_t t1110_f131_DefaultValueData = 129;
static Il2CppFieldDefaultValueEntry t1110_f131_DefaultValue = 
{
	&t1110_f131_FieldInfo, { (char*)&t1110_f131_DefaultValueData, &t764_0_0_0 }};
static const uint16_t t1110_f132_DefaultValueData = 130;
static Il2CppFieldDefaultValueEntry t1110_f132_DefaultValue = 
{
	&t1110_f132_FieldInfo, { (char*)&t1110_f132_DefaultValueData, &t764_0_0_0 }};
static const uint16_t t1110_f133_DefaultValueData = 131;
static Il2CppFieldDefaultValueEntry t1110_f133_DefaultValue = 
{
	&t1110_f133_FieldInfo, { (char*)&t1110_f133_DefaultValueData, &t764_0_0_0 }};
static const uint16_t t1110_f134_DefaultValueData = 132;
static Il2CppFieldDefaultValueEntry t1110_f134_DefaultValue = 
{
	&t1110_f134_FieldInfo, { (char*)&t1110_f134_DefaultValueData, &t764_0_0_0 }};
static const uint16_t t1110_f135_DefaultValueData = 133;
static Il2CppFieldDefaultValueEntry t1110_f135_DefaultValue = 
{
	&t1110_f135_FieldInfo, { (char*)&t1110_f135_DefaultValueData, &t764_0_0_0 }};
static const uint16_t t1110_f136_DefaultValueData = 134;
static Il2CppFieldDefaultValueEntry t1110_f136_DefaultValue = 
{
	&t1110_f136_FieldInfo, { (char*)&t1110_f136_DefaultValueData, &t764_0_0_0 }};
static const uint16_t t1110_f137_DefaultValueData = 135;
static Il2CppFieldDefaultValueEntry t1110_f137_DefaultValue = 
{
	&t1110_f137_FieldInfo, { (char*)&t1110_f137_DefaultValueData, &t764_0_0_0 }};
static const uint16_t t1110_f138_DefaultValueData = 136;
static Il2CppFieldDefaultValueEntry t1110_f138_DefaultValue = 
{
	&t1110_f138_FieldInfo, { (char*)&t1110_f138_DefaultValueData, &t764_0_0_0 }};
static const uint16_t t1110_f139_DefaultValueData = 137;
static Il2CppFieldDefaultValueEntry t1110_f139_DefaultValue = 
{
	&t1110_f139_FieldInfo, { (char*)&t1110_f139_DefaultValueData, &t764_0_0_0 }};
static const uint16_t t1110_f140_DefaultValueData = 138;
static Il2CppFieldDefaultValueEntry t1110_f140_DefaultValue = 
{
	&t1110_f140_FieldInfo, { (char*)&t1110_f140_DefaultValueData, &t764_0_0_0 }};
static const uint16_t t1110_f141_DefaultValueData = 139;
static Il2CppFieldDefaultValueEntry t1110_f141_DefaultValue = 
{
	&t1110_f141_FieldInfo, { (char*)&t1110_f141_DefaultValueData, &t764_0_0_0 }};
static const uint16_t t1110_f142_DefaultValueData = 140;
static Il2CppFieldDefaultValueEntry t1110_f142_DefaultValue = 
{
	&t1110_f142_FieldInfo, { (char*)&t1110_f142_DefaultValueData, &t764_0_0_0 }};
static const uint16_t t1110_f143_DefaultValueData = 141;
static Il2CppFieldDefaultValueEntry t1110_f143_DefaultValue = 
{
	&t1110_f143_FieldInfo, { (char*)&t1110_f143_DefaultValueData, &t764_0_0_0 }};
static const uint16_t t1110_f144_DefaultValueData = 142;
static Il2CppFieldDefaultValueEntry t1110_f144_DefaultValue = 
{
	&t1110_f144_FieldInfo, { (char*)&t1110_f144_DefaultValueData, &t764_0_0_0 }};
static const uint16_t t1110_f145_DefaultValueData = 143;
static Il2CppFieldDefaultValueEntry t1110_f145_DefaultValue = 
{
	&t1110_f145_FieldInfo, { (char*)&t1110_f145_DefaultValueData, &t764_0_0_0 }};
static const uint16_t t1110_f146_DefaultValueData = 144;
static Il2CppFieldDefaultValueEntry t1110_f146_DefaultValue = 
{
	&t1110_f146_FieldInfo, { (char*)&t1110_f146_DefaultValueData, &t764_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t1110_FDVs[] = 
{
	&t1110_f2_DefaultValue,
	&t1110_f3_DefaultValue,
	&t1110_f4_DefaultValue,
	&t1110_f5_DefaultValue,
	&t1110_f6_DefaultValue,
	&t1110_f7_DefaultValue,
	&t1110_f8_DefaultValue,
	&t1110_f9_DefaultValue,
	&t1110_f10_DefaultValue,
	&t1110_f11_DefaultValue,
	&t1110_f12_DefaultValue,
	&t1110_f13_DefaultValue,
	&t1110_f14_DefaultValue,
	&t1110_f15_DefaultValue,
	&t1110_f16_DefaultValue,
	&t1110_f17_DefaultValue,
	&t1110_f18_DefaultValue,
	&t1110_f19_DefaultValue,
	&t1110_f20_DefaultValue,
	&t1110_f21_DefaultValue,
	&t1110_f22_DefaultValue,
	&t1110_f23_DefaultValue,
	&t1110_f24_DefaultValue,
	&t1110_f25_DefaultValue,
	&t1110_f26_DefaultValue,
	&t1110_f27_DefaultValue,
	&t1110_f28_DefaultValue,
	&t1110_f29_DefaultValue,
	&t1110_f30_DefaultValue,
	&t1110_f31_DefaultValue,
	&t1110_f32_DefaultValue,
	&t1110_f33_DefaultValue,
	&t1110_f34_DefaultValue,
	&t1110_f35_DefaultValue,
	&t1110_f36_DefaultValue,
	&t1110_f37_DefaultValue,
	&t1110_f38_DefaultValue,
	&t1110_f39_DefaultValue,
	&t1110_f40_DefaultValue,
	&t1110_f41_DefaultValue,
	&t1110_f42_DefaultValue,
	&t1110_f43_DefaultValue,
	&t1110_f44_DefaultValue,
	&t1110_f45_DefaultValue,
	&t1110_f46_DefaultValue,
	&t1110_f47_DefaultValue,
	&t1110_f48_DefaultValue,
	&t1110_f49_DefaultValue,
	&t1110_f50_DefaultValue,
	&t1110_f51_DefaultValue,
	&t1110_f52_DefaultValue,
	&t1110_f53_DefaultValue,
	&t1110_f54_DefaultValue,
	&t1110_f55_DefaultValue,
	&t1110_f56_DefaultValue,
	&t1110_f57_DefaultValue,
	&t1110_f58_DefaultValue,
	&t1110_f59_DefaultValue,
	&t1110_f60_DefaultValue,
	&t1110_f61_DefaultValue,
	&t1110_f62_DefaultValue,
	&t1110_f63_DefaultValue,
	&t1110_f64_DefaultValue,
	&t1110_f65_DefaultValue,
	&t1110_f66_DefaultValue,
	&t1110_f67_DefaultValue,
	&t1110_f68_DefaultValue,
	&t1110_f69_DefaultValue,
	&t1110_f70_DefaultValue,
	&t1110_f71_DefaultValue,
	&t1110_f72_DefaultValue,
	&t1110_f73_DefaultValue,
	&t1110_f74_DefaultValue,
	&t1110_f75_DefaultValue,
	&t1110_f76_DefaultValue,
	&t1110_f77_DefaultValue,
	&t1110_f78_DefaultValue,
	&t1110_f79_DefaultValue,
	&t1110_f80_DefaultValue,
	&t1110_f81_DefaultValue,
	&t1110_f82_DefaultValue,
	&t1110_f83_DefaultValue,
	&t1110_f84_DefaultValue,
	&t1110_f85_DefaultValue,
	&t1110_f86_DefaultValue,
	&t1110_f87_DefaultValue,
	&t1110_f88_DefaultValue,
	&t1110_f89_DefaultValue,
	&t1110_f90_DefaultValue,
	&t1110_f91_DefaultValue,
	&t1110_f92_DefaultValue,
	&t1110_f93_DefaultValue,
	&t1110_f94_DefaultValue,
	&t1110_f95_DefaultValue,
	&t1110_f96_DefaultValue,
	&t1110_f97_DefaultValue,
	&t1110_f98_DefaultValue,
	&t1110_f99_DefaultValue,
	&t1110_f100_DefaultValue,
	&t1110_f101_DefaultValue,
	&t1110_f102_DefaultValue,
	&t1110_f103_DefaultValue,
	&t1110_f104_DefaultValue,
	&t1110_f105_DefaultValue,
	&t1110_f106_DefaultValue,
	&t1110_f107_DefaultValue,
	&t1110_f108_DefaultValue,
	&t1110_f109_DefaultValue,
	&t1110_f110_DefaultValue,
	&t1110_f111_DefaultValue,
	&t1110_f112_DefaultValue,
	&t1110_f113_DefaultValue,
	&t1110_f114_DefaultValue,
	&t1110_f115_DefaultValue,
	&t1110_f116_DefaultValue,
	&t1110_f117_DefaultValue,
	&t1110_f118_DefaultValue,
	&t1110_f119_DefaultValue,
	&t1110_f120_DefaultValue,
	&t1110_f121_DefaultValue,
	&t1110_f122_DefaultValue,
	&t1110_f123_DefaultValue,
	&t1110_f124_DefaultValue,
	&t1110_f125_DefaultValue,
	&t1110_f126_DefaultValue,
	&t1110_f127_DefaultValue,
	&t1110_f128_DefaultValue,
	&t1110_f129_DefaultValue,
	&t1110_f130_DefaultValue,
	&t1110_f131_DefaultValue,
	&t1110_f132_DefaultValue,
	&t1110_f133_DefaultValue,
	&t1110_f134_DefaultValue,
	&t1110_f135_DefaultValue,
	&t1110_f136_DefaultValue,
	&t1110_f137_DefaultValue,
	&t1110_f138_DefaultValue,
	&t1110_f139_DefaultValue,
	&t1110_f140_DefaultValue,
	&t1110_f141_DefaultValue,
	&t1110_f142_DefaultValue,
	&t1110_f143_DefaultValue,
	&t1110_f144_DefaultValue,
	&t1110_f145_DefaultValue,
	&t1110_f146_DefaultValue,
	NULL
};
static MethodInfo* t1110_MIs[] =
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
static MethodInfo* t1110_VT[] =
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
static Il2CppInterfaceOffsetPair t1110_IOs[] = 
{
	{ &t120_TI, 4},
	{ &t121_TI, 5},
	{ &t122_TI, 21},
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType t1110_0_0_0;
extern Il2CppType t1110_1_0_0;
extern TypeInfo t18_TI;
#include "t764.h"
extern TypeInfo t764_TI;
TypeInfo t1110_TI = 
{
	&g_System_dll_Image, NULL, "Category", "System.Text.RegularExpressions", t1110_MIs, NULL, t1110_FIs, NULL, &t18_TI, NULL, NULL, &t764_TI, NULL, t1110_VT, &EmptyCustomAttributesCache, &t764_TI, &t1110_0_0_0, &t1110_1_0_0, t1110_IOs, NULL, NULL, t1110_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1110)+ sizeof (Il2CppObject), sizeof (uint16_t), sizeof(uint16_t), 0, 0, -1, 256, 0, true, false, false, true, false, false, false, false, false, false, false, false, 0, 0, 146, 0, 0, 23, 0, 3};
#include "t1111.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1111_TI;
#include "t1111MD.h"

#include "t11.h"
#include "t110.h"
#include "t114.h"
#include "t115.h"
#include "t144.h"
#include "t1112.h"
extern TypeInfo t114_TI;
extern TypeInfo t11_TI;
extern TypeInfo t160_TI;
extern TypeInfo t144_TI;
#include "t11MD.h"
#include "t114MD.h"
#include "t18MD.h"
#include "t144MD.h"
extern MethodInfo m3569_MI;
extern MethodInfo m2415_MI;
extern MethodInfo m532_MI;
extern MethodInfo m2410_MI;
extern MethodInfo m5014_MI;
extern MethodInfo m5015_MI;
extern MethodInfo m4366_MI;
extern MethodInfo m5016_MI;
extern MethodInfo m5017_MI;
extern MethodInfo m5018_MI;


extern MethodInfo m4364_MI;
 uint16_t m4364 (t5 * __this, t11* p0, MethodInfo* method){
	uint16_t V_0 = {0};
	t142 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t142 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			bool L_0 = m3569(p0, (t11*) &_stringLiteral522, &m3569_MI);
			if (!L_0)
			{
				goto IL_0019;
			}
		}

IL_0010:
		{
			t11* L_1 = m2415(p0, 2, &m2415_MI);
			p0 = L_1;
		}

IL_0019:
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t114_TI));
			t114 * L_2 = m532(NULL, LoadTypeToken(&t1110_0_0_0), &m532_MI);
			IL2CPP_RUNTIME_CLASS_INIT((&t11_TI));
			t11* L_3 = m2410(NULL, (t11*) &_stringLiteral523, p0, &m2410_MI);
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t18_TI));
			t5 * L_4 = m5014(NULL, L_2, L_3, 0, &m5014_MI);
			V_0 = ((*(uint16_t*)((uint16_t*)UnBox (L_4, InitializedTypeInfo(&t764_TI)))));
			// IL_003a: leave IL_0051
			goto IL_0051;
		}

IL_003f:
		{
			; // IL_003f: leave IL_0051
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (t142 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&t160_TI, e.ex->object.klass))
			goto IL_0044;
		throw e;
	}

IL_0044:
	{ // begin catch(System.ArgumentException)
		{
			V_0 = 0;
			// IL_0047: leave IL_0051
			goto IL_0051;
		}

IL_004c:
		{
			; // IL_004c: leave IL_0051
		}
	} // end catch (depth: 1)

IL_0051:
	{
		return V_0;
	}
}
extern MethodInfo m4365_MI;
 bool m4365 (t5 * __this, uint16_t p0, uint16_t p1, MethodInfo* method){
	uint16_t V_0 = {0};
	int32_t G_B8_0 = 0;
	int32_t G_B21_0 = 0;
	int32_t G_B25_0 = 0;
	int32_t G_B33_0 = 0;
	int32_t G_B70_0 = 0;
	int32_t G_B75_0 = 0;
	int32_t G_B80_0 = 0;
	int32_t G_B85_0 = 0;
	int32_t G_B94_0 = 0;
	int32_t G_B100_0 = 0;
	int32_t G_B107_0 = 0;
	int32_t G_B111_0 = 0;
	int32_t G_B115_0 = 0;
	int32_t G_B119_0 = 0;
	int32_t G_B123_0 = 0;
	int32_t G_B127_0 = 0;
	int32_t G_B131_0 = 0;
	int32_t G_B135_0 = 0;
	int32_t G_B139_0 = 0;
	int32_t G_B143_0 = 0;
	int32_t G_B147_0 = 0;
	int32_t G_B151_0 = 0;
	int32_t G_B155_0 = 0;
	int32_t G_B159_0 = 0;
	int32_t G_B163_0 = 0;
	int32_t G_B167_0 = 0;
	int32_t G_B171_0 = 0;
	int32_t G_B175_0 = 0;
	int32_t G_B179_0 = 0;
	int32_t G_B183_0 = 0;
	int32_t G_B187_0 = 0;
	int32_t G_B191_0 = 0;
	int32_t G_B195_0 = 0;
	int32_t G_B199_0 = 0;
	int32_t G_B203_0 = 0;
	int32_t G_B207_0 = 0;
	int32_t G_B211_0 = 0;
	int32_t G_B215_0 = 0;
	int32_t G_B219_0 = 0;
	int32_t G_B223_0 = 0;
	int32_t G_B227_0 = 0;
	int32_t G_B231_0 = 0;
	int32_t G_B235_0 = 0;
	int32_t G_B239_0 = 0;
	int32_t G_B243_0 = 0;
	int32_t G_B247_0 = 0;
	int32_t G_B251_0 = 0;
	int32_t G_B255_0 = 0;
	int32_t G_B259_0 = 0;
	int32_t G_B263_0 = 0;
	int32_t G_B267_0 = 0;
	int32_t G_B271_0 = 0;
	int32_t G_B275_0 = 0;
	int32_t G_B279_0 = 0;
	int32_t G_B283_0 = 0;
	int32_t G_B287_0 = 0;
	int32_t G_B291_0 = 0;
	int32_t G_B295_0 = 0;
	int32_t G_B299_0 = 0;
	int32_t G_B303_0 = 0;
	int32_t G_B307_0 = 0;
	int32_t G_B311_0 = 0;
	int32_t G_B315_0 = 0;
	int32_t G_B319_0 = 0;
	int32_t G_B323_0 = 0;
	int32_t G_B327_0 = 0;
	int32_t G_B331_0 = 0;
	int32_t G_B335_0 = 0;
	int32_t G_B339_0 = 0;
	int32_t G_B343_0 = 0;
	int32_t G_B347_0 = 0;
	int32_t G_B351_0 = 0;
	int32_t G_B355_0 = 0;
	int32_t G_B359_0 = 0;
	int32_t G_B363_0 = 0;
	int32_t G_B367_0 = 0;
	int32_t G_B371_0 = 0;
	int32_t G_B375_0 = 0;
	int32_t G_B379_0 = 0;
	int32_t G_B383_0 = 0;
	int32_t G_B387_0 = 0;
	int32_t G_B391_0 = 0;
	int32_t G_B395_0 = 0;
	int32_t G_B399_0 = 0;
	int32_t G_B403_0 = 0;
	int32_t G_B407_0 = 0;
	int32_t G_B411_0 = 0;
	int32_t G_B415_0 = 0;
	int32_t G_B419_0 = 0;
	int32_t G_B423_0 = 0;
	int32_t G_B427_0 = 0;
	int32_t G_B431_0 = 0;
	int32_t G_B435_0 = 0;
	int32_t G_B439_0 = 0;
	int32_t G_B443_0 = 0;
	int32_t G_B447_0 = 0;
	int32_t G_B451_0 = 0;
	int32_t G_B457_0 = 0;
	int32_t G_B459_0 = 0;
	{
		V_0 = p0;
		if (V_0 == 0)
		{
			goto IL_024d;
		}
		if (V_0 == 1)
		{
			goto IL_024f;
		}
		if (V_0 == 2)
		{
			goto IL_0258;
		}
		if (V_0 == 3)
		{
			goto IL_025a;
		}
		if (V_0 == 4)
		{
			goto IL_0271;
		}
		if (V_0 == 5)
		{
			goto IL_0278;
		}
		if (V_0 == 6)
		{
			goto IL_027f;
		}
		if (V_0 == 7)
		{
			goto IL_0288;
		}
		if (V_0 == 8)
		{
			goto IL_028a;
		}
		if (V_0 == 9)
		{
			goto IL_02c3;
		}
		if (V_0 == 10)
		{
			goto IL_02d7;
		}
		if (V_0 == 11)
		{
			goto IL_040d;
		}
		if (V_0 == 12)
		{
			goto IL_0448;
		}
		if (V_0 == 13)
		{
			goto IL_046b;
		}
		if (V_0 == 14)
		{
			goto IL_0490;
		}
		if (V_0 == 15)
		{
			goto IL_04b6;
		}
		if (V_0 == 16)
		{
			goto IL_0510;
		}
		if (V_0 == 17)
		{
			goto IL_0543;
		}
		if (V_0 == 18)
		{
			goto IL_0308;
		}
		if (V_0 == 19)
		{
			goto IL_0310;
		}
		if (V_0 == 20)
		{
			goto IL_0318;
		}
		if (V_0 == 21)
		{
			goto IL_0320;
		}
		if (V_0 == 22)
		{
			goto IL_0328;
		}
		if (V_0 == 23)
		{
			goto IL_0330;
		}
		if (V_0 == 24)
		{
			goto IL_0338;
		}
		if (V_0 == 25)
		{
			goto IL_0340;
		}
		if (V_0 == 26)
		{
			goto IL_0348;
		}
		if (V_0 == 27)
		{
			goto IL_0350;
		}
		if (V_0 == 28)
		{
			goto IL_0359;
		}
		if (V_0 == 29)
		{
			goto IL_0362;
		}
		if (V_0 == 30)
		{
			goto IL_036b;
		}
		if (V_0 == 31)
		{
			goto IL_0374;
		}
		if (V_0 == 32)
		{
			goto IL_037d;
		}
		if (V_0 == 33)
		{
			goto IL_0386;
		}
		if (V_0 == 34)
		{
			goto IL_038f;
		}
		if (V_0 == 35)
		{
			goto IL_0398;
		}
		if (V_0 == 36)
		{
			goto IL_03a1;
		}
		if (V_0 == 37)
		{
			goto IL_03aa;
		}
		if (V_0 == 38)
		{
			goto IL_03b3;
		}
		if (V_0 == 39)
		{
			goto IL_03bc;
		}
		if (V_0 == 40)
		{
			goto IL_03c5;
		}
		if (V_0 == 41)
		{
			goto IL_03ce;
		}
		if (V_0 == 42)
		{
			goto IL_03d7;
		}
		if (V_0 == 43)
		{
			goto IL_03e0;
		}
		if (V_0 == 44)
		{
			goto IL_03e9;
		}
		if (V_0 == 45)
		{
			goto IL_03f2;
		}
		if (V_0 == 46)
		{
			goto IL_03fb;
		}
		if (V_0 == 47)
		{
			goto IL_0404;
		}
		if (V_0 == 48)
		{
			goto IL_0583;
		}
		if (V_0 == 49)
		{
			goto IL_0596;
		}
		if (V_0 == 50)
		{
			goto IL_05b0;
		}
		if (V_0 == 51)
		{
			goto IL_05ca;
		}
		if (V_0 == 52)
		{
			goto IL_05e4;
		}
		if (V_0 == 53)
		{
			goto IL_05fe;
		}
		if (V_0 == 54)
		{
			goto IL_0618;
		}
		if (V_0 == 55)
		{
			goto IL_0632;
		}
		if (V_0 == 56)
		{
			goto IL_064c;
		}
		if (V_0 == 57)
		{
			goto IL_0666;
		}
		if (V_0 == 58)
		{
			goto IL_0680;
		}
		if (V_0 == 59)
		{
			goto IL_069a;
		}
		if (V_0 == 60)
		{
			goto IL_06b4;
		}
		if (V_0 == 61)
		{
			goto IL_06ce;
		}
		if (V_0 == 62)
		{
			goto IL_06e8;
		}
		if (V_0 == 63)
		{
			goto IL_0702;
		}
		if (V_0 == 64)
		{
			goto IL_071c;
		}
		if (V_0 == 65)
		{
			goto IL_0736;
		}
		if (V_0 == 66)
		{
			goto IL_0750;
		}
		if (V_0 == 67)
		{
			goto IL_076a;
		}
		if (V_0 == 68)
		{
			goto IL_0784;
		}
		if (V_0 == 69)
		{
			goto IL_079e;
		}
		if (V_0 == 70)
		{
			goto IL_07b8;
		}
		if (V_0 == 71)
		{
			goto IL_07d2;
		}
		if (V_0 == 72)
		{
			goto IL_07ec;
		}
		if (V_0 == 73)
		{
			goto IL_0806;
		}
		if (V_0 == 74)
		{
			goto IL_0820;
		}
		if (V_0 == 75)
		{
			goto IL_083a;
		}
		if (V_0 == 76)
		{
			goto IL_0854;
		}
		if (V_0 == 77)
		{
			goto IL_086e;
		}
		if (V_0 == 78)
		{
			goto IL_0888;
		}
		if (V_0 == 79)
		{
			goto IL_08a2;
		}
		if (V_0 == 80)
		{
			goto IL_08bc;
		}
		if (V_0 == 81)
		{
			goto IL_08d6;
		}
		if (V_0 == 82)
		{
			goto IL_08f0;
		}
		if (V_0 == 83)
		{
			goto IL_090a;
		}
		if (V_0 == 84)
		{
			goto IL_0924;
		}
		if (V_0 == 85)
		{
			goto IL_093e;
		}
		if (V_0 == 86)
		{
			goto IL_0958;
		}
		if (V_0 == 87)
		{
			goto IL_0972;
		}
		if (V_0 == 88)
		{
			goto IL_098c;
		}
		if (V_0 == 89)
		{
			goto IL_09a6;
		}
		if (V_0 == 90)
		{
			goto IL_09c0;
		}
		if (V_0 == 91)
		{
			goto IL_09da;
		}
		if (V_0 == 92)
		{
			goto IL_09f4;
		}
		if (V_0 == 93)
		{
			goto IL_0a0e;
		}
		if (V_0 == 94)
		{
			goto IL_0a28;
		}
		if (V_0 == 95)
		{
			goto IL_0a42;
		}
		if (V_0 == 96)
		{
			goto IL_0a5c;
		}
		if (V_0 == 97)
		{
			goto IL_0a76;
		}
		if (V_0 == 98)
		{
			goto IL_0a90;
		}
		if (V_0 == 99)
		{
			goto IL_0aaa;
		}
		if (V_0 == 100)
		{
			goto IL_0ac4;
		}
		if (V_0 == 101)
		{
			goto IL_0ade;
		}
		if (V_0 == 102)
		{
			goto IL_0af8;
		}
		if (V_0 == 103)
		{
			goto IL_0b12;
		}
		if (V_0 == 104)
		{
			goto IL_0b2c;
		}
		if (V_0 == 105)
		{
			goto IL_0b46;
		}
		if (V_0 == 106)
		{
			goto IL_0b60;
		}
		if (V_0 == 107)
		{
			goto IL_0b7a;
		}
		if (V_0 == 108)
		{
			goto IL_0b94;
		}
		if (V_0 == 109)
		{
			goto IL_0bae;
		}
		if (V_0 == 110)
		{
			goto IL_0bc8;
		}
		if (V_0 == 111)
		{
			goto IL_0be2;
		}
		if (V_0 == 112)
		{
			goto IL_0bfc;
		}
		if (V_0 == 113)
		{
			goto IL_0c16;
		}
		if (V_0 == 114)
		{
			goto IL_0c30;
		}
		if (V_0 == 115)
		{
			goto IL_0c4a;
		}
		if (V_0 == 116)
		{
			goto IL_0c64;
		}
		if (V_0 == 117)
		{
			goto IL_0c7e;
		}
		if (V_0 == 118)
		{
			goto IL_0c98;
		}
		if (V_0 == 119)
		{
			goto IL_0cb2;
		}
		if (V_0 == 120)
		{
			goto IL_0ccc;
		}
		if (V_0 == 121)
		{
			goto IL_0ce6;
		}
		if (V_0 == 122)
		{
			goto IL_0d00;
		}
		if (V_0 == 123)
		{
			goto IL_0d1a;
		}
		if (V_0 == 124)
		{
			goto IL_0d34;
		}
		if (V_0 == 125)
		{
			goto IL_0d4e;
		}
		if (V_0 == 126)
		{
			goto IL_0d68;
		}
		if (V_0 == 127)
		{
			goto IL_0d82;
		}
		if (V_0 == 128)
		{
			goto IL_0d9c;
		}
		if (V_0 == 129)
		{
			goto IL_0db6;
		}
		if (V_0 == 130)
		{
			goto IL_0dd0;
		}
		if (V_0 == 131)
		{
			goto IL_0dea;
		}
		if (V_0 == 132)
		{
			goto IL_0e04;
		}
		if (V_0 == 133)
		{
			goto IL_0e38;
		}
		if (V_0 == 134)
		{
			goto IL_0e1e;
		}
		if (V_0 == 135)
		{
			goto IL_0e6b;
		}
		if (V_0 == 136)
		{
			goto IL_0e6b;
		}
		if (V_0 == 137)
		{
			goto IL_0e6b;
		}
		if (V_0 == 138)
		{
			goto IL_0e6b;
		}
		if (V_0 == 139)
		{
			goto IL_0e6b;
		}
		if (V_0 == 140)
		{
			goto IL_0e6b;
		}
		if (V_0 == 141)
		{
			goto IL_0e6b;
		}
		if (V_0 == 142)
		{
			goto IL_0e6b;
		}
		if (V_0 == 143)
		{
			goto IL_0e6b;
		}
	}
	{
		goto IL_0e6d;
	}

IL_024d:
	{
		return 0;
	}

IL_024f:
	{
		return ((((int32_t)((((int32_t)p1) == ((int32_t)((int32_t)10)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0258:
	{
		return 1;
	}

IL_025a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t144_TI));
		bool L_0 = m5015(NULL, p1, &m5015_MI);
		if (L_0)
		{
			goto IL_026f;
		}
	}
	{
		bool L_1 = m4366(NULL, ((int32_t)18), p1, &m4366_MI);
		G_B8_0 = ((int32_t)(L_1));
		goto IL_0270;
	}

IL_026f:
	{
		G_B8_0 = 1;
	}

IL_0270:
	{
		return G_B8_0;
	}

IL_0271:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t144_TI));
		bool L_2 = m5016(NULL, p1, &m5016_MI);
		return L_2;
	}

IL_0278:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t144_TI));
		bool L_3 = m5017(NULL, p1, &m5017_MI);
		return L_3;
	}

IL_027f:
	{
		return ((((int32_t)((((int32_t)p1) == ((int32_t)((int32_t)10)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0288:
	{
		return 1;
	}

IL_028a:
	{
		if ((((int32_t)((int32_t)97)) > ((int32_t)p1)))
		{
			goto IL_029a;
		}
	}
	{
		if ((((int32_t)p1) <= ((int32_t)((int32_t)122))))
		{
			goto IL_02c1;
		}
	}

IL_029a:
	{
		if ((((int32_t)((int32_t)65)) > ((int32_t)p1)))
		{
			goto IL_02aa;
		}
	}
	{
		if ((((int32_t)p1) <= ((int32_t)((int32_t)90))))
		{
			goto IL_02c1;
		}
	}

IL_02aa:
	{
		if ((((int32_t)((int32_t)48)) > ((int32_t)p1)))
		{
			goto IL_02ba;
		}
	}
	{
		if ((((int32_t)p1) <= ((int32_t)((int32_t)57))))
		{
			goto IL_02c1;
		}
	}

IL_02ba:
	{
		G_B21_0 = ((((int32_t)((int32_t)95)) == ((int32_t)p1))? 1 : 0);
		goto IL_02c2;
	}

IL_02c1:
	{
		G_B21_0 = 1;
	}

IL_02c2:
	{
		return G_B21_0;
	}

IL_02c3:
	{
		if ((((int32_t)((int32_t)48)) > ((int32_t)p1)))
		{
			goto IL_02d5;
		}
	}
	{
		G_B25_0 = ((((int32_t)((((int32_t)p1) > ((int32_t)((int32_t)57)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_02d6;
	}

IL_02d5:
	{
		G_B25_0 = 0;
	}

IL_02d6:
	{
		return G_B25_0;
	}

IL_02d7:
	{
		if ((((int32_t)p1) == ((int32_t)((int32_t)32))))
		{
			goto IL_0306;
		}
	}
	{
		if ((((int32_t)p1) == ((int32_t)((int32_t)12))))
		{
			goto IL_0306;
		}
	}
	{
		if ((((int32_t)p1) == ((int32_t)((int32_t)10))))
		{
			goto IL_0306;
		}
	}
	{
		if ((((int32_t)p1) == ((int32_t)((int32_t)13))))
		{
			goto IL_0306;
		}
	}
	{
		if ((((int32_t)p1) == ((int32_t)((int32_t)9))))
		{
			goto IL_0306;
		}
	}
	{
		G_B33_0 = ((((int32_t)p1) == ((int32_t)((int32_t)11)))? 1 : 0);
		goto IL_0307;
	}

IL_0306:
	{
		G_B33_0 = 1;
	}

IL_0307:
	{
		return G_B33_0;
	}

IL_0308:
	{
		bool L_4 = m4366(NULL, 0, p1, &m4366_MI);
		return L_4;
	}

IL_0310:
	{
		bool L_5 = m4366(NULL, 1, p1, &m4366_MI);
		return L_5;
	}

IL_0318:
	{
		bool L_6 = m4366(NULL, 2, p1, &m4366_MI);
		return L_6;
	}

IL_0320:
	{
		bool L_7 = m4366(NULL, 3, p1, &m4366_MI);
		return L_7;
	}

IL_0328:
	{
		bool L_8 = m4366(NULL, 4, p1, &m4366_MI);
		return L_8;
	}

IL_0330:
	{
		bool L_9 = m4366(NULL, 5, p1, &m4366_MI);
		return L_9;
	}

IL_0338:
	{
		bool L_10 = m4366(NULL, 7, p1, &m4366_MI);
		return L_10;
	}

IL_0340:
	{
		bool L_11 = m4366(NULL, 6, p1, &m4366_MI);
		return L_11;
	}

IL_0348:
	{
		bool L_12 = m4366(NULL, 8, p1, &m4366_MI);
		return L_12;
	}

IL_0350:
	{
		bool L_13 = m4366(NULL, ((int32_t)9), p1, &m4366_MI);
		return L_13;
	}

IL_0359:
	{
		bool L_14 = m4366(NULL, ((int32_t)10), p1, &m4366_MI);
		return L_14;
	}

IL_0362:
	{
		bool L_15 = m4366(NULL, ((int32_t)11), p1, &m4366_MI);
		return L_15;
	}

IL_036b:
	{
		bool L_16 = m4366(NULL, ((int32_t)12), p1, &m4366_MI);
		return L_16;
	}

IL_0374:
	{
		bool L_17 = m4366(NULL, ((int32_t)13), p1, &m4366_MI);
		return L_17;
	}

IL_037d:
	{
		bool L_18 = m4366(NULL, ((int32_t)19), p1, &m4366_MI);
		return L_18;
	}

IL_0386:
	{
		bool L_19 = m4366(NULL, ((int32_t)20), p1, &m4366_MI);
		return L_19;
	}

IL_038f:
	{
		bool L_20 = m4366(NULL, ((int32_t)22), p1, &m4366_MI);
		return L_20;
	}

IL_0398:
	{
		bool L_21 = m4366(NULL, ((int32_t)21), p1, &m4366_MI);
		return L_21;
	}

IL_03a1:
	{
		bool L_22 = m4366(NULL, ((int32_t)23), p1, &m4366_MI);
		return L_22;
	}

IL_03aa:
	{
		bool L_23 = m4366(NULL, ((int32_t)18), p1, &m4366_MI);
		return L_23;
	}

IL_03b3:
	{
		bool L_24 = m4366(NULL, ((int32_t)24), p1, &m4366_MI);
		return L_24;
	}

IL_03bc:
	{
		bool L_25 = m4366(NULL, ((int32_t)25), p1, &m4366_MI);
		return L_25;
	}

IL_03c5:
	{
		bool L_26 = m4366(NULL, ((int32_t)26), p1, &m4366_MI);
		return L_26;
	}

IL_03ce:
	{
		bool L_27 = m4366(NULL, ((int32_t)27), p1, &m4366_MI);
		return L_27;
	}

IL_03d7:
	{
		bool L_28 = m4366(NULL, ((int32_t)28), p1, &m4366_MI);
		return L_28;
	}

IL_03e0:
	{
		bool L_29 = m4366(NULL, ((int32_t)14), p1, &m4366_MI);
		return L_29;
	}

IL_03e9:
	{
		bool L_30 = m4366(NULL, ((int32_t)15), p1, &m4366_MI);
		return L_30;
	}

IL_03f2:
	{
		bool L_31 = m4366(NULL, ((int32_t)17), p1, &m4366_MI);
		return L_31;
	}

IL_03fb:
	{
		bool L_32 = m4366(NULL, ((int32_t)16), p1, &m4366_MI);
		return L_32;
	}

IL_0404:
	{
		bool L_33 = m4366(NULL, ((int32_t)29), p1, &m4366_MI);
		return L_33;
	}

IL_040d:
	{
		bool L_34 = m4366(NULL, 0, p1, &m4366_MI);
		if (L_34)
		{
			goto IL_0446;
		}
	}
	{
		bool L_35 = m4366(NULL, 1, p1, &m4366_MI);
		if (L_35)
		{
			goto IL_0446;
		}
	}
	{
		bool L_36 = m4366(NULL, 2, p1, &m4366_MI);
		if (L_36)
		{
			goto IL_0446;
		}
	}
	{
		bool L_37 = m4366(NULL, 3, p1, &m4366_MI);
		if (L_37)
		{
			goto IL_0446;
		}
	}
	{
		bool L_38 = m4366(NULL, 4, p1, &m4366_MI);
		G_B70_0 = ((int32_t)(L_38));
		goto IL_0447;
	}

IL_0446:
	{
		G_B70_0 = 1;
	}

IL_0447:
	{
		return G_B70_0;
	}

IL_0448:
	{
		bool L_39 = m4366(NULL, 5, p1, &m4366_MI);
		if (L_39)
		{
			goto IL_0469;
		}
	}
	{
		bool L_40 = m4366(NULL, 7, p1, &m4366_MI);
		if (L_40)
		{
			goto IL_0469;
		}
	}
	{
		bool L_41 = m4366(NULL, 6, p1, &m4366_MI);
		G_B75_0 = ((int32_t)(L_41));
		goto IL_046a;
	}

IL_0469:
	{
		G_B75_0 = 1;
	}

IL_046a:
	{
		return G_B75_0;
	}

IL_046b:
	{
		bool L_42 = m4366(NULL, 8, p1, &m4366_MI);
		if (L_42)
		{
			goto IL_048e;
		}
	}
	{
		bool L_43 = m4366(NULL, ((int32_t)9), p1, &m4366_MI);
		if (L_43)
		{
			goto IL_048e;
		}
	}
	{
		bool L_44 = m4366(NULL, ((int32_t)10), p1, &m4366_MI);
		G_B80_0 = ((int32_t)(L_44));
		goto IL_048f;
	}

IL_048e:
	{
		G_B80_0 = 1;
	}

IL_048f:
	{
		return G_B80_0;
	}

IL_0490:
	{
		bool L_45 = m4366(NULL, ((int32_t)11), p1, &m4366_MI);
		if (L_45)
		{
			goto IL_04b4;
		}
	}
	{
		bool L_46 = m4366(NULL, ((int32_t)12), p1, &m4366_MI);
		if (L_46)
		{
			goto IL_04b4;
		}
	}
	{
		bool L_47 = m4366(NULL, ((int32_t)13), p1, &m4366_MI);
		G_B85_0 = ((int32_t)(L_47));
		goto IL_04b5;
	}

IL_04b4:
	{
		G_B85_0 = 1;
	}

IL_04b5:
	{
		return G_B85_0;
	}

IL_04b6:
	{
		bool L_48 = m4366(NULL, ((int32_t)19), p1, &m4366_MI);
		if (L_48)
		{
			goto IL_050e;
		}
	}
	{
		bool L_49 = m4366(NULL, ((int32_t)20), p1, &m4366_MI);
		if (L_49)
		{
			goto IL_050e;
		}
	}
	{
		bool L_50 = m4366(NULL, ((int32_t)22), p1, &m4366_MI);
		if (L_50)
		{
			goto IL_050e;
		}
	}
	{
		bool L_51 = m4366(NULL, ((int32_t)21), p1, &m4366_MI);
		if (L_51)
		{
			goto IL_050e;
		}
	}
	{
		bool L_52 = m4366(NULL, ((int32_t)23), p1, &m4366_MI);
		if (L_52)
		{
			goto IL_050e;
		}
	}
	{
		bool L_53 = m4366(NULL, ((int32_t)18), p1, &m4366_MI);
		if (L_53)
		{
			goto IL_050e;
		}
	}
	{
		bool L_54 = m4366(NULL, ((int32_t)24), p1, &m4366_MI);
		G_B94_0 = ((int32_t)(L_54));
		goto IL_050f;
	}

IL_050e:
	{
		G_B94_0 = 1;
	}

IL_050f:
	{
		return G_B94_0;
	}

IL_0510:
	{
		bool L_55 = m4366(NULL, ((int32_t)25), p1, &m4366_MI);
		if (L_55)
		{
			goto IL_0541;
		}
	}
	{
		bool L_56 = m4366(NULL, ((int32_t)26), p1, &m4366_MI);
		if (L_56)
		{
			goto IL_0541;
		}
	}
	{
		bool L_57 = m4366(NULL, ((int32_t)27), p1, &m4366_MI);
		if (L_57)
		{
			goto IL_0541;
		}
	}
	{
		bool L_58 = m4366(NULL, ((int32_t)28), p1, &m4366_MI);
		G_B100_0 = ((int32_t)(L_58));
		goto IL_0542;
	}

IL_0541:
	{
		G_B100_0 = 1;
	}

IL_0542:
	{
		return G_B100_0;
	}

IL_0543:
	{
		bool L_59 = m4366(NULL, ((int32_t)14), p1, &m4366_MI);
		if (L_59)
		{
			goto IL_0581;
		}
	}
	{
		bool L_60 = m4366(NULL, ((int32_t)15), p1, &m4366_MI);
		if (L_60)
		{
			goto IL_0581;
		}
	}
	{
		bool L_61 = m4366(NULL, ((int32_t)17), p1, &m4366_MI);
		if (L_61)
		{
			goto IL_0581;
		}
	}
	{
		bool L_62 = m4366(NULL, ((int32_t)16), p1, &m4366_MI);
		if (L_62)
		{
			goto IL_0581;
		}
	}
	{
		bool L_63 = m4366(NULL, ((int32_t)29), p1, &m4366_MI);
		G_B107_0 = ((int32_t)(L_63));
		goto IL_0582;
	}

IL_0581:
	{
		G_B107_0 = 1;
	}

IL_0582:
	{
		return G_B107_0;
	}

IL_0583:
	{
		if ((((int32_t)0) > ((int32_t)p1)))
		{
			goto IL_0594;
		}
	}
	{
		G_B111_0 = ((((int32_t)((((int32_t)p1) > ((int32_t)((int32_t)127)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0595;
	}

IL_0594:
	{
		G_B111_0 = 0;
	}

IL_0595:
	{
		return G_B111_0;
	}

IL_0596:
	{
		if ((((int32_t)((int32_t)128)) > ((int32_t)p1)))
		{
			goto IL_05ae;
		}
	}
	{
		G_B115_0 = ((((int32_t)((((int32_t)p1) > ((int32_t)((int32_t)255)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_05af;
	}

IL_05ae:
	{
		G_B115_0 = 0;
	}

IL_05af:
	{
		return G_B115_0;
	}

IL_05b0:
	{
		if ((((int32_t)((int32_t)256)) > ((int32_t)p1)))
		{
			goto IL_05c8;
		}
	}
	{
		G_B119_0 = ((((int32_t)((((int32_t)p1) > ((int32_t)((int32_t)383)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_05c9;
	}

IL_05c8:
	{
		G_B119_0 = 0;
	}

IL_05c9:
	{
		return G_B119_0;
	}

IL_05ca:
	{
		if ((((int32_t)((int32_t)384)) > ((int32_t)p1)))
		{
			goto IL_05e2;
		}
	}
	{
		G_B123_0 = ((((int32_t)((((int32_t)p1) > ((int32_t)((int32_t)591)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_05e3;
	}

IL_05e2:
	{
		G_B123_0 = 0;
	}

IL_05e3:
	{
		return G_B123_0;
	}

IL_05e4:
	{
		if ((((int32_t)((int32_t)592)) > ((int32_t)p1)))
		{
			goto IL_05fc;
		}
	}
	{
		G_B127_0 = ((((int32_t)((((int32_t)p1) > ((int32_t)((int32_t)687)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_05fd;
	}

IL_05fc:
	{
		G_B127_0 = 0;
	}

IL_05fd:
	{
		return G_B127_0;
	}

IL_05fe:
	{
		if ((((int32_t)((int32_t)688)) > ((int32_t)p1)))
		{
			goto IL_0616;
		}
	}
	{
		G_B131_0 = ((((int32_t)((((int32_t)p1) > ((int32_t)((int32_t)767)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0617;
	}

IL_0616:
	{
		G_B131_0 = 0;
	}

IL_0617:
	{
		return G_B131_0;
	}

IL_0618:
	{
		if ((((int32_t)((int32_t)768)) > ((int32_t)p1)))
		{
			goto IL_0630;
		}
	}
	{
		G_B135_0 = ((((int32_t)((((int32_t)p1) > ((int32_t)((int32_t)879)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0631;
	}

IL_0630:
	{
		G_B135_0 = 0;
	}

IL_0631:
	{
		return G_B135_0;
	}

IL_0632:
	{
		if ((((int32_t)((int32_t)880)) > ((int32_t)p1)))
		{
			goto IL_064a;
		}
	}
	{
		G_B139_0 = ((((int32_t)((((int32_t)p1) > ((int32_t)((int32_t)1023)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_064b;
	}

IL_064a:
	{
		G_B139_0 = 0;
	}

IL_064b:
	{
		return G_B139_0;
	}

IL_064c:
	{
		if ((((int32_t)((int32_t)1024)) > ((int32_t)p1)))
		{
			goto IL_0664;
		}
	}
	{
		G_B143_0 = ((((int32_t)((((int32_t)p1) > ((int32_t)((int32_t)1279)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0665;
	}

IL_0664:
	{
		G_B143_0 = 0;
	}

IL_0665:
	{
		return G_B143_0;
	}

IL_0666:
	{
		if ((((int32_t)((int32_t)1328)) > ((int32_t)p1)))
		{
			goto IL_067e;
		}
	}
	{
		G_B147_0 = ((((int32_t)((((int32_t)p1) > ((int32_t)((int32_t)1423)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_067f;
	}

IL_067e:
	{
		G_B147_0 = 0;
	}

IL_067f:
	{
		return G_B147_0;
	}

IL_0680:
	{
		if ((((int32_t)((int32_t)1424)) > ((int32_t)p1)))
		{
			goto IL_0698;
		}
	}
	{
		G_B151_0 = ((((int32_t)((((int32_t)p1) > ((int32_t)((int32_t)1535)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0699;
	}

IL_0698:
	{
		G_B151_0 = 0;
	}

IL_0699:
	{
		return G_B151_0;
	}

IL_069a:
	{
		if ((((int32_t)((int32_t)1536)) > ((int32_t)p1)))
		{
			goto IL_06b2;
		}
	}
	{
		G_B155_0 = ((((int32_t)((((int32_t)p1) > ((int32_t)((int32_t)1791)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_06b3;
	}

IL_06b2:
	{
		G_B155_0 = 0;
	}

IL_06b3:
	{
		return G_B155_0;
	}

IL_06b4:
	{
		if ((((int32_t)((int32_t)1792)) > ((int32_t)p1)))
		{
			goto IL_06cc;
		}
	}
	{
		G_B159_0 = ((((int32_t)((((int32_t)p1) > ((int32_t)((int32_t)1871)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_06cd;
	}

IL_06cc:
	{
		G_B159_0 = 0;
	}

IL_06cd:
	{
		return G_B159_0;
	}

IL_06ce:
	{
		if ((((int32_t)((int32_t)1920)) > ((int32_t)p1)))
		{
			goto IL_06e6;
		}
	}
	{
		G_B163_0 = ((((int32_t)((((int32_t)p1) > ((int32_t)((int32_t)1983)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_06e7;
	}

IL_06e6:
	{
		G_B163_0 = 0;
	}

IL_06e7:
	{
		return G_B163_0;
	}

IL_06e8:
	{
		if ((((int32_t)((int32_t)2304)) > ((int32_t)p1)))
		{
			goto IL_0700;
		}
	}
	{
		G_B167_0 = ((((int32_t)((((int32_t)p1) > ((int32_t)((int32_t)2431)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0701;
	}

IL_0700:
	{
		G_B167_0 = 0;
	}

IL_0701:
	{
		return G_B167_0;
	}

IL_0702:
	{
		if ((((int32_t)((int32_t)2432)) > ((int32_t)p1)))
		{
			goto IL_071a;
		}
	}
	{
		G_B171_0 = ((((int32_t)((((int32_t)p1) > ((int32_t)((int32_t)2559)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_071b;
	}

IL_071a:
	{
		G_B171_0 = 0;
	}

IL_071b:
	{
		return G_B171_0;
	}

IL_071c:
	{
		if ((((int32_t)((int32_t)2560)) > ((int32_t)p1)))
		{
			goto IL_0734;
		}
	}
	{
		G_B175_0 = ((((int32_t)((((int32_t)p1) > ((int32_t)((int32_t)2687)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0735;
	}

IL_0734:
	{
		G_B175_0 = 0;
	}

IL_0735:
	{
		return G_B175_0;
	}

IL_0736:
	{
		if ((((int32_t)((int32_t)2688)) > ((int32_t)p1)))
		{
			goto IL_074e;
		}
	}
	{
		G_B179_0 = ((((int32_t)((((int32_t)p1) > ((int32_t)((int32_t)2815)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_074f;
	}

IL_074e:
	{
		G_B179_0 = 0;
	}

IL_074f:
	{
		return G_B179_0;
	}

IL_0750:
	{
		if ((((int32_t)((int32_t)2816)) > ((int32_t)p1)))
		{
			goto IL_0768;
		}
	}
	{
		G_B183_0 = ((((int32_t)((((int32_t)p1) > ((int32_t)((int32_t)2943)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0769;
	}

IL_0768:
	{
		G_B183_0 = 0;
	}

IL_0769:
	{
		return G_B183_0;
	}

IL_076a:
	{
		if ((((int32_t)((int32_t)2944)) > ((int32_t)p1)))
		{
			goto IL_0782;
		}
	}
	{
		G_B187_0 = ((((int32_t)((((int32_t)p1) > ((int32_t)((int32_t)3071)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0783;
	}

IL_0782:
	{
		G_B187_0 = 0;
	}

IL_0783:
	{
		return G_B187_0;
	}

IL_0784:
	{
		if ((((int32_t)((int32_t)3072)) > ((int32_t)p1)))
		{
			goto IL_079c;
		}
	}
	{
		G_B191_0 = ((((int32_t)((((int32_t)p1) > ((int32_t)((int32_t)3199)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_079d;
	}

IL_079c:
	{
		G_B191_0 = 0;
	}

IL_079d:
	{
		return G_B191_0;
	}

IL_079e:
	{
		if ((((int32_t)((int32_t)3200)) > ((int32_t)p1)))
		{
			goto IL_07b6;
		}
	}
	{
		G_B195_0 = ((((int32_t)((((int32_t)p1) > ((int32_t)((int32_t)3327)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_07b7;
	}

IL_07b6:
	{
		G_B195_0 = 0;
	}

IL_07b7:
	{
		return G_B195_0;
	}

IL_07b8:
	{
		if ((((int32_t)((int32_t)3328)) > ((int32_t)p1)))
		{
			goto IL_07d0;
		}
	}
	{
		G_B199_0 = ((((int32_t)((((int32_t)p1) > ((int32_t)((int32_t)3455)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_07d1;
	}

IL_07d0:
	{
		G_B199_0 = 0;
	}

IL_07d1:
	{
		return G_B199_0;
	}

IL_07d2:
	{
		if ((((int32_t)((int32_t)3456)) > ((int32_t)p1)))
		{
			goto IL_07ea;
		}
	}
	{
		G_B203_0 = ((((int32_t)((((int32_t)p1) > ((int32_t)((int32_t)3583)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_07eb;
	}

IL_07ea:
	{
		G_B203_0 = 0;
	}

IL_07eb:
	{
		return G_B203_0;
	}

IL_07ec:
	{
		if ((((int32_t)((int32_t)3584)) > ((int32_t)p1)))
		{
			goto IL_0804;
		}
	}
	{
		G_B207_0 = ((((int32_t)((((int32_t)p1) > ((int32_t)((int32_t)3711)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0805;
	}

IL_0804:
	{
		G_B207_0 = 0;
	}

IL_0805:
	{
		return G_B207_0;
	}

IL_0806:
	{
		if ((((int32_t)((int32_t)3712)) > ((int32_t)p1)))
		{
			goto IL_081e;
		}
	}
	{
		G_B211_0 = ((((int32_t)((((int32_t)p1) > ((int32_t)((int32_t)3839)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_081f;
	}

IL_081e:
	{
		G_B211_0 = 0;
	}

IL_081f:
	{
		return G_B211_0;
	}

IL_0820:
	{
		if ((((int32_t)((int32_t)3840)) > ((int32_t)p1)))
		{
			goto IL_0838;
		}
	}
	{
		G_B215_0 = ((((int32_t)((((int32_t)p1) > ((int32_t)((int32_t)4095)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0839;
	}

IL_0838:
	{
		G_B215_0 = 0;
	}

IL_0839:
	{
		return G_B215_0;
	}

IL_083a:
	{
		if ((((int32_t)((int32_t)4096)) > ((int32_t)p1)))
		{
			goto IL_0852;
		}
	}
	{
		G_B219_0 = ((((int32_t)((((int32_t)p1) > ((int32_t)((int32_t)4255)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0853;
	}

IL_0852:
	{
		G_B219_0 = 0;
	}

IL_0853:
	{
		return G_B219_0;
	}

IL_0854:
	{
		if ((((int32_t)((int32_t)4256)) > ((int32_t)p1)))
		{
			goto IL_086c;
		}
	}
	{
		G_B223_0 = ((((int32_t)((((int32_t)p1) > ((int32_t)((int32_t)4351)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_086d;
	}

IL_086c:
	{
		G_B223_0 = 0;
	}

IL_086d:
	{
		return G_B223_0;
	}

IL_086e:
	{
		if ((((int32_t)((int32_t)4352)) > ((int32_t)p1)))
		{
			goto IL_0886;
		}
	}
	{
		G_B227_0 = ((((int32_t)((((int32_t)p1) > ((int32_t)((int32_t)4607)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0887;
	}

IL_0886:
	{
		G_B227_0 = 0;
	}

IL_0887:
	{
		return G_B227_0;
	}

IL_0888:
	{
		if ((((int32_t)((int32_t)4608)) > ((int32_t)p1)))
		{
			goto IL_08a0;
		}
	}
	{
		G_B231_0 = ((((int32_t)((((int32_t)p1) > ((int32_t)((int32_t)4991)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_08a1;
	}

IL_08a0:
	{
		G_B231_0 = 0;
	}

IL_08a1:
	{
		return G_B231_0;
	}

IL_08a2:
	{
		if ((((int32_t)((int32_t)5024)) > ((int32_t)p1)))
		{
			goto IL_08ba;
		}
	}
	{
		G_B235_0 = ((((int32_t)((((int32_t)p1) > ((int32_t)((int32_t)5119)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_08bb;
	}

IL_08ba:
	{
		G_B235_0 = 0;
	}

IL_08bb:
	{
		return G_B235_0;
	}

IL_08bc:
	{
		if ((((int32_t)((int32_t)5120)) > ((int32_t)p1)))
		{
			goto IL_08d4;
		}
	}
	{
		G_B239_0 = ((((int32_t)((((int32_t)p1) > ((int32_t)((int32_t)5759)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_08d5;
	}

IL_08d4:
	{
		G_B239_0 = 0;
	}

IL_08d5:
	{
		return G_B239_0;
	}

IL_08d6:
	{
		if ((((int32_t)((int32_t)5760)) > ((int32_t)p1)))
		{
			goto IL_08ee;
		}
	}
	{
		G_B243_0 = ((((int32_t)((((int32_t)p1) > ((int32_t)((int32_t)5791)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_08ef;
	}

IL_08ee:
	{
		G_B243_0 = 0;
	}

IL_08ef:
	{
		return G_B243_0;
	}

IL_08f0:
	{
		if ((((int32_t)((int32_t)5792)) > ((int32_t)p1)))
		{
			goto IL_0908;
		}
	}
	{
		G_B247_0 = ((((int32_t)((((int32_t)p1) > ((int32_t)((int32_t)5887)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0909;
	}

IL_0908:
	{
		G_B247_0 = 0;
	}

IL_0909:
	{
		return G_B247_0;
	}

IL_090a:
	{
		if ((((int32_t)((int32_t)6016)) > ((int32_t)p1)))
		{
			goto IL_0922;
		}
	}
	{
		G_B251_0 = ((((int32_t)((((int32_t)p1) > ((int32_t)((int32_t)6143)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0923;
	}

IL_0922:
	{
		G_B251_0 = 0;
	}

IL_0923:
	{
		return G_B251_0;
	}

IL_0924:
	{
		if ((((int32_t)((int32_t)6144)) > ((int32_t)p1)))
		{
			goto IL_093c;
		}
	}
	{
		G_B255_0 = ((((int32_t)((((int32_t)p1) > ((int32_t)((int32_t)6319)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_093d;
	}

IL_093c:
	{
		G_B255_0 = 0;
	}

IL_093d:
	{
		return G_B255_0;
	}

IL_093e:
	{
		if ((((int32_t)((int32_t)7680)) > ((int32_t)p1)))
		{
			goto IL_0956;
		}
	}
	{
		G_B259_0 = ((((int32_t)((((int32_t)p1) > ((int32_t)((int32_t)7935)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0957;
	}

IL_0956:
	{
		G_B259_0 = 0;
	}

IL_0957:
	{
		return G_B259_0;
	}

IL_0958:
	{
		if ((((int32_t)((int32_t)7936)) > ((int32_t)p1)))
		{
			goto IL_0970;
		}
	}
	{
		G_B263_0 = ((((int32_t)((((int32_t)p1) > ((int32_t)((int32_t)8191)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0971;
	}

IL_0970:
	{
		G_B263_0 = 0;
	}

IL_0971:
	{
		return G_B263_0;
	}

IL_0972:
	{
		if ((((int32_t)((int32_t)8192)) > ((int32_t)p1)))
		{
			goto IL_098a;
		}
	}
	{
		G_B267_0 = ((((int32_t)((((int32_t)p1) > ((int32_t)((int32_t)8303)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_098b;
	}

IL_098a:
	{
		G_B267_0 = 0;
	}

IL_098b:
	{
		return G_B267_0;
	}

IL_098c:
	{
		if ((((int32_t)((int32_t)8304)) > ((int32_t)p1)))
		{
			goto IL_09a4;
		}
	}
	{
		G_B271_0 = ((((int32_t)((((int32_t)p1) > ((int32_t)((int32_t)8351)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_09a5;
	}

IL_09a4:
	{
		G_B271_0 = 0;
	}

IL_09a5:
	{
		return G_B271_0;
	}

IL_09a6:
	{
		if ((((int32_t)((int32_t)8352)) > ((int32_t)p1)))
		{
			goto IL_09be;
		}
	}
	{
		G_B275_0 = ((((int32_t)((((int32_t)p1) > ((int32_t)((int32_t)8399)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_09bf;
	}

IL_09be:
	{
		G_B275_0 = 0;
	}

IL_09bf:
	{
		return G_B275_0;
	}

IL_09c0:
	{
		if ((((int32_t)((int32_t)8400)) > ((int32_t)p1)))
		{
			goto IL_09d8;
		}
	}
	{
		G_B279_0 = ((((int32_t)((((int32_t)p1) > ((int32_t)((int32_t)8447)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_09d9;
	}

IL_09d8:
	{
		G_B279_0 = 0;
	}

IL_09d9:
	{
		return G_B279_0;
	}

IL_09da:
	{
		if ((((int32_t)((int32_t)8448)) > ((int32_t)p1)))
		{
			goto IL_09f2;
		}
	}
	{
		G_B283_0 = ((((int32_t)((((int32_t)p1) > ((int32_t)((int32_t)8527)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_09f3;
	}

IL_09f2:
	{
		G_B283_0 = 0;
	}

IL_09f3:
	{
		return G_B283_0;
	}

IL_09f4:
	{
		if ((((int32_t)((int32_t)8528)) > ((int32_t)p1)))
		{
			goto IL_0a0c;
		}
	}
	{
		G_B287_0 = ((((int32_t)((((int32_t)p1) > ((int32_t)((int32_t)8591)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0a0d;
	}

IL_0a0c:
	{
		G_B287_0 = 0;
	}

IL_0a0d:
	{
		return G_B287_0;
	}

IL_0a0e:
	{
		if ((((int32_t)((int32_t)8592)) > ((int32_t)p1)))
		{
			goto IL_0a26;
		}
	}
	{
		G_B291_0 = ((((int32_t)((((int32_t)p1) > ((int32_t)((int32_t)8703)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0a27;
	}

IL_0a26:
	{
		G_B291_0 = 0;
	}

IL_0a27:
	{
		return G_B291_0;
	}

IL_0a28:
	{
		if ((((int32_t)((int32_t)8704)) > ((int32_t)p1)))
		{
			goto IL_0a40;
		}
	}
	{
		G_B295_0 = ((((int32_t)((((int32_t)p1) > ((int32_t)((int32_t)8959)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0a41;
	}

IL_0a40:
	{
		G_B295_0 = 0;
	}

IL_0a41:
	{
		return G_B295_0;
	}

IL_0a42:
	{
		if ((((int32_t)((int32_t)8960)) > ((int32_t)p1)))
		{
			goto IL_0a5a;
		}
	}
	{
		G_B299_0 = ((((int32_t)((((int32_t)p1) > ((int32_t)((int32_t)9215)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0a5b;
	}

IL_0a5a:
	{
		G_B299_0 = 0;
	}

IL_0a5b:
	{
		return G_B299_0;
	}

IL_0a5c:
	{
		if ((((int32_t)((int32_t)9216)) > ((int32_t)p1)))
		{
			goto IL_0a74;
		}
	}
	{
		G_B303_0 = ((((int32_t)((((int32_t)p1) > ((int32_t)((int32_t)9279)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0a75;
	}

IL_0a74:
	{
		G_B303_0 = 0;
	}

IL_0a75:
	{
		return G_B303_0;
	}

IL_0a76:
	{
		if ((((int32_t)((int32_t)9280)) > ((int32_t)p1)))
		{
			goto IL_0a8e;
		}
	}
	{
		G_B307_0 = ((((int32_t)((((int32_t)p1) > ((int32_t)((int32_t)9311)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0a8f;
	}

IL_0a8e:
	{
		G_B307_0 = 0;
	}

IL_0a8f:
	{
		return G_B307_0;
	}

IL_0a90:
	{
		if ((((int32_t)((int32_t)9312)) > ((int32_t)p1)))
		{
			goto IL_0aa8;
		}
	}
	{
		G_B311_0 = ((((int32_t)((((int32_t)p1) > ((int32_t)((int32_t)9471)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0aa9;
	}

IL_0aa8:
	{
		G_B311_0 = 0;
	}

IL_0aa9:
	{
		return G_B311_0;
	}

IL_0aaa:
	{
		if ((((int32_t)((int32_t)9472)) > ((int32_t)p1)))
		{
			goto IL_0ac2;
		}
	}
	{
		G_B315_0 = ((((int32_t)((((int32_t)p1) > ((int32_t)((int32_t)9599)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0ac3;
	}

IL_0ac2:
	{
		G_B315_0 = 0;
	}

IL_0ac3:
	{
		return G_B315_0;
	}

IL_0ac4:
	{
		if ((((int32_t)((int32_t)9600)) > ((int32_t)p1)))
		{
			goto IL_0adc;
		}
	}
	{
		G_B319_0 = ((((int32_t)((((int32_t)p1) > ((int32_t)((int32_t)9631)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0add;
	}

IL_0adc:
	{
		G_B319_0 = 0;
	}

IL_0add:
	{
		return G_B319_0;
	}

IL_0ade:
	{
		if ((((int32_t)((int32_t)9632)) > ((int32_t)p1)))
		{
			goto IL_0af6;
		}
	}
	{
		G_B323_0 = ((((int32_t)((((int32_t)p1) > ((int32_t)((int32_t)9727)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0af7;
	}

IL_0af6:
	{
		G_B323_0 = 0;
	}

IL_0af7:
	{
		return G_B323_0;
	}

IL_0af8:
	{
		if ((((int32_t)((int32_t)9728)) > ((int32_t)p1)))
		{
			goto IL_0b10;
		}
	}
	{
		G_B327_0 = ((((int32_t)((((int32_t)p1) > ((int32_t)((int32_t)9983)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0b11;
	}

IL_0b10:
	{
		G_B327_0 = 0;
	}

IL_0b11:
	{
		return G_B327_0;
	}

IL_0b12:
	{
		if ((((int32_t)((int32_t)9984)) > ((int32_t)p1)))
		{
			goto IL_0b2a;
		}
	}
	{
		G_B331_0 = ((((int32_t)((((int32_t)p1) > ((int32_t)((int32_t)10175)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0b2b;
	}

IL_0b2a:
	{
		G_B331_0 = 0;
	}

IL_0b2b:
	{
		return G_B331_0;
	}

IL_0b2c:
	{
		if ((((int32_t)((int32_t)10240)) > ((int32_t)p1)))
		{
			goto IL_0b44;
		}
	}
	{
		G_B335_0 = ((((int32_t)((((int32_t)p1) > ((int32_t)((int32_t)10495)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0b45;
	}

IL_0b44:
	{
		G_B335_0 = 0;
	}

IL_0b45:
	{
		return G_B335_0;
	}

IL_0b46:
	{
		if ((((int32_t)((int32_t)11904)) > ((int32_t)p1)))
		{
			goto IL_0b5e;
		}
	}
	{
		G_B339_0 = ((((int32_t)((((int32_t)p1) > ((int32_t)((int32_t)12031)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0b5f;
	}

IL_0b5e:
	{
		G_B339_0 = 0;
	}

IL_0b5f:
	{
		return G_B339_0;
	}

IL_0b60:
	{
		if ((((int32_t)((int32_t)12032)) > ((int32_t)p1)))
		{
			goto IL_0b78;
		}
	}
	{
		G_B343_0 = ((((int32_t)((((int32_t)p1) > ((int32_t)((int32_t)12255)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0b79;
	}

IL_0b78:
	{
		G_B343_0 = 0;
	}

IL_0b79:
	{
		return G_B343_0;
	}

IL_0b7a:
	{
		if ((((int32_t)((int32_t)12272)) > ((int32_t)p1)))
		{
			goto IL_0b92;
		}
	}
	{
		G_B347_0 = ((((int32_t)((((int32_t)p1) > ((int32_t)((int32_t)12287)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0b93;
	}

IL_0b92:
	{
		G_B347_0 = 0;
	}

IL_0b93:
	{
		return G_B347_0;
	}

IL_0b94:
	{
		if ((((int32_t)((int32_t)12288)) > ((int32_t)p1)))
		{
			goto IL_0bac;
		}
	}
	{
		G_B351_0 = ((((int32_t)((((int32_t)p1) > ((int32_t)((int32_t)12351)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0bad;
	}

IL_0bac:
	{
		G_B351_0 = 0;
	}

IL_0bad:
	{
		return G_B351_0;
	}

IL_0bae:
	{
		if ((((int32_t)((int32_t)12352)) > ((int32_t)p1)))
		{
			goto IL_0bc6;
		}
	}
	{
		G_B355_0 = ((((int32_t)((((int32_t)p1) > ((int32_t)((int32_t)12447)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0bc7;
	}

IL_0bc6:
	{
		G_B355_0 = 0;
	}

IL_0bc7:
	{
		return G_B355_0;
	}

IL_0bc8:
	{
		if ((((int32_t)((int32_t)12448)) > ((int32_t)p1)))
		{
			goto IL_0be0;
		}
	}
	{
		G_B359_0 = ((((int32_t)((((int32_t)p1) > ((int32_t)((int32_t)12543)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0be1;
	}

IL_0be0:
	{
		G_B359_0 = 0;
	}

IL_0be1:
	{
		return G_B359_0;
	}

IL_0be2:
	{
		if ((((int32_t)((int32_t)12544)) > ((int32_t)p1)))
		{
			goto IL_0bfa;
		}
	}
	{
		G_B363_0 = ((((int32_t)((((int32_t)p1) > ((int32_t)((int32_t)12591)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0bfb;
	}

IL_0bfa:
	{
		G_B363_0 = 0;
	}

IL_0bfb:
	{
		return G_B363_0;
	}

IL_0bfc:
	{
		if ((((int32_t)((int32_t)12592)) > ((int32_t)p1)))
		{
			goto IL_0c14;
		}
	}
	{
		G_B367_0 = ((((int32_t)((((int32_t)p1) > ((int32_t)((int32_t)12687)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0c15;
	}

IL_0c14:
	{
		G_B367_0 = 0;
	}

IL_0c15:
	{
		return G_B367_0;
	}

IL_0c16:
	{
		if ((((int32_t)((int32_t)12688)) > ((int32_t)p1)))
		{
			goto IL_0c2e;
		}
	}
	{
		G_B371_0 = ((((int32_t)((((int32_t)p1) > ((int32_t)((int32_t)12703)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0c2f;
	}

IL_0c2e:
	{
		G_B371_0 = 0;
	}

IL_0c2f:
	{
		return G_B371_0;
	}

IL_0c30:
	{
		if ((((int32_t)((int32_t)12704)) > ((int32_t)p1)))
		{
			goto IL_0c48;
		}
	}
	{
		G_B375_0 = ((((int32_t)((((int32_t)p1) > ((int32_t)((int32_t)12735)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0c49;
	}

IL_0c48:
	{
		G_B375_0 = 0;
	}

IL_0c49:
	{
		return G_B375_0;
	}

IL_0c4a:
	{
		if ((((int32_t)((int32_t)12800)) > ((int32_t)p1)))
		{
			goto IL_0c62;
		}
	}
	{
		G_B379_0 = ((((int32_t)((((int32_t)p1) > ((int32_t)((int32_t)13055)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0c63;
	}

IL_0c62:
	{
		G_B379_0 = 0;
	}

IL_0c63:
	{
		return G_B379_0;
	}

IL_0c64:
	{
		if ((((int32_t)((int32_t)13056)) > ((int32_t)p1)))
		{
			goto IL_0c7c;
		}
	}
	{
		G_B383_0 = ((((int32_t)((((int32_t)p1) > ((int32_t)((int32_t)13311)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0c7d;
	}

IL_0c7c:
	{
		G_B383_0 = 0;
	}

IL_0c7d:
	{
		return G_B383_0;
	}

IL_0c7e:
	{
		if ((((int32_t)((int32_t)13312)) > ((int32_t)p1)))
		{
			goto IL_0c96;
		}
	}
	{
		G_B387_0 = ((((int32_t)((((int32_t)p1) > ((int32_t)((int32_t)19893)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0c97;
	}

IL_0c96:
	{
		G_B387_0 = 0;
	}

IL_0c97:
	{
		return G_B387_0;
	}

IL_0c98:
	{
		if ((((int32_t)((int32_t)19968)) > ((int32_t)p1)))
		{
			goto IL_0cb0;
		}
	}
	{
		G_B391_0 = ((((int32_t)((((int32_t)p1) > ((int32_t)((int32_t)40959)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0cb1;
	}

IL_0cb0:
	{
		G_B391_0 = 0;
	}

IL_0cb1:
	{
		return G_B391_0;
	}

IL_0cb2:
	{
		if ((((int32_t)((int32_t)40960)) > ((int32_t)p1)))
		{
			goto IL_0cca;
		}
	}
	{
		G_B395_0 = ((((int32_t)((((int32_t)p1) > ((int32_t)((int32_t)42127)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0ccb;
	}

IL_0cca:
	{
		G_B395_0 = 0;
	}

IL_0ccb:
	{
		return G_B395_0;
	}

IL_0ccc:
	{
		if ((((int32_t)((int32_t)42128)) > ((int32_t)p1)))
		{
			goto IL_0ce4;
		}
	}
	{
		G_B399_0 = ((((int32_t)((((int32_t)p1) > ((int32_t)((int32_t)42191)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0ce5;
	}

IL_0ce4:
	{
		G_B399_0 = 0;
	}

IL_0ce5:
	{
		return G_B399_0;
	}

IL_0ce6:
	{
		if ((((int32_t)((int32_t)44032)) > ((int32_t)p1)))
		{
			goto IL_0cfe;
		}
	}
	{
		G_B403_0 = ((((int32_t)((((int32_t)p1) > ((int32_t)((int32_t)55203)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0cff;
	}

IL_0cfe:
	{
		G_B403_0 = 0;
	}

IL_0cff:
	{
		return G_B403_0;
	}

IL_0d00:
	{
		if ((((int32_t)((int32_t)55296)) > ((int32_t)p1)))
		{
			goto IL_0d18;
		}
	}
	{
		G_B407_0 = ((((int32_t)((((int32_t)p1) > ((int32_t)((int32_t)56191)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0d19;
	}

IL_0d18:
	{
		G_B407_0 = 0;
	}

IL_0d19:
	{
		return G_B407_0;
	}

IL_0d1a:
	{
		if ((((int32_t)((int32_t)56192)) > ((int32_t)p1)))
		{
			goto IL_0d32;
		}
	}
	{
		G_B411_0 = ((((int32_t)((((int32_t)p1) > ((int32_t)((int32_t)56319)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0d33;
	}

IL_0d32:
	{
		G_B411_0 = 0;
	}

IL_0d33:
	{
		return G_B411_0;
	}

IL_0d34:
	{
		if ((((int32_t)((int32_t)56320)) > ((int32_t)p1)))
		{
			goto IL_0d4c;
		}
	}
	{
		G_B415_0 = ((((int32_t)((((int32_t)p1) > ((int32_t)((int32_t)57343)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0d4d;
	}

IL_0d4c:
	{
		G_B415_0 = 0;
	}

IL_0d4d:
	{
		return G_B415_0;
	}

IL_0d4e:
	{
		if ((((int32_t)((int32_t)57344)) > ((int32_t)p1)))
		{
			goto IL_0d66;
		}
	}
	{
		G_B419_0 = ((((int32_t)((((int32_t)p1) > ((int32_t)((int32_t)63743)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0d67;
	}

IL_0d66:
	{
		G_B419_0 = 0;
	}

IL_0d67:
	{
		return G_B419_0;
	}

IL_0d68:
	{
		if ((((int32_t)((int32_t)63744)) > ((int32_t)p1)))
		{
			goto IL_0d80;
		}
	}
	{
		G_B423_0 = ((((int32_t)((((int32_t)p1) > ((int32_t)((int32_t)64255)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0d81;
	}

IL_0d80:
	{
		G_B423_0 = 0;
	}

IL_0d81:
	{
		return G_B423_0;
	}

IL_0d82:
	{
		if ((((int32_t)((int32_t)64256)) > ((int32_t)p1)))
		{
			goto IL_0d9a;
		}
	}
	{
		G_B427_0 = ((((int32_t)((((int32_t)p1) > ((int32_t)((int32_t)64335)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0d9b;
	}

IL_0d9a:
	{
		G_B427_0 = 0;
	}

IL_0d9b:
	{
		return G_B427_0;
	}

IL_0d9c:
	{
		if ((((int32_t)((int32_t)64336)) > ((int32_t)p1)))
		{
			goto IL_0db4;
		}
	}
	{
		G_B431_0 = ((((int32_t)((((int32_t)p1) > ((int32_t)((int32_t)65023)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0db5;
	}

IL_0db4:
	{
		G_B431_0 = 0;
	}

IL_0db5:
	{
		return G_B431_0;
	}

IL_0db6:
	{
		if ((((int32_t)((int32_t)65056)) > ((int32_t)p1)))
		{
			goto IL_0dce;
		}
	}
	{
		G_B435_0 = ((((int32_t)((((int32_t)p1) > ((int32_t)((int32_t)65071)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0dcf;
	}

IL_0dce:
	{
		G_B435_0 = 0;
	}

IL_0dcf:
	{
		return G_B435_0;
	}

IL_0dd0:
	{
		if ((((int32_t)((int32_t)65072)) > ((int32_t)p1)))
		{
			goto IL_0de8;
		}
	}
	{
		G_B439_0 = ((((int32_t)((((int32_t)p1) > ((int32_t)((int32_t)65103)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0de9;
	}

IL_0de8:
	{
		G_B439_0 = 0;
	}

IL_0de9:
	{
		return G_B439_0;
	}

IL_0dea:
	{
		if ((((int32_t)((int32_t)65104)) > ((int32_t)p1)))
		{
			goto IL_0e02;
		}
	}
	{
		G_B443_0 = ((((int32_t)((((int32_t)p1) > ((int32_t)((int32_t)65135)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0e03;
	}

IL_0e02:
	{
		G_B443_0 = 0;
	}

IL_0e03:
	{
		return G_B443_0;
	}

IL_0e04:
	{
		if ((((int32_t)((int32_t)65136)) > ((int32_t)p1)))
		{
			goto IL_0e1c;
		}
	}
	{
		G_B447_0 = ((((int32_t)((((int32_t)p1) > ((int32_t)((int32_t)65278)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0e1d;
	}

IL_0e1c:
	{
		G_B447_0 = 0;
	}

IL_0e1d:
	{
		return G_B447_0;
	}

IL_0e1e:
	{
		if ((((int32_t)((int32_t)65280)) > ((int32_t)p1)))
		{
			goto IL_0e36;
		}
	}
	{
		G_B451_0 = ((((int32_t)((((int32_t)p1) > ((int32_t)((int32_t)65519)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0e37;
	}

IL_0e36:
	{
		G_B451_0 = 0;
	}

IL_0e37:
	{
		return G_B451_0;
	}

IL_0e38:
	{
		if ((((int32_t)((int32_t)65279)) > ((int32_t)p1)))
		{
			goto IL_0e4e;
		}
	}
	{
		if ((((int32_t)p1) <= ((int32_t)((int32_t)65279))))
		{
			goto IL_0e69;
		}
	}

IL_0e4e:
	{
		if ((((int32_t)((int32_t)65520)) > ((int32_t)p1)))
		{
			goto IL_0e66;
		}
	}
	{
		G_B457_0 = ((((int32_t)((((int32_t)p1) > ((int32_t)((int32_t)65533)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0e67;
	}

IL_0e66:
	{
		G_B457_0 = 0;
	}

IL_0e67:
	{
		G_B459_0 = G_B457_0;
		goto IL_0e6a;
	}

IL_0e69:
	{
		G_B459_0 = 1;
	}

IL_0e6a:
	{
		return G_B459_0;
	}

IL_0e6b:
	{
		return 0;
	}

IL_0e6d:
	{
		return 0;
	}
}
 bool m4366 (t5 * __this, int32_t p0, uint16_t p1, MethodInfo* method){
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t144_TI));
		int32_t L_0 = m5018(NULL, p1, &m5018_MI);
		if ((((uint32_t)L_0) != ((uint32_t)p0)))
		{
			goto IL_000e;
		}
	}
	{
		return 1;
	}

IL_000e:
	{
		return 0;
	}
}
// Metadata Definition System.Text.RegularExpressions.CategoryUtils
extern Il2CppType t11_0_0_0;
extern Il2CppType t11_0_0_0;
static ParameterInfo t1111_m4364_ParameterInfos[] = 
{
	{"name", 0, 134218178, &EmptyCustomAttributesCache, &t11_0_0_0},
};
extern Il2CppType t1110_0_0_0;
extern void* RuntimeInvoker_t1110_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m4364_MI = 
{
	"CategoryFromName", (methodPointerType)&m4364, &t1111_TI, &t1110_0_0_0, RuntimeInvoker_t1110_t5, t1111_m4364_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 567, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1110_0_0_0;
extern Il2CppType t144_0_0_0;
extern Il2CppType t144_0_0_0;
static ParameterInfo t1111_m4365_ParameterInfos[] = 
{
	{"cat", 0, 134218179, &EmptyCustomAttributesCache, &t1110_0_0_0},
	{"c", 1, 134218180, &EmptyCustomAttributesCache, &t144_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t764_t150 (MethodInfo* method, void* obj, void** args);
MethodInfo m4365_MI = 
{
	"IsCategory", (methodPointerType)&m4365, &t1111_TI, &t108_0_0_0, RuntimeInvoker_t108_t764_t150, t1111_m4365_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 2, false, false, 568, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1112_0_0_0;
extern Il2CppType t1112_0_0_0;
extern Il2CppType t144_0_0_0;
static ParameterInfo t1111_m4366_ParameterInfos[] = 
{
	{"uc", 0, 134218181, &EmptyCustomAttributesCache, &t1112_0_0_0},
	{"c", 1, 134218182, &EmptyCustomAttributesCache, &t144_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t110_t150 (MethodInfo* method, void* obj, void** args);
MethodInfo m4366_MI = 
{
	"IsCategory", (methodPointerType)&m4366, &t1111_TI, &t108_0_0_0, RuntimeInvoker_t108_t110_t150, t1111_m4366_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 2, false, false, 569, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1111_MIs[] =
{
	&m4364_MI,
	&m4365_MI,
	&m4366_MI,
	NULL
};
static MethodInfo* t1111_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType t1111_0_0_0;
extern Il2CppType t1111_1_0_0;
struct t1111;
TypeInfo t1111_TI = 
{
	&g_System_dll_Image, NULL, "CategoryUtils", "System.Text.RegularExpressions", t1111_MIs, NULL, NULL, NULL, &t5_TI, NULL, NULL, &t1111_TI, NULL, t1111_VT, &EmptyCustomAttributesCache, &t1111_TI, &t1111_0_0_0, &t1111_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1111), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, false, false, false, false, false, false, false, 3, 0, 0, 0, 0, 4, 0, 0};
#include "t1113.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1113_TI;
#include "t1113MD.h"



extern MethodInfo m4367_MI;
 void m4367 (t1113 * __this, MethodInfo* method){
	{
		m460(__this, &m460_MI);
		return;
	}
}
// Metadata Definition System.Text.RegularExpressions.LinkRef
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m4367_MI = 
{
	".ctor", (methodPointerType)&m4367, &t1113_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, false, 570, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1113_MIs[] =
{
	&m4367_MI,
	NULL
};
static MethodInfo* t1113_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType t1113_0_0_0;
extern Il2CppType t1113_1_0_0;
struct t1113;
TypeInfo t1113_TI = 
{
	&g_System_dll_Image, NULL, "LinkRef", "System.Text.RegularExpressions", t1113_MIs, NULL, NULL, NULL, &t5_TI, NULL, NULL, &t1113_TI, NULL, t1113_VT, &EmptyCustomAttributesCache, &t1113_TI, &t1113_0_0_0, &t1113_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1113), 0, -1, 0, 0, -1, 1048704, 0, false, false, false, false, false, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 4, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1139_TI;

#include "t1119.h"
#include "t1106.h"


// Metadata Definition System.Text.RegularExpressions.ICompiler
extern Il2CppType t1102_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m5002_MI = 
{
	"GetMachineFactory", NULL, &t1139_TI, &t1102_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 1478, 0, 0, 0, false, false, 571, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m5019_MI = 
{
	"EmitFalse", NULL, &t1139_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 1478, 0, 1, 0, false, false, 572, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m5020_MI = 
{
	"EmitTrue", NULL, &t1139_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 1478, 0, 2, 0, false, false, 573, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t144_0_0_0;
extern Il2CppType t108_0_0_0;
extern Il2CppType t108_0_0_0;
extern Il2CppType t108_0_0_0;
extern Il2CppType t108_0_0_0;
static ParameterInfo t1139_m5021_ParameterInfos[] = 
{
	{"c", 0, 134218183, &EmptyCustomAttributesCache, &t144_0_0_0},
	{"negate", 1, 134218184, &EmptyCustomAttributesCache, &t108_0_0_0},
	{"ignore", 2, 134218185, &EmptyCustomAttributesCache, &t108_0_0_0},
	{"reverse", 3, 134218186, &EmptyCustomAttributesCache, &t108_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t150_t111_t111_t111 (MethodInfo* method, void* obj, void** args);
MethodInfo m5021_MI = 
{
	"EmitCharacter", NULL, &t1139_TI, &t109_0_0_0, RuntimeInvoker_t109_t150_t111_t111_t111, t1139_m5021_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 3, 4, false, false, 574, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1110_0_0_0;
extern Il2CppType t108_0_0_0;
extern Il2CppType t108_0_0_0;
static ParameterInfo t1139_m5022_ParameterInfos[] = 
{
	{"cat", 0, 134218187, &EmptyCustomAttributesCache, &t1110_0_0_0},
	{"negate", 1, 134218188, &EmptyCustomAttributesCache, &t108_0_0_0},
	{"reverse", 2, 134218189, &EmptyCustomAttributesCache, &t108_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t764_t111_t111 (MethodInfo* method, void* obj, void** args);
MethodInfo m5022_MI = 
{
	"EmitCategory", NULL, &t1139_TI, &t109_0_0_0, RuntimeInvoker_t109_t764_t111_t111, t1139_m5022_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 3, false, false, 575, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1110_0_0_0;
extern Il2CppType t108_0_0_0;
extern Il2CppType t108_0_0_0;
static ParameterInfo t1139_m5023_ParameterInfos[] = 
{
	{"cat", 0, 134218190, &EmptyCustomAttributesCache, &t1110_0_0_0},
	{"negate", 1, 134218191, &EmptyCustomAttributesCache, &t108_0_0_0},
	{"reverse", 2, 134218192, &EmptyCustomAttributesCache, &t108_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t764_t111_t111 (MethodInfo* method, void* obj, void** args);
MethodInfo m5023_MI = 
{
	"EmitNotCategory", NULL, &t1139_TI, &t109_0_0_0, RuntimeInvoker_t109_t764_t111_t111, t1139_m5023_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 3, false, false, 576, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t144_0_0_0;
extern Il2CppType t144_0_0_0;
extern Il2CppType t108_0_0_0;
extern Il2CppType t108_0_0_0;
extern Il2CppType t108_0_0_0;
static ParameterInfo t1139_m5024_ParameterInfos[] = 
{
	{"lo", 0, 134218193, &EmptyCustomAttributesCache, &t144_0_0_0},
	{"hi", 1, 134218194, &EmptyCustomAttributesCache, &t144_0_0_0},
	{"negate", 2, 134218195, &EmptyCustomAttributesCache, &t108_0_0_0},
	{"ignore", 3, 134218196, &EmptyCustomAttributesCache, &t108_0_0_0},
	{"reverse", 4, 134218197, &EmptyCustomAttributesCache, &t108_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t150_t150_t111_t111_t111 (MethodInfo* method, void* obj, void** args);
MethodInfo m5024_MI = 
{
	"EmitRange", NULL, &t1139_TI, &t109_0_0_0, RuntimeInvoker_t109_t150_t150_t111_t111_t111, t1139_m5024_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 5, false, false, 577, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t144_0_0_0;
extern Il2CppType t1119_0_0_0;
extern Il2CppType t1119_0_0_0;
extern Il2CppType t108_0_0_0;
extern Il2CppType t108_0_0_0;
extern Il2CppType t108_0_0_0;
static ParameterInfo t1139_m5025_ParameterInfos[] = 
{
	{"lo", 0, 134218198, &EmptyCustomAttributesCache, &t144_0_0_0},
	{"set", 1, 134218199, &EmptyCustomAttributesCache, &t1119_0_0_0},
	{"negate", 2, 134218200, &EmptyCustomAttributesCache, &t108_0_0_0},
	{"ignore", 3, 134218201, &EmptyCustomAttributesCache, &t108_0_0_0},
	{"reverse", 4, 134218202, &EmptyCustomAttributesCache, &t108_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t150_t5_t111_t111_t111 (MethodInfo* method, void* obj, void** args);
MethodInfo m5025_MI = 
{
	"EmitSet", NULL, &t1139_TI, &t109_0_0_0, RuntimeInvoker_t109_t150_t5_t111_t111_t111, t1139_m5025_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 7, 5, false, false, 578, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t11_0_0_0;
extern Il2CppType t108_0_0_0;
extern Il2CppType t108_0_0_0;
static ParameterInfo t1139_m5026_ParameterInfos[] = 
{
	{"str", 0, 134218203, &EmptyCustomAttributesCache, &t11_0_0_0},
	{"ignore", 1, 134218204, &EmptyCustomAttributesCache, &t108_0_0_0},
	{"reverse", 2, 134218205, &EmptyCustomAttributesCache, &t108_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t111_t111 (MethodInfo* method, void* obj, void** args);
MethodInfo m5026_MI = 
{
	"EmitString", NULL, &t1139_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t111_t111, t1139_m5026_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 8, 3, false, false, 579, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1106_0_0_0;
extern Il2CppType t1106_0_0_0;
static ParameterInfo t1139_m5027_ParameterInfos[] = 
{
	{"pos", 0, 134218206, &EmptyCustomAttributesCache, &t1106_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t764 (MethodInfo* method, void* obj, void** args);
MethodInfo m5027_MI = 
{
	"EmitPosition", NULL, &t1139_TI, &t109_0_0_0, RuntimeInvoker_t109_t764, t1139_m5027_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 9, 1, false, false, 580, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t110_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t1139_m5028_ParameterInfos[] = 
{
	{"gid", 0, 134218207, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m5028_MI = 
{
	"EmitOpen", NULL, &t1139_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t1139_m5028_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 10, 1, false, false, 581, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t110_0_0_0;
static ParameterInfo t1139_m5029_ParameterInfos[] = 
{
	{"gid", 0, 134218208, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m5029_MI = 
{
	"EmitClose", NULL, &t1139_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t1139_m5029_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 11, 1, false, false, 582, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t110_0_0_0;
extern Il2CppType t110_0_0_0;
extern Il2CppType t108_0_0_0;
extern Il2CppType t1113_0_0_0;
static ParameterInfo t1139_m5030_ParameterInfos[] = 
{
	{"gid", 0, 134218209, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"balance", 1, 134218210, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"capture", 2, 134218211, &EmptyCustomAttributesCache, &t108_0_0_0},
	{"tail", 3, 134218212, &EmptyCustomAttributesCache, &t1113_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t110_t111_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m5030_MI = 
{
	"EmitBalanceStart", NULL, &t1139_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110_t111_t5, t1139_m5030_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 12, 4, false, false, 583, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m5031_MI = 
{
	"EmitBalance", NULL, &t1139_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 1478, 0, 13, 0, false, false, 584, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t110_0_0_0;
extern Il2CppType t108_0_0_0;
extern Il2CppType t108_0_0_0;
static ParameterInfo t1139_m5032_ParameterInfos[] = 
{
	{"gid", 0, 134218213, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"ignore", 1, 134218214, &EmptyCustomAttributesCache, &t108_0_0_0},
	{"reverse", 2, 134218215, &EmptyCustomAttributesCache, &t108_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t111_t111 (MethodInfo* method, void* obj, void** args);
MethodInfo m5032_MI = 
{
	"EmitReference", NULL, &t1139_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t111_t111, t1139_m5032_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 14, 3, false, false, 585, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t110_0_0_0;
extern Il2CppType t1113_0_0_0;
static ParameterInfo t1139_m5033_ParameterInfos[] = 
{
	{"gid", 0, 134218216, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"tail", 1, 134218217, &EmptyCustomAttributesCache, &t1113_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m5033_MI = 
{
	"EmitIfDefined", NULL, &t1139_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t1139_m5033_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 15, 2, false, false, 586, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1113_0_0_0;
static ParameterInfo t1139_m5034_ParameterInfos[] = 
{
	{"tail", 0, 134218218, &EmptyCustomAttributesCache, &t1113_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m5034_MI = 
{
	"EmitSub", NULL, &t1139_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t1139_m5034_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 16, 1, false, false, 587, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1113_0_0_0;
extern Il2CppType t1113_0_0_0;
static ParameterInfo t1139_m5035_ParameterInfos[] = 
{
	{"yes", 0, 134218219, &EmptyCustomAttributesCache, &t1113_0_0_0},
	{"tail", 1, 134218220, &EmptyCustomAttributesCache, &t1113_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m5035_MI = 
{
	"EmitTest", NULL, &t1139_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t5, t1139_m5035_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 17, 2, false, false, 588, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1113_0_0_0;
static ParameterInfo t1139_m5036_ParameterInfos[] = 
{
	{"next", 0, 134218221, &EmptyCustomAttributesCache, &t1113_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m5036_MI = 
{
	"EmitBranch", NULL, &t1139_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t1139_m5036_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 18, 1, false, false, 589, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1113_0_0_0;
static ParameterInfo t1139_m5037_ParameterInfos[] = 
{
	{"target", 0, 134218222, &EmptyCustomAttributesCache, &t1113_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m5037_MI = 
{
	"EmitJump", NULL, &t1139_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t1139_m5037_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 19, 1, false, false, 590, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t110_0_0_0;
extern Il2CppType t110_0_0_0;
extern Il2CppType t108_0_0_0;
extern Il2CppType t1113_0_0_0;
static ParameterInfo t1139_m5038_ParameterInfos[] = 
{
	{"min", 0, 134218223, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"max", 1, 134218224, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"lazy", 2, 134218225, &EmptyCustomAttributesCache, &t108_0_0_0},
	{"until", 3, 134218226, &EmptyCustomAttributesCache, &t1113_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t110_t111_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m5038_MI = 
{
	"EmitRepeat", NULL, &t1139_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110_t111_t5, t1139_m5038_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 20, 4, false, false, 591, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1113_0_0_0;
static ParameterInfo t1139_m5039_ParameterInfos[] = 
{
	{"repeat", 0, 134218227, &EmptyCustomAttributesCache, &t1113_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m5039_MI = 
{
	"EmitUntil", NULL, &t1139_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t1139_m5039_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 21, 1, false, false, 592, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1113_0_0_0;
static ParameterInfo t1139_m5040_ParameterInfos[] = 
{
	{"tail", 0, 134218228, &EmptyCustomAttributesCache, &t1113_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m5040_MI = 
{
	"EmitIn", NULL, &t1139_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t1139_m5040_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 22, 1, false, false, 593, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t110_0_0_0;
extern Il2CppType t110_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t1139_m5041_ParameterInfos[] = 
{
	{"count", 0, 134218229, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"min", 1, 134218230, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"max", 2, 134218231, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t110_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m5041_MI = 
{
	"EmitInfo", NULL, &t1139_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110_t110, t1139_m5041_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 23, 3, false, false, 594, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t110_0_0_0;
extern Il2CppType t110_0_0_0;
extern Il2CppType t108_0_0_0;
extern Il2CppType t1113_0_0_0;
static ParameterInfo t1139_m5042_ParameterInfos[] = 
{
	{"min", 0, 134218232, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"max", 1, 134218233, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"lazy", 2, 134218234, &EmptyCustomAttributesCache, &t108_0_0_0},
	{"tail", 3, 134218235, &EmptyCustomAttributesCache, &t1113_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t110_t111_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m5042_MI = 
{
	"EmitFastRepeat", NULL, &t1139_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110_t111_t5, t1139_m5042_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 24, 4, false, false, 595, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t108_0_0_0;
extern Il2CppType t110_0_0_0;
extern Il2CppType t1113_0_0_0;
static ParameterInfo t1139_m5043_ParameterInfos[] = 
{
	{"reverse", 0, 134218236, &EmptyCustomAttributesCache, &t108_0_0_0},
	{"offset", 1, 134218237, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"tail", 2, 134218238, &EmptyCustomAttributesCache, &t1113_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t111_t110_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m5043_MI = 
{
	"EmitAnchor", NULL, &t1139_TI, &t109_0_0_0, RuntimeInvoker_t109_t111_t110_t5, t1139_m5043_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 25, 3, false, false, 596, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m5044_MI = 
{
	"EmitBranchEnd", NULL, &t1139_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 1478, 0, 26, 0, false, false, 597, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m5045_MI = 
{
	"EmitAlternationEnd", NULL, &t1139_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 1478, 0, 27, 0, false, false, 598, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1113_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m5046_MI = 
{
	"NewLink", NULL, &t1139_TI, &t1113_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 1478, 0, 28, 0, false, false, 599, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1113_0_0_0;
static ParameterInfo t1139_m5047_ParameterInfos[] = 
{
	{"link", 0, 134218239, &EmptyCustomAttributesCache, &t1113_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m5047_MI = 
{
	"ResolveLink", NULL, &t1139_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t1139_m5047_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 29, 1, false, false, 600, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1139_MIs[] =
{
	&m5002_MI,
	&m5019_MI,
	&m5020_MI,
	&m5021_MI,
	&m5022_MI,
	&m5023_MI,
	&m5024_MI,
	&m5025_MI,
	&m5026_MI,
	&m5027_MI,
	&m5028_MI,
	&m5029_MI,
	&m5030_MI,
	&m5031_MI,
	&m5032_MI,
	&m5033_MI,
	&m5034_MI,
	&m5035_MI,
	&m5036_MI,
	&m5037_MI,
	&m5038_MI,
	&m5039_MI,
	&m5040_MI,
	&m5041_MI,
	&m5042_MI,
	&m5043_MI,
	&m5044_MI,
	&m5045_MI,
	&m5046_MI,
	&m5047_MI,
	NULL
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType t1139_0_0_0;
extern Il2CppType t1139_1_0_0;
struct t1139;
TypeInfo t1139_TI = 
{
	&g_System_dll_Image, NULL, "ICompiler", "System.Text.RegularExpressions", t1139_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t1139_TI, NULL, NULL, &EmptyCustomAttributesCache, &t1139_TI, &t1139_0_0_0, &t1139_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 160, 0, false, true, false, false, false, false, false, false, false, false, false, false, 30, 0, 0, 0, 0, 0, 0, 0};
#include "t1114.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1114_TI;
#include "t1114MD.h"

#include "mscorlib_ArrayTypes.h"
#include "t1124.h"
extern TypeInfo t1124_TI;
#include "t1124MD.h"
extern MethodInfo m4444_MI;


extern MethodInfo m4368_MI;
 void m4368 (t1114 * __this, t1027* p0, MethodInfo* method){
	{
		m460(__this, &m460_MI);
		__this->f1 = p0;
		return;
	}
}
extern MethodInfo m4369_MI;
 t5 * m4369 (t1114 * __this, MethodInfo* method){
	{
		t1027* L_0 = (__this->f1);
		t1124 * L_1 = (t1124 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1124_TI));
		m4444(L_1, L_0, &m4444_MI);
		return L_1;
	}
}
extern MethodInfo m4370_MI;
 int32_t m4370 (t1114 * __this, MethodInfo* method){
	{
		t1027* L_0 = (__this->f1);
		int32_t L_1 = 1;
		return (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_0, L_1));
	}
}
extern MethodInfo m4371_MI;
 int32_t m4371 (t1114 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->f3);
		return L_0;
	}
}
extern MethodInfo m4372_MI;
 void m4372 (t1114 * __this, int32_t p0, MethodInfo* method){
	{
		__this->f3 = p0;
		return;
	}
}
extern MethodInfo m4373_MI;
 t5 * m4373 (t1114 * __this, MethodInfo* method){
	{
		t5 * L_0 = (__this->f0);
		return L_0;
	}
}
extern MethodInfo m4374_MI;
 void m4374 (t1114 * __this, t5 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		return;
	}
}
extern MethodInfo m4375_MI;
 t585* m4375 (t1114 * __this, MethodInfo* method){
	{
		t585* L_0 = (__this->f2);
		return L_0;
	}
}
extern MethodInfo m4376_MI;
 void m4376 (t1114 * __this, t585* p0, MethodInfo* method){
	{
		__this->f2 = p0;
		return;
	}
}
// Metadata Definition System.Text.RegularExpressions.InterpreterFactory
extern Il2CppType t986_0_0_1;
FieldInfo t1114_f0_FieldInfo = 
{
	"mapping", &t986_0_0_1, &t1114_TI, offsetof(t1114, f0), &EmptyCustomAttributesCache};
extern Il2CppType t1027_0_0_1;
FieldInfo t1114_f1_FieldInfo = 
{
	"pattern", &t1027_0_0_1, &t1114_TI, offsetof(t1114, f1), &EmptyCustomAttributesCache};
extern Il2CppType t585_0_0_1;
FieldInfo t1114_f2_FieldInfo = 
{
	"namesMapping", &t585_0_0_1, &t1114_TI, offsetof(t1114, f2), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t1114_f3_FieldInfo = 
{
	"gap", &t110_0_0_1, &t1114_TI, offsetof(t1114, f3), &EmptyCustomAttributesCache};
static FieldInfo* t1114_FIs[] =
{
	&t1114_f0_FieldInfo,
	&t1114_f1_FieldInfo,
	&t1114_f2_FieldInfo,
	&t1114_f3_FieldInfo,
	NULL
};
static PropertyInfo t1114____GroupCount_PropertyInfo = 
{
	&t1114_TI, "GroupCount", &m4370_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1114____Gap_PropertyInfo = 
{
	&t1114_TI, "Gap", &m4371_MI, &m4372_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1114____Mapping_PropertyInfo = 
{
	&t1114_TI, "Mapping", &m4373_MI, &m4374_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1114____NamesMapping_PropertyInfo = 
{
	&t1114_TI, "NamesMapping", &m4375_MI, &m4376_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1114_PIs[] =
{
	&t1114____GroupCount_PropertyInfo,
	&t1114____Gap_PropertyInfo,
	&t1114____Mapping_PropertyInfo,
	&t1114____NamesMapping_PropertyInfo,
	NULL
};
extern Il2CppType t1027_0_0_0;
extern Il2CppType t1027_0_0_0;
static ParameterInfo t1114_m4368_ParameterInfos[] = 
{
	{"pattern", 0, 134218240, &EmptyCustomAttributesCache, &t1027_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m4368_MI = 
{
	".ctor", (methodPointerType)&m4368, &t1114_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t1114_m4368_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 601, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1098_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m4369_MI = 
{
	"NewInstance", (methodPointerType)&m4369, &t1114_TI, &t1098_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 486, 0, 4, 0, false, false, 602, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m4370_MI = 
{
	"get_GroupCount", (methodPointerType)&m4370, &t1114_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, false, 603, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m4371_MI = 
{
	"get_Gap", (methodPointerType)&m4371, &t1114_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 2534, 0, 8, 0, false, false, 604, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t110_0_0_0;
static ParameterInfo t1114_m4372_ParameterInfos[] = 
{
	{"value", 0, 134218241, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m4372_MI = 
{
	"set_Gap", (methodPointerType)&m4372, &t1114_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t1114_m4372_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 9, 1, false, false, 605, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t986_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m4373_MI = 
{
	"get_Mapping", (methodPointerType)&m4373, &t1114_TI, &t986_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2534, 0, 5, 0, false, false, 606, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t986_0_0_0;
extern Il2CppType t986_0_0_0;
static ParameterInfo t1114_m4374_ParameterInfos[] = 
{
	{"value", 0, 134218242, &EmptyCustomAttributesCache, &t986_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m4374_MI = 
{
	"set_Mapping", (methodPointerType)&m4374, &t1114_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t1114_m4374_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 6, 1, false, false, 607, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t585_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m4375_MI = 
{
	"get_NamesMapping", (methodPointerType)&m4375, &t1114_TI, &t585_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2534, 0, 10, 0, false, false, 608, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t585_0_0_0;
extern Il2CppType t585_0_0_0;
static ParameterInfo t1114_m4376_ParameterInfos[] = 
{
	{"value", 0, 134218243, &EmptyCustomAttributesCache, &t585_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m4376_MI = 
{
	"set_NamesMapping", (methodPointerType)&m4376, &t1114_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t1114_m4376_ParameterInfos, &EmptyCustomAttributesCache, 2534, 0, 11, 1, false, false, 609, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1114_MIs[] =
{
	&m4368_MI,
	&m4369_MI,
	&m4370_MI,
	&m4371_MI,
	&m4372_MI,
	&m4373_MI,
	&m4374_MI,
	&m4375_MI,
	&m4376_MI,
	NULL
};
static MethodInfo* t1114_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m4369_MI,
	&m4373_MI,
	&m4374_MI,
	&m4370_MI,
	&m4371_MI,
	&m4372_MI,
	&m4375_MI,
	&m4376_MI,
};
extern TypeInfo t1102_TI;
static TypeInfo* t1114_ITIs[] = 
{
	&t1102_TI,
};
static Il2CppInterfaceOffsetPair t1114_IOs[] = 
{
	{ &t1102_TI, 4},
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType t1114_0_0_0;
extern Il2CppType t1114_1_0_0;
struct t1114;
TypeInfo t1114_TI = 
{
	&g_System_dll_Image, NULL, "InterpreterFactory", "System.Text.RegularExpressions", t1114_MIs, t1114_PIs, t1114_FIs, NULL, &t5_TI, NULL, NULL, &t1114_TI, t1114_ITIs, t1114_VT, &EmptyCustomAttributesCache, &t1114_TI, &t1114_0_0_0, &t1114_1_0_0, t1114_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1114), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, false, false, false, false, false, false, false, 9, 4, 4, 0, 0, 12, 1, 1};
#include "t1115.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1115_TI;
#include "t1115MD.h"



// Metadata Definition System.Text.RegularExpressions.PatternCompiler/PatternLinkStack/Link
extern Il2CppType t110_0_0_6;
FieldInfo t1115_f0_FieldInfo = 
{
	"base_addr", &t110_0_0_6, &t1115_TI, offsetof(t1115, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_6;
FieldInfo t1115_f1_FieldInfo = 
{
	"offset_addr", &t110_0_0_6, &t1115_TI, offsetof(t1115, f1) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t1115_FIs[] =
{
	&t1115_f0_FieldInfo,
	&t1115_f1_FieldInfo,
	NULL
};
static MethodInfo* t1115_MIs[] =
{
	NULL
};
extern MethodInfo m2042_MI;
extern MethodInfo m2043_MI;
extern MethodInfo m2148_MI;
static MethodInfo* t1115_VT[] =
{
	&m2042_MI,
	&m465_MI,
	&m2043_MI,
	&m2148_MI,
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType t1115_0_0_0;
extern Il2CppType t1115_1_0_0;
extern TypeInfo t267_TI;
extern TypeInfo t1116_TI;
TypeInfo t1115_TI = 
{
	&g_System_dll_Image, NULL, "Link", "", t1115_MIs, NULL, t1115_FIs, NULL, &t267_TI, NULL, &t1116_TI, &t1115_TI, NULL, t1115_VT, &EmptyCustomAttributesCache, &t1115_TI, &t1115_0_0_0, &t1115_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1115)+ sizeof (Il2CppObject), 0, sizeof(t1115 ), 0, 0, -1, 1048843, 0, true, false, false, false, false, false, false, false, false, false, true, true, 0, 0, 2, 0, 0, 4, 0, 0};
#include "t1116.h"
#ifndef _MSC_VER
#else
#endif
#include "t1116MD.h"

#include "t1117MD.h"
extern MethodInfo m4424_MI;


extern MethodInfo m4377_MI;
 void m4377 (t1116 * __this, MethodInfo* method){
	{
		m4424(__this, &m4424_MI);
		return;
	}
}
extern MethodInfo m4378_MI;
 void m4378 (t1116 * __this, int32_t p0, MethodInfo* method){
	{
		t1115 * L_0 = &(__this->f1);
		L_0->f0 = p0;
		return;
	}
}
extern MethodInfo m4379_MI;
 int32_t m4379 (t1116 * __this, MethodInfo* method){
	{
		t1115 * L_0 = &(__this->f1);
		int32_t L_1 = (L_0->f1);
		return L_1;
	}
}
extern MethodInfo m4380_MI;
 void m4380 (t1116 * __this, int32_t p0, MethodInfo* method){
	{
		t1115 * L_0 = &(__this->f1);
		L_0->f1 = p0;
		return;
	}
}
extern MethodInfo m4381_MI;
 int32_t m4381 (t1116 * __this, int32_t p0, MethodInfo* method){
	{
		t1115 * L_0 = &(__this->f1);
		int32_t L_1 = (L_0->f0);
		return ((int32_t)(p0-L_1));
	}
}
extern MethodInfo m4382_MI;
 t5 * m4382 (t1116 * __this, MethodInfo* method){
	{
		t1115  L_0 = (__this->f1);
		t1115  L_1 = L_0;
		t5 * L_2 = Box(InitializedTypeInfo(&t1115_TI), &L_1);
		return L_2;
	}
}
extern MethodInfo m4383_MI;
 void m4383 (t1116 * __this, t5 * p0, MethodInfo* method){
	{
		__this->f1 = ((*(t1115 *)((t1115 *)UnBox (p0, InitializedTypeInfo(&t1115_TI)))));
		return;
	}
}
// Metadata Definition System.Text.RegularExpressions.PatternCompiler/PatternLinkStack
extern Il2CppType t1115_0_0_1;
FieldInfo t1116_f1_FieldInfo = 
{
	"link", &t1115_0_0_1, &t1116_TI, offsetof(t1116, f1), &EmptyCustomAttributesCache};
static FieldInfo* t1116_FIs[] =
{
	&t1116_f1_FieldInfo,
	NULL
};
static PropertyInfo t1116____BaseAddress_PropertyInfo = 
{
	&t1116_TI, "BaseAddress", NULL, &m4378_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1116____OffsetAddress_PropertyInfo = 
{
	&t1116_TI, "OffsetAddress", &m4379_MI, &m4380_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1116_PIs[] =
{
	&t1116____BaseAddress_PropertyInfo,
	&t1116____OffsetAddress_PropertyInfo,
	NULL
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m4377_MI = 
{
	".ctor", (methodPointerType)&m4377, &t1116_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 650, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t110_0_0_0;
static ParameterInfo t1116_m4378_ParameterInfos[] = 
{
	{"value", 0, 134218314, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m4378_MI = 
{
	"set_BaseAddress", (methodPointerType)&m4378, &t1116_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t1116_m4378_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, false, 651, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m4379_MI = 
{
	"get_OffsetAddress", (methodPointerType)&m4379, &t1116_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 652, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t110_0_0_0;
static ParameterInfo t1116_m4380_ParameterInfos[] = 
{
	{"value", 0, 134218315, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m4380_MI = 
{
	"set_OffsetAddress", (methodPointerType)&m4380, &t1116_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t1116_m4380_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, false, 653, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t110_0_0_0;
static ParameterInfo t1116_m4381_ParameterInfos[] = 
{
	{"target_addr", 0, 134218316, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m4381_MI = 
{
	"GetOffset", (methodPointerType)&m4381, &t1116_TI, &t110_0_0_0, RuntimeInvoker_t110_t110, t1116_m4381_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 654, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m4382_MI = 
{
	"GetCurrent", (methodPointerType)&m4382, &t1116_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 196, 0, 4, 0, false, false, 655, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t5_0_0_0;
static ParameterInfo t1116_m4383_ParameterInfos[] = 
{
	{"l", 0, 134218317, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m4383_MI = 
{
	"SetCurrent", (methodPointerType)&m4383, &t1116_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t1116_m4383_ParameterInfos, &EmptyCustomAttributesCache, 196, 0, 5, 1, false, false, 656, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1116_MIs[] =
{
	&m4377_MI,
	&m4378_MI,
	&m4379_MI,
	&m4380_MI,
	&m4381_MI,
	&m4382_MI,
	&m4383_MI,
	NULL
};
extern TypeInfo t1115_TI;
static TypeInfo* t1116_TI__nestedTypes[2] =
{
	&t1115_TI,
	NULL
};
static MethodInfo* t1116_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m4382_MI,
	&m4383_MI,
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType t1116_0_0_0;
extern Il2CppType t1116_1_0_0;
extern TypeInfo t1117_TI;
struct t1116;
extern TypeInfo t1118_TI;
TypeInfo t1116_TI = 
{
	&g_System_dll_Image, NULL, "PatternLinkStack", "", t1116_MIs, t1116_PIs, t1116_FIs, NULL, &t1117_TI, t1116_TI__nestedTypes, &t1118_TI, &t1116_TI, NULL, t1116_VT, &EmptyCustomAttributesCache, &t1116_TI, &t1116_0_0_0, &t1116_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1116), 0, -1, 0, 0, -1, 1048579, 0, false, false, false, false, false, false, false, false, false, false, false, false, 7, 2, 1, 0, 1, 6, 0, 0};
#include "t1118.h"
#ifndef _MSC_VER
#else
#endif
#include "t1118MD.h"

#include "t996.h"
#include "t1104.h"
#include "t1105.h"
#include "t490.h"
extern TypeInfo t996_TI;
extern TypeInfo t110_TI;
extern TypeInfo t1027_TI;
extern TypeInfo t109_TI;
extern TypeInfo t107_TI;
#include "t996MD.h"
#include "t1119MD.h"
extern MethodInfo m4769_MI;
extern MethodInfo m4773_MI;
extern MethodInfo m5048_MI;
extern MethodInfo m4418_MI;
extern MethodInfo m4420_MI;
extern MethodInfo m4417_MI;
extern MethodInfo m4419_MI;
extern MethodInfo m2457_MI;
extern MethodInfo m5049_MI;
extern MethodInfo m5050_MI;
extern MethodInfo m2358_MI;
extern MethodInfo m5051_MI;
extern MethodInfo m2385_MI;
extern MethodInfo m4422_MI;
extern MethodInfo m4423_MI;
extern MethodInfo m4389_MI;
extern MethodInfo m4414_MI;
extern MethodInfo m4421_MI;
extern MethodInfo m5052_MI;
extern MethodInfo m4426_MI;
extern MethodInfo m4385_MI;
extern MethodInfo m4784_MI;
extern MethodInfo m4425_MI;


extern MethodInfo m4384_MI;
 void m4384 (t1118 * __this, MethodInfo* method){
	{
		m460(__this, &m460_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t996_TI));
		t996 * L_0 = (t996 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t996_TI));
		m4773(L_0, &m4773_MI);
		__this->f0 = L_0;
		return;
	}
}
 uint16_t m4385 (t5 * __this, uint16_t p0, uint16_t p1, MethodInfo* method){
	{
		return (((uint16_t)((int32_t)((int32_t)p0|(int32_t)((int32_t)((int32_t)p1&(int32_t)((int32_t)65280)))))));
	}
}
extern MethodInfo m4386_MI;
 t5 * m4386 (t1118 * __this, MethodInfo* method){
	t1027* V_0 = {0};
	{
		t996 * L_0 = (__this->f0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m4769_MI, L_0);
		V_0 = ((t1027*)SZArrayNew(InitializedTypeInfo(&t1027_TI), L_1));
		t996 * L_2 = (__this->f0);
		VirtActionInvoker1< t107 * >::Invoke(&m5048_MI, L_2, (t107 *)(t107 *)V_0);
		t1114 * L_3 = (t1114 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1114_TI));
		m4368(L_3, V_0, &m4368_MI);
		return L_3;
	}
}
extern MethodInfo m4387_MI;
 void m4387 (t1118 * __this, MethodInfo* method){
	{
		m4418(__this, 0, &m4418_MI);
		return;
	}
}
extern MethodInfo m4388_MI;
 void m4388 (t1118 * __this, MethodInfo* method){
	{
		m4418(__this, 1, &m4418_MI);
		return;
	}
}
 void m4389 (t1118 * __this, int32_t p0, MethodInfo* method){
	uint32_t V_0 = 0;
	{
		V_0 = p0;
		m4420(__this, (((uint16_t)((int32_t)((int32_t)V_0&(int32_t)((int32_t)65535))))), &m4420_MI);
		m4420(__this, (((uint16_t)((int32_t)((uint32_t)V_0>>((int32_t)16))))), &m4420_MI);
		return;
	}
}
extern MethodInfo m4390_MI;
 void m4390 (t1118 * __this, uint16_t p0, bool p1, bool p2, bool p3, MethodInfo* method){
	{
		uint16_t L_0 = m4417(NULL, p1, p2, p3, 0, &m4417_MI);
		m4419(__this, 5, L_0, &m4419_MI);
		if (!p2)
		{
			goto IL_001f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t144_TI));
		uint16_t L_1 = m2457(NULL, p0, &m2457_MI);
		p0 = L_1;
	}

IL_001f:
	{
		m4420(__this, p0, &m4420_MI);
		return;
	}
}
extern MethodInfo m4391_MI;
 void m4391 (t1118 * __this, uint16_t p0, bool p1, bool p2, MethodInfo* method){
	{
		uint16_t L_0 = m4417(NULL, p1, 0, p2, 0, &m4417_MI);
		m4419(__this, 6, L_0, &m4419_MI);
		m4420(__this, p0, &m4420_MI);
		return;
	}
}
extern MethodInfo m4392_MI;
 void m4392 (t1118 * __this, uint16_t p0, bool p1, bool p2, MethodInfo* method){
	{
		uint16_t L_0 = m4417(NULL, p1, 0, p2, 0, &m4417_MI);
		m4419(__this, 7, L_0, &m4419_MI);
		m4420(__this, p0, &m4420_MI);
		return;
	}
}
extern MethodInfo m4393_MI;
 void m4393 (t1118 * __this, uint16_t p0, uint16_t p1, bool p2, bool p3, bool p4, MethodInfo* method){
	{
		uint16_t L_0 = m4417(NULL, p2, p3, p4, 0, &m4417_MI);
		m4419(__this, 8, L_0, &m4419_MI);
		m4420(__this, p0, &m4420_MI);
		m4420(__this, p1, &m4420_MI);
		return;
	}
}
extern MethodInfo m4394_MI;
 void m4394 (t1118 * __this, uint16_t p0, t1119 * p1, bool p2, bool p3, bool p4, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint16_t V_2 = 0;
	int32_t V_3 = 0;
	{
		uint16_t L_0 = m4417(NULL, p2, p3, p4, 0, &m4417_MI);
		m4419(__this, ((int32_t)9), L_0, &m4419_MI);
		m4420(__this, p0, &m4420_MI);
		int32_t L_1 = m5049(p1, &m5049_MI);
		V_0 = ((int32_t)((int32_t)((int32_t)(L_1+((int32_t)15)))>>(int32_t)4));
		m4420(__this, (((uint16_t)V_0)), &m4420_MI);
		V_1 = 0;
		goto IL_007d;
	}

IL_0035:
	{
		V_2 = 0;
		V_3 = 0;
		goto IL_006e;
	}

IL_003e:
	{
		int32_t L_2 = m5049(p1, &m5049_MI);
		if ((((int32_t)V_1) < ((int32_t)L_2)))
		{
			goto IL_004f;
		}
	}
	{
		goto IL_0076;
	}

IL_004f:
	{
		int32_t L_3 = V_1;
		V_1 = ((int32_t)(L_3+1));
		bool L_4 = m5050(p1, L_3, &m5050_MI);
		if (!L_4)
		{
			goto IL_006a;
		}
	}
	{
		V_2 = (((uint16_t)((int32_t)((int32_t)V_2|(int32_t)(((uint16_t)((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)V_3&(int32_t)((int32_t)31)))))))))));
	}

IL_006a:
	{
		V_3 = ((int32_t)(V_3+1));
	}

IL_006e:
	{
		if ((((int32_t)V_3) < ((int32_t)((int32_t)16))))
		{
			goto IL_003e;
		}
	}

IL_0076:
	{
		m4420(__this, V_2, &m4420_MI);
	}

IL_007d:
	{
		int32_t L_5 = V_0;
		V_0 = ((int32_t)(L_5-1));
		if (L_5)
		{
			goto IL_0035;
		}
	}
	{
		return;
	}
}
extern MethodInfo m4395_MI;
 void m4395 (t1118 * __this, t11* p0, bool p1, bool p2, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		uint16_t L_0 = m4417(NULL, 0, p1, p2, 0, &m4417_MI);
		m4419(__this, 3, L_0, &m4419_MI);
		int32_t L_1 = m2358(p0, &m2358_MI);
		V_0 = L_1;
		m4420(__this, (((uint16_t)V_0)), &m4420_MI);
		if (!p1)
		{
			goto IL_002d;
		}
	}
	{
		t11* L_2 = m5051(p0, &m5051_MI);
		p0 = L_2;
	}

IL_002d:
	{
		V_1 = 0;
		goto IL_0045;
	}

IL_0034:
	{
		uint16_t L_3 = m2385(p0, V_1, &m2385_MI);
		m4420(__this, L_3, &m4420_MI);
		V_1 = ((int32_t)(V_1+1));
	}

IL_0045:
	{
		if ((((int32_t)V_1) < ((int32_t)V_0)))
		{
			goto IL_0034;
		}
	}
	{
		return;
	}
}
extern MethodInfo m4396_MI;
 void m4396 (t1118 * __this, uint16_t p0, MethodInfo* method){
	{
		m4419(__this, 2, 0, &m4419_MI);
		m4420(__this, p0, &m4420_MI);
		return;
	}
}
extern MethodInfo m4397_MI;
 void m4397 (t1118 * __this, int32_t p0, MethodInfo* method){
	{
		m4418(__this, ((int32_t)11), &m4418_MI);
		m4420(__this, (((uint16_t)p0)), &m4420_MI);
		return;
	}
}
extern MethodInfo m4398_MI;
 void m4398 (t1118 * __this, int32_t p0, MethodInfo* method){
	{
		m4418(__this, ((int32_t)12), &m4418_MI);
		m4420(__this, (((uint16_t)p0)), &m4420_MI);
		return;
	}
}
extern MethodInfo m4399_MI;
 void m4399 (t1118 * __this, int32_t p0, int32_t p1, bool p2, t1113 * p3, MethodInfo* method){
	t1118 * G_B2_0 = {0};
	t1118 * G_B1_0 = {0};
	int32_t G_B3_0 = 0;
	t1118 * G_B3_1 = {0};
	{
		m4422(__this, p3, &m4422_MI);
		m4418(__this, ((int32_t)14), &m4418_MI);
		m4420(__this, (((uint16_t)p0)), &m4420_MI);
		m4420(__this, (((uint16_t)p1)), &m4420_MI);
		G_B1_0 = __this;
		if (!p2)
		{
			G_B2_0 = __this;
			goto IL_002d;
		}
	}
	{
		G_B3_0 = 1;
		G_B3_1 = G_B1_0;
		goto IL_002e;
	}

IL_002d:
	{
		G_B3_0 = 0;
		G_B3_1 = G_B2_0;
	}

IL_002e:
	{
		m4420(G_B3_1, (((uint16_t)G_B3_0)), &m4420_MI);
		m4423(__this, p3, &m4423_MI);
		return;
	}
}
extern MethodInfo m4400_MI;
 void m4400 (t1118 * __this, MethodInfo* method){
	{
		m4418(__this, ((int32_t)13), &m4418_MI);
		return;
	}
}
extern MethodInfo m4401_MI;
 void m4401 (t1118 * __this, int32_t p0, bool p1, bool p2, MethodInfo* method){
	{
		uint16_t L_0 = m4417(NULL, 0, p1, p2, 0, &m4417_MI);
		m4419(__this, 4, L_0, &m4419_MI);
		m4420(__this, (((uint16_t)p0)), &m4420_MI);
		return;
	}
}
extern MethodInfo m4402_MI;
 void m4402 (t1118 * __this, int32_t p0, t1113 * p1, MethodInfo* method){
	{
		m4422(__this, p1, &m4422_MI);
		m4418(__this, ((int32_t)15), &m4418_MI);
		m4423(__this, p1, &m4423_MI);
		m4420(__this, (((uint16_t)p0)), &m4420_MI);
		return;
	}
}
extern MethodInfo m4403_MI;
 void m4403 (t1118 * __this, t1113 * p0, MethodInfo* method){
	{
		m4422(__this, p0, &m4422_MI);
		m4418(__this, ((int32_t)16), &m4418_MI);
		m4423(__this, p0, &m4423_MI);
		return;
	}
}
extern MethodInfo m4404_MI;
 void m4404 (t1118 * __this, t1113 * p0, t1113 * p1, MethodInfo* method){
	{
		m4422(__this, p0, &m4422_MI);
		m4422(__this, p1, &m4422_MI);
		m4418(__this, ((int32_t)17), &m4418_MI);
		m4423(__this, p0, &m4423_MI);
		m4423(__this, p1, &m4423_MI);
		return;
	}
}
extern MethodInfo m4405_MI;
 void m4405 (t1118 * __this, t1113 * p0, MethodInfo* method){
	{
		m4422(__this, p0, &m4422_MI);
		m4419(__this, ((int32_t)18), 0, &m4419_MI);
		m4423(__this, p0, &m4423_MI);
		return;
	}
}
extern MethodInfo m4406_MI;
 void m4406 (t1118 * __this, t1113 * p0, MethodInfo* method){
	{
		m4422(__this, p0, &m4422_MI);
		m4419(__this, ((int32_t)19), 0, &m4419_MI);
		m4423(__this, p0, &m4423_MI);
		return;
	}
}
extern MethodInfo m4407_MI;
 void m4407 (t1118 * __this, int32_t p0, int32_t p1, bool p2, t1113 * p3, MethodInfo* method){
	{
		m4422(__this, p3, &m4422_MI);
		uint16_t L_0 = m4417(NULL, 0, 0, 0, p2, &m4417_MI);
		m4419(__this, ((int32_t)20), L_0, &m4419_MI);
		m4423(__this, p3, &m4423_MI);
		m4389(__this, p0, &m4389_MI);
		m4389(__this, p1, &m4389_MI);
		return;
	}
}
extern MethodInfo m4408_MI;
 void m4408 (t1118 * __this, t1113 * p0, MethodInfo* method){
	{
		VirtActionInvoker1< t1113 * >::Invoke(&m4414_MI, __this, p0);
		m4418(__this, ((int32_t)21), &m4418_MI);
		return;
	}
}
extern MethodInfo m4409_MI;
 void m4409 (t1118 * __this, int32_t p0, int32_t p1, bool p2, t1113 * p3, MethodInfo* method){
	{
		m4422(__this, p3, &m4422_MI);
		uint16_t L_0 = m4417(NULL, 0, 0, 0, p2, &m4417_MI);
		m4419(__this, ((int32_t)22), L_0, &m4419_MI);
		m4423(__this, p3, &m4423_MI);
		m4389(__this, p0, &m4389_MI);
		m4389(__this, p1, &m4389_MI);
		return;
	}
}
extern MethodInfo m4410_MI;
 void m4410 (t1118 * __this, t1113 * p0, MethodInfo* method){
	{
		m4422(__this, p0, &m4422_MI);
		m4418(__this, ((int32_t)10), &m4418_MI);
		m4423(__this, p0, &m4423_MI);
		return;
	}
}
extern MethodInfo m4411_MI;
 void m4411 (t1118 * __this, bool p0, int32_t p1, t1113 * p2, MethodInfo* method){
	{
		m4422(__this, p2, &m4422_MI);
		uint16_t L_0 = m4417(NULL, 0, 0, p0, 0, &m4417_MI);
		m4419(__this, ((int32_t)23), L_0, &m4419_MI);
		m4423(__this, p2, &m4423_MI);
		m4420(__this, (((uint16_t)p1)), &m4420_MI);
		return;
	}
}
extern MethodInfo m4412_MI;
 void m4412 (t1118 * __this, int32_t p0, int32_t p1, int32_t p2, MethodInfo* method){
	{
		m4418(__this, ((int32_t)24), &m4418_MI);
		m4389(__this, p0, &m4389_MI);
		m4389(__this, p1, &m4389_MI);
		m4389(__this, p2, &m4389_MI);
		return;
	}
}
extern MethodInfo m4413_MI;
 t1113 * m4413 (t1118 * __this, MethodInfo* method){
	{
		t1116 * L_0 = (t1116 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1116_TI));
		m4377(L_0, &m4377_MI);
		return L_0;
	}
}
 void m4414 (t1118 * __this, t1113 * p0, MethodInfo* method){
	t1116 * V_0 = {0};
	{
		V_0 = ((t1116 *)Castclass(p0, InitializedTypeInfo(&t1116_TI)));
		goto IL_002f;
	}

IL_000c:
	{
		t996 * L_0 = (__this->f0);
		int32_t L_1 = m4379(V_0, &m4379_MI);
		int32_t L_2 = m4421(__this, &m4421_MI);
		int32_t L_3 = m4381(V_0, L_2, &m4381_MI);
		uint16_t L_4 = (((uint16_t)L_3));
		t5 * L_5 = Box(InitializedTypeInfo(&t764_TI), &L_4);
		VirtActionInvoker2< int32_t, t5 * >::Invoke(&m5052_MI, L_0, L_1, L_5);
	}

IL_002f:
	{
		bool L_6 = m4426(V_0, &m4426_MI);
		if (L_6)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}
}
extern MethodInfo m4415_MI;
 void m4415 (t1118 * __this, MethodInfo* method){
	{
		return;
	}
}
extern MethodInfo m4416_MI;
 void m4416 (t1118 * __this, MethodInfo* method){
	{
		return;
	}
}
 uint16_t m4417 (t5 * __this, bool p0, bool p1, bool p2, bool p3, MethodInfo* method){
	uint16_t V_0 = {0};
	{
		V_0 = 0;
		if (!p0)
		{
			goto IL_0011;
		}
	}
	{
		V_0 = (((uint16_t)((int32_t)((int32_t)V_0|(int32_t)((int32_t)256)))));
	}

IL_0011:
	{
		if (!p1)
		{
			goto IL_0020;
		}
	}
	{
		V_0 = (((uint16_t)((int32_t)((int32_t)V_0|(int32_t)((int32_t)512)))));
	}

IL_0020:
	{
		if (!p2)
		{
			goto IL_002f;
		}
	}
	{
		V_0 = (((uint16_t)((int32_t)((int32_t)V_0|(int32_t)((int32_t)1024)))));
	}

IL_002f:
	{
		if (!p3)
		{
			goto IL_003e;
		}
	}
	{
		V_0 = (((uint16_t)((int32_t)((int32_t)V_0|(int32_t)((int32_t)2048)))));
	}

IL_003e:
	{
		return V_0;
	}
}
 void m4418 (t1118 * __this, uint16_t p0, MethodInfo* method){
	{
		m4419(__this, p0, 0, &m4419_MI);
		return;
	}
}
 void m4419 (t1118 * __this, uint16_t p0, uint16_t p1, MethodInfo* method){
	{
		uint16_t L_0 = m4385(NULL, p0, p1, &m4385_MI);
		m4420(__this, L_0, &m4420_MI);
		return;
	}
}
 void m4420 (t1118 * __this, uint16_t p0, MethodInfo* method){
	{
		t996 * L_0 = (__this->f0);
		uint16_t L_1 = p0;
		t5 * L_2 = Box(InitializedTypeInfo(&t764_TI), &L_1);
		VirtFuncInvoker1< int32_t, t5 * >::Invoke(&m4784_MI, L_0, L_2);
		return;
	}
}
 int32_t m4421 (t1118 * __this, MethodInfo* method){
	{
		t996 * L_0 = (__this->f0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m4769_MI, L_0);
		return L_1;
	}
}
 void m4422 (t1118 * __this, t1113 * p0, MethodInfo* method){
	t1116 * V_0 = {0};
	{
		V_0 = ((t1116 *)Castclass(p0, InitializedTypeInfo(&t1116_TI)));
		int32_t L_0 = m4421(__this, &m4421_MI);
		m4378(V_0, L_0, &m4378_MI);
		return;
	}
}
 void m4423 (t1118 * __this, t1113 * p0, MethodInfo* method){
	t1116 * V_0 = {0};
	{
		V_0 = ((t1116 *)Castclass(p0, InitializedTypeInfo(&t1116_TI)));
		int32_t L_0 = m4421(__this, &m4421_MI);
		m4380(V_0, L_0, &m4380_MI);
		m4420(__this, 0, &m4420_MI);
		m4425(V_0, &m4425_MI);
		return;
	}
}
// Metadata Definition System.Text.RegularExpressions.PatternCompiler
extern Il2CppType t996_0_0_1;
FieldInfo t1118_f0_FieldInfo = 
{
	"pgm", &t996_0_0_1, &t1118_TI, offsetof(t1118, f0), &EmptyCustomAttributesCache};
static FieldInfo* t1118_FIs[] =
{
	&t1118_f0_FieldInfo,
	NULL
};
static PropertyInfo t1118____CurrentAddress_PropertyInfo = 
{
	&t1118_TI, "CurrentAddress", &m4421_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1118_PIs[] =
{
	&t1118____CurrentAddress_PropertyInfo,
	NULL
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m4384_MI = 
{
	".ctor", (methodPointerType)&m4384, &t1118_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 610, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1104_0_0_0;
extern Il2CppType t1104_0_0_0;
extern Il2CppType t1105_0_0_0;
extern Il2CppType t1105_0_0_0;
static ParameterInfo t1118_m4385_ParameterInfos[] = 
{
	{"op", 0, 134218244, &EmptyCustomAttributesCache, &t1104_0_0_0},
	{"flags", 1, 134218245, &EmptyCustomAttributesCache, &t1105_0_0_0},
};
extern Il2CppType t764_0_0_0;
extern void* RuntimeInvoker_t764_t764_t764 (MethodInfo* method, void* obj, void** args);
MethodInfo m4385_MI = 
{
	"EncodeOp", (methodPointerType)&m4385, &t1118_TI, &t764_0_0_0, RuntimeInvoker_t764_t764_t764, t1118_m4385_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 2, false, false, 611, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1102_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m4386_MI = 
{
	"GetMachineFactory", (methodPointerType)&m4386, &t1118_TI, &t1102_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 486, 0, 4, 0, false, false, 612, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m4387_MI = 
{
	"EmitFalse", (methodPointerType)&m4387, &t1118_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, false, 613, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m4388_MI = 
{
	"EmitTrue", (methodPointerType)&m4388, &t1118_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, false, 614, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t110_0_0_0;
static ParameterInfo t1118_m4389_ParameterInfos[] = 
{
	{"count", 0, 134218246, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m4389_MI = 
{
	"EmitCount", (methodPointerType)&m4389, &t1118_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t1118_m4389_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 615, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t144_0_0_0;
extern Il2CppType t108_0_0_0;
extern Il2CppType t108_0_0_0;
extern Il2CppType t108_0_0_0;
static ParameterInfo t1118_m4390_ParameterInfos[] = 
{
	{"c", 0, 134218247, &EmptyCustomAttributesCache, &t144_0_0_0},
	{"negate", 1, 134218248, &EmptyCustomAttributesCache, &t108_0_0_0},
	{"ignore", 2, 134218249, &EmptyCustomAttributesCache, &t108_0_0_0},
	{"reverse", 3, 134218250, &EmptyCustomAttributesCache, &t108_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t150_t111_t111_t111 (MethodInfo* method, void* obj, void** args);
MethodInfo m4390_MI = 
{
	"EmitCharacter", (methodPointerType)&m4390, &t1118_TI, &t109_0_0_0, RuntimeInvoker_t109_t150_t111_t111_t111, t1118_m4390_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 7, 4, false, false, 616, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1110_0_0_0;
extern Il2CppType t108_0_0_0;
extern Il2CppType t108_0_0_0;
static ParameterInfo t1118_m4391_ParameterInfos[] = 
{
	{"cat", 0, 134218251, &EmptyCustomAttributesCache, &t1110_0_0_0},
	{"negate", 1, 134218252, &EmptyCustomAttributesCache, &t108_0_0_0},
	{"reverse", 2, 134218253, &EmptyCustomAttributesCache, &t108_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t764_t111_t111 (MethodInfo* method, void* obj, void** args);
MethodInfo m4391_MI = 
{
	"EmitCategory", (methodPointerType)&m4391, &t1118_TI, &t109_0_0_0, RuntimeInvoker_t109_t764_t111_t111, t1118_m4391_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 8, 3, false, false, 617, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1110_0_0_0;
extern Il2CppType t108_0_0_0;
extern Il2CppType t108_0_0_0;
static ParameterInfo t1118_m4392_ParameterInfos[] = 
{
	{"cat", 0, 134218254, &EmptyCustomAttributesCache, &t1110_0_0_0},
	{"negate", 1, 134218255, &EmptyCustomAttributesCache, &t108_0_0_0},
	{"reverse", 2, 134218256, &EmptyCustomAttributesCache, &t108_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t764_t111_t111 (MethodInfo* method, void* obj, void** args);
MethodInfo m4392_MI = 
{
	"EmitNotCategory", (methodPointerType)&m4392, &t1118_TI, &t109_0_0_0, RuntimeInvoker_t109_t764_t111_t111, t1118_m4392_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 9, 3, false, false, 618, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t144_0_0_0;
extern Il2CppType t144_0_0_0;
extern Il2CppType t108_0_0_0;
extern Il2CppType t108_0_0_0;
extern Il2CppType t108_0_0_0;
static ParameterInfo t1118_m4393_ParameterInfos[] = 
{
	{"lo", 0, 134218257, &EmptyCustomAttributesCache, &t144_0_0_0},
	{"hi", 1, 134218258, &EmptyCustomAttributesCache, &t144_0_0_0},
	{"negate", 2, 134218259, &EmptyCustomAttributesCache, &t108_0_0_0},
	{"ignore", 3, 134218260, &EmptyCustomAttributesCache, &t108_0_0_0},
	{"reverse", 4, 134218261, &EmptyCustomAttributesCache, &t108_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t150_t150_t111_t111_t111 (MethodInfo* method, void* obj, void** args);
MethodInfo m4393_MI = 
{
	"EmitRange", (methodPointerType)&m4393, &t1118_TI, &t109_0_0_0, RuntimeInvoker_t109_t150_t150_t111_t111_t111, t1118_m4393_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 10, 5, false, false, 619, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t144_0_0_0;
extern Il2CppType t1119_0_0_0;
extern Il2CppType t108_0_0_0;
extern Il2CppType t108_0_0_0;
extern Il2CppType t108_0_0_0;
static ParameterInfo t1118_m4394_ParameterInfos[] = 
{
	{"lo", 0, 134218262, &EmptyCustomAttributesCache, &t144_0_0_0},
	{"set", 1, 134218263, &EmptyCustomAttributesCache, &t1119_0_0_0},
	{"negate", 2, 134218264, &EmptyCustomAttributesCache, &t108_0_0_0},
	{"ignore", 3, 134218265, &EmptyCustomAttributesCache, &t108_0_0_0},
	{"reverse", 4, 134218266, &EmptyCustomAttributesCache, &t108_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t150_t5_t111_t111_t111 (MethodInfo* method, void* obj, void** args);
MethodInfo m4394_MI = 
{
	"EmitSet", (methodPointerType)&m4394, &t1118_TI, &t109_0_0_0, RuntimeInvoker_t109_t150_t5_t111_t111_t111, t1118_m4394_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 11, 5, false, false, 620, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t11_0_0_0;
extern Il2CppType t108_0_0_0;
extern Il2CppType t108_0_0_0;
static ParameterInfo t1118_m4395_ParameterInfos[] = 
{
	{"str", 0, 134218267, &EmptyCustomAttributesCache, &t11_0_0_0},
	{"ignore", 1, 134218268, &EmptyCustomAttributesCache, &t108_0_0_0},
	{"reverse", 2, 134218269, &EmptyCustomAttributesCache, &t108_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t111_t111 (MethodInfo* method, void* obj, void** args);
MethodInfo m4395_MI = 
{
	"EmitString", (methodPointerType)&m4395, &t1118_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t111_t111, t1118_m4395_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 12, 3, false, false, 621, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1106_0_0_0;
static ParameterInfo t1118_m4396_ParameterInfos[] = 
{
	{"pos", 0, 134218270, &EmptyCustomAttributesCache, &t1106_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t764 (MethodInfo* method, void* obj, void** args);
MethodInfo m4396_MI = 
{
	"EmitPosition", (methodPointerType)&m4396, &t1118_TI, &t109_0_0_0, RuntimeInvoker_t109_t764, t1118_m4396_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 13, 1, false, false, 622, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t110_0_0_0;
static ParameterInfo t1118_m4397_ParameterInfos[] = 
{
	{"gid", 0, 134218271, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m4397_MI = 
{
	"EmitOpen", (methodPointerType)&m4397, &t1118_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t1118_m4397_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 14, 1, false, false, 623, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t110_0_0_0;
static ParameterInfo t1118_m4398_ParameterInfos[] = 
{
	{"gid", 0, 134218272, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m4398_MI = 
{
	"EmitClose", (methodPointerType)&m4398, &t1118_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t1118_m4398_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 15, 1, false, false, 624, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t110_0_0_0;
extern Il2CppType t110_0_0_0;
extern Il2CppType t108_0_0_0;
extern Il2CppType t1113_0_0_0;
static ParameterInfo t1118_m4399_ParameterInfos[] = 
{
	{"gid", 0, 134218273, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"balance", 1, 134218274, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"capture", 2, 134218275, &EmptyCustomAttributesCache, &t108_0_0_0},
	{"tail", 3, 134218276, &EmptyCustomAttributesCache, &t1113_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t110_t111_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m4399_MI = 
{
	"EmitBalanceStart", (methodPointerType)&m4399, &t1118_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110_t111_t5, t1118_m4399_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 16, 4, false, false, 625, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m4400_MI = 
{
	"EmitBalance", (methodPointerType)&m4400, &t1118_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 17, 0, false, false, 626, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t110_0_0_0;
extern Il2CppType t108_0_0_0;
extern Il2CppType t108_0_0_0;
static ParameterInfo t1118_m4401_ParameterInfos[] = 
{
	{"gid", 0, 134218277, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"ignore", 1, 134218278, &EmptyCustomAttributesCache, &t108_0_0_0},
	{"reverse", 2, 134218279, &EmptyCustomAttributesCache, &t108_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t111_t111 (MethodInfo* method, void* obj, void** args);
MethodInfo m4401_MI = 
{
	"EmitReference", (methodPointerType)&m4401, &t1118_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t111_t111, t1118_m4401_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 18, 3, false, false, 627, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t110_0_0_0;
extern Il2CppType t1113_0_0_0;
static ParameterInfo t1118_m4402_ParameterInfos[] = 
{
	{"gid", 0, 134218280, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"tail", 1, 134218281, &EmptyCustomAttributesCache, &t1113_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m4402_MI = 
{
	"EmitIfDefined", (methodPointerType)&m4402, &t1118_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t1118_m4402_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 19, 2, false, false, 628, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1113_0_0_0;
static ParameterInfo t1118_m4403_ParameterInfos[] = 
{
	{"tail", 0, 134218282, &EmptyCustomAttributesCache, &t1113_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m4403_MI = 
{
	"EmitSub", (methodPointerType)&m4403, &t1118_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t1118_m4403_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 20, 1, false, false, 629, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1113_0_0_0;
extern Il2CppType t1113_0_0_0;
static ParameterInfo t1118_m4404_ParameterInfos[] = 
{
	{"yes", 0, 134218283, &EmptyCustomAttributesCache, &t1113_0_0_0},
	{"tail", 1, 134218284, &EmptyCustomAttributesCache, &t1113_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m4404_MI = 
{
	"EmitTest", (methodPointerType)&m4404, &t1118_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t5, t1118_m4404_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 21, 2, false, false, 630, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1113_0_0_0;
static ParameterInfo t1118_m4405_ParameterInfos[] = 
{
	{"next", 0, 134218285, &EmptyCustomAttributesCache, &t1113_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m4405_MI = 
{
	"EmitBranch", (methodPointerType)&m4405, &t1118_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t1118_m4405_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 22, 1, false, false, 631, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1113_0_0_0;
static ParameterInfo t1118_m4406_ParameterInfos[] = 
{
	{"target", 0, 134218286, &EmptyCustomAttributesCache, &t1113_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m4406_MI = 
{
	"EmitJump", (methodPointerType)&m4406, &t1118_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t1118_m4406_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 23, 1, false, false, 632, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t110_0_0_0;
extern Il2CppType t110_0_0_0;
extern Il2CppType t108_0_0_0;
extern Il2CppType t1113_0_0_0;
static ParameterInfo t1118_m4407_ParameterInfos[] = 
{
	{"min", 0, 134218287, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"max", 1, 134218288, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"lazy", 2, 134218289, &EmptyCustomAttributesCache, &t108_0_0_0},
	{"until", 3, 134218290, &EmptyCustomAttributesCache, &t1113_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t110_t111_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m4407_MI = 
{
	"EmitRepeat", (methodPointerType)&m4407, &t1118_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110_t111_t5, t1118_m4407_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 24, 4, false, false, 633, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1113_0_0_0;
static ParameterInfo t1118_m4408_ParameterInfos[] = 
{
	{"repeat", 0, 134218291, &EmptyCustomAttributesCache, &t1113_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m4408_MI = 
{
	"EmitUntil", (methodPointerType)&m4408, &t1118_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t1118_m4408_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 25, 1, false, false, 634, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t110_0_0_0;
extern Il2CppType t110_0_0_0;
extern Il2CppType t108_0_0_0;
extern Il2CppType t1113_0_0_0;
static ParameterInfo t1118_m4409_ParameterInfos[] = 
{
	{"min", 0, 134218292, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"max", 1, 134218293, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"lazy", 2, 134218294, &EmptyCustomAttributesCache, &t108_0_0_0},
	{"tail", 3, 134218295, &EmptyCustomAttributesCache, &t1113_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t110_t111_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m4409_MI = 
{
	"EmitFastRepeat", (methodPointerType)&m4409, &t1118_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110_t111_t5, t1118_m4409_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 28, 4, false, false, 635, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1113_0_0_0;
static ParameterInfo t1118_m4410_ParameterInfos[] = 
{
	{"tail", 0, 134218296, &EmptyCustomAttributesCache, &t1113_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m4410_MI = 
{
	"EmitIn", (methodPointerType)&m4410, &t1118_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t1118_m4410_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 26, 1, false, false, 636, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t108_0_0_0;
extern Il2CppType t110_0_0_0;
extern Il2CppType t1113_0_0_0;
static ParameterInfo t1118_m4411_ParameterInfos[] = 
{
	{"reverse", 0, 134218297, &EmptyCustomAttributesCache, &t108_0_0_0},
	{"offset", 1, 134218298, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"tail", 2, 134218299, &EmptyCustomAttributesCache, &t1113_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t111_t110_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m4411_MI = 
{
	"EmitAnchor", (methodPointerType)&m4411, &t1118_TI, &t109_0_0_0, RuntimeInvoker_t109_t111_t110_t5, t1118_m4411_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 29, 3, false, false, 637, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t110_0_0_0;
extern Il2CppType t110_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t1118_m4412_ParameterInfos[] = 
{
	{"count", 0, 134218300, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"min", 1, 134218301, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"max", 2, 134218302, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t110_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m4412_MI = 
{
	"EmitInfo", (methodPointerType)&m4412, &t1118_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110_t110, t1118_m4412_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 27, 3, false, false, 638, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1113_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m4413_MI = 
{
	"NewLink", (methodPointerType)&m4413, &t1118_TI, &t1113_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 486, 0, 32, 0, false, false, 639, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1113_0_0_0;
static ParameterInfo t1118_m4414_ParameterInfos[] = 
{
	{"lref", 0, 134218303, &EmptyCustomAttributesCache, &t1113_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m4414_MI = 
{
	"ResolveLink", (methodPointerType)&m4414, &t1118_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t1118_m4414_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 33, 1, false, false, 640, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m4415_MI = 
{
	"EmitBranchEnd", (methodPointerType)&m4415, &t1118_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 30, 0, false, false, 641, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m4416_MI = 
{
	"EmitAlternationEnd", (methodPointerType)&m4416, &t1118_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 31, 0, false, false, 642, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t108_0_0_0;
extern Il2CppType t108_0_0_0;
extern Il2CppType t108_0_0_0;
extern Il2CppType t108_0_0_0;
static ParameterInfo t1118_m4417_ParameterInfos[] = 
{
	{"negate", 0, 134218304, &EmptyCustomAttributesCache, &t108_0_0_0},
	{"ignore", 1, 134218305, &EmptyCustomAttributesCache, &t108_0_0_0},
	{"reverse", 2, 134218306, &EmptyCustomAttributesCache, &t108_0_0_0},
	{"lazy", 3, 134218307, &EmptyCustomAttributesCache, &t108_0_0_0},
};
extern Il2CppType t1105_0_0_0;
extern void* RuntimeInvoker_t1105_t111_t111_t111_t111 (MethodInfo* method, void* obj, void** args);
MethodInfo m4417_MI = 
{
	"MakeFlags", (methodPointerType)&m4417, &t1118_TI, &t1105_0_0_0, RuntimeInvoker_t1105_t111_t111_t111_t111, t1118_m4417_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 4, false, false, 643, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1104_0_0_0;
static ParameterInfo t1118_m4418_ParameterInfos[] = 
{
	{"op", 0, 134218308, &EmptyCustomAttributesCache, &t1104_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t764 (MethodInfo* method, void* obj, void** args);
MethodInfo m4418_MI = 
{
	"Emit", (methodPointerType)&m4418, &t1118_TI, &t109_0_0_0, RuntimeInvoker_t109_t764, t1118_m4418_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 644, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1104_0_0_0;
extern Il2CppType t1105_0_0_0;
static ParameterInfo t1118_m4419_ParameterInfos[] = 
{
	{"op", 0, 134218309, &EmptyCustomAttributesCache, &t1104_0_0_0},
	{"flags", 1, 134218310, &EmptyCustomAttributesCache, &t1105_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t764_t764 (MethodInfo* method, void* obj, void** args);
MethodInfo m4419_MI = 
{
	"Emit", (methodPointerType)&m4419, &t1118_TI, &t109_0_0_0, RuntimeInvoker_t109_t764_t764, t1118_m4419_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, false, 645, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t764_0_0_0;
static ParameterInfo t1118_m4420_ParameterInfos[] = 
{
	{"word", 0, 134218311, &EmptyCustomAttributesCache, &t764_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t150 (MethodInfo* method, void* obj, void** args);
MethodInfo m4420_MI = 
{
	"Emit", (methodPointerType)&m4420, &t1118_TI, &t109_0_0_0, RuntimeInvoker_t109_t150, t1118_m4420_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 646, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m4421_MI = 
{
	"get_CurrentAddress", (methodPointerType)&m4421, &t1118_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 2177, 0, 255, 0, false, false, 647, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1113_0_0_0;
static ParameterInfo t1118_m4422_ParameterInfos[] = 
{
	{"lref", 0, 134218312, &EmptyCustomAttributesCache, &t1113_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m4422_MI = 
{
	"BeginLink", (methodPointerType)&m4422, &t1118_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t1118_m4422_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 648, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1113_0_0_0;
static ParameterInfo t1118_m4423_ParameterInfos[] = 
{
	{"lref", 0, 134218313, &EmptyCustomAttributesCache, &t1113_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m4423_MI = 
{
	"EmitLink", (methodPointerType)&m4423, &t1118_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t1118_m4423_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 649, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1118_MIs[] =
{
	&m4384_MI,
	&m4385_MI,
	&m4386_MI,
	&m4387_MI,
	&m4388_MI,
	&m4389_MI,
	&m4390_MI,
	&m4391_MI,
	&m4392_MI,
	&m4393_MI,
	&m4394_MI,
	&m4395_MI,
	&m4396_MI,
	&m4397_MI,
	&m4398_MI,
	&m4399_MI,
	&m4400_MI,
	&m4401_MI,
	&m4402_MI,
	&m4403_MI,
	&m4404_MI,
	&m4405_MI,
	&m4406_MI,
	&m4407_MI,
	&m4408_MI,
	&m4409_MI,
	&m4410_MI,
	&m4411_MI,
	&m4412_MI,
	&m4413_MI,
	&m4414_MI,
	&m4415_MI,
	&m4416_MI,
	&m4417_MI,
	&m4418_MI,
	&m4419_MI,
	&m4420_MI,
	&m4421_MI,
	&m4422_MI,
	&m4423_MI,
	NULL
};
extern TypeInfo t1116_TI;
static TypeInfo* t1118_TI__nestedTypes[2] =
{
	&t1116_TI,
	NULL
};
static MethodInfo* t1118_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m4386_MI,
	&m4387_MI,
	&m4388_MI,
	&m4390_MI,
	&m4391_MI,
	&m4392_MI,
	&m4393_MI,
	&m4394_MI,
	&m4395_MI,
	&m4396_MI,
	&m4397_MI,
	&m4398_MI,
	&m4399_MI,
	&m4400_MI,
	&m4401_MI,
	&m4402_MI,
	&m4403_MI,
	&m4404_MI,
	&m4405_MI,
	&m4406_MI,
	&m4407_MI,
	&m4408_MI,
	&m4410_MI,
	&m4412_MI,
	&m4409_MI,
	&m4411_MI,
	&m4415_MI,
	&m4416_MI,
	&m4413_MI,
	&m4414_MI,
};
static TypeInfo* t1118_ITIs[] = 
{
	&t1139_TI,
};
static Il2CppInterfaceOffsetPair t1118_IOs[] = 
{
	{ &t1139_TI, 4},
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType t1118_0_0_0;
extern Il2CppType t1118_1_0_0;
struct t1118;
TypeInfo t1118_TI = 
{
	&g_System_dll_Image, NULL, "PatternCompiler", "System.Text.RegularExpressions", t1118_MIs, t1118_PIs, t1118_FIs, NULL, &t5_TI, t1118_TI__nestedTypes, NULL, &t1118_TI, t1118_ITIs, t1118_VT, &EmptyCustomAttributesCache, &t1118_TI, &t1118_0_0_0, &t1118_1_0_0, t1118_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1118), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, false, false, false, false, false, false, false, 40, 1, 1, 0, 1, 34, 1, 1};
#include "t1117.h"
#ifndef _MSC_VER
#else
#endif

#include "t718.h"
extern TypeInfo t718_TI;
#include "t718MD.h"
extern MethodInfo m3663_MI;
extern MethodInfo m5053_MI;
extern MethodInfo m3490_MI;
extern MethodInfo m3665_MI;
extern MethodInfo m3670_MI;
extern MethodInfo m5054_MI;


 void m4424 (t1117 * __this, MethodInfo* method){
	{
		m4367(__this, &m4367_MI);
		t718 * L_0 = (t718 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t718_TI));
		m3663(L_0, &m3663_MI);
		__this->f0 = L_0;
		return;
	}
}
 void m4425 (t1117 * __this, MethodInfo* method){
	{
		t718 * L_0 = (__this->f0);
		t5 * L_1 = (t5 *)VirtFuncInvoker0< t5 * >::Invoke(&m5053_MI, __this);
		VirtActionInvoker1< t5 * >::Invoke(&m3490_MI, L_0, L_1);
		return;
	}
}
 bool m4426 (t1117 * __this, MethodInfo* method){
	{
		t718 * L_0 = (__this->f0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m3665_MI, L_0);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0024;
		}
	}
	{
		t718 * L_2 = (__this->f0);
		t5 * L_3 = (t5 *)VirtFuncInvoker0< t5 * >::Invoke(&m3670_MI, L_2);
		VirtActionInvoker1< t5 * >::Invoke(&m5054_MI, __this, L_3);
		return 1;
	}

IL_0024:
	{
		return 0;
	}
}
// Metadata Definition System.Text.RegularExpressions.LinkStack
extern Il2CppType t718_0_0_1;
FieldInfo t1117_f0_FieldInfo = 
{
	"stack", &t718_0_0_1, &t1117_TI, offsetof(t1117, f0), &EmptyCustomAttributesCache};
static FieldInfo* t1117_FIs[] =
{
	&t1117_f0_FieldInfo,
	NULL
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m4424_MI = 
{
	".ctor", (methodPointerType)&m4424, &t1117_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 657, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m4425_MI = 
{
	"Push", (methodPointerType)&m4425, &t1117_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, false, 658, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
MethodInfo m4426_MI = 
{
	"Pop", (methodPointerType)&m4426, &t1117_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, false, 659, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m5053_MI = 
{
	"GetCurrent", NULL, &t1117_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 1476, 0, 4, 0, false, false, 660, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t5_0_0_0;
static ParameterInfo t1117_m5054_ParameterInfos[] = 
{
	{"l", 0, 134218318, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m5054_MI = 
{
	"SetCurrent", NULL, &t1117_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t1117_m5054_ParameterInfos, &EmptyCustomAttributesCache, 1476, 0, 5, 1, false, false, 661, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1117_MIs[] =
{
	&m4424_MI,
	&m4425_MI,
	&m4426_MI,
	&m5053_MI,
	&m5054_MI,
	NULL
};
static MethodInfo* t1117_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	NULL,
	NULL,
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType t1117_0_0_0;
extern Il2CppType t1117_1_0_0;
struct t1117;
TypeInfo t1117_TI = 
{
	&g_System_dll_Image, NULL, "LinkStack", "System.Text.RegularExpressions", t1117_MIs, NULL, t1117_FIs, NULL, &t1113_TI, NULL, NULL, &t1117_TI, NULL, t1117_VT, &EmptyCustomAttributesCache, &t1117_TI, &t1117_0_0_0, &t1117_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1117), 0, -1, 0, 0, -1, 1048704, 0, false, false, false, false, false, false, false, false, false, false, false, false, 5, 0, 1, 0, 0, 6, 0, 0};
#include "t1120.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1120_TI;
#include "t1120MD.h"



extern MethodInfo m4427_MI;
 bool m4427 (t1120 * __this, MethodInfo* method){
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = (__this->f0);
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_1 = (__this->f1);
		G_B3_0 = ((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_001b;
	}

IL_001a:
	{
		G_B3_0 = 0;
	}

IL_001b:
	{
		return G_B3_0;
	}
}
extern MethodInfo m4428_MI;
 int32_t m4428 (t1120 * __this, MethodInfo* method){
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = (__this->f0);
		int32_t L_1 = (__this->f1);
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_2 = (__this->f0);
		G_B3_0 = L_2;
		goto IL_0022;
	}

IL_001c:
	{
		int32_t L_3 = (__this->f1);
		G_B3_0 = L_3;
	}

IL_0022:
	{
		return G_B3_0;
	}
}
extern MethodInfo m4429_MI;
 int32_t m4429 (t1120 * __this, MethodInfo* method){
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = (__this->f0);
		int32_t L_1 = (__this->f1);
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_0023;
		}
	}
	{
		int32_t L_2 = (__this->f1);
		int32_t L_3 = (__this->f0);
		G_B3_0 = ((int32_t)(L_2-L_3));
		goto IL_0030;
	}

IL_0023:
	{
		int32_t L_4 = (__this->f0);
		int32_t L_5 = (__this->f1);
		G_B3_0 = ((int32_t)(L_4-L_5));
	}

IL_0030:
	{
		return G_B3_0;
	}
}
// Metadata Definition System.Text.RegularExpressions.Mark
extern Il2CppType t110_0_0_6;
FieldInfo t1120_f0_FieldInfo = 
{
	"Start", &t110_0_0_6, &t1120_TI, offsetof(t1120, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_6;
FieldInfo t1120_f1_FieldInfo = 
{
	"End", &t110_0_0_6, &t1120_TI, offsetof(t1120, f1) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_6;
FieldInfo t1120_f2_FieldInfo = 
{
	"Previous", &t110_0_0_6, &t1120_TI, offsetof(t1120, f2) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t1120_FIs[] =
{
	&t1120_f0_FieldInfo,
	&t1120_f1_FieldInfo,
	&t1120_f2_FieldInfo,
	NULL
};
static PropertyInfo t1120____IsDefined_PropertyInfo = 
{
	&t1120_TI, "IsDefined", &m4427_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1120____Index_PropertyInfo = 
{
	&t1120_TI, "Index", &m4428_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1120____Length_PropertyInfo = 
{
	&t1120_TI, "Length", &m4429_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1120_PIs[] =
{
	&t1120____IsDefined_PropertyInfo,
	&t1120____Index_PropertyInfo,
	&t1120____Length_PropertyInfo,
	NULL
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
MethodInfo m4427_MI = 
{
	"get_IsDefined", (methodPointerType)&m4427, &t1120_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 662, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m4428_MI = 
{
	"get_Index", (methodPointerType)&m4428, &t1120_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 663, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m4429_MI = 
{
	"get_Length", (methodPointerType)&m4429, &t1120_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 664, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1120_MIs[] =
{
	&m4427_MI,
	&m4428_MI,
	&m4429_MI,
	NULL
};
static MethodInfo* t1120_VT[] =
{
	&m2042_MI,
	&m465_MI,
	&m2043_MI,
	&m2148_MI,
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType t1120_0_0_0;
extern Il2CppType t1120_1_0_0;
TypeInfo t1120_TI = 
{
	&g_System_dll_Image, NULL, "Mark", "System.Text.RegularExpressions", t1120_MIs, t1120_PIs, t1120_FIs, NULL, &t267_TI, NULL, NULL, &t1120_TI, NULL, t1120_VT, &EmptyCustomAttributesCache, &t1120_TI, &t1120_0_0_0, &t1120_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1120)+ sizeof (Il2CppObject), 0, sizeof(t1120 ), 0, 0, -1, 1048840, 0, true, false, false, false, false, false, false, false, false, false, true, true, 3, 3, 3, 0, 0, 4, 0, 0};
#include "t1121.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1121_TI;
#include "t1121MD.h"

#include "t1221.h"
extern TypeInfo t1221_TI;
extern TypeInfo t55_TI;
#include "t1221MD.h"
extern MethodInfo m4996_MI;


extern MethodInfo m4430_MI;
 int32_t m4430 (t1121 * __this, MethodInfo* method){
	int32_t V_0 = 0;
	{
		t55* L_0 = (__this->f0);
		int32_t L_1 = (__this->f1);
		int32_t L_2 = ((int32_t)(L_1-1));
		V_0 = L_2;
		__this->f1 = L_2;
		int32_t L_3 = V_0;
		return (*(int32_t*)(int32_t*)SZArrayLdElema(L_0, L_3));
	}
}
extern MethodInfo m4431_MI;
 void m4431 (t1121 * __this, int32_t p0, MethodInfo* method){
	int32_t V_0 = 0;
	t55* V_1 = {0};
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		t55* L_0 = (__this->f0);
		if (L_0)
		{
			goto IL_001c;
		}
	}
	{
		__this->f0 = ((t55*)SZArrayNew(InitializedTypeInfo(&t55_TI), 8));
		goto IL_006e;
	}

IL_001c:
	{
		int32_t L_1 = (__this->f1);
		t55* L_2 = (__this->f0);
		if ((((uint32_t)L_1) != ((uint32_t)(((int32_t)(((t107 *)L_2)->max_length))))))
		{
			goto IL_006e;
		}
	}
	{
		t55* L_3 = (__this->f0);
		V_0 = (((int32_t)(((t107 *)L_3)->max_length)));
		V_0 = ((int32_t)(V_0+((int32_t)((int32_t)V_0>>(int32_t)1))));
		V_1 = ((t55*)SZArrayNew(InitializedTypeInfo(&t55_TI), V_0));
		V_2 = 0;
		goto IL_005b;
	}

IL_004c:
	{
		t55* L_4 = (__this->f0);
		int32_t L_5 = V_2;
		*((int32_t*)(int32_t*)SZArrayLdElema(V_1, V_2)) = (int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_4, L_5));
		V_2 = ((int32_t)(V_2+1));
	}

IL_005b:
	{
		int32_t L_6 = (__this->f1);
		if ((((int32_t)V_2) < ((int32_t)L_6)))
		{
			goto IL_004c;
		}
	}
	{
		__this->f0 = V_1;
	}

IL_006e:
	{
		t55* L_7 = (__this->f0);
		int32_t L_8 = (__this->f1);
		int32_t L_9 = L_8;
		V_3 = L_9;
		__this->f1 = ((int32_t)(L_9+1));
		*((int32_t*)(int32_t*)SZArrayLdElema(L_7, V_3)) = (int32_t)p0;
		return;
	}
}
extern MethodInfo m4432_MI;
 int32_t m4432 (t1121 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->f1);
		return L_0;
	}
}
extern MethodInfo m4433_MI;
 void m4433 (t1121 * __this, int32_t p0, MethodInfo* method){
	{
		int32_t L_0 = (__this->f1);
		if ((((int32_t)p0) <= ((int32_t)L_0)))
		{
			goto IL_0017;
		}
	}
	{
		t1221 * L_1 = (t1221 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1221_TI));
		m4996(L_1, (t11*) &_stringLiteral524, &m4996_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0017:
	{
		__this->f1 = p0;
		return;
	}
}
// Conversion methods for marshalling of: System.Text.RegularExpressions.Interpreter/IntStack
void t1121_marshal(const t1121& unmarshaled, t1121_marshaled& marshaled)
{
	marshaled.f0 = il2cpp_codegen_marshal_array<int32_t>((Il2CppCodeGenArray*)unmarshaled.f0);
	marshaled.f1 = unmarshaled.f1;
}
void t1121_marshal_back(const t1121_marshaled& marshaled, t1121& unmarshaled)
{
	extern TypeInfo t110_TI;
	unmarshaled.f0 = (t55*)il2cpp_codegen_marshal_array_result(&t110_TI, marshaled.f0, 1);
	unmarshaled.f1 = marshaled.f1;
}
// Conversion method for clean up from marshalling of: System.Text.RegularExpressions.Interpreter/IntStack
void t1121_marshal_cleanup(t1121_marshaled& marshaled)
{
}
// Metadata Definition System.Text.RegularExpressions.Interpreter/IntStack
extern Il2CppType t55_0_0_1;
FieldInfo t1121_f0_FieldInfo = 
{
	"values", &t55_0_0_1, &t1121_TI, offsetof(t1121, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t1121_f1_FieldInfo = 
{
	"count", &t110_0_0_1, &t1121_TI, offsetof(t1121, f1) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t1121_FIs[] =
{
	&t1121_f0_FieldInfo,
	&t1121_f1_FieldInfo,
	NULL
};
static PropertyInfo t1121____Count_PropertyInfo = 
{
	&t1121_TI, "Count", &m4432_MI, &m4433_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1121_PIs[] =
{
	&t1121____Count_PropertyInfo,
	NULL
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m4430_MI = 
{
	"Pop", (methodPointerType)&m4430, &t1121_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, false, 686, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t110_0_0_0;
static ParameterInfo t1121_m4431_ParameterInfos[] = 
{
	{"value", 0, 134218356, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m4431_MI = 
{
	"Push", (methodPointerType)&m4431, &t1121_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t1121_m4431_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 687, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m4432_MI = 
{
	"get_Count", (methodPointerType)&m4432, &t1121_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 688, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t110_0_0_0;
static ParameterInfo t1121_m4433_ParameterInfos[] = 
{
	{"value", 0, 134218357, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m4433_MI = 
{
	"set_Count", (methodPointerType)&m4433, &t1121_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t1121_m4433_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, false, 689, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1121_MIs[] =
{
	&m4430_MI,
	&m4431_MI,
	&m4432_MI,
	&m4433_MI,
	NULL
};
static MethodInfo* t1121_VT[] =
{
	&m2042_MI,
	&m465_MI,
	&m2043_MI,
	&m2148_MI,
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType t1121_0_0_0;
extern Il2CppType t1121_1_0_0;
TypeInfo t1121_TI = 
{
	&g_System_dll_Image, NULL, "IntStack", "", t1121_MIs, t1121_PIs, t1121_FIs, NULL, &t267_TI, NULL, &t1124_TI, &t1121_TI, NULL, t1121_VT, &EmptyCustomAttributesCache, &t1121_TI, &t1121_0_0_0, &t1121_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)t1121_marshal, (methodPointerType)t1121_marshal_back, (methodPointerType)t1121_marshal_cleanup, sizeof (t1121)+ sizeof (Il2CppObject), 0, sizeof(t1121_marshaled), 0, 0, -1, 1048843, 0, true, false, false, false, false, false, false, false, false, false, false, false, 4, 1, 2, 0, 0, 4, 0, 0};
#include "t1122.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1122_TI;
#include "t1122MD.h"



extern MethodInfo m4434_MI;
 void m4434 (t1122 * __this, t1122 * p0, int32_t p1, int32_t p2, bool p3, int32_t p4, MethodInfo* method){
	{
		m460(__this, &m460_MI);
		__this->f5 = p0;
		__this->f1 = p1;
		__this->f2 = p2;
		__this->f3 = p3;
		__this->f4 = p4;
		__this->f0 = (-1);
		__this->f6 = 0;
		return;
	}
}
extern MethodInfo m4435_MI;
 int32_t m4435 (t1122 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->f6);
		return L_0;
	}
}
extern MethodInfo m4436_MI;
 void m4436 (t1122 * __this, int32_t p0, MethodInfo* method){
	{
		__this->f6 = p0;
		return;
	}
}
extern MethodInfo m4437_MI;
 int32_t m4437 (t1122 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->f0);
		return L_0;
	}
}
extern MethodInfo m4438_MI;
 void m4438 (t1122 * __this, int32_t p0, MethodInfo* method){
	{
		__this->f0 = p0;
		return;
	}
}
extern MethodInfo m4439_MI;
 bool m4439 (t1122 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->f1);
		int32_t L_1 = (__this->f6);
		return ((((int32_t)((((int32_t)L_0) > ((int32_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
extern MethodInfo m4440_MI;
 bool m4440 (t1122 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->f2);
		int32_t L_1 = (__this->f6);
		return ((((int32_t)((((int32_t)L_0) > ((int32_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
extern MethodInfo m4441_MI;
 bool m4441 (t1122 * __this, MethodInfo* method){
	{
		bool L_0 = (__this->f3);
		return L_0;
	}
}
extern MethodInfo m4442_MI;
 int32_t m4442 (t1122 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->f4);
		return L_0;
	}
}
extern MethodInfo m4443_MI;
 t1122 * m4443 (t1122 * __this, MethodInfo* method){
	{
		t1122 * L_0 = (__this->f5);
		return L_0;
	}
}
// Metadata Definition System.Text.RegularExpressions.Interpreter/RepeatContext
extern Il2CppType t110_0_0_1;
FieldInfo t1122_f0_FieldInfo = 
{
	"start", &t110_0_0_1, &t1122_TI, offsetof(t1122, f0), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t1122_f1_FieldInfo = 
{
	"min", &t110_0_0_1, &t1122_TI, offsetof(t1122, f1), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t1122_f2_FieldInfo = 
{
	"max", &t110_0_0_1, &t1122_TI, offsetof(t1122, f2), &EmptyCustomAttributesCache};
extern Il2CppType t108_0_0_1;
FieldInfo t1122_f3_FieldInfo = 
{
	"lazy", &t108_0_0_1, &t1122_TI, offsetof(t1122, f3), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t1122_f4_FieldInfo = 
{
	"expr_pc", &t110_0_0_1, &t1122_TI, offsetof(t1122, f4), &EmptyCustomAttributesCache};
extern Il2CppType t1122_0_0_1;
FieldInfo t1122_f5_FieldInfo = 
{
	"previous", &t1122_0_0_1, &t1122_TI, offsetof(t1122, f5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t1122_f6_FieldInfo = 
{
	"count", &t110_0_0_1, &t1122_TI, offsetof(t1122, f6), &EmptyCustomAttributesCache};
static FieldInfo* t1122_FIs[] =
{
	&t1122_f0_FieldInfo,
	&t1122_f1_FieldInfo,
	&t1122_f2_FieldInfo,
	&t1122_f3_FieldInfo,
	&t1122_f4_FieldInfo,
	&t1122_f5_FieldInfo,
	&t1122_f6_FieldInfo,
	NULL
};
static PropertyInfo t1122____Count_PropertyInfo = 
{
	&t1122_TI, "Count", &m4435_MI, &m4436_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1122____Start_PropertyInfo = 
{
	&t1122_TI, "Start", &m4437_MI, &m4438_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1122____IsMinimum_PropertyInfo = 
{
	&t1122_TI, "IsMinimum", &m4439_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1122____IsMaximum_PropertyInfo = 
{
	&t1122_TI, "IsMaximum", &m4440_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1122____IsLazy_PropertyInfo = 
{
	&t1122_TI, "IsLazy", &m4441_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1122____Expression_PropertyInfo = 
{
	&t1122_TI, "Expression", &m4442_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1122____Previous_PropertyInfo = 
{
	&t1122_TI, "Previous", &m4443_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1122_PIs[] =
{
	&t1122____Count_PropertyInfo,
	&t1122____Start_PropertyInfo,
	&t1122____IsMinimum_PropertyInfo,
	&t1122____IsMaximum_PropertyInfo,
	&t1122____IsLazy_PropertyInfo,
	&t1122____Expression_PropertyInfo,
	&t1122____Previous_PropertyInfo,
	NULL
};
extern Il2CppType t1122_0_0_0;
extern Il2CppType t1122_0_0_0;
extern Il2CppType t110_0_0_0;
extern Il2CppType t110_0_0_0;
extern Il2CppType t108_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t1122_m4434_ParameterInfos[] = 
{
	{"previous", 0, 134218358, &EmptyCustomAttributesCache, &t1122_0_0_0},
	{"min", 1, 134218359, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"max", 2, 134218360, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"lazy", 3, 134218361, &EmptyCustomAttributesCache, &t108_0_0_0},
	{"expr_pc", 4, 134218362, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110_t110_t111_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m4434_MI = 
{
	".ctor", (methodPointerType)&m4434, &t1122_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110_t110_t111_t110, t1122_m4434_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 5, false, false, 690, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m4435_MI = 
{
	"get_Count", (methodPointerType)&m4435, &t1122_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 691, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t110_0_0_0;
static ParameterInfo t1122_m4436_ParameterInfos[] = 
{
	{"value", 0, 134218363, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m4436_MI = 
{
	"set_Count", (methodPointerType)&m4436, &t1122_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t1122_m4436_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, false, 692, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m4437_MI = 
{
	"get_Start", (methodPointerType)&m4437, &t1122_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 693, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t110_0_0_0;
static ParameterInfo t1122_m4438_ParameterInfos[] = 
{
	{"value", 0, 134218364, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m4438_MI = 
{
	"set_Start", (methodPointerType)&m4438, &t1122_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t1122_m4438_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, false, 694, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
MethodInfo m4439_MI = 
{
	"get_IsMinimum", (methodPointerType)&m4439, &t1122_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 695, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
MethodInfo m4440_MI = 
{
	"get_IsMaximum", (methodPointerType)&m4440, &t1122_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 696, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
MethodInfo m4441_MI = 
{
	"get_IsLazy", (methodPointerType)&m4441, &t1122_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 697, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m4442_MI = 
{
	"get_Expression", (methodPointerType)&m4442, &t1122_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 698, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1122_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m4443_MI = 
{
	"get_Previous", (methodPointerType)&m4443, &t1122_TI, &t1122_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 699, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1122_MIs[] =
{
	&m4434_MI,
	&m4435_MI,
	&m4436_MI,
	&m4437_MI,
	&m4438_MI,
	&m4439_MI,
	&m4440_MI,
	&m4441_MI,
	&m4442_MI,
	&m4443_MI,
	NULL
};
static MethodInfo* t1122_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType t1122_1_0_0;
struct t1122;
TypeInfo t1122_TI = 
{
	&g_System_dll_Image, NULL, "RepeatContext", "", t1122_MIs, t1122_PIs, t1122_FIs, NULL, &t5_TI, NULL, &t1124_TI, &t1122_TI, NULL, t1122_VT, &EmptyCustomAttributesCache, &t1122_TI, &t1122_0_0_0, &t1122_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1122), 0, -1, 0, 0, -1, 1048579, 0, false, false, false, false, false, false, false, false, false, false, false, false, 10, 7, 7, 0, 0, 4, 0, 0};
#include "t1123.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1123_TI;
#include "t1123MD.h"



// Metadata Definition System.Text.RegularExpressions.Interpreter/Mode
extern Il2CppType t110_0_0_1542;
FieldInfo t1123_f1_FieldInfo = 
{
	"value__", &t110_0_0_1542, &t1123_TI, offsetof(t1123, f1) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t1123_0_0_32854;
FieldInfo t1123_f2_FieldInfo = 
{
	"Search", &t1123_0_0_32854, &t1123_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1123_0_0_32854;
FieldInfo t1123_f3_FieldInfo = 
{
	"Match", &t1123_0_0_32854, &t1123_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1123_0_0_32854;
FieldInfo t1123_f4_FieldInfo = 
{
	"Count", &t1123_0_0_32854, &t1123_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t1123_FIs[] =
{
	&t1123_f1_FieldInfo,
	&t1123_f2_FieldInfo,
	&t1123_f3_FieldInfo,
	&t1123_f4_FieldInfo,
	NULL
};
static const int32_t t1123_f2_DefaultValueData = 0;
static Il2CppFieldDefaultValueEntry t1123_f2_DefaultValue = 
{
	&t1123_f2_FieldInfo, { (char*)&t1123_f2_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1123_f3_DefaultValueData = 1;
static Il2CppFieldDefaultValueEntry t1123_f3_DefaultValue = 
{
	&t1123_f3_FieldInfo, { (char*)&t1123_f3_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1123_f4_DefaultValueData = 2;
static Il2CppFieldDefaultValueEntry t1123_f4_DefaultValue = 
{
	&t1123_f4_FieldInfo, { (char*)&t1123_f4_DefaultValueData, &t110_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t1123_FDVs[] = 
{
	&t1123_f2_DefaultValue,
	&t1123_f3_DefaultValue,
	&t1123_f4_DefaultValue,
	NULL
};
static MethodInfo* t1123_MIs[] =
{
	NULL
};
static MethodInfo* t1123_VT[] =
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
static Il2CppInterfaceOffsetPair t1123_IOs[] = 
{
	{ &t120_TI, 4},
	{ &t121_TI, 5},
	{ &t122_TI, 21},
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType t1123_0_0_0;
extern Il2CppType t1123_1_0_0;
TypeInfo t1123_TI = 
{
	&g_System_dll_Image, NULL, "Mode", "", t1123_MIs, NULL, t1123_FIs, NULL, &t18_TI, NULL, &t1124_TI, &t110_TI, NULL, t1123_VT, &EmptyCustomAttributesCache, &t110_TI, &t1123_0_0_0, &t1123_1_0_0, t1123_IOs, NULL, NULL, t1123_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1123)+ sizeof (Il2CppObject), sizeof (int32_t), sizeof(int32_t), 0, 0, -1, 259, 0, true, false, false, true, false, false, false, false, false, false, false, false, 0, 0, 4, 0, 0, 23, 0, 3};
#ifndef _MSC_VER
#else
#endif

#include "t1125.h"
#include "t1090.h"
#include "t1091.h"
#include "System_ArrayTypes.h"
#include "t1095.h"
#include "t1092.h"
#include "t1093.h"
#include "t1089.h"
#include "t1096.h"
extern TypeInfo t1090_TI;
extern TypeInfo t1125_TI;
extern TypeInfo t146_TI;
extern TypeInfo t1126_TI;
extern TypeInfo t1092_TI;
extern TypeInfo t1089_TI;
extern TypeInfo t1095_TI;
extern TypeInfo t1096_TI;
#include "t1089MD.h"
#include "t1090MD.h"
#include "t1125MD.h"
#include "t107MD.h"
#include "t1092MD.h"
#include "t1095MD.h"
#include "t1093MD.h"
#include "t1096MD.h"
extern MethodInfo m4278_MI;
extern MethodInfo m4445_MI;
extern MethodInfo m4448_MI;
extern MethodInfo m4464_MI;
extern MethodInfo m4312_MI;
extern MethodInfo m4459_MI;
extern MethodInfo m4450_MI;
extern MethodInfo m4453_MI;
extern MethodInfo m4528_MI;
extern MethodInfo m4531_MI;
extern MethodInfo m4530_MI;
extern MethodInfo m4451_MI;
extern MethodInfo m4460_MI;
extern MethodInfo m4449_MI;
extern MethodInfo m4454_MI;
extern MethodInfo m4455_MI;
extern MethodInfo m4456_MI;
extern MethodInfo m4457_MI;
extern MethodInfo m4458_MI;
extern MethodInfo m2455_MI;
extern MethodInfo m4447_MI;
extern MethodInfo m4452_MI;
extern MethodInfo m557_MI;
extern MethodInfo m4461_MI;
extern MethodInfo m4993_MI;
extern MethodInfo m4281_MI;
extern MethodInfo m4298_MI;
extern MethodInfo m4290_MI;
extern MethodInfo m4462_MI;
extern MethodInfo m4309_MI;
extern MethodInfo m4310_MI;
extern MethodInfo m4463_MI;
extern MethodInfo m4294_MI;
extern MethodInfo m4313_MI;
extern MethodInfo m4304_MI;


 void m4444 (t1124 * __this, t1027* p0, MethodInfo* method){
	t1121  V_0 = {0};
	{
		Initobj (&t1121_TI, (&V_0));
		__this->f11 = V_0;
		m4278(__this, &m4278_MI);
		__this->f1 = p0;
		__this->f7 = (t1125 *)NULL;
		int32_t L_0 = m4445(__this, 1, &m4445_MI);
		__this->f5 = ((int32_t)(L_0+1));
		int32_t L_1 = m4445(__this, 3, &m4445_MI);
		__this->f6 = L_1;
		__this->f2 = 7;
		int32_t L_2 = (__this->f5);
		__this->f16 = ((t55*)SZArrayNew(InitializedTypeInfo(&t55_TI), L_2));
		return;
	}
}
 int32_t m4445 (t1124 * __this, int32_t p0, MethodInfo* method){
	int32_t V_0 = 0;
	{
		t1027* L_0 = (__this->f1);
		int32_t L_1 = ((int32_t)(p0+1));
		V_0 = (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_0, L_1));
		V_0 = ((int32_t)((int32_t)V_0<<(int32_t)((int32_t)16)));
		t1027* L_2 = (__this->f1);
		int32_t L_3 = p0;
		V_0 = ((int32_t)(V_0+(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_2, L_3))));
		return V_0;
	}
}
extern MethodInfo m4446_MI;
 t1090 * m4446 (t1124 * __this, t1091 * p0, t11* p1, int32_t p2, int32_t p3, MethodInfo* method){
	{
		__this->f3 = p1;
		__this->f4 = p3;
		__this->f8 = p2;
		int32_t* L_0 = &(__this->f8);
		int32_t L_1 = (__this->f2);
		bool L_2 = m4448(__this, 1, L_0, L_1, &m4448_MI);
		if (!L_2)
		{
			goto IL_0036;
		}
	}
	{
		t1090 * L_3 = m4464(__this, p0, &m4464_MI);
		return L_3;
	}

IL_0036:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1090_TI));
		t1090 * L_4 = m4312(NULL, &m4312_MI);
		return L_4;
	}
}
 void m4447 (t1124 * __this, MethodInfo* method){
	t1122 * V_0 = {0};
	{
		m4459(__this, &m4459_MI);
		V_0 = (t1122 *)NULL;
		__this->f9 = (t1122 *)NULL;
		__this->f10 = V_0;
		return;
	}
}
 bool m4448 (t1124 * __this, int32_t p0, int32_t* p1, int32_t p2, MethodInfo* method){
	int32_t V_0 = 0;
	uint16_t V_1 = 0;
	uint16_t V_2 = {0};
	uint16_t V_3 = {0};
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	bool V_6 = false;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	uint16_t V_10 = {0};
	bool V_11 = false;
	bool V_12 = false;
	t11* V_13 = {0};
	bool V_14 = false;
	bool V_15 = false;
	int32_t V_16 = 0;
	int32_t V_17 = 0;
	uint16_t V_18 = 0x0;
	bool V_19 = false;
	bool V_20 = false;
	int32_t V_21 = 0;
	int32_t V_22 = 0;
	int32_t V_23 = 0;
	int32_t V_24 = 0;
	int32_t V_25 = 0;
	int32_t V_26 = 0;
	int32_t V_27 = 0;
	int32_t V_28 = 0;
	int32_t V_29 = 0;
	int32_t V_30 = 0;
	uint16_t V_31 = {0};
	int32_t V_32 = 0;
	t1122 * V_33 = {0};
	int32_t V_34 = 0;
	int32_t V_35 = 0;
	int32_t V_36 = 0;
	int32_t V_37 = 0;
	int32_t V_38 = 0;
	int32_t V_39 = 0;
	int32_t V_40 = 0;
	int32_t V_41 = 0;
	uint16_t V_42 = 0;
	int32_t V_43 = 0;
	int32_t V_44 = 0;
	int32_t V_45 = 0;
	uint16_t V_46 = {0};
	uint16_t V_47 = {0};
	int32_t V_48 = 0;
	int32_t V_49 = 0;
	int32_t V_50 = 0;
	int32_t V_51 = 0;
	uint16_t V_52 = {0};
	uint16_t V_53 = {0};
	int32_t V_54 = {0};
	int32_t G_B7_0 = 0;
	int32_t G_B29_0 = 0;
	int32_t G_B33_0 = 0;
	int32_t G_B48_0 = 0;
	int32_t G_B69_0 = 0;
	int32_t G_B96_0 = 0;
	int32_t G_B162_0 = 0;
	int32_t G_B162_1 = 0;
	t1124 * G_B162_2 = {0};
	int32_t G_B161_0 = 0;
	int32_t G_B161_1 = 0;
	t1124 * G_B161_2 = {0};
	int32_t G_B163_0 = 0;
	int32_t G_B163_1 = 0;
	int32_t G_B163_2 = 0;
	t1124 * G_B163_3 = {0};
	{
		V_0 = (*((int32_t*)p1));
	}

IL_0003:
	{
		goto IL_0fee;
	}

IL_0008:
	{
		t1027* L_0 = (__this->f1);
		int32_t L_1 = p2;
		V_1 = (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_0, L_1));
		V_2 = (((uint16_t)((int32_t)((int32_t)V_1&(int32_t)((int32_t)255)))));
		V_3 = (((uint16_t)((int32_t)((int32_t)V_1&(int32_t)((int32_t)65280)))));
		V_52 = V_2;
		if (V_52 == 0)
		{
			goto IL_04b8;
		}
		if (V_52 == 1)
		{
			goto IL_04bd;
		}
		if (V_52 == 2)
		{
			goto IL_04c2;
		}
		if (V_52 == 3)
		{
			goto IL_04e7;
		}
		if (V_52 == 4)
		{
			goto IL_05ab;
		}
		if (V_52 == 5)
		{
			goto IL_06ef;
		}
		if (V_52 == 6)
		{
			goto IL_06ef;
		}
		if (V_52 == 7)
		{
			goto IL_06ef;
		}
		if (V_52 == 8)
		{
			goto IL_06ef;
		}
		if (V_52 == 9)
		{
			goto IL_06ef;
		}
		if (V_52 == 10)
		{
			goto IL_070a;
		}
		if (V_52 == 11)
		{
			goto IL_073c;
		}
		if (V_52 == 12)
		{
			goto IL_0757;
		}
		if (V_52 == 13)
		{
			goto IL_07db;
		}
		if (V_52 == 14)
		{
			goto IL_0772;
		}
		if (V_52 == 15)
		{
			goto IL_07e0;
		}
		if (V_52 == 16)
		{
			goto IL_0817;
		}
		if (V_52 == 17)
		{
			goto IL_0840;
		}
		if (V_52 == 18)
		{
			goto IL_088a;
		}
		if (V_52 == 19)
		{
			goto IL_08db;
		}
		if (V_52 == 20)
		{
			goto IL_08ee;
		}
		if (V_52 == 21)
		{
			goto IL_0957;
		}
		if (V_52 == 22)
		{
			goto IL_0c6f;
		}
		if (V_52 == 23)
		{
			goto IL_0096;
		}
		if (V_52 == 24)
		{
			goto IL_0fe9;
		}
	}
	{
		goto IL_0fee;
	}

IL_0096:
	{
		t1027* L_2 = (__this->f1);
		int32_t L_3 = ((int32_t)(p2+1));
		V_4 = (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_2, L_3));
		t1027* L_4 = (__this->f1);
		int32_t L_5 = ((int32_t)(p2+2));
		V_5 = (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_4, L_5));
		V_6 = ((((int32_t)((((int32_t)(((uint16_t)((int32_t)((int32_t)V_3&(int32_t)((int32_t)1024)))))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		if (!V_6)
		{
			goto IL_00ce;
		}
	}
	{
		G_B7_0 = ((int32_t)(V_0-V_5));
		goto IL_00d2;
	}

IL_00ce:
	{
		G_B7_0 = ((int32_t)(V_0+V_5));
	}

IL_00d2:
	{
		V_7 = G_B7_0;
		int32_t L_6 = (__this->f4);
		int32_t L_7 = (__this->f6);
		V_8 = ((int32_t)(((int32_t)(L_6-L_7))+V_5));
		V_9 = 0;
		t1027* L_8 = (__this->f1);
		int32_t L_9 = ((int32_t)(p2+3));
		V_10 = (((uint16_t)((int32_t)((int32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_8, L_9))&(int32_t)((int32_t)255)))));
		if ((((uint32_t)V_10) != ((uint32_t)2)))
		{
			goto IL_0285;
		}
	}
	{
		if ((((uint32_t)V_4) != ((uint32_t)6)))
		{
			goto IL_0285;
		}
	}
	{
		t1027* L_10 = (__this->f1);
		int32_t L_11 = ((int32_t)(p2+4));
		V_53 = (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_10, L_11));
		if (((uint16_t)(V_53-2)) == 0)
		{
			goto IL_0132;
		}
		if (((uint16_t)(V_53-2)) == 1)
		{
			goto IL_0165;
		}
		if (((uint16_t)(V_53-2)) == 2)
		{
			goto IL_0234;
		}
	}
	{
		goto IL_027b;
	}

IL_0132:
	{
		if (V_6)
		{
			goto IL_0140;
		}
	}
	{
		if (V_5)
		{
			goto IL_0160;
		}
	}

IL_0140:
	{
		if (!V_6)
		{
			goto IL_014a;
		}
	}
	{
		V_0 = V_5;
	}

IL_014a:
	{
		bool L_12 = m4450(__this, (&V_0), ((int32_t)(p2+V_4)), &m4450_MI);
		if (!L_12)
		{
			goto IL_0160;
		}
	}
	{
		goto IL_0ff3;
	}

IL_0160:
	{
		goto IL_0280;
	}

IL_0165:
	{
		if (V_7)
		{
			goto IL_018a;
		}
	}
	{
		V_0 = 0;
		bool L_13 = m4450(__this, (&V_0), ((int32_t)(p2+V_4)), &m4450_MI);
		if (!L_13)
		{
			goto IL_0184;
		}
	}
	{
		goto IL_0ff3;
	}

IL_0184:
	{
		V_7 = ((int32_t)(V_7+1));
	}

IL_018a:
	{
		goto IL_0210;
	}

IL_018f:
	{
		if (!V_7)
		{
			goto IL_01ac;
		}
	}
	{
		t11* L_14 = (__this->f3);
		uint16_t L_15 = m2385(L_14, ((int32_t)(V_7-1)), &m2385_MI);
		if ((((uint32_t)L_15) != ((uint32_t)((int32_t)10))))
		{
			goto IL_01f8;
		}
	}

IL_01ac:
	{
		if (!V_6)
		{
			goto IL_01ce;
		}
	}
	{
		if ((((uint32_t)V_7) != ((uint32_t)V_8)))
		{
			goto IL_01c3;
		}
	}
	{
		G_B29_0 = V_7;
		goto IL_01c8;
	}

IL_01c3:
	{
		G_B29_0 = ((int32_t)(V_7+V_5));
	}

IL_01c8:
	{
		V_0 = G_B29_0;
		goto IL_01e2;
	}

IL_01ce:
	{
		if (V_7)
		{
			goto IL_01dc;
		}
	}
	{
		G_B33_0 = V_7;
		goto IL_01e1;
	}

IL_01dc:
	{
		G_B33_0 = ((int32_t)(V_7-V_5));
	}

IL_01e1:
	{
		V_0 = G_B33_0;
	}

IL_01e2:
	{
		bool L_16 = m4450(__this, (&V_0), ((int32_t)(p2+V_4)), &m4450_MI);
		if (!L_16)
		{
			goto IL_01f8;
		}
	}
	{
		goto IL_0ff3;
	}

IL_01f8:
	{
		if (!V_6)
		{
			goto IL_020a;
		}
	}
	{
		V_7 = ((int32_t)(V_7-1));
		goto IL_0210;
	}

IL_020a:
	{
		V_7 = ((int32_t)(V_7+1));
	}

IL_0210:
	{
		if (!V_6)
		{
			goto IL_021f;
		}
	}
	{
		if ((((int32_t)V_7) >= ((int32_t)0)))
		{
			goto IL_018f;
		}
	}

IL_021f:
	{
		if (V_6)
		{
			goto IL_022f;
		}
	}
	{
		if ((((int32_t)V_7) <= ((int32_t)V_8)))
		{
			goto IL_018f;
		}
	}

IL_022f:
	{
		goto IL_0280;
	}

IL_0234:
	{
		int32_t L_17 = (__this->f8);
		if ((((uint32_t)V_7) != ((uint32_t)L_17)))
		{
			goto IL_0276;
		}
	}
	{
		if (!V_6)
		{
			goto IL_0256;
		}
	}
	{
		int32_t L_18 = (__this->f8);
		G_B48_0 = ((int32_t)(L_18+V_5));
		goto IL_025f;
	}

IL_0256:
	{
		int32_t L_19 = (__this->f8);
		G_B48_0 = ((int32_t)(L_19-V_5));
	}

IL_025f:
	{
		V_0 = G_B48_0;
		bool L_20 = m4450(__this, (&V_0), ((int32_t)(p2+V_4)), &m4450_MI);
		if (!L_20)
		{
			goto IL_0276;
		}
	}
	{
		goto IL_0ff3;
	}

IL_0276:
	{
		goto IL_0280;
	}

IL_027b:
	{
		goto IL_0280;
	}

IL_0280:
	{
		goto IL_04b3;
	}

IL_0285:
	{
		t1125 * L_21 = (__this->f7);
		if (L_21)
		{
			goto IL_02ab;
		}
	}
	{
		if ((((uint32_t)V_10) != ((uint32_t)3)))
		{
			goto IL_03d2;
		}
	}
	{
		t1027* L_22 = (__this->f1);
		int32_t L_23 = ((int32_t)(p2+4));
		if ((((uint32_t)V_4) != ((uint32_t)((int32_t)(6+(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_22, L_23)))))))
		{
			goto IL_03d2;
		}
	}

IL_02ab:
	{
		t1027* L_24 = (__this->f1);
		int32_t L_25 = ((int32_t)(p2+3));
		V_11 = ((((int32_t)((((int32_t)(((uint16_t)((int32_t)((int32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_24, L_25))&(int32_t)((int32_t)1024)))))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		t1125 * L_26 = (__this->f7);
		if (L_26)
		{
			goto IL_0304;
		}
	}
	{
		t1027* L_27 = (__this->f1);
		int32_t L_28 = ((int32_t)(p2+3));
		V_12 = ((((int32_t)((((int32_t)(((uint16_t)((int32_t)((int32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_27, L_28))&(int32_t)((int32_t)512)))))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		t11* L_29 = m4453(__this, ((int32_t)(p2+3)), &m4453_MI);
		V_13 = L_29;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1125_TI));
		t1125 * L_30 = (t1125 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1125_TI));
		m4528(L_30, V_13, V_12, V_11, &m4528_MI);
		__this->f7 = L_30;
	}

IL_0304:
	{
		goto IL_03ad;
	}

IL_0309:
	{
		if (!V_11)
		{
			goto IL_0344;
		}
	}
	{
		t1125 * L_31 = (__this->f7);
		t11* L_32 = (__this->f3);
		int32_t L_33 = m4531(L_31, L_32, V_7, V_9, &m4531_MI);
		V_7 = L_33;
		if ((((int32_t)V_7) == ((int32_t)(-1))))
		{
			goto IL_033f;
		}
	}
	{
		t1125 * L_34 = (__this->f7);
		int32_t L_35 = m4530(L_34, &m4530_MI);
		V_7 = ((int32_t)(V_7+L_35));
	}

IL_033f:
	{
		goto IL_035b;
	}

IL_0344:
	{
		t1125 * L_36 = (__this->f7);
		t11* L_37 = (__this->f3);
		int32_t L_38 = m4531(L_36, L_37, V_7, V_8, &m4531_MI);
		V_7 = L_38;
	}

IL_035b:
	{
		if ((((int32_t)V_7) >= ((int32_t)0)))
		{
			goto IL_0368;
		}
	}
	{
		goto IL_03cd;
	}

IL_0368:
	{
		if (!V_11)
		{
			goto IL_0379;
		}
	}
	{
		G_B69_0 = ((int32_t)(V_7+V_5));
		goto IL_037e;
	}

IL_0379:
	{
		G_B69_0 = ((int32_t)(V_7-V_5));
	}

IL_037e:
	{
		V_0 = G_B69_0;
		bool L_39 = m4450(__this, (&V_0), ((int32_t)(p2+V_4)), &m4450_MI);
		if (!L_39)
		{
			goto IL_0395;
		}
	}
	{
		goto IL_0ff3;
	}

IL_0395:
	{
		if (!V_11)
		{
			goto IL_03a7;
		}
	}
	{
		V_7 = ((int32_t)(V_7-2));
		goto IL_03ad;
	}

IL_03a7:
	{
		V_7 = ((int32_t)(V_7+1));
	}

IL_03ad:
	{
		if (!V_6)
		{
			goto IL_03bd;
		}
	}
	{
		if ((((int32_t)V_7) >= ((int32_t)V_9)))
		{
			goto IL_0309;
		}
	}

IL_03bd:
	{
		if (V_6)
		{
			goto IL_03cd;
		}
	}
	{
		if ((((int32_t)V_7) <= ((int32_t)V_8)))
		{
			goto IL_0309;
		}
	}

IL_03cd:
	{
		goto IL_04b3;
	}

IL_03d2:
	{
		if ((((uint32_t)V_10) != ((uint32_t)1)))
		{
			goto IL_0435;
		}
	}
	{
		goto IL_0410;
	}

IL_03df:
	{
		V_0 = V_7;
		bool L_40 = m4450(__this, (&V_0), ((int32_t)(p2+V_4)), &m4450_MI);
		if (!L_40)
		{
			goto IL_03f8;
		}
	}
	{
		goto IL_0ff3;
	}

IL_03f8:
	{
		if (!V_6)
		{
			goto IL_040a;
		}
	}
	{
		V_7 = ((int32_t)(V_7-1));
		goto IL_0410;
	}

IL_040a:
	{
		V_7 = ((int32_t)(V_7+1));
	}

IL_0410:
	{
		if (!V_6)
		{
			goto IL_0420;
		}
	}
	{
		if ((((int32_t)V_7) >= ((int32_t)V_9)))
		{
			goto IL_03df;
		}
	}

IL_0420:
	{
		if (V_6)
		{
			goto IL_0430;
		}
	}
	{
		if ((((int32_t)V_7) <= ((int32_t)V_8)))
		{
			goto IL_03df;
		}
	}

IL_0430:
	{
		goto IL_04b3;
	}

IL_0435:
	{
		goto IL_0493;
	}

IL_043a:
	{
		V_0 = V_7;
		bool L_41 = m4448(__this, 1, (&V_0), ((int32_t)(p2+3)), &m4448_MI);
		if (!L_41)
		{
			goto IL_047b;
		}
	}
	{
		if (!V_6)
		{
			goto IL_045f;
		}
	}
	{
		G_B96_0 = ((int32_t)(V_7+V_5));
		goto IL_0464;
	}

IL_045f:
	{
		G_B96_0 = ((int32_t)(V_7-V_5));
	}

IL_0464:
	{
		V_0 = G_B96_0;
		bool L_42 = m4450(__this, (&V_0), ((int32_t)(p2+V_4)), &m4450_MI);
		if (!L_42)
		{
			goto IL_047b;
		}
	}
	{
		goto IL_0ff3;
	}

IL_047b:
	{
		if (!V_6)
		{
			goto IL_048d;
		}
	}
	{
		V_7 = ((int32_t)(V_7-1));
		goto IL_0493;
	}

IL_048d:
	{
		V_7 = ((int32_t)(V_7+1));
	}

IL_0493:
	{
		if (!V_6)
		{
			goto IL_04a3;
		}
	}
	{
		if ((((int32_t)V_7) >= ((int32_t)V_9)))
		{
			goto IL_043a;
		}
	}

IL_04a3:
	{
		if (V_6)
		{
			goto IL_04b3;
		}
	}
	{
		if ((((int32_t)V_7) <= ((int32_t)V_8)))
		{
			goto IL_043a;
		}
	}

IL_04b3:
	{
		goto IL_1067;
	}

IL_04b8:
	{
		goto IL_1067;
	}

IL_04bd:
	{
		goto IL_0ff3;
	}

IL_04c2:
	{
		t1027* L_43 = (__this->f1);
		int32_t L_44 = ((int32_t)(p2+1));
		bool L_45 = m4451(__this, (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_43, L_44)), V_0, &m4451_MI);
		if (L_45)
		{
			goto IL_04dd;
		}
	}
	{
		goto IL_1067;
	}

IL_04dd:
	{
		p2 = ((int32_t)(p2+2));
		goto IL_0fee;
	}

IL_04e7:
	{
		V_14 = ((((int32_t)((((int32_t)(((uint16_t)((int32_t)((int32_t)V_3&(int32_t)((int32_t)1024)))))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		V_15 = ((((int32_t)((((int32_t)(((uint16_t)((int32_t)((int32_t)V_3&(int32_t)((int32_t)512)))))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		t1027* L_46 = (__this->f1);
		int32_t L_47 = ((int32_t)(p2+1));
		V_16 = (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_46, L_47));
		if (!V_14)
		{
			goto IL_0530;
		}
	}
	{
		V_0 = ((int32_t)(V_0-V_16));
		if ((((int32_t)V_0) >= ((int32_t)0)))
		{
			goto IL_052b;
		}
	}
	{
		goto IL_1067;
	}

IL_052b:
	{
		goto IL_0544;
	}

IL_0530:
	{
		int32_t L_48 = (__this->f4);
		if ((((int32_t)((int32_t)(V_0+V_16))) <= ((int32_t)L_48)))
		{
			goto IL_0544;
		}
	}
	{
		goto IL_1067;
	}

IL_0544:
	{
		p2 = ((int32_t)(p2+2));
		V_17 = 0;
		goto IL_0591;
	}

IL_0551:
	{
		t11* L_49 = (__this->f3);
		uint16_t L_50 = m2385(L_49, ((int32_t)(V_0+V_17)), &m2385_MI);
		V_18 = L_50;
		if (!V_15)
		{
			goto IL_0572;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t144_TI));
		uint16_t L_51 = m2457(NULL, V_18, &m2457_MI);
		V_18 = L_51;
	}

IL_0572:
	{
		t1027* L_52 = (__this->f1);
		int32_t L_53 = p2;
		p2 = ((int32_t)(L_53+1));
		int32_t L_54 = L_53;
		if ((((int32_t)V_18) == ((int32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_52, L_54)))))
		{
			goto IL_058b;
		}
	}
	{
		goto IL_1067;
	}

IL_058b:
	{
		V_17 = ((int32_t)(V_17+1));
	}

IL_0591:
	{
		if ((((int32_t)V_17) < ((int32_t)V_16)))
		{
			goto IL_0551;
		}
	}
	{
		if (V_14)
		{
			goto IL_05a6;
		}
	}
	{
		V_0 = ((int32_t)(V_0+V_16));
	}

IL_05a6:
	{
		goto IL_0fee;
	}

IL_05ab:
	{
		V_19 = ((((int32_t)((((int32_t)(((uint16_t)((int32_t)((int32_t)V_3&(int32_t)((int32_t)1024)))))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		V_20 = ((((int32_t)((((int32_t)(((uint16_t)((int32_t)((int32_t)V_3&(int32_t)((int32_t)512)))))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		t1027* L_55 = (__this->f1);
		int32_t L_56 = ((int32_t)(p2+1));
		int32_t L_57 = m4460(__this, (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_55, L_56)), &m4460_MI);
		V_21 = L_57;
		if ((((int32_t)V_21) >= ((int32_t)0)))
		{
			goto IL_05ea;
		}
	}
	{
		goto IL_1067;
	}

IL_05ea:
	{
		t1126* L_58 = (__this->f13);
		int32_t L_59 = m4428(((t1120 *)(t1120 *)SZArrayLdElema(L_58, V_21)), &m4428_MI);
		V_22 = L_59;
		t1126* L_60 = (__this->f13);
		int32_t L_61 = m4429(((t1120 *)(t1120 *)SZArrayLdElema(L_60, V_21)), &m4429_MI);
		V_23 = L_61;
		if (!V_19)
		{
			goto IL_062f;
		}
	}
	{
		V_0 = ((int32_t)(V_0-V_23));
		if ((((int32_t)V_0) >= ((int32_t)0)))
		{
			goto IL_062a;
		}
	}
	{
		goto IL_1067;
	}

IL_062a:
	{
		goto IL_0643;
	}

IL_062f:
	{
		int32_t L_62 = (__this->f4);
		if ((((int32_t)((int32_t)(V_0+V_23))) <= ((int32_t)L_62)))
		{
			goto IL_0643;
		}
	}
	{
		goto IL_1067;
	}

IL_0643:
	{
		p2 = ((int32_t)(p2+2));
		if (!V_20)
		{
			goto IL_069e;
		}
	}
	{
		V_24 = 0;
		goto IL_0690;
	}

IL_0657:
	{
		t11* L_63 = (__this->f3);
		uint16_t L_64 = m2385(L_63, ((int32_t)(V_0+V_24)), &m2385_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t144_TI));
		uint16_t L_65 = m2457(NULL, L_64, &m2457_MI);
		t11* L_66 = (__this->f3);
		uint16_t L_67 = m2385(L_66, ((int32_t)(V_22+V_24)), &m2385_MI);
		uint16_t L_68 = m2457(NULL, L_67, &m2457_MI);
		if ((((int32_t)L_65) == ((int32_t)L_68)))
		{
			goto IL_068a;
		}
	}
	{
		goto IL_1067;
	}

IL_068a:
	{
		V_24 = ((int32_t)(V_24+1));
	}

IL_0690:
	{
		if ((((int32_t)V_24) < ((int32_t)V_23)))
		{
			goto IL_0657;
		}
	}
	{
		goto IL_06de;
	}

IL_069e:
	{
		V_25 = 0;
		goto IL_06d5;
	}

IL_06a6:
	{
		t11* L_69 = (__this->f3);
		uint16_t L_70 = m2385(L_69, ((int32_t)(V_0+V_25)), &m2385_MI);
		t11* L_71 = (__this->f3);
		uint16_t L_72 = m2385(L_71, ((int32_t)(V_22+V_25)), &m2385_MI);
		if ((((int32_t)L_70) == ((int32_t)L_72)))
		{
			goto IL_06cf;
		}
	}
	{
		goto IL_1067;
	}

IL_06cf:
	{
		V_25 = ((int32_t)(V_25+1));
	}

IL_06d5:
	{
		if ((((int32_t)V_25) < ((int32_t)V_23)))
		{
			goto IL_06a6;
		}
	}

IL_06de:
	{
		if (V_19)
		{
			goto IL_06ea;
		}
	}
	{
		V_0 = ((int32_t)(V_0+V_23));
	}

IL_06ea:
	{
		goto IL_0fee;
	}

IL_06ef:
	{
		bool L_73 = m4449(__this, p0, (&V_0), (&p2), 0, &m4449_MI);
		if (L_73)
		{
			goto IL_0705;
		}
	}
	{
		goto IL_1067;
	}

IL_0705:
	{
		goto IL_0fee;
	}

IL_070a:
	{
		t1027* L_74 = (__this->f1);
		int32_t L_75 = ((int32_t)(p2+1));
		V_26 = ((int32_t)(p2+(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_74, L_75))));
		p2 = ((int32_t)(p2+2));
		bool L_76 = m4449(__this, p0, (&V_0), (&p2), 1, &m4449_MI);
		if (L_76)
		{
			goto IL_0733;
		}
	}
	{
		goto IL_1067;
	}

IL_0733:
	{
		p2 = V_26;
		goto IL_0fee;
	}

IL_073c:
	{
		t1027* L_77 = (__this->f1);
		int32_t L_78 = ((int32_t)(p2+1));
		m4454(__this, (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_77, L_78)), V_0, &m4454_MI);
		p2 = ((int32_t)(p2+2));
		goto IL_0fee;
	}

IL_0757:
	{
		t1027* L_79 = (__this->f1);
		int32_t L_80 = ((int32_t)(p2+1));
		m4455(__this, (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_79, L_80)), V_0, &m4455_MI);
		p2 = ((int32_t)(p2+2));
		goto IL_0fee;
	}

IL_0772:
	{
		V_27 = V_0;
		bool L_81 = m4448(__this, 1, (&V_0), ((int32_t)(p2+5)), &m4448_MI);
		if (L_81)
		{
			goto IL_078b;
		}
	}
	{
		goto IL_1067;
	}

IL_078b:
	{
		t1027* L_82 = (__this->f1);
		int32_t L_83 = ((int32_t)(p2+1));
		t1027* L_84 = (__this->f1);
		int32_t L_85 = ((int32_t)(p2+2));
		t1027* L_86 = (__this->f1);
		int32_t L_87 = ((int32_t)(p2+3));
		G_B161_0 = ((int32_t)((*(uint16_t*)(uint16_t*)SZArrayLdElema(L_84, L_85))));
		G_B161_1 = ((int32_t)((*(uint16_t*)(uint16_t*)SZArrayLdElema(L_82, L_83))));
		G_B161_2 = __this;
		if ((((uint32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_86, L_87))) != ((uint32_t)1)))
		{
			G_B162_0 = ((int32_t)((*(uint16_t*)(uint16_t*)SZArrayLdElema(L_84, L_85))));
			G_B162_1 = ((int32_t)((*(uint16_t*)(uint16_t*)SZArrayLdElema(L_82, L_83))));
			G_B162_2 = __this;
			goto IL_07b6;
		}
	}
	{
		G_B163_0 = 1;
		G_B163_1 = G_B161_0;
		G_B163_2 = G_B161_1;
		G_B163_3 = G_B161_2;
		goto IL_07b7;
	}

IL_07b6:
	{
		G_B163_0 = 0;
		G_B163_1 = G_B162_0;
		G_B163_2 = G_B162_1;
		G_B163_3 = G_B162_2;
	}

IL_07b7:
	{
		bool L_88 = m4456(G_B163_3, G_B163_2, G_B163_1, G_B163_0, V_27, &m4456_MI);
		if (L_88)
		{
			goto IL_07c8;
		}
	}
	{
		goto IL_1067;
	}

IL_07c8:
	{
		t1027* L_89 = (__this->f1);
		int32_t L_90 = ((int32_t)(p2+4));
		p2 = ((int32_t)(p2+(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_89, L_90))));
		goto IL_0fee;
	}

IL_07db:
	{
		goto IL_0ff3;
	}

IL_07e0:
	{
		t1027* L_91 = (__this->f1);
		int32_t L_92 = ((int32_t)(p2+2));
		int32_t L_93 = m4460(__this, (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_91, L_92)), &m4460_MI);
		V_28 = L_93;
		if ((((int32_t)V_28) >= ((int32_t)0)))
		{
			goto IL_080d;
		}
	}
	{
		t1027* L_94 = (__this->f1);
		int32_t L_95 = ((int32_t)(p2+1));
		p2 = ((int32_t)(p2+(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_94, L_95))));
		goto IL_0812;
	}

IL_080d:
	{
		p2 = ((int32_t)(p2+3));
	}

IL_0812:
	{
		goto IL_0fee;
	}

IL_0817:
	{
		bool L_96 = m4448(__this, 1, (&V_0), ((int32_t)(p2+2)), &m4448_MI);
		if (L_96)
		{
			goto IL_082d;
		}
	}
	{
		goto IL_1067;
	}

IL_082d:
	{
		t1027* L_97 = (__this->f1);
		int32_t L_98 = ((int32_t)(p2+1));
		p2 = ((int32_t)(p2+(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_97, L_98))));
		goto IL_0fee;
	}

IL_0840:
	{
		int32_t L_99 = m4457(__this, &m4457_MI);
		V_29 = L_99;
		V_30 = V_0;
		bool L_100 = m4448(__this, 1, (&V_30), ((int32_t)(p2+3)), &m4448_MI);
		if (!L_100)
		{
			goto IL_086f;
		}
	}
	{
		t1027* L_101 = (__this->f1);
		int32_t L_102 = ((int32_t)(p2+1));
		p2 = ((int32_t)(p2+(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_101, L_102))));
		goto IL_0885;
	}

IL_086f:
	{
		m4458(__this, V_29, &m4458_MI);
		t1027* L_103 = (__this->f1);
		int32_t L_104 = ((int32_t)(p2+2));
		p2 = ((int32_t)(p2+(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_103, L_104))));
	}

IL_0885:
	{
		goto IL_0fee;
	}

IL_088a:
	{
		int32_t L_105 = m4457(__this, &m4457_MI);
		V_32 = L_105;
		bool L_106 = m4448(__this, 1, (&V_0), ((int32_t)(p2+2)), &m4448_MI);
		if (!L_106)
		{
			goto IL_08a8;
		}
	}
	{
		goto IL_0ff3;
	}

IL_08a8:
	{
		m4458(__this, V_32, &m4458_MI);
		t1027* L_107 = (__this->f1);
		int32_t L_108 = ((int32_t)(p2+1));
		p2 = ((int32_t)(p2+(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_107, L_108))));
		t1027* L_109 = (__this->f1);
		int32_t L_110 = p2;
		V_31 = (((uint16_t)((int32_t)((int32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_109, L_110))&(int32_t)((int32_t)255)))));
		if (V_31)
		{
			goto IL_088a;
		}
	}
	{
		goto IL_1067;
	}

IL_08db:
	{
		t1027* L_111 = (__this->f1);
		int32_t L_112 = ((int32_t)(p2+1));
		p2 = ((int32_t)(p2+(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_111, L_112))));
		goto IL_0fee;
	}

IL_08ee:
	{
		t1122 * L_113 = (__this->f9);
		int32_t L_114 = m4445(__this, ((int32_t)(p2+2)), &m4445_MI);
		int32_t L_115 = m4445(__this, ((int32_t)(p2+4)), &m4445_MI);
		t1122 * L_116 = (t1122 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1122_TI));
		m4434(L_116, L_113, L_114, L_115, ((((int32_t)((((int32_t)(((uint16_t)((int32_t)((int32_t)V_3&(int32_t)((int32_t)2048)))))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0), ((int32_t)(p2+6)), &m4434_MI);
		__this->f9 = L_116;
		t1027* L_117 = (__this->f1);
		int32_t L_118 = ((int32_t)(p2+1));
		bool L_119 = m4448(__this, 1, (&V_0), ((int32_t)(p2+(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_117, L_118)))), &m4448_MI);
		if (!L_119)
		{
			goto IL_0941;
		}
	}
	{
		goto IL_0ff3;
	}

IL_0941:
	{
		t1122 * L_120 = (__this->f9);
		t1122 * L_121 = m4443(L_120, &m4443_MI);
		__this->f9 = L_121;
		goto IL_1067;
	}

IL_0957:
	{
		t1122 * L_122 = (__this->f9);
		V_33 = L_122;
		t1122 * L_123 = (__this->f12);
		if ((((t1122 *)L_123) != ((t1122 *)V_33)))
		{
			goto IL_0971;
		}
	}
	{
		goto IL_0ff3;
	}

IL_0971:
	{
		int32_t L_124 = m4437(V_33, &m4437_MI);
		V_34 = L_124;
		int32_t L_125 = m4435(V_33, &m4435_MI);
		V_35 = L_125;
		goto IL_09e5;
	}

IL_0988:
	{
		t1122 * L_126 = V_33;
		int32_t L_127 = m4435(L_126, &m4435_MI);
		m4436(L_126, ((int32_t)(L_127+1)), &m4436_MI);
		m4438(V_33, V_0, &m4438_MI);
		__this->f12 = V_33;
		int32_t L_128 = m4442(V_33, &m4442_MI);
		bool L_129 = m4448(__this, 1, (&V_0), L_128, &m4448_MI);
		if (L_129)
		{
			goto IL_09d3;
		}
	}
	{
		m4438(V_33, V_34, &m4438_MI);
		m4436(V_33, V_35, &m4436_MI);
		goto IL_1067;
	}

IL_09d3:
	{
		t1122 * L_130 = (__this->f12);
		if ((((t1122 *)L_130) == ((t1122 *)V_33)))
		{
			goto IL_09e5;
		}
	}
	{
		goto IL_0ff3;
	}

IL_09e5:
	{
		bool L_131 = m4439(V_33, &m4439_MI);
		if (!L_131)
		{
			goto IL_0988;
		}
	}
	{
		int32_t L_132 = m4437(V_33, &m4437_MI);
		if ((((uint32_t)V_0) != ((uint32_t)L_132)))
		{
			goto IL_0a35;
		}
	}
	{
		t1122 * L_133 = m4443(V_33, &m4443_MI);
		__this->f9 = L_133;
		__this->f12 = (t1122 *)NULL;
		bool L_134 = m4448(__this, 1, (&V_0), ((int32_t)(p2+1)), &m4448_MI);
		if (!L_134)
		{
			goto IL_0a28;
		}
	}
	{
		goto IL_0ff3;
	}

IL_0a28:
	{
		__this->f9 = V_33;
		goto IL_1067;
	}

IL_0a35:
	{
		bool L_135 = m4441(V_33, &m4441_MI);
		if (!L_135)
		{
			goto IL_0b0d;
		}
	}
	{
		goto IL_0b08;
	}

IL_0a46:
	{
		t1122 * L_136 = m4443(V_33, &m4443_MI);
		__this->f9 = L_136;
		__this->f12 = (t1122 *)NULL;
		int32_t L_137 = m4457(__this, &m4457_MI);
		V_36 = L_137;
		bool L_138 = m4448(__this, 1, (&V_0), ((int32_t)(p2+1)), &m4448_MI);
		if (!L_138)
		{
			goto IL_0a78;
		}
	}
	{
		goto IL_0ff3;
	}

IL_0a78:
	{
		m4458(__this, V_36, &m4458_MI);
		__this->f9 = V_33;
		bool L_139 = m4440(V_33, &m4440_MI);
		if (!L_139)
		{
			goto IL_0a99;
		}
	}
	{
		goto IL_1067;
	}

IL_0a99:
	{
		t1122 * L_140 = V_33;
		int32_t L_141 = m4435(L_140, &m4435_MI);
		m4436(L_140, ((int32_t)(L_141+1)), &m4436_MI);
		m4438(V_33, V_0, &m4438_MI);
		__this->f12 = V_33;
		int32_t L_142 = m4442(V_33, &m4442_MI);
		bool L_143 = m4448(__this, 1, (&V_0), L_142, &m4448_MI);
		if (L_143)
		{
			goto IL_0ae4;
		}
	}
	{
		m4438(V_33, V_34, &m4438_MI);
		m4436(V_33, V_35, &m4436_MI);
		goto IL_1067;
	}

IL_0ae4:
	{
		t1122 * L_144 = (__this->f12);
		if ((((t1122 *)L_144) == ((t1122 *)V_33)))
		{
			goto IL_0af6;
		}
	}
	{
		goto IL_0ff3;
	}

IL_0af6:
	{
		int32_t L_145 = m4437(V_33, &m4437_MI);
		if ((((uint32_t)V_0) != ((uint32_t)L_145)))
		{
			goto IL_0b08;
		}
	}
	{
		goto IL_1067;
	}

IL_0b08:
	{
		goto IL_0a46;
	}

IL_0b0d:
	{
		t1121 * L_146 = &(__this->f11);
		int32_t L_147 = m4432(L_146, &m4432_MI);
		V_37 = L_147;
		goto IL_0bd7;
	}

IL_0b1f:
	{
		int32_t L_148 = m4457(__this, &m4457_MI);
		V_38 = L_148;
		V_39 = V_0;
		int32_t L_149 = m4437(V_33, &m4437_MI);
		V_40 = L_149;
		t1122 * L_150 = V_33;
		int32_t L_151 = m4435(L_150, &m4435_MI);
		m4436(L_150, ((int32_t)(L_151+1)), &m4436_MI);
		m4438(V_33, V_0, &m4438_MI);
		__this->f12 = V_33;
		int32_t L_152 = m4442(V_33, &m4442_MI);
		bool L_153 = m4448(__this, 1, (&V_0), L_152, &m4448_MI);
		if (L_153)
		{
			goto IL_0b8c;
		}
	}
	{
		t1122 * L_154 = V_33;
		int32_t L_155 = m4435(L_154, &m4435_MI);
		m4436(L_154, ((int32_t)(L_155-1)), &m4436_MI);
		m4438(V_33, V_40, &m4438_MI);
		m4458(__this, V_38, &m4458_MI);
		goto IL_0be3;
	}

IL_0b8c:
	{
		t1122 * L_156 = (__this->f12);
		if ((((t1122 *)L_156) == ((t1122 *)V_33)))
		{
			goto IL_0bab;
		}
	}
	{
		t1121 * L_157 = &(__this->f11);
		m4433(L_157, V_37, &m4433_MI);
		goto IL_0ff3;
	}

IL_0bab:
	{
		t1121 * L_158 = &(__this->f11);
		m4431(L_158, V_38, &m4431_MI);
		t1121 * L_159 = &(__this->f11);
		m4431(L_159, V_39, &m4431_MI);
		int32_t L_160 = m4437(V_33, &m4437_MI);
		if ((((uint32_t)V_0) != ((uint32_t)L_160)))
		{
			goto IL_0bd7;
		}
	}
	{
		goto IL_0be3;
	}

IL_0bd7:
	{
		bool L_161 = m4440(V_33, &m4440_MI);
		if (!L_161)
		{
			goto IL_0b1f;
		}
	}

IL_0be3:
	{
		t1122 * L_162 = m4443(V_33, &m4443_MI);
		__this->f9 = L_162;
		goto IL_0c6a;
	}

IL_0bf5:
	{
		__this->f12 = (t1122 *)NULL;
		bool L_163 = m4448(__this, 1, (&V_0), ((int32_t)(p2+1)), &m4448_MI);
		if (!L_163)
		{
			goto IL_0c1f;
		}
	}
	{
		t1121 * L_164 = &(__this->f11);
		m4433(L_164, V_37, &m4433_MI);
		goto IL_0ff3;
	}

IL_0c1f:
	{
		t1121 * L_165 = &(__this->f11);
		int32_t L_166 = m4432(L_165, &m4432_MI);
		if ((((uint32_t)L_166) != ((uint32_t)V_37)))
		{
			goto IL_0c3e;
		}
	}
	{
		__this->f9 = V_33;
		goto IL_1067;
	}

IL_0c3e:
	{
		t1122 * L_167 = V_33;
		int32_t L_168 = m4435(L_167, &m4435_MI);
		m4436(L_167, ((int32_t)(L_168-1)), &m4436_MI);
		t1121 * L_169 = &(__this->f11);
		int32_t L_170 = m4430(L_169, &m4430_MI);
		V_0 = L_170;
		t1121 * L_171 = &(__this->f11);
		int32_t L_172 = m4430(L_171, &m4430_MI);
		m4458(__this, L_172, &m4458_MI);
	}

IL_0c6a:
	{
		goto IL_0bf5;
	}

IL_0c6f:
	{
		t1122 * L_173 = (__this->f10);
		int32_t L_174 = m4445(__this, ((int32_t)(p2+2)), &m4445_MI);
		int32_t L_175 = m4445(__this, ((int32_t)(p2+4)), &m4445_MI);
		t1122 * L_176 = (t1122 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1122_TI));
		m4434(L_176, L_173, L_174, L_175, ((((int32_t)((((int32_t)(((uint16_t)((int32_t)((int32_t)V_3&(int32_t)((int32_t)2048)))))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0), ((int32_t)(p2+6)), &m4434_MI);
		__this->f10 = L_176;
		t1122 * L_177 = (__this->f10);
		m4438(L_177, V_0, &m4438_MI);
		int32_t L_178 = m4457(__this, &m4457_MI);
		V_41 = L_178;
		t1027* L_179 = (__this->f1);
		int32_t L_180 = ((int32_t)(p2+1));
		p2 = ((int32_t)(p2+(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_179, L_180))));
		t1027* L_181 = (__this->f1);
		int32_t L_182 = p2;
		V_42 = (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_181, L_182));
		V_43 = (-1);
		V_44 = (-1);
		V_45 = 0;
		V_46 = (((uint16_t)((int32_t)((int32_t)V_42&(int32_t)((int32_t)255)))));
		if ((((int32_t)V_46) == ((int32_t)5)))
		{
			goto IL_0cf3;
		}
	}
	{
		if ((((uint32_t)V_46) != ((uint32_t)3)))
		{
			goto IL_0d92;
		}
	}

IL_0cf3:
	{
		V_47 = (((uint16_t)((int32_t)((int32_t)V_42&(int32_t)((int32_t)65280)))));
		if (!(((uint16_t)((int32_t)((int32_t)V_47&(int32_t)((int32_t)256))))))
		{
			goto IL_0d11;
		}
	}
	{
		goto IL_0d92;
	}

IL_0d11:
	{
		if ((((uint32_t)V_46) != ((uint32_t)3)))
		{
			goto IL_0d4c;
		}
	}
	{
		V_48 = 0;
		if (!(((uint16_t)((int32_t)((int32_t)V_47&(int32_t)((int32_t)1024))))))
		{
			goto IL_0d38;
		}
	}
	{
		t1027* L_183 = (__this->f1);
		int32_t L_184 = ((int32_t)(p2+1));
		V_48 = ((int32_t)((*(uint16_t*)(uint16_t*)SZArrayLdElema(L_183, L_184))-1));
	}

IL_0d38:
	{
		t1027* L_185 = (__this->f1);
		int32_t L_186 = ((int32_t)(((int32_t)(p2+2))+V_48));
		V_43 = (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_185, L_186));
		goto IL_0d58;
	}

IL_0d4c:
	{
		t1027* L_187 = (__this->f1);
		int32_t L_188 = ((int32_t)(p2+1));
		V_43 = (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_187, L_188));
	}

IL_0d58:
	{
		if (!(((uint16_t)((int32_t)((int32_t)V_47&(int32_t)((int32_t)512))))))
		{
			goto IL_0d75;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t144_TI));
		uint16_t L_189 = m2455(NULL, (((uint16_t)V_43)), &m2455_MI);
		V_44 = L_189;
		goto IL_0d79;
	}

IL_0d75:
	{
		V_44 = V_43;
	}

IL_0d79:
	{
		if (!(((uint16_t)((int32_t)((int32_t)V_47&(int32_t)((int32_t)1024))))))
		{
			goto IL_0d8f;
		}
	}
	{
		V_45 = (-1);
		goto IL_0d92;
	}

IL_0d8f:
	{
		V_45 = 0;
	}

IL_0d92:
	{
		t1122 * L_190 = (__this->f10);
		bool L_191 = m4441(L_190, &m4441_MI);
		if (!L_191)
		{
			goto IL_0ebf;
		}
	}
	{
		t1122 * L_192 = (__this->f10);
		bool L_193 = m4439(L_192, &m4439_MI);
		if (L_193)
		{
			goto IL_0de1;
		}
	}
	{
		t1122 * L_194 = (__this->f10);
		int32_t L_195 = m4442(L_194, &m4442_MI);
		bool L_196 = m4448(__this, 2, (&V_0), L_195, &m4448_MI);
		if (L_196)
		{
			goto IL_0de1;
		}
	}
	{
		t1122 * L_197 = (__this->f10);
		t1122 * L_198 = m4443(L_197, &m4443_MI);
		__this->f10 = L_198;
		goto IL_1067;
	}

IL_0de1:
	{
		V_49 = ((int32_t)(V_0+V_45));
		if ((((int32_t)V_43) < ((int32_t)0)))
		{
			goto IL_0e2c;
		}
	}
	{
		if ((((int32_t)V_49) < ((int32_t)0)))
		{
			goto IL_0e47;
		}
	}
	{
		int32_t L_199 = (__this->f4);
		if ((((int32_t)V_49) >= ((int32_t)L_199)))
		{
			goto IL_0e47;
		}
	}
	{
		t11* L_200 = (__this->f3);
		uint16_t L_201 = m2385(L_200, V_49, &m2385_MI);
		if ((((int32_t)V_43) == ((int32_t)L_201)))
		{
			goto IL_0e2c;
		}
	}
	{
		t11* L_202 = (__this->f3);
		uint16_t L_203 = m2385(L_202, V_49, &m2385_MI);
		if ((((uint32_t)V_44) != ((uint32_t)L_203)))
		{
			goto IL_0e47;
		}
	}

IL_0e2c:
	{
		__this->f12 = (t1122 *)NULL;
		bool L_204 = m4448(__this, 1, (&V_0), p2, &m4448_MI);
		if (!L_204)
		{
			goto IL_0e47;
		}
	}
	{
		goto IL_0ea9;
	}

IL_0e47:
	{
		t1122 * L_205 = (__this->f10);
		bool L_206 = m4440(L_205, &m4440_MI);
		if (!L_206)
		{
			goto IL_0e6d;
		}
	}
	{
		t1122 * L_207 = (__this->f10);
		t1122 * L_208 = m4443(L_207, &m4443_MI);
		__this->f10 = L_208;
		goto IL_1067;
	}

IL_0e6d:
	{
		m4458(__this, V_41, &m4458_MI);
		t1122 * L_209 = (__this->f10);
		int32_t L_210 = m4442(L_209, &m4442_MI);
		bool L_211 = m4448(__this, 2, (&V_0), L_210, &m4448_MI);
		if (L_211)
		{
			goto IL_0ea4;
		}
	}
	{
		t1122 * L_212 = (__this->f10);
		t1122 * L_213 = m4443(L_212, &m4443_MI);
		__this->f10 = L_213;
		goto IL_1067;
	}

IL_0ea4:
	{
		goto IL_0de1;
	}

IL_0ea9:
	{
		t1122 * L_214 = (__this->f10);
		t1122 * L_215 = m4443(L_214, &m4443_MI);
		__this->f10 = L_215;
		goto IL_0ff3;
	}

IL_0ebf:
	{
		t1122 * L_216 = (__this->f10);
		int32_t L_217 = m4442(L_216, &m4442_MI);
		bool L_218 = m4448(__this, 2, (&V_0), L_217, &m4448_MI);
		if (L_218)
		{
			goto IL_0eee;
		}
	}
	{
		t1122 * L_219 = (__this->f10);
		t1122 * L_220 = m4443(L_219, &m4443_MI);
		__this->f10 = L_220;
		goto IL_1067;
	}

IL_0eee:
	{
		t1122 * L_221 = (__this->f10);
		int32_t L_222 = m4435(L_221, &m4435_MI);
		if ((((int32_t)L_222) <= ((int32_t)0)))
		{
			goto IL_0f1f;
		}
	}
	{
		t1122 * L_223 = (__this->f10);
		int32_t L_224 = m4437(L_223, &m4437_MI);
		t1122 * L_225 = (__this->f10);
		int32_t L_226 = m4435(L_225, &m4435_MI);
		V_50 = ((int32_t)((int32_t)((int32_t)(V_0-L_224))/(int32_t)L_226));
		goto IL_0f22;
	}

IL_0f1f:
	{
		V_50 = 0;
	}

IL_0f22:
	{
		V_51 = ((int32_t)(V_0+V_45));
		if ((((int32_t)V_43) < ((int32_t)0)))
		{
			goto IL_0f6d;
		}
	}
	{
		if ((((int32_t)V_51) < ((int32_t)0)))
		{
			goto IL_0f88;
		}
	}
	{
		int32_t L_227 = (__this->f4);
		if ((((int32_t)V_51) >= ((int32_t)L_227)))
		{
			goto IL_0f88;
		}
	}
	{
		t11* L_228 = (__this->f3);
		uint16_t L_229 = m2385(L_228, V_51, &m2385_MI);
		if ((((int32_t)V_43) == ((int32_t)L_229)))
		{
			goto IL_0f6d;
		}
	}
	{
		t11* L_230 = (__this->f3);
		uint16_t L_231 = m2385(L_230, V_51, &m2385_MI);
		if ((((uint32_t)V_44) != ((uint32_t)L_231)))
		{
			goto IL_0f88;
		}
	}

IL_0f6d:
	{
		__this->f12 = (t1122 *)NULL;
		bool L_232 = m4448(__this, 1, (&V_0), p2, &m4448_MI);
		if (!L_232)
		{
			goto IL_0f88;
		}
	}
	{
		goto IL_0fd3;
	}

IL_0f88:
	{
		t1122 * L_233 = (__this->f10);
		t1122 * L_234 = L_233;
		int32_t L_235 = m4435(L_234, &m4435_MI);
		m4436(L_234, ((int32_t)(L_235-1)), &m4436_MI);
		t1122 * L_236 = (__this->f10);
		bool L_237 = m4439(L_236, &m4439_MI);
		if (L_237)
		{
			goto IL_0fc1;
		}
	}
	{
		t1122 * L_238 = (__this->f10);
		t1122 * L_239 = m4443(L_238, &m4443_MI);
		__this->f10 = L_239;
		goto IL_1067;
	}

IL_0fc1:
	{
		V_0 = ((int32_t)(V_0-V_50));
		m4458(__this, V_41, &m4458_MI);
		goto IL_0f22;
	}

IL_0fd3:
	{
		t1122 * L_240 = (__this->f10);
		t1122 * L_241 = m4443(L_240, &m4443_MI);
		__this->f10 = L_241;
		goto IL_0ff3;
	}

IL_0fe9:
	{
		goto IL_1067;
	}

IL_0fee:
	{
		goto IL_0008;
	}

IL_0ff3:
	{
		*((int32_t*)(p1)) = (int32_t)V_0;
		V_54 = p0;
		if ((((int32_t)V_54) == ((int32_t)1)))
		{
			goto IL_100e;
		}
	}
	{
		if ((((int32_t)V_54) == ((int32_t)2)))
		{
			goto IL_1010;
		}
	}
	{
		goto IL_1067;
	}

IL_100e:
	{
		return 1;
	}

IL_1010:
	{
		t1122 * L_242 = (__this->f10);
		t1122 * L_243 = L_242;
		int32_t L_244 = m4435(L_243, &m4435_MI);
		m4436(L_243, ((int32_t)(L_244+1)), &m4436_MI);
		t1122 * L_245 = (__this->f10);
		bool L_246 = m4440(L_245, &m4440_MI);
		if (L_246)
		{
			goto IL_1053;
		}
	}
	{
		t1122 * L_247 = (__this->f10);
		bool L_248 = m4441(L_247, &m4441_MI);
		if (!L_248)
		{
			goto IL_1055;
		}
	}
	{
		t1122 * L_249 = (__this->f10);
		bool L_250 = m4439(L_249, &m4439_MI);
		if (!L_250)
		{
			goto IL_1055;
		}
	}

IL_1053:
	{
		return 1;
	}

IL_1055:
	{
		t1122 * L_251 = (__this->f10);
		int32_t L_252 = m4442(L_251, &m4442_MI);
		p2 = L_252;
		goto IL_0003;
	}

IL_1067:
	{
		V_54 = p0;
		if ((((int32_t)V_54) == ((int32_t)1)))
		{
			goto IL_107f;
		}
	}
	{
		if ((((int32_t)V_54) == ((int32_t)2)))
		{
			goto IL_1081;
		}
	}
	{
		goto IL_10b2;
	}

IL_107f:
	{
		return 0;
	}

IL_1081:
	{
		t1122 * L_253 = (__this->f10);
		bool L_254 = m4441(L_253, &m4441_MI);
		if (L_254)
		{
			goto IL_10a3;
		}
	}
	{
		t1122 * L_255 = (__this->f10);
		bool L_256 = m4439(L_255, &m4439_MI);
		if (!L_256)
		{
			goto IL_10a3;
		}
	}
	{
		return 1;
	}

IL_10a3:
	{
		t1122 * L_257 = (__this->f10);
		int32_t L_258 = m4437(L_257, &m4437_MI);
		*((int32_t*)(p1)) = (int32_t)L_258;
		return 0;
	}

IL_10b2:
	{
		return 0;
	}
}
 bool m4449 (t1124 * __this, int32_t p0, int32_t* p1, int32_t* p2, bool p3, MethodInfo* method){
	bool V_0 = false;
	uint16_t V_1 = 0x0;
	bool V_2 = false;
	bool V_3 = false;
	uint16_t V_4 = 0;
	uint16_t V_5 = {0};
	uint16_t V_6 = {0};
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	uint16_t V_14 = {0};
	{
		V_0 = 0;
		V_1 = 0;
	}

IL_0004:
	{
		t1027* L_0 = (__this->f1);
		int32_t L_1 = (*((int32_t*)p2));
		V_4 = (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_0, L_1));
		V_5 = (((uint16_t)((int32_t)((int32_t)V_4&(int32_t)((int32_t)255)))));
		V_6 = (((uint16_t)((int32_t)((int32_t)V_4&(int32_t)((int32_t)65280)))));
		*((int32_t*)(p2)) = (int32_t)((int32_t)((*((int32_t*)p2))+1));
		V_3 = ((((int32_t)((((int32_t)(((uint16_t)((int32_t)((int32_t)V_6&(int32_t)((int32_t)512)))))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		if (V_0)
		{
			goto IL_00aa;
		}
	}
	{
		if (!(((uint16_t)((int32_t)((int32_t)V_6&(int32_t)((int32_t)1024))))))
		{
			goto IL_0075;
		}
	}
	{
		if ((((int32_t)(*((int32_t*)p1))) > ((int32_t)0)))
		{
			goto IL_0059;
		}
	}
	{
		return 0;
	}

IL_0059:
	{
		t11* L_2 = (__this->f3);
		int32_t L_3 = ((int32_t)((*((int32_t*)p1))-1));
		V_13 = L_3;
		*((int32_t*)(p1)) = (int32_t)L_3;
		uint16_t L_4 = m2385(L_2, V_13, &m2385_MI);
		V_1 = L_4;
		goto IL_009b;
	}

IL_0075:
	{
		int32_t L_5 = (__this->f4);
		if ((((int32_t)(*((int32_t*)p1))) < ((int32_t)L_5)))
		{
			goto IL_0084;
		}
	}
	{
		return 0;
	}

IL_0084:
	{
		t11* L_6 = (__this->f3);
		int32_t L_7 = (*((int32_t*)p1));
		V_13 = L_7;
		*((int32_t*)(p1)) = (int32_t)((int32_t)(L_7+1));
		uint16_t L_8 = m2385(L_6, V_13, &m2385_MI);
		V_1 = L_8;
	}

IL_009b:
	{
		if (!V_3)
		{
			goto IL_00a8;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t144_TI));
		uint16_t L_9 = m2457(NULL, V_1, &m2457_MI);
		V_1 = L_9;
	}

IL_00a8:
	{
		V_0 = 1;
	}

IL_00aa:
	{
		V_2 = ((((int32_t)((((int32_t)(((uint16_t)((int32_t)((int32_t)V_6&(int32_t)((int32_t)256)))))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		V_14 = V_5;
		if (V_14 == 0)
		{
			goto IL_00f4;
		}
		if (V_14 == 1)
		{
			goto IL_00f2;
		}
		if (V_14 == 2)
		{
			goto IL_0221;
		}
		if (V_14 == 3)
		{
			goto IL_0221;
		}
		if (V_14 == 4)
		{
			goto IL_0221;
		}
		if (V_14 == 5)
		{
			goto IL_00f6;
		}
		if (V_14 == 6)
		{
			goto IL_0118;
		}
		if (V_14 == 7)
		{
			goto IL_013f;
		}
		if (V_14 == 8)
		{
			goto IL_0166;
		}
		if (V_14 == 9)
		{
			goto IL_01a8;
		}
	}
	{
		goto IL_0221;
	}

IL_00f2:
	{
		return 1;
	}

IL_00f4:
	{
		return 0;
	}

IL_00f6:
	{
		t1027* L_10 = (__this->f1);
		int32_t L_11 = (*((int32_t*)p2));
		V_13 = L_11;
		*((int32_t*)(p2)) = (int32_t)((int32_t)(L_11+1));
		int32_t L_12 = V_13;
		if ((((uint32_t)V_1) != ((uint32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_10, L_12)))))
		{
			goto IL_0113;
		}
	}
	{
		return ((((int32_t)V_2) == ((int32_t)0))? 1 : 0);
	}

IL_0113:
	{
		goto IL_0221;
	}

IL_0118:
	{
		t1027* L_13 = (__this->f1);
		int32_t L_14 = (*((int32_t*)p2));
		V_13 = L_14;
		*((int32_t*)(p2)) = (int32_t)((int32_t)(L_14+1));
		int32_t L_15 = V_13;
		bool L_16 = m4365(NULL, (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_13, L_15)), V_1, &m4365_MI);
		if (!L_16)
		{
			goto IL_013a;
		}
	}
	{
		return ((((int32_t)V_2) == ((int32_t)0))? 1 : 0);
	}

IL_013a:
	{
		goto IL_0221;
	}

IL_013f:
	{
		t1027* L_17 = (__this->f1);
		int32_t L_18 = (*((int32_t*)p2));
		V_13 = L_18;
		*((int32_t*)(p2)) = (int32_t)((int32_t)(L_18+1));
		int32_t L_19 = V_13;
		bool L_20 = m4365(NULL, (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_17, L_19)), V_1, &m4365_MI);
		if (L_20)
		{
			goto IL_0161;
		}
	}
	{
		return ((((int32_t)V_2) == ((int32_t)0))? 1 : 0);
	}

IL_0161:
	{
		goto IL_0221;
	}

IL_0166:
	{
		t1027* L_21 = (__this->f1);
		int32_t L_22 = (*((int32_t*)p2));
		V_13 = L_22;
		*((int32_t*)(p2)) = (int32_t)((int32_t)(L_22+1));
		int32_t L_23 = V_13;
		V_7 = (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_21, L_23));
		t1027* L_24 = (__this->f1);
		int32_t L_25 = (*((int32_t*)p2));
		V_13 = L_25;
		*((int32_t*)(p2)) = (int32_t)((int32_t)(L_25+1));
		int32_t L_26 = V_13;
		V_8 = (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_24, L_26));
		if ((((int32_t)V_7) > ((int32_t)V_1)))
		{
			goto IL_01a3;
		}
	}
	{
		if ((((int32_t)V_1) > ((int32_t)V_8)))
		{
			goto IL_01a3;
		}
	}
	{
		return ((((int32_t)V_2) == ((int32_t)0))? 1 : 0);
	}

IL_01a3:
	{
		goto IL_0221;
	}

IL_01a8:
	{
		t1027* L_27 = (__this->f1);
		int32_t L_28 = (*((int32_t*)p2));
		V_13 = L_28;
		*((int32_t*)(p2)) = (int32_t)((int32_t)(L_28+1));
		int32_t L_29 = V_13;
		V_9 = (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_27, L_29));
		t1027* L_30 = (__this->f1);
		int32_t L_31 = (*((int32_t*)p2));
		V_13 = L_31;
		*((int32_t*)(p2)) = (int32_t)((int32_t)(L_31+1));
		int32_t L_32 = V_13;
		V_10 = (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_30, L_32));
		V_11 = (*((int32_t*)p2));
		*((int32_t*)(p2)) = (int32_t)((int32_t)((*((int32_t*)p2))+V_10));
		V_12 = ((uint16_t)(V_1-V_9));
		if ((((int32_t)V_12) < ((int32_t)0)))
		{
			goto IL_01f4;
		}
	}
	{
		if ((((int32_t)V_12) < ((int32_t)((int32_t)((int32_t)V_10<<(int32_t)4)))))
		{
			goto IL_01f9;
		}
	}

IL_01f4:
	{
		goto IL_0221;
	}

IL_01f9:
	{
		t1027* L_33 = (__this->f1);
		int32_t L_34 = ((int32_t)(V_11+((int32_t)((int32_t)V_12>>(int32_t)4))));
		if (!((int32_t)((int32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_33, L_34))&(int32_t)((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)V_12&(int32_t)((int32_t)15)))&(int32_t)((int32_t)31))))))))
		{
			goto IL_021c;
		}
	}
	{
		return ((((int32_t)V_2) == ((int32_t)0))? 1 : 0);
	}

IL_021c:
	{
		goto IL_0221;
	}

IL_0221:
	{
		if (p3)
		{
			goto IL_0004;
		}
	}
	{
		return V_2;
	}
}
 bool m4450 (t1124 * __this, int32_t* p0, int32_t p1, MethodInfo* method){
	int32_t V_0 = 0;
	{
		m4447(__this, &m4447_MI);
		V_0 = (*((int32_t*)p0));
		t1126* L_0 = (__this->f13);
		t55* L_1 = (__this->f16);
		int32_t L_2 = 0;
		((t1120 *)(t1120 *)SZArrayLdElema(L_0, (*(int32_t*)(int32_t*)SZArrayLdElema(L_1, L_2))))->f0 = V_0;
		bool L_3 = m4448(__this, 1, (&V_0), p1, &m4448_MI);
		if (!L_3)
		{
			goto IL_004f;
		}
	}
	{
		t1126* L_4 = (__this->f13);
		t55* L_5 = (__this->f16);
		int32_t L_6 = 0;
		((t1120 *)(t1120 *)SZArrayLdElema(L_4, (*(int32_t*)(int32_t*)SZArrayLdElema(L_5, L_6))))->f1 = V_0;
		*((int32_t*)(p0)) = (int32_t)V_0;
		return 1;
	}

IL_004f:
	{
		return 0;
	}
}
 bool m4451 (t1124 * __this, uint16_t p0, int32_t p1, MethodInfo* method){
	uint16_t V_0 = {0};
	int32_t G_B6_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B14_0 = 0;
	int32_t G_B18_0 = 0;
	{
		V_0 = p0;
		if (((uint16_t)(V_0-1)) == 0)
		{
			goto IL_0033;
		}
		if (((uint16_t)(V_0-1)) == 1)
		{
			goto IL_0033;
		}
		if (((uint16_t)(V_0-1)) == 2)
		{
			goto IL_0038;
		}
		if (((uint16_t)(V_0-1)) == 3)
		{
			goto IL_0054;
		}
		if (((uint16_t)(V_0-1)) == 4)
		{
			goto IL_005e;
		}
		if (((uint16_t)(V_0-1)) == 5)
		{
			goto IL_00af;
		}
		if (((uint16_t)(V_0-1)) == 6)
		{
			goto IL_008f;
		}
		if (((uint16_t)(V_0-1)) == 7)
		{
			goto IL_00b9;
		}
		if (((uint16_t)(V_0-1)) == 8)
		{
			goto IL_012c;
		}
	}
	{
		goto IL_01a2;
	}

IL_0033:
	{
		return ((((int32_t)p1) == ((int32_t)0))? 1 : 0);
	}

IL_0038:
	{
		if (!p1)
		{
			goto IL_0052;
		}
	}
	{
		t11* L_0 = (__this->f3);
		uint16_t L_1 = m2385(L_0, ((int32_t)(p1-1)), &m2385_MI);
		G_B6_0 = ((((int32_t)L_1) == ((int32_t)((int32_t)10)))? 1 : 0);
		goto IL_0053;
	}

IL_0052:
	{
		G_B6_0 = 1;
	}

IL_0053:
	{
		return G_B6_0;
	}

IL_0054:
	{
		int32_t L_2 = (__this->f8);
		return ((((int32_t)p1) == ((int32_t)L_2))? 1 : 0);
	}

IL_005e:
	{
		int32_t L_3 = (__this->f4);
		if ((((int32_t)p1) == ((int32_t)L_3)))
		{
			goto IL_008d;
		}
	}
	{
		int32_t L_4 = (__this->f4);
		if ((((uint32_t)p1) != ((uint32_t)((int32_t)(L_4-1)))))
		{
			goto IL_008a;
		}
	}
	{
		t11* L_5 = (__this->f3);
		uint16_t L_6 = m2385(L_5, p1, &m2385_MI);
		G_B12_0 = ((((int32_t)L_6) == ((int32_t)((int32_t)10)))? 1 : 0);
		goto IL_008b;
	}

IL_008a:
	{
		G_B12_0 = 0;
	}

IL_008b:
	{
		G_B14_0 = G_B12_0;
		goto IL_008e;
	}

IL_008d:
	{
		G_B14_0 = 1;
	}

IL_008e:
	{
		return G_B14_0;
	}

IL_008f:
	{
		int32_t L_7 = (__this->f4);
		if ((((int32_t)p1) == ((int32_t)L_7)))
		{
			goto IL_00ad;
		}
	}
	{
		t11* L_8 = (__this->f3);
		uint16_t L_9 = m2385(L_8, p1, &m2385_MI);
		G_B18_0 = ((((int32_t)L_9) == ((int32_t)((int32_t)10)))? 1 : 0);
		goto IL_00ae;
	}

IL_00ad:
	{
		G_B18_0 = 1;
	}

IL_00ae:
	{
		return G_B18_0;
	}

IL_00af:
	{
		int32_t L_10 = (__this->f4);
		return ((((int32_t)p1) == ((int32_t)L_10))? 1 : 0);
	}

IL_00b9:
	{
		int32_t L_11 = (__this->f4);
		if (L_11)
		{
			goto IL_00c6;
		}
	}
	{
		return 0;
	}

IL_00c6:
	{
		if (p1)
		{
			goto IL_00df;
		}
	}
	{
		t11* L_12 = (__this->f3);
		uint16_t L_13 = m2385(L_12, p1, &m2385_MI);
		bool L_14 = m4452(__this, L_13, &m4452_MI);
		return L_14;
	}

IL_00df:
	{
		int32_t L_15 = (__this->f4);
		if ((((uint32_t)p1) != ((uint32_t)L_15)))
		{
			goto IL_0100;
		}
	}
	{
		t11* L_16 = (__this->f3);
		uint16_t L_17 = m2385(L_16, ((int32_t)(p1-1)), &m2385_MI);
		bool L_18 = m4452(__this, L_17, &m4452_MI);
		return L_18;
	}

IL_0100:
	{
		t11* L_19 = (__this->f3);
		uint16_t L_20 = m2385(L_19, p1, &m2385_MI);
		bool L_21 = m4452(__this, L_20, &m4452_MI);
		t11* L_22 = (__this->f3);
		uint16_t L_23 = m2385(L_22, ((int32_t)(p1-1)), &m2385_MI);
		bool L_24 = m4452(__this, L_23, &m4452_MI);
		return ((((int32_t)((((int32_t)L_21) == ((int32_t)L_24))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_012c:
	{
		int32_t L_25 = (__this->f4);
		if (L_25)
		{
			goto IL_0139;
		}
	}
	{
		return 0;
	}

IL_0139:
	{
		if (p1)
		{
			goto IL_0155;
		}
	}
	{
		t11* L_26 = (__this->f3);
		uint16_t L_27 = m2385(L_26, p1, &m2385_MI);
		bool L_28 = m4452(__this, L_27, &m4452_MI);
		return ((((int32_t)L_28) == ((int32_t)0))? 1 : 0);
	}

IL_0155:
	{
		int32_t L_29 = (__this->f4);
		if ((((uint32_t)p1) != ((uint32_t)L_29)))
		{
			goto IL_0179;
		}
	}
	{
		t11* L_30 = (__this->f3);
		uint16_t L_31 = m2385(L_30, ((int32_t)(p1-1)), &m2385_MI);
		bool L_32 = m4452(__this, L_31, &m4452_MI);
		return ((((int32_t)L_32) == ((int32_t)0))? 1 : 0);
	}

IL_0179:
	{
		t11* L_33 = (__this->f3);
		uint16_t L_34 = m2385(L_33, p1, &m2385_MI);
		bool L_35 = m4452(__this, L_34, &m4452_MI);
		t11* L_36 = (__this->f3);
		uint16_t L_37 = m2385(L_36, ((int32_t)(p1-1)), &m2385_MI);
		bool L_38 = m4452(__this, L_37, &m4452_MI);
		return ((((int32_t)L_35) == ((int32_t)L_38))? 1 : 0);
	}

IL_01a2:
	{
		return 0;
	}
}
 bool m4452 (t1124 * __this, uint16_t p0, MethodInfo* method){
	{
		bool L_0 = m4365(NULL, 3, p0, &m4365_MI);
		return L_0;
	}
}
 t11* m4453 (t1124 * __this, int32_t p0, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	t146* V_2 = {0};
	int32_t V_3 = 0;
	{
		t1027* L_0 = (__this->f1);
		int32_t L_1 = ((int32_t)(p0+1));
		V_0 = (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_0, L_1));
		V_1 = ((int32_t)(p0+2));
		V_2 = ((t146*)SZArrayNew(InitializedTypeInfo(&t146_TI), V_0));
		V_3 = 0;
		goto IL_0030;
	}

IL_001d:
	{
		t1027* L_2 = (__this->f1);
		int32_t L_3 = V_1;
		V_1 = ((int32_t)(L_3+1));
		int32_t L_4 = L_3;
		*((uint16_t*)(uint16_t*)SZArrayLdElema(V_2, V_3)) = (uint16_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_2, L_4));
		V_3 = ((int32_t)(V_3+1));
	}

IL_0030:
	{
		if ((((int32_t)V_3) < ((int32_t)V_0)))
		{
			goto IL_001d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT((&t11_TI));
		t11* L_5 = (t11*)il2cpp_codegen_object_new ((&t11_TI));
		L_5 = m561(L_5, V_2, &m557_MI);
		return L_5;
	}
}
 void m4454 (t1124 * __this, int32_t p0, int32_t p1, MethodInfo* method){
	int32_t V_0 = 0;
	{
		t55* L_0 = (__this->f16);
		int32_t L_1 = p0;
		V_0 = (*(int32_t*)(int32_t*)SZArrayLdElema(L_0, L_1));
		int32_t L_2 = (__this->f14);
		if ((((int32_t)V_0) < ((int32_t)L_2)))
		{
			goto IL_002b;
		}
	}
	{
		t1126* L_3 = (__this->f13);
		bool L_4 = m4427(((t1120 *)(t1120 *)SZArrayLdElema(L_3, V_0)), &m4427_MI);
		if (!L_4)
		{
			goto IL_003c;
		}
	}

IL_002b:
	{
		int32_t L_5 = m4461(__this, V_0, &m4461_MI);
		V_0 = L_5;
		t55* L_6 = (__this->f16);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_6, p0)) = (int32_t)V_0;
	}

IL_003c:
	{
		t1126* L_7 = (__this->f13);
		((t1120 *)(t1120 *)SZArrayLdElema(L_7, V_0))->f0 = p1;
		return;
	}
}
 void m4455 (t1124 * __this, int32_t p0, int32_t p1, MethodInfo* method){
	{
		t1126* L_0 = (__this->f13);
		t55* L_1 = (__this->f16);
		int32_t L_2 = p0;
		((t1120 *)(t1120 *)SZArrayLdElema(L_0, (*(int32_t*)(int32_t*)SZArrayLdElema(L_1, L_2))))->f1 = p1;
		return;
	}
}
 bool m4456 (t1124 * __this, int32_t p0, int32_t p1, bool p2, int32_t p3, MethodInfo* method){
	int32_t V_0 = 0;
	{
		t55* L_0 = (__this->f16);
		int32_t L_1 = p1;
		V_0 = (*(int32_t*)(int32_t*)SZArrayLdElema(L_0, L_1));
		if ((((int32_t)V_0) == ((int32_t)(-1))))
		{
			goto IL_0027;
		}
	}
	{
		t1126* L_2 = (__this->f13);
		int32_t L_3 = m4428(((t1120 *)(t1120 *)SZArrayLdElema(L_2, V_0)), &m4428_MI);
		if ((((int32_t)L_3) >= ((int32_t)0)))
		{
			goto IL_0029;
		}
	}

IL_0027:
	{
		return 0;
	}

IL_0029:
	{
		if ((((int32_t)p0) <= ((int32_t)0)))
		{
			goto IL_0069;
		}
	}
	{
		if (!p2)
		{
			goto IL_0069;
		}
	}
	{
		t1126* L_4 = (__this->f13);
		int32_t L_5 = m4428(((t1120 *)(t1120 *)SZArrayLdElema(L_4, V_0)), &m4428_MI);
		t1126* L_6 = (__this->f13);
		int32_t L_7 = m4429(((t1120 *)(t1120 *)SZArrayLdElema(L_6, V_0)), &m4429_MI);
		m4454(__this, p0, ((int32_t)(L_5+L_7)), &m4454_MI);
		m4455(__this, p0, p3, &m4455_MI);
	}

IL_0069:
	{
		t55* L_8 = (__this->f16);
		t1126* L_9 = (__this->f13);
		int32_t L_10 = (((t1120 *)(t1120 *)SZArrayLdElema(L_9, V_0))->f2);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_8, p1)) = (int32_t)L_10;
		return 1;
	}
}
 int32_t m4457 (t1124 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->f15);
		__this->f14 = L_0;
		int32_t L_1 = (__this->f14);
		return L_1;
	}
}
 void m4458 (t1124 * __this, int32_t p0, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		goto IL_003b;
	}

IL_0007:
	{
		t55* L_0 = (__this->f16);
		int32_t L_1 = V_0;
		V_1 = (*(int32_t*)(int32_t*)SZArrayLdElema(L_0, L_1));
		goto IL_0027;
	}

IL_0015:
	{
		t1126* L_2 = (__this->f13);
		int32_t L_3 = (((t1120 *)(t1120 *)SZArrayLdElema(L_2, V_1))->f2);
		V_1 = L_3;
	}

IL_0027:
	{
		if ((((int32_t)p0) <= ((int32_t)V_1)))
		{
			goto IL_0015;
		}
	}
	{
		t55* L_4 = (__this->f16);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_4, V_0)) = (int32_t)V_1;
		V_0 = ((int32_t)(V_0+1));
	}

IL_003b:
	{
		t55* L_5 = (__this->f16);
		if ((((int32_t)V_0) < ((int32_t)(((int32_t)(((t107 *)L_5)->max_length))))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
 void m4459 (t1124 * __this, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		t55* L_0 = (__this->f16);
		V_0 = (((int32_t)(((t107 *)L_0)->max_length)));
		t1126* L_1 = (__this->f13);
		if (L_1)
		{
			goto IL_0023;
		}
	}
	{
		__this->f13 = ((t1126*)SZArrayNew(InitializedTypeInfo(&t1126_TI), ((int32_t)((int32_t)V_0*(int32_t)((int32_t)10)))));
	}

IL_0023:
	{
		V_1 = 0;
		goto IL_006d;
	}

IL_002a:
	{
		t55* L_2 = (__this->f16);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_2, V_1)) = (int32_t)V_1;
		t1126* L_3 = (__this->f13);
		((t1120 *)(t1120 *)SZArrayLdElema(L_3, V_1))->f0 = (-1);
		t1126* L_4 = (__this->f13);
		((t1120 *)(t1120 *)SZArrayLdElema(L_4, V_1))->f1 = (-1);
		t1126* L_5 = (__this->f13);
		((t1120 *)(t1120 *)SZArrayLdElema(L_5, V_1))->f2 = (-1);
		V_1 = ((int32_t)(V_1+1));
	}

IL_006d:
	{
		if ((((int32_t)V_1) < ((int32_t)V_0)))
		{
			goto IL_002a;
		}
	}
	{
		__this->f14 = 0;
		__this->f15 = V_0;
		return;
	}
}
 int32_t m4460 (t1124 * __this, int32_t p0, MethodInfo* method){
	int32_t V_0 = 0;
	{
		t55* L_0 = (__this->f16);
		int32_t L_1 = p0;
		V_0 = (*(int32_t*)(int32_t*)SZArrayLdElema(L_0, L_1));
		goto IL_0020;
	}

IL_000e:
	{
		t1126* L_2 = (__this->f13);
		int32_t L_3 = (((t1120 *)(t1120 *)SZArrayLdElema(L_2, V_0))->f2);
		V_0 = L_3;
	}

IL_0020:
	{
		if ((((int32_t)V_0) < ((int32_t)0)))
		{
			goto IL_003d;
		}
	}
	{
		t1126* L_4 = (__this->f13);
		bool L_5 = m4427(((t1120 *)(t1120 *)SZArrayLdElema(L_4, V_0)), &m4427_MI);
		if (!L_5)
		{
			goto IL_000e;
		}
	}

IL_003d:
	{
		return V_0;
	}
}
 int32_t m4461 (t1124 * __this, int32_t p0, MethodInfo* method){
	t1126* V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = (__this->f15);
		t1126* L_1 = (__this->f13);
		if ((((uint32_t)L_0) != ((uint32_t)(((int32_t)(((t107 *)L_1)->max_length))))))
		{
			goto IL_0037;
		}
	}
	{
		t1126* L_2 = (__this->f13);
		V_0 = ((t1126*)SZArrayNew(InitializedTypeInfo(&t1126_TI), ((int32_t)((int32_t)(((int32_t)(((t107 *)L_2)->max_length)))*(int32_t)2))));
		t1126* L_3 = (__this->f13);
		VirtActionInvoker2< t107 *, int32_t >::Invoke(&m4993_MI, L_3, (t107 *)(t107 *)V_0, 0);
		__this->f13 = V_0;
	}

IL_0037:
	{
		int32_t L_4 = (__this->f15);
		int32_t L_5 = L_4;
		V_2 = L_5;
		__this->f15 = ((int32_t)(L_5+1));
		V_1 = V_2;
		t1126* L_6 = (__this->f13);
		t1126* L_7 = (__this->f13);
		int32_t L_8 = (-1);
		V_2 = L_8;
		((t1120 *)(t1120 *)SZArrayLdElema(L_7, V_1))->f1 = L_8;
		((t1120 *)(t1120 *)SZArrayLdElema(L_6, V_1))->f0 = V_2;
		t1126* L_9 = (__this->f13);
		((t1120 *)(t1120 *)SZArrayLdElema(L_9, V_1))->f2 = p0;
		return V_1;
	}
}
 void m4462 (t1124 * __this, int32_t p0, int32_t* p1, int32_t* p2, MethodInfo* method){
	int32_t V_0 = 0;
	{
		*((int32_t*)(p1)) = (int32_t)(-1);
		*((int32_t*)(p2)) = (int32_t)0;
		t55* L_0 = (__this->f16);
		int32_t L_1 = p0;
		V_0 = (*(int32_t*)(int32_t*)SZArrayLdElema(L_0, L_1));
		goto IL_0052;
	}

IL_0014:
	{
		t1126* L_2 = (__this->f13);
		bool L_3 = m4427(((t1120 *)(t1120 *)SZArrayLdElema(L_2, V_0)), &m4427_MI);
		if (L_3)
		{
			goto IL_002f;
		}
	}
	{
		goto IL_0040;
	}

IL_002f:
	{
		if ((((int32_t)(*((int32_t*)p1))) >= ((int32_t)0)))
		{
			goto IL_003a;
		}
	}
	{
		*((int32_t*)(p1)) = (int32_t)V_0;
	}

IL_003a:
	{
		*((int32_t*)(p2)) = (int32_t)((int32_t)((*((int32_t*)p2))+1));
	}

IL_0040:
	{
		t1126* L_4 = (__this->f13);
		int32_t L_5 = (((t1120 *)(t1120 *)SZArrayLdElema(L_4, V_0))->f2);
		V_0 = L_5;
	}

IL_0052:
	{
		if ((((int32_t)V_0) >= ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		return;
	}
}
 void m4463 (t1124 * __this, t1095 * p0, int32_t p1, int32_t p2, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	t1092 * V_2 = {0};
	{
		V_0 = 1;
		t1126* L_0 = (__this->f13);
		int32_t L_1 = (((t1120 *)(t1120 *)SZArrayLdElema(L_0, p1))->f2);
		V_1 = L_1;
		goto IL_0089;
	}

IL_0019:
	{
		t1126* L_2 = (__this->f13);
		bool L_3 = m4427(((t1120 *)(t1120 *)SZArrayLdElema(L_2, V_1)), &m4427_MI);
		if (L_3)
		{
			goto IL_0034;
		}
	}
	{
		goto IL_0077;
	}

IL_0034:
	{
		t11* L_4 = (__this->f3);
		t1126* L_5 = (__this->f13);
		int32_t L_6 = m4428(((t1120 *)(t1120 *)SZArrayLdElema(L_5, V_1)), &m4428_MI);
		t1126* L_7 = (__this->f13);
		int32_t L_8 = m4429(((t1120 *)(t1120 *)SZArrayLdElema(L_7, V_1)), &m4429_MI);
		t1092 * L_9 = (t1092 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1092_TI));
		m4281(L_9, L_4, L_6, L_8, &m4281_MI);
		V_2 = L_9;
		t1093 * L_10 = m4298(p0, &m4298_MI);
		m4290(L_10, V_2, ((int32_t)(((int32_t)(p2-1))-V_0)), &m4290_MI);
		V_0 = ((int32_t)(V_0+1));
	}

IL_0077:
	{
		t1126* L_11 = (__this->f13);
		int32_t L_12 = (((t1120 *)(t1120 *)SZArrayLdElema(L_11, V_1))->f2);
		V_1 = L_12;
	}

IL_0089:
	{
		if ((((int32_t)V_1) >= ((int32_t)0)))
		{
			goto IL_0019;
		}
	}
	{
		return;
	}
}
 t1090 * m4464 (t1124 * __this, t1091 * p0, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	t1095 * V_2 = {0};
	t1090 * V_3 = {0};
	int32_t V_4 = 0;
	{
		m4462(__this, 0, (&V_1), (&V_0), &m4462_MI);
		bool L_0 = (__this->f0);
		if (L_0)
		{
			goto IL_004d;
		}
	}
	{
		t11* L_1 = (__this->f3);
		int32_t L_2 = (__this->f4);
		t1126* L_3 = (__this->f13);
		int32_t L_4 = m4428(((t1120 *)(t1120 *)SZArrayLdElema(L_3, V_1)), &m4428_MI);
		t1126* L_5 = (__this->f13);
		int32_t L_6 = m4429(((t1120 *)(t1120 *)SZArrayLdElema(L_5, V_1)), &m4429_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1090_TI));
		t1090 * L_7 = (t1090 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1090_TI));
		m4309(L_7, p0, __this, L_1, L_2, 0, L_4, L_6, &m4309_MI);
		return L_7;
	}

IL_004d:
	{
		t11* L_8 = (__this->f3);
		int32_t L_9 = (__this->f4);
		t55* L_10 = (__this->f16);
		t1126* L_11 = (__this->f13);
		int32_t L_12 = m4428(((t1120 *)(t1120 *)SZArrayLdElema(L_11, V_1)), &m4428_MI);
		t1126* L_13 = (__this->f13);
		int32_t L_14 = m4429(((t1120 *)(t1120 *)SZArrayLdElema(L_13, V_1)), &m4429_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1090_TI));
		t1090 * L_15 = (t1090 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1090_TI));
		m4310(L_15, p0, __this, L_8, L_9, (((int32_t)(((t107 *)L_10)->max_length))), L_12, L_14, V_0, &m4310_MI);
		V_3 = L_15;
		m4463(__this, V_3, V_1, V_0, &m4463_MI);
		V_4 = 1;
		goto IL_0107;
	}

IL_009d:
	{
		m4462(__this, V_4, (&V_1), (&V_0), &m4462_MI);
		if ((((int32_t)V_1) >= ((int32_t)0)))
		{
			goto IL_00bb;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1095_TI));
		V_2 = (((t1095_SFs*)InitializedTypeInfo(&t1095_TI)->static_fields)->f3);
		goto IL_00f3;
	}

IL_00bb:
	{
		t11* L_16 = (__this->f3);
		t1126* L_17 = (__this->f13);
		int32_t L_18 = m4428(((t1120 *)(t1120 *)SZArrayLdElema(L_17, V_1)), &m4428_MI);
		t1126* L_19 = (__this->f13);
		int32_t L_20 = m4429(((t1120 *)(t1120 *)SZArrayLdElema(L_19, V_1)), &m4429_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1095_TI));
		t1095 * L_21 = (t1095 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1095_TI));
		m4294(L_21, L_16, L_18, L_20, V_0, &m4294_MI);
		V_2 = L_21;
		m4463(__this, V_2, V_1, V_0, &m4463_MI);
	}

IL_00f3:
	{
		t1096 * L_22 = (t1096 *)VirtFuncInvoker0< t1096 * >::Invoke(&m4313_MI, V_3);
		m4304(L_22, V_2, V_4, &m4304_MI);
		V_4 = ((int32_t)(V_4+1));
	}

IL_0107:
	{
		t55* L_23 = (__this->f16);
		if ((((int32_t)V_4) < ((int32_t)(((int32_t)(((t107 *)L_23)->max_length))))))
		{
			goto IL_009d;
		}
	}
	{
		return V_3;
	}
}
// Metadata Definition System.Text.RegularExpressions.Interpreter
extern Il2CppType t1027_0_0_1;
FieldInfo t1124_f1_FieldInfo = 
{
	"program", &t1027_0_0_1, &t1124_TI, offsetof(t1124, f1), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t1124_f2_FieldInfo = 
{
	"program_start", &t110_0_0_1, &t1124_TI, offsetof(t1124, f2), &EmptyCustomAttributesCache};
extern Il2CppType t11_0_0_1;
FieldInfo t1124_f3_FieldInfo = 
{
	"text", &t11_0_0_1, &t1124_TI, offsetof(t1124, f3), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t1124_f4_FieldInfo = 
{
	"text_end", &t110_0_0_1, &t1124_TI, offsetof(t1124, f4), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t1124_f5_FieldInfo = 
{
	"group_count", &t110_0_0_1, &t1124_TI, offsetof(t1124, f5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t1124_f6_FieldInfo = 
{
	"match_min", &t110_0_0_1, &t1124_TI, offsetof(t1124, f6), &EmptyCustomAttributesCache};
extern Il2CppType t1125_0_0_1;
FieldInfo t1124_f7_FieldInfo = 
{
	"qs", &t1125_0_0_1, &t1124_TI, offsetof(t1124, f7), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t1124_f8_FieldInfo = 
{
	"scan_ptr", &t110_0_0_1, &t1124_TI, offsetof(t1124, f8), &EmptyCustomAttributesCache};
extern Il2CppType t1122_0_0_1;
FieldInfo t1124_f9_FieldInfo = 
{
	"repeat", &t1122_0_0_1, &t1124_TI, offsetof(t1124, f9), &EmptyCustomAttributesCache};
extern Il2CppType t1122_0_0_1;
FieldInfo t1124_f10_FieldInfo = 
{
	"fast", &t1122_0_0_1, &t1124_TI, offsetof(t1124, f10), &EmptyCustomAttributesCache};
extern Il2CppType t1121_0_0_1;
FieldInfo t1124_f11_FieldInfo = 
{
	"stack", &t1121_0_0_1, &t1124_TI, offsetof(t1124, f11), &EmptyCustomAttributesCache};
extern Il2CppType t1122_0_0_1;
FieldInfo t1124_f12_FieldInfo = 
{
	"deep", &t1122_0_0_1, &t1124_TI, offsetof(t1124, f12), &EmptyCustomAttributesCache};
extern Il2CppType t1126_0_0_1;
FieldInfo t1124_f13_FieldInfo = 
{
	"marks", &t1126_0_0_1, &t1124_TI, offsetof(t1124, f13), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t1124_f14_FieldInfo = 
{
	"mark_start", &t110_0_0_1, &t1124_TI, offsetof(t1124, f14), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t1124_f15_FieldInfo = 
{
	"mark_end", &t110_0_0_1, &t1124_TI, offsetof(t1124, f15), &EmptyCustomAttributesCache};
extern Il2CppType t55_0_0_1;
FieldInfo t1124_f16_FieldInfo = 
{
	"groups", &t55_0_0_1, &t1124_TI, offsetof(t1124, f16), &EmptyCustomAttributesCache};
static FieldInfo* t1124_FIs[] =
{
	&t1124_f1_FieldInfo,
	&t1124_f2_FieldInfo,
	&t1124_f3_FieldInfo,
	&t1124_f4_FieldInfo,
	&t1124_f5_FieldInfo,
	&t1124_f6_FieldInfo,
	&t1124_f7_FieldInfo,
	&t1124_f8_FieldInfo,
	&t1124_f9_FieldInfo,
	&t1124_f10_FieldInfo,
	&t1124_f11_FieldInfo,
	&t1124_f12_FieldInfo,
	&t1124_f13_FieldInfo,
	&t1124_f14_FieldInfo,
	&t1124_f15_FieldInfo,
	&t1124_f16_FieldInfo,
	NULL
};
extern Il2CppType t1027_0_0_0;
static ParameterInfo t1124_m4444_ParameterInfos[] = 
{
	{"program", 0, 134218319, &EmptyCustomAttributesCache, &t1027_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m4444_MI = 
{
	".ctor", (methodPointerType)&m4444, &t1124_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t1124_m4444_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 665, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t110_0_0_0;
static ParameterInfo t1124_m4445_ParameterInfos[] = 
{
	{"ptr", 0, 134218320, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m4445_MI = 
{
	"ReadProgramCount", (methodPointerType)&m4445, &t1124_TI, &t110_0_0_0, RuntimeInvoker_t110_t110, t1124_m4445_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 666, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1091_0_0_0;
extern Il2CppType t1091_0_0_0;
extern Il2CppType t11_0_0_0;
extern Il2CppType t110_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t1124_m4446_ParameterInfos[] = 
{
	{"regex", 0, 134218321, &EmptyCustomAttributesCache, &t1091_0_0_0},
	{"text", 1, 134218322, &EmptyCustomAttributesCache, &t11_0_0_0},
	{"start", 2, 134218323, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"end", 3, 134218324, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t1090_0_0_0;
extern void* RuntimeInvoker_t5_t5_t5_t110_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m4446_MI = 
{
	"Scan", (methodPointerType)&m4446, &t1124_TI, &t1090_0_0_0, RuntimeInvoker_t5_t5_t5_t110_t110, t1124_m4446_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 5, 4, false, false, 667, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m4447_MI = 
{
	"Reset", (methodPointerType)&m4447, &t1124_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 668, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1123_0_0_0;
extern Il2CppType t110_1_0_0;
extern Il2CppType t110_1_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t1124_m4448_ParameterInfos[] = 
{
	{"mode", 0, 134218325, &EmptyCustomAttributesCache, &t1123_0_0_0},
	{"ref_ptr", 1, 134218326, &EmptyCustomAttributesCache, &t110_1_0_0},
	{"pc", 2, 134218327, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t110_t533_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m4448_MI = 
{
	"Eval", (methodPointerType)&m4448, &t1124_TI, &t108_0_0_0, RuntimeInvoker_t108_t110_t533_t110, t1124_m4448_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, false, false, 669, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1123_0_0_0;
extern Il2CppType t110_1_0_0;
extern Il2CppType t110_1_0_0;
extern Il2CppType t108_0_0_0;
static ParameterInfo t1124_m4449_ParameterInfos[] = 
{
	{"mode", 0, 134218328, &EmptyCustomAttributesCache, &t1123_0_0_0},
	{"ptr", 1, 134218329, &EmptyCustomAttributesCache, &t110_1_0_0},
	{"pc", 2, 134218330, &EmptyCustomAttributesCache, &t110_1_0_0},
	{"multi", 3, 134218331, &EmptyCustomAttributesCache, &t108_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t110_t533_t533_t111 (MethodInfo* method, void* obj, void** args);
MethodInfo m4449_MI = 
{
	"EvalChar", (methodPointerType)&m4449, &t1124_TI, &t108_0_0_0, RuntimeInvoker_t108_t110_t533_t533_t111, t1124_m4449_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 4, false, false, 670, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t110_1_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t1124_m4450_ParameterInfos[] = 
{
	{"ref_ptr", 0, 134218332, &EmptyCustomAttributesCache, &t110_1_0_0},
	{"pc", 1, 134218333, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t533_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m4450_MI = 
{
	"TryMatch", (methodPointerType)&m4450, &t1124_TI, &t108_0_0_0, RuntimeInvoker_t108_t533_t110, t1124_m4450_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, false, 671, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1106_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t1124_m4451_ParameterInfos[] = 
{
	{"pos", 0, 134218334, &EmptyCustomAttributesCache, &t1106_0_0_0},
	{"ptr", 1, 134218335, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t764_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m4451_MI = 
{
	"IsPosition", (methodPointerType)&m4451, &t1124_TI, &t108_0_0_0, RuntimeInvoker_t108_t764_t110, t1124_m4451_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, false, 672, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t144_0_0_0;
static ParameterInfo t1124_m4452_ParameterInfos[] = 
{
	{"c", 0, 134218336, &EmptyCustomAttributesCache, &t144_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t150 (MethodInfo* method, void* obj, void** args);
MethodInfo m4452_MI = 
{
	"IsWordChar", (methodPointerType)&m4452, &t1124_TI, &t108_0_0_0, RuntimeInvoker_t108_t150, t1124_m4452_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 673, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t110_0_0_0;
static ParameterInfo t1124_m4453_ParameterInfos[] = 
{
	{"pc", 0, 134218337, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t11_0_0_0;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m4453_MI = 
{
	"GetString", (methodPointerType)&m4453, &t1124_TI, &t11_0_0_0, RuntimeInvoker_t5_t110, t1124_m4453_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 674, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t110_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t1124_m4454_ParameterInfos[] = 
{
	{"gid", 0, 134218338, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"ptr", 1, 134218339, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m4454_MI = 
{
	"Open", (methodPointerType)&m4454, &t1124_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110, t1124_m4454_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, false, 675, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t110_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t1124_m4455_ParameterInfos[] = 
{
	{"gid", 0, 134218340, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"ptr", 1, 134218341, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m4455_MI = 
{
	"Close", (methodPointerType)&m4455, &t1124_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110, t1124_m4455_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, false, 676, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t110_0_0_0;
extern Il2CppType t110_0_0_0;
extern Il2CppType t108_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t1124_m4456_ParameterInfos[] = 
{
	{"gid", 0, 134218342, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"balance_gid", 1, 134218343, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"capture", 2, 134218344, &EmptyCustomAttributesCache, &t108_0_0_0},
	{"ptr", 3, 134218345, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t110_t110_t111_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m4456_MI = 
{
	"Balance", (methodPointerType)&m4456, &t1124_TI, &t108_0_0_0, RuntimeInvoker_t108_t110_t110_t111_t110, t1124_m4456_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 4, false, false, 677, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m4457_MI = 
{
	"Checkpoint", (methodPointerType)&m4457, &t1124_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 678, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t110_0_0_0;
static ParameterInfo t1124_m4458_ParameterInfos[] = 
{
	{"cp", 0, 134218346, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m4458_MI = 
{
	"Backtrack", (methodPointerType)&m4458, &t1124_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t1124_m4458_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 679, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m4459_MI = 
{
	"ResetGroups", (methodPointerType)&m4459, &t1124_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 680, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t110_0_0_0;
static ParameterInfo t1124_m4460_ParameterInfos[] = 
{
	{"gid", 0, 134218347, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m4460_MI = 
{
	"GetLastDefined", (methodPointerType)&m4460, &t1124_TI, &t110_0_0_0, RuntimeInvoker_t110_t110, t1124_m4460_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 681, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t110_0_0_0;
static ParameterInfo t1124_m4461_ParameterInfos[] = 
{
	{"previous", 0, 134218348, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m4461_MI = 
{
	"CreateMark", (methodPointerType)&m4461, &t1124_TI, &t110_0_0_0, RuntimeInvoker_t110_t110, t1124_m4461_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 682, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t110_0_0_0;
extern Il2CppType t110_1_0_2;
extern Il2CppType t110_1_0_2;
static ParameterInfo t1124_m4462_ParameterInfos[] = 
{
	{"gid", 0, 134218349, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"first_mark_index", 1, 134218350, &EmptyCustomAttributesCache, &t110_1_0_2},
	{"n_caps", 2, 134218351, &EmptyCustomAttributesCache, &t110_1_0_2},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t533_t533 (MethodInfo* method, void* obj, void** args);
MethodInfo m4462_MI = 
{
	"GetGroupInfo", (methodPointerType)&m4462, &t1124_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t533_t533, t1124_m4462_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, false, false, 683, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1095_0_0_0;
extern Il2CppType t1095_0_0_0;
extern Il2CppType t110_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t1124_m4463_ParameterInfos[] = 
{
	{"g", 0, 134218352, &EmptyCustomAttributesCache, &t1095_0_0_0},
	{"first_mark_index", 1, 134218353, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"n_caps", 2, 134218354, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m4463_MI = 
{
	"PopulateGroup", (methodPointerType)&m4463, &t1124_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110_t110, t1124_m4463_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, false, false, 684, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1091_0_0_0;
static ParameterInfo t1124_m4464_ParameterInfos[] = 
{
	{"regex", 0, 134218355, &EmptyCustomAttributesCache, &t1091_0_0_0},
};
extern Il2CppType t1090_0_0_0;
extern void* RuntimeInvoker_t5_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m4464_MI = 
{
	"GenerateMatch", (methodPointerType)&m4464, &t1124_TI, &t1090_0_0_0, RuntimeInvoker_t5_t5, t1124_m4464_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 685, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1124_MIs[] =
{
	&m4444_MI,
	&m4445_MI,
	&m4446_MI,
	&m4447_MI,
	&m4448_MI,
	&m4449_MI,
	&m4450_MI,
	&m4451_MI,
	&m4452_MI,
	&m4453_MI,
	&m4454_MI,
	&m4455_MI,
	&m4456_MI,
	&m4457_MI,
	&m4458_MI,
	&m4459_MI,
	&m4460_MI,
	&m4461_MI,
	&m4462_MI,
	&m4463_MI,
	&m4464_MI,
	NULL
};
extern TypeInfo t1121_TI;
extern TypeInfo t1122_TI;
extern TypeInfo t1123_TI;
static TypeInfo* t1124_TI__nestedTypes[4] =
{
	&t1121_TI,
	&t1122_TI,
	&t1123_TI,
	NULL
};
static MethodInfo* t1124_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m4446_MI,
	&m4446_MI,
};
extern TypeInfo t1098_TI;
static Il2CppInterfaceOffsetPair t1124_IOs[] = 
{
	{ &t1098_TI, 4},
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType t1124_0_0_0;
extern Il2CppType t1124_1_0_0;
struct t1124;
TypeInfo t1124_TI = 
{
	&g_System_dll_Image, NULL, "Interpreter", "System.Text.RegularExpressions", t1124_MIs, NULL, t1124_FIs, NULL, &t1089_TI, t1124_TI__nestedTypes, NULL, &t1124_TI, NULL, t1124_VT, &EmptyCustomAttributesCache, &t1124_TI, &t1124_0_0_0, &t1124_1_0_0, t1124_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1124), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, false, false, false, false, false, false, false, 21, 0, 16, 0, 3, 6, 0, 1};
#include "t1127.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1127_TI;
#include "t1127MD.h"

extern MethodInfo m4469_MI;
extern MethodInfo m4474_MI;


extern MethodInfo m4465_MI;
 void m4465 (t1127 * __this, int32_t p0, int32_t p1, MethodInfo* method){
	int32_t V_0 = 0;
	{
		if ((((int32_t)p0) <= ((int32_t)p1)))
		{
			goto IL_000f;
		}
	}
	{
		V_0 = p0;
		p0 = p1;
		p1 = V_0;
	}

IL_000f:
	{
		__this->f0 = p0;
		__this->f1 = p1;
		__this->f2 = 1;
		return;
	}
}
extern MethodInfo m4466_MI;
 t1127  m4466 (t5 * __this, MethodInfo* method){
	t1127  V_0 = {0};
	{
		(&V_0)->f0 = 0;
		int32_t L_0 = ((&V_0)->f0);
		(&V_0)->f1 = ((int32_t)(L_0-1));
		(&V_0)->f2 = 1;
		return V_0;
	}
}
extern MethodInfo m4467_MI;
 bool m4467 (t1127 * __this, MethodInfo* method){
	{
		bool L_0 = (__this->f2);
		return ((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
	}
}
extern MethodInfo m4468_MI;
 bool m4468 (t1127 * __this, MethodInfo* method){
	int32_t G_B3_0 = 0;
	{
		bool L_0 = (__this->f2);
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		int32_t L_1 = (__this->f0);
		int32_t L_2 = (__this->f1);
		G_B3_0 = ((((int32_t)L_1) == ((int32_t)L_2))? 1 : 0);
		goto IL_001c;
	}

IL_001b:
	{
		G_B3_0 = 0;
	}

IL_001c:
	{
		return G_B3_0;
	}
}
 bool m4469 (t1127 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->f0);
		int32_t L_1 = (__this->f1);
		return ((((int32_t)L_0) > ((int32_t)L_1))? 1 : 0);
	}
}
extern MethodInfo m4470_MI;
 int32_t m4470 (t1127 * __this, MethodInfo* method){
	{
		bool L_0 = m4469(__this, &m4469_MI);
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		int32_t L_1 = (__this->f1);
		int32_t L_2 = (__this->f0);
		return ((int32_t)(((int32_t)(L_1-L_2))+1));
	}
}
extern MethodInfo m4471_MI;
 bool m4471 (t1127 * __this, t1127  p0, MethodInfo* method){
	int32_t G_B6_0 = 0;
	{
		bool L_0 = m4469(__this, &m4469_MI);
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		bool L_1 = m4469((&p0), &m4469_MI);
		if (!L_1)
		{
			goto IL_0019;
		}
	}

IL_0017:
	{
		return 1;
	}

IL_0019:
	{
		int32_t L_2 = (__this->f0);
		int32_t L_3 = ((&p0)->f1);
		if ((((int32_t)L_2) > ((int32_t)L_3)))
		{
			goto IL_003f;
		}
	}
	{
		int32_t L_4 = ((&p0)->f0);
		int32_t L_5 = (__this->f1);
		G_B6_0 = ((((int32_t)((((int32_t)L_4) > ((int32_t)L_5))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0040;
	}

IL_003f:
	{
		G_B6_0 = 0;
	}

IL_0040:
	{
		return ((((int32_t)G_B6_0) == ((int32_t)0))? 1 : 0);
	}
}
extern MethodInfo m4472_MI;
 bool m4472 (t1127 * __this, t1127  p0, MethodInfo* method){
	int32_t G_B6_0 = 0;
	{
		bool L_0 = m4469(__this, &m4469_MI);
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		bool L_1 = m4469((&p0), &m4469_MI);
		if (!L_1)
		{
			goto IL_0019;
		}
	}

IL_0017:
	{
		return 0;
	}

IL_0019:
	{
		int32_t L_2 = (__this->f0);
		int32_t L_3 = ((&p0)->f1);
		if ((((int32_t)L_2) == ((int32_t)((int32_t)(L_3+1)))))
		{
			goto IL_0040;
		}
	}
	{
		int32_t L_4 = (__this->f1);
		int32_t L_5 = ((&p0)->f0);
		G_B6_0 = ((((int32_t)L_4) == ((int32_t)((int32_t)(L_5-1))))? 1 : 0);
		goto IL_0041;
	}

IL_0040:
	{
		G_B6_0 = 1;
	}

IL_0041:
	{
		return G_B6_0;
	}
}
extern MethodInfo m4473_MI;
 bool m4473 (t1127 * __this, t1127  p0, MethodInfo* method){
	int32_t G_B8_0 = 0;
	{
		bool L_0 = m4469(__this, &m4469_MI);
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		bool L_1 = m4469((&p0), &m4469_MI);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		return 1;
	}

IL_0019:
	{
		bool L_2 = m4469(__this, &m4469_MI);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		return 0;
	}

IL_0026:
	{
		int32_t L_3 = (__this->f0);
		int32_t L_4 = ((&p0)->f0);
		if ((((int32_t)L_3) > ((int32_t)L_4)))
		{
			goto IL_004c;
		}
	}
	{
		int32_t L_5 = ((&p0)->f1);
		int32_t L_6 = (__this->f1);
		G_B8_0 = ((((int32_t)((((int32_t)L_5) > ((int32_t)L_6))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_004d;
	}

IL_004c:
	{
		G_B8_0 = 0;
	}

IL_004d:
	{
		return G_B8_0;
	}
}
 bool m4474 (t1127 * __this, int32_t p0, MethodInfo* method){
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = (__this->f0);
		if ((((int32_t)L_0) > ((int32_t)p0)))
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_1 = (__this->f1);
		G_B3_0 = ((((int32_t)((((int32_t)p0) > ((int32_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_001b;
	}

IL_001a:
	{
		G_B3_0 = 0;
	}

IL_001b:
	{
		return G_B3_0;
	}
}
extern MethodInfo m4475_MI;
 bool m4475 (t1127 * __this, t1127  p0, MethodInfo* method){
	int32_t G_B8_0 = 0;
	int32_t G_B10_0 = 0;
	{
		bool L_0 = m4469(__this, &m4469_MI);
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		bool L_1 = m4469((&p0), &m4469_MI);
		if (!L_1)
		{
			goto IL_0019;
		}
	}

IL_0017:
	{
		return 0;
	}

IL_0019:
	{
		int32_t L_2 = ((&p0)->f0);
		bool L_3 = m4474(__this, L_2, &m4474_MI);
		if (!L_3)
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = ((&p0)->f1);
		bool L_5 = m4474(__this, L_4, &m4474_MI);
		if (!L_5)
		{
			goto IL_0064;
		}
	}

IL_003d:
	{
		int32_t L_6 = ((&p0)->f1);
		bool L_7 = m4474(__this, L_6, &m4474_MI);
		if (!L_7)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_8 = ((&p0)->f0);
		bool L_9 = m4474(__this, L_8, &m4474_MI);
		G_B8_0 = ((((int32_t)L_9) == ((int32_t)0))? 1 : 0);
		goto IL_0062;
	}

IL_0061:
	{
		G_B8_0 = 0;
	}

IL_0062:
	{
		G_B10_0 = G_B8_0;
		goto IL_0065;
	}

IL_0064:
	{
		G_B10_0 = 1;
	}

IL_0065:
	{
		return G_B10_0;
	}
}
extern MethodInfo m4476_MI;
 void m4476 (t1127 * __this, t1127  p0, MethodInfo* method){
	{
		bool L_0 = m4469((&p0), &m4469_MI);
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		return;
	}

IL_000d:
	{
		bool L_1 = m4469(__this, &m4469_MI);
		if (!L_1)
		{
			goto IL_0032;
		}
	}
	{
		int32_t L_2 = ((&p0)->f0);
		__this->f0 = L_2;
		int32_t L_3 = ((&p0)->f1);
		__this->f1 = L_3;
	}

IL_0032:
	{
		int32_t L_4 = ((&p0)->f0);
		int32_t L_5 = (__this->f0);
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0051;
		}
	}
	{
		int32_t L_6 = ((&p0)->f0);
		__this->f0 = L_6;
	}

IL_0051:
	{
		int32_t L_7 = ((&p0)->f1);
		int32_t L_8 = (__this->f1);
		if ((((int32_t)L_7) <= ((int32_t)L_8)))
		{
			goto IL_0070;
		}
	}
	{
		int32_t L_9 = ((&p0)->f1);
		__this->f1 = L_9;
	}

IL_0070:
	{
		return;
	}
}
extern MethodInfo m4477_MI;
 int32_t m4477 (t1127 * __this, t5 * p0, MethodInfo* method){
	t1127  V_0 = {0};
	{
		int32_t L_0 = (__this->f0);
		V_0 = ((*(t1127 *)((t1127 *)UnBox (p0, InitializedTypeInfo(&t1127_TI)))));
		int32_t L_1 = ((&V_0)->f0);
		return ((int32_t)(L_0-L_1));
	}
}
// Conversion methods for marshalling of: System.Text.RegularExpressions.Interval
void t1127_marshal(const t1127& unmarshaled, t1127_marshaled& marshaled)
{
	marshaled.f0 = unmarshaled.f0;
	marshaled.f1 = unmarshaled.f1;
	marshaled.f2 = unmarshaled.f2;
}
void t1127_marshal_back(const t1127_marshaled& marshaled, t1127& unmarshaled)
{
	unmarshaled.f0 = marshaled.f0;
	unmarshaled.f1 = marshaled.f1;
	unmarshaled.f2 = marshaled.f2;
}
// Conversion method for clean up from marshalling of: System.Text.RegularExpressions.Interval
void t1127_marshal_cleanup(t1127_marshaled& marshaled)
{
}
// Metadata Definition System.Text.RegularExpressions.Interval
extern Il2CppType t110_0_0_6;
FieldInfo t1127_f0_FieldInfo = 
{
	"low", &t110_0_0_6, &t1127_TI, offsetof(t1127, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_6;
FieldInfo t1127_f1_FieldInfo = 
{
	"high", &t110_0_0_6, &t1127_TI, offsetof(t1127, f1) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t108_0_0_6;
FieldInfo t1127_f2_FieldInfo = 
{
	"contiguous", &t108_0_0_6, &t1127_TI, offsetof(t1127, f2) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t1127_FIs[] =
{
	&t1127_f0_FieldInfo,
	&t1127_f1_FieldInfo,
	&t1127_f2_FieldInfo,
	NULL
};
static PropertyInfo t1127____Empty_PropertyInfo = 
{
	&t1127_TI, "Empty", &m4466_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1127____IsDiscontiguous_PropertyInfo = 
{
	&t1127_TI, "IsDiscontiguous", &m4467_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1127____IsSingleton_PropertyInfo = 
{
	&t1127_TI, "IsSingleton", &m4468_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1127____IsEmpty_PropertyInfo = 
{
	&t1127_TI, "IsEmpty", &m4469_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1127____Size_PropertyInfo = 
{
	&t1127_TI, "Size", &m4470_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1127_PIs[] =
{
	&t1127____Empty_PropertyInfo,
	&t1127____IsDiscontiguous_PropertyInfo,
	&t1127____IsSingleton_PropertyInfo,
	&t1127____IsEmpty_PropertyInfo,
	&t1127____Size_PropertyInfo,
	NULL
};
extern Il2CppType t110_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t1127_m4465_ParameterInfos[] = 
{
	{"low", 0, 134218365, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"high", 1, 134218366, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m4465_MI = 
{
	".ctor", (methodPointerType)&m4465, &t1127_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110, t1127_m4465_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, false, 700, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1127_0_0_0;
extern void* RuntimeInvoker_t1127 (MethodInfo* method, void* obj, void** args);
MethodInfo m4466_MI = 
{
	"get_Empty", (methodPointerType)&m4466, &t1127_TI, &t1127_0_0_0, RuntimeInvoker_t1127, NULL, &EmptyCustomAttributesCache, 2198, 0, 255, 0, false, false, 701, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
MethodInfo m4467_MI = 
{
	"get_IsDiscontiguous", (methodPointerType)&m4467, &t1127_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 702, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
MethodInfo m4468_MI = 
{
	"get_IsSingleton", (methodPointerType)&m4468, &t1127_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 703, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
MethodInfo m4469_MI = 
{
	"get_IsEmpty", (methodPointerType)&m4469, &t1127_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 704, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m4470_MI = 
{
	"get_Size", (methodPointerType)&m4470, &t1127_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 705, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1127_0_0_0;
extern Il2CppType t1127_0_0_0;
static ParameterInfo t1127_m4471_ParameterInfos[] = 
{
	{"i", 0, 134218367, &EmptyCustomAttributesCache, &t1127_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t1127 (MethodInfo* method, void* obj, void** args);
MethodInfo m4471_MI = 
{
	"IsDisjoint", (methodPointerType)&m4471, &t1127_TI, &t108_0_0_0, RuntimeInvoker_t108_t1127, t1127_m4471_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 706, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1127_0_0_0;
static ParameterInfo t1127_m4472_ParameterInfos[] = 
{
	{"i", 0, 134218368, &EmptyCustomAttributesCache, &t1127_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t1127 (MethodInfo* method, void* obj, void** args);
MethodInfo m4472_MI = 
{
	"IsAdjacent", (methodPointerType)&m4472, &t1127_TI, &t108_0_0_0, RuntimeInvoker_t108_t1127, t1127_m4472_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 707, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1127_0_0_0;
static ParameterInfo t1127_m4473_ParameterInfos[] = 
{
	{"i", 0, 134218369, &EmptyCustomAttributesCache, &t1127_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t1127 (MethodInfo* method, void* obj, void** args);
MethodInfo m4473_MI = 
{
	"Contains", (methodPointerType)&m4473, &t1127_TI, &t108_0_0_0, RuntimeInvoker_t108_t1127, t1127_m4473_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 708, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t110_0_0_0;
static ParameterInfo t1127_m4474_ParameterInfos[] = 
{
	{"i", 0, 134218370, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m4474_MI = 
{
	"Contains", (methodPointerType)&m4474, &t1127_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t1127_m4474_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 709, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1127_0_0_0;
static ParameterInfo t1127_m4475_ParameterInfos[] = 
{
	{"i", 0, 134218371, &EmptyCustomAttributesCache, &t1127_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t1127 (MethodInfo* method, void* obj, void** args);
MethodInfo m4475_MI = 
{
	"Intersects", (methodPointerType)&m4475, &t1127_TI, &t108_0_0_0, RuntimeInvoker_t108_t1127, t1127_m4475_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 710, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1127_0_0_0;
static ParameterInfo t1127_m4476_ParameterInfos[] = 
{
	{"i", 0, 134218372, &EmptyCustomAttributesCache, &t1127_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t1127 (MethodInfo* method, void* obj, void** args);
MethodInfo m4476_MI = 
{
	"Merge", (methodPointerType)&m4476, &t1127_TI, &t109_0_0_0, RuntimeInvoker_t109_t1127, t1127_m4476_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 711, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t5_0_0_0;
static ParameterInfo t1127_m4477_ParameterInfos[] = 
{
	{"o", 0, 134218373, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m4477_MI = 
{
	"CompareTo", (methodPointerType)&m4477, &t1127_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t1127_m4477_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 4, 1, false, false, 712, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1127_MIs[] =
{
	&m4465_MI,
	&m4466_MI,
	&m4467_MI,
	&m4468_MI,
	&m4469_MI,
	&m4470_MI,
	&m4471_MI,
	&m4472_MI,
	&m4473_MI,
	&m4474_MI,
	&m4475_MI,
	&m4476_MI,
	&m4477_MI,
	NULL
};
static MethodInfo* t1127_VT[] =
{
	&m2042_MI,
	&m465_MI,
	&m2043_MI,
	&m2148_MI,
	&m4477_MI,
};
static TypeInfo* t1127_ITIs[] = 
{
	&t122_TI,
};
static Il2CppInterfaceOffsetPair t1127_IOs[] = 
{
	{ &t122_TI, 4},
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType t1127_1_0_0;
TypeInfo t1127_TI = 
{
	&g_System_dll_Image, NULL, "Interval", "System.Text.RegularExpressions", t1127_MIs, t1127_PIs, t1127_FIs, NULL, &t267_TI, NULL, NULL, &t1127_TI, t1127_ITIs, t1127_VT, &EmptyCustomAttributesCache, &t1127_TI, &t1127_0_0_0, &t1127_1_0_0, t1127_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)t1127_marshal, (methodPointerType)t1127_marshal_back, (methodPointerType)t1127_marshal_cleanup, sizeof (t1127)+ sizeof (Il2CppObject), 0, sizeof(t1127_marshaled), 0, 0, -1, 1048840, 0, true, false, false, false, false, false, false, false, false, false, false, false, 13, 5, 3, 0, 0, 5, 1, 1};
#include "t1128.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1128_TI;
#include "t1128MD.h"

#include "t133.h"
extern TypeInfo t811_TI;
extern TypeInfo t133_TI;
extern TypeInfo t1129_TI;
#include "t133MD.h"
extern MethodInfo m4748_MI;
extern MethodInfo m4767_MI;
extern MethodInfo m5055_MI;
extern MethodInfo m4481_MI;


extern MethodInfo m4478_MI;
 void m4478 (t1128 * __this, t5 * p0, MethodInfo* method){
	{
		m460(__this, &m460_MI);
		__this->f0 = p0;
		VirtActionInvoker0::Invoke(&m4481_MI, __this);
		return;
	}
}
extern MethodInfo m4479_MI;
 t5 * m4479 (t1128 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->f1);
		t5 * L_1 = (__this->f0);
		int32_t L_2 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(&m4748_MI, L_1);
		if ((((int32_t)L_0) < ((int32_t)L_2)))
		{
			goto IL_001c;
		}
	}
	{
		t133 * L_3 = (t133 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t133_TI));
		m4767(L_3, &m4767_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001c:
	{
		t5 * L_4 = (__this->f0);
		int32_t L_5 = (__this->f1);
		t5 * L_6 = (t5 *)InterfaceFuncInvoker1< t5 *, int32_t >::Invoke(&m5055_MI, L_4, L_5);
		return L_6;
	}
}
extern MethodInfo m4480_MI;
 bool m4480 (t1128 * __this, MethodInfo* method){
	int32_t V_0 = 0;
	{
		int32_t L_0 = (__this->f1);
		t5 * L_1 = (__this->f0);
		int32_t L_2 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(&m4748_MI, L_1);
		if ((((int32_t)L_0) <= ((int32_t)L_2)))
		{
			goto IL_001c;
		}
	}
	{
		t133 * L_3 = (t133 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t133_TI));
		m4767(L_3, &m4767_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001c:
	{
		int32_t L_4 = (__this->f1);
		int32_t L_5 = ((int32_t)(L_4+1));
		V_0 = L_5;
		__this->f1 = L_5;
		t5 * L_6 = (__this->f0);
		int32_t L_7 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(&m4748_MI, L_6);
		return ((((int32_t)V_0) < ((int32_t)L_7))? 1 : 0);
	}
}
 void m4481 (t1128 * __this, MethodInfo* method){
	{
		__this->f1 = (-1);
		return;
	}
}
// Metadata Definition System.Text.RegularExpressions.IntervalCollection/Enumerator
extern Il2CppType t1129_0_0_1;
FieldInfo t1128_f0_FieldInfo = 
{
	"list", &t1129_0_0_1, &t1128_TI, offsetof(t1128, f0), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t1128_f1_FieldInfo = 
{
	"ptr", &t110_0_0_1, &t1128_TI, offsetof(t1128, f1), &EmptyCustomAttributesCache};
static FieldInfo* t1128_FIs[] =
{
	&t1128_f0_FieldInfo,
	&t1128_f1_FieldInfo,
	NULL
};
static PropertyInfo t1128____Current_PropertyInfo = 
{
	&t1128_TI, "Current", &m4479_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1128_PIs[] =
{
	&t1128____Current_PropertyInfo,
	NULL
};
extern Il2CppType t1129_0_0_0;
extern Il2CppType t1129_0_0_0;
static ParameterInfo t1128_m4478_ParameterInfos[] = 
{
	{"list", 0, 134218383, &EmptyCustomAttributesCache, &t1129_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m4478_MI = 
{
	".ctor", (methodPointerType)&m4478, &t1128_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t1128_m4478_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 724, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m4479_MI = 
{
	"get_Current", (methodPointerType)&m4479, &t1128_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2534, 0, 4, 0, false, false, 725, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
MethodInfo m4480_MI = 
{
	"MoveNext", (methodPointerType)&m4480, &t1128_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, false, 726, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m4481_MI = 
{
	"Reset", (methodPointerType)&m4481, &t1128_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, false, 727, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1128_MIs[] =
{
	&m4478_MI,
	&m4479_MI,
	&m4480_MI,
	&m4481_MI,
	NULL
};
static MethodInfo* t1128_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m4479_MI,
	&m4480_MI,
	&m4481_MI,
};
extern TypeInfo t196_TI;
static TypeInfo* t1128_ITIs[] = 
{
	&t196_TI,
};
static Il2CppInterfaceOffsetPair t1128_IOs[] = 
{
	{ &t196_TI, 4},
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType t1128_0_0_0;
extern Il2CppType t1128_1_0_0;
struct t1128;
extern TypeInfo t1131_TI;
TypeInfo t1128_TI = 
{
	&g_System_dll_Image, NULL, "Enumerator", "", t1128_MIs, t1128_PIs, t1128_FIs, NULL, &t5_TI, NULL, &t1131_TI, &t1128_TI, t1128_ITIs, t1128_VT, &EmptyCustomAttributesCache, &t1128_TI, &t1128_0_0_0, &t1128_1_0_0, t1128_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1128), 0, -1, 0, 0, -1, 1048579, 0, false, false, false, false, false, false, false, false, false, false, false, false, 4, 1, 2, 0, 0, 7, 1, 1};
#include "t1130.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1130_TI;
#include "t1130MD.h"

#include "t124.h"
#include "t118.h"
#include "t222.h"


extern MethodInfo m4482_MI;
 void m4482 (t1130 * __this, t5 * p0, t124 p1, MethodInfo* method){
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m4483_MI;
 double m4483 (t1130 * __this, t1127  p0, MethodInfo* method){
	if(__this->f9 != NULL)
	{
		m4483((t1130 *)__this->f9,p0, method);
	}
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->f3.f0));
	if (__this->f2 != NULL && ___methodIsStatic)
	{
		typedef double (*FunctionPointerType) (t5 *, t5 * __this, t1127  p0, MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(NULL,__this->f2,p0,(MethodInfo*)(__this->f3.f0));
	}
	typedef double (*FunctionPointerType) (t5 * __this, t1127  p0, MethodInfo* method);
	return ((FunctionPointerType)__this->f0)(__this->f2,p0,(MethodInfo*)(__this->f3.f0));
}
double pinvoke_delegate_wrapper_t1130(Il2CppObject* delegate, t1127  p0)
{
	typedef double (STDCALL *native_function_ptr_type)(t1127_marshaled);
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Marshaling of parameter 'p0' to native representation
	t1127_marshaled _p0_marshaled = { 0 };
	t1127_marshal(p0, _p0_marshaled);

	// Native function invocation and marshaling of return value back from native representation
	double _return_value = _il2cpp_pinvoke_func(_p0_marshaled);

	// Marshaling cleanup of parameter 'p0' native representation
	t1127_marshal_cleanup(_p0_marshaled);

	return _return_value;
}
extern MethodInfo m4484_MI;
 t5 * m4484 (t1130 * __this, t1127  p0, t222 * p1, t5 * p2, MethodInfo* method){
	void *__d_args[2] = {0};
	__d_args[0] = Box(InitializedTypeInfo(&t1127_TI), &p0);
	return (t5 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p1, (Il2CppObject*)p2);
}
extern MethodInfo m4485_MI;
 double m4485 (t1130 * __this, t5 * p0, MethodInfo* method){
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
	return *(double*)UnBox ((Il2CppCodeGenObject*)__result);
}
// Metadata Definition System.Text.RegularExpressions.IntervalCollection/CostDelegate
extern Il2CppType t5_0_0_0;
extern Il2CppType t124_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t1130_m4482_ParameterInfos[] = 
{
	{"object", 0, 134218384, &EmptyCustomAttributesCache, &t5_0_0_0},
	{"method", 1, 134218385, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m4482_MI = 
{
	".ctor", (methodPointerType)&m4482, &t1130_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t124, t1130_m4482_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, false, 728, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1127_0_0_0;
static ParameterInfo t1130_m4483_ParameterInfos[] = 
{
	{"i", 0, 134218386, &EmptyCustomAttributesCache, &t1127_0_0_0},
};
extern Il2CppType t118_0_0_0;
extern void* RuntimeInvoker_t118_t1127 (MethodInfo* method, void* obj, void** args);
MethodInfo m4483_MI = 
{
	"Invoke", (methodPointerType)&m4483, &t1130_TI, &t118_0_0_0, RuntimeInvoker_t118_t1127, t1130_m4483_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 1, false, false, 729, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1127_0_0_0;
extern Il2CppType t222_0_0_0;
extern Il2CppType t222_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t1130_m4484_ParameterInfos[] = 
{
	{"i", 0, 134218387, &EmptyCustomAttributesCache, &t1127_0_0_0},
	{"callback", 1, 134218388, &EmptyCustomAttributesCache, &t222_0_0_0},
	{"object", 2, 134218389, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t221_0_0_0;
extern void* RuntimeInvoker_t5_t1127_t5_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m4484_MI = 
{
	"BeginInvoke", (methodPointerType)&m4484, &t1130_TI, &t221_0_0_0, RuntimeInvoker_t5_t1127_t5_t5, t1130_m4484_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 3, false, false, 730, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t221_0_0_0;
extern Il2CppType t221_0_0_0;
static ParameterInfo t1130_m4485_ParameterInfos[] = 
{
	{"result", 0, 134218390, &EmptyCustomAttributesCache, &t221_0_0_0},
};
extern Il2CppType t118_0_0_0;
extern void* RuntimeInvoker_t118_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m4485_MI = 
{
	"EndInvoke", (methodPointerType)&m4485, &t1130_TI, &t118_0_0_0, RuntimeInvoker_t118_t5, t1130_m4485_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, false, 731, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1130_MIs[] =
{
	&m4482_MI,
	&m4483_MI,
	&m4484_MI,
	&m4485_MI,
	NULL
};
extern MethodInfo m2342_MI;
extern MethodInfo m2343_MI;
extern MethodInfo m2344_MI;
extern MethodInfo m2345_MI;
extern MethodInfo m2346_MI;
extern MethodInfo m2347_MI;
extern MethodInfo m2348_MI;
static MethodInfo* t1130_VT[] =
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
	&m4483_MI,
	&m4484_MI,
	&m4485_MI,
};
extern TypeInfo t516_TI;
extern TypeInfo t517_TI;
static Il2CppInterfaceOffsetPair t1130_IOs[] = 
{
	{ &t516_TI, 4},
	{ &t517_TI, 4},
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType t1130_0_0_0;
extern Il2CppType t1130_1_0_0;
extern TypeInfo t353_TI;
struct t1130;
TypeInfo t1130_TI = 
{
	&g_System_dll_Image, NULL, "CostDelegate", "", t1130_MIs, NULL, NULL, NULL, &t353_TI, NULL, &t1131_TI, &t1130_TI, NULL, t1130_VT, &EmptyCustomAttributesCache, &t1130_TI, &t1130_0_0_0, &t1130_1_0_0, t1130_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)pinvoke_delegate_wrapper_t1130, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1130), 0, sizeof(methodPointerType), 0, 0, -1, 258, 0, false, false, false, false, false, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#include "t1131.h"
#ifndef _MSC_VER
#else
#endif
#include "t1131MD.h"

extern TypeInfo t118_TI;
extern TypeInfo t132_TI;
extern MethodInfo m4771_MI;
extern MethodInfo m5056_MI;
extern MethodInfo m5057_MI;
extern MethodInfo m4486_MI;
extern MethodInfo m4489_MI;
extern MethodInfo m4492_MI;
extern MethodInfo m4491_MI;
extern MethodInfo m4487_MI;
extern MethodInfo m4488_MI;
extern MethodInfo m4774_MI;
extern MethodInfo m4765_MI;
extern MethodInfo m4764_MI;
extern MethodInfo m4766_MI;
extern MethodInfo m747_MI;
extern MethodInfo m516_MI;


 void m4486 (t1131 * __this, MethodInfo* method){
	{
		m460(__this, &m460_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t996_TI));
		t996 * L_0 = (t996 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t996_TI));
		m4773(L_0, &m4773_MI);
		__this->f0 = L_0;
		return;
	}
}
 t1127  m4487 (t1131 * __this, int32_t p0, MethodInfo* method){
	{
		t996 * L_0 = (__this->f0);
		t5 * L_1 = (t5 *)VirtFuncInvoker1< t5 *, int32_t >::Invoke(&m4771_MI, L_0, p0);
		return ((*(t1127 *)((t1127 *)UnBox (L_1, InitializedTypeInfo(&t1127_TI)))));
	}
}
 void m4488 (t1131 * __this, t1127  p0, MethodInfo* method){
	{
		t996 * L_0 = (__this->f0);
		t1127  L_1 = p0;
		t5 * L_2 = Box(InitializedTypeInfo(&t1127_TI), &L_1);
		VirtFuncInvoker1< int32_t, t5 * >::Invoke(&m4784_MI, L_0, L_2);
		return;
	}
}
 void m4489 (t1131 * __this, MethodInfo* method){
	int32_t V_0 = 0;
	t1127  V_1 = {0};
	t1127  V_2 = {0};
	{
		t996 * L_0 = (__this->f0);
		VirtActionInvoker0::Invoke(&m5056_MI, L_0);
		V_0 = 0;
		goto IL_0083;
	}

IL_0012:
	{
		t996 * L_1 = (__this->f0);
		t5 * L_2 = (t5 *)VirtFuncInvoker1< t5 *, int32_t >::Invoke(&m4771_MI, L_1, V_0);
		V_1 = ((*(t1127 *)((t1127 *)UnBox (L_2, InitializedTypeInfo(&t1127_TI)))));
		t996 * L_3 = (__this->f0);
		t5 * L_4 = (t5 *)VirtFuncInvoker1< t5 *, int32_t >::Invoke(&m4771_MI, L_3, ((int32_t)(V_0+1)));
		V_2 = ((*(t1127 *)((t1127 *)UnBox (L_4, InitializedTypeInfo(&t1127_TI)))));
		bool L_5 = m4471((&V_1), V_2, &m4471_MI);
		if (!L_5)
		{
			goto IL_0052;
		}
	}
	{
		bool L_6 = m4472((&V_1), V_2, &m4472_MI);
		if (!L_6)
		{
			goto IL_007f;
		}
	}

IL_0052:
	{
		m4476((&V_1), V_2, &m4476_MI);
		t996 * L_7 = (__this->f0);
		t1127  L_8 = V_1;
		t5 * L_9 = Box(InitializedTypeInfo(&t1127_TI), &L_8);
		VirtActionInvoker2< int32_t, t5 * >::Invoke(&m5052_MI, L_7, V_0, L_9);
		t996 * L_10 = (__this->f0);
		VirtActionInvoker1< int32_t >::Invoke(&m5057_MI, L_10, ((int32_t)(V_0+1)));
		goto IL_0083;
	}

IL_007f:
	{
		V_0 = ((int32_t)(V_0+1));
	}

IL_0083:
	{
		t996 * L_11 = (__this->f0);
		int32_t L_12 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m4769_MI, L_11);
		if ((((int32_t)V_0) < ((int32_t)((int32_t)(L_12-1)))))
		{
			goto IL_0012;
		}
	}
	{
		return;
	}
}
extern MethodInfo m4490_MI;
 t1131 * m4490 (t1131 * __this, t1130 * p0, MethodInfo* method){
	t1131 * V_0 = {0};
	{
		t1131 * L_0 = (t1131 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1131_TI));
		m4486(L_0, &m4486_MI);
		V_0 = L_0;
		m4489(__this, &m4489_MI);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m4492_MI, __this);
		m4491(__this, 0, ((int32_t)(L_1-1)), V_0, p0, &m4491_MI);
		t996 * L_2 = (V_0->f0);
		VirtActionInvoker0::Invoke(&m5056_MI, L_2);
		return V_0;
	}
}
 void m4491 (t1131 * __this, int32_t p0, int32_t p1, t1131 * p2, t1130 * p3, MethodInfo* method){
	t1127  V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	double V_3 = 0.0;
	int32_t V_4 = 0;
	double V_5 = 0.0;
	int32_t V_6 = 0;
	double V_7 = 0.0;
	int32_t V_8 = 0;
	t1127  V_9 = {0};
	t1127  V_10 = {0};
	t1127  V_11 = {0};
	t1127  V_12 = {0};
	{
		(&V_0)->f2 = 0;
		V_1 = (-1);
		V_2 = (-1);
		V_3 = (0.0);
		V_4 = p0;
		goto IL_00ae;
	}

IL_001e:
	{
		t1127  L_0 = m4487(__this, V_4, &m4487_MI);
		V_9 = L_0;
		int32_t L_1 = ((&V_9)->f0);
		(&V_0)->f0 = L_1;
		V_5 = (0.0);
		V_6 = V_4;
		goto IL_00a0;
	}

IL_004a:
	{
		t1127  L_2 = m4487(__this, V_6, &m4487_MI);
		V_10 = L_2;
		int32_t L_3 = ((&V_10)->f1);
		(&V_0)->f1 = L_3;
		t1127  L_4 = m4487(__this, V_6, &m4487_MI);
		double L_5 = (double)VirtFuncInvoker1< double, t1127  >::Invoke(&m4483_MI, p3, L_4);
		V_5 = ((double)(V_5+L_5));
		double L_6 = (double)VirtFuncInvoker1< double, t1127  >::Invoke(&m4483_MI, p3, V_0);
		V_7 = L_6;
		if ((((double)V_7) >= ((double)V_5)))
		{
			goto IL_009a;
		}
	}
	{
		if ((((double)V_5) <= ((double)V_3)))
		{
			goto IL_009a;
		}
	}
	{
		V_1 = V_4;
		V_2 = V_6;
		V_3 = V_5;
	}

IL_009a:
	{
		V_6 = ((int32_t)(V_6+1));
	}

IL_00a0:
	{
		if ((((int32_t)V_6) <= ((int32_t)p1)))
		{
			goto IL_004a;
		}
	}
	{
		V_4 = ((int32_t)(V_4+1));
	}

IL_00ae:
	{
		if ((((int32_t)V_4) <= ((int32_t)p1)))
		{
			goto IL_001e;
		}
	}
	{
		if ((((int32_t)V_1) >= ((int32_t)0)))
		{
			goto IL_00e6;
		}
	}
	{
		V_8 = p0;
		goto IL_00d9;
	}

IL_00c5:
	{
		t1127  L_7 = m4487(__this, V_8, &m4487_MI);
		m4488(p2, L_7, &m4488_MI);
		V_8 = ((int32_t)(V_8+1));
	}

IL_00d9:
	{
		if ((((int32_t)V_8) <= ((int32_t)p1)))
		{
			goto IL_00c5;
		}
	}
	{
		goto IL_0143;
	}

IL_00e6:
	{
		t1127  L_8 = m4487(__this, V_1, &m4487_MI);
		V_11 = L_8;
		int32_t L_9 = ((&V_11)->f0);
		(&V_0)->f0 = L_9;
		t1127  L_10 = m4487(__this, V_2, &m4487_MI);
		V_12 = L_10;
		int32_t L_11 = ((&V_12)->f1);
		(&V_0)->f1 = L_11;
		m4488(p2, V_0, &m4488_MI);
		if ((((int32_t)V_1) <= ((int32_t)p0)))
		{
			goto IL_012f;
		}
	}
	{
		m4491(__this, p0, ((int32_t)(V_1-1)), p2, p3, &m4491_MI);
	}

IL_012f:
	{
		if ((((int32_t)V_2) >= ((int32_t)p1)))
		{
			goto IL_0143;
		}
	}
	{
		m4491(__this, ((int32_t)(V_2+1)), p1, p2, p3, &m4491_MI);
	}

IL_0143:
	{
		return;
	}
}
 int32_t m4492 (t1131 * __this, MethodInfo* method){
	{
		t996 * L_0 = (__this->f0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m4769_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m4493_MI;
 bool m4493 (t1131 * __this, MethodInfo* method){
	{
		return 0;
	}
}
extern MethodInfo m4494_MI;
 t5 * m4494 (t1131 * __this, MethodInfo* method){
	{
		t996 * L_0 = (__this->f0);
		return L_0;
	}
}
extern MethodInfo m4495_MI;
 void m4495 (t1131 * __this, t107 * p0, int32_t p1, MethodInfo* method){
	t1127  V_0 = {0};
	t5 * V_1 = {0};
	t5 * V_2 = {0};
	int32_t leaveInstructions[1] = {0};
	t142 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t142 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	{
		t996 * L_0 = (__this->f0);
		t5 * L_1 = (t5 *)VirtFuncInvoker0< t5 * >::Invoke(&m4774_MI, L_0);
		V_1 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0040;
		}

IL_0011:
		{
			t5 * L_2 = (t5 *)InterfaceFuncInvoker0< t5 * >::Invoke(&m4765_MI, V_1);
			V_0 = ((*(t1127 *)((t1127 *)UnBox (L_2, InitializedTypeInfo(&t1127_TI)))));
			int32_t L_3 = m4764(p0, &m4764_MI);
			if ((((int32_t)p1) <= ((int32_t)L_3)))
			{
				goto IL_002e;
			}
		}

IL_0029:
		{
			goto IL_004b;
		}

IL_002e:
		{
			t1127  L_4 = V_0;
			t5 * L_5 = Box(InitializedTypeInfo(&t1127_TI), &L_4);
			int32_t L_6 = p1;
			p1 = ((int32_t)(L_6+1));
			m4766(p0, L_5, L_6, &m4766_MI);
		}

IL_0040:
		{
			bool L_7 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&m747_MI, V_1);
			if (L_7)
			{
				goto IL_0011;
			}
		}

IL_004b:
		{
			// IL_004b: leave IL_0062
			leaveInstructions[0] = 0x62; // 1
			THROW_SENTINEL(IL_0062);
			// finally target depth: 1
		}
	} // end try (depth: 1)
	catch(Il2CppFinallySentinel& e)
	{
		goto IL_0050;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t142 *)e.ex;
		goto IL_0050;
	}

IL_0050:
	{ // begin finally (depth: 1)
		{
			V_2 = ((t5 *)IsInst(V_1, InitializedTypeInfo(&t132_TI)));
			if (V_2)
			{
				goto IL_005b;
			}
		}

IL_005a:
		{
			// finally node depth: 1
			switch (leaveInstructions[0])
			{
				case 0x62:
					goto IL_0062;
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

IL_005b:
		{
			InterfaceActionInvoker0::Invoke(&m516_MI, V_2);
			// finally node depth: 1
			switch (leaveInstructions[0])
			{
				case 0x62:
					goto IL_0062;
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

IL_0062:
	{
		return;
	}
}
extern MethodInfo m4496_MI;
 t5 * m4496 (t1131 * __this, MethodInfo* method){
	{
		t996 * L_0 = (__this->f0);
		t1128 * L_1 = (t1128 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1128_TI));
		m4478(L_1, L_0, &m4478_MI);
		return L_1;
	}
}
// Metadata Definition System.Text.RegularExpressions.IntervalCollection
extern Il2CppType t996_0_0_1;
FieldInfo t1131_f0_FieldInfo = 
{
	"intervals", &t996_0_0_1, &t1131_TI, offsetof(t1131, f0), &EmptyCustomAttributesCache};
static FieldInfo* t1131_FIs[] =
{
	&t1131_f0_FieldInfo,
	NULL
};
static PropertyInfo t1131____Item_PropertyInfo = 
{
	&t1131_TI, "Item", &m4487_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1131____Count_PropertyInfo = 
{
	&t1131_TI, "Count", &m4492_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1131____IsSynchronized_PropertyInfo = 
{
	&t1131_TI, "IsSynchronized", &m4493_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1131____SyncRoot_PropertyInfo = 
{
	&t1131_TI, "SyncRoot", &m4494_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1131_PIs[] =
{
	&t1131____Item_PropertyInfo,
	&t1131____Count_PropertyInfo,
	&t1131____IsSynchronized_PropertyInfo,
	&t1131____SyncRoot_PropertyInfo,
	NULL
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m4486_MI = 
{
	".ctor", (methodPointerType)&m4486, &t1131_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 713, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t110_0_0_0;
static ParameterInfo t1131_m4487_ParameterInfos[] = 
{
	{"i", 0, 134218374, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t1127_0_0_0;
extern void* RuntimeInvoker_t1127_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m4487_MI = 
{
	"get_Item", (methodPointerType)&m4487, &t1131_TI, &t1127_0_0_0, RuntimeInvoker_t1127_t110, t1131_m4487_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, false, 714, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1127_0_0_0;
static ParameterInfo t1131_m4488_ParameterInfos[] = 
{
	{"i", 0, 134218375, &EmptyCustomAttributesCache, &t1127_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t1127 (MethodInfo* method, void* obj, void** args);
MethodInfo m4488_MI = 
{
	"Add", (methodPointerType)&m4488, &t1131_TI, &t109_0_0_0, RuntimeInvoker_t109_t1127, t1131_m4488_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 715, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m4489_MI = 
{
	"Normalize", (methodPointerType)&m4489, &t1131_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, false, 716, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1130_0_0_0;
static ParameterInfo t1131_m4490_ParameterInfos[] = 
{
	{"cost_del", 0, 134218376, &EmptyCustomAttributesCache, &t1130_0_0_0},
};
extern Il2CppType t1131_0_0_0;
extern void* RuntimeInvoker_t5_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m4490_MI = 
{
	"GetMetaCollection", (methodPointerType)&m4490, &t1131_TI, &t1131_0_0_0, RuntimeInvoker_t5_t5, t1131_m4490_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 717, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t110_0_0_0;
extern Il2CppType t110_0_0_0;
extern Il2CppType t1131_0_0_0;
extern Il2CppType t1131_0_0_0;
extern Il2CppType t1130_0_0_0;
static ParameterInfo t1131_m4491_ParameterInfos[] = 
{
	{"begin", 0, 134218377, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"end", 1, 134218378, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"meta", 2, 134218379, &EmptyCustomAttributesCache, &t1131_0_0_0},
	{"cost_del", 3, 134218380, &EmptyCustomAttributesCache, &t1130_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t110_t5_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m4491_MI = 
{
	"Optimize", (methodPointerType)&m4491, &t1131_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110_t5_t5, t1131_m4491_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 4, false, false, 718, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m4492_MI = 
{
	"get_Count", (methodPointerType)&m4492, &t1131_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 2534, 0, 4, 0, false, false, 719, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
MethodInfo m4493_MI = 
{
	"get_IsSynchronized", (methodPointerType)&m4493, &t1131_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2534, 0, 5, 0, false, false, 720, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t5_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m4494_MI = 
{
	"get_SyncRoot", (methodPointerType)&m4494, &t1131_TI, &t5_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2534, 0, 6, 0, false, false, 721, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t107_0_0_0;
extern Il2CppType t107_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t1131_m4495_ParameterInfos[] = 
{
	{"array", 0, 134218381, &EmptyCustomAttributesCache, &t107_0_0_0},
	{"index", 1, 134218382, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m4495_MI = 
{
	"CopyTo", (methodPointerType)&m4495, &t1131_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t1131_m4495_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 7, 2, false, false, 722, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t196_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m4496_MI = 
{
	"GetEnumerator", (methodPointerType)&m4496, &t1131_TI, &t196_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 486, 0, 8, 0, false, false, 723, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1131_MIs[] =
{
	&m4486_MI,
	&m4487_MI,
	&m4488_MI,
	&m4489_MI,
	&m4490_MI,
	&m4491_MI,
	&m4492_MI,
	&m4493_MI,
	&m4494_MI,
	&m4495_MI,
	&m4496_MI,
	NULL
};
extern TypeInfo t1128_TI;
extern TypeInfo t1130_TI;
static TypeInfo* t1131_TI__nestedTypes[3] =
{
	&t1128_TI,
	&t1130_TI,
	NULL
};
static MethodInfo* t1131_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m4492_MI,
	&m4493_MI,
	&m4494_MI,
	&m4495_MI,
	&m4496_MI,
};
extern TypeInfo t739_TI;
static TypeInfo* t1131_ITIs[] = 
{
	&t811_TI,
	&t739_TI,
};
static Il2CppInterfaceOffsetPair t1131_IOs[] = 
{
	{ &t811_TI, 4},
	{ &t739_TI, 8},
};
extern TypeInfo t172_TI;
#include "t172.h"
#include "t172MD.h"
extern MethodInfo m657_MI;
void t1131_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t172 * tmp;
		tmp = (t172 *)il2cpp_codegen_object_new (&t172_TI);
		m657(tmp, il2cpp_codegen_string_new_wrapper("Item"), &m657_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1131__CustomAttributeCache = {
1,
NULL,
&t1131_CustomAttributesCacheGenerator
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType t1131_1_0_0;
struct t1131;
extern CustomAttributesCache t1131__CustomAttributeCache;
TypeInfo t1131_TI = 
{
	&g_System_dll_Image, NULL, "IntervalCollection", "System.Text.RegularExpressions", t1131_MIs, t1131_PIs, t1131_FIs, NULL, &t5_TI, t1131_TI__nestedTypes, NULL, &t1131_TI, t1131_ITIs, t1131_VT, &t1131__CustomAttributeCache, &t1131_TI, &t1131_0_0_0, &t1131_1_0_0, t1131_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1131), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, false, false, false, false, false, false, false, 11, 4, 1, 0, 2, 9, 2, 2};
#include "t1132.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1132_TI;
#include "t1132MD.h"

#include "t984.h"
#include "t1133.h"
#include "t1103.h"
#include "t1134.h"
#include "t1135.h"
#include "t160.h"
#include "t1142.h"
#include "t1148.h"
#include "t1136.h"
#include "t1145.h"
#include "t1149.h"
#include "t1152.h"
#include "t1147.h"
#include "t1137.h"
#include "t1143.h"
#include "t1144.h"
#include "t1146.h"
#include "t1150.h"
#include "t1151.h"
extern TypeInfo t984_TI;
extern TypeInfo t1133_TI;
extern TypeInfo t733_TI;
extern TypeInfo t1142_TI;
extern TypeInfo t1134_TI;
extern TypeInfo t1149_TI;
extern TypeInfo t1152_TI;
extern TypeInfo t1147_TI;
extern TypeInfo t1148_TI;
extern TypeInfo t1145_TI;
extern TypeInfo t1144_TI;
extern TypeInfo t1137_TI;
extern TypeInfo t1143_TI;
extern TypeInfo t1146_TI;
extern TypeInfo t168_TI;
extern TypeInfo t1151_TI;
extern TypeInfo t1150_TI;
extern TypeInfo t1136_TI;
#include "t984MD.h"
#include "t110MD.h"
#include "t1133MD.h"
#include "t1142MD.h"
#include "t1134MD.h"
#include "t1149MD.h"
#include "t1152MD.h"
#include "t1147MD.h"
#include "t1135MD.h"
#include "t1148MD.h"
#include "t1145MD.h"
#include "t1144MD.h"
#include "t1137MD.h"
#include "t1143MD.h"
#include "t1146MD.h"
#include "t1151MD.h"
#include "t1150MD.h"
#include "t160MD.h"
extern MethodInfo m5003_MI;
extern MethodInfo m4501_MI;
extern MethodInfo m4517_MI;
extern MethodInfo m3590_MI;
extern MethodInfo m4515_MI;
extern MethodInfo m2386_MI;
extern MethodInfo m4972_MI;
extern MethodInfo m5058_MI;
extern MethodInfo m4552_MI;
extern MethodInfo m4505_MI;
extern MethodInfo m4519_MI;
extern MethodInfo m4553_MI;
extern MethodInfo m4527_MI;
extern MethodInfo m4783_MI;
extern MethodInfo m4558_MI;
extern MethodInfo m4556_MI;
extern MethodInfo m5013_MI;
extern MethodInfo m4782_MI;
extern MethodInfo m4547_MI;
extern MethodInfo m4525_MI;
extern MethodInfo m4518_MI;
extern MethodInfo m4522_MI;
extern MethodInfo m4606_MI;
extern MethodInfo m4524_MI;
extern MethodInfo m4622_MI;
extern MethodInfo m4513_MI;
extern MethodInfo m4512_MI;
extern MethodInfo m4509_MI;
extern MethodInfo m4521_MI;
extern MethodInfo m4506_MI;
extern MethodInfo m4600_MI;
extern MethodInfo m4548_MI;
extern MethodInfo m4578_MI;
extern MethodInfo m4579_MI;
extern MethodInfo m4580_MI;
extern MethodInfo m4581_MI;
extern MethodInfo m4595_MI;
extern MethodInfo m4597_MI;
extern MethodInfo m4510_MI;
extern MethodInfo m4570_MI;
extern MethodInfo m2412_MI;
extern MethodInfo m4572_MI;
extern MethodInfo m1972_MI;
extern MethodInfo m4523_MI;
extern MethodInfo m4555_MI;
extern MethodInfo m4567_MI;
extern MethodInfo m4508_MI;
extern MethodInfo m4588_MI;
extern MethodInfo m4507_MI;
extern MethodInfo m4592_MI;
extern MethodInfo m4514_MI;
extern MethodInfo m4559_MI;
extern MethodInfo m4564_MI;
extern MethodInfo m4560_MI;
extern MethodInfo m4590_MI;
extern MethodInfo m4589_MI;
extern MethodInfo m4583_MI;
extern MethodInfo m4526_MI;
extern MethodInfo m4621_MI;
extern MethodInfo m4625_MI;
extern MethodInfo m4624_MI;
extern MethodInfo m4511_MI;
extern MethodInfo m2041_MI;
extern MethodInfo m4626_MI;
extern MethodInfo m4516_MI;
extern MethodInfo m4502_MI;
extern MethodInfo m2328_MI;
extern MethodInfo m4618_MI;
extern MethodInfo m4611_MI;
extern MethodInfo m462_MI;
extern MethodInfo m614_MI;
extern MethodInfo m4499_MI;
extern MethodInfo m4500_MI;
extern MethodInfo m4557_MI;
extern MethodInfo m4498_MI;
extern MethodInfo m4975_MI;
extern MethodInfo m4520_MI;
extern MethodInfo m5059_MI;
extern MethodInfo m4948_MI;
extern MethodInfo m4619_MI;
extern MethodInfo m4613_MI;
extern MethodInfo m4584_MI;
extern MethodInfo m4565_MI;
extern MethodInfo m3573_MI;


extern MethodInfo m4497_MI;
 void m4497 (t1132 * __this, MethodInfo* method){
	{
		m460(__this, &m460_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t996_TI));
		t996 * L_0 = (t996 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t996_TI));
		m4773(L_0, &m4773_MI);
		__this->f2 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t984_TI));
		t984 * L_1 = (t984 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t984_TI));
		m5003(L_1, &m5003_MI);
		__this->f3 = L_1;
		return;
	}
}
 int32_t m4498 (t5 * __this, t11* p0, int32_t* p1, MethodInfo* method){
	{
		int32_t L_0 = m4501(NULL, p0, p1, ((int32_t)10), 1, ((int32_t)2147483647), &m4501_MI);
		return L_0;
	}
}
 int32_t m4499 (t5 * __this, t11* p0, int32_t* p1, MethodInfo* method){
	{
		int32_t L_0 = m4501(NULL, p0, p1, 8, 1, 3, &m4501_MI);
		return L_0;
	}
}
 int32_t m4500 (t5 * __this, t11* p0, int32_t* p1, int32_t p2, MethodInfo* method){
	{
		int32_t L_0 = m4501(NULL, p0, p1, ((int32_t)16), p2, p2, &m4501_MI);
		return L_0;
	}
}
 int32_t m4501 (t5 * __this, t11* p0, int32_t* p1, int32_t p2, int32_t p3, int32_t p4, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		V_0 = (*((int32_t*)p1));
		V_1 = 0;
		V_2 = 0;
		if ((((int32_t)p4) >= ((int32_t)p3)))
		{
			goto IL_0016;
		}
	}
	{
		p4 = ((int32_t)2147483647);
	}

IL_0016:
	{
		goto IL_0048;
	}

IL_001b:
	{
		int32_t L_0 = V_0;
		V_0 = ((int32_t)(L_0+1));
		uint16_t L_1 = m2385(p0, L_0, &m2385_MI);
		int32_t L_2 = m4517(NULL, L_1, p2, V_2, &m4517_MI);
		V_3 = L_2;
		if ((((int32_t)V_3) >= ((int32_t)0)))
		{
			goto IL_003e;
		}
	}
	{
		V_0 = ((int32_t)(V_0-1));
		goto IL_005c;
	}

IL_003e:
	{
		V_1 = ((int32_t)(((int32_t)((int32_t)V_1*(int32_t)p2))+V_3));
		V_2 = ((int32_t)(V_2+1));
	}

IL_0048:
	{
		if ((((int32_t)V_2) >= ((int32_t)p4)))
		{
			goto IL_005c;
		}
	}
	{
		int32_t L_3 = m2358(p0, &m2358_MI);
		if ((((int32_t)V_0) < ((int32_t)L_3)))
		{
			goto IL_001b;
		}
	}

IL_005c:
	{
		if ((((int32_t)V_2) >= ((int32_t)p3)))
		{
			goto IL_0065;
		}
	}
	{
		return (-1);
	}

IL_0065:
	{
		*((int32_t*)(p1)) = (int32_t)V_0;
		return V_1;
	}
}
 t11* m4502 (t5 * __this, t11* p0, int32_t* p1, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		uint16_t L_0 = m2385(p0, (*((int32_t*)p1)), &m2385_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t144_TI));
		bool L_1 = m5016(NULL, L_0, &m5016_MI);
		if (!L_1)
		{
			goto IL_002f;
		}
	}
	{
		int32_t L_2 = m4501(NULL, p0, p1, ((int32_t)10), 1, 0, &m4501_MI);
		V_0 = L_2;
		if ((((int32_t)V_0) <= ((int32_t)0)))
		{
			goto IL_002d;
		}
	}
	{
		t11* L_3 = m3590((&V_0), &m3590_MI);
		return L_3;
	}

IL_002d:
	{
		return (t11*)NULL;
	}

IL_002f:
	{
		V_1 = (*((int32_t*)p1));
		goto IL_0054;
	}

IL_0037:
	{
		uint16_t L_4 = m2385(p0, (*((int32_t*)p1)), &m2385_MI);
		bool L_5 = m4515(NULL, L_4, &m4515_MI);
		if (L_5)
		{
			goto IL_004e;
		}
	}
	{
		goto IL_0059;
	}

IL_004e:
	{
		*((int32_t*)(p1)) = (int32_t)((int32_t)((*((int32_t*)p1))+1));
	}

IL_0054:
	{
		goto IL_0037;
	}

IL_0059:
	{
		if ((((int32_t)((int32_t)((*((int32_t*)p1))-V_1))) <= ((int32_t)0)))
		{
			goto IL_006f;
		}
	}
	{
		t11* L_6 = m2386(p0, V_1, ((int32_t)((*((int32_t*)p1))-V_1)), &m2386_MI);
		return L_6;
	}

IL_006f:
	{
		return (t11*)NULL;
	}
}
extern MethodInfo m4503_MI;
 t1133 * m4503 (t1132 * __this, t11* p0, int32_t p1, MethodInfo* method){
	t1133 * V_0 = {0};
	t1133 * V_1 = {0};
	t142 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t142 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	{
		__this->f0 = p0;
		__this->f1 = 0;
		t996 * L_0 = (__this->f2);
		VirtActionInvoker0::Invoke(&m4972_MI, L_0);
		t984 * L_1 = (__this->f3);
		VirtActionInvoker0::Invoke(&m5058_MI, L_1);
		__this->f4 = 0;
	}

IL_002b:
	try
	{ // begin try (depth: 1)
		{
			t1133 * L_2 = (t1133 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1133_TI));
			m4552(L_2, &m4552_MI);
			V_0 = L_2;
			m4505(__this, V_0, p1, (t1135 *)NULL, &m4505_MI);
			m4519(__this, &m4519_MI);
			int32_t L_3 = (__this->f4);
			m4553(V_0, L_3, &m4553_MI);
			V_1 = V_0;
			// IL_004e: leave IL_006a
			goto IL_006a;
		}

IL_0053:
		{
			; // IL_0053: leave IL_006a
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (t142 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&t733_TI, e.ex->object.klass))
			goto IL_0058;
		throw e;
	}

IL_0058:
	{ // begin catch(System.IndexOutOfRangeException)
		t160 * L_4 = m4527(__this, (t11*) &_stringLiteral525, &m4527_MI);
		il2cpp_codegen_raise_exception(L_4);
		// IL_0065: leave IL_006a
		goto IL_006a;
	} // end catch (depth: 1)

IL_006a:
	{
		return V_1;
	}
}
extern MethodInfo m4504_MI;
 int32_t m4504 (t1132 * __this, t984 * p0, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	t1142 * V_2 = {0};
	t11* V_3 = {0};
	int32_t V_4 = 0;
	t11* G_B4_0 = {0};
	{
		t996 * L_0 = (__this->f2);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m4769_MI, L_0);
		V_0 = L_1;
		int32_t L_2 = 0;
		t5 * L_3 = Box(InitializedTypeInfo(&t110_TI), &L_2);
		VirtActionInvoker2< t5 *, t5 * >::Invoke(&m4783_MI, p0, (t11*) &_stringLiteral526, L_3);
		V_1 = 0;
		goto IL_00a5;
	}

IL_0024:
	{
		t996 * L_4 = (__this->f2);
		t5 * L_5 = (t5 *)VirtFuncInvoker1< t5 *, int32_t >::Invoke(&m4771_MI, L_4, V_1);
		V_2 = ((t1142 *)Castclass(L_5, InitializedTypeInfo(&t1142_TI)));
		t11* L_6 = m4558(V_2, &m4558_MI);
		if (!L_6)
		{
			goto IL_004c;
		}
	}
	{
		t11* L_7 = m4558(V_2, &m4558_MI);
		G_B4_0 = L_7;
		goto IL_005b;
	}

IL_004c:
	{
		int32_t L_8 = m4556(V_2, &m4556_MI);
		V_4 = L_8;
		t11* L_9 = m3590((&V_4), &m3590_MI);
		G_B4_0 = L_9;
	}

IL_005b:
	{
		V_3 = G_B4_0;
		bool L_10 = (bool)VirtFuncInvoker1< bool, t5 * >::Invoke(&m5013_MI, p0, V_3);
		if (!L_10)
		{
			goto IL_008f;
		}
	}
	{
		t5 * L_11 = (t5 *)VirtFuncInvoker1< t5 *, t5 * >::Invoke(&m4782_MI, p0, V_3);
		int32_t L_12 = m4556(V_2, &m4556_MI);
		if ((((int32_t)((*(int32_t*)((int32_t*)UnBox (L_11, InitializedTypeInfo(&t110_TI)))))) == ((int32_t)L_12)))
		{
			goto IL_008a;
		}
	}
	{
		t1221 * L_13 = (t1221 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1221_TI));
		m4996(L_13, (t11*) &_stringLiteral527, &m4996_MI);
		il2cpp_codegen_raise_exception(L_13);
	}

IL_008a:
	{
		goto IL_00a1;
	}

IL_008f:
	{
		int32_t L_14 = m4556(V_2, &m4556_MI);
		int32_t L_15 = L_14;
		t5 * L_16 = Box(InitializedTypeInfo(&t110_TI), &L_15);
		VirtActionInvoker2< t5 *, t5 * >::Invoke(&m4783_MI, p0, V_3, L_16);
	}

IL_00a1:
	{
		V_1 = ((int32_t)(V_1+1));
	}

IL_00a5:
	{
		if ((((int32_t)V_1) < ((int32_t)V_0)))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_17 = (__this->f5);
		return L_17;
	}
}
 void m4505 (t1132 * __this, t1134 * p0, int32_t p1, t1135 * p2, MethodInfo* method){
	bool V_0 = false;
	t1148 * V_1 = {0};
	t11* V_2 = {0};
	t1134 * V_3 = {0};
	t1136 * V_4 = {0};
	bool V_5 = false;
	uint16_t V_6 = 0x0;
	uint16_t V_7 = {0};
	uint16_t V_8 = {0};
	uint16_t V_9 = {0};
	int32_t V_10 = 0;
	bool V_11 = false;
	uint16_t V_12 = 0x0;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	bool V_15 = false;
	bool V_16 = false;
	int32_t V_17 = 0;
	t1145 * V_18 = {0};
	int32_t V_19 = 0;
	uint16_t V_20 = 0x0;
	int32_t G_B11_0 = 0;
	int32_t G_B15_0 = 0;
	int32_t G_B19_0 = 0;
	{
		V_0 = ((((t1133 *)((t1133 *)IsInst(p0, InitializedTypeInfo(&t1133_TI)))) > ((t5 *)NULL))? 1 : 0);
		V_1 = (t1148 *)NULL;
		V_2 = (t11*)NULL;
		t1134 * L_0 = (t1134 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1134_TI));
		m4547(L_0, &m4547_MI);
		V_3 = L_0;
		V_4 = (t1136 *)NULL;
		V_5 = 0;
	}

IL_001a:
	{
		bool L_1 = m4525(NULL, p1, &m4525_MI);
		m4518(__this, L_1, &m4518_MI);
		int32_t L_2 = (__this->f1);
		t11* L_3 = (__this->f0);
		int32_t L_4 = m2358(L_3, &m2358_MI);
		if ((((int32_t)L_2) < ((int32_t)L_4)))
		{
			goto IL_0041;
		}
	}
	{
		goto IL_0484;
	}

IL_0041:
	{
		t11* L_5 = (__this->f0);
		int32_t L_6 = (__this->f1);
		int32_t L_7 = L_6;
		V_19 = L_7;
		__this->f1 = ((int32_t)(L_7+1));
		uint16_t L_8 = m2385(L_5, V_19, &m2385_MI);
		V_6 = L_8;
		V_20 = V_6;
		if (((uint16_t)(V_20-((int32_t)36))) == 0)
		{
			goto IL_00ee;
		}
		if (((uint16_t)(V_20-((int32_t)36))) == 1)
		{
			goto IL_009b;
		}
		if (((uint16_t)(V_20-((int32_t)36))) == 2)
		{
			goto IL_009b;
		}
		if (((uint16_t)(V_20-((int32_t)36))) == 3)
		{
			goto IL_009b;
		}
		if (((uint16_t)(V_20-((int32_t)36))) == 4)
		{
			goto IL_0190;
		}
		if (((uint16_t)(V_20-((int32_t)36))) == 5)
		{
			goto IL_01da;
		}
		if (((uint16_t)(V_20-((int32_t)36))) == 6)
		{
			goto IL_025f;
		}
		if (((uint16_t)(V_20-((int32_t)36))) == 7)
		{
			goto IL_025f;
		}
		if (((uint16_t)(V_20-((int32_t)36))) == 8)
		{
			goto IL_009b;
		}
		if (((uint16_t)(V_20-((int32_t)36))) == 9)
		{
			goto IL_009b;
		}
		if (((uint16_t)(V_20-((int32_t)36))) == 10)
		{
			goto IL_0110;
		}
	}

IL_009b:
	{
		if (((uint16_t)(V_20-((int32_t)91))) == 0)
		{
			goto IL_0182;
		}
		if (((uint16_t)(V_20-((int32_t)91))) == 1)
		{
			goto IL_0133;
		}
		if (((uint16_t)(V_20-((int32_t)91))) == 2)
		{
			goto IL_00b5;
		}
		if (((uint16_t)(V_20-((int32_t)91))) == 3)
		{
			goto IL_00cc;
		}
	}

IL_00b5:
	{
		if ((((int32_t)V_20) == ((int32_t)((int32_t)63))))
		{
			goto IL_025f;
		}
	}
	{
		if ((((int32_t)V_20) == ((int32_t)((int32_t)124))))
		{
			goto IL_01e2;
		}
	}
	{
		goto IL_026b;
	}

IL_00cc:
	{
		bool L_9 = m4522(NULL, p1, &m4522_MI);
		if (!L_9)
		{
			goto IL_00dd;
		}
	}
	{
		G_B11_0 = 3;
		goto IL_00de;
	}

IL_00dd:
	{
		G_B11_0 = 1;
	}

IL_00de:
	{
		V_7 = G_B11_0;
		t1149 * L_10 = (t1149 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1149_TI));
		m4606(L_10, V_7, &m4606_MI);
		V_4 = L_10;
		goto IL_0270;
	}

IL_00ee:
	{
		bool L_11 = m4522(NULL, p1, &m4522_MI);
		if (!L_11)
		{
			goto IL_00ff;
		}
	}
	{
		G_B15_0 = 7;
		goto IL_0100;
	}

IL_00ff:
	{
		G_B15_0 = 5;
	}

IL_0100:
	{
		V_8 = G_B15_0;
		t1149 * L_12 = (t1149 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1149_TI));
		m4606(L_12, V_8, &m4606_MI);
		V_4 = L_12;
		goto IL_0270;
	}

IL_0110:
	{
		bool L_13 = m4524(NULL, p1, &m4524_MI);
		if (!L_13)
		{
			goto IL_0121;
		}
	}
	{
		G_B19_0 = 2;
		goto IL_0122;
	}

IL_0121:
	{
		G_B19_0 = 1;
	}

IL_0122:
	{
		V_9 = G_B19_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1152_TI));
		t1152 * L_14 = (t1152 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1152_TI));
		m4622(L_14, V_9, 0, &m4622_MI);
		V_4 = L_14;
		goto IL_0270;
	}

IL_0133:
	{
		int32_t L_15 = m4513(__this, &m4513_MI);
		V_10 = L_15;
		if ((((int32_t)V_10) < ((int32_t)0)))
		{
			goto IL_014d;
		}
	}
	{
		V_6 = (((uint16_t)V_10));
		goto IL_017d;
	}

IL_014d:
	{
		t1136 * L_16 = m4512(__this, p1, &m4512_MI);
		V_4 = L_16;
		if (V_4)
		{
			goto IL_017d;
		}
	}
	{
		t11* L_17 = (__this->f0);
		int32_t L_18 = (__this->f1);
		int32_t L_19 = L_18;
		V_19 = L_19;
		__this->f1 = ((int32_t)(L_19+1));
		uint16_t L_20 = m2385(L_17, V_19, &m2385_MI);
		V_6 = L_20;
	}

IL_017d:
	{
		goto IL_0270;
	}

IL_0182:
	{
		t1136 * L_21 = m4509(__this, p1, &m4509_MI);
		V_4 = L_21;
		goto IL_0270;
	}

IL_0190:
	{
		bool L_22 = m4521(NULL, p1, &m4521_MI);
		V_11 = L_22;
		t1136 * L_23 = m4506(__this, (&p1), &m4506_MI);
		V_4 = L_23;
		if (V_4)
		{
			goto IL_01d5;
		}
	}
	{
		if (!V_2)
		{
			goto IL_01d0;
		}
	}
	{
		bool L_24 = m4521(NULL, p1, &m4521_MI);
		if ((((int32_t)L_24) == ((int32_t)V_11)))
		{
			goto IL_01d0;
		}
	}
	{
		bool L_25 = m4521(NULL, p1, &m4521_MI);
		t1147 * L_26 = (t1147 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1147_TI));
		m4600(L_26, V_2, L_25, &m4600_MI);
		m4548(V_3, L_26, &m4548_MI);
		V_2 = (t11*)NULL;
	}

IL_01d0:
	{
		goto IL_001a;
	}

IL_01d5:
	{
		goto IL_0270;
	}

IL_01da:
	{
		V_5 = 1;
		goto IL_0484;
	}

IL_01e2:
	{
		if (!V_2)
		{
			goto IL_01fc;
		}
	}
	{
		bool L_27 = m4521(NULL, p1, &m4521_MI);
		t1147 * L_28 = (t1147 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1147_TI));
		m4600(L_28, V_2, L_27, &m4600_MI);
		m4548(V_3, L_28, &m4548_MI);
		V_2 = (t11*)NULL;
	}

IL_01fc:
	{
		if (!p2)
		{
			goto IL_0241;
		}
	}
	{
		t1136 * L_29 = m4578(p2, &m4578_MI);
		if (L_29)
		{
			goto IL_0219;
		}
	}
	{
		m4579(p2, V_3, &m4579_MI);
		goto IL_023c;
	}

IL_0219:
	{
		t1136 * L_30 = m4580(p2, &m4580_MI);
		if (L_30)
		{
			goto IL_0230;
		}
	}
	{
		m4581(p2, V_3, &m4581_MI);
		goto IL_023c;
	}

IL_0230:
	{
		t160 * L_31 = m4527(__this, (t11*) &_stringLiteral528, &m4527_MI);
		il2cpp_codegen_raise_exception(L_31);
	}

IL_023c:
	{
		goto IL_0254;
	}

IL_0241:
	{
		if (V_1)
		{
			goto IL_024d;
		}
	}
	{
		t1148 * L_32 = (t1148 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1148_TI));
		m4595(L_32, &m4595_MI);
		V_1 = L_32;
	}

IL_024d:
	{
		m4597(V_1, V_3, &m4597_MI);
	}

IL_0254:
	{
		t1134 * L_33 = (t1134 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1134_TI));
		m4547(L_33, &m4547_MI);
		V_3 = L_33;
		goto IL_001a;
	}

IL_025f:
	{
		t160 * L_34 = m4527(__this, (t11*) &_stringLiteral529, &m4527_MI);
		il2cpp_codegen_raise_exception(L_34);
	}

IL_026b:
	{
		goto IL_0270;
	}

IL_0270:
	{
		bool L_35 = m4525(NULL, p1, &m4525_MI);
		m4518(__this, L_35, &m4518_MI);
		int32_t L_36 = (__this->f1);
		t11* L_37 = (__this->f0);
		int32_t L_38 = m2358(L_37, &m2358_MI);
		if ((((int32_t)L_36) >= ((int32_t)L_38)))
		{
			goto IL_0413;
		}
	}
	{
		t11* L_39 = (__this->f0);
		int32_t L_40 = (__this->f1);
		uint16_t L_41 = m2385(L_39, L_40, &m2385_MI);
		V_12 = L_41;
		V_13 = 0;
		V_14 = 0;
		V_15 = 0;
		V_16 = 0;
		if ((((int32_t)V_12) == ((int32_t)((int32_t)63))))
		{
			goto IL_02cc;
		}
	}
	{
		if ((((int32_t)V_12) == ((int32_t)((int32_t)42))))
		{
			goto IL_02cc;
		}
	}
	{
		if ((((uint32_t)V_12) != ((uint32_t)((int32_t)43))))
		{
			goto IL_032f;
		}
	}

IL_02cc:
	{
		int32_t L_42 = (__this->f1);
		__this->f1 = ((int32_t)(L_42+1));
		V_16 = 1;
		V_20 = V_12;
		if ((((int32_t)V_20) == ((int32_t)((int32_t)42))))
		{
			goto IL_030c;
		}
	}
	{
		if ((((int32_t)V_20) == ((int32_t)((int32_t)43))))
		{
			goto IL_031b;
		}
	}
	{
		if ((((int32_t)V_20) == ((int32_t)((int32_t)63))))
		{
			goto IL_0301;
		}
	}
	{
		goto IL_032a;
	}

IL_0301:
	{
		V_13 = 0;
		V_14 = 1;
		goto IL_032a;
	}

IL_030c:
	{
		V_13 = 0;
		V_14 = ((int32_t)2147483647);
		goto IL_032a;
	}

IL_031b:
	{
		V_13 = 1;
		V_14 = ((int32_t)2147483647);
		goto IL_032a;
	}

IL_032a:
	{
		goto IL_0382;
	}

IL_032f:
	{
		if ((((uint32_t)V_12) != ((uint32_t)((int32_t)123))))
		{
			goto IL_0382;
		}
	}
	{
		int32_t L_43 = (__this->f1);
		t11* L_44 = (__this->f0);
		int32_t L_45 = m2358(L_44, &m2358_MI);
		if ((((int32_t)((int32_t)(L_43+1))) >= ((int32_t)L_45)))
		{
			goto IL_0382;
		}
	}
	{
		int32_t L_46 = (__this->f1);
		V_17 = L_46;
		int32_t L_47 = (__this->f1);
		__this->f1 = ((int32_t)(L_47+1));
		bool L_48 = m4510(__this, (&V_13), (&V_14), p1, &m4510_MI);
		V_16 = L_48;
		if (V_16)
		{
			goto IL_0382;
		}
	}
	{
		__this->f1 = V_17;
	}

IL_0382:
	{
		if (!V_16)
		{
			goto IL_0413;
		}
	}
	{
		bool L_49 = m4525(NULL, p1, &m4525_MI);
		m4518(__this, L_49, &m4518_MI);
		int32_t L_50 = (__this->f1);
		t11* L_51 = (__this->f0);
		int32_t L_52 = m2358(L_51, &m2358_MI);
		if ((((int32_t)L_50) >= ((int32_t)L_52)))
		{
			goto IL_03d4;
		}
	}
	{
		t11* L_53 = (__this->f0);
		int32_t L_54 = (__this->f1);
		uint16_t L_55 = m2385(L_53, L_54, &m2385_MI);
		if ((((uint32_t)L_55) != ((uint32_t)((int32_t)63))))
		{
			goto IL_03d4;
		}
	}
	{
		int32_t L_56 = (__this->f1);
		__this->f1 = ((int32_t)(L_56+1));
		V_15 = 1;
	}

IL_03d4:
	{
		t1145 * L_57 = (t1145 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1145_TI));
		m4570(L_57, V_13, V_14, V_15, &m4570_MI);
		V_18 = L_57;
		if (V_4)
		{
			goto IL_0406;
		}
	}
	{
		t11* L_58 = m2412((&V_6), &m2412_MI);
		bool L_59 = m4521(NULL, p1, &m4521_MI);
		t1147 * L_60 = (t1147 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1147_TI));
		m4600(L_60, L_58, L_59, &m4600_MI);
		m4572(V_18, L_60, &m4572_MI);
		goto IL_040f;
	}

IL_0406:
	{
		m4572(V_18, V_4, &m4572_MI);
	}

IL_040f:
	{
		V_4 = V_18;
	}

IL_0413:
	{
		if (V_4)
		{
			goto IL_0439;
		}
	}
	{
		if (V_2)
		{
			goto IL_0426;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT((&t11_TI));
		V_2 = (((t11_SFs*)(&t11_TI)->static_fields)->f2);
	}

IL_0426:
	{
		uint16_t L_61 = V_6;
		t5 * L_62 = Box(InitializedTypeInfo(&t144_TI), &L_61);
		IL2CPP_RUNTIME_CLASS_INIT((&t11_TI));
		t11* L_63 = m1972(NULL, V_2, L_62, &m1972_MI);
		V_2 = L_63;
		goto IL_045e;
	}

IL_0439:
	{
		if (!V_2)
		{
			goto IL_0453;
		}
	}
	{
		bool L_64 = m4521(NULL, p1, &m4521_MI);
		t1147 * L_65 = (t1147 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1147_TI));
		m4600(L_65, V_2, L_64, &m4600_MI);
		m4548(V_3, L_65, &m4548_MI);
		V_2 = (t11*)NULL;
	}

IL_0453:
	{
		m4548(V_3, V_4, &m4548_MI);
		V_4 = (t1136 *)NULL;
	}

IL_045e:
	{
		if (!V_0)
		{
			goto IL_047f;
		}
	}
	{
		int32_t L_66 = (__this->f1);
		t11* L_67 = (__this->f0);
		int32_t L_68 = m2358(L_67, &m2358_MI);
		if ((((int32_t)L_66) < ((int32_t)L_68)))
		{
			goto IL_047f;
		}
	}
	{
		goto IL_0484;
	}

IL_047f:
	{
		goto IL_001a;
	}

IL_0484:
	{
		if (!V_0)
		{
			goto IL_049d;
		}
	}
	{
		if (!V_5)
		{
			goto IL_049d;
		}
	}
	{
		t160 * L_69 = m4527(__this, (t11*) &_stringLiteral530, &m4527_MI);
		il2cpp_codegen_raise_exception(L_69);
	}

IL_049d:
	{
		if (V_0)
		{
			goto IL_04b6;
		}
	}
	{
		if (V_5)
		{
			goto IL_04b6;
		}
	}
	{
		t160 * L_70 = m4527(__this, (t11*) &_stringLiteral531, &m4527_MI);
		il2cpp_codegen_raise_exception(L_70);
	}

IL_04b6:
	{
		if (!V_2)
		{
			goto IL_04ce;
		}
	}
	{
		bool L_71 = m4521(NULL, p1, &m4521_MI);
		t1147 * L_72 = (t1147 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1147_TI));
		m4600(L_72, V_2, L_71, &m4600_MI);
		m4548(V_3, L_72, &m4548_MI);
	}

IL_04ce:
	{
		if (!p2)
		{
			goto IL_04fe;
		}
	}
	{
		t1136 * L_73 = m4578(p2, &m4578_MI);
		if (L_73)
		{
			goto IL_04eb;
		}
	}
	{
		m4579(p2, V_3, &m4579_MI);
		goto IL_04f2;
	}

IL_04eb:
	{
		m4581(p2, V_3, &m4581_MI);
	}

IL_04f2:
	{
		m4548(p0, p2, &m4548_MI);
		goto IL_051e;
	}

IL_04fe:
	{
		if (!V_1)
		{
			goto IL_0517;
		}
	}
	{
		m4597(V_1, V_3, &m4597_MI);
		m4548(p0, V_1, &m4548_MI);
		goto IL_051e;
	}

IL_0517:
	{
		m4548(p0, V_3, &m4548_MI);
	}

IL_051e:
	{
		return;
	}
}
 t1136 * m4506 (t1132 * __this, int32_t* p0, MethodInfo* method){
	t1134 * V_0 = {0};
	t1134 * V_1 = {0};
	t1134 * V_2 = {0};
	int32_t V_3 = {0};
	t1134 * V_4 = {0};
	t1137 * V_5 = {0};
	t1134 * V_6 = {0};
	uint16_t V_7 = 0x0;
	t11* V_8 = {0};
	t1142 * V_9 = {0};
	t11* V_10 = {0};
	t1143 * V_11 = {0};
	t1135 * V_12 = {0};
	int32_t V_13 = 0;
	t11* V_14 = {0};
	t1137 * V_15 = {0};
	t1134 * V_16 = {0};
	t1134 * V_17 = {0};
	uint16_t V_18 = 0x0;
	int32_t V_19 = 0;
	{
		t11* L_0 = (__this->f0);
		int32_t L_1 = (__this->f1);
		uint16_t L_2 = m2385(L_0, L_1, &m2385_MI);
		if ((((int32_t)L_2) == ((int32_t)((int32_t)63))))
		{
			goto IL_004e;
		}
	}
	{
		bool L_3 = m4523(NULL, (*((int32_t*)p0)), &m4523_MI);
		if (!L_3)
		{
			goto IL_002f;
		}
	}
	{
		t1134 * L_4 = (t1134 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1134_TI));
		m4547(L_4, &m4547_MI);
		V_0 = L_4;
		goto IL_0042;
	}

IL_002f:
	{
		t1142 * L_5 = (t1142 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1142_TI));
		m4555(L_5, &m4555_MI);
		V_0 = L_5;
		t996 * L_6 = (__this->f2);
		VirtFuncInvoker1< int32_t, t5 * >::Invoke(&m4784_MI, L_6, V_0);
	}

IL_0042:
	{
		m4505(__this, V_0, (*((int32_t*)p0)), (t1135 *)NULL, &m4505_MI);
		return V_0;
	}

IL_004e:
	{
		int32_t L_7 = (__this->f1);
		__this->f1 = ((int32_t)(L_7+1));
		t11* L_8 = (__this->f0);
		int32_t L_9 = (__this->f1);
		uint16_t L_10 = m2385(L_8, L_9, &m2385_MI);
		V_18 = L_10;
		if (((uint16_t)(V_18-((int32_t)33))) == 0)
		{
			goto IL_01e5;
		}
		if (((uint16_t)(V_18-((int32_t)33))) == 1)
		{
			goto IL_0099;
		}
		if (((uint16_t)(V_18-((int32_t)33))) == 2)
		{
			goto IL_0482;
		}
		if (((uint16_t)(V_18-((int32_t)33))) == 3)
		{
			goto IL_0099;
		}
		if (((uint16_t)(V_18-((int32_t)33))) == 4)
		{
			goto IL_0099;
		}
		if (((uint16_t)(V_18-((int32_t)33))) == 5)
		{
			goto IL_0099;
		}
		if (((uint16_t)(V_18-((int32_t)33))) == 6)
		{
			goto IL_021c;
		}
		if (((uint16_t)(V_18-((int32_t)33))) == 7)
		{
			goto IL_0376;
		}
	}

IL_0099:
	{
		if (((uint16_t)(V_18-((int32_t)105))) == 0)
		{
			goto IL_0139;
		}
		if (((uint16_t)(V_18-((int32_t)105))) == 1)
		{
			goto IL_00bb;
		}
		if (((uint16_t)(V_18-((int32_t)105))) == 2)
		{
			goto IL_00bb;
		}
		if (((uint16_t)(V_18-((int32_t)105))) == 3)
		{
			goto IL_00bb;
		}
		if (((uint16_t)(V_18-((int32_t)105))) == 4)
		{
			goto IL_0139;
		}
		if (((uint16_t)(V_18-((int32_t)105))) == 5)
		{
			goto IL_0139;
		}
	}

IL_00bb:
	{
		if (((uint16_t)(V_18-((int32_t)58))) == 0)
		{
			goto IL_00f9;
		}
		if (((uint16_t)(V_18-((int32_t)58))) == 1)
		{
			goto IL_00d9;
		}
		if (((uint16_t)(V_18-((int32_t)58))) == 2)
		{
			goto IL_01e5;
		}
		if (((uint16_t)(V_18-((int32_t)58))) == 3)
		{
			goto IL_01e5;
		}
		if (((uint16_t)(V_18-((int32_t)58))) == 4)
		{
			goto IL_0119;
		}
	}

IL_00d9:
	{
		if ((((int32_t)V_18) == ((int32_t)((int32_t)45))))
		{
			goto IL_0139;
		}
	}
	{
		if ((((int32_t)V_18) == ((int32_t)((int32_t)115))))
		{
			goto IL_0139;
		}
	}
	{
		if ((((int32_t)V_18) == ((int32_t)((int32_t)120))))
		{
			goto IL_0139;
		}
	}
	{
		goto IL_04de;
	}

IL_00f9:
	{
		int32_t L_11 = (__this->f1);
		__this->f1 = ((int32_t)(L_11+1));
		t1134 * L_12 = (t1134 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1134_TI));
		m4547(L_12, &m4547_MI);
		V_1 = L_12;
		m4505(__this, V_1, (*((int32_t*)p0)), (t1135 *)NULL, &m4505_MI);
		return V_1;
	}

IL_0119:
	{
		int32_t L_13 = (__this->f1);
		__this->f1 = ((int32_t)(L_13+1));
		t1144 * L_14 = (t1144 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1144_TI));
		m4567(L_14, &m4567_MI);
		V_2 = L_14;
		m4505(__this, V_2, (*((int32_t*)p0)), (t1135 *)NULL, &m4505_MI);
		return V_2;
	}

IL_0139:
	{
		V_3 = (*((int32_t*)p0));
		m4508(__this, (&V_3), 0, &m4508_MI);
		t11* L_15 = (__this->f0);
		int32_t L_16 = (__this->f1);
		uint16_t L_17 = m2385(L_15, L_16, &m2385_MI);
		if ((((uint32_t)L_17) != ((uint32_t)((int32_t)45))))
		{
			goto IL_0174;
		}
	}
	{
		int32_t L_18 = (__this->f1);
		__this->f1 = ((int32_t)(L_18+1));
		m4508(__this, (&V_3), 1, &m4508_MI);
	}

IL_0174:
	{
		t11* L_19 = (__this->f0);
		int32_t L_20 = (__this->f1);
		uint16_t L_21 = m2385(L_19, L_20, &m2385_MI);
		if ((((uint32_t)L_21) != ((uint32_t)((int32_t)58))))
		{
			goto IL_01ae;
		}
	}
	{
		int32_t L_22 = (__this->f1);
		__this->f1 = ((int32_t)(L_22+1));
		t1134 * L_23 = (t1134 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1134_TI));
		m4547(L_23, &m4547_MI);
		V_4 = L_23;
		m4505(__this, V_4, V_3, (t1135 *)NULL, &m4505_MI);
		return V_4;
	}

IL_01ae:
	{
		t11* L_24 = (__this->f0);
		int32_t L_25 = (__this->f1);
		uint16_t L_26 = m2385(L_24, L_25, &m2385_MI);
		if ((((uint32_t)L_26) != ((uint32_t)((int32_t)41))))
		{
			goto IL_01d9;
		}
	}
	{
		int32_t L_27 = (__this->f1);
		__this->f1 = ((int32_t)(L_27+1));
		*((int32_t*)(p0)) = (int32_t)V_3;
		return (t1136 *)NULL;
	}

IL_01d9:
	{
		t160 * L_28 = m4527(__this, (t11*) &_stringLiteral532, &m4527_MI);
		il2cpp_codegen_raise_exception(L_28);
	}

IL_01e5:
	{
		t1137 * L_29 = (t1137 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1137_TI));
		m4588(L_29, &m4588_MI);
		V_5 = L_29;
		bool L_30 = m4507(__this, V_5, &m4507_MI);
		if (L_30)
		{
			goto IL_01fe;
		}
	}
	{
		goto IL_021c;
	}

IL_01fe:
	{
		t1134 * L_31 = (t1134 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1134_TI));
		m4547(L_31, &m4547_MI);
		V_6 = L_31;
		m4505(__this, V_6, (*((int32_t*)p0)), (t1135 *)NULL, &m4505_MI);
		m4592(V_5, V_6, &m4592_MI);
		return V_5;
	}

IL_021c:
	{
		t11* L_32 = (__this->f0);
		int32_t L_33 = (__this->f1);
		uint16_t L_34 = m2385(L_32, L_33, &m2385_MI);
		if ((((uint32_t)L_34) != ((uint32_t)((int32_t)60))))
		{
			goto IL_023d;
		}
	}
	{
		V_7 = ((int32_t)62);
		goto IL_0241;
	}

IL_023d:
	{
		V_7 = ((int32_t)39);
	}

IL_0241:
	{
		int32_t L_35 = (__this->f1);
		__this->f1 = ((int32_t)(L_35+1));
		t11* L_36 = m4514(__this, &m4514_MI);
		V_8 = L_36;
		t11* L_37 = (__this->f0);
		int32_t L_38 = (__this->f1);
		uint16_t L_39 = m2385(L_37, L_38, &m2385_MI);
		if ((((uint32_t)L_39) != ((uint32_t)V_7)))
		{
			goto IL_02bc;
		}
	}
	{
		if (V_8)
		{
			goto IL_0282;
		}
	}
	{
		t160 * L_40 = m4527(__this, (t11*) &_stringLiteral533, &m4527_MI);
		il2cpp_codegen_raise_exception(L_40);
	}

IL_0282:
	{
		int32_t L_41 = (__this->f1);
		__this->f1 = ((int32_t)(L_41+1));
		t1142 * L_42 = (t1142 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1142_TI));
		m4555(L_42, &m4555_MI);
		V_9 = L_42;
		m4559(V_9, V_8, &m4559_MI);
		t996 * L_43 = (__this->f2);
		VirtFuncInvoker1< int32_t, t5 * >::Invoke(&m4784_MI, L_43, V_9);
		m4505(__this, V_9, (*((int32_t*)p0)), (t1135 *)NULL, &m4505_MI);
		return V_9;
	}

IL_02bc:
	{
		t11* L_44 = (__this->f0);
		int32_t L_45 = (__this->f1);
		uint16_t L_46 = m2385(L_44, L_45, &m2385_MI);
		if ((((uint32_t)L_46) != ((uint32_t)((int32_t)45))))
		{
			goto IL_036a;
		}
	}
	{
		int32_t L_47 = (__this->f1);
		__this->f1 = ((int32_t)(L_47+1));
		t11* L_48 = m4514(__this, &m4514_MI);
		V_10 = L_48;
		if (!V_10)
		{
			goto IL_0309;
		}
	}
	{
		t11* L_49 = (__this->f0);
		int32_t L_50 = (__this->f1);
		uint16_t L_51 = m2385(L_49, L_50, &m2385_MI);
		if ((((int32_t)L_51) == ((int32_t)V_7)))
		{
			goto IL_0315;
		}
	}

IL_0309:
	{
		t160 * L_52 = m4527(__this, (t11*) &_stringLiteral534, &m4527_MI);
		il2cpp_codegen_raise_exception(L_52);
	}

IL_0315:
	{
		int32_t L_53 = (__this->f1);
		__this->f1 = ((int32_t)(L_53+1));
		t1143 * L_54 = (t1143 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1143_TI));
		m4564(L_54, &m4564_MI);
		V_11 = L_54;
		m4559(V_11, V_8, &m4559_MI);
		bool L_55 = m4560(V_11, &m4560_MI);
		if (!L_55)
		{
			goto IL_034d;
		}
	}
	{
		t996 * L_56 = (__this->f2);
		VirtFuncInvoker1< int32_t, t5 * >::Invoke(&m4784_MI, L_56, V_11);
	}

IL_034d:
	{
		t984 * L_57 = (__this->f3);
		VirtActionInvoker2< t5 *, t5 * >::Invoke(&m4783_MI, L_57, V_11, V_10);
		m4505(__this, V_11, (*((int32_t*)p0)), (t1135 *)NULL, &m4505_MI);
		return V_11;
	}

IL_036a:
	{
		t160 * L_58 = m4527(__this, (t11*) &_stringLiteral533, &m4527_MI);
		il2cpp_codegen_raise_exception(L_58);
	}

IL_0376:
	{
		int32_t L_59 = (__this->f1);
		__this->f1 = ((int32_t)(L_59+1));
		int32_t L_60 = (__this->f1);
		V_13 = L_60;
		t11* L_61 = m4514(__this, &m4514_MI);
		V_14 = L_61;
		if (!V_14)
		{
			goto IL_03b3;
		}
	}
	{
		t11* L_62 = (__this->f0);
		int32_t L_63 = (__this->f1);
		uint16_t L_64 = m2385(L_62, L_63, &m2385_MI);
		if ((((int32_t)L_64) == ((int32_t)((int32_t)41))))
		{
			goto IL_043a;
		}
	}

IL_03b3:
	{
		__this->f1 = V_13;
		t1137 * L_65 = (t1137 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1137_TI));
		m4588(L_65, &m4588_MI);
		V_15 = L_65;
		t11* L_66 = (__this->f0);
		int32_t L_67 = (__this->f1);
		uint16_t L_68 = m2385(L_66, L_67, &m2385_MI);
		if ((((uint32_t)L_68) != ((uint32_t)((int32_t)63))))
		{
			goto IL_0406;
		}
	}
	{
		int32_t L_69 = (__this->f1);
		__this->f1 = ((int32_t)(L_69+1));
		bool L_70 = m4507(__this, V_15, &m4507_MI);
		if (L_70)
		{
			goto IL_0401;
		}
	}
	{
		t160 * L_71 = m4527(__this, (t11*) &_stringLiteral535, &m4527_MI);
		il2cpp_codegen_raise_exception(L_71);
	}

IL_0401:
	{
		goto IL_0416;
	}

IL_0406:
	{
		m4590(V_15, 0, &m4590_MI);
		m4589(V_15, 0, &m4589_MI);
	}

IL_0416:
	{
		t1134 * L_72 = (t1134 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1134_TI));
		m4547(L_72, &m4547_MI);
		V_16 = L_72;
		m4505(__this, V_16, (*((int32_t*)p0)), (t1135 *)NULL, &m4505_MI);
		m4592(V_15, V_16, &m4592_MI);
		V_12 = V_15;
		goto IL_046c;
	}

IL_043a:
	{
		int32_t L_73 = (__this->f1);
		__this->f1 = ((int32_t)(L_73+1));
		bool L_74 = m4521(NULL, (*((int32_t*)p0)), &m4521_MI);
		t1147 * L_75 = (t1147 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1147_TI));
		m4600(L_75, V_14, L_74, &m4600_MI);
		t1146 * L_76 = (t1146 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1146_TI));
		m4583(L_76, L_75, &m4583_MI);
		V_12 = L_76;
		t984 * L_77 = (__this->f3);
		VirtActionInvoker2< t5 *, t5 * >::Invoke(&m4783_MI, L_77, V_12, V_14);
	}

IL_046c:
	{
		t1134 * L_78 = (t1134 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1134_TI));
		m4547(L_78, &m4547_MI);
		V_17 = L_78;
		m4505(__this, V_17, (*((int32_t*)p0)), V_12, &m4505_MI);
		return V_17;
	}

IL_0482:
	{
		int32_t L_79 = (__this->f1);
		__this->f1 = ((int32_t)(L_79+1));
		goto IL_04b7;
	}

IL_0495:
	{
		int32_t L_80 = (__this->f1);
		t11* L_81 = (__this->f0);
		int32_t L_82 = m2358(L_81, &m2358_MI);
		if ((((int32_t)L_80) < ((int32_t)L_82)))
		{
			goto IL_04b7;
		}
	}
	{
		t160 * L_83 = m4527(__this, (t11*) &_stringLiteral536, &m4527_MI);
		il2cpp_codegen_raise_exception(L_83);
	}

IL_04b7:
	{
		t11* L_84 = (__this->f0);
		int32_t L_85 = (__this->f1);
		int32_t L_86 = L_85;
		V_19 = L_86;
		__this->f1 = ((int32_t)(L_86+1));
		uint16_t L_87 = m2385(L_84, V_19, &m2385_MI);
		if ((((uint32_t)L_87) != ((uint32_t)((int32_t)41))))
		{
			goto IL_0495;
		}
	}
	{
		return (t1136 *)NULL;
	}

IL_04de:
	{
		t160 * L_88 = m4527(__this, (t11*) &_stringLiteral537, &m4527_MI);
		il2cpp_codegen_raise_exception(L_88);
	}
}
 bool m4507 (t1132 * __this, t1137 * p0, MethodInfo* method){
	uint16_t V_0 = 0x0;
	{
		t11* L_0 = (__this->f0);
		int32_t L_1 = (__this->f1);
		uint16_t L_2 = m2385(L_0, L_1, &m2385_MI);
		if ((((uint32_t)L_2) != ((uint32_t)((int32_t)60))))
		{
			goto IL_0075;
		}
	}
	{
		t11* L_3 = (__this->f0);
		int32_t L_4 = (__this->f1);
		uint16_t L_5 = m2385(L_3, ((int32_t)(L_4+1)), &m2385_MI);
		V_0 = L_5;
		if ((((int32_t)V_0) == ((int32_t)((int32_t)33))))
		{
			goto IL_004d;
		}
	}
	{
		if ((((int32_t)V_0) == ((int32_t)((int32_t)61))))
		{
			goto IL_0041;
		}
	}
	{
		goto IL_0059;
	}

IL_0041:
	{
		m4590(p0, 0, &m4590_MI);
		goto IL_005b;
	}

IL_004d:
	{
		m4590(p0, 1, &m4590_MI);
		goto IL_005b;
	}

IL_0059:
	{
		return 0;
	}

IL_005b:
	{
		m4589(p0, 1, &m4589_MI);
		int32_t L_6 = (__this->f1);
		__this->f1 = ((int32_t)(L_6+2));
		goto IL_00cb;
	}

IL_0075:
	{
		t11* L_7 = (__this->f0);
		int32_t L_8 = (__this->f1);
		uint16_t L_9 = m2385(L_7, L_8, &m2385_MI);
		V_0 = L_9;
		if ((((int32_t)V_0) == ((int32_t)((int32_t)33))))
		{
			goto IL_00a8;
		}
	}
	{
		if ((((int32_t)V_0) == ((int32_t)((int32_t)61))))
		{
			goto IL_009c;
		}
	}
	{
		goto IL_00b4;
	}

IL_009c:
	{
		m4590(p0, 0, &m4590_MI);
		goto IL_00b6;
	}

IL_00a8:
	{
		m4590(p0, 1, &m4590_MI);
		goto IL_00b6;
	}

IL_00b4:
	{
		return 0;
	}

IL_00b6:
	{
		m4589(p0, 0, &m4589_MI);
		int32_t L_10 = (__this->f1);
		__this->f1 = ((int32_t)(L_10+1));
	}

IL_00cb:
	{
		return 1;
	}
}
 void m4508 (t1132 * __this, int32_t* p0, bool p1, MethodInfo* method){
	uint16_t V_0 = 0x0;
	{
		goto IL_00ef;
	}

IL_0005:
	{
		t11* L_0 = (__this->f0);
		int32_t L_1 = (__this->f1);
		uint16_t L_2 = m2385(L_0, L_1, &m2385_MI);
		V_0 = L_2;
		if (((uint16_t)(V_0-((int32_t)105))) == 0)
		{
			goto IL_004d;
		}
		if (((uint16_t)(V_0-((int32_t)105))) == 1)
		{
			goto IL_0038;
		}
		if (((uint16_t)(V_0-((int32_t)105))) == 2)
		{
			goto IL_0038;
		}
		if (((uint16_t)(V_0-((int32_t)105))) == 3)
		{
			goto IL_0038;
		}
		if (((uint16_t)(V_0-((int32_t)105))) == 4)
		{
			goto IL_006a;
		}
		if (((uint16_t)(V_0-((int32_t)105))) == 5)
		{
			goto IL_0087;
		}
	}

IL_0038:
	{
		if ((((int32_t)V_0) == ((int32_t)((int32_t)115))))
		{
			goto IL_00a4;
		}
	}
	{
		if ((((int32_t)V_0) == ((int32_t)((int32_t)120))))
		{
			goto IL_00c2;
		}
	}
	{
		goto IL_00e0;
	}

IL_004d:
	{
		if (!p1)
		{
			goto IL_005f;
		}
	}
	{
		*((int32_t*)(p0)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)p0))&(int32_t)((int32_t)-2)));
		goto IL_0065;
	}

IL_005f:
	{
		*((int32_t*)(p0)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)p0))|(int32_t)1));
	}

IL_0065:
	{
		goto IL_00e1;
	}

IL_006a:
	{
		if (!p1)
		{
			goto IL_007c;
		}
	}
	{
		*((int32_t*)(p0)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)p0))&(int32_t)((int32_t)-3)));
		goto IL_0082;
	}

IL_007c:
	{
		*((int32_t*)(p0)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)p0))|(int32_t)2));
	}

IL_0082:
	{
		goto IL_00e1;
	}

IL_0087:
	{
		if (!p1)
		{
			goto IL_0099;
		}
	}
	{
		*((int32_t*)(p0)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)p0))&(int32_t)((int32_t)-5)));
		goto IL_009f;
	}

IL_0099:
	{
		*((int32_t*)(p0)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)p0))|(int32_t)4));
	}

IL_009f:
	{
		goto IL_00e1;
	}

IL_00a4:
	{
		if (!p1)
		{
			goto IL_00b6;
		}
	}
	{
		*((int32_t*)(p0)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)p0))&(int32_t)((int32_t)-17)));
		goto IL_00bd;
	}

IL_00b6:
	{
		*((int32_t*)(p0)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)p0))|(int32_t)((int32_t)16)));
	}

IL_00bd:
	{
		goto IL_00e1;
	}

IL_00c2:
	{
		if (!p1)
		{
			goto IL_00d4;
		}
	}
	{
		*((int32_t*)(p0)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)p0))&(int32_t)((int32_t)-33)));
		goto IL_00db;
	}

IL_00d4:
	{
		*((int32_t*)(p0)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)p0))|(int32_t)((int32_t)32)));
	}

IL_00db:
	{
		goto IL_00e1;
	}

IL_00e0:
	{
		return;
	}

IL_00e1:
	{
		int32_t L_3 = (__this->f1);
		__this->f1 = ((int32_t)(L_3+1));
	}

IL_00ef:
	{
		goto IL_0005;
	}
}
 t1136 * m4509 (t1132 * __this, int32_t p0, MethodInfo* method){
	bool V_0 = false;
	bool V_1 = false;
	t1152 * V_2 = {0};
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	bool V_5 = false;
	bool V_6 = false;
	int32_t V_7 = 0;
	t1152 * G_B24_0 = {0};
	t1152 * G_B23_0 = {0};
	int32_t G_B25_0 = 0;
	t1152 * G_B25_1 = {0};
	t1152 * G_B28_0 = {0};
	t1152 * G_B27_0 = {0};
	int32_t G_B29_0 = 0;
	t1152 * G_B29_1 = {0};
	t1152 * G_B32_0 = {0};
	t1152 * G_B31_0 = {0};
	int32_t G_B33_0 = 0;
	t1152 * G_B33_1 = {0};
	{
		V_0 = 0;
		t11* L_0 = (__this->f0);
		int32_t L_1 = (__this->f1);
		uint16_t L_2 = m2385(L_0, L_1, &m2385_MI);
		if ((((uint32_t)L_2) != ((uint32_t)((int32_t)94))))
		{
			goto IL_002a;
		}
	}
	{
		V_0 = 1;
		int32_t L_3 = (__this->f1);
		__this->f1 = ((int32_t)(L_3+1));
	}

IL_002a:
	{
		bool L_4 = m4526(NULL, p0, &m4526_MI);
		V_1 = L_4;
		bool L_5 = m4521(NULL, p0, &m4521_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1152_TI));
		t1152 * L_6 = (t1152 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1152_TI));
		m4621(L_6, V_0, L_5, &m4621_MI);
		V_2 = L_6;
		t11* L_7 = (__this->f0);
		int32_t L_8 = (__this->f1);
		uint16_t L_9 = m2385(L_7, L_8, &m2385_MI);
		if ((((uint32_t)L_9) != ((uint32_t)((int32_t)93))))
		{
			goto IL_006c;
		}
	}
	{
		m4625(V_2, ((int32_t)93), &m4625_MI);
		int32_t L_10 = (__this->f1);
		__this->f1 = ((int32_t)(L_10+1));
	}

IL_006c:
	{
		V_3 = (-1);
		V_4 = (-1);
		V_5 = 0;
		V_6 = 0;
		goto IL_027f;
	}

IL_007c:
	{
		t11* L_11 = (__this->f0);
		int32_t L_12 = (__this->f1);
		int32_t L_13 = L_12;
		V_7 = L_13;
		__this->f1 = ((int32_t)(L_13+1));
		uint16_t L_14 = m2385(L_11, V_7, &m2385_MI);
		V_3 = L_14;
		if ((((uint32_t)V_3) != ((uint32_t)((int32_t)93))))
		{
			goto IL_00ab;
		}
	}
	{
		V_6 = 1;
		goto IL_0295;
	}

IL_00ab:
	{
		if ((((uint32_t)V_3) != ((uint32_t)((int32_t)45))))
		{
			goto IL_00ca;
		}
	}
	{
		if ((((int32_t)V_4) < ((int32_t)0)))
		{
			goto IL_00ca;
		}
	}
	{
		if (V_5)
		{
			goto IL_00ca;
		}
	}
	{
		V_5 = 1;
		goto IL_027f;
	}

IL_00ca:
	{
		if ((((uint32_t)V_3) != ((uint32_t)((int32_t)92))))
		{
			goto IL_0212;
		}
	}
	{
		int32_t L_15 = m4513(__this, &m4513_MI);
		V_3 = L_15;
		if ((((int32_t)V_3) < ((int32_t)0)))
		{
			goto IL_00e5;
		}
	}
	{
		goto IL_0212;
	}

IL_00e5:
	{
		t11* L_16 = (__this->f0);
		int32_t L_17 = (__this->f1);
		int32_t L_18 = L_17;
		V_7 = L_18;
		__this->f1 = ((int32_t)(L_18+1));
		uint16_t L_19 = m2385(L_16, V_7, &m2385_MI);
		V_3 = L_19;
		V_7 = V_3;
		if (((int32_t)(V_7-((int32_t)80))) == 0)
		{
			goto IL_01d1;
		}
		if (((int32_t)(V_7-((int32_t)80))) == 1)
		{
			goto IL_0121;
		}
		if (((int32_t)(V_7-((int32_t)80))) == 2)
		{
			goto IL_0121;
		}
		if (((int32_t)(V_7-((int32_t)80))) == 3)
		{
			goto IL_01b3;
		}
	}

IL_0121:
	{
		if (((int32_t)(V_7-((int32_t)112))) == 0)
		{
			goto IL_01d1;
		}
		if (((int32_t)(V_7-((int32_t)112))) == 1)
		{
			goto IL_013b;
		}
		if (((int32_t)(V_7-((int32_t)112))) == 2)
		{
			goto IL_013b;
		}
		if (((int32_t)(V_7-((int32_t)112))) == 3)
		{
			goto IL_01b3;
		}
	}

IL_013b:
	{
		if (((int32_t)(V_7-((int32_t)98))) == 0)
		{
			goto IL_0171;
		}
		if (((int32_t)(V_7-((int32_t)98))) == 1)
		{
			goto IL_0151;
		}
		if (((int32_t)(V_7-((int32_t)98))) == 2)
		{
			goto IL_0178;
		}
	}

IL_0151:
	{
		if ((((int32_t)V_7) == ((int32_t)((int32_t)68))))
		{
			goto IL_0178;
		}
	}
	{
		if ((((int32_t)V_7) == ((int32_t)((int32_t)87))))
		{
			goto IL_0196;
		}
	}
	{
		if ((((int32_t)V_7) == ((int32_t)((int32_t)119))))
		{
			goto IL_0196;
		}
	}
	{
		goto IL_01e7;
	}

IL_0171:
	{
		V_3 = 8;
		goto IL_0212;
	}

IL_0178:
	{
		G_B23_0 = V_2;
		if (!V_1)
		{
			G_B24_0 = V_2;
			goto IL_0186;
		}
	}
	{
		G_B25_0 = ((int32_t)9);
		G_B25_1 = G_B23_0;
		goto IL_0187;
	}

IL_0186:
	{
		G_B25_0 = 4;
		G_B25_1 = G_B24_0;
	}

IL_0187:
	{
		m4624(G_B25_1, G_B25_0, ((((int32_t)V_3) == ((int32_t)((int32_t)68)))? 1 : 0), &m4624_MI);
		goto IL_01ec;
	}

IL_0196:
	{
		G_B27_0 = V_2;
		if (!V_1)
		{
			G_B28_0 = V_2;
			goto IL_01a3;
		}
	}
	{
		G_B29_0 = 8;
		G_B29_1 = G_B27_0;
		goto IL_01a4;
	}

IL_01a3:
	{
		G_B29_0 = 3;
		G_B29_1 = G_B28_0;
	}

IL_01a4:
	{
		m4624(G_B29_1, G_B29_0, ((((int32_t)V_3) == ((int32_t)((int32_t)87)))? 1 : 0), &m4624_MI);
		goto IL_01ec;
	}

IL_01b3:
	{
		G_B31_0 = V_2;
		if (!V_1)
		{
			G_B32_0 = V_2;
			goto IL_01c1;
		}
	}
	{
		G_B33_0 = ((int32_t)10);
		G_B33_1 = G_B31_0;
		goto IL_01c2;
	}

IL_01c1:
	{
		G_B33_0 = 5;
		G_B33_1 = G_B32_0;
	}

IL_01c2:
	{
		m4624(G_B33_1, G_B33_0, ((((int32_t)V_3) == ((int32_t)((int32_t)83)))? 1 : 0), &m4624_MI);
		goto IL_01ec;
	}

IL_01d1:
	{
		uint16_t L_20 = m4511(__this, &m4511_MI);
		m4624(V_2, L_20, ((((int32_t)V_3) == ((int32_t)((int32_t)80)))? 1 : 0), &m4624_MI);
		goto IL_01ec;
	}

IL_01e7:
	{
		goto IL_0212;
	}

IL_01ec:
	{
		if (!V_5)
		{
			goto IL_020a;
		}
	}
	{
		int32_t L_21 = V_3;
		t5 * L_22 = Box(InitializedTypeInfo(&t110_TI), &L_21);
		IL2CPP_RUNTIME_CLASS_INIT((&t11_TI));
		t11* L_23 = m1972(NULL, (t11*) &_stringLiteral538, L_22, &m1972_MI);
		t160 * L_24 = m4527(__this, L_23, &m4527_MI);
		il2cpp_codegen_raise_exception(L_24);
	}

IL_020a:
	{
		V_4 = (-1);
		goto IL_027f;
	}

IL_0212:
	{
		if (!V_5)
		{
			goto IL_0274;
		}
	}
	{
		if ((((int32_t)V_3) >= ((int32_t)V_4)))
		{
			goto IL_025e;
		}
	}
	{
		t168* L_25 = ((t168*)SZArrayNew(InitializedTypeInfo(&t168_TI), 5));
		ArrayElementTypeCheck (L_25, (t11*) &_stringLiteral209);
		*((t5 **)(t5 **)SZArrayLdElema(L_25, 0)) = (t5 *)(t11*) &_stringLiteral209;
		t168* L_26 = L_25;
		int32_t L_27 = V_4;
		t5 * L_28 = Box(InitializedTypeInfo(&t110_TI), &L_27);
		ArrayElementTypeCheck (L_26, L_28);
		*((t5 **)(t5 **)SZArrayLdElema(L_26, 1)) = (t5 *)L_28;
		t168* L_29 = L_26;
		ArrayElementTypeCheck (L_29, (t11*) &_stringLiteral115);
		*((t5 **)(t5 **)SZArrayLdElema(L_29, 2)) = (t5 *)(t11*) &_stringLiteral115;
		t168* L_30 = L_29;
		int32_t L_31 = V_3;
		t5 * L_32 = Box(InitializedTypeInfo(&t110_TI), &L_31);
		ArrayElementTypeCheck (L_30, L_32);
		*((t5 **)(t5 **)SZArrayLdElema(L_30, 3)) = (t5 *)L_32;
		t168* L_33 = L_30;
		ArrayElementTypeCheck (L_33, (t11*) &_stringLiteral539);
		*((t5 **)(t5 **)SZArrayLdElema(L_33, 4)) = (t5 *)(t11*) &_stringLiteral539;
		IL2CPP_RUNTIME_CLASS_INIT((&t11_TI));
		t11* L_34 = m2041(NULL, L_33, &m2041_MI);
		t160 * L_35 = m4527(__this, L_34, &m4527_MI);
		il2cpp_codegen_raise_exception(L_35);
	}

IL_025e:
	{
		m4626(V_2, (((uint16_t)V_4)), (((uint16_t)V_3)), &m4626_MI);
		V_4 = (-1);
		V_5 = 0;
		goto IL_027f;
	}

IL_0274:
	{
		m4625(V_2, (((uint16_t)V_3)), &m4625_MI);
		V_4 = V_3;
	}

IL_027f:
	{
		int32_t L_36 = (__this->f1);
		t11* L_37 = (__this->f0);
		int32_t L_38 = m2358(L_37, &m2358_MI);
		if ((((int32_t)L_36) < ((int32_t)L_38)))
		{
			goto IL_007c;
		}
	}

IL_0295:
	{
		if (V_6)
		{
			goto IL_02a8;
		}
	}
	{
		t160 * L_39 = m4527(__this, (t11*) &_stringLiteral540, &m4527_MI);
		il2cpp_codegen_raise_exception(L_39);
	}

IL_02a8:
	{
		if (!V_5)
		{
			goto IL_02b7;
		}
	}
	{
		m4625(V_2, ((int32_t)45), &m4625_MI);
	}

IL_02b7:
	{
		return V_2;
	}
}
 bool m4510 (t1132 * __this, int32_t* p0, int32_t* p1, int32_t p2, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	uint16_t V_3 = 0x0;
	{
		int32_t L_0 = 0;
		V_2 = L_0;
		*((int32_t*)(p1)) = (int32_t)L_0;
		*((int32_t*)(p0)) = (int32_t)V_2;
		bool L_1 = m4525(NULL, p2, &m4525_MI);
		m4518(__this, L_1, &m4518_MI);
		t11* L_2 = (__this->f0);
		int32_t L_3 = (__this->f1);
		uint16_t L_4 = m2385(L_2, L_3, &m2385_MI);
		if ((((uint32_t)L_4) != ((uint32_t)((int32_t)44))))
		{
			goto IL_0033;
		}
	}
	{
		V_0 = (-1);
		goto IL_004a;
	}

IL_0033:
	{
		int32_t L_5 = m4516(__this, ((int32_t)10), 1, 0, &m4516_MI);
		V_0 = L_5;
		bool L_6 = m4525(NULL, p2, &m4525_MI);
		m4518(__this, L_6, &m4518_MI);
	}

IL_004a:
	{
		t11* L_7 = (__this->f0);
		int32_t L_8 = (__this->f1);
		int32_t L_9 = L_8;
		V_2 = L_9;
		__this->f1 = ((int32_t)(L_9+1));
		uint16_t L_10 = m2385(L_7, V_2, &m2385_MI);
		V_3 = L_10;
		if ((((int32_t)V_3) == ((int32_t)((int32_t)44))))
		{
			goto IL_0083;
		}
	}
	{
		if ((((int32_t)V_3) == ((int32_t)((int32_t)125))))
		{
			goto IL_007c;
		}
	}
	{
		goto IL_00d0;
	}

IL_007c:
	{
		V_1 = V_0;
		goto IL_00d2;
	}

IL_0083:
	{
		bool L_11 = m4525(NULL, p2, &m4525_MI);
		m4518(__this, L_11, &m4518_MI);
		int32_t L_12 = m4516(__this, ((int32_t)10), 1, 0, &m4516_MI);
		V_1 = L_12;
		bool L_13 = m4525(NULL, p2, &m4525_MI);
		m4518(__this, L_13, &m4518_MI);
		t11* L_14 = (__this->f0);
		int32_t L_15 = (__this->f1);
		int32_t L_16 = L_15;
		V_2 = L_16;
		__this->f1 = ((int32_t)(L_16+1));
		uint16_t L_17 = m2385(L_14, V_2, &m2385_MI);
		if ((((int32_t)L_17) == ((int32_t)((int32_t)125))))
		{
			goto IL_00cb;
		}
	}
	{
		return 0;
	}

IL_00cb:
	{
		goto IL_00d2;
	}

IL_00d0:
	{
		return 0;
	}

IL_00d2:
	{
		if ((((int32_t)V_0) > ((int32_t)((int32_t)2147483647))))
		{
			goto IL_00e8;
		}
	}
	{
		if ((((int32_t)V_1) <= ((int32_t)((int32_t)2147483647))))
		{
			goto IL_00f4;
		}
	}

IL_00e8:
	{
		t160 * L_18 = m4527(__this, (t11*) &_stringLiteral541, &m4527_MI);
		il2cpp_codegen_raise_exception(L_18);
	}

IL_00f4:
	{
		if ((((int32_t)V_1) < ((int32_t)0)))
		{
			goto IL_010e;
		}
	}
	{
		if ((((int32_t)V_1) >= ((int32_t)V_0)))
		{
			goto IL_010e;
		}
	}
	{
		t160 * L_19 = m4527(__this, (t11*) &_stringLiteral542, &m4527_MI);
		il2cpp_codegen_raise_exception(L_19);
	}

IL_010e:
	{
		*((int32_t*)(p0)) = (int32_t)V_0;
		if ((((int32_t)V_1) <= ((int32_t)0)))
		{
			goto IL_0120;
		}
	}
	{
		*((int32_t*)(p1)) = (int32_t)V_1;
		goto IL_0127;
	}

IL_0120:
	{
		*((int32_t*)(p1)) = (int32_t)((int32_t)2147483647);
	}

IL_0127:
	{
		return 1;
	}
}
 uint16_t m4511 (t1132 * __this, MethodInfo* method){
	t11* V_0 = {0};
	uint16_t V_1 = {0};
	int32_t V_2 = 0;
	{
		t11* L_0 = (__this->f0);
		int32_t L_1 = (__this->f1);
		int32_t L_2 = L_1;
		V_2 = L_2;
		__this->f1 = ((int32_t)(L_2+1));
		uint16_t L_3 = m2385(L_0, V_2, &m2385_MI);
		if ((((int32_t)L_3) == ((int32_t)((int32_t)123))))
		{
			goto IL_002f;
		}
	}
	{
		t160 * L_4 = m4527(__this, (t11*) &_stringLiteral543, &m4527_MI);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_002f:
	{
		t11* L_5 = (__this->f0);
		int32_t* L_6 = &(__this->f1);
		t11* L_7 = m4502(NULL, L_5, L_6, &m4502_MI);
		V_0 = L_7;
		if (V_0)
		{
			goto IL_0053;
		}
	}
	{
		t160 * L_8 = m4527(__this, (t11*) &_stringLiteral543, &m4527_MI);
		il2cpp_codegen_raise_exception(L_8);
	}

IL_0053:
	{
		uint16_t L_9 = m4364(NULL, V_0, &m4364_MI);
		V_1 = L_9;
		if (V_1)
		{
			goto IL_0077;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT((&t11_TI));
		t11* L_10 = m2328(NULL, (t11*) &_stringLiteral544, V_0, (t11*) &_stringLiteral545, &m2328_MI);
		t160 * L_11 = m4527(__this, L_10, &m4527_MI);
		il2cpp_codegen_raise_exception(L_11);
	}

IL_0077:
	{
		t11* L_12 = (__this->f0);
		int32_t L_13 = (__this->f1);
		int32_t L_14 = L_13;
		V_2 = L_14;
		__this->f1 = ((int32_t)(L_14+1));
		uint16_t L_15 = m2385(L_12, V_2, &m2385_MI);
		if ((((int32_t)L_15) == ((int32_t)((int32_t)125))))
		{
			goto IL_00a6;
		}
	}
	{
		t160 * L_16 = m4527(__this, (t11*) &_stringLiteral543, &m4527_MI);
		il2cpp_codegen_raise_exception(L_16);
	}

IL_00a6:
	{
		return V_1;
	}
}
 t1136 * m4512 (t1132 * __this, int32_t p0, MethodInfo* method){
	int32_t V_0 = 0;
	bool V_1 = false;
	t1136 * V_2 = {0};
	int32_t V_3 = 0;
	t1150 * V_4 = {0};
	uint16_t V_5 = 0x0;
	t11* V_6 = {0};
	t1150 * V_7 = {0};
	int32_t V_8 = 0;
	uint16_t V_9 = 0x0;
	int32_t G_B11_0 = 0;
	int32_t G_B15_0 = 0;
	int32_t G_B19_0 = 0;
	int32_t G_B24_0 = 0;
	int32_t G_B28_0 = 0;
	int32_t G_B32_0 = 0;
	{
		int32_t L_0 = (__this->f1);
		V_0 = L_0;
		bool L_1 = m4526(NULL, p0, &m4526_MI);
		V_1 = L_1;
		V_2 = (t1136 *)NULL;
		t11* L_2 = (__this->f0);
		int32_t L_3 = (__this->f1);
		int32_t L_4 = L_3;
		V_8 = L_4;
		__this->f1 = ((int32_t)(L_4+1));
		uint16_t L_5 = m2385(L_2, V_8, &m2385_MI);
		V_9 = L_5;
		if (((uint16_t)(V_9-((int32_t)49))) == 0)
		{
			goto IL_0229;
		}
		if (((uint16_t)(V_9-((int32_t)49))) == 1)
		{
			goto IL_0229;
		}
		if (((uint16_t)(V_9-((int32_t)49))) == 2)
		{
			goto IL_0229;
		}
		if (((uint16_t)(V_9-((int32_t)49))) == 3)
		{
			goto IL_0229;
		}
		if (((uint16_t)(V_9-((int32_t)49))) == 4)
		{
			goto IL_0229;
		}
		if (((uint16_t)(V_9-((int32_t)49))) == 5)
		{
			goto IL_0229;
		}
		if (((uint16_t)(V_9-((int32_t)49))) == 6)
		{
			goto IL_0229;
		}
		if (((uint16_t)(V_9-((int32_t)49))) == 7)
		{
			goto IL_0229;
		}
		if (((uint16_t)(V_9-((int32_t)49))) == 8)
		{
			goto IL_0229;
		}
		if (((uint16_t)(V_9-((int32_t)49))) == 9)
		{
			goto IL_0096;
		}
		if (((uint16_t)(V_9-((int32_t)49))) == 10)
		{
			goto IL_0096;
		}
		if (((uint16_t)(V_9-((int32_t)49))) == 11)
		{
			goto IL_0096;
		}
		if (((uint16_t)(V_9-((int32_t)49))) == 12)
		{
			goto IL_0096;
		}
		if (((uint16_t)(V_9-((int32_t)49))) == 13)
		{
			goto IL_0096;
		}
		if (((uint16_t)(V_9-((int32_t)49))) == 14)
		{
			goto IL_0096;
		}
		if (((uint16_t)(V_9-((int32_t)49))) == 15)
		{
			goto IL_0096;
		}
		if (((uint16_t)(V_9-((int32_t)49))) == 16)
		{
			goto IL_01e0;
		}
		if (((uint16_t)(V_9-((int32_t)49))) == 17)
		{
			goto IL_021c;
		}
		if (((uint16_t)(V_9-((int32_t)49))) == 18)
		{
			goto IL_0096;
		}
		if (((uint16_t)(V_9-((int32_t)49))) == 19)
		{
			goto IL_0181;
		}
		if (((uint16_t)(V_9-((int32_t)49))) == 20)
		{
			goto IL_0096;
		}
		if (((uint16_t)(V_9-((int32_t)49))) == 21)
		{
			goto IL_0096;
		}
		if (((uint16_t)(V_9-((int32_t)49))) == 22)
		{
			goto IL_0204;
		}
	}

IL_0096:
	{
		if (((uint16_t)(V_9-((int32_t)80))) == 0)
		{
			goto IL_01ce;
		}
		if (((uint16_t)(V_9-((int32_t)80))) == 1)
		{
			goto IL_00b0;
		}
		if (((uint16_t)(V_9-((int32_t)80))) == 2)
		{
			goto IL_00b0;
		}
		if (((uint16_t)(V_9-((int32_t)80))) == 3)
		{
			goto IL_01b4;
		}
	}

IL_00b0:
	{
		if (((uint16_t)(V_9-((int32_t)87))) == 0)
		{
			goto IL_019b;
		}
		if (((uint16_t)(V_9-((int32_t)87))) == 1)
		{
			goto IL_00ca;
		}
		if (((uint16_t)(V_9-((int32_t)87))) == 2)
		{
			goto IL_00ca;
		}
		if (((uint16_t)(V_9-((int32_t)87))) == 3)
		{
			goto IL_01ec;
		}
	}

IL_00ca:
	{
		if (((uint16_t)(V_9-((int32_t)112))) == 0)
		{
			goto IL_016f;
		}
		if (((uint16_t)(V_9-((int32_t)112))) == 1)
		{
			goto IL_00e4;
		}
		if (((uint16_t)(V_9-((int32_t)112))) == 2)
		{
			goto IL_00e4;
		}
		if (((uint16_t)(V_9-((int32_t)112))) == 3)
		{
			goto IL_0155;
		}
	}

IL_00e4:
	{
		if (((uint16_t)(V_9-((int32_t)119))) == 0)
		{
			goto IL_013c;
		}
		if (((uint16_t)(V_9-((int32_t)119))) == 1)
		{
			goto IL_00fe;
		}
		if (((uint16_t)(V_9-((int32_t)119))) == 2)
		{
			goto IL_00fe;
		}
		if (((uint16_t)(V_9-((int32_t)119))) == 3)
		{
			goto IL_01f8;
		}
	}

IL_00fe:
	{
		if (((uint16_t)(V_9-((int32_t)98))) == 0)
		{
			goto IL_0210;
		}
		if (((uint16_t)(V_9-((int32_t)98))) == 1)
		{
			goto IL_0114;
		}
		if (((uint16_t)(V_9-((int32_t)98))) == 2)
		{
			goto IL_0122;
		}
	}

IL_0114:
	{
		if ((((int32_t)V_9) == ((int32_t)((int32_t)107))))
		{
			goto IL_027c;
		}
	}
	{
		goto IL_0328;
	}

IL_0122:
	{
		if (!V_1)
		{
			goto IL_012f;
		}
	}
	{
		G_B11_0 = ((int32_t)9);
		goto IL_0130;
	}

IL_012f:
	{
		G_B11_0 = 4;
	}

IL_0130:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1152_TI));
		t1152 * L_6 = (t1152 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1152_TI));
		m4622(L_6, G_B11_0, 0, &m4622_MI);
		V_2 = L_6;
		goto IL_032f;
	}

IL_013c:
	{
		if (!V_1)
		{
			goto IL_0148;
		}
	}
	{
		G_B15_0 = 8;
		goto IL_0149;
	}

IL_0148:
	{
		G_B15_0 = 3;
	}

IL_0149:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1152_TI));
		t1152 * L_7 = (t1152 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1152_TI));
		m4622(L_7, G_B15_0, 0, &m4622_MI);
		V_2 = L_7;
		goto IL_032f;
	}

IL_0155:
	{
		if (!V_1)
		{
			goto IL_0162;
		}
	}
	{
		G_B19_0 = ((int32_t)10);
		goto IL_0163;
	}

IL_0162:
	{
		G_B19_0 = 5;
	}

IL_0163:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1152_TI));
		t1152 * L_8 = (t1152 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1152_TI));
		m4622(L_8, G_B19_0, 0, &m4622_MI);
		V_2 = L_8;
		goto IL_032f;
	}

IL_016f:
	{
		uint16_t L_9 = m4511(__this, &m4511_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1152_TI));
		t1152 * L_10 = (t1152 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1152_TI));
		m4622(L_10, L_9, 0, &m4622_MI);
		V_2 = L_10;
		goto IL_032f;
	}

IL_0181:
	{
		if (!V_1)
		{
			goto IL_018e;
		}
	}
	{
		G_B24_0 = ((int32_t)9);
		goto IL_018f;
	}

IL_018e:
	{
		G_B24_0 = 4;
	}

IL_018f:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1152_TI));
		t1152 * L_11 = (t1152 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1152_TI));
		m4622(L_11, G_B24_0, 1, &m4622_MI);
		V_2 = L_11;
		goto IL_032f;
	}

IL_019b:
	{
		if (!V_1)
		{
			goto IL_01a7;
		}
	}
	{
		G_B28_0 = 8;
		goto IL_01a8;
	}

IL_01a7:
	{
		G_B28_0 = 3;
	}

IL_01a8:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1152_TI));
		t1152 * L_12 = (t1152 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1152_TI));
		m4622(L_12, G_B28_0, 1, &m4622_MI);
		V_2 = L_12;
		goto IL_032f;
	}

IL_01b4:
	{
		if (!V_1)
		{
			goto IL_01c1;
		}
	}
	{
		G_B32_0 = ((int32_t)10);
		goto IL_01c2;
	}

IL_01c1:
	{
		G_B32_0 = 5;
	}

IL_01c2:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1152_TI));
		t1152 * L_13 = (t1152 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1152_TI));
		m4622(L_13, G_B32_0, 1, &m4622_MI);
		V_2 = L_13;
		goto IL_032f;
	}

IL_01ce:
	{
		uint16_t L_14 = m4511(__this, &m4511_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1152_TI));
		t1152 * L_15 = (t1152 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1152_TI));
		m4622(L_15, L_14, 1, &m4622_MI);
		V_2 = L_15;
		goto IL_032f;
	}

IL_01e0:
	{
		t1149 * L_16 = (t1149 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1149_TI));
		m4606(L_16, 2, &m4606_MI);
		V_2 = L_16;
		goto IL_032f;
	}

IL_01ec:
	{
		t1149 * L_17 = (t1149 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1149_TI));
		m4606(L_17, 5, &m4606_MI);
		V_2 = L_17;
		goto IL_032f;
	}

IL_01f8:
	{
		t1149 * L_18 = (t1149 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1149_TI));
		m4606(L_18, 6, &m4606_MI);
		V_2 = L_18;
		goto IL_032f;
	}

IL_0204:
	{
		t1149 * L_19 = (t1149 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1149_TI));
		m4606(L_19, 4, &m4606_MI);
		V_2 = L_19;
		goto IL_032f;
	}

IL_0210:
	{
		t1149 * L_20 = (t1149 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1149_TI));
		m4606(L_20, 8, &m4606_MI);
		V_2 = L_20;
		goto IL_032f;
	}

IL_021c:
	{
		t1149 * L_21 = (t1149 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1149_TI));
		m4606(L_21, ((int32_t)9), &m4606_MI);
		V_2 = L_21;
		goto IL_032f;
	}

IL_0229:
	{
		int32_t L_22 = (__this->f1);
		__this->f1 = ((int32_t)(L_22-1));
		int32_t L_23 = m4516(__this, ((int32_t)10), 1, 0, &m4516_MI);
		V_3 = L_23;
		if ((((int32_t)V_3) >= ((int32_t)0)))
		{
			goto IL_0252;
		}
	}
	{
		__this->f1 = V_0;
		return (t1136 *)NULL;
	}

IL_0252:
	{
		bool L_24 = m4521(NULL, p0, &m4521_MI);
		t1151 * L_25 = (t1151 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1151_TI));
		m4618(L_25, L_24, V_1, &m4618_MI);
		V_4 = L_25;
		t984 * L_26 = (__this->f3);
		t11* L_27 = m3590((&V_3), &m3590_MI);
		VirtActionInvoker2< t5 *, t5 * >::Invoke(&m4783_MI, L_26, V_4, L_27);
		V_2 = V_4;
		goto IL_032f;
	}

IL_027c:
	{
		t11* L_28 = (__this->f0);
		int32_t L_29 = (__this->f1);
		int32_t L_30 = L_29;
		V_8 = L_30;
		__this->f1 = ((int32_t)(L_30+1));
		uint16_t L_31 = m2385(L_28, V_8, &m2385_MI);
		V_5 = L_31;
		if ((((uint32_t)V_5) != ((uint32_t)((int32_t)60))))
		{
			goto IL_02ae;
		}
	}
	{
		V_5 = ((int32_t)62);
		goto IL_02c3;
	}

IL_02ae:
	{
		if ((((int32_t)V_5) == ((int32_t)((int32_t)39))))
		{
			goto IL_02c3;
		}
	}
	{
		t160 * L_32 = m4527(__this, (t11*) &_stringLiteral546, &m4527_MI);
		il2cpp_codegen_raise_exception(L_32);
	}

IL_02c3:
	{
		t11* L_33 = m4514(__this, &m4514_MI);
		V_6 = L_33;
		if (!V_6)
		{
			goto IL_02ea;
		}
	}
	{
		t11* L_34 = (__this->f0);
		int32_t L_35 = (__this->f1);
		uint16_t L_36 = m2385(L_34, L_35, &m2385_MI);
		if ((((int32_t)L_36) == ((int32_t)V_5)))
		{
			goto IL_02f6;
		}
	}

IL_02ea:
	{
		t160 * L_37 = m4527(__this, (t11*) &_stringLiteral546, &m4527_MI);
		il2cpp_codegen_raise_exception(L_37);
	}

IL_02f6:
	{
		int32_t L_38 = (__this->f1);
		__this->f1 = ((int32_t)(L_38+1));
		bool L_39 = m4521(NULL, p0, &m4521_MI);
		t1150 * L_40 = (t1150 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1150_TI));
		m4611(L_40, L_39, &m4611_MI);
		V_7 = L_40;
		t984 * L_41 = (__this->f3);
		VirtActionInvoker2< t5 *, t5 * >::Invoke(&m4783_MI, L_41, V_7, V_6);
		V_2 = V_7;
		goto IL_032f;
	}

IL_0328:
	{
		V_2 = (t1136 *)NULL;
		goto IL_032f;
	}

IL_032f:
	{
		if (V_2)
		{
			goto IL_033c;
		}
	}
	{
		__this->f1 = V_0;
	}

IL_033c:
	{
		return V_2;
	}
}
 int32_t m4513 (t1132 * __this, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	uint16_t V_5 = 0x0;
	{
		int32_t L_0 = (__this->f1);
		V_0 = L_0;
		t11* L_1 = (__this->f0);
		int32_t L_2 = m2358(L_1, &m2358_MI);
		if ((((int32_t)V_0) < ((int32_t)L_2)))
		{
			goto IL_0034;
		}
	}
	{
		t11* L_3 = (__this->f0);
		IL2CPP_RUNTIME_CLASS_INIT((&t11_TI));
		t11* L_4 = m462(NULL, (t11*) &_stringLiteral547, L_3, &m462_MI);
		t11* L_5 = (__this->f0);
		t160 * L_6 = (t160 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t160_TI));
		m614(L_6, L_4, L_5, &m614_MI);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_0034:
	{
		t11* L_7 = (__this->f0);
		int32_t L_8 = (__this->f1);
		int32_t L_9 = L_8;
		V_4 = L_9;
		__this->f1 = ((int32_t)(L_9+1));
		uint16_t L_10 = m2385(L_7, V_4, &m2385_MI);
		V_5 = L_10;
		if (((uint16_t)(V_5-((int32_t)110))) == 0)
		{
			goto IL_00d1;
		}
		if (((uint16_t)(V_5-((int32_t)110))) == 1)
		{
			goto IL_008a;
		}
		if (((uint16_t)(V_5-((int32_t)110))) == 2)
		{
			goto IL_008a;
		}
		if (((uint16_t)(V_5-((int32_t)110))) == 3)
		{
			goto IL_008a;
		}
		if (((uint16_t)(V_5-((int32_t)110))) == 4)
		{
			goto IL_00c8;
		}
		if (((uint16_t)(V_5-((int32_t)110))) == 5)
		{
			goto IL_008a;
		}
		if (((uint16_t)(V_5-((int32_t)110))) == 6)
		{
			goto IL_00c5;
		}
		if (((uint16_t)(V_5-((int32_t)110))) == 7)
		{
			goto IL_0140;
		}
		if (((uint16_t)(V_5-((int32_t)110))) == 8)
		{
			goto IL_00cb;
		}
		if (((uint16_t)(V_5-((int32_t)110))) == 9)
		{
			goto IL_008a;
		}
		if (((uint16_t)(V_5-((int32_t)110))) == 10)
		{
			goto IL_0118;
		}
	}

IL_008a:
	{
		if (((uint16_t)(V_5-((int32_t)97))) == 0)
		{
			goto IL_00c3;
		}
		if (((uint16_t)(V_5-((int32_t)97))) == 1)
		{
			goto IL_00ac;
		}
		if (((uint16_t)(V_5-((int32_t)97))) == 2)
		{
			goto IL_0168;
		}
		if (((uint16_t)(V_5-((int32_t)97))) == 3)
		{
			goto IL_00ac;
		}
		if (((uint16_t)(V_5-((int32_t)97))) == 4)
		{
			goto IL_00d4;
		}
		if (((uint16_t)(V_5-((int32_t)97))) == 5)
		{
			goto IL_00ce;
		}
	}

IL_00ac:
	{
		if ((((int32_t)V_5) == ((int32_t)((int32_t)48))))
		{
			goto IL_00da;
		}
	}
	{
		if ((((int32_t)V_5) == ((int32_t)((int32_t)92))))
		{
			goto IL_00d7;
		}
	}
	{
		goto IL_01a8;
	}

IL_00c3:
	{
		return 7;
	}

IL_00c5:
	{
		return ((int32_t)9);
	}

IL_00c8:
	{
		return ((int32_t)13);
	}

IL_00cb:
	{
		return ((int32_t)11);
	}

IL_00ce:
	{
		return ((int32_t)12);
	}

IL_00d1:
	{
		return ((int32_t)10);
	}

IL_00d4:
	{
		return ((int32_t)27);
	}

IL_00d7:
	{
		return ((int32_t)92);
	}

IL_00da:
	{
		int32_t L_11 = (__this->f1);
		__this->f1 = ((int32_t)(L_11-1));
		int32_t L_12 = (__this->f1);
		V_2 = L_12;
		t11* L_13 = (__this->f0);
		int32_t* L_14 = &(__this->f1);
		int32_t L_15 = m4499(NULL, L_13, L_14, &m4499_MI);
		V_3 = L_15;
		if ((((uint32_t)V_3) != ((uint32_t)(-1))))
		{
			goto IL_0116;
		}
	}
	{
		int32_t L_16 = (__this->f1);
		if ((((uint32_t)V_2) != ((uint32_t)L_16)))
		{
			goto IL_0116;
		}
	}
	{
		return 0;
	}

IL_0116:
	{
		return V_3;
	}

IL_0118:
	{
		t11* L_17 = (__this->f0);
		int32_t* L_18 = &(__this->f1);
		int32_t L_19 = m4500(NULL, L_17, L_18, 2, &m4500_MI);
		V_1 = L_19;
		if ((((int32_t)V_1) >= ((int32_t)0)))
		{
			goto IL_013e;
		}
	}
	{
		t160 * L_20 = m4527(__this, (t11*) &_stringLiteral548, &m4527_MI);
		il2cpp_codegen_raise_exception(L_20);
	}

IL_013e:
	{
		return V_1;
	}

IL_0140:
	{
		t11* L_21 = (__this->f0);
		int32_t* L_22 = &(__this->f1);
		int32_t L_23 = m4500(NULL, L_21, L_22, 4, &m4500_MI);
		V_1 = L_23;
		if ((((int32_t)V_1) >= ((int32_t)0)))
		{
			goto IL_0166;
		}
	}
	{
		t160 * L_24 = m4527(__this, (t11*) &_stringLiteral548, &m4527_MI);
		il2cpp_codegen_raise_exception(L_24);
	}

IL_0166:
	{
		return V_1;
	}

IL_0168:
	{
		t11* L_25 = (__this->f0);
		int32_t L_26 = (__this->f1);
		int32_t L_27 = L_26;
		V_4 = L_27;
		__this->f1 = ((int32_t)(L_27+1));
		uint16_t L_28 = m2385(L_25, V_4, &m2385_MI);
		V_1 = L_28;
		if ((((int32_t)V_1) < ((int32_t)((int32_t)64))))
		{
			goto IL_019c;
		}
	}
	{
		if ((((int32_t)V_1) > ((int32_t)((int32_t)95))))
		{
			goto IL_019c;
		}
	}
	{
		return ((int32_t)(V_1-((int32_t)64)));
	}

IL_019c:
	{
		t160 * L_29 = m4527(__this, (t11*) &_stringLiteral549, &m4527_MI);
		il2cpp_codegen_raise_exception(L_29);
	}

IL_01a8:
	{
		__this->f1 = V_0;
		return (-1);
	}
}
 t11* m4514 (t1132 * __this, MethodInfo* method){
	{
		t11* L_0 = (__this->f0);
		int32_t* L_1 = &(__this->f1);
		t11* L_2 = m4502(NULL, L_0, L_1, &m4502_MI);
		return L_2;
	}
}
 bool m4515 (t5 * __this, uint16_t p0, MethodInfo* method){
	int32_t V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t144_TI));
		int32_t L_0 = m5018(NULL, p0, &m5018_MI);
		V_0 = L_0;
		if ((((uint32_t)V_0) != ((uint32_t)3)))
		{
			goto IL_0010;
		}
	}
	{
		return 0;
	}

IL_0010:
	{
		if ((((uint32_t)V_0) != ((uint32_t)((int32_t)18))))
		{
			goto IL_001a;
		}
	}
	{
		return 1;
	}

IL_001a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t144_TI));
		bool L_1 = m5015(NULL, p0, &m5015_MI);
		return L_1;
	}
}
 int32_t m4516 (t1132 * __this, int32_t p0, int32_t p1, int32_t p2, MethodInfo* method){
	{
		t11* L_0 = (__this->f0);
		int32_t* L_1 = &(__this->f1);
		int32_t L_2 = m4501(NULL, L_0, L_1, p0, p1, p2, &m4501_MI);
		return L_2;
	}
}
 int32_t m4517 (t5 * __this, uint16_t p0, int32_t p1, int32_t p2, MethodInfo* method){
	int32_t V_0 = 0;
	{
		V_0 = p1;
		if (((int32_t)(V_0-8)) == 0)
		{
			goto IL_0023;
		}
		if (((int32_t)(V_0-8)) == 1)
		{
			goto IL_0016;
		}
		if (((int32_t)(V_0-8)) == 2)
		{
			goto IL_003a;
		}
	}

IL_0016:
	{
		if ((((int32_t)V_0) == ((int32_t)((int32_t)16))))
		{
			goto IL_0051;
		}
	}
	{
		goto IL_0098;
	}

IL_0023:
	{
		if ((((int32_t)p0) < ((int32_t)((int32_t)48))))
		{
			goto IL_0038;
		}
	}
	{
		if ((((int32_t)p0) > ((int32_t)((int32_t)55))))
		{
			goto IL_0038;
		}
	}
	{
		return ((uint16_t)(p0-((int32_t)48)));
	}

IL_0038:
	{
		return (-1);
	}

IL_003a:
	{
		if ((((int32_t)p0) < ((int32_t)((int32_t)48))))
		{
			goto IL_004f;
		}
	}
	{
		if ((((int32_t)p0) > ((int32_t)((int32_t)57))))
		{
			goto IL_004f;
		}
	}
	{
		return ((uint16_t)(p0-((int32_t)48)));
	}

IL_004f:
	{
		return (-1);
	}

IL_0051:
	{
		if ((((int32_t)p0) < ((int32_t)((int32_t)48))))
		{
			goto IL_0066;
		}
	}
	{
		if ((((int32_t)p0) > ((int32_t)((int32_t)57))))
		{
			goto IL_0066;
		}
	}
	{
		return ((uint16_t)(p0-((int32_t)48)));
	}

IL_0066:
	{
		if ((((int32_t)p0) < ((int32_t)((int32_t)97))))
		{
			goto IL_007e;
		}
	}
	{
		if ((((int32_t)p0) > ((int32_t)((int32_t)102))))
		{
			goto IL_007e;
		}
	}
	{
		return ((int32_t)(((int32_t)(((int32_t)10)+p0))-((int32_t)97)));
	}

IL_007e:
	{
		if ((((int32_t)p0) < ((int32_t)((int32_t)65))))
		{
			goto IL_0096;
		}
	}
	{
		if ((((int32_t)p0) > ((int32_t)((int32_t)70))))
		{
			goto IL_0096;
		}
	}
	{
		return ((int32_t)(((int32_t)(((int32_t)10)+p0))-((int32_t)65)));
	}

IL_0096:
	{
		return (-1);
	}

IL_0098:
	{
		return (-1);
	}
}
 void m4518 (t1132 * __this, bool p0, MethodInfo* method){
	int32_t V_0 = 0;
	{
		goto IL_0188;
	}

IL_0005:
	{
		t11* L_0 = (__this->f0);
		int32_t L_1 = (__this->f1);
		uint16_t L_2 = m2385(L_0, L_1, &m2385_MI);
		if ((((uint32_t)L_2) != ((uint32_t)((int32_t)40))))
		{
			goto IL_00bc;
		}
	}
	{
		int32_t L_3 = (__this->f1);
		t11* L_4 = (__this->f0);
		int32_t L_5 = m2358(L_4, &m2358_MI);
		if ((((int32_t)((int32_t)(L_3+3))) < ((int32_t)L_5)))
		{
			goto IL_0036;
		}
	}
	{
		return;
	}

IL_0036:
	{
		t11* L_6 = (__this->f0);
		int32_t L_7 = (__this->f1);
		uint16_t L_8 = m2385(L_6, ((int32_t)(L_7+1)), &m2385_MI);
		if ((((uint32_t)L_8) != ((uint32_t)((int32_t)63))))
		{
			goto IL_006a;
		}
	}
	{
		t11* L_9 = (__this->f0);
		int32_t L_10 = (__this->f1);
		uint16_t L_11 = m2385(L_9, ((int32_t)(L_10+2)), &m2385_MI);
		if ((((int32_t)L_11) == ((int32_t)((int32_t)35))))
		{
			goto IL_006b;
		}
	}

IL_006a:
	{
		return;
	}

IL_006b:
	{
		int32_t L_12 = (__this->f1);
		__this->f1 = ((int32_t)(L_12+3));
		goto IL_007e;
	}

IL_007e:
	{
		int32_t L_13 = (__this->f1);
		t11* L_14 = (__this->f0);
		int32_t L_15 = m2358(L_14, &m2358_MI);
		if ((((int32_t)L_13) >= ((int32_t)L_15)))
		{
			goto IL_00b7;
		}
	}
	{
		t11* L_16 = (__this->f0);
		int32_t L_17 = (__this->f1);
		int32_t L_18 = L_17;
		V_0 = L_18;
		__this->f1 = ((int32_t)(L_18+1));
		uint16_t L_19 = m2385(L_16, V_0, &m2385_MI);
		if ((((uint32_t)L_19) != ((uint32_t)((int32_t)41))))
		{
			goto IL_007e;
		}
	}

IL_00b7:
	{
		goto IL_0188;
	}

IL_00bc:
	{
		if (!p0)
		{
			goto IL_011d;
		}
	}
	{
		t11* L_20 = (__this->f0);
		int32_t L_21 = (__this->f1);
		uint16_t L_22 = m2385(L_20, L_21, &m2385_MI);
		if ((((uint32_t)L_22) != ((uint32_t)((int32_t)35))))
		{
			goto IL_011d;
		}
	}
	{
		goto IL_00df;
	}

IL_00df:
	{
		int32_t L_23 = (__this->f1);
		t11* L_24 = (__this->f0);
		int32_t L_25 = m2358(L_24, &m2358_MI);
		if ((((int32_t)L_23) >= ((int32_t)L_25)))
		{
			goto IL_0118;
		}
	}
	{
		t11* L_26 = (__this->f0);
		int32_t L_27 = (__this->f1);
		int32_t L_28 = L_27;
		V_0 = L_28;
		__this->f1 = ((int32_t)(L_28+1));
		uint16_t L_29 = m2385(L_26, V_0, &m2385_MI);
		if ((((uint32_t)L_29) != ((uint32_t)((int32_t)10))))
		{
			goto IL_00df;
		}
	}

IL_0118:
	{
		goto IL_0188;
	}

IL_011d:
	{
		if (!p0)
		{
			goto IL_0187;
		}
	}
	{
		t11* L_30 = (__this->f0);
		int32_t L_31 = (__this->f1);
		uint16_t L_32 = m2385(L_30, L_31, &m2385_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t144_TI));
		bool L_33 = m5017(NULL, L_32, &m5017_MI);
		if (!L_33)
		{
			goto IL_0187;
		}
	}
	{
		goto IL_0151;
	}

IL_0143:
	{
		int32_t L_34 = (__this->f1);
		__this->f1 = ((int32_t)(L_34+1));
	}

IL_0151:
	{
		int32_t L_35 = (__this->f1);
		t11* L_36 = (__this->f0);
		int32_t L_37 = m2358(L_36, &m2358_MI);
		if ((((int32_t)L_35) >= ((int32_t)L_37)))
		{
			goto IL_0182;
		}
	}
	{
		t11* L_38 = (__this->f0);
		int32_t L_39 = (__this->f1);
		uint16_t L_40 = m2385(L_38, L_39, &m2385_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t144_TI));
		bool L_41 = m5017(NULL, L_40, &m5017_MI);
		if (L_41)
		{
			goto IL_0143;
		}
	}

IL_0182:
	{
		goto IL_0188;
	}

IL_0187:
	{
		return;
	}

IL_0188:
	{
		int32_t L_42 = (__this->f1);
		t11* L_43 = (__this->f0);
		int32_t L_44 = m2358(L_43, &m2358_MI);
		if ((((int32_t)L_42) < ((int32_t)L_44)))
		{
			goto IL_0005;
		}
	}
	{
		return;
	}
}
 void m4519 (t1132 * __this, MethodInfo* method){
	int32_t V_0 = 0;
	t984 * V_1 = {0};
	t996 * V_2 = {0};
	t1142 * V_3 = {0};
	t5 * V_4 = {0};
	t1142 * V_5 = {0};
	t5 * V_6 = {0};
	t1142 * V_7 = {0};
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	t11* V_10 = {0};
	t1136 * V_11 = {0};
	t5 * V_12 = {0};
	t11* V_13 = {0};
	t1151 * V_14 = {0};
	t1142 * V_15 = {0};
	t5 * V_16 = {0};
	int32_t V_17 = 0;
	t5 * V_18 = {0};
	t5 * V_19 = {0};
	int32_t leaveInstructions[1] = {0};
	t142 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t142 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	t11* G_B50_0 = {0};
	t1132 * G_B50_1 = {0};
	t11* G_B49_0 = {0};
	t1132 * G_B49_1 = {0};
	t11* G_B51_0 = {0};
	t11* G_B51_1 = {0};
	t1132 * G_B51_2 = {0};
	{
		V_0 = 1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t984_TI));
		t984 * L_0 = (t984 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t984_TI));
		m5003(L_0, &m5003_MI);
		V_1 = L_0;
		V_2 = (t996 *)NULL;
		t996 * L_1 = (__this->f2);
		t5 * L_2 = (t5 *)VirtFuncInvoker0< t5 * >::Invoke(&m4774_MI, L_1);
		V_4 = L_2;
	}

IL_0017:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0060;
		}

IL_001c:
		{
			t5 * L_3 = (t5 *)InterfaceFuncInvoker0< t5 * >::Invoke(&m4765_MI, V_4);
			V_3 = ((t1142 *)Castclass(L_3, InitializedTypeInfo(&t1142_TI)));
			t11* L_4 = m4558(V_3, &m4558_MI);
			if (!L_4)
			{
				goto IL_0039;
			}
		}

IL_0034:
		{
			goto IL_0060;
		}

IL_0039:
		{
			t11* L_5 = m3590((&V_0), &m3590_MI);
			VirtActionInvoker2< t5 *, t5 * >::Invoke(&m4783_MI, V_1, L_5, V_3);
			int32_t L_6 = V_0;
			V_0 = ((int32_t)(L_6+1));
			m4557(V_3, L_6, &m4557_MI);
			int32_t L_7 = (__this->f4);
			__this->f4 = ((int32_t)(L_7+1));
		}

IL_0060:
		{
			bool L_8 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&m747_MI, V_4);
			if (L_8)
			{
				goto IL_001c;
			}
		}

IL_006c:
		{
			// IL_006c: leave IL_0087
			leaveInstructions[0] = 0x87; // 1
			THROW_SENTINEL(IL_0087);
			// finally target depth: 1
		}
	} // end try (depth: 1)
	catch(Il2CppFinallySentinel& e)
	{
		goto IL_0071;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t142 *)e.ex;
		goto IL_0071;
	}

IL_0071:
	{ // begin finally (depth: 1)
		{
			V_16 = ((t5 *)IsInst(V_4, InitializedTypeInfo(&t132_TI)));
			if (V_16)
			{
				goto IL_007f;
			}
		}

IL_007e:
		{
			// finally node depth: 1
			switch (leaveInstructions[0])
			{
				case 0x87:
					goto IL_0087;
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

IL_007f:
		{
			InterfaceActionInvoker0::Invoke(&m516_MI, V_16);
			// finally node depth: 1
			switch (leaveInstructions[0])
			{
				case 0x87:
					goto IL_0087;
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

IL_0087:
	{
		t996 * L_9 = (__this->f2);
		t5 * L_10 = (t5 *)VirtFuncInvoker0< t5 * >::Invoke(&m4774_MI, L_9);
		V_6 = L_10;
	}

IL_0094:
	try
	{ // begin try (depth: 1)
		{
			goto IL_020a;
		}

IL_0099:
		{
			t5 * L_11 = (t5 *)InterfaceFuncInvoker0< t5 * >::Invoke(&m4765_MI, V_6);
			V_5 = ((t1142 *)Castclass(L_11, InitializedTypeInfo(&t1142_TI)));
			t11* L_12 = m4558(V_5, &m4558_MI);
			if (L_12)
			{
				goto IL_00b8;
			}
		}

IL_00b3:
		{
			goto IL_020a;
		}

IL_00b8:
		{
			t11* L_13 = m4558(V_5, &m4558_MI);
			bool L_14 = (bool)VirtFuncInvoker1< bool, t5 * >::Invoke(&m5013_MI, V_1, L_13);
			if (!L_14)
			{
				goto IL_011d;
			}
		}

IL_00ca:
		{
			t11* L_15 = m4558(V_5, &m4558_MI);
			t5 * L_16 = (t5 *)VirtFuncInvoker1< t5 *, t5 * >::Invoke(&m4782_MI, V_1, L_15);
			V_7 = ((t1142 *)Castclass(L_16, InitializedTypeInfo(&t1142_TI)));
			int32_t L_17 = m4556(V_7, &m4556_MI);
			m4557(V_5, L_17, &m4557_MI);
			int32_t L_18 = m4556(V_5, &m4556_MI);
			if ((((uint32_t)L_18) != ((uint32_t)V_0)))
			{
				goto IL_0102;
			}
		}

IL_00f9:
		{
			V_0 = ((int32_t)(V_0+1));
			goto IL_0118;
		}

IL_0102:
		{
			int32_t L_19 = m4556(V_5, &m4556_MI);
			if ((((int32_t)L_19) <= ((int32_t)V_0)))
			{
				goto IL_0118;
			}
		}

IL_010f:
		{
			VirtFuncInvoker1< int32_t, t5 * >::Invoke(&m4784_MI, V_2, V_5);
		}

IL_0118:
		{
			goto IL_020a;
		}

IL_011d:
		{
			t11* L_20 = m4558(V_5, &m4558_MI);
			uint16_t L_21 = m2385(L_20, 0, &m2385_MI);
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t144_TI));
			bool L_22 = m5016(NULL, L_21, &m5016_MI);
			if (!L_22)
			{
				goto IL_01ac;
			}
		}

IL_0134:
		{
			V_8 = 0;
			t11* L_23 = m4558(V_5, &m4558_MI);
			int32_t L_24 = m4498(NULL, L_23, (&V_8), &m4498_MI);
			V_9 = L_24;
			t11* L_25 = m4558(V_5, &m4558_MI);
			int32_t L_26 = m2358(L_25, &m2358_MI);
			if ((((uint32_t)V_8) != ((uint32_t)L_26)))
			{
				goto IL_01ac;
			}
		}

IL_015a:
		{
			m4557(V_5, V_9, &m4557_MI);
			t11* L_27 = m4558(V_5, &m4558_MI);
			VirtActionInvoker2< t5 *, t5 * >::Invoke(&m4783_MI, V_1, L_27, V_5);
			int32_t L_28 = (__this->f4);
			__this->f4 = ((int32_t)(L_28+1));
			if ((((uint32_t)V_9) != ((uint32_t)V_0)))
			{
				goto IL_0191;
			}
		}

IL_0188:
		{
			V_0 = ((int32_t)(V_0+1));
			goto IL_01a7;
		}

IL_0191:
		{
			if (V_2)
			{
				goto IL_019e;
			}
		}

IL_0197:
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t996_TI));
			t996 * L_29 = (t996 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t996_TI));
			m4975(L_29, 4, &m4975_MI);
			V_2 = L_29;
		}

IL_019e:
		{
			VirtFuncInvoker1< int32_t, t5 * >::Invoke(&m4784_MI, V_2, V_5);
		}

IL_01a7:
		{
			goto IL_020a;
		}

IL_01ac:
		{
			t11* L_30 = m3590((&V_0), &m3590_MI);
			V_10 = L_30;
			goto IL_01ca;
		}

IL_01ba:
		{
			int32_t L_31 = ((int32_t)(V_0+1));
			V_0 = L_31;
			V_17 = L_31;
			t11* L_32 = m3590((&V_17), &m3590_MI);
			V_10 = L_32;
		}

IL_01ca:
		{
			bool L_33 = (bool)VirtFuncInvoker1< bool, t5 * >::Invoke(&m5013_MI, V_1, V_10);
			if (L_33)
			{
				goto IL_01ba;
			}
		}

IL_01d7:
		{
			VirtActionInvoker2< t5 *, t5 * >::Invoke(&m4783_MI, V_1, V_10, V_5);
			t11* L_34 = m4558(V_5, &m4558_MI);
			VirtActionInvoker2< t5 *, t5 * >::Invoke(&m4783_MI, V_1, L_34, V_5);
			int32_t L_35 = V_0;
			V_0 = ((int32_t)(L_35+1));
			m4557(V_5, L_35, &m4557_MI);
			int32_t L_36 = (__this->f4);
			__this->f4 = ((int32_t)(L_36+1));
		}

IL_020a:
		{
			bool L_37 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&m747_MI, V_6);
			if (L_37)
			{
				goto IL_0099;
			}
		}

IL_0216:
		{
			// IL_0216: leave IL_0231
			leaveInstructions[0] = 0x231; // 1
			THROW_SENTINEL(IL_0231);
			// finally target depth: 1
		}
	} // end try (depth: 1)
	catch(Il2CppFinallySentinel& e)
	{
		goto IL_021b;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t142 *)e.ex;
		goto IL_021b;
	}

IL_021b:
	{ // begin finally (depth: 1)
		{
			V_18 = ((t5 *)IsInst(V_6, InitializedTypeInfo(&t132_TI)));
			if (V_18)
			{
				goto IL_0229;
			}
		}

IL_0228:
		{
			// finally node depth: 1
			switch (leaveInstructions[0])
			{
				case 0x231:
					goto IL_0231;
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

IL_0229:
		{
			InterfaceActionInvoker0::Invoke(&m516_MI, V_18);
			// finally node depth: 1
			switch (leaveInstructions[0])
			{
				case 0x231:
					goto IL_0231;
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

IL_0231:
	{
		__this->f5 = V_0;
		if (!V_2)
		{
			goto IL_0245;
		}
	}
	{
		m4520(__this, V_2, &m4520_MI);
	}

IL_0245:
	{
		t984 * L_38 = (__this->f3);
		t5 * L_39 = (t5 *)VirtFuncInvoker0< t5 * >::Invoke(&m5059_MI, L_38);
		t5 * L_40 = (t5 *)InterfaceFuncInvoker0< t5 * >::Invoke(&m4948_MI, L_39);
		V_12 = L_40;
	}

IL_0257:
	try
	{ // begin try (depth: 1)
		{
			goto IL_036d;
		}

IL_025c:
		{
			t5 * L_41 = (t5 *)InterfaceFuncInvoker0< t5 * >::Invoke(&m4765_MI, V_12);
			V_11 = ((t1136 *)Castclass(L_41, InitializedTypeInfo(&t1136_TI)));
			t984 * L_42 = (__this->f3);
			t5 * L_43 = (t5 *)VirtFuncInvoker1< t5 *, t5 * >::Invoke(&m4782_MI, L_42, V_11);
			V_13 = ((t11*)Castclass(L_43, (&t11_TI)));
			bool L_44 = (bool)VirtFuncInvoker1< bool, t5 * >::Invoke(&m5013_MI, V_1, V_13);
			if (L_44)
			{
				goto IL_0306;
			}
		}

IL_028b:
		{
			if (!((t1146 *)IsInst(V_11, InitializedTypeInfo(&t1146_TI))))
			{
				goto IL_02ae;
			}
		}

IL_0297:
		{
			uint16_t L_45 = m2385(V_13, 0, &m2385_MI);
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t144_TI));
			bool L_46 = m5016(NULL, L_45, &m5016_MI);
			if (L_46)
			{
				goto IL_02ae;
			}
		}

IL_02a9:
		{
			goto IL_036d;
		}

IL_02ae:
		{
			V_14 = ((t1151 *)IsInst(V_11, InitializedTypeInfo(&t1151_TI)));
			if (!V_14)
			{
				goto IL_02d2;
			}
		}

IL_02be:
		{
			bool L_47 = m4619(V_14, V_13, V_1, &m4619_MI);
			if (!L_47)
			{
				goto IL_02d2;
			}
		}

IL_02cd:
		{
			goto IL_036d;
		}

IL_02d2:
		{
			uint16_t L_48 = m2385(V_13, 0, &m2385_MI);
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t144_TI));
			bool L_49 = m5016(NULL, L_48, &m5016_MI);
			G_B49_0 = (t11*) &_stringLiteral550;
			G_B49_1 = __this;
			if (!L_49)
			{
				G_B50_0 = (t11*) &_stringLiteral550;
				G_B50_1 = __this;
				goto IL_02f4;
			}
		}

IL_02ea:
		{
			G_B51_0 = (t11*) &_stringLiteral551;
			G_B51_1 = G_B49_0;
			G_B51_2 = G_B49_1;
			goto IL_02f9;
		}

IL_02f4:
		{
			G_B51_0 = (t11*) &_stringLiteral552;
			G_B51_1 = G_B50_0;
			G_B51_2 = G_B50_1;
		}

IL_02f9:
		{
			IL2CPP_RUNTIME_CLASS_INIT((&t11_TI));
			t11* L_50 = m2328(NULL, G_B51_1, G_B51_0, V_13, &m2328_MI);
			t160 * L_51 = m4527(G_B51_2, L_50, &m4527_MI);
			il2cpp_codegen_raise_exception(L_51);
		}

IL_0306:
		{
			t5 * L_52 = (t5 *)VirtFuncInvoker1< t5 *, t5 * >::Invoke(&m4782_MI, V_1, V_13);
			V_15 = ((t1142 *)Castclass(L_52, InitializedTypeInfo(&t1142_TI)));
			if (!((t1150 *)IsInst(V_11, InitializedTypeInfo(&t1150_TI))))
			{
				goto IL_0334;
			}
		}

IL_0321:
		{
			m4613(((t1150 *)Castclass(V_11, InitializedTypeInfo(&t1150_TI))), V_15, &m4613_MI);
			goto IL_036d;
		}

IL_0334:
		{
			if (!((t1146 *)IsInst(V_11, InitializedTypeInfo(&t1146_TI))))
			{
				goto IL_0353;
			}
		}

IL_0340:
		{
			m4584(((t1146 *)Castclass(V_11, InitializedTypeInfo(&t1146_TI))), V_15, &m4584_MI);
			goto IL_036d;
		}

IL_0353:
		{
			if (!((t1143 *)IsInst(V_11, InitializedTypeInfo(&t1143_TI))))
			{
				goto IL_036d;
			}
		}

IL_035f:
		{
			m4565(((t1143 *)Castclass(V_11, InitializedTypeInfo(&t1143_TI))), V_15, &m4565_MI);
		}

IL_036d:
		{
			bool L_53 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&m747_MI, V_12);
			if (L_53)
			{
				goto IL_025c;
			}
		}

IL_0379:
		{
			// IL_0379: leave IL_0394
			leaveInstructions[0] = 0x394; // 1
			THROW_SENTINEL(IL_0394);
			// finally target depth: 1
		}
	} // end try (depth: 1)
	catch(Il2CppFinallySentinel& e)
	{
		goto IL_037e;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t142 *)e.ex;
		goto IL_037e;
	}

IL_037e:
	{ // begin finally (depth: 1)
		{
			V_19 = ((t5 *)IsInst(V_12, InitializedTypeInfo(&t132_TI)));
			if (V_19)
			{
				goto IL_038c;
			}
		}

IL_038b:
		{
			// finally node depth: 1
			switch (leaveInstructions[0])
			{
				case 0x394:
					goto IL_0394;
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

IL_038c:
		{
			InterfaceActionInvoker0::Invoke(&m516_MI, V_19);
			// finally node depth: 1
			switch (leaveInstructions[0])
			{
				case 0x394:
					goto IL_0394;
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

IL_0394:
	{
		return;
	}
}
 void m4520 (t1132 * __this, t996 * p0, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	t1142 * V_3 = {0};
	int32_t V_4 = 0;
	t1142 * V_5 = {0};
	{
		int32_t L_0 = (__this->f5);
		V_0 = L_0;
		V_1 = 0;
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m4769_MI, p0);
		V_2 = L_1;
		VirtActionInvoker0::Invoke(&m5056_MI, p0);
		goto IL_004d;
	}

IL_001b:
	{
		t5 * L_2 = (t5 *)VirtFuncInvoker1< t5 *, int32_t >::Invoke(&m4771_MI, p0, V_1);
		V_3 = ((t1142 *)Castclass(L_2, InitializedTypeInfo(&t1142_TI)));
		int32_t L_3 = m4556(V_3, &m4556_MI);
		if ((((int32_t)L_3) <= ((int32_t)V_0)))
		{
			goto IL_0039;
		}
	}
	{
		goto IL_0054;
	}

IL_0039:
	{
		int32_t L_4 = m4556(V_3, &m4556_MI);
		if ((((uint32_t)L_4) != ((uint32_t)V_0)))
		{
			goto IL_0049;
		}
	}
	{
		V_0 = ((int32_t)(V_0+1));
	}

IL_0049:
	{
		V_1 = ((int32_t)(V_1+1));
	}

IL_004d:
	{
		if ((((int32_t)V_1) < ((int32_t)V_2)))
		{
			goto IL_001b;
		}
	}

IL_0054:
	{
		__this->f5 = V_0;
		V_4 = V_0;
		goto IL_00a7;
	}

IL_0063:
	{
		t5 * L_5 = (t5 *)VirtFuncInvoker1< t5 *, int32_t >::Invoke(&m4771_MI, p0, V_1);
		V_5 = ((t1142 *)Castclass(L_5, InitializedTypeInfo(&t1142_TI)));
		int32_t L_6 = m4556(V_5, &m4556_MI);
		if ((((uint32_t)L_6) != ((uint32_t)V_4)))
		{
			goto IL_008e;
		}
	}
	{
		m4557(V_5, ((int32_t)(V_0-1)), &m4557_MI);
		goto IL_00a3;
	}

IL_008e:
	{
		int32_t L_7 = m4556(V_5, &m4556_MI);
		V_4 = L_7;
		int32_t L_8 = V_0;
		V_0 = ((int32_t)(L_8+1));
		m4557(V_5, L_8, &m4557_MI);
	}

IL_00a3:
	{
		V_1 = ((int32_t)(V_1+1));
	}

IL_00a7:
	{
		if ((((int32_t)V_1) < ((int32_t)V_2)))
		{
			goto IL_0063;
		}
	}
	{
		return;
	}
}
 bool m4521 (t5 * __this, int32_t p0, MethodInfo* method){
	{
		return ((((int32_t)((((int32_t)((int32_t)((int32_t)p0&(int32_t)1))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
 bool m4522 (t5 * __this, int32_t p0, MethodInfo* method){
	{
		return ((((int32_t)((((int32_t)((int32_t)((int32_t)p0&(int32_t)2))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
 bool m4523 (t5 * __this, int32_t p0, MethodInfo* method){
	{
		return ((((int32_t)((((int32_t)((int32_t)((int32_t)p0&(int32_t)4))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
 bool m4524 (t5 * __this, int32_t p0, MethodInfo* method){
	{
		return ((((int32_t)((((int32_t)((int32_t)((int32_t)p0&(int32_t)((int32_t)16)))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
 bool m4525 (t5 * __this, int32_t p0, MethodInfo* method){
	{
		return ((((int32_t)((((int32_t)((int32_t)((int32_t)p0&(int32_t)((int32_t)32)))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
 bool m4526 (t5 * __this, int32_t p0, MethodInfo* method){
	{
		return ((((int32_t)((((int32_t)((int32_t)((int32_t)p0&(int32_t)((int32_t)256)))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
 t160 * m4527 (t1132 * __this, t11* p0, MethodInfo* method){
	{
		t11* L_0 = (__this->f0);
		IL2CPP_RUNTIME_CLASS_INIT((&t11_TI));
		t11* L_1 = m3573(NULL, (t11*) &_stringLiteral553, L_0, (t11*) &_stringLiteral554, p0, &m3573_MI);
		p0 = L_1;
		t11* L_2 = (__this->f0);
		t160 * L_3 = (t160 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t160_TI));
		m614(L_3, p0, L_2, &m614_MI);
		return L_3;
	}
}
// Metadata Definition System.Text.RegularExpressions.Syntax.Parser
extern Il2CppType t11_0_0_1;
FieldInfo t1132_f0_FieldInfo = 
{
	"pattern", &t11_0_0_1, &t1132_TI, offsetof(t1132, f0), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t1132_f1_FieldInfo = 
{
	"ptr", &t110_0_0_1, &t1132_TI, offsetof(t1132, f1), &EmptyCustomAttributesCache};
extern Il2CppType t996_0_0_1;
FieldInfo t1132_f2_FieldInfo = 
{
	"caps", &t996_0_0_1, &t1132_TI, offsetof(t1132, f2), &EmptyCustomAttributesCache};
extern Il2CppType t984_0_0_1;
FieldInfo t1132_f3_FieldInfo = 
{
	"refs", &t984_0_0_1, &t1132_TI, offsetof(t1132, f3), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t1132_f4_FieldInfo = 
{
	"num_groups", &t110_0_0_1, &t1132_TI, offsetof(t1132, f4), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t1132_f5_FieldInfo = 
{
	"gap", &t110_0_0_1, &t1132_TI, offsetof(t1132, f5), &EmptyCustomAttributesCache};
static FieldInfo* t1132_FIs[] =
{
	&t1132_f0_FieldInfo,
	&t1132_f1_FieldInfo,
	&t1132_f2_FieldInfo,
	&t1132_f3_FieldInfo,
	&t1132_f4_FieldInfo,
	&t1132_f5_FieldInfo,
	NULL
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m4497_MI = 
{
	".ctor", (methodPointerType)&m4497, &t1132_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 732, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t11_0_0_0;
extern Il2CppType t110_1_0_0;
static ParameterInfo t1132_m4498_ParameterInfos[] = 
{
	{"str", 0, 134218391, &EmptyCustomAttributesCache, &t11_0_0_0},
	{"ptr", 1, 134218392, &EmptyCustomAttributesCache, &t110_1_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5_t533 (MethodInfo* method, void* obj, void** args);
MethodInfo m4498_MI = 
{
	"ParseDecimal", (methodPointerType)&m4498, &t1132_TI, &t110_0_0_0, RuntimeInvoker_t110_t5_t533, t1132_m4498_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 2, false, false, 733, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t11_0_0_0;
extern Il2CppType t110_1_0_0;
static ParameterInfo t1132_m4499_ParameterInfos[] = 
{
	{"str", 0, 134218393, &EmptyCustomAttributesCache, &t11_0_0_0},
	{"ptr", 1, 134218394, &EmptyCustomAttributesCache, &t110_1_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5_t533 (MethodInfo* method, void* obj, void** args);
MethodInfo m4499_MI = 
{
	"ParseOctal", (methodPointerType)&m4499, &t1132_TI, &t110_0_0_0, RuntimeInvoker_t110_t5_t533, t1132_m4499_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 2, false, false, 734, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t11_0_0_0;
extern Il2CppType t110_1_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t1132_m4500_ParameterInfos[] = 
{
	{"str", 0, 134218395, &EmptyCustomAttributesCache, &t11_0_0_0},
	{"ptr", 1, 134218396, &EmptyCustomAttributesCache, &t110_1_0_0},
	{"digits", 2, 134218397, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5_t533_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m4500_MI = 
{
	"ParseHex", (methodPointerType)&m4500, &t1132_TI, &t110_0_0_0, RuntimeInvoker_t110_t5_t533_t110, t1132_m4500_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 3, false, false, 735, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t11_0_0_0;
extern Il2CppType t110_1_0_0;
extern Il2CppType t110_0_0_0;
extern Il2CppType t110_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t1132_m4501_ParameterInfos[] = 
{
	{"str", 0, 134218398, &EmptyCustomAttributesCache, &t11_0_0_0},
	{"ptr", 1, 134218399, &EmptyCustomAttributesCache, &t110_1_0_0},
	{"b", 2, 134218400, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"min", 3, 134218401, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"max", 4, 134218402, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5_t533_t110_t110_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m4501_MI = 
{
	"ParseNumber", (methodPointerType)&m4501, &t1132_TI, &t110_0_0_0, RuntimeInvoker_t110_t5_t533_t110_t110_t110, t1132_m4501_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 5, false, false, 736, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t11_0_0_0;
extern Il2CppType t110_1_0_0;
static ParameterInfo t1132_m4502_ParameterInfos[] = 
{
	{"str", 0, 134218403, &EmptyCustomAttributesCache, &t11_0_0_0},
	{"ptr", 1, 134218404, &EmptyCustomAttributesCache, &t110_1_0_0},
};
extern Il2CppType t11_0_0_0;
extern void* RuntimeInvoker_t5_t5_t533 (MethodInfo* method, void* obj, void** args);
MethodInfo m4502_MI = 
{
	"ParseName", (methodPointerType)&m4502, &t1132_TI, &t11_0_0_0, RuntimeInvoker_t5_t5_t533, t1132_m4502_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 2, false, false, 737, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t11_0_0_0;
extern Il2CppType t1103_0_0_0;
extern Il2CppType t1103_0_0_0;
static ParameterInfo t1132_m4503_ParameterInfos[] = 
{
	{"pattern", 0, 134218405, &EmptyCustomAttributesCache, &t11_0_0_0},
	{"options", 1, 134218406, &EmptyCustomAttributesCache, &t1103_0_0_0},
};
extern Il2CppType t1133_0_0_0;
extern void* RuntimeInvoker_t5_t5_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m4503_MI = 
{
	"ParseRegularExpression", (methodPointerType)&m4503, &t1132_TI, &t1133_0_0_0, RuntimeInvoker_t5_t5_t110, t1132_m4503_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 2, false, false, 738, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t984_0_0_0;
extern Il2CppType t984_0_0_0;
static ParameterInfo t1132_m4504_ParameterInfos[] = 
{
	{"mapping", 0, 134218407, &EmptyCustomAttributesCache, &t984_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m4504_MI = 
{
	"GetMapping", (methodPointerType)&m4504, &t1132_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t1132_m4504_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 739, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1134_0_0_0;
extern Il2CppType t1134_0_0_0;
extern Il2CppType t1103_0_0_0;
extern Il2CppType t1135_0_0_0;
extern Il2CppType t1135_0_0_0;
static ParameterInfo t1132_m4505_ParameterInfos[] = 
{
	{"group", 0, 134218408, &EmptyCustomAttributesCache, &t1134_0_0_0},
	{"options", 1, 134218409, &EmptyCustomAttributesCache, &t1103_0_0_0},
	{"assertion", 2, 134218410, &EmptyCustomAttributesCache, &t1135_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m4505_MI = 
{
	"ParseGroup", (methodPointerType)&m4505, &t1132_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110_t5, t1132_m4505_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, false, false, 740, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1103_1_0_0;
extern Il2CppType t1103_1_0_0;
static ParameterInfo t1132_m4506_ParameterInfos[] = 
{
	{"options", 0, 134218411, &EmptyCustomAttributesCache, &t1103_1_0_0},
};
extern Il2CppType t1136_0_0_0;
extern void* RuntimeInvoker_t5_t1222 (MethodInfo* method, void* obj, void** args);
MethodInfo m4506_MI = 
{
	"ParseGroupingConstruct", (methodPointerType)&m4506, &t1132_TI, &t1136_0_0_0, RuntimeInvoker_t5_t1222, t1132_m4506_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 741, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1137_0_0_0;
extern Il2CppType t1137_0_0_0;
static ParameterInfo t1132_m4507_ParameterInfos[] = 
{
	{"assertion", 0, 134218412, &EmptyCustomAttributesCache, &t1137_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m4507_MI = 
{
	"ParseAssertionType", (methodPointerType)&m4507, &t1132_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t1132_m4507_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 742, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1103_1_0_0;
extern Il2CppType t108_0_0_0;
static ParameterInfo t1132_m4508_ParameterInfos[] = 
{
	{"options", 0, 134218413, &EmptyCustomAttributesCache, &t1103_1_0_0},
	{"negate", 1, 134218414, &EmptyCustomAttributesCache, &t108_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t1222_t111 (MethodInfo* method, void* obj, void** args);
MethodInfo m4508_MI = 
{
	"ParseOptions", (methodPointerType)&m4508, &t1132_TI, &t109_0_0_0, RuntimeInvoker_t109_t1222_t111, t1132_m4508_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, false, 743, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1103_0_0_0;
static ParameterInfo t1132_m4509_ParameterInfos[] = 
{
	{"options", 0, 134218415, &EmptyCustomAttributesCache, &t1103_0_0_0},
};
extern Il2CppType t1136_0_0_0;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m4509_MI = 
{
	"ParseCharacterClass", (methodPointerType)&m4509, &t1132_TI, &t1136_0_0_0, RuntimeInvoker_t5_t110, t1132_m4509_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 744, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t110_1_0_2;
extern Il2CppType t110_1_0_2;
extern Il2CppType t1103_0_0_0;
static ParameterInfo t1132_m4510_ParameterInfos[] = 
{
	{"min", 0, 134218416, &EmptyCustomAttributesCache, &t110_1_0_2},
	{"max", 1, 134218417, &EmptyCustomAttributesCache, &t110_1_0_2},
	{"options", 2, 134218418, &EmptyCustomAttributesCache, &t1103_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t533_t533_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m4510_MI = 
{
	"ParseRepetitionBounds", (methodPointerType)&m4510, &t1132_TI, &t108_0_0_0, RuntimeInvoker_t108_t533_t533_t110, t1132_m4510_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, false, false, 745, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1110_0_0_0;
extern void* RuntimeInvoker_t1110 (MethodInfo* method, void* obj, void** args);
MethodInfo m4511_MI = 
{
	"ParseUnicodeCategory", (methodPointerType)&m4511, &t1132_TI, &t1110_0_0_0, RuntimeInvoker_t1110, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 746, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1103_0_0_0;
static ParameterInfo t1132_m4512_ParameterInfos[] = 
{
	{"options", 0, 134218419, &EmptyCustomAttributesCache, &t1103_0_0_0},
};
extern Il2CppType t1136_0_0_0;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m4512_MI = 
{
	"ParseSpecial", (methodPointerType)&m4512, &t1132_TI, &t1136_0_0_0, RuntimeInvoker_t5_t110, t1132_m4512_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 747, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m4513_MI = 
{
	"ParseEscape", (methodPointerType)&m4513, &t1132_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 748, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t11_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m4514_MI = 
{
	"ParseName", (methodPointerType)&m4514, &t1132_TI, &t11_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 749, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t144_0_0_0;
static ParameterInfo t1132_m4515_ParameterInfos[] = 
{
	{"c", 0, 134218420, &EmptyCustomAttributesCache, &t144_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t150 (MethodInfo* method, void* obj, void** args);
MethodInfo m4515_MI = 
{
	"IsNameChar", (methodPointerType)&m4515, &t1132_TI, &t108_0_0_0, RuntimeInvoker_t108_t150, t1132_m4515_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 1, false, false, 750, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t110_0_0_0;
extern Il2CppType t110_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t1132_m4516_ParameterInfos[] = 
{
	{"b", 0, 134218421, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"min", 1, 134218422, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"max", 2, 134218423, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t110_t110_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m4516_MI = 
{
	"ParseNumber", (methodPointerType)&m4516, &t1132_TI, &t110_0_0_0, RuntimeInvoker_t110_t110_t110_t110, t1132_m4516_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, false, false, 751, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t144_0_0_0;
extern Il2CppType t110_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t1132_m4517_ParameterInfos[] = 
{
	{"c", 0, 134218424, &EmptyCustomAttributesCache, &t144_0_0_0},
	{"b", 1, 134218425, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"n", 2, 134218426, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t150_t110_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m4517_MI = 
{
	"ParseDigit", (methodPointerType)&m4517, &t1132_TI, &t110_0_0_0, RuntimeInvoker_t110_t150_t110_t110, t1132_m4517_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 3, false, false, 752, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t108_0_0_0;
static ParameterInfo t1132_m4518_ParameterInfos[] = 
{
	{"ignore", 0, 134218427, &EmptyCustomAttributesCache, &t108_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t111 (MethodInfo* method, void* obj, void** args);
MethodInfo m4518_MI = 
{
	"ConsumeWhitespace", (methodPointerType)&m4518, &t1132_TI, &t109_0_0_0, RuntimeInvoker_t109_t111, t1132_m4518_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 753, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m4519_MI = 
{
	"ResolveReferences", (methodPointerType)&m4519, &t1132_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 754, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t996_0_0_0;
extern Il2CppType t996_0_0_0;
static ParameterInfo t1132_m4520_ParameterInfos[] = 
{
	{"explicit_numeric_groups", 0, 134218428, &EmptyCustomAttributesCache, &t996_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m4520_MI = 
{
	"HandleExplicitNumericGroups", (methodPointerType)&m4520, &t1132_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t1132_m4520_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 755, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1103_0_0_0;
static ParameterInfo t1132_m4521_ParameterInfos[] = 
{
	{"options", 0, 134218429, &EmptyCustomAttributesCache, &t1103_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m4521_MI = 
{
	"IsIgnoreCase", (methodPointerType)&m4521, &t1132_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t1132_m4521_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 1, false, false, 756, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1103_0_0_0;
static ParameterInfo t1132_m4522_ParameterInfos[] = 
{
	{"options", 0, 134218430, &EmptyCustomAttributesCache, &t1103_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m4522_MI = 
{
	"IsMultiline", (methodPointerType)&m4522, &t1132_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t1132_m4522_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 1, false, false, 757, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1103_0_0_0;
static ParameterInfo t1132_m4523_ParameterInfos[] = 
{
	{"options", 0, 134218431, &EmptyCustomAttributesCache, &t1103_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m4523_MI = 
{
	"IsExplicitCapture", (methodPointerType)&m4523, &t1132_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t1132_m4523_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 1, false, false, 758, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1103_0_0_0;
static ParameterInfo t1132_m4524_ParameterInfos[] = 
{
	{"options", 0, 134218432, &EmptyCustomAttributesCache, &t1103_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m4524_MI = 
{
	"IsSingleline", (methodPointerType)&m4524, &t1132_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t1132_m4524_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 1, false, false, 759, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1103_0_0_0;
static ParameterInfo t1132_m4525_ParameterInfos[] = 
{
	{"options", 0, 134218433, &EmptyCustomAttributesCache, &t1103_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m4525_MI = 
{
	"IsIgnorePatternWhitespace", (methodPointerType)&m4525, &t1132_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t1132_m4525_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 1, false, false, 760, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1103_0_0_0;
static ParameterInfo t1132_m4526_ParameterInfos[] = 
{
	{"options", 0, 134218434, &EmptyCustomAttributesCache, &t1103_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m4526_MI = 
{
	"IsECMAScript", (methodPointerType)&m4526, &t1132_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t1132_m4526_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 1, false, false, 761, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t11_0_0_0;
static ParameterInfo t1132_m4527_ParameterInfos[] = 
{
	{"msg", 0, 134218435, &EmptyCustomAttributesCache, &t11_0_0_0},
};
extern Il2CppType t160_0_0_0;
extern void* RuntimeInvoker_t5_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m4527_MI = 
{
	"NewParseException", (methodPointerType)&m4527, &t1132_TI, &t160_0_0_0, RuntimeInvoker_t5_t5, t1132_m4527_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 762, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1132_MIs[] =
{
	&m4497_MI,
	&m4498_MI,
	&m4499_MI,
	&m4500_MI,
	&m4501_MI,
	&m4502_MI,
	&m4503_MI,
	&m4504_MI,
	&m4505_MI,
	&m4506_MI,
	&m4507_MI,
	&m4508_MI,
	&m4509_MI,
	&m4510_MI,
	&m4511_MI,
	&m4512_MI,
	&m4513_MI,
	&m4514_MI,
	&m4515_MI,
	&m4516_MI,
	&m4517_MI,
	&m4518_MI,
	&m4519_MI,
	&m4520_MI,
	&m4521_MI,
	&m4522_MI,
	&m4523_MI,
	&m4524_MI,
	&m4525_MI,
	&m4526_MI,
	&m4527_MI,
	NULL
};
static MethodInfo* t1132_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType t1132_0_0_0;
extern Il2CppType t1132_1_0_0;
struct t1132;
TypeInfo t1132_TI = 
{
	&g_System_dll_Image, NULL, "Parser", "System.Text.RegularExpressions.Syntax", t1132_MIs, NULL, t1132_FIs, NULL, &t5_TI, NULL, NULL, &t1132_TI, NULL, t1132_VT, &EmptyCustomAttributesCache, &t1132_TI, &t1132_0_0_0, &t1132_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1132), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, false, false, false, false, false, false, false, 31, 0, 6, 0, 0, 4, 0, 0};
#ifndef _MSC_VER
#else
#endif

#include "t494.h"
extern TypeInfo t1044_TI;
extern TypeInfo t494_TI;
extern MethodInfo m4532_MI;
extern MethodInfo m4534_MI;
extern MethodInfo m4533_MI;
extern MethodInfo m5010_MI;


 void m4528 (t1125 * __this, t11* p0, bool p1, bool p2, MethodInfo* method){
	{
		m460(__this, &m460_MI);
		__this->f0 = p0;
		int32_t L_0 = m2358(p0, &m2358_MI);
		__this->f1 = L_0;
		__this->f2 = p1;
		__this->f3 = p2;
		if (!p1)
		{
			goto IL_0035;
		}
	}
	{
		t11* L_1 = m5051(p0, &m5051_MI);
		p0 = L_1;
	}

IL_0035:
	{
		int32_t L_2 = (__this->f1);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1125_TI));
		if ((((int32_t)L_2) <= ((int32_t)(((t1125_SFs*)InitializedTypeInfo(&t1125_TI)->static_fields)->f6))))
		{
			goto IL_004b;
		}
	}
	{
		m4532(__this, &m4532_MI);
	}

IL_004b:
	{
		return;
	}
}
extern MethodInfo m4529_MI;
 void m4529 (t5 * __this, MethodInfo* method){
	{
		((t1125_SFs*)InitializedTypeInfo(&t1125_TI)->static_fields)->f6 = 5;
		return;
	}
}
 int32_t m4530 (t1125 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->f1);
		return L_0;
	}
}
 int32_t m4531 (t1125 * __this, t11* p0, int32_t p1, int32_t p2, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		V_0 = p1;
		bool L_0 = (__this->f3);
		if (!L_0)
		{
			goto IL_0107;
		}
	}
	{
		if ((((int32_t)p1) >= ((int32_t)p2)))
		{
			goto IL_0016;
		}
	}
	{
		return (-1);
	}

IL_0016:
	{
		int32_t L_1 = m2358(p0, &m2358_MI);
		if ((((int32_t)V_0) <= ((int32_t)L_1)))
		{
			goto IL_0029;
		}
	}
	{
		int32_t L_2 = m2358(p0, &m2358_MI);
		V_0 = L_2;
	}

IL_0029:
	{
		int32_t L_3 = (__this->f1);
		if ((((uint32_t)L_3) != ((uint32_t)1)))
		{
			goto IL_0067;
		}
	}
	{
		goto IL_005a;
	}

IL_003a:
	{
		t11* L_4 = (__this->f0);
		uint16_t L_5 = m2385(L_4, 0, &m2385_MI);
		uint16_t L_6 = m2385(p0, V_0, &m2385_MI);
		uint16_t L_7 = m4534(__this, L_6, &m4534_MI);
		if ((((uint32_t)L_5) != ((uint32_t)L_7)))
		{
			goto IL_005a;
		}
	}
	{
		return V_0;
	}

IL_005a:
	{
		int32_t L_8 = ((int32_t)(V_0-1));
		V_0 = L_8;
		if ((((int32_t)L_8) >= ((int32_t)p2)))
		{
			goto IL_003a;
		}
	}
	{
		return (-1);
	}

IL_0067:
	{
		int32_t L_9 = (__this->f1);
		if ((((int32_t)p2) >= ((int32_t)L_9)))
		{
			goto IL_007d;
		}
	}
	{
		int32_t L_10 = (__this->f1);
		p2 = ((int32_t)(L_10-1));
	}

IL_007d:
	{
		V_0 = ((int32_t)(V_0-1));
		goto IL_00fb;
	}

IL_0086:
	{
		int32_t L_11 = (__this->f1);
		V_1 = ((int32_t)(L_11-1));
		goto IL_00aa;
	}

IL_0094:
	{
		int32_t L_12 = ((int32_t)(V_1-1));
		V_1 = L_12;
		if ((((int32_t)L_12) >= ((int32_t)0)))
		{
			goto IL_00aa;
		}
	}
	{
		int32_t L_13 = (__this->f1);
		return ((int32_t)(((int32_t)(V_0-L_13))+1));
	}

IL_00aa:
	{
		t11* L_14 = (__this->f0);
		uint16_t L_15 = m2385(L_14, V_1, &m2385_MI);
		int32_t L_16 = (__this->f1);
		uint16_t L_17 = m2385(p0, ((int32_t)(((int32_t)(((int32_t)(V_0-L_16))+1))+V_1)), &m2385_MI);
		uint16_t L_18 = m4534(__this, L_17, &m4534_MI);
		if ((((int32_t)L_15) == ((int32_t)L_18)))
		{
			goto IL_0094;
		}
	}
	{
		if ((((int32_t)V_0) <= ((int32_t)p2)))
		{
			goto IL_00f6;
		}
	}
	{
		int32_t L_19 = (__this->f1);
		uint16_t L_20 = m2385(p0, ((int32_t)(V_0-L_19)), &m2385_MI);
		int32_t L_21 = m4533(__this, L_20, &m4533_MI);
		V_0 = ((int32_t)(V_0-L_21));
		goto IL_00fb;
	}

IL_00f6:
	{
		goto IL_0102;
	}

IL_00fb:
	{
		if ((((int32_t)V_0) >= ((int32_t)p2)))
		{
			goto IL_0086;
		}
	}

IL_0102:
	{
		goto IL_01d6;
	}

IL_0107:
	{
		int32_t L_22 = (__this->f1);
		if ((((uint32_t)L_22) != ((uint32_t)1)))
		{
			goto IL_0145;
		}
	}
	{
		goto IL_013c;
	}

IL_0118:
	{
		t11* L_23 = (__this->f0);
		uint16_t L_24 = m2385(L_23, 0, &m2385_MI);
		uint16_t L_25 = m2385(p0, V_0, &m2385_MI);
		uint16_t L_26 = m4534(__this, L_25, &m4534_MI);
		if ((((uint32_t)L_24) != ((uint32_t)L_26)))
		{
			goto IL_0138;
		}
	}
	{
		return V_0;
	}

IL_0138:
	{
		V_0 = ((int32_t)(V_0+1));
	}

IL_013c:
	{
		if ((((int32_t)V_0) <= ((int32_t)p2)))
		{
			goto IL_0118;
		}
	}
	{
		return (-1);
	}

IL_0145:
	{
		int32_t L_27 = m2358(p0, &m2358_MI);
		int32_t L_28 = (__this->f1);
		if ((((int32_t)p2) <= ((int32_t)((int32_t)(L_27-L_28)))))
		{
			goto IL_0167;
		}
	}
	{
		int32_t L_29 = m2358(p0, &m2358_MI);
		int32_t L_30 = (__this->f1);
		p2 = ((int32_t)(L_29-L_30));
	}

IL_0167:
	{
		goto IL_01cf;
	}

IL_016c:
	{
		int32_t L_31 = (__this->f1);
		V_2 = ((int32_t)(L_31-1));
		goto IL_0187;
	}

IL_017a:
	{
		int32_t L_32 = ((int32_t)(V_2-1));
		V_2 = L_32;
		if ((((int32_t)L_32) >= ((int32_t)0)))
		{
			goto IL_0187;
		}
	}
	{
		return V_0;
	}

IL_0187:
	{
		t11* L_33 = (__this->f0);
		uint16_t L_34 = m2385(L_33, V_2, &m2385_MI);
		uint16_t L_35 = m2385(p0, ((int32_t)(V_0+V_2)), &m2385_MI);
		uint16_t L_36 = m4534(__this, L_35, &m4534_MI);
		if ((((int32_t)L_34) == ((int32_t)L_36)))
		{
			goto IL_017a;
		}
	}
	{
		if ((((int32_t)V_0) >= ((int32_t)p2)))
		{
			goto IL_01ca;
		}
	}
	{
		int32_t L_37 = (__this->f1);
		uint16_t L_38 = m2385(p0, ((int32_t)(V_0+L_37)), &m2385_MI);
		int32_t L_39 = m4533(__this, L_38, &m4533_MI);
		V_0 = ((int32_t)(V_0+L_39));
		goto IL_01cf;
	}

IL_01ca:
	{
		goto IL_01d6;
	}

IL_01cf:
	{
		if ((((int32_t)V_0) <= ((int32_t)p2)))
		{
			goto IL_016c;
		}
	}

IL_01d6:
	{
		return (-1);
	}
}
 void m4532 (t1125 * __this, MethodInfo* method){
	bool V_0 = false;
	uint8_t V_1 = 0x0;
	int32_t V_2 = 0;
	uint16_t V_3 = 0x0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	uint16_t V_6 = 0x0;
	t11* G_B13_0 = {0};
	t11* G_B12_0 = {0};
	int32_t G_B14_0 = 0;
	t11* G_B14_1 = {0};
	{
		int32_t L_0 = (__this->f1);
		V_0 = ((((int32_t)L_0) > ((int32_t)((int32_t)254)))? 1 : 0);
		V_1 = 0;
		V_2 = 0;
		goto IL_0045;
	}

IL_0017:
	{
		t11* L_1 = (__this->f0);
		uint16_t L_2 = m2385(L_1, V_2, &m2385_MI);
		V_3 = L_2;
		if ((((int32_t)V_3) > ((int32_t)((int32_t)255))))
		{
			goto IL_003f;
		}
	}
	{
		if ((((int32_t)(((uint8_t)V_3))) <= ((int32_t)V_1)))
		{
			goto IL_003a;
		}
	}
	{
		V_1 = (((uint8_t)V_3));
	}

IL_003a:
	{
		goto IL_0041;
	}

IL_003f:
	{
		V_0 = 1;
	}

IL_0041:
	{
		V_2 = ((int32_t)(V_2+1));
	}

IL_0045:
	{
		int32_t L_3 = (__this->f1);
		if ((((int32_t)V_2) < ((int32_t)L_3)))
		{
			goto IL_0017;
		}
	}
	{
		__this->f4 = ((t1044*)SZArrayNew(InitializedTypeInfo(&t1044_TI), ((int32_t)(V_1+1))));
		if (!V_0)
		{
			goto IL_0070;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t984_TI));
		t984 * L_4 = (t984 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t984_TI));
		m5003(L_4, &m5003_MI);
		__this->f5 = L_4;
	}

IL_0070:
	{
		V_4 = 0;
		int32_t L_5 = (__this->f1);
		V_5 = L_5;
		goto IL_0102;
	}

IL_0080:
	{
		t11* L_6 = (__this->f0);
		bool L_7 = (__this->f3);
		G_B12_0 = L_6;
		if (L_7)
		{
			G_B13_0 = L_6;
			goto IL_0098;
		}
	}
	{
		G_B14_0 = V_4;
		G_B14_1 = G_B12_0;
		goto IL_009c;
	}

IL_0098:
	{
		G_B14_0 = ((int32_t)(V_5-1));
		G_B14_1 = G_B13_0;
	}

IL_009c:
	{
		uint16_t L_8 = m2385(G_B14_1, G_B14_0, &m2385_MI);
		V_6 = L_8;
		t1044* L_9 = (__this->f4);
		if ((((int32_t)V_6) >= ((int32_t)(((int32_t)(((t107 *)L_9)->max_length))))))
		{
			goto IL_00dd;
		}
	}
	{
		if ((((int32_t)V_5) >= ((int32_t)((int32_t)255))))
		{
			goto IL_00cf;
		}
	}
	{
		t1044* L_10 = (__this->f4);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_10, V_6)) = (uint8_t)(((uint8_t)V_5));
		goto IL_00f6;
	}

IL_00cf:
	{
		t1044* L_11 = (__this->f4);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_11, V_6)) = (uint8_t)((int32_t)255);
	}

IL_00dd:
	{
		t984 * L_12 = (__this->f5);
		uint16_t L_13 = V_6;
		t5 * L_14 = Box(InitializedTypeInfo(&t144_TI), &L_13);
		int32_t L_15 = V_5;
		t5 * L_16 = Box(InitializedTypeInfo(&t110_TI), &L_15);
		VirtActionInvoker2< t5 *, t5 * >::Invoke(&m5010_MI, L_12, L_14, L_16);
	}

IL_00f6:
	{
		V_4 = ((int32_t)(V_4+1));
		V_5 = ((int32_t)(V_5-1));
	}

IL_0102:
	{
		int32_t L_17 = (__this->f1);
		if ((((int32_t)V_4) < ((int32_t)L_17)))
		{
			goto IL_0080;
		}
	}
	{
		return;
	}
}
 int32_t m4533 (t1125 * __this, uint16_t p0, MethodInfo* method){
	int32_t V_0 = 0;
	t5 * V_1 = {0};
	int32_t G_B15_0 = 0;
	{
		t1044* L_0 = (__this->f4);
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		return 1;
	}

IL_000d:
	{
		uint16_t L_1 = m4534(__this, p0, &m4534_MI);
		p0 = L_1;
		t1044* L_2 = (__this->f4);
		if ((((int32_t)p0) >= ((int32_t)(((int32_t)(((t107 *)L_2)->max_length))))))
		{
			goto IL_004e;
		}
	}
	{
		t1044* L_3 = (__this->f4);
		uint16_t L_4 = p0;
		V_0 = (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_3, L_4));
		if (V_0)
		{
			goto IL_003c;
		}
	}
	{
		int32_t L_5 = (__this->f1);
		return ((int32_t)(L_5+1));
	}

IL_003c:
	{
		if ((((int32_t)V_0) == ((int32_t)((int32_t)255))))
		{
			goto IL_0049;
		}
	}
	{
		return V_0;
	}

IL_0049:
	{
		goto IL_0062;
	}

IL_004e:
	{
		if ((((int32_t)p0) >= ((int32_t)((int32_t)255))))
		{
			goto IL_0062;
		}
	}
	{
		int32_t L_6 = (__this->f1);
		return ((int32_t)(L_6+1));
	}

IL_0062:
	{
		t984 * L_7 = (__this->f5);
		if (L_7)
		{
			goto IL_0076;
		}
	}
	{
		int32_t L_8 = (__this->f1);
		return ((int32_t)(L_8+1));
	}

IL_0076:
	{
		t984 * L_9 = (__this->f5);
		uint16_t L_10 = p0;
		t5 * L_11 = Box(InitializedTypeInfo(&t144_TI), &L_10);
		t5 * L_12 = (t5 *)VirtFuncInvoker1< t5 *, t5 * >::Invoke(&m4782_MI, L_9, L_11);
		V_1 = L_12;
		if (!V_1)
		{
			goto IL_0099;
		}
	}
	{
		G_B15_0 = ((*(int32_t*)((int32_t*)UnBox (V_1, InitializedTypeInfo(&t110_TI)))));
		goto IL_00a1;
	}

IL_0099:
	{
		int32_t L_13 = (__this->f1);
		G_B15_0 = ((int32_t)(L_13+1));
	}

IL_00a1:
	{
		return G_B15_0;
	}
}
 uint16_t m4534 (t1125 * __this, uint16_t p0, MethodInfo* method){
	uint16_t G_B3_0 = 0x0;
	{
		bool L_0 = (__this->f2);
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		G_B3_0 = p0;
		goto IL_0017;
	}

IL_0011:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t144_TI));
		uint16_t L_1 = m2457(NULL, p0, &m2457_MI);
		G_B3_0 = L_1;
	}

IL_0017:
	{
		return G_B3_0;
	}
}
// Metadata Definition System.Text.RegularExpressions.QuickSearch
extern Il2CppType t11_0_0_1;
FieldInfo t1125_f0_FieldInfo = 
{
	"str", &t11_0_0_1, &t1125_TI, offsetof(t1125, f0), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t1125_f1_FieldInfo = 
{
	"len", &t110_0_0_1, &t1125_TI, offsetof(t1125, f1), &EmptyCustomAttributesCache};
extern Il2CppType t108_0_0_1;
FieldInfo t1125_f2_FieldInfo = 
{
	"ignore", &t108_0_0_1, &t1125_TI, offsetof(t1125, f2), &EmptyCustomAttributesCache};
extern Il2CppType t108_0_0_1;
FieldInfo t1125_f3_FieldInfo = 
{
	"reverse", &t108_0_0_1, &t1125_TI, offsetof(t1125, f3), &EmptyCustomAttributesCache};
extern Il2CppType t1044_0_0_1;
FieldInfo t1125_f4_FieldInfo = 
{
	"shift", &t1044_0_0_1, &t1125_TI, offsetof(t1125, f4), &EmptyCustomAttributesCache};
extern Il2CppType t984_0_0_1;
FieldInfo t1125_f5_FieldInfo = 
{
	"shiftExtended", &t984_0_0_1, &t1125_TI, offsetof(t1125, f5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_49;
FieldInfo t1125_f6_FieldInfo = 
{
	"THRESHOLD", &t110_0_0_49, &t1125_TI, offsetof(t1125_SFs, f6), &EmptyCustomAttributesCache};
static FieldInfo* t1125_FIs[] =
{
	&t1125_f0_FieldInfo,
	&t1125_f1_FieldInfo,
	&t1125_f2_FieldInfo,
	&t1125_f3_FieldInfo,
	&t1125_f4_FieldInfo,
	&t1125_f5_FieldInfo,
	&t1125_f6_FieldInfo,
	NULL
};
static PropertyInfo t1125____Length_PropertyInfo = 
{
	&t1125_TI, "Length", &m4530_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1125_PIs[] =
{
	&t1125____Length_PropertyInfo,
	NULL
};
extern Il2CppType t11_0_0_0;
extern Il2CppType t108_0_0_0;
extern Il2CppType t108_0_0_0;
static ParameterInfo t1125_m4528_ParameterInfos[] = 
{
	{"str", 0, 134218436, &EmptyCustomAttributesCache, &t11_0_0_0},
	{"ignore", 1, 134218437, &EmptyCustomAttributesCache, &t108_0_0_0},
	{"reverse", 2, 134218438, &EmptyCustomAttributesCache, &t108_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t111_t111 (MethodInfo* method, void* obj, void** args);
MethodInfo m4528_MI = 
{
	".ctor", (methodPointerType)&m4528, &t1125_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t111_t111, t1125_m4528_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 3, false, false, 763, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m4529_MI = 
{
	".cctor", (methodPointerType)&m4529, &t1125_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 764, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m4530_MI = 
{
	"get_Length", (methodPointerType)&m4530, &t1125_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 765, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t11_0_0_0;
extern Il2CppType t110_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t1125_m4531_ParameterInfos[] = 
{
	{"text", 0, 134218439, &EmptyCustomAttributesCache, &t11_0_0_0},
	{"start", 1, 134218440, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"end", 2, 134218441, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5_t110_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m4531_MI = 
{
	"Search", (methodPointerType)&m4531, &t1125_TI, &t110_0_0_0, RuntimeInvoker_t110_t5_t110_t110, t1125_m4531_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 3, false, false, 766, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m4532_MI = 
{
	"SetupShiftTable", (methodPointerType)&m4532, &t1125_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 767, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t144_0_0_0;
static ParameterInfo t1125_m4533_ParameterInfos[] = 
{
	{"c", 0, 134218442, &EmptyCustomAttributesCache, &t144_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t150 (MethodInfo* method, void* obj, void** args);
MethodInfo m4533_MI = 
{
	"GetShiftDistance", (methodPointerType)&m4533, &t1125_TI, &t110_0_0_0, RuntimeInvoker_t110_t150, t1125_m4533_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 768, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t144_0_0_0;
static ParameterInfo t1125_m4534_ParameterInfos[] = 
{
	{"c", 0, 134218443, &EmptyCustomAttributesCache, &t144_0_0_0},
};
extern Il2CppType t144_0_0_0;
extern void* RuntimeInvoker_t144_t150 (MethodInfo* method, void* obj, void** args);
MethodInfo m4534_MI = 
{
	"GetChar", (methodPointerType)&m4534, &t1125_TI, &t144_0_0_0, RuntimeInvoker_t144_t150, t1125_m4534_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 769, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1125_MIs[] =
{
	&m4528_MI,
	&m4529_MI,
	&m4530_MI,
	&m4531_MI,
	&m4532_MI,
	&m4533_MI,
	&m4534_MI,
	NULL
};
static MethodInfo* t1125_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType t1125_0_0_0;
extern Il2CppType t1125_1_0_0;
struct t1125;
TypeInfo t1125_TI = 
{
	&g_System_dll_Image, NULL, "QuickSearch", "System.Text.RegularExpressions", t1125_MIs, t1125_PIs, t1125_FIs, NULL, &t5_TI, NULL, NULL, &t1125_TI, NULL, t1125_VT, &EmptyCustomAttributesCache, &t1125_TI, &t1125_0_0_0, &t1125_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1125), 0, -1, sizeof(t1125_SFs), 0, -1, 1048576, 0, false, false, false, false, false, false, false, false, false, true, false, false, 7, 1, 7, 0, 0, 4, 0, 0};
#include "t1138.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1138_TI;
#include "t1138MD.h"

#include "t1063MD.h"
extern MethodInfo m5060_MI;
extern MethodInfo m5061_MI;
extern MethodInfo m4949_MI;
extern MethodInfo m5062_MI;


extern MethodInfo m4535_MI;
 void m4535 (t1138 * __this, MethodInfo* method){
	{
		m4949(__this, &m4949_MI);
		return;
	}
}
extern MethodInfo m4536_MI;
 void m4536 (t1138 * __this, t1136 * p0, MethodInfo* method){
	{
		t5 * L_0 = m5060(__this, &m5060_MI);
		InterfaceFuncInvoker1< int32_t, t5 * >::Invoke(&m5062_MI, L_0, p0);
		return;
	}
}
extern MethodInfo m4537_MI;
 t1136 * m4537 (t1138 * __this, int32_t p0, MethodInfo* method){
	{
		t5 * L_0 = m5060(__this, &m5060_MI);
		t5 * L_1 = (t5 *)InterfaceFuncInvoker1< t5 *, int32_t >::Invoke(&m5055_MI, L_0, p0);
		return ((t1136 *)Castclass(L_1, InitializedTypeInfo(&t1136_TI)));
	}
}
extern MethodInfo m4538_MI;
 void m4538 (t1138 * __this, int32_t p0, t1136 * p1, MethodInfo* method){
	{
		t5 * L_0 = m5060(__this, &m5060_MI);
		InterfaceActionInvoker2< int32_t, t5 * >::Invoke(&m5061_MI, L_0, p0, p1);
		return;
	}
}
extern MethodInfo m4539_MI;
 void m4539 (t1138 * __this, t5 * p0, MethodInfo* method){
	{
		return;
	}
}
// Metadata Definition System.Text.RegularExpressions.Syntax.ExpressionCollection
static PropertyInfo t1138____Item_PropertyInfo = 
{
	&t1138_TI, "Item", &m4537_MI, &m4538_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1138_PIs[] =
{
	&t1138____Item_PropertyInfo,
	NULL
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m4535_MI = 
{
	".ctor", (methodPointerType)&m4535, &t1138_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 770, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1136_0_0_0;
extern Il2CppType t1136_0_0_0;
static ParameterInfo t1138_m4536_ParameterInfos[] = 
{
	{"e", 0, 134218444, &EmptyCustomAttributesCache, &t1136_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m4536_MI = 
{
	"Add", (methodPointerType)&m4536, &t1138_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t1138_m4536_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 771, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t110_0_0_0;
static ParameterInfo t1138_m4537_ParameterInfos[] = 
{
	{"i", 0, 134218445, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t1136_0_0_0;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m4537_MI = 
{
	"get_Item", (methodPointerType)&m4537, &t1138_TI, &t1136_0_0_0, RuntimeInvoker_t5_t110, t1138_m4537_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, false, 772, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t110_0_0_0;
extern Il2CppType t1136_0_0_0;
static ParameterInfo t1138_m4538_ParameterInfos[] = 
{
	{"i", 0, 134218446, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"value", 1, 134218447, &EmptyCustomAttributesCache, &t1136_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m4538_MI = 
{
	"set_Item", (methodPointerType)&m4538, &t1138_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t1138_m4538_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 2, false, false, 773, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t5_0_0_0;
static ParameterInfo t1138_m4539_ParameterInfos[] = 
{
	{"o", 0, 134218448, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m4539_MI = 
{
	"OnValidate", (methodPointerType)&m4539, &t1138_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t1138_m4539_ParameterInfos, &EmptyCustomAttributesCache, 196, 0, 28, 1, false, false, 774, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1138_MIs[] =
{
	&m4535_MI,
	&m4536_MI,
	&m4537_MI,
	&m4538_MI,
	&m4539_MI,
	NULL
};
extern MethodInfo m4924_MI;
extern MethodInfo m4891_MI;
extern MethodInfo m4925_MI;
extern MethodInfo m4926_MI;
extern MethodInfo m4927_MI;
extern MethodInfo m4928_MI;
extern MethodInfo m4929_MI;
extern MethodInfo m4930_MI;
extern MethodInfo m4931_MI;
extern MethodInfo m4932_MI;
extern MethodInfo m4933_MI;
extern MethodInfo m4934_MI;
extern MethodInfo m4935_MI;
extern MethodInfo m4936_MI;
extern MethodInfo m4937_MI;
extern MethodInfo m4938_MI;
extern MethodInfo m4939_MI;
extern MethodInfo m4940_MI;
extern MethodInfo m4941_MI;
extern MethodInfo m4942_MI;
extern MethodInfo m4943_MI;
extern MethodInfo m4944_MI;
extern MethodInfo m4945_MI;
extern MethodInfo m4946_MI;
static MethodInfo* t1138_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m4924_MI,
	&m4891_MI,
	&m4925_MI,
	&m4926_MI,
	&m4927_MI,
	&m4928_MI,
	&m4929_MI,
	&m4930_MI,
	&m4931_MI,
	&m4932_MI,
	&m4933_MI,
	&m4934_MI,
	&m4935_MI,
	&m4936_MI,
	&m4937_MI,
	&m4938_MI,
	&m4939_MI,
	&m4940_MI,
	&m4941_MI,
	&m4942_MI,
	&m4943_MI,
	&m4944_MI,
	&m4945_MI,
	&m4946_MI,
	&m4539_MI,
};
static Il2CppInterfaceOffsetPair t1138_IOs[] = 
{
	{ &t739_TI, 4},
	{ &t811_TI, 5},
	{ &t1129_TI, 9},
};
void t1138_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t172 * tmp;
		tmp = (t172 *)il2cpp_codegen_object_new (&t172_TI);
		m657(tmp, il2cpp_codegen_string_new_wrapper("Item"), &m657_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1138__CustomAttributeCache = {
1,
NULL,
&t1138_CustomAttributesCacheGenerator
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType t1138_0_0_0;
extern Il2CppType t1138_1_0_0;
extern TypeInfo t1063_TI;
struct t1138;
extern CustomAttributesCache t1138__CustomAttributeCache;
TypeInfo t1138_TI = 
{
	&g_System_dll_Image, NULL, "ExpressionCollection", "System.Text.RegularExpressions.Syntax", t1138_MIs, t1138_PIs, NULL, NULL, &t1063_TI, NULL, NULL, &t1138_TI, NULL, t1138_VT, &t1138__CustomAttributeCache, &t1138_TI, &t1138_0_0_0, &t1138_1_0_0, t1138_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1138), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 29, 0, 3};
#ifndef _MSC_VER
#else
#endif
#include "t1136MD.h"

#include "t1140.h"
extern TypeInfo t1140_TI;
#include "t1140MD.h"
extern MethodInfo m5063_MI;
extern MethodInfo m4541_MI;
extern MethodInfo m4631_MI;


extern MethodInfo m4540_MI;
 void m4540 (t1136 * __this, MethodInfo* method){
	{
		m460(__this, &m460_MI);
		return;
	}
}
 int32_t m4541 (t1136 * __this, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		VirtActionInvoker2< int32_t*, int32_t* >::Invoke(&m5063_MI, __this, (&V_0), (&V_1));
		if ((((uint32_t)V_0) != ((uint32_t)V_1)))
		{
			goto IL_0013;
		}
	}
	{
		return V_0;
	}

IL_0013:
	{
		return (-1);
	}
}
extern MethodInfo m4542_MI;
 t1140 * m4542 (t1136 * __this, bool p0, MethodInfo* method){
	{
		int32_t L_0 = m4541(__this, &m4541_MI);
		t1140 * L_1 = (t1140 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1140_TI));
		m4631(L_1, __this, L_0, &m4631_MI);
		return L_1;
	}
}
// Metadata Definition System.Text.RegularExpressions.Syntax.Expression
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m4540_MI = 
{
	".ctor", (methodPointerType)&m4540, &t1136_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, false, 775, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1139_0_0_0;
extern Il2CppType t108_0_0_0;
static ParameterInfo t1136_m5064_ParameterInfos[] = 
{
	{"cmp", 0, 134218449, &EmptyCustomAttributesCache, &t1139_0_0_0},
	{"reverse", 1, 134218450, &EmptyCustomAttributesCache, &t108_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t111 (MethodInfo* method, void* obj, void** args);
MethodInfo m5064_MI = 
{
	"Compile", NULL, &t1136_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t111, t1136_m5064_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 4, 2, false, false, 776, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t110_1_0_2;
extern Il2CppType t110_1_0_2;
static ParameterInfo t1136_m5063_ParameterInfos[] = 
{
	{"min", 0, 134218451, &EmptyCustomAttributesCache, &t110_1_0_2},
	{"max", 1, 134218452, &EmptyCustomAttributesCache, &t110_1_0_2},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t533_t533 (MethodInfo* method, void* obj, void** args);
MethodInfo m5063_MI = 
{
	"GetWidth", NULL, &t1136_TI, &t109_0_0_0, RuntimeInvoker_t109_t533_t533, t1136_m5063_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 2, false, false, 777, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m4541_MI = 
{
	"GetFixedWidth", (methodPointerType)&m4541, &t1136_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, false, 778, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t108_0_0_0;
static ParameterInfo t1136_m4542_ParameterInfos[] = 
{
	{"reverse", 0, 134218453, &EmptyCustomAttributesCache, &t108_0_0_0},
};
extern Il2CppType t1140_0_0_0;
extern void* RuntimeInvoker_t5_t111 (MethodInfo* method, void* obj, void** args);
MethodInfo m4542_MI = 
{
	"GetAnchorInfo", (methodPointerType)&m4542, &t1136_TI, &t1140_0_0_0, RuntimeInvoker_t5_t111, t1136_m4542_ParameterInfos, &EmptyCustomAttributesCache, 454, 0, 6, 1, false, false, 779, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
MethodInfo m5065_MI = 
{
	"IsComplex", NULL, &t1136_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 1478, 0, 7, 0, false, false, 780, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1136_MIs[] =
{
	&m4540_MI,
	&m5064_MI,
	&m5063_MI,
	&m4541_MI,
	&m4542_MI,
	&m5065_MI,
	NULL
};
static MethodInfo* t1136_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	NULL,
	NULL,
	&m4542_MI,
	NULL,
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType t1136_1_0_0;
struct t1136;
TypeInfo t1136_TI = 
{
	&g_System_dll_Image, NULL, "Expression", "System.Text.RegularExpressions.Syntax", t1136_MIs, NULL, NULL, NULL, &t5_TI, NULL, NULL, &t1136_TI, NULL, t1136_VT, &EmptyCustomAttributesCache, &t1136_TI, &t1136_0_0_0, &t1136_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1136), 0, -1, 0, 0, -1, 1048704, 0, false, false, false, false, false, false, false, false, false, false, false, false, 6, 0, 0, 0, 0, 8, 0, 0};
#include "t1141.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1141_TI;
#include "t1141MD.h"

#include "t1063.h"
extern MethodInfo m4544_MI;
extern MethodInfo m5065_MI;


extern MethodInfo m4543_MI;
 void m4543 (t1141 * __this, MethodInfo* method){
	{
		m4540(__this, &m4540_MI);
		t1138 * L_0 = (t1138 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1138_TI));
		m4535(L_0, &m4535_MI);
		__this->f0 = L_0;
		return;
	}
}
 t1138 * m4544 (t1141 * __this, MethodInfo* method){
	{
		t1138 * L_0 = (__this->f0);
		return L_0;
	}
}
extern MethodInfo m4545_MI;
 void m4545 (t1141 * __this, int32_t* p0, int32_t* p1, int32_t p2, MethodInfo* method){
	bool V_0 = false;
	int32_t V_1 = 0;
	t1136 * V_2 = {0};
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		*((int32_t*)(p0)) = (int32_t)((int32_t)2147483647);
		*((int32_t*)(p1)) = (int32_t)0;
		V_0 = 1;
		V_1 = 0;
		goto IL_0053;
	}

IL_0013:
	{
		t1138 * L_0 = m4544(__this, &m4544_MI);
		t1136 * L_1 = m4537(L_0, V_1, &m4537_MI);
		V_2 = L_1;
		if (V_2)
		{
			goto IL_002b;
		}
	}
	{
		goto IL_004f;
	}

IL_002b:
	{
		V_0 = 0;
		VirtActionInvoker2< int32_t*, int32_t* >::Invoke(&m5063_MI, V_2, (&V_3), (&V_4));
		if ((((int32_t)V_3) >= ((int32_t)(*((int32_t*)p0)))))
		{
			goto IL_0042;
		}
	}
	{
		*((int32_t*)(p0)) = (int32_t)V_3;
	}

IL_0042:
	{
		if ((((int32_t)V_4) <= ((int32_t)(*((int32_t*)p1)))))
		{
			goto IL_004f;
		}
	}
	{
		*((int32_t*)(p1)) = (int32_t)V_4;
	}

IL_004f:
	{
		V_1 = ((int32_t)(V_1+1));
	}

IL_0053:
	{
		if ((((int32_t)V_1) < ((int32_t)p2)))
		{
			goto IL_0013;
		}
	}
	{
		if (!V_0)
		{
			goto IL_006a;
		}
	}
	{
		int32_t L_2 = 0;
		V_5 = L_2;
		*((int32_t*)(p1)) = (int32_t)L_2;
		*((int32_t*)(p0)) = (int32_t)V_5;
	}

IL_006a:
	{
		return;
	}
}
extern MethodInfo m4546_MI;
 bool m4546 (t1141 * __this, MethodInfo* method){
	t1136 * V_0 = {0};
	t5 * V_1 = {0};
	bool V_2 = false;
	t5 * V_3 = {0};
	int32_t leaveInstructions[1] = {0};
	t142 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t142 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	{
		t1138 * L_0 = m4544(__this, &m4544_MI);
		t5 * L_1 = (t5 *)VirtFuncInvoker0< t5 * >::Invoke(&m4924_MI, L_0);
		V_1 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_002f;
		}

IL_0011:
		{
			t5 * L_2 = (t5 *)InterfaceFuncInvoker0< t5 * >::Invoke(&m4765_MI, V_1);
			V_0 = ((t1136 *)Castclass(L_2, InitializedTypeInfo(&t1136_TI)));
			bool L_3 = (bool)VirtFuncInvoker0< bool >::Invoke(&m5065_MI, V_0);
			if (!L_3)
			{
				goto IL_002f;
			}
		}

IL_0028:
		{
			V_2 = 1;
			// IL_002a: leave IL_005e
			leaveInstructions[0] = 0x5E; // 1
			THROW_SENTINEL(IL_005e);
			// finally target depth: 1
		}

IL_002f:
		{
			bool L_4 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&m747_MI, V_1);
			if (L_4)
			{
				goto IL_0011;
			}
		}

IL_003a:
		{
			// IL_003a: leave IL_0051
			leaveInstructions[0] = 0x51; // 1
			THROW_SENTINEL(IL_0051);
			// finally target depth: 1
		}
	} // end try (depth: 1)
	catch(Il2CppFinallySentinel& e)
	{
		goto IL_003f;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t142 *)e.ex;
		goto IL_003f;
	}

IL_003f:
	{ // begin finally (depth: 1)
		{
			V_3 = ((t5 *)IsInst(V_1, InitializedTypeInfo(&t132_TI)));
			if (V_3)
			{
				goto IL_004a;
			}
		}

IL_0049:
		{
			// finally node depth: 1
			switch (leaveInstructions[0])
			{
				case 0x5E:
					goto IL_005e;
				case 0x51:
					goto IL_0051;
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

IL_004a:
		{
			InterfaceActionInvoker0::Invoke(&m516_MI, V_3);
			// finally node depth: 1
			switch (leaveInstructions[0])
			{
				case 0x5E:
					goto IL_005e;
				case 0x51:
					goto IL_0051;
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

IL_0051:
	{
		int32_t L_5 = m4541(__this, &m4541_MI);
		return ((((int32_t)((((int32_t)L_5) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_005e:
	{
		return V_2;
	}
}
// Metadata Definition System.Text.RegularExpressions.Syntax.CompositeExpression
extern Il2CppType t1138_0_0_1;
FieldInfo t1141_f0_FieldInfo = 
{
	"expressions", &t1138_0_0_1, &t1141_TI, offsetof(t1141, f0), &EmptyCustomAttributesCache};
static FieldInfo* t1141_FIs[] =
{
	&t1141_f0_FieldInfo,
	NULL
};
static PropertyInfo t1141____Expressions_PropertyInfo = 
{
	&t1141_TI, "Expressions", &m4544_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1141_PIs[] =
{
	&t1141____Expressions_PropertyInfo,
	NULL
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m4543_MI = 
{
	".ctor", (methodPointerType)&m4543, &t1141_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 781, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1138_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m4544_MI = 
{
	"get_Expressions", (methodPointerType)&m4544, &t1141_TI, &t1138_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2180, 0, 255, 0, false, false, 782, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t110_1_0_2;
extern Il2CppType t110_1_0_2;
extern Il2CppType t110_0_0_0;
static ParameterInfo t1141_m4545_ParameterInfos[] = 
{
	{"min", 0, 134218454, &EmptyCustomAttributesCache, &t110_1_0_2},
	{"max", 1, 134218455, &EmptyCustomAttributesCache, &t110_1_0_2},
	{"count", 2, 134218456, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t533_t533_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m4545_MI = 
{
	"GetWidth", (methodPointerType)&m4545, &t1141_TI, &t109_0_0_0, RuntimeInvoker_t109_t533_t533_t110, t1141_m4545_ParameterInfos, &EmptyCustomAttributesCache, 132, 0, 255, 3, false, false, 783, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
MethodInfo m4546_MI = 
{
	"IsComplex", (methodPointerType)&m4546, &t1141_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 198, 0, 7, 0, false, false, 784, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1141_MIs[] =
{
	&m4543_MI,
	&m4544_MI,
	&m4545_MI,
	&m4546_MI,
	NULL
};
static MethodInfo* t1141_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	NULL,
	NULL,
	&m4542_MI,
	&m4546_MI,
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType t1141_0_0_0;
extern Il2CppType t1141_1_0_0;
struct t1141;
TypeInfo t1141_TI = 
{
	&g_System_dll_Image, NULL, "CompositeExpression", "System.Text.RegularExpressions.Syntax", t1141_MIs, t1141_PIs, t1141_FIs, NULL, &t1136_TI, NULL, NULL, &t1141_TI, NULL, t1141_VT, &EmptyCustomAttributesCache, &t1141_TI, &t1141_0_0_0, &t1141_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1141), 0, -1, 0, 0, -1, 1048704, 0, false, false, false, false, false, false, false, false, false, false, false, false, 4, 1, 1, 0, 0, 8, 0, 0};
#ifndef _MSC_VER
#else
#endif

#include "t448.h"
#include "t1223.h"
extern TypeInfo t448_TI;
extern TypeInfo t1224_TI;
extern TypeInfo t1223_TI;
#include "t448MD.h"
#include "t1224MD.h"
#include "t1223MD.h"
extern MethodInfo m5064_MI;
extern MethodInfo m4643_MI;
extern MethodInfo m4634_MI;
extern MethodInfo m4641_MI;
extern MethodInfo m4633_MI;
extern MethodInfo m4642_MI;
extern MethodInfo m4644_MI;
extern MethodInfo m4637_MI;
extern MethodInfo m4635_MI;
extern MethodInfo m4640_MI;
extern MethodInfo m1971_MI;
extern MethodInfo m4639_MI;
extern MethodInfo m3574_MI;
extern MethodInfo m4978_MI;
extern MethodInfo m1975_MI;
extern MethodInfo m4632_MI;
extern MethodInfo m5066_MI;
extern MethodInfo m5067_MI;


 void m4547 (t1134 * __this, MethodInfo* method){
	{
		m4543(__this, &m4543_MI);
		return;
	}
}
 void m4548 (t1134 * __this, t1136 * p0, MethodInfo* method){
	{
		t1138 * L_0 = m4544(__this, &m4544_MI);
		m4536(L_0, p0, &m4536_MI);
		return;
	}
}
extern MethodInfo m4549_MI;
 void m4549 (t1134 * __this, t5 * p0, bool p1, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	t1136 * V_2 = {0};
	{
		t1138 * L_0 = m4544(__this, &m4544_MI);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m4891_MI, L_0);
		V_0 = L_1;
		V_1 = 0;
		goto IL_0048;
	}

IL_0013:
	{
		if (!p1)
		{
			goto IL_002f;
		}
	}
	{
		t1138 * L_2 = m4544(__this, &m4544_MI);
		t1136 * L_3 = m4537(L_2, ((int32_t)(((int32_t)(V_0-V_1))-1)), &m4537_MI);
		V_2 = L_3;
		goto IL_003c;
	}

IL_002f:
	{
		t1138 * L_4 = m4544(__this, &m4544_MI);
		t1136 * L_5 = m4537(L_4, V_1, &m4537_MI);
		V_2 = L_5;
	}

IL_003c:
	{
		VirtActionInvoker2< t5 *, bool >::Invoke(&m5064_MI, V_2, p0, p1);
		V_1 = ((int32_t)(V_1+1));
	}

IL_0048:
	{
		if ((((int32_t)V_1) < ((int32_t)V_0)))
		{
			goto IL_0013;
		}
	}
	{
		return;
	}
}
extern MethodInfo m4550_MI;
 void m4550 (t1134 * __this, int32_t* p0, int32_t* p1, MethodInfo* method){
	t1136 * V_0 = {0};
	t5 * V_1 = {0};
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	t5 * V_4 = {0};
	int32_t leaveInstructions[1] = {0};
	t142 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t142 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	{
		*((int32_t*)(p0)) = (int32_t)0;
		*((int32_t*)(p1)) = (int32_t)0;
		t1138 * L_0 = m4544(__this, &m4544_MI);
		t5 * L_1 = (t5 *)VirtFuncInvoker0< t5 * >::Invoke(&m4924_MI, L_0);
		V_1 = L_1;
	}

IL_0012:
	try
	{ // begin try (depth: 1)
		{
			goto IL_005c;
		}

IL_0017:
		{
			t5 * L_2 = (t5 *)InterfaceFuncInvoker0< t5 * >::Invoke(&m4765_MI, V_1);
			V_0 = ((t1136 *)Castclass(L_2, InitializedTypeInfo(&t1136_TI)));
			VirtActionInvoker2< int32_t*, int32_t* >::Invoke(&m5063_MI, V_0, (&V_2), (&V_3));
			*((int32_t*)(p0)) = (int32_t)((int32_t)((*((int32_t*)p0))+V_2));
			if ((((int32_t)(*((int32_t*)p1))) == ((int32_t)((int32_t)2147483647))))
			{
				goto IL_004a;
			}
		}

IL_003f:
		{
			if ((((uint32_t)V_3) != ((uint32_t)((int32_t)2147483647))))
			{
				goto IL_0056;
			}
		}

IL_004a:
		{
			*((int32_t*)(p1)) = (int32_t)((int32_t)2147483647);
			goto IL_005c;
		}

IL_0056:
		{
			*((int32_t*)(p1)) = (int32_t)((int32_t)((*((int32_t*)p1))+V_3));
		}

IL_005c:
		{
			bool L_3 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&m747_MI, V_1);
			if (L_3)
			{
				goto IL_0017;
			}
		}

IL_0067:
		{
			// IL_0067: leave IL_0081
			leaveInstructions[0] = 0x81; // 1
			THROW_SENTINEL(IL_0081);
			// finally target depth: 1
		}
	} // end try (depth: 1)
	catch(Il2CppFinallySentinel& e)
	{
		goto IL_006c;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t142 *)e.ex;
		goto IL_006c;
	}

IL_006c:
	{ // begin finally (depth: 1)
		{
			V_4 = ((t5 *)IsInst(V_1, InitializedTypeInfo(&t132_TI)));
			if (V_4)
			{
				goto IL_0079;
			}
		}

IL_0078:
		{
			// finally node depth: 1
			switch (leaveInstructions[0])
			{
				case 0x81:
					goto IL_0081;
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

IL_0079:
		{
			InterfaceActionInvoker0::Invoke(&m516_MI, V_4);
			// finally node depth: 1
			switch (leaveInstructions[0])
			{
				case 0x81:
					goto IL_0081;
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

IL_0081:
	{
		return;
	}
}
extern MethodInfo m4551_MI;
 t1140 * m4551 (t1134 * __this, bool p0, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	t996 * V_2 = {0};
	t1131 * V_3 = {0};
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	t1136 * V_6 = {0};
	t1140 * V_7 = {0};
	t1127  V_8 = {0};
	t1127  V_9 = {0};
	t5 * V_10 = {0};
	bool V_11 = false;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	t1140 * V_14 = {0};
	t448 * V_15 = {0};
	int32_t V_16 = 0;
	t1140 * V_17 = {0};
	t5 * V_18 = {0};
	int32_t leaveInstructions[1] = {0};
	t142 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t142 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	{
		int32_t L_0 = m4541(__this, &m4541_MI);
		V_1 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t996_TI));
		t996 * L_1 = (t996 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t996_TI));
		m4773(L_1, &m4773_MI);
		V_2 = L_1;
		t1131 * L_2 = (t1131 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1131_TI));
		m4486(L_2, &m4486_MI);
		V_3 = L_2;
		V_0 = 0;
		t1138 * L_3 = m4544(__this, &m4544_MI);
		int32_t L_4 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m4891_MI, L_3);
		V_4 = L_4;
		V_5 = 0;
		goto IL_00ca;
	}

IL_002a:
	{
		if (!p0)
		{
			goto IL_0049;
		}
	}
	{
		t1138 * L_5 = m4544(__this, &m4544_MI);
		t1136 * L_6 = m4537(L_5, ((int32_t)(((int32_t)(V_4-V_5))-1)), &m4537_MI);
		V_6 = L_6;
		goto IL_0058;
	}

IL_0049:
	{
		t1138 * L_7 = m4544(__this, &m4544_MI);
		t1136 * L_8 = m4537(L_7, V_5, &m4537_MI);
		V_6 = L_8;
	}

IL_0058:
	{
		t1140 * L_9 = (t1140 *)VirtFuncInvoker1< t1140 *, bool >::Invoke(&m4542_MI, V_6, p0);
		V_7 = L_9;
		VirtFuncInvoker1< int32_t, t5 * >::Invoke(&m4784_MI, V_2, V_7);
		bool L_10 = m4643(V_7, &m4643_MI);
		if (!L_10)
		{
			goto IL_008f;
		}
	}
	{
		int32_t L_11 = m4634(V_7, &m4634_MI);
		uint16_t L_12 = m4641(V_7, &m4641_MI);
		t1140 * L_13 = (t1140 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1140_TI));
		m4633(L_13, __this, ((int32_t)(V_0+L_11)), V_1, L_12, &m4633_MI);
		return L_13;
	}

IL_008f:
	{
		bool L_14 = m4642(V_7, &m4642_MI);
		if (!L_14)
		{
			goto IL_00a9;
		}
	}
	{
		t1127  L_15 = m4644(V_7, V_0, &m4644_MI);
		m4488(V_3, L_15, &m4488_MI);
	}

IL_00a9:
	{
		bool L_16 = m4637(V_7, &m4637_MI);
		if (!L_16)
		{
			goto IL_00ba;
		}
	}
	{
		goto IL_00d3;
	}

IL_00ba:
	{
		int32_t L_17 = m4635(V_7, &m4635_MI);
		V_0 = ((int32_t)(V_0+L_17));
		V_5 = ((int32_t)(V_5+1));
	}

IL_00ca:
	{
		if ((((int32_t)V_5) < ((int32_t)V_4)))
		{
			goto IL_002a;
		}
	}

IL_00d3:
	{
		m4489(V_3, &m4489_MI);
		t1127  L_18 = m4466(NULL, &m4466_MI);
		V_8 = L_18;
		t5 * L_19 = (t5 *)VirtFuncInvoker0< t5 * >::Invoke(&m4496_MI, V_3);
		V_10 = L_19;
	}

IL_00e8:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0112;
		}

IL_00ed:
		{
			t5 * L_20 = (t5 *)InterfaceFuncInvoker0< t5 * >::Invoke(&m4765_MI, V_10);
			V_9 = ((*(t1127 *)((t1127 *)UnBox (L_20, InitializedTypeInfo(&t1127_TI)))));
			int32_t L_21 = m4470((&V_9), &m4470_MI);
			int32_t L_22 = m4470((&V_8), &m4470_MI);
			if ((((int32_t)L_21) <= ((int32_t)L_22)))
			{
				goto IL_0112;
			}
		}

IL_010e:
		{
			V_8 = V_9;
		}

IL_0112:
		{
			bool L_23 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&m747_MI, V_10);
			if (L_23)
			{
				goto IL_00ed;
			}
		}

IL_011e:
		{
			// IL_011e: leave IL_0139
			leaveInstructions[0] = 0x139; // 1
			THROW_SENTINEL(IL_0139);
			// finally target depth: 1
		}
	} // end try (depth: 1)
	catch(Il2CppFinallySentinel& e)
	{
		goto IL_0123;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t142 *)e.ex;
		goto IL_0123;
	}

IL_0123:
	{ // begin finally (depth: 1)
		{
			V_18 = ((t5 *)IsInst(V_10, InitializedTypeInfo(&t132_TI)));
			if (V_18)
			{
				goto IL_0131;
			}
		}

IL_0130:
		{
			// finally node depth: 1
			switch (leaveInstructions[0])
			{
				case 0x139:
					goto IL_0139;
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

IL_0131:
		{
			InterfaceActionInvoker0::Invoke(&m516_MI, V_18);
			// finally node depth: 1
			switch (leaveInstructions[0])
			{
				case 0x139:
					goto IL_0139;
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

IL_0139:
	{
		bool L_24 = m4469((&V_8), &m4469_MI);
		if (!L_24)
		{
			goto IL_014d;
		}
	}
	{
		t1140 * L_25 = (t1140 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1140_TI));
		m4631(L_25, __this, V_1, &m4631_MI);
		return L_25;
	}

IL_014d:
	{
		V_11 = 0;
		V_12 = 0;
		V_0 = 0;
		V_13 = 0;
		goto IL_01c8;
	}

IL_015d:
	{
		t5 * L_26 = (t5 *)VirtFuncInvoker1< t5 *, int32_t >::Invoke(&m4771_MI, V_2, V_13);
		V_14 = ((t1140 *)Castclass(L_26, InitializedTypeInfo(&t1140_TI)));
		bool L_27 = m4642(V_14, &m4642_MI);
		if (!L_27)
		{
			goto IL_01a7;
		}
	}
	{
		t1127  L_28 = m4644(V_14, V_0, &m4644_MI);
		bool L_29 = m4473((&V_8), L_28, &m4473_MI);
		if (!L_29)
		{
			goto IL_01a7;
		}
	}
	{
		bool L_30 = m4640(V_14, &m4640_MI);
		V_11 = ((int32_t)((int32_t)V_11|(int32_t)L_30));
		int32_t L_31 = V_12;
		V_12 = ((int32_t)(L_31+1));
		VirtActionInvoker2< int32_t, t5 * >::Invoke(&m5052_MI, V_2, L_31, V_14);
	}

IL_01a7:
	{
		bool L_32 = m4637(V_14, &m4637_MI);
		if (!L_32)
		{
			goto IL_01b8;
		}
	}
	{
		goto IL_01d5;
	}

IL_01b8:
	{
		int32_t L_33 = m4635(V_14, &m4635_MI);
		V_0 = ((int32_t)(V_0+L_33));
		V_13 = ((int32_t)(V_13+1));
	}

IL_01c8:
	{
		int32_t L_34 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m4769_MI, V_2);
		if ((((int32_t)V_13) < ((int32_t)L_34)))
		{
			goto IL_015d;
		}
	}

IL_01d5:
	{
		t448 * L_35 = (t448 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t448_TI));
		m1971(L_35, &m1971_MI);
		V_15 = L_35;
		V_16 = 0;
		goto IL_0227;
	}

IL_01e4:
	{
		if (!p0)
		{
			goto IL_0203;
		}
	}
	{
		t5 * L_36 = (t5 *)VirtFuncInvoker1< t5 *, int32_t >::Invoke(&m4771_MI, V_2, ((int32_t)(((int32_t)(V_12-V_16))-1)));
		V_17 = ((t1140 *)Castclass(L_36, InitializedTypeInfo(&t1140_TI)));
		goto IL_0212;
	}

IL_0203:
	{
		t5 * L_37 = (t5 *)VirtFuncInvoker1< t5 *, int32_t >::Invoke(&m4771_MI, V_2, V_16);
		V_17 = ((t1140 *)Castclass(L_37, InitializedTypeInfo(&t1140_TI)));
	}

IL_0212:
	{
		t11* L_38 = m4639(V_17, &m4639_MI);
		m3574(V_15, L_38, &m3574_MI);
		V_16 = ((int32_t)(V_16+1));
	}

IL_0227:
	{
		if ((((int32_t)V_16) < ((int32_t)V_12)))
		{
			goto IL_01e4;
		}
	}
	{
		int32_t L_39 = m4978(V_15, &m4978_MI);
		int32_t L_40 = m4470((&V_8), &m4470_MI);
		if ((((uint32_t)L_39) != ((uint32_t)L_40)))
		{
			goto IL_025b;
		}
	}
	{
		int32_t L_41 = ((&V_8)->f0);
		t11* L_42 = (t11*)VirtFuncInvoker0< t11* >::Invoke(&m1975_MI, V_15);
		t1140 * L_43 = (t1140 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1140_TI));
		m4632(L_43, __this, L_41, V_1, L_42, V_11, &m4632_MI);
		return L_43;
	}

IL_025b:
	{
		int32_t L_44 = m4978(V_15, &m4978_MI);
		int32_t L_45 = m4470((&V_8), &m4470_MI);
		if ((((int32_t)L_44) <= ((int32_t)L_45)))
		{
			goto IL_0285;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1224_TI));
		t1223 * L_46 = m5066(NULL, &m5066_MI);
		VirtActionInvoker1< t11* >::Invoke(&m5067_MI, L_46, (t11*) &_stringLiteral555);
		t1140 * L_47 = (t1140 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1140_TI));
		m4631(L_47, __this, V_1, &m4631_MI);
		return L_47;
	}

IL_0285:
	{
		t1221 * L_48 = (t1221 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1221_TI));
		m4996(L_48, (t11*) &_stringLiteral556, &m4996_MI);
		il2cpp_codegen_raise_exception(L_48);
	}
}
// Metadata Definition System.Text.RegularExpressions.Syntax.Group
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m4547_MI = 
{
	".ctor", (methodPointerType)&m4547, &t1134_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 785, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1136_0_0_0;
static ParameterInfo t1134_m4548_ParameterInfos[] = 
{
	{"e", 0, 134218457, &EmptyCustomAttributesCache, &t1136_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m4548_MI = 
{
	"AppendExpression", (methodPointerType)&m4548, &t1134_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t1134_m4548_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 786, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1139_0_0_0;
extern Il2CppType t108_0_0_0;
static ParameterInfo t1134_m4549_ParameterInfos[] = 
{
	{"cmp", 0, 134218458, &EmptyCustomAttributesCache, &t1139_0_0_0},
	{"reverse", 1, 134218459, &EmptyCustomAttributesCache, &t108_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t111 (MethodInfo* method, void* obj, void** args);
MethodInfo m4549_MI = 
{
	"Compile", (methodPointerType)&m4549, &t1134_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t111, t1134_m4549_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 2, false, false, 787, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t110_1_0_2;
extern Il2CppType t110_1_0_2;
static ParameterInfo t1134_m4550_ParameterInfos[] = 
{
	{"min", 0, 134218460, &EmptyCustomAttributesCache, &t110_1_0_2},
	{"max", 1, 134218461, &EmptyCustomAttributesCache, &t110_1_0_2},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t533_t533 (MethodInfo* method, void* obj, void** args);
MethodInfo m4550_MI = 
{
	"GetWidth", (methodPointerType)&m4550, &t1134_TI, &t109_0_0_0, RuntimeInvoker_t109_t533_t533, t1134_m4550_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 5, 2, false, false, 788, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t108_0_0_0;
static ParameterInfo t1134_m4551_ParameterInfos[] = 
{
	{"reverse", 0, 134218462, &EmptyCustomAttributesCache, &t108_0_0_0},
};
extern Il2CppType t1140_0_0_0;
extern void* RuntimeInvoker_t5_t111 (MethodInfo* method, void* obj, void** args);
MethodInfo m4551_MI = 
{
	"GetAnchorInfo", (methodPointerType)&m4551, &t1134_TI, &t1140_0_0_0, RuntimeInvoker_t5_t111, t1134_m4551_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 6, 1, false, false, 789, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1134_MIs[] =
{
	&m4547_MI,
	&m4548_MI,
	&m4549_MI,
	&m4550_MI,
	&m4551_MI,
	NULL
};
static MethodInfo* t1134_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m4549_MI,
	&m4550_MI,
	&m4551_MI,
	&m4546_MI,
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType t1134_1_0_0;
struct t1134;
TypeInfo t1134_TI = 
{
	&g_System_dll_Image, NULL, "Group", "System.Text.RegularExpressions.Syntax", t1134_MIs, NULL, NULL, NULL, &t1141_TI, NULL, NULL, &t1134_TI, NULL, t1134_VT, &EmptyCustomAttributesCache, &t1134_TI, &t1134_0_0_0, &t1134_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1134), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, false, false, false, false, false, false, false, 5, 0, 0, 0, 0, 8, 0, 0};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t1106_TI;
extern MethodInfo m5041_MI;
extern MethodInfo m5046_MI;
extern MethodInfo m5043_MI;
extern MethodInfo m5027_MI;
extern MethodInfo m5026_MI;
extern MethodInfo m5020_MI;
extern MethodInfo m5047_MI;


 void m4552 (t1133 * __this, MethodInfo* method){
	{
		m4547(__this, &m4547_MI);
		__this->f1 = 0;
		return;
	}
}
 void m4553 (t1133 * __this, int32_t p0, MethodInfo* method){
	{
		__this->f1 = p0;
		return;
	}
}
extern MethodInfo m4554_MI;
 void m4554 (t1133 * __this, t5 * p0, bool p1, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	t1140 * V_2 = {0};
	t1113 * V_3 = {0};
	{
		VirtActionInvoker2< int32_t*, int32_t* >::Invoke(&m4550_MI, __this, (&V_0), (&V_1));
		int32_t L_0 = (__this->f1);
		InterfaceActionInvoker3< int32_t, int32_t, int32_t >::Invoke(&m5041_MI, p0, L_0, V_0, V_1);
		t1140 * L_1 = (t1140 *)VirtFuncInvoker1< t1140 *, bool >::Invoke(&m4551_MI, __this, p1);
		V_2 = L_1;
		t1113 * L_2 = (t1113 *)InterfaceFuncInvoker0< t1113 * >::Invoke(&m5046_MI, p0);
		V_3 = L_2;
		int32_t L_3 = m4634(V_2, &m4634_MI);
		InterfaceActionInvoker3< bool, int32_t, t1113 * >::Invoke(&m5043_MI, p0, p1, L_3, V_3);
		bool L_4 = m4643(V_2, &m4643_MI);
		if (!L_4)
		{
			goto IL_0051;
		}
	}
	{
		uint16_t L_5 = m4641(V_2, &m4641_MI);
		InterfaceActionInvoker1< uint16_t >::Invoke(&m5027_MI, p0, L_5);
		goto IL_006f;
	}

IL_0051:
	{
		bool L_6 = m4642(V_2, &m4642_MI);
		if (!L_6)
		{
			goto IL_006f;
		}
	}
	{
		t11* L_7 = m4639(V_2, &m4639_MI);
		bool L_8 = m4640(V_2, &m4640_MI);
		InterfaceActionInvoker3< t11*, bool, bool >::Invoke(&m5026_MI, p0, L_7, L_8, p1);
	}

IL_006f:
	{
		InterfaceActionInvoker0::Invoke(&m5020_MI, p0);
		InterfaceActionInvoker1< t1113 * >::Invoke(&m5047_MI, p0, V_3);
		m4549(__this, p0, p1, &m4549_MI);
		InterfaceActionInvoker0::Invoke(&m5020_MI, p0);
		return;
	}
}
// Metadata Definition System.Text.RegularExpressions.Syntax.RegularExpression
extern Il2CppType t110_0_0_1;
FieldInfo t1133_f1_FieldInfo = 
{
	"group_count", &t110_0_0_1, &t1133_TI, offsetof(t1133, f1), &EmptyCustomAttributesCache};
static FieldInfo* t1133_FIs[] =
{
	&t1133_f1_FieldInfo,
	NULL
};
static PropertyInfo t1133____GroupCount_PropertyInfo = 
{
	&t1133_TI, "GroupCount", NULL, &m4553_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1133_PIs[] =
{
	&t1133____GroupCount_PropertyInfo,
	NULL
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m4552_MI = 
{
	".ctor", (methodPointerType)&m4552, &t1133_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 790, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t110_0_0_0;
static ParameterInfo t1133_m4553_ParameterInfos[] = 
{
	{"value", 0, 134218463, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m4553_MI = 
{
	"set_GroupCount", (methodPointerType)&m4553, &t1133_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t1133_m4553_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, false, 791, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1139_0_0_0;
extern Il2CppType t108_0_0_0;
static ParameterInfo t1133_m4554_ParameterInfos[] = 
{
	{"cmp", 0, 134218464, &EmptyCustomAttributesCache, &t1139_0_0_0},
	{"reverse", 1, 134218465, &EmptyCustomAttributesCache, &t108_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t111 (MethodInfo* method, void* obj, void** args);
MethodInfo m4554_MI = 
{
	"Compile", (methodPointerType)&m4554, &t1133_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t111, t1133_m4554_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 2, false, false, 792, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1133_MIs[] =
{
	&m4552_MI,
	&m4553_MI,
	&m4554_MI,
	NULL
};
static MethodInfo* t1133_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m4554_MI,
	&m4550_MI,
	&m4551_MI,
	&m4546_MI,
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType t1133_0_0_0;
extern Il2CppType t1133_1_0_0;
struct t1133;
TypeInfo t1133_TI = 
{
	&g_System_dll_Image, NULL, "RegularExpression", "System.Text.RegularExpressions.Syntax", t1133_MIs, t1133_PIs, t1133_FIs, NULL, &t1134_TI, NULL, NULL, &t1133_TI, NULL, t1133_VT, &EmptyCustomAttributesCache, &t1133_TI, &t1133_0_0_0, &t1133_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1133), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, false, false, false, false, false, false, false, 3, 1, 1, 0, 0, 8, 0, 0};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m5028_MI;
extern MethodInfo m5029_MI;


 void m4555 (t1142 * __this, MethodInfo* method){
	{
		m4547(__this, &m4547_MI);
		__this->f1 = 0;
		__this->f2 = (t11*)NULL;
		return;
	}
}
 int32_t m4556 (t1142 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->f1);
		return L_0;
	}
}
 void m4557 (t1142 * __this, int32_t p0, MethodInfo* method){
	{
		__this->f1 = p0;
		return;
	}
}
 t11* m4558 (t1142 * __this, MethodInfo* method){
	{
		t11* L_0 = (__this->f2);
		return L_0;
	}
}
 void m4559 (t1142 * __this, t11* p0, MethodInfo* method){
	{
		__this->f2 = p0;
		return;
	}
}
 bool m4560 (t1142 * __this, MethodInfo* method){
	{
		t11* L_0 = (__this->f2);
		return ((((int32_t)((((t11*)L_0) == ((t5 *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
extern MethodInfo m4561_MI;
 void m4561 (t1142 * __this, t5 * p0, bool p1, MethodInfo* method){
	{
		int32_t L_0 = (__this->f1);
		InterfaceActionInvoker1< int32_t >::Invoke(&m5028_MI, p0, L_0);
		m4549(__this, p0, p1, &m4549_MI);
		int32_t L_1 = (__this->f1);
		InterfaceActionInvoker1< int32_t >::Invoke(&m5029_MI, p0, L_1);
		return;
	}
}
extern MethodInfo m4562_MI;
 bool m4562 (t1142 * __this, MethodInfo* method){
	{
		return 1;
	}
}
extern MethodInfo m4563_MI;
 int32_t m4563 (t1142 * __this, t5 * p0, MethodInfo* method){
	{
		int32_t L_0 = (__this->f1);
		int32_t L_1 = (((t1142 *)Castclass(p0, InitializedTypeInfo(&t1142_TI)))->f1);
		return ((int32_t)(L_0-L_1));
	}
}
// Metadata Definition System.Text.RegularExpressions.Syntax.CapturingGroup
extern Il2CppType t110_0_0_1;
FieldInfo t1142_f1_FieldInfo = 
{
	"gid", &t110_0_0_1, &t1142_TI, offsetof(t1142, f1), &EmptyCustomAttributesCache};
extern Il2CppType t11_0_0_1;
FieldInfo t1142_f2_FieldInfo = 
{
	"name", &t11_0_0_1, &t1142_TI, offsetof(t1142, f2), &EmptyCustomAttributesCache};
static FieldInfo* t1142_FIs[] =
{
	&t1142_f1_FieldInfo,
	&t1142_f2_FieldInfo,
	NULL
};
static PropertyInfo t1142____Index_PropertyInfo = 
{
	&t1142_TI, "Index", &m4556_MI, &m4557_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1142____Name_PropertyInfo = 
{
	&t1142_TI, "Name", &m4558_MI, &m4559_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1142____IsNamed_PropertyInfo = 
{
	&t1142_TI, "IsNamed", &m4560_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1142_PIs[] =
{
	&t1142____Index_PropertyInfo,
	&t1142____Name_PropertyInfo,
	&t1142____IsNamed_PropertyInfo,
	NULL
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m4555_MI = 
{
	".ctor", (methodPointerType)&m4555, &t1142_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 793, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m4556_MI = 
{
	"get_Index", (methodPointerType)&m4556, &t1142_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 794, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t110_0_0_0;
static ParameterInfo t1142_m4557_ParameterInfos[] = 
{
	{"value", 0, 134218466, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m4557_MI = 
{
	"set_Index", (methodPointerType)&m4557, &t1142_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t1142_m4557_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, false, 795, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t11_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m4558_MI = 
{
	"get_Name", (methodPointerType)&m4558, &t1142_TI, &t11_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 796, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t11_0_0_0;
static ParameterInfo t1142_m4559_ParameterInfos[] = 
{
	{"value", 0, 134218467, &EmptyCustomAttributesCache, &t11_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m4559_MI = 
{
	"set_Name", (methodPointerType)&m4559, &t1142_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t1142_m4559_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, false, 797, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
MethodInfo m4560_MI = 
{
	"get_IsNamed", (methodPointerType)&m4560, &t1142_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 798, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1139_0_0_0;
extern Il2CppType t108_0_0_0;
static ParameterInfo t1142_m4561_ParameterInfos[] = 
{
	{"cmp", 0, 134218468, &EmptyCustomAttributesCache, &t1139_0_0_0},
	{"reverse", 1, 134218469, &EmptyCustomAttributesCache, &t108_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t111 (MethodInfo* method, void* obj, void** args);
MethodInfo m4561_MI = 
{
	"Compile", (methodPointerType)&m4561, &t1142_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t111, t1142_m4561_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 2, false, false, 799, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
MethodInfo m4562_MI = 
{
	"IsComplex", (methodPointerType)&m4562, &t1142_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 198, 0, 7, 0, false, false, 800, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t5_0_0_0;
static ParameterInfo t1142_m4563_ParameterInfos[] = 
{
	{"other", 0, 134218470, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m4563_MI = 
{
	"CompareTo", (methodPointerType)&m4563, &t1142_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t1142_m4563_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 8, 1, false, false, 801, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1142_MIs[] =
{
	&m4555_MI,
	&m4556_MI,
	&m4557_MI,
	&m4558_MI,
	&m4559_MI,
	&m4560_MI,
	&m4561_MI,
	&m4562_MI,
	&m4563_MI,
	NULL
};
static MethodInfo* t1142_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m4561_MI,
	&m4550_MI,
	&m4551_MI,
	&m4562_MI,
	&m4563_MI,
};
static TypeInfo* t1142_ITIs[] = 
{
	&t122_TI,
};
static Il2CppInterfaceOffsetPair t1142_IOs[] = 
{
	{ &t122_TI, 8},
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType t1142_0_0_0;
extern Il2CppType t1142_1_0_0;
struct t1142;
TypeInfo t1142_TI = 
{
	&g_System_dll_Image, NULL, "CapturingGroup", "System.Text.RegularExpressions.Syntax", t1142_MIs, t1142_PIs, t1142_FIs, NULL, &t1134_TI, NULL, NULL, &t1142_TI, t1142_ITIs, t1142_VT, &EmptyCustomAttributesCache, &t1142_TI, &t1142_0_0_0, &t1142_1_0_0, t1142_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1142), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, false, false, false, false, false, false, false, 9, 3, 2, 0, 0, 9, 1, 1};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m5030_MI;
extern MethodInfo m5031_MI;


 void m4564 (t1143 * __this, MethodInfo* method){
	{
		m4555(__this, &m4555_MI);
		__this->f3 = (t1142 *)NULL;
		return;
	}
}
 void m4565 (t1143 * __this, t1142 * p0, MethodInfo* method){
	{
		__this->f3 = p0;
		return;
	}
}
extern MethodInfo m4566_MI;
 void m4566 (t1143 * __this, t5 * p0, bool p1, MethodInfo* method){
	t1113 * V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	t1136 * V_3 = {0};
	{
		t1113 * L_0 = (t1113 *)InterfaceFuncInvoker0< t1113 * >::Invoke(&m5046_MI, p0);
		V_0 = L_0;
		int32_t L_1 = m4556(__this, &m4556_MI);
		t1142 * L_2 = (__this->f3);
		int32_t L_3 = m4556(L_2, &m4556_MI);
		bool L_4 = m4560(__this, &m4560_MI);
		InterfaceActionInvoker4< int32_t, int32_t, bool, t1113 * >::Invoke(&m5030_MI, p0, L_1, L_3, L_4, V_0);
		t1138 * L_5 = m4544(__this, &m4544_MI);
		int32_t L_6 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m4891_MI, L_5);
		V_1 = L_6;
		V_2 = 0;
		goto IL_006d;
	}

IL_0038:
	{
		if (!p1)
		{
			goto IL_0054;
		}
	}
	{
		t1138 * L_7 = m4544(__this, &m4544_MI);
		t1136 * L_8 = m4537(L_7, ((int32_t)(((int32_t)(V_1-V_2))-1)), &m4537_MI);
		V_3 = L_8;
		goto IL_0061;
	}

IL_0054:
	{
		t1138 * L_9 = m4544(__this, &m4544_MI);
		t1136 * L_10 = m4537(L_9, V_2, &m4537_MI);
		V_3 = L_10;
	}

IL_0061:
	{
		VirtActionInvoker2< t5 *, bool >::Invoke(&m5064_MI, V_3, p0, p1);
		V_2 = ((int32_t)(V_2+1));
	}

IL_006d:
	{
		if ((((int32_t)V_2) < ((int32_t)V_1)))
		{
			goto IL_0038;
		}
	}
	{
		InterfaceActionInvoker0::Invoke(&m5031_MI, p0);
		InterfaceActionInvoker1< t1113 * >::Invoke(&m5047_MI, p0, V_0);
		return;
	}
}
// Metadata Definition System.Text.RegularExpressions.Syntax.BalancingGroup
extern Il2CppType t1142_0_0_1;
FieldInfo t1143_f3_FieldInfo = 
{
	"balance", &t1142_0_0_1, &t1143_TI, offsetof(t1143, f3), &EmptyCustomAttributesCache};
static FieldInfo* t1143_FIs[] =
{
	&t1143_f3_FieldInfo,
	NULL
};
static PropertyInfo t1143____Balance_PropertyInfo = 
{
	&t1143_TI, "Balance", NULL, &m4565_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1143_PIs[] =
{
	&t1143____Balance_PropertyInfo,
	NULL
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m4564_MI = 
{
	".ctor", (methodPointerType)&m4564, &t1143_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 802, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1142_0_0_0;
static ParameterInfo t1143_m4565_ParameterInfos[] = 
{
	{"value", 0, 134218471, &EmptyCustomAttributesCache, &t1142_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m4565_MI = 
{
	"set_Balance", (methodPointerType)&m4565, &t1143_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t1143_m4565_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, false, 803, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1139_0_0_0;
extern Il2CppType t108_0_0_0;
static ParameterInfo t1143_m4566_ParameterInfos[] = 
{
	{"cmp", 0, 134218472, &EmptyCustomAttributesCache, &t1139_0_0_0},
	{"reverse", 1, 134218473, &EmptyCustomAttributesCache, &t108_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t111 (MethodInfo* method, void* obj, void** args);
MethodInfo m4566_MI = 
{
	"Compile", (methodPointerType)&m4566, &t1143_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t111, t1143_m4566_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 2, false, false, 804, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1143_MIs[] =
{
	&m4564_MI,
	&m4565_MI,
	&m4566_MI,
	NULL
};
static MethodInfo* t1143_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m4566_MI,
	&m4550_MI,
	&m4551_MI,
	&m4562_MI,
	&m4563_MI,
};
static Il2CppInterfaceOffsetPair t1143_IOs[] = 
{
	{ &t122_TI, 8},
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType t1143_0_0_0;
extern Il2CppType t1143_1_0_0;
struct t1143;
TypeInfo t1143_TI = 
{
	&g_System_dll_Image, NULL, "BalancingGroup", "System.Text.RegularExpressions.Syntax", t1143_MIs, t1143_PIs, t1143_FIs, NULL, &t1142_TI, NULL, NULL, &t1143_TI, NULL, t1143_VT, &EmptyCustomAttributesCache, &t1143_TI, &t1143_0_0_0, &t1143_1_0_0, t1143_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1143), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, false, false, false, false, false, false, false, 3, 1, 1, 0, 0, 9, 0, 1};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m5034_MI;


 void m4567 (t1144 * __this, MethodInfo* method){
	{
		m4547(__this, &m4547_MI);
		return;
	}
}
extern MethodInfo m4568_MI;
 void m4568 (t1144 * __this, t5 * p0, bool p1, MethodInfo* method){
	t1113 * V_0 = {0};
	{
		t1113 * L_0 = (t1113 *)InterfaceFuncInvoker0< t1113 * >::Invoke(&m5046_MI, p0);
		V_0 = L_0;
		InterfaceActionInvoker1< t1113 * >::Invoke(&m5034_MI, p0, V_0);
		m4549(__this, p0, p1, &m4549_MI);
		InterfaceActionInvoker0::Invoke(&m5020_MI, p0);
		InterfaceActionInvoker1< t1113 * >::Invoke(&m5047_MI, p0, V_0);
		return;
	}
}
extern MethodInfo m4569_MI;
 bool m4569 (t1144 * __this, MethodInfo* method){
	{
		return 1;
	}
}
// Metadata Definition System.Text.RegularExpressions.Syntax.NonBacktrackingGroup
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m4567_MI = 
{
	".ctor", (methodPointerType)&m4567, &t1144_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 805, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1139_0_0_0;
extern Il2CppType t108_0_0_0;
static ParameterInfo t1144_m4568_ParameterInfos[] = 
{
	{"cmp", 0, 134218474, &EmptyCustomAttributesCache, &t1139_0_0_0},
	{"reverse", 1, 134218475, &EmptyCustomAttributesCache, &t108_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t111 (MethodInfo* method, void* obj, void** args);
MethodInfo m4568_MI = 
{
	"Compile", (methodPointerType)&m4568, &t1144_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t111, t1144_m4568_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 2, false, false, 806, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
MethodInfo m4569_MI = 
{
	"IsComplex", (methodPointerType)&m4569, &t1144_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 198, 0, 7, 0, false, false, 807, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1144_MIs[] =
{
	&m4567_MI,
	&m4568_MI,
	&m4569_MI,
	NULL
};
static MethodInfo* t1144_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m4568_MI,
	&m4550_MI,
	&m4551_MI,
	&m4569_MI,
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType t1144_0_0_0;
extern Il2CppType t1144_1_0_0;
struct t1144;
TypeInfo t1144_TI = 
{
	&g_System_dll_Image, NULL, "NonBacktrackingGroup", "System.Text.RegularExpressions.Syntax", t1144_MIs, NULL, NULL, NULL, &t1134_TI, NULL, NULL, &t1144_TI, NULL, t1144_VT, &EmptyCustomAttributesCache, &t1144_TI, &t1144_0_0_0, &t1144_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1144), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, false, false, false, false, false, false, false, 3, 0, 0, 0, 0, 8, 0, 0};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m4571_MI;
extern MethodInfo m5038_MI;
extern MethodInfo m5039_MI;
extern MethodInfo m5042_MI;
extern MethodInfo m4573_MI;
extern MethodInfo m4638_MI;
extern MethodInfo m2079_MI;


 void m4570 (t1145 * __this, int32_t p0, int32_t p1, bool p2, MethodInfo* method){
	{
		m4543(__this, &m4543_MI);
		t1138 * L_0 = m4544(__this, &m4544_MI);
		m4536(L_0, (t1136 *)NULL, &m4536_MI);
		__this->f1 = p0;
		__this->f2 = p1;
		__this->f3 = p2;
		return;
	}
}
 t1136 * m4571 (t1145 * __this, MethodInfo* method){
	{
		t1138 * L_0 = m4544(__this, &m4544_MI);
		t1136 * L_1 = m4537(L_0, 0, &m4537_MI);
		return L_1;
	}
}
 void m4572 (t1145 * __this, t1136 * p0, MethodInfo* method){
	{
		t1138 * L_0 = m4544(__this, &m4544_MI);
		m4538(L_0, 0, p0, &m4538_MI);
		return;
	}
}
 int32_t m4573 (t1145 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->f1);
		return L_0;
	}
}
extern MethodInfo m4574_MI;
 void m4574 (t1145 * __this, t5 * p0, bool p1, MethodInfo* method){
	t1113 * V_0 = {0};
	t1113 * V_1 = {0};
	{
		t1136 * L_0 = m4571(__this, &m4571_MI);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(&m5065_MI, L_0);
		if (!L_1)
		{
			goto IL_0049;
		}
	}
	{
		t1113 * L_2 = (t1113 *)InterfaceFuncInvoker0< t1113 * >::Invoke(&m5046_MI, p0);
		V_0 = L_2;
		int32_t L_3 = (__this->f1);
		int32_t L_4 = (__this->f2);
		bool L_5 = (__this->f3);
		InterfaceActionInvoker4< int32_t, int32_t, bool, t1113 * >::Invoke(&m5038_MI, p0, L_3, L_4, L_5, V_0);
		t1136 * L_6 = m4571(__this, &m4571_MI);
		VirtActionInvoker2< t5 *, bool >::Invoke(&m5064_MI, L_6, p0, p1);
		InterfaceActionInvoker1< t1113 * >::Invoke(&m5039_MI, p0, V_0);
		goto IL_0083;
	}

IL_0049:
	{
		t1113 * L_7 = (t1113 *)InterfaceFuncInvoker0< t1113 * >::Invoke(&m5046_MI, p0);
		V_1 = L_7;
		int32_t L_8 = (__this->f1);
		int32_t L_9 = (__this->f2);
		bool L_10 = (__this->f3);
		InterfaceActionInvoker4< int32_t, int32_t, bool, t1113 * >::Invoke(&m5042_MI, p0, L_8, L_9, L_10, V_1);
		t1136 * L_11 = m4571(__this, &m4571_MI);
		VirtActionInvoker2< t5 *, bool >::Invoke(&m5064_MI, L_11, p0, p1);
		InterfaceActionInvoker0::Invoke(&m5020_MI, p0);
		InterfaceActionInvoker1< t1113 * >::Invoke(&m5047_MI, p0, V_1);
	}

IL_0083:
	{
		return;
	}
}
extern MethodInfo m4575_MI;
 void m4575 (t1145 * __this, int32_t* p0, int32_t* p1, MethodInfo* method){
	{
		t1136 * L_0 = m4571(__this, &m4571_MI);
		VirtActionInvoker2< int32_t*, int32_t* >::Invoke(&m5063_MI, L_0, p0, p1);
		int32_t L_1 = (__this->f1);
		*((int32_t*)(p0)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)p0))*(int32_t)L_1));
		if ((((int32_t)(*((int32_t*)p1))) == ((int32_t)((int32_t)2147483647))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_2 = (__this->f2);
		if ((((uint32_t)L_2) != ((uint32_t)((int32_t)65535))))
		{
			goto IL_0040;
		}
	}

IL_0034:
	{
		*((int32_t*)(p1)) = (int32_t)((int32_t)2147483647);
		goto IL_004b;
	}

IL_0040:
	{
		int32_t L_3 = (__this->f2);
		*((int32_t*)(p1)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)p1))*(int32_t)L_3));
	}

IL_004b:
	{
		return;
	}
}
extern MethodInfo m4576_MI;
 t1140 * m4576 (t1145 * __this, bool p0, MethodInfo* method){
	int32_t V_0 = 0;
	t1140 * V_1 = {0};
	t11* V_2 = {0};
	t448 * V_3 = {0};
	int32_t V_4 = 0;
	{
		int32_t L_0 = m4541(__this, &m4541_MI);
		V_0 = L_0;
		int32_t L_1 = m4573(__this, &m4573_MI);
		if (L_1)
		{
			goto IL_001a;
		}
	}
	{
		t1140 * L_2 = (t1140 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1140_TI));
		m4631(L_2, __this, V_0, &m4631_MI);
		return L_2;
	}

IL_001a:
	{
		t1136 * L_3 = m4571(__this, &m4571_MI);
		t1140 * L_4 = (t1140 *)VirtFuncInvoker1< t1140 *, bool >::Invoke(&m4542_MI, L_3, p0);
		V_1 = L_4;
		bool L_5 = m4643(V_1, &m4643_MI);
		if (!L_5)
		{
			goto IL_0046;
		}
	}
	{
		int32_t L_6 = m4634(V_1, &m4634_MI);
		uint16_t L_7 = m4641(V_1, &m4641_MI);
		t1140 * L_8 = (t1140 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1140_TI));
		m4633(L_8, __this, L_6, V_0, L_7, &m4633_MI);
		return L_8;
	}

IL_0046:
	{
		bool L_9 = m4642(V_1, &m4642_MI);
		if (!L_9)
		{
			goto IL_00bc;
		}
	}
	{
		bool L_10 = m4638(V_1, &m4638_MI);
		if (!L_10)
		{
			goto IL_00a2;
		}
	}
	{
		t11* L_11 = m4639(V_1, &m4639_MI);
		V_2 = L_11;
		t448 * L_12 = (t448 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t448_TI));
		m2079(L_12, V_2, &m2079_MI);
		V_3 = L_12;
		V_4 = 1;
		goto IL_0080;
	}

IL_0072:
	{
		m3574(V_3, V_2, &m3574_MI);
		V_4 = ((int32_t)(V_4+1));
	}

IL_0080:
	{
		int32_t L_13 = m4573(__this, &m4573_MI);
		if ((((int32_t)V_4) < ((int32_t)L_13)))
		{
			goto IL_0072;
		}
	}
	{
		t11* L_14 = (t11*)VirtFuncInvoker0< t11* >::Invoke(&m1975_MI, V_3);
		bool L_15 = m4640(V_1, &m4640_MI);
		t1140 * L_16 = (t1140 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1140_TI));
		m4632(L_16, __this, 0, V_0, L_14, L_15, &m4632_MI);
		return L_16;
	}

IL_00a2:
	{
		int32_t L_17 = m4634(V_1, &m4634_MI);
		t11* L_18 = m4639(V_1, &m4639_MI);
		bool L_19 = m4640(V_1, &m4640_MI);
		t1140 * L_20 = (t1140 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1140_TI));
		m4632(L_20, __this, L_17, V_0, L_18, L_19, &m4632_MI);
		return L_20;
	}

IL_00bc:
	{
		t1140 * L_21 = (t1140 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1140_TI));
		m4631(L_21, __this, V_0, &m4631_MI);
		return L_21;
	}
}
// Metadata Definition System.Text.RegularExpressions.Syntax.Repetition
extern Il2CppType t110_0_0_1;
FieldInfo t1145_f1_FieldInfo = 
{
	"min", &t110_0_0_1, &t1145_TI, offsetof(t1145, f1), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t1145_f2_FieldInfo = 
{
	"max", &t110_0_0_1, &t1145_TI, offsetof(t1145, f2), &EmptyCustomAttributesCache};
extern Il2CppType t108_0_0_1;
FieldInfo t1145_f3_FieldInfo = 
{
	"lazy", &t108_0_0_1, &t1145_TI, offsetof(t1145, f3), &EmptyCustomAttributesCache};
static FieldInfo* t1145_FIs[] =
{
	&t1145_f1_FieldInfo,
	&t1145_f2_FieldInfo,
	&t1145_f3_FieldInfo,
	NULL
};
static PropertyInfo t1145____Expression_PropertyInfo = 
{
	&t1145_TI, "Expression", &m4571_MI, &m4572_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1145____Minimum_PropertyInfo = 
{
	&t1145_TI, "Minimum", &m4573_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1145_PIs[] =
{
	&t1145____Expression_PropertyInfo,
	&t1145____Minimum_PropertyInfo,
	NULL
};
extern Il2CppType t110_0_0_0;
extern Il2CppType t110_0_0_0;
extern Il2CppType t108_0_0_0;
static ParameterInfo t1145_m4570_ParameterInfos[] = 
{
	{"min", 0, 134218476, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"max", 1, 134218477, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"lazy", 2, 134218478, &EmptyCustomAttributesCache, &t108_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t110_t111 (MethodInfo* method, void* obj, void** args);
MethodInfo m4570_MI = 
{
	".ctor", (methodPointerType)&m4570, &t1145_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110_t111, t1145_m4570_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 3, false, false, 808, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1136_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m4571_MI = 
{
	"get_Expression", (methodPointerType)&m4571, &t1145_TI, &t1136_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 809, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1136_0_0_0;
static ParameterInfo t1145_m4572_ParameterInfos[] = 
{
	{"value", 0, 134218479, &EmptyCustomAttributesCache, &t1136_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m4572_MI = 
{
	"set_Expression", (methodPointerType)&m4572, &t1145_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t1145_m4572_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, false, 810, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m4573_MI = 
{
	"get_Minimum", (methodPointerType)&m4573, &t1145_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 811, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1139_0_0_0;
extern Il2CppType t108_0_0_0;
static ParameterInfo t1145_m4574_ParameterInfos[] = 
{
	{"cmp", 0, 134218480, &EmptyCustomAttributesCache, &t1139_0_0_0},
	{"reverse", 1, 134218481, &EmptyCustomAttributesCache, &t108_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t111 (MethodInfo* method, void* obj, void** args);
MethodInfo m4574_MI = 
{
	"Compile", (methodPointerType)&m4574, &t1145_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t111, t1145_m4574_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 2, false, false, 812, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t110_1_0_2;
extern Il2CppType t110_1_0_2;
static ParameterInfo t1145_m4575_ParameterInfos[] = 
{
	{"min", 0, 134218482, &EmptyCustomAttributesCache, &t110_1_0_2},
	{"max", 1, 134218483, &EmptyCustomAttributesCache, &t110_1_0_2},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t533_t533 (MethodInfo* method, void* obj, void** args);
MethodInfo m4575_MI = 
{
	"GetWidth", (methodPointerType)&m4575, &t1145_TI, &t109_0_0_0, RuntimeInvoker_t109_t533_t533, t1145_m4575_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 5, 2, false, false, 813, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t108_0_0_0;
static ParameterInfo t1145_m4576_ParameterInfos[] = 
{
	{"reverse", 0, 134218484, &EmptyCustomAttributesCache, &t108_0_0_0},
};
extern Il2CppType t1140_0_0_0;
extern void* RuntimeInvoker_t5_t111 (MethodInfo* method, void* obj, void** args);
MethodInfo m4576_MI = 
{
	"GetAnchorInfo", (methodPointerType)&m4576, &t1145_TI, &t1140_0_0_0, RuntimeInvoker_t5_t111, t1145_m4576_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 6, 1, false, false, 814, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1145_MIs[] =
{
	&m4570_MI,
	&m4571_MI,
	&m4572_MI,
	&m4573_MI,
	&m4574_MI,
	&m4575_MI,
	&m4576_MI,
	NULL
};
static MethodInfo* t1145_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m4574_MI,
	&m4575_MI,
	&m4576_MI,
	&m4546_MI,
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType t1145_0_0_0;
extern Il2CppType t1145_1_0_0;
struct t1145;
TypeInfo t1145_TI = 
{
	&g_System_dll_Image, NULL, "Repetition", "System.Text.RegularExpressions.Syntax", t1145_MIs, t1145_PIs, t1145_FIs, NULL, &t1141_TI, NULL, NULL, &t1145_TI, NULL, t1145_VT, &EmptyCustomAttributesCache, &t1145_TI, &t1145_0_0_0, &t1145_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1145), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, false, false, false, false, false, false, false, 7, 2, 3, 0, 0, 8, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1135_TI;



extern MethodInfo m4577_MI;
 void m4577 (t1135 * __this, MethodInfo* method){
	{
		m4543(__this, &m4543_MI);
		t1138 * L_0 = m4544(__this, &m4544_MI);
		m4536(L_0, (t1136 *)NULL, &m4536_MI);
		t1138 * L_1 = m4544(__this, &m4544_MI);
		m4536(L_1, (t1136 *)NULL, &m4536_MI);
		return;
	}
}
 t1136 * m4578 (t1135 * __this, MethodInfo* method){
	{
		t1138 * L_0 = m4544(__this, &m4544_MI);
		t1136 * L_1 = m4537(L_0, 0, &m4537_MI);
		return L_1;
	}
}
 void m4579 (t1135 * __this, t1136 * p0, MethodInfo* method){
	{
		t1138 * L_0 = m4544(__this, &m4544_MI);
		m4538(L_0, 0, p0, &m4538_MI);
		return;
	}
}
 t1136 * m4580 (t1135 * __this, MethodInfo* method){
	{
		t1138 * L_0 = m4544(__this, &m4544_MI);
		t1136 * L_1 = m4537(L_0, 1, &m4537_MI);
		return L_1;
	}
}
 void m4581 (t1135 * __this, t1136 * p0, MethodInfo* method){
	{
		t1138 * L_0 = m4544(__this, &m4544_MI);
		m4538(L_0, 1, p0, &m4538_MI);
		return;
	}
}
extern MethodInfo m4582_MI;
 void m4582 (t1135 * __this, int32_t* p0, int32_t* p1, MethodInfo* method){
	{
		m4545(__this, p0, p1, 2, &m4545_MI);
		t1136 * L_0 = m4578(__this, &m4578_MI);
		if (!L_0)
		{
			goto IL_001f;
		}
	}
	{
		t1136 * L_1 = m4580(__this, &m4580_MI);
		if (L_1)
		{
			goto IL_0022;
		}
	}

IL_001f:
	{
		*((int32_t*)(p0)) = (int32_t)0;
	}

IL_0022:
	{
		return;
	}
}
// Metadata Definition System.Text.RegularExpressions.Syntax.Assertion
static PropertyInfo t1135____TrueExpression_PropertyInfo = 
{
	&t1135_TI, "TrueExpression", &m4578_MI, &m4579_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1135____FalseExpression_PropertyInfo = 
{
	&t1135_TI, "FalseExpression", &m4580_MI, &m4581_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1135_PIs[] =
{
	&t1135____TrueExpression_PropertyInfo,
	&t1135____FalseExpression_PropertyInfo,
	NULL
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m4577_MI = 
{
	".ctor", (methodPointerType)&m4577, &t1135_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 815, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1136_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m4578_MI = 
{
	"get_TrueExpression", (methodPointerType)&m4578, &t1135_TI, &t1136_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 816, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1136_0_0_0;
static ParameterInfo t1135_m4579_ParameterInfos[] = 
{
	{"value", 0, 134218485, &EmptyCustomAttributesCache, &t1136_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m4579_MI = 
{
	"set_TrueExpression", (methodPointerType)&m4579, &t1135_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t1135_m4579_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, false, 817, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1136_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m4580_MI = 
{
	"get_FalseExpression", (methodPointerType)&m4580, &t1135_TI, &t1136_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 818, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1136_0_0_0;
static ParameterInfo t1135_m4581_ParameterInfos[] = 
{
	{"value", 0, 134218486, &EmptyCustomAttributesCache, &t1136_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m4581_MI = 
{
	"set_FalseExpression", (methodPointerType)&m4581, &t1135_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t1135_m4581_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, false, 819, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t110_1_0_2;
extern Il2CppType t110_1_0_2;
static ParameterInfo t1135_m4582_ParameterInfos[] = 
{
	{"min", 0, 134218487, &EmptyCustomAttributesCache, &t110_1_0_2},
	{"max", 1, 134218488, &EmptyCustomAttributesCache, &t110_1_0_2},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t533_t533 (MethodInfo* method, void* obj, void** args);
MethodInfo m4582_MI = 
{
	"GetWidth", (methodPointerType)&m4582, &t1135_TI, &t109_0_0_0, RuntimeInvoker_t109_t533_t533, t1135_m4582_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 5, 2, false, false, 820, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1135_MIs[] =
{
	&m4577_MI,
	&m4578_MI,
	&m4579_MI,
	&m4580_MI,
	&m4581_MI,
	&m4582_MI,
	NULL
};
static MethodInfo* t1135_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	NULL,
	&m4582_MI,
	&m4542_MI,
	&m4546_MI,
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType t1135_1_0_0;
struct t1135;
TypeInfo t1135_TI = 
{
	&g_System_dll_Image, NULL, "Assertion", "System.Text.RegularExpressions.Syntax", t1135_MIs, t1135_PIs, NULL, NULL, &t1141_TI, NULL, NULL, &t1135_TI, NULL, t1135_VT, &EmptyCustomAttributesCache, &t1135_TI, &t1135_0_0_0, &t1135_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1135), 0, -1, 0, 0, -1, 1048704, 0, false, false, false, false, false, false, false, false, false, false, false, false, 6, 2, 0, 0, 0, 8, 0, 0};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m4587_MI;
extern MethodInfo m4593_MI;
extern MethodInfo m5033_MI;
extern MethodInfo m5037_MI;
extern MethodInfo m4594_MI;


 void m4583 (t1146 * __this, t1147 * p0, MethodInfo* method){
	{
		m4577(__this, &m4577_MI);
		__this->f3 = p0;
		return;
	}
}
 void m4584 (t1146 * __this, t1142 * p0, MethodInfo* method){
	{
		__this->f2 = p0;
		return;
	}
}
extern MethodInfo m4585_MI;
 void m4585 (t1146 * __this, t5 * p0, bool p1, MethodInfo* method){
	int32_t V_0 = 0;
	t1113 * V_1 = {0};
	t1113 * V_2 = {0};
	{
		t1142 * L_0 = (__this->f2);
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		t1137 * L_1 = m4587(__this, &m4587_MI);
		VirtActionInvoker2< t5 *, bool >::Invoke(&m4593_MI, L_1, p0, p1);
		return;
	}

IL_0019:
	{
		t1142 * L_2 = (__this->f2);
		int32_t L_3 = m4556(L_2, &m4556_MI);
		V_0 = L_3;
		t1113 * L_4 = (t1113 *)InterfaceFuncInvoker0< t1113 * >::Invoke(&m5046_MI, p0);
		V_1 = L_4;
		t1136 * L_5 = m4580(__this, &m4580_MI);
		if (L_5)
		{
			goto IL_0051;
		}
	}
	{
		InterfaceActionInvoker2< int32_t, t1113 * >::Invoke(&m5033_MI, p0, V_0, V_1);
		t1136 * L_6 = m4578(__this, &m4578_MI);
		VirtActionInvoker2< t5 *, bool >::Invoke(&m5064_MI, L_6, p0, p1);
		goto IL_0088;
	}

IL_0051:
	{
		t1113 * L_7 = (t1113 *)InterfaceFuncInvoker0< t1113 * >::Invoke(&m5046_MI, p0);
		V_2 = L_7;
		InterfaceActionInvoker2< int32_t, t1113 * >::Invoke(&m5033_MI, p0, V_0, V_2);
		t1136 * L_8 = m4578(__this, &m4578_MI);
		VirtActionInvoker2< t5 *, bool >::Invoke(&m5064_MI, L_8, p0, p1);
		InterfaceActionInvoker1< t1113 * >::Invoke(&m5037_MI, p0, V_1);
		InterfaceActionInvoker1< t1113 * >::Invoke(&m5047_MI, p0, V_2);
		t1136 * L_9 = m4580(__this, &m4580_MI);
		VirtActionInvoker2< t5 *, bool >::Invoke(&m5064_MI, L_9, p0, p1);
	}

IL_0088:
	{
		InterfaceActionInvoker1< t1113 * >::Invoke(&m5047_MI, p0, V_1);
		return;
	}
}
extern MethodInfo m4586_MI;
 bool m4586 (t1146 * __this, MethodInfo* method){
	{
		t1142 * L_0 = (__this->f2);
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		t1137 * L_1 = m4587(__this, &m4587_MI);
		bool L_2 = (bool)VirtFuncInvoker0< bool >::Invoke(&m4594_MI, L_1);
		return L_2;
	}

IL_0017:
	{
		t1136 * L_3 = m4578(__this, &m4578_MI);
		if (!L_3)
		{
			goto IL_0034;
		}
	}
	{
		t1136 * L_4 = m4578(__this, &m4578_MI);
		bool L_5 = (bool)VirtFuncInvoker0< bool >::Invoke(&m5065_MI, L_4);
		if (!L_5)
		{
			goto IL_0034;
		}
	}
	{
		return 1;
	}

IL_0034:
	{
		t1136 * L_6 = m4580(__this, &m4580_MI);
		if (!L_6)
		{
			goto IL_0051;
		}
	}
	{
		t1136 * L_7 = m4580(__this, &m4580_MI);
		bool L_8 = (bool)VirtFuncInvoker0< bool >::Invoke(&m5065_MI, L_7);
		if (!L_8)
		{
			goto IL_0051;
		}
	}
	{
		return 1;
	}

IL_0051:
	{
		int32_t L_9 = m4541(__this, &m4541_MI);
		return ((((int32_t)((((int32_t)L_9) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
 t1137 * m4587 (t1146 * __this, MethodInfo* method){
	{
		t1137 * L_0 = (__this->f1);
		if (L_0)
		{
			goto IL_0049;
		}
	}
	{
		t1137 * L_1 = (t1137 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1137_TI));
		m4588(L_1, &m4588_MI);
		__this->f1 = L_1;
		t1137 * L_2 = (__this->f1);
		t1136 * L_3 = m4578(__this, &m4578_MI);
		m4579(L_2, L_3, &m4579_MI);
		t1137 * L_4 = (__this->f1);
		t1136 * L_5 = m4580(__this, &m4580_MI);
		m4581(L_4, L_5, &m4581_MI);
		t1137 * L_6 = (__this->f1);
		t1147 * L_7 = (__this->f3);
		m4592(L_6, L_7, &m4592_MI);
	}

IL_0049:
	{
		t1137 * L_8 = (__this->f1);
		return L_8;
	}
}
// Metadata Definition System.Text.RegularExpressions.Syntax.CaptureAssertion
extern Il2CppType t1137_0_0_1;
FieldInfo t1146_f1_FieldInfo = 
{
	"alternate", &t1137_0_0_1, &t1146_TI, offsetof(t1146, f1), &EmptyCustomAttributesCache};
extern Il2CppType t1142_0_0_1;
FieldInfo t1146_f2_FieldInfo = 
{
	"group", &t1142_0_0_1, &t1146_TI, offsetof(t1146, f2), &EmptyCustomAttributesCache};
extern Il2CppType t1147_0_0_1;
FieldInfo t1146_f3_FieldInfo = 
{
	"literal", &t1147_0_0_1, &t1146_TI, offsetof(t1146, f3), &EmptyCustomAttributesCache};
static FieldInfo* t1146_FIs[] =
{
	&t1146_f1_FieldInfo,
	&t1146_f2_FieldInfo,
	&t1146_f3_FieldInfo,
	NULL
};
static PropertyInfo t1146____CapturingGroup_PropertyInfo = 
{
	&t1146_TI, "CapturingGroup", NULL, &m4584_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1146____Alternate_PropertyInfo = 
{
	&t1146_TI, "Alternate", &m4587_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1146_PIs[] =
{
	&t1146____CapturingGroup_PropertyInfo,
	&t1146____Alternate_PropertyInfo,
	NULL
};
extern Il2CppType t1147_0_0_0;
extern Il2CppType t1147_0_0_0;
static ParameterInfo t1146_m4583_ParameterInfos[] = 
{
	{"l", 0, 134218489, &EmptyCustomAttributesCache, &t1147_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m4583_MI = 
{
	".ctor", (methodPointerType)&m4583, &t1146_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t1146_m4583_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 821, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1142_0_0_0;
static ParameterInfo t1146_m4584_ParameterInfos[] = 
{
	{"value", 0, 134218490, &EmptyCustomAttributesCache, &t1142_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m4584_MI = 
{
	"set_CapturingGroup", (methodPointerType)&m4584, &t1146_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t1146_m4584_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, false, 822, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1139_0_0_0;
extern Il2CppType t108_0_0_0;
static ParameterInfo t1146_m4585_ParameterInfos[] = 
{
	{"cmp", 0, 134218491, &EmptyCustomAttributesCache, &t1139_0_0_0},
	{"reverse", 1, 134218492, &EmptyCustomAttributesCache, &t108_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t111 (MethodInfo* method, void* obj, void** args);
MethodInfo m4585_MI = 
{
	"Compile", (methodPointerType)&m4585, &t1146_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t111, t1146_m4585_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 2, false, false, 823, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
MethodInfo m4586_MI = 
{
	"IsComplex", (methodPointerType)&m4586, &t1146_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 198, 0, 7, 0, false, false, 824, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1137_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m4587_MI = 
{
	"get_Alternate", (methodPointerType)&m4587, &t1146_TI, &t1137_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2177, 0, 255, 0, false, false, 825, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1146_MIs[] =
{
	&m4583_MI,
	&m4584_MI,
	&m4585_MI,
	&m4586_MI,
	&m4587_MI,
	NULL
};
static MethodInfo* t1146_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m4585_MI,
	&m4582_MI,
	&m4542_MI,
	&m4586_MI,
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType t1146_0_0_0;
extern Il2CppType t1146_1_0_0;
struct t1146;
TypeInfo t1146_TI = 
{
	&g_System_dll_Image, NULL, "CaptureAssertion", "System.Text.RegularExpressions.Syntax", t1146_MIs, t1146_PIs, t1146_FIs, NULL, &t1135_TI, NULL, NULL, &t1146_TI, NULL, t1146_VT, &EmptyCustomAttributesCache, &t1146_TI, &t1146_0_0_0, &t1146_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1146), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, false, false, false, false, false, false, false, 5, 2, 3, 0, 0, 8, 0, 0};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m5035_MI;
extern MethodInfo m4591_MI;
extern MethodInfo m5019_MI;


 void m4588 (t1137 * __this, MethodInfo* method){
	{
		m4577(__this, &m4577_MI);
		t1138 * L_0 = m4544(__this, &m4544_MI);
		m4536(L_0, (t1136 *)NULL, &m4536_MI);
		return;
	}
}
 void m4589 (t1137 * __this, bool p0, MethodInfo* method){
	{
		__this->f1 = p0;
		return;
	}
}
 void m4590 (t1137 * __this, bool p0, MethodInfo* method){
	{
		__this->f2 = p0;
		return;
	}
}
 t1136 * m4591 (t1137 * __this, MethodInfo* method){
	{
		t1138 * L_0 = m4544(__this, &m4544_MI);
		t1136 * L_1 = m4537(L_0, 2, &m4537_MI);
		return L_1;
	}
}
 void m4592 (t1137 * __this, t1136 * p0, MethodInfo* method){
	{
		t1138 * L_0 = m4544(__this, &m4544_MI);
		m4538(L_0, 2, p0, &m4538_MI);
		return;
	}
}
 void m4593 (t1137 * __this, t5 * p0, bool p1, MethodInfo* method){
	t1113 * V_0 = {0};
	t1113 * V_1 = {0};
	t1113 * V_2 = {0};
	{
		t1113 * L_0 = (t1113 *)InterfaceFuncInvoker0< t1113 * >::Invoke(&m5046_MI, p0);
		V_0 = L_0;
		t1113 * L_1 = (t1113 *)InterfaceFuncInvoker0< t1113 * >::Invoke(&m5046_MI, p0);
		V_1 = L_1;
		bool L_2 = (__this->f2);
		if (L_2)
		{
			goto IL_0026;
		}
	}
	{
		InterfaceActionInvoker2< t1113 *, t1113 * >::Invoke(&m5035_MI, p0, V_0, V_1);
		goto IL_002e;
	}

IL_0026:
	{
		InterfaceActionInvoker2< t1113 *, t1113 * >::Invoke(&m5035_MI, p0, V_1, V_0);
	}

IL_002e:
	{
		t1136 * L_3 = m4591(__this, &m4591_MI);
		bool L_4 = (__this->f1);
		VirtActionInvoker2< t5 *, bool >::Invoke(&m5064_MI, L_3, p0, L_4);
		InterfaceActionInvoker0::Invoke(&m5020_MI, p0);
		t1136 * L_5 = m4578(__this, &m4578_MI);
		if (L_5)
		{
			goto IL_006a;
		}
	}
	{
		InterfaceActionInvoker1< t1113 * >::Invoke(&m5047_MI, p0, V_1);
		InterfaceActionInvoker0::Invoke(&m5019_MI, p0);
		InterfaceActionInvoker1< t1113 * >::Invoke(&m5047_MI, p0, V_0);
		goto IL_00be;
	}

IL_006a:
	{
		InterfaceActionInvoker1< t1113 * >::Invoke(&m5047_MI, p0, V_0);
		t1136 * L_6 = m4578(__this, &m4578_MI);
		VirtActionInvoker2< t5 *, bool >::Invoke(&m5064_MI, L_6, p0, p1);
		t1136 * L_7 = m4580(__this, &m4580_MI);
		if (L_7)
		{
			goto IL_0095;
		}
	}
	{
		InterfaceActionInvoker1< t1113 * >::Invoke(&m5047_MI, p0, V_1);
		goto IL_00be;
	}

IL_0095:
	{
		t1113 * L_8 = (t1113 *)InterfaceFuncInvoker0< t1113 * >::Invoke(&m5046_MI, p0);
		V_2 = L_8;
		InterfaceActionInvoker1< t1113 * >::Invoke(&m5037_MI, p0, V_2);
		InterfaceActionInvoker1< t1113 * >::Invoke(&m5047_MI, p0, V_1);
		t1136 * L_9 = m4580(__this, &m4580_MI);
		VirtActionInvoker2< t5 *, bool >::Invoke(&m5064_MI, L_9, p0, p1);
		InterfaceActionInvoker1< t1113 * >::Invoke(&m5047_MI, p0, V_2);
	}

IL_00be:
	{
		return;
	}
}
 bool m4594 (t1137 * __this, MethodInfo* method){
	{
		return 1;
	}
}
// Metadata Definition System.Text.RegularExpressions.Syntax.ExpressionAssertion
extern Il2CppType t108_0_0_1;
FieldInfo t1137_f1_FieldInfo = 
{
	"reverse", &t108_0_0_1, &t1137_TI, offsetof(t1137, f1), &EmptyCustomAttributesCache};
extern Il2CppType t108_0_0_1;
FieldInfo t1137_f2_FieldInfo = 
{
	"negate", &t108_0_0_1, &t1137_TI, offsetof(t1137, f2), &EmptyCustomAttributesCache};
static FieldInfo* t1137_FIs[] =
{
	&t1137_f1_FieldInfo,
	&t1137_f2_FieldInfo,
	NULL
};
static PropertyInfo t1137____Reverse_PropertyInfo = 
{
	&t1137_TI, "Reverse", NULL, &m4589_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1137____Negate_PropertyInfo = 
{
	&t1137_TI, "Negate", NULL, &m4590_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1137____TestExpression_PropertyInfo = 
{
	&t1137_TI, "TestExpression", &m4591_MI, &m4592_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1137_PIs[] =
{
	&t1137____Reverse_PropertyInfo,
	&t1137____Negate_PropertyInfo,
	&t1137____TestExpression_PropertyInfo,
	NULL
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m4588_MI = 
{
	".ctor", (methodPointerType)&m4588, &t1137_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 826, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t108_0_0_0;
static ParameterInfo t1137_m4589_ParameterInfos[] = 
{
	{"value", 0, 134218493, &EmptyCustomAttributesCache, &t108_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t111 (MethodInfo* method, void* obj, void** args);
MethodInfo m4589_MI = 
{
	"set_Reverse", (methodPointerType)&m4589, &t1137_TI, &t109_0_0_0, RuntimeInvoker_t109_t111, t1137_m4589_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, false, 827, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t108_0_0_0;
static ParameterInfo t1137_m4590_ParameterInfos[] = 
{
	{"value", 0, 134218494, &EmptyCustomAttributesCache, &t108_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t111 (MethodInfo* method, void* obj, void** args);
MethodInfo m4590_MI = 
{
	"set_Negate", (methodPointerType)&m4590, &t1137_TI, &t109_0_0_0, RuntimeInvoker_t109_t111, t1137_m4590_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, false, 828, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1136_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m4591_MI = 
{
	"get_TestExpression", (methodPointerType)&m4591, &t1137_TI, &t1136_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 829, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1136_0_0_0;
static ParameterInfo t1137_m4592_ParameterInfos[] = 
{
	{"value", 0, 134218495, &EmptyCustomAttributesCache, &t1136_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m4592_MI = 
{
	"set_TestExpression", (methodPointerType)&m4592, &t1137_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t1137_m4592_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, false, 830, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1139_0_0_0;
extern Il2CppType t108_0_0_0;
static ParameterInfo t1137_m4593_ParameterInfos[] = 
{
	{"cmp", 0, 134218496, &EmptyCustomAttributesCache, &t1139_0_0_0},
	{"reverse", 1, 134218497, &EmptyCustomAttributesCache, &t108_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t111 (MethodInfo* method, void* obj, void** args);
MethodInfo m4593_MI = 
{
	"Compile", (methodPointerType)&m4593, &t1137_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t111, t1137_m4593_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 2, false, false, 831, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
MethodInfo m4594_MI = 
{
	"IsComplex", (methodPointerType)&m4594, &t1137_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 198, 0, 7, 0, false, false, 832, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1137_MIs[] =
{
	&m4588_MI,
	&m4589_MI,
	&m4590_MI,
	&m4591_MI,
	&m4592_MI,
	&m4593_MI,
	&m4594_MI,
	NULL
};
static MethodInfo* t1137_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m4593_MI,
	&m4582_MI,
	&m4542_MI,
	&m4594_MI,
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType t1137_1_0_0;
struct t1137;
TypeInfo t1137_TI = 
{
	&g_System_dll_Image, NULL, "ExpressionAssertion", "System.Text.RegularExpressions.Syntax", t1137_MIs, t1137_PIs, t1137_FIs, NULL, &t1135_TI, NULL, NULL, &t1137_TI, NULL, t1137_VT, &EmptyCustomAttributesCache, &t1137_TI, &t1137_0_0_0, &t1137_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1137), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, false, false, false, false, false, false, false, 7, 3, 2, 0, 0, 8, 0, 0};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m4596_MI;
extern MethodInfo m5036_MI;
extern MethodInfo m5044_MI;
extern MethodInfo m5045_MI;


 void m4595 (t1148 * __this, MethodInfo* method){
	{
		m4543(__this, &m4543_MI);
		return;
	}
}
 t1138 * m4596 (t1148 * __this, MethodInfo* method){
	{
		t1138 * L_0 = m4544(__this, &m4544_MI);
		return L_0;
	}
}
 void m4597 (t1148 * __this, t1136 * p0, MethodInfo* method){
	{
		t1138 * L_0 = m4596(__this, &m4596_MI);
		m4536(L_0, p0, &m4536_MI);
		return;
	}
}
extern MethodInfo m4598_MI;
 void m4598 (t1148 * __this, t5 * p0, bool p1, MethodInfo* method){
	t1113 * V_0 = {0};
	t1136 * V_1 = {0};
	t5 * V_2 = {0};
	t1113 * V_3 = {0};
	t5 * V_4 = {0};
	int32_t leaveInstructions[1] = {0};
	t142 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t142 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	{
		t1113 * L_0 = (t1113 *)InterfaceFuncInvoker0< t1113 * >::Invoke(&m5046_MI, p0);
		V_0 = L_0;
		t1138 * L_1 = m4596(__this, &m4596_MI);
		t5 * L_2 = (t5 *)VirtFuncInvoker0< t5 * >::Invoke(&m4924_MI, L_1);
		V_2 = L_2;
	}

IL_0013:
	try
	{ // begin try (depth: 1)
		{
			goto IL_004e;
		}

IL_0018:
		{
			t5 * L_3 = (t5 *)InterfaceFuncInvoker0< t5 * >::Invoke(&m4765_MI, V_2);
			V_1 = ((t1136 *)Castclass(L_3, InitializedTypeInfo(&t1136_TI)));
			t1113 * L_4 = (t1113 *)InterfaceFuncInvoker0< t1113 * >::Invoke(&m5046_MI, p0);
			V_3 = L_4;
			InterfaceActionInvoker1< t1113 * >::Invoke(&m5036_MI, p0, V_3);
			VirtActionInvoker2< t5 *, bool >::Invoke(&m5064_MI, V_1, p0, p1);
			InterfaceActionInvoker1< t1113 * >::Invoke(&m5037_MI, p0, V_0);
			InterfaceActionInvoker1< t1113 * >::Invoke(&m5047_MI, p0, V_3);
			InterfaceActionInvoker0::Invoke(&m5044_MI, p0);
		}

IL_004e:
		{
			bool L_5 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&m747_MI, V_2);
			if (L_5)
			{
				goto IL_0018;
			}
		}

IL_0059:
		{
			// IL_0059: leave IL_0073
			leaveInstructions[0] = 0x73; // 1
			THROW_SENTINEL(IL_0073);
			// finally target depth: 1
		}
	} // end try (depth: 1)
	catch(Il2CppFinallySentinel& e)
	{
		goto IL_005e;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t142 *)e.ex;
		goto IL_005e;
	}

IL_005e:
	{ // begin finally (depth: 1)
		{
			V_4 = ((t5 *)IsInst(V_2, InitializedTypeInfo(&t132_TI)));
			if (V_4)
			{
				goto IL_006b;
			}
		}

IL_006a:
		{
			// finally node depth: 1
			switch (leaveInstructions[0])
			{
				case 0x73:
					goto IL_0073;
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

IL_006b:
		{
			InterfaceActionInvoker0::Invoke(&m516_MI, V_4);
			// finally node depth: 1
			switch (leaveInstructions[0])
			{
				case 0x73:
					goto IL_0073;
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

IL_0073:
	{
		InterfaceActionInvoker0::Invoke(&m5019_MI, p0);
		InterfaceActionInvoker1< t1113 * >::Invoke(&m5047_MI, p0, V_0);
		InterfaceActionInvoker0::Invoke(&m5045_MI, p0);
		return;
	}
}
extern MethodInfo m4599_MI;
 void m4599 (t1148 * __this, int32_t* p0, int32_t* p1, MethodInfo* method){
	{
		t1138 * L_0 = m4596(__this, &m4596_MI);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m4891_MI, L_0);
		m4545(__this, p0, p1, L_1, &m4545_MI);
		return;
	}
}
// Metadata Definition System.Text.RegularExpressions.Syntax.Alternation
static PropertyInfo t1148____Alternatives_PropertyInfo = 
{
	&t1148_TI, "Alternatives", &m4596_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1148_PIs[] =
{
	&t1148____Alternatives_PropertyInfo,
	NULL
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m4595_MI = 
{
	".ctor", (methodPointerType)&m4595, &t1148_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 833, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1138_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m4596_MI = 
{
	"get_Alternatives", (methodPointerType)&m4596, &t1148_TI, &t1138_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 834, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1136_0_0_0;
static ParameterInfo t1148_m4597_ParameterInfos[] = 
{
	{"e", 0, 134218498, &EmptyCustomAttributesCache, &t1136_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m4597_MI = 
{
	"AddAlternative", (methodPointerType)&m4597, &t1148_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t1148_m4597_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 835, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1139_0_0_0;
extern Il2CppType t108_0_0_0;
static ParameterInfo t1148_m4598_ParameterInfos[] = 
{
	{"cmp", 0, 134218499, &EmptyCustomAttributesCache, &t1139_0_0_0},
	{"reverse", 1, 134218500, &EmptyCustomAttributesCache, &t108_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t111 (MethodInfo* method, void* obj, void** args);
MethodInfo m4598_MI = 
{
	"Compile", (methodPointerType)&m4598, &t1148_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t111, t1148_m4598_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 2, false, false, 836, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t110_1_0_2;
extern Il2CppType t110_1_0_2;
static ParameterInfo t1148_m4599_ParameterInfos[] = 
{
	{"min", 0, 134218501, &EmptyCustomAttributesCache, &t110_1_0_2},
	{"max", 1, 134218502, &EmptyCustomAttributesCache, &t110_1_0_2},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t533_t533 (MethodInfo* method, void* obj, void** args);
MethodInfo m4599_MI = 
{
	"GetWidth", (methodPointerType)&m4599, &t1148_TI, &t109_0_0_0, RuntimeInvoker_t109_t533_t533, t1148_m4599_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 5, 2, false, false, 837, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1148_MIs[] =
{
	&m4595_MI,
	&m4596_MI,
	&m4597_MI,
	&m4598_MI,
	&m4599_MI,
	NULL
};
static MethodInfo* t1148_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m4598_MI,
	&m4599_MI,
	&m4542_MI,
	&m4546_MI,
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType t1148_0_0_0;
extern Il2CppType t1148_1_0_0;
struct t1148;
TypeInfo t1148_TI = 
{
	&g_System_dll_Image, NULL, "Alternation", "System.Text.RegularExpressions.Syntax", t1148_MIs, t1148_PIs, NULL, NULL, &t1141_TI, NULL, NULL, &t1148_TI, NULL, t1148_VT, &EmptyCustomAttributesCache, &t1148_TI, &t1148_0_0_0, &t1148_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1148), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, false, false, false, false, false, false, false, 5, 1, 0, 0, 0, 8, 0, 0};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m5021_MI;
extern MethodInfo m4601_MI;


 void m4600 (t1147 * __this, t11* p0, bool p1, MethodInfo* method){
	{
		m4540(__this, &m4540_MI);
		__this->f0 = p0;
		__this->f1 = p1;
		return;
	}
}
 void m4601 (t5 * __this, t11* p0, t5 * p1, bool p2, bool p3, MethodInfo* method){
	{
		int32_t L_0 = m2358(p0, &m2358_MI);
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
		int32_t L_1 = m2358(p0, &m2358_MI);
		if ((((uint32_t)L_1) != ((uint32_t)1)))
		{
			goto IL_002d;
		}
	}
	{
		uint16_t L_2 = m2385(p0, 0, &m2385_MI);
		InterfaceActionInvoker4< uint16_t, bool, bool, bool >::Invoke(&m5021_MI, p1, L_2, 0, p2, p3);
		goto IL_0036;
	}

IL_002d:
	{
		InterfaceActionInvoker3< t11*, bool, bool >::Invoke(&m5026_MI, p1, p0, p2, p3);
	}

IL_0036:
	{
		return;
	}
}
extern MethodInfo m4602_MI;
 void m4602 (t1147 * __this, t5 * p0, bool p1, MethodInfo* method){
	{
		t11* L_0 = (__this->f0);
		bool L_1 = (__this->f1);
		m4601(NULL, L_0, p0, L_1, p1, &m4601_MI);
		return;
	}
}
extern MethodInfo m4603_MI;
 void m4603 (t1147 * __this, int32_t* p0, int32_t* p1, MethodInfo* method){
	int32_t V_0 = 0;
	{
		t11* L_0 = (__this->f0);
		int32_t L_1 = m2358(L_0, &m2358_MI);
		int32_t L_2 = L_1;
		V_0 = L_2;
		*((int32_t*)(p1)) = (int32_t)L_2;
		*((int32_t*)(p0)) = (int32_t)V_0;
		return;
	}
}
extern MethodInfo m4604_MI;
 t1140 * m4604 (t1147 * __this, bool p0, MethodInfo* method){
	{
		t11* L_0 = (__this->f0);
		int32_t L_1 = m2358(L_0, &m2358_MI);
		t11* L_2 = (__this->f0);
		bool L_3 = (__this->f1);
		t1140 * L_4 = (t1140 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1140_TI));
		m4632(L_4, __this, 0, L_1, L_2, L_3, &m4632_MI);
		return L_4;
	}
}
extern MethodInfo m4605_MI;
 bool m4605 (t1147 * __this, MethodInfo* method){
	{
		return 0;
	}
}
// Metadata Definition System.Text.RegularExpressions.Syntax.Literal
extern Il2CppType t11_0_0_1;
FieldInfo t1147_f0_FieldInfo = 
{
	"str", &t11_0_0_1, &t1147_TI, offsetof(t1147, f0), &EmptyCustomAttributesCache};
extern Il2CppType t108_0_0_1;
FieldInfo t1147_f1_FieldInfo = 
{
	"ignore", &t108_0_0_1, &t1147_TI, offsetof(t1147, f1), &EmptyCustomAttributesCache};
static FieldInfo* t1147_FIs[] =
{
	&t1147_f0_FieldInfo,
	&t1147_f1_FieldInfo,
	NULL
};
extern Il2CppType t11_0_0_0;
extern Il2CppType t108_0_0_0;
static ParameterInfo t1147_m4600_ParameterInfos[] = 
{
	{"str", 0, 134218503, &EmptyCustomAttributesCache, &t11_0_0_0},
	{"ignore", 1, 134218504, &EmptyCustomAttributesCache, &t108_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t111 (MethodInfo* method, void* obj, void** args);
MethodInfo m4600_MI = 
{
	".ctor", (methodPointerType)&m4600, &t1147_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t111, t1147_m4600_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, false, 838, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t11_0_0_0;
extern Il2CppType t1139_0_0_0;
extern Il2CppType t108_0_0_0;
extern Il2CppType t108_0_0_0;
static ParameterInfo t1147_m4601_ParameterInfos[] = 
{
	{"str", 0, 134218505, &EmptyCustomAttributesCache, &t11_0_0_0},
	{"cmp", 1, 134218506, &EmptyCustomAttributesCache, &t1139_0_0_0},
	{"ignore", 2, 134218507, &EmptyCustomAttributesCache, &t108_0_0_0},
	{"reverse", 3, 134218508, &EmptyCustomAttributesCache, &t108_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t5_t111_t111 (MethodInfo* method, void* obj, void** args);
MethodInfo m4601_MI = 
{
	"CompileLiteral", (methodPointerType)&m4601, &t1147_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t5_t111_t111, t1147_m4601_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 4, false, false, 839, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1139_0_0_0;
extern Il2CppType t108_0_0_0;
static ParameterInfo t1147_m4602_ParameterInfos[] = 
{
	{"cmp", 0, 134218509, &EmptyCustomAttributesCache, &t1139_0_0_0},
	{"reverse", 1, 134218510, &EmptyCustomAttributesCache, &t108_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t111 (MethodInfo* method, void* obj, void** args);
MethodInfo m4602_MI = 
{
	"Compile", (methodPointerType)&m4602, &t1147_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t111, t1147_m4602_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 2, false, false, 840, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t110_1_0_2;
extern Il2CppType t110_1_0_2;
static ParameterInfo t1147_m4603_ParameterInfos[] = 
{
	{"min", 0, 134218511, &EmptyCustomAttributesCache, &t110_1_0_2},
	{"max", 1, 134218512, &EmptyCustomAttributesCache, &t110_1_0_2},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t533_t533 (MethodInfo* method, void* obj, void** args);
MethodInfo m4603_MI = 
{
	"GetWidth", (methodPointerType)&m4603, &t1147_TI, &t109_0_0_0, RuntimeInvoker_t109_t533_t533, t1147_m4603_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 5, 2, false, false, 841, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t108_0_0_0;
static ParameterInfo t1147_m4604_ParameterInfos[] = 
{
	{"reverse", 0, 134218513, &EmptyCustomAttributesCache, &t108_0_0_0},
};
extern Il2CppType t1140_0_0_0;
extern void* RuntimeInvoker_t5_t111 (MethodInfo* method, void* obj, void** args);
MethodInfo m4604_MI = 
{
	"GetAnchorInfo", (methodPointerType)&m4604, &t1147_TI, &t1140_0_0_0, RuntimeInvoker_t5_t111, t1147_m4604_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 6, 1, false, false, 842, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
MethodInfo m4605_MI = 
{
	"IsComplex", (methodPointerType)&m4605, &t1147_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 198, 0, 7, 0, false, false, 843, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1147_MIs[] =
{
	&m4600_MI,
	&m4601_MI,
	&m4602_MI,
	&m4603_MI,
	&m4604_MI,
	&m4605_MI,
	NULL
};
static MethodInfo* t1147_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m4602_MI,
	&m4603_MI,
	&m4604_MI,
	&m4605_MI,
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType t1147_1_0_0;
struct t1147;
TypeInfo t1147_TI = 
{
	&g_System_dll_Image, NULL, "Literal", "System.Text.RegularExpressions.Syntax", t1147_MIs, NULL, t1147_FIs, NULL, &t1136_TI, NULL, NULL, &t1147_TI, NULL, t1147_VT, &EmptyCustomAttributesCache, &t1147_TI, &t1147_0_0_0, &t1147_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1147), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, false, false, false, false, false, false, false, 6, 0, 2, 0, 0, 8, 0, 0};
#ifndef _MSC_VER
#else
#endif



 void m4606 (t1149 * __this, uint16_t p0, MethodInfo* method){
	{
		m4540(__this, &m4540_MI);
		__this->f0 = p0;
		return;
	}
}
extern MethodInfo m4607_MI;
 void m4607 (t1149 * __this, t5 * p0, bool p1, MethodInfo* method){
	{
		uint16_t L_0 = (__this->f0);
		InterfaceActionInvoker1< uint16_t >::Invoke(&m5027_MI, p0, L_0);
		return;
	}
}
extern MethodInfo m4608_MI;
 void m4608 (t1149 * __this, int32_t* p0, int32_t* p1, MethodInfo* method){
	int32_t V_0 = 0;
	{
		int32_t L_0 = 0;
		V_0 = L_0;
		*((int32_t*)(p1)) = (int32_t)L_0;
		*((int32_t*)(p0)) = (int32_t)V_0;
		return;
	}
}
extern MethodInfo m4609_MI;
 bool m4609 (t1149 * __this, MethodInfo* method){
	{
		return 0;
	}
}
extern MethodInfo m4610_MI;
 t1140 * m4610 (t1149 * __this, bool p0, MethodInfo* method){
	uint16_t V_0 = {0};
	{
		uint16_t L_0 = (__this->f0);
		V_0 = L_0;
		if (((uint16_t)(V_0-2)) == 0)
		{
			goto IL_0020;
		}
		if (((uint16_t)(V_0-2)) == 1)
		{
			goto IL_0020;
		}
		if (((uint16_t)(V_0-2)) == 2)
		{
			goto IL_0020;
		}
	}
	{
		goto IL_002f;
	}

IL_0020:
	{
		uint16_t L_1 = (__this->f0);
		t1140 * L_2 = (t1140 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1140_TI));
		m4633(L_2, __this, 0, 0, L_1, &m4633_MI);
		return L_2;
	}

IL_002f:
	{
		t1140 * L_3 = (t1140 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1140_TI));
		m4631(L_3, __this, 0, &m4631_MI);
		return L_3;
	}
}
// Metadata Definition System.Text.RegularExpressions.Syntax.PositionAssertion
extern Il2CppType t1106_0_0_1;
FieldInfo t1149_f0_FieldInfo = 
{
	"pos", &t1106_0_0_1, &t1149_TI, offsetof(t1149, f0), &EmptyCustomAttributesCache};
static FieldInfo* t1149_FIs[] =
{
	&t1149_f0_FieldInfo,
	NULL
};
extern Il2CppType t1106_0_0_0;
static ParameterInfo t1149_m4606_ParameterInfos[] = 
{
	{"pos", 0, 134218514, &EmptyCustomAttributesCache, &t1106_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t764 (MethodInfo* method, void* obj, void** args);
MethodInfo m4606_MI = 
{
	".ctor", (methodPointerType)&m4606, &t1149_TI, &t109_0_0_0, RuntimeInvoker_t109_t764, t1149_m4606_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 844, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1139_0_0_0;
extern Il2CppType t108_0_0_0;
static ParameterInfo t1149_m4607_ParameterInfos[] = 
{
	{"cmp", 0, 134218515, &EmptyCustomAttributesCache, &t1139_0_0_0},
	{"reverse", 1, 134218516, &EmptyCustomAttributesCache, &t108_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t111 (MethodInfo* method, void* obj, void** args);
MethodInfo m4607_MI = 
{
	"Compile", (methodPointerType)&m4607, &t1149_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t111, t1149_m4607_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 2, false, false, 845, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t110_1_0_2;
extern Il2CppType t110_1_0_2;
static ParameterInfo t1149_m4608_ParameterInfos[] = 
{
	{"min", 0, 134218517, &EmptyCustomAttributesCache, &t110_1_0_2},
	{"max", 1, 134218518, &EmptyCustomAttributesCache, &t110_1_0_2},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t533_t533 (MethodInfo* method, void* obj, void** args);
MethodInfo m4608_MI = 
{
	"GetWidth", (methodPointerType)&m4608, &t1149_TI, &t109_0_0_0, RuntimeInvoker_t109_t533_t533, t1149_m4608_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 5, 2, false, false, 846, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
MethodInfo m4609_MI = 
{
	"IsComplex", (methodPointerType)&m4609, &t1149_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 198, 0, 7, 0, false, false, 847, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t108_0_0_0;
static ParameterInfo t1149_m4610_ParameterInfos[] = 
{
	{"revers", 0, 134218519, &EmptyCustomAttributesCache, &t108_0_0_0},
};
extern Il2CppType t1140_0_0_0;
extern void* RuntimeInvoker_t5_t111 (MethodInfo* method, void* obj, void** args);
MethodInfo m4610_MI = 
{
	"GetAnchorInfo", (methodPointerType)&m4610, &t1149_TI, &t1140_0_0_0, RuntimeInvoker_t5_t111, t1149_m4610_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 6, 1, false, false, 848, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1149_MIs[] =
{
	&m4606_MI,
	&m4607_MI,
	&m4608_MI,
	&m4609_MI,
	&m4610_MI,
	NULL
};
static MethodInfo* t1149_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m4607_MI,
	&m4608_MI,
	&m4610_MI,
	&m4609_MI,
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType t1149_0_0_0;
extern Il2CppType t1149_1_0_0;
struct t1149;
TypeInfo t1149_TI = 
{
	&g_System_dll_Image, NULL, "PositionAssertion", "System.Text.RegularExpressions.Syntax", t1149_MIs, NULL, t1149_FIs, NULL, &t1136_TI, NULL, NULL, &t1149_TI, NULL, t1149_VT, &EmptyCustomAttributesCache, &t1149_TI, &t1149_0_0_0, &t1149_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1149), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, false, false, false, false, false, false, false, 5, 0, 1, 0, 0, 8, 0, 0};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m5032_MI;


 void m4611 (t1150 * __this, bool p0, MethodInfo* method){
	{
		m4540(__this, &m4540_MI);
		__this->f1 = p0;
		return;
	}
}
extern MethodInfo m4612_MI;
 t1142 * m4612 (t1150 * __this, MethodInfo* method){
	{
		t1142 * L_0 = (__this->f0);
		return L_0;
	}
}
 void m4613 (t1150 * __this, t1142 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		return;
	}
}
extern MethodInfo m4614_MI;
 bool m4614 (t1150 * __this, MethodInfo* method){
	{
		bool L_0 = (__this->f1);
		return L_0;
	}
}
extern MethodInfo m4615_MI;
 void m4615 (t1150 * __this, t5 * p0, bool p1, MethodInfo* method){
	{
		t1142 * L_0 = (__this->f0);
		int32_t L_1 = m4556(L_0, &m4556_MI);
		bool L_2 = (__this->f1);
		InterfaceActionInvoker3< int32_t, bool, bool >::Invoke(&m5032_MI, p0, L_1, L_2, p1);
		return;
	}
}
extern MethodInfo m4616_MI;
 void m4616 (t1150 * __this, int32_t* p0, int32_t* p1, MethodInfo* method){
	{
		*((int32_t*)(p0)) = (int32_t)0;
		*((int32_t*)(p1)) = (int32_t)((int32_t)2147483647);
		return;
	}
}
extern MethodInfo m4617_MI;
 bool m4617 (t1150 * __this, MethodInfo* method){
	{
		return 1;
	}
}
// Metadata Definition System.Text.RegularExpressions.Syntax.Reference
extern Il2CppType t1142_0_0_1;
FieldInfo t1150_f0_FieldInfo = 
{
	"group", &t1142_0_0_1, &t1150_TI, offsetof(t1150, f0), &EmptyCustomAttributesCache};
extern Il2CppType t108_0_0_1;
FieldInfo t1150_f1_FieldInfo = 
{
	"ignore", &t108_0_0_1, &t1150_TI, offsetof(t1150, f1), &EmptyCustomAttributesCache};
static FieldInfo* t1150_FIs[] =
{
	&t1150_f0_FieldInfo,
	&t1150_f1_FieldInfo,
	NULL
};
static PropertyInfo t1150____CapturingGroup_PropertyInfo = 
{
	&t1150_TI, "CapturingGroup", &m4612_MI, &m4613_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1150____IgnoreCase_PropertyInfo = 
{
	&t1150_TI, "IgnoreCase", &m4614_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1150_PIs[] =
{
	&t1150____CapturingGroup_PropertyInfo,
	&t1150____IgnoreCase_PropertyInfo,
	NULL
};
extern Il2CppType t108_0_0_0;
static ParameterInfo t1150_m4611_ParameterInfos[] = 
{
	{"ignore", 0, 134218520, &EmptyCustomAttributesCache, &t108_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t111 (MethodInfo* method, void* obj, void** args);
MethodInfo m4611_MI = 
{
	".ctor", (methodPointerType)&m4611, &t1150_TI, &t109_0_0_0, RuntimeInvoker_t109_t111, t1150_m4611_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 849, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1142_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m4612_MI = 
{
	"get_CapturingGroup", (methodPointerType)&m4612, &t1150_TI, &t1142_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 850, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1142_0_0_0;
static ParameterInfo t1150_m4613_ParameterInfos[] = 
{
	{"value", 0, 134218521, &EmptyCustomAttributesCache, &t1142_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m4613_MI = 
{
	"set_CapturingGroup", (methodPointerType)&m4613, &t1150_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t1150_m4613_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, false, 851, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
MethodInfo m4614_MI = 
{
	"get_IgnoreCase", (methodPointerType)&m4614, &t1150_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 852, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1139_0_0_0;
extern Il2CppType t108_0_0_0;
static ParameterInfo t1150_m4615_ParameterInfos[] = 
{
	{"cmp", 0, 134218522, &EmptyCustomAttributesCache, &t1139_0_0_0},
	{"reverse", 1, 134218523, &EmptyCustomAttributesCache, &t108_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t111 (MethodInfo* method, void* obj, void** args);
MethodInfo m4615_MI = 
{
	"Compile", (methodPointerType)&m4615, &t1150_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t111, t1150_m4615_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 2, false, false, 853, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t110_1_0_2;
extern Il2CppType t110_1_0_2;
static ParameterInfo t1150_m4616_ParameterInfos[] = 
{
	{"min", 0, 134218524, &EmptyCustomAttributesCache, &t110_1_0_2},
	{"max", 1, 134218525, &EmptyCustomAttributesCache, &t110_1_0_2},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t533_t533 (MethodInfo* method, void* obj, void** args);
MethodInfo m4616_MI = 
{
	"GetWidth", (methodPointerType)&m4616, &t1150_TI, &t109_0_0_0, RuntimeInvoker_t109_t533_t533, t1150_m4616_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 5, 2, false, false, 854, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
MethodInfo m4617_MI = 
{
	"IsComplex", (methodPointerType)&m4617, &t1150_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 198, 0, 7, 0, false, false, 855, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1150_MIs[] =
{
	&m4611_MI,
	&m4612_MI,
	&m4613_MI,
	&m4614_MI,
	&m4615_MI,
	&m4616_MI,
	&m4617_MI,
	NULL
};
static MethodInfo* t1150_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m4615_MI,
	&m4616_MI,
	&m4542_MI,
	&m4617_MI,
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType t1150_0_0_0;
extern Il2CppType t1150_1_0_0;
struct t1150;
TypeInfo t1150_TI = 
{
	&g_System_dll_Image, NULL, "Reference", "System.Text.RegularExpressions.Syntax", t1150_MIs, t1150_PIs, t1150_FIs, NULL, &t1136_TI, NULL, NULL, &t1150_TI, NULL, t1150_VT, &EmptyCustomAttributesCache, &t1150_TI, &t1150_0_0_0, &t1150_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1150), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, false, false, false, false, false, false, false, 7, 2, 2, 0, 0, 8, 0, 0};
#ifndef _MSC_VER
#else
#endif



 void m4618 (t1151 * __this, bool p0, bool p1, MethodInfo* method){
	{
		m4611(__this, p0, &m4611_MI);
		__this->f3 = p1;
		return;
	}
}
 bool m4619 (t1151 * __this, t11* p0, t984 * p1, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		bool L_0 = (__this->f3);
		if (!L_0)
		{
			goto IL_006c;
		}
	}
	{
		V_0 = 0;
		V_1 = 1;
		goto IL_002d;
	}

IL_0014:
	{
		t11* L_1 = m2386(p0, 0, V_1, &m2386_MI);
		t5 * L_2 = (t5 *)VirtFuncInvoker1< t5 *, t5 * >::Invoke(&m4782_MI, p1, L_1);
		if (!L_2)
		{
			goto IL_0029;
		}
	}
	{
		V_0 = V_1;
	}

IL_0029:
	{
		V_1 = ((int32_t)(V_1+1));
	}

IL_002d:
	{
		int32_t L_3 = m2358(p0, &m2358_MI);
		if ((((int32_t)V_1) < ((int32_t)L_3)))
		{
			goto IL_0014;
		}
	}
	{
		if (!V_0)
		{
			goto IL_0067;
		}
	}
	{
		t11* L_4 = m2386(p0, 0, V_0, &m2386_MI);
		t5 * L_5 = (t5 *)VirtFuncInvoker1< t5 *, t5 * >::Invoke(&m4782_MI, p1, L_4);
		m4613(__this, ((t1142 *)Castclass(L_5, InitializedTypeInfo(&t1142_TI))), &m4613_MI);
		t11* L_6 = m2415(p0, V_0, &m2415_MI);
		__this->f2 = L_6;
		return 1;
	}

IL_0067:
	{
		goto IL_007a;
	}

IL_006c:
	{
		int32_t L_7 = m2358(p0, &m2358_MI);
		if ((((uint32_t)L_7) != ((uint32_t)1)))
		{
			goto IL_007a;
		}
	}
	{
		return 0;
	}

IL_007a:
	{
		V_2 = 0;
		int32_t L_8 = m4499(NULL, p0, (&V_2), &m4499_MI);
		V_3 = L_8;
		if ((((uint32_t)V_3) != ((uint32_t)(-1))))
		{
			goto IL_008e;
		}
	}
	{
		return 0;
	}

IL_008e:
	{
		if ((((int32_t)V_3) <= ((int32_t)((int32_t)255))))
		{
			goto IL_00ac;
		}
	}
	{
		bool L_9 = (__this->f3);
		if (!L_9)
		{
			goto IL_00ac;
		}
	}
	{
		V_3 = ((int32_t)((int32_t)V_3/(int32_t)8));
		V_2 = ((int32_t)(V_2-1));
	}

IL_00ac:
	{
		V_3 = ((int32_t)((int32_t)V_3&(int32_t)((int32_t)255)));
		uint16_t L_10 = (((uint16_t)V_3));
		t5 * L_11 = Box(InitializedTypeInfo(&t144_TI), &L_10);
		t11* L_12 = m2415(p0, V_2, &m2415_MI);
		IL2CPP_RUNTIME_CLASS_INIT((&t11_TI));
		t11* L_13 = m1972(NULL, L_11, L_12, &m1972_MI);
		__this->f2 = L_13;
		return 1;
	}
}
extern MethodInfo m4620_MI;
 void m4620 (t1151 * __this, t5 * p0, bool p1, MethodInfo* method){
	{
		t1142 * L_0 = m4612(__this, &m4612_MI);
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		m4615(__this, p0, p1, &m4615_MI);
	}

IL_0013:
	{
		t11* L_1 = (__this->f2);
		if (!L_1)
		{
			goto IL_0031;
		}
	}
	{
		t11* L_2 = (__this->f2);
		bool L_3 = m4614(__this, &m4614_MI);
		m4601(NULL, L_2, p0, L_3, p1, &m4601_MI);
	}

IL_0031:
	{
		return;
	}
}
// Metadata Definition System.Text.RegularExpressions.Syntax.BackslashNumber
extern Il2CppType t11_0_0_1;
FieldInfo t1151_f2_FieldInfo = 
{
	"literal", &t11_0_0_1, &t1151_TI, offsetof(t1151, f2), &EmptyCustomAttributesCache};
extern Il2CppType t108_0_0_1;
FieldInfo t1151_f3_FieldInfo = 
{
	"ecma", &t108_0_0_1, &t1151_TI, offsetof(t1151, f3), &EmptyCustomAttributesCache};
static FieldInfo* t1151_FIs[] =
{
	&t1151_f2_FieldInfo,
	&t1151_f3_FieldInfo,
	NULL
};
extern Il2CppType t108_0_0_0;
extern Il2CppType t108_0_0_0;
static ParameterInfo t1151_m4618_ParameterInfos[] = 
{
	{"ignore", 0, 134218526, &EmptyCustomAttributesCache, &t108_0_0_0},
	{"ecma", 1, 134218527, &EmptyCustomAttributesCache, &t108_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t111_t111 (MethodInfo* method, void* obj, void** args);
MethodInfo m4618_MI = 
{
	".ctor", (methodPointerType)&m4618, &t1151_TI, &t109_0_0_0, RuntimeInvoker_t109_t111_t111, t1151_m4618_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, false, 856, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t11_0_0_0;
extern Il2CppType t984_0_0_0;
static ParameterInfo t1151_m4619_ParameterInfos[] = 
{
	{"num_str", 0, 134218528, &EmptyCustomAttributesCache, &t11_0_0_0},
	{"groups", 1, 134218529, &EmptyCustomAttributesCache, &t984_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m4619_MI = 
{
	"ResolveReference", (methodPointerType)&m4619, &t1151_TI, &t108_0_0_0, RuntimeInvoker_t108_t5_t5, t1151_m4619_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 2, false, false, 857, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1139_0_0_0;
extern Il2CppType t108_0_0_0;
static ParameterInfo t1151_m4620_ParameterInfos[] = 
{
	{"cmp", 0, 134218530, &EmptyCustomAttributesCache, &t1139_0_0_0},
	{"reverse", 1, 134218531, &EmptyCustomAttributesCache, &t108_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t111 (MethodInfo* method, void* obj, void** args);
MethodInfo m4620_MI = 
{
	"Compile", (methodPointerType)&m4620, &t1151_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t111, t1151_m4620_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 2, false, false, 858, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1151_MIs[] =
{
	&m4618_MI,
	&m4619_MI,
	&m4620_MI,
	NULL
};
static MethodInfo* t1151_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m4620_MI,
	&m4616_MI,
	&m4542_MI,
	&m4617_MI,
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType t1151_0_0_0;
extern Il2CppType t1151_1_0_0;
struct t1151;
TypeInfo t1151_TI = 
{
	&g_System_dll_Image, NULL, "BackslashNumber", "System.Text.RegularExpressions.Syntax", t1151_MIs, NULL, t1151_FIs, NULL, &t1150_TI, NULL, NULL, &t1151_TI, NULL, t1151_VT, &EmptyCustomAttributesCache, &t1151_TI, &t1151_0_0_0, &t1151_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1151), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, false, false, false, false, false, false, false, 3, 0, 2, 0, 0, 8, 0, 0};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t1119_TI;
extern MethodInfo m5068_MI;
extern MethodInfo m5069_MI;
extern MethodInfo m4630_MI;
extern MethodInfo m5040_MI;
extern MethodInfo m5025_MI;
extern MethodInfo m5024_MI;
extern MethodInfo m5022_MI;
extern MethodInfo m5023_MI;


 void m4621 (t1152 * __this, bool p0, bool p1, MethodInfo* method){
	int32_t V_0 = 0;
	{
		m4540(__this, &m4540_MI);
		__this->f1 = p0;
		__this->f2 = p1;
		t1131 * L_0 = (t1131 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1131_TI));
		m4486(L_0, &m4486_MI);
		__this->f5 = L_0;
		V_0 = ((int32_t)144);
		t1119 * L_1 = (t1119 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1119_TI));
		m5068(L_1, V_0, &m5068_MI);
		__this->f3 = L_1;
		t1119 * L_2 = (t1119 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1119_TI));
		m5068(L_2, V_0, &m5068_MI);
		__this->f4 = L_2;
		return;
	}
}
 void m4622 (t1152 * __this, uint16_t p0, bool p1, MethodInfo* method){
	{
		m4621(__this, 0, 0, &m4621_MI);
		m4624(__this, p0, p1, &m4624_MI);
		return;
	}
}
extern MethodInfo m4623_MI;
 void m4623 (t5 * __this, MethodInfo* method){
	{
		t1127  L_0 = {0};
		m4465(&L_0, ((int32_t)65), ((int32_t)90), &m4465_MI);
		((t1152_SFs*)InitializedTypeInfo(&t1152_TI)->static_fields)->f0 = L_0;
		return;
	}
}
 void m4624 (t1152 * __this, uint16_t p0, bool p1, MethodInfo* method){
	int32_t V_0 = 0;
	{
		V_0 = p0;
		if (!p1)
		{
			goto IL_001a;
		}
	}
	{
		t1119 * L_0 = (__this->f4);
		m5069(L_0, V_0, 1, &m5069_MI);
		goto IL_0027;
	}

IL_001a:
	{
		t1119 * L_1 = (__this->f3);
		m5069(L_1, V_0, 1, &m5069_MI);
	}

IL_0027:
	{
		return;
	}
}
 void m4625 (t1152 * __this, uint16_t p0, MethodInfo* method){
	{
		m4626(__this, p0, p0, &m4626_MI);
		return;
	}
}
 void m4626 (t1152 * __this, uint16_t p0, uint16_t p1, MethodInfo* method){
	t1127  V_0 = {0};
	t1127  V_1 = {0};
	{
		m4465((&V_0), p0, p1, &m4465_MI);
		bool L_0 = (__this->f2);
		if (!L_0)
		{
			goto IL_00e2;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1152_TI));
		bool L_1 = m4475((&((t1152_SFs*)InitializedTypeInfo(&t1152_TI)->static_fields)->f0), V_0, &m4475_MI);
		if (!L_1)
		{
			goto IL_00b2;
		}
	}
	{
		int32_t L_2 = ((&V_0)->f0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1152_TI));
		int32_t L_3 = ((&((t1152_SFs*)InitializedTypeInfo(&t1152_TI)->static_fields)->f0)->f0);
		if ((((int32_t)L_2) >= ((int32_t)L_3)))
		{
			goto IL_0070;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1152_TI));
		int32_t L_4 = ((&((t1152_SFs*)InitializedTypeInfo(&t1152_TI)->static_fields)->f0)->f0);
		int32_t L_5 = ((&V_0)->f1);
		m4465((&V_1), ((int32_t)(L_4+((int32_t)32))), ((int32_t)(L_5+((int32_t)32))), &m4465_MI);
		int32_t L_6 = ((&((t1152_SFs*)InitializedTypeInfo(&t1152_TI)->static_fields)->f0)->f0);
		(&V_0)->f1 = ((int32_t)(L_6-1));
		goto IL_00a1;
	}

IL_0070:
	{
		int32_t L_7 = ((&V_0)->f0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1152_TI));
		int32_t L_8 = ((&((t1152_SFs*)InitializedTypeInfo(&t1152_TI)->static_fields)->f0)->f1);
		m4465((&V_1), ((int32_t)(L_7+((int32_t)32))), ((int32_t)(L_8+((int32_t)32))), &m4465_MI);
		int32_t L_9 = ((&((t1152_SFs*)InitializedTypeInfo(&t1152_TI)->static_fields)->f0)->f1);
		(&V_0)->f0 = ((int32_t)(L_9+1));
	}

IL_00a1:
	{
		t1131 * L_10 = (__this->f5);
		m4488(L_10, V_1, &m4488_MI);
		goto IL_00e2;
	}

IL_00b2:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1152_TI));
		bool L_11 = m4473((&((t1152_SFs*)InitializedTypeInfo(&t1152_TI)->static_fields)->f0), V_0, &m4473_MI);
		if (!L_11)
		{
			goto IL_00e2;
		}
	}
	{
		t1127 * L_12 = (&V_0);
		int32_t L_13 = (L_12->f1);
		L_12->f1 = ((int32_t)(L_13+((int32_t)32)));
		t1127 * L_14 = (&V_0);
		int32_t L_15 = (L_14->f0);
		L_14->f0 = ((int32_t)(L_15+((int32_t)32)));
	}

IL_00e2:
	{
		t1131 * L_16 = (__this->f5);
		m4488(L_16, V_0, &m4488_MI);
		return;
	}
}
extern MethodInfo m4627_MI;
 void m4627 (t1152 * __this, t5 * p0, bool p1, MethodInfo* method){
	t1131 * V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	t1113 * V_3 = {0};
	t1127  V_4 = {0};
	t5 * V_5 = {0};
	t1119 * V_6 = {0};
	t1127  V_7 = {0};
	t5 * V_8 = {0};
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	t5 * V_11 = {0};
	t5 * V_12 = {0};
	int32_t leaveInstructions[2] = {0};
	t142 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t142 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	{
		t1131 * L_0 = (__this->f5);
		t124 L_1 = { &m4630_MI };
		t1130 * L_2 = (t1130 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1130_TI));
		m4482(L_2, NULL, L_1, &m4482_MI);
		t1131 * L_3 = m4490(L_0, L_2, &m4490_MI);
		V_0 = L_3;
		int32_t L_4 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m4492_MI, V_0);
		V_1 = L_4;
		V_2 = 0;
		goto IL_0050;
	}

IL_0026:
	{
		t1119 * L_5 = (__this->f3);
		bool L_6 = m5050(L_5, V_2, &m5050_MI);
		if (L_6)
		{
			goto IL_0048;
		}
	}
	{
		t1119 * L_7 = (__this->f4);
		bool L_8 = m5050(L_7, V_2, &m5050_MI);
		if (!L_8)
		{
			goto IL_004c;
		}
	}

IL_0048:
	{
		V_1 = ((int32_t)(V_1+1));
	}

IL_004c:
	{
		V_2 = ((int32_t)(V_2+1));
	}

IL_0050:
	{
		t1119 * L_9 = (__this->f3);
		int32_t L_10 = m5049(L_9, &m5049_MI);
		if ((((int32_t)V_2) < ((int32_t)L_10)))
		{
			goto IL_0026;
		}
	}
	{
		if (V_1)
		{
			goto IL_0068;
		}
	}
	{
		return;
	}

IL_0068:
	{
		t1113 * L_11 = (t1113 *)InterfaceFuncInvoker0< t1113 * >::Invoke(&m5046_MI, p0);
		V_3 = L_11;
		if ((((int32_t)V_1) <= ((int32_t)1)))
		{
			goto IL_007d;
		}
	}
	{
		InterfaceActionInvoker1< t1113 * >::Invoke(&m5040_MI, p0, V_3);
	}

IL_007d:
	{
		t5 * L_12 = (t5 *)VirtFuncInvoker0< t5 * >::Invoke(&m4496_MI, V_0);
		V_5 = L_12;
	}

IL_0085:
	try
	{ // begin try (depth: 1)
		{
			goto IL_01ac;
		}

IL_008a:
		{
			t5 * L_13 = (t5 *)InterfaceFuncInvoker0< t5 * >::Invoke(&m4765_MI, V_5);
			V_4 = ((*(t1127 *)((t1127 *)UnBox (L_13, InitializedTypeInfo(&t1127_TI)))));
			bool L_14 = m4467((&V_4), &m4467_MI);
			if (!L_14)
			{
				goto IL_015d;
			}
		}

IL_00a4:
		{
			int32_t L_15 = m4470((&V_4), &m4470_MI);
			t1119 * L_16 = (t1119 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1119_TI));
			m5068(L_16, L_15, &m5068_MI);
			V_6 = L_16;
			t1131 * L_17 = (__this->f5);
			t5 * L_18 = (t5 *)VirtFuncInvoker0< t5 * >::Invoke(&m4496_MI, L_17);
			V_8 = L_18;
		}

IL_00bf:
		try
		{ // begin try (depth: 2)
			{
				goto IL_0114;
			}

IL_00c4:
			{
				t5 * L_19 = (t5 *)InterfaceFuncInvoker0< t5 * >::Invoke(&m4765_MI, V_8);
				V_7 = ((*(t1127 *)((t1127 *)UnBox (L_19, InitializedTypeInfo(&t1127_TI)))));
				bool L_20 = m4473((&V_4), V_7, &m4473_MI);
				if (!L_20)
				{
					goto IL_0114;
				}
			}

IL_00e0:
			{
				int32_t L_21 = ((&V_7)->f0);
				V_9 = L_21;
				goto IL_0106;
			}

IL_00ee:
			{
				int32_t L_22 = ((&V_4)->f0);
				m5069(V_6, ((int32_t)(V_9-L_22)), 1, &m5069_MI);
				V_9 = ((int32_t)(V_9+1));
			}

IL_0106:
			{
				int32_t L_23 = ((&V_7)->f1);
				if ((((int32_t)V_9) <= ((int32_t)L_23)))
				{
					goto IL_00ee;
				}
			}

IL_0114:
			{
				bool L_24 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&m747_MI, V_8);
				if (L_24)
				{
					goto IL_00c4;
				}
			}

IL_0120:
			{
				// IL_0120: leave IL_013b
				leaveInstructions[1] = 0x13B; // 2
				THROW_SENTINEL(IL_013b);
				// finally target depth: 2
			}
		} // end try (depth: 2)
		catch(Il2CppFinallySentinel& e)
		{
			goto IL_0125;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (t142 *)e.ex;
			goto IL_0125;
		}

IL_0125:
		{ // begin finally (depth: 2)
			{
				V_11 = ((t5 *)IsInst(V_8, InitializedTypeInfo(&t132_TI)));
				if (V_11)
				{
					goto IL_0133;
				}
			}

IL_0132:
			{
				// finally node depth: 2
				switch (leaveInstructions[1])
				{
					case 0x13B:
						goto IL_013b;
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

IL_0133:
			{
				InterfaceActionInvoker0::Invoke(&m516_MI, V_11);
				// finally node depth: 2
				switch (leaveInstructions[1])
				{
					case 0x13B:
						goto IL_013b;
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

IL_013b:
		{
			int32_t L_25 = ((&V_4)->f0);
			bool L_26 = (__this->f1);
			bool L_27 = (__this->f2);
			InterfaceActionInvoker5< uint16_t, t1119 *, bool, bool, bool >::Invoke(&m5025_MI, p0, (((uint16_t)L_25)), V_6, L_26, L_27, p1);
			goto IL_01ac;
		}

IL_015d:
		{
			bool L_28 = m4468((&V_4), &m4468_MI);
			if (!L_28)
			{
				goto IL_0189;
			}
		}

IL_0169:
		{
			int32_t L_29 = ((&V_4)->f0);
			bool L_30 = (__this->f1);
			bool L_31 = (__this->f2);
			InterfaceActionInvoker4< uint16_t, bool, bool, bool >::Invoke(&m5021_MI, p0, (((uint16_t)L_29)), L_30, L_31, p1);
			goto IL_01ac;
		}

IL_0189:
		{
			int32_t L_32 = ((&V_4)->f0);
			int32_t L_33 = ((&V_4)->f1);
			bool L_34 = (__this->f1);
			bool L_35 = (__this->f2);
			InterfaceActionInvoker5< uint16_t, uint16_t, bool, bool, bool >::Invoke(&m5024_MI, p0, (((uint16_t)L_32)), (((uint16_t)L_33)), L_34, L_35, p1);
		}

IL_01ac:
		{
			bool L_36 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&m747_MI, V_5);
			if (L_36)
			{
				goto IL_008a;
			}
		}

IL_01b8:
		{
			// IL_01b8: leave IL_01d3
			leaveInstructions[0] = 0x1D3; // 1
			THROW_SENTINEL(IL_01d3);
			// finally target depth: 1
		}
	} // end try (depth: 1)
	catch(Il2CppFinallySentinel& e)
	{
		goto IL_01bd;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t142 *)e.ex;
		goto IL_01bd;
	}

IL_01bd:
	{ // begin finally (depth: 1)
		{
			V_12 = ((t5 *)IsInst(V_5, InitializedTypeInfo(&t132_TI)));
			if (V_12)
			{
				goto IL_01cb;
			}
		}

IL_01ca:
		{
			// finally node depth: 1
			switch (leaveInstructions[0])
			{
				case 0x1D3:
					goto IL_01d3;
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

IL_01cb:
		{
			InterfaceActionInvoker0::Invoke(&m516_MI, V_12);
			// finally node depth: 1
			switch (leaveInstructions[0])
			{
				case 0x1D3:
					goto IL_01d3;
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

IL_01d3:
	{
		V_10 = 0;
		goto IL_024f;
	}

IL_01db:
	{
		t1119 * L_37 = (__this->f3);
		bool L_38 = m5050(L_37, V_10, &m5050_MI);
		if (!L_38)
		{
			goto IL_0227;
		}
	}
	{
		t1119 * L_39 = (__this->f4);
		bool L_40 = m5050(L_39, V_10, &m5050_MI);
		if (!L_40)
		{
			goto IL_0212;
		}
	}
	{
		bool L_41 = (__this->f1);
		InterfaceActionInvoker3< uint16_t, bool, bool >::Invoke(&m5022_MI, p0, 2, L_41, p1);
		goto IL_0222;
	}

IL_0212:
	{
		bool L_42 = (__this->f1);
		InterfaceActionInvoker3< uint16_t, bool, bool >::Invoke(&m5022_MI, p0, (((uint16_t)V_10)), L_42, p1);
	}

IL_0222:
	{
		goto IL_0249;
	}

IL_0227:
	{
		t1119 * L_43 = (__this->f4);
		bool L_44 = m5050(L_43, V_10, &m5050_MI);
		if (!L_44)
		{
			goto IL_0249;
		}
	}
	{
		bool L_45 = (__this->f1);
		InterfaceActionInvoker3< uint16_t, bool, bool >::Invoke(&m5023_MI, p0, (((uint16_t)V_10)), L_45, p1);
	}

IL_0249:
	{
		V_10 = ((int32_t)(V_10+1));
	}

IL_024f:
	{
		t1119 * L_46 = (__this->f3);
		int32_t L_47 = m5049(L_46, &m5049_MI);
		if ((((int32_t)V_10) < ((int32_t)L_47)))
		{
			goto IL_01db;
		}
	}
	{
		if ((((int32_t)V_1) <= ((int32_t)1)))
		{
			goto IL_028b;
		}
	}
	{
		bool L_48 = (__this->f1);
		if (!L_48)
		{
			goto IL_027e;
		}
	}
	{
		InterfaceActionInvoker0::Invoke(&m5020_MI, p0);
		goto IL_0284;
	}

IL_027e:
	{
		InterfaceActionInvoker0::Invoke(&m5019_MI, p0);
	}

IL_0284:
	{
		InterfaceActionInvoker1< t1113 * >::Invoke(&m5047_MI, p0, V_3);
	}

IL_028b:
	{
		return;
	}
}
extern MethodInfo m4628_MI;
 void m4628 (t1152 * __this, int32_t* p0, int32_t* p1, MethodInfo* method){
	int32_t V_0 = 0;
	{
		int32_t L_0 = 1;
		V_0 = L_0;
		*((int32_t*)(p1)) = (int32_t)L_0;
		*((int32_t*)(p0)) = (int32_t)V_0;
		return;
	}
}
extern MethodInfo m4629_MI;
 bool m4629 (t1152 * __this, MethodInfo* method){
	{
		return 0;
	}
}
 double m4630 (t5 * __this, t1127  p0, MethodInfo* method){
	{
		bool L_0 = m4467((&p0), &m4467_MI);
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_1 = m4470((&p0), &m4470_MI);
		return (((double)((int32_t)(3+((int32_t)((int32_t)((int32_t)(L_1+((int32_t)15)))>>(int32_t)4))))));
	}

IL_001c:
	{
		bool L_2 = m4468((&p0), &m4468_MI);
		if (!L_2)
		{
			goto IL_0032;
		}
	}
	{
		return (2.0);
	}

IL_0032:
	{
		return (3.0);
	}
}
// Metadata Definition System.Text.RegularExpressions.Syntax.CharacterClass
extern Il2CppType t1127_0_0_17;
FieldInfo t1152_f0_FieldInfo = 
{
	"upper_case_characters", &t1127_0_0_17, &t1152_TI, offsetof(t1152_SFs, f0), &EmptyCustomAttributesCache};
extern Il2CppType t108_0_0_1;
FieldInfo t1152_f1_FieldInfo = 
{
	"negate", &t108_0_0_1, &t1152_TI, offsetof(t1152, f1), &EmptyCustomAttributesCache};
extern Il2CppType t108_0_0_1;
FieldInfo t1152_f2_FieldInfo = 
{
	"ignore", &t108_0_0_1, &t1152_TI, offsetof(t1152, f2), &EmptyCustomAttributesCache};
extern Il2CppType t1119_0_0_1;
FieldInfo t1152_f3_FieldInfo = 
{
	"pos_cats", &t1119_0_0_1, &t1152_TI, offsetof(t1152, f3), &EmptyCustomAttributesCache};
extern Il2CppType t1119_0_0_1;
FieldInfo t1152_f4_FieldInfo = 
{
	"neg_cats", &t1119_0_0_1, &t1152_TI, offsetof(t1152, f4), &EmptyCustomAttributesCache};
extern Il2CppType t1131_0_0_1;
FieldInfo t1152_f5_FieldInfo = 
{
	"intervals", &t1131_0_0_1, &t1152_TI, offsetof(t1152, f5), &EmptyCustomAttributesCache};
static FieldInfo* t1152_FIs[] =
{
	&t1152_f0_FieldInfo,
	&t1152_f1_FieldInfo,
	&t1152_f2_FieldInfo,
	&t1152_f3_FieldInfo,
	&t1152_f4_FieldInfo,
	&t1152_f5_FieldInfo,
	NULL
};
extern Il2CppType t108_0_0_0;
extern Il2CppType t108_0_0_0;
static ParameterInfo t1152_m4621_ParameterInfos[] = 
{
	{"negate", 0, 134218532, &EmptyCustomAttributesCache, &t108_0_0_0},
	{"ignore", 1, 134218533, &EmptyCustomAttributesCache, &t108_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t111_t111 (MethodInfo* method, void* obj, void** args);
MethodInfo m4621_MI = 
{
	".ctor", (methodPointerType)&m4621, &t1152_TI, &t109_0_0_0, RuntimeInvoker_t109_t111_t111, t1152_m4621_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, false, 859, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1110_0_0_0;
extern Il2CppType t108_0_0_0;
static ParameterInfo t1152_m4622_ParameterInfos[] = 
{
	{"cat", 0, 134218534, &EmptyCustomAttributesCache, &t1110_0_0_0},
	{"negate", 1, 134218535, &EmptyCustomAttributesCache, &t108_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t764_t111 (MethodInfo* method, void* obj, void** args);
MethodInfo m4622_MI = 
{
	".ctor", (methodPointerType)&m4622, &t1152_TI, &t109_0_0_0, RuntimeInvoker_t109_t764_t111, t1152_m4622_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, false, 860, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m4623_MI = 
{
	".cctor", (methodPointerType)&m4623, &t1152_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 861, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1110_0_0_0;
extern Il2CppType t108_0_0_0;
static ParameterInfo t1152_m4624_ParameterInfos[] = 
{
	{"cat", 0, 134218536, &EmptyCustomAttributesCache, &t1110_0_0_0},
	{"negate", 1, 134218537, &EmptyCustomAttributesCache, &t108_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t764_t111 (MethodInfo* method, void* obj, void** args);
MethodInfo m4624_MI = 
{
	"AddCategory", (methodPointerType)&m4624, &t1152_TI, &t109_0_0_0, RuntimeInvoker_t109_t764_t111, t1152_m4624_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 2, false, false, 862, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t144_0_0_0;
static ParameterInfo t1152_m4625_ParameterInfos[] = 
{
	{"c", 0, 134218538, &EmptyCustomAttributesCache, &t144_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t150 (MethodInfo* method, void* obj, void** args);
MethodInfo m4625_MI = 
{
	"AddCharacter", (methodPointerType)&m4625, &t1152_TI, &t109_0_0_0, RuntimeInvoker_t109_t150, t1152_m4625_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 863, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t144_0_0_0;
extern Il2CppType t144_0_0_0;
static ParameterInfo t1152_m4626_ParameterInfos[] = 
{
	{"lo", 0, 134218539, &EmptyCustomAttributesCache, &t144_0_0_0},
	{"hi", 1, 134218540, &EmptyCustomAttributesCache, &t144_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t150_t150 (MethodInfo* method, void* obj, void** args);
MethodInfo m4626_MI = 
{
	"AddRange", (methodPointerType)&m4626, &t1152_TI, &t109_0_0_0, RuntimeInvoker_t109_t150_t150, t1152_m4626_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 2, false, false, 864, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1139_0_0_0;
extern Il2CppType t108_0_0_0;
static ParameterInfo t1152_m4627_ParameterInfos[] = 
{
	{"cmp", 0, 134218541, &EmptyCustomAttributesCache, &t1139_0_0_0},
	{"reverse", 1, 134218542, &EmptyCustomAttributesCache, &t108_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t111 (MethodInfo* method, void* obj, void** args);
MethodInfo m4627_MI = 
{
	"Compile", (methodPointerType)&m4627, &t1152_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t111, t1152_m4627_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 4, 2, false, false, 865, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t110_1_0_2;
extern Il2CppType t110_1_0_2;
static ParameterInfo t1152_m4628_ParameterInfos[] = 
{
	{"min", 0, 134218543, &EmptyCustomAttributesCache, &t110_1_0_2},
	{"max", 1, 134218544, &EmptyCustomAttributesCache, &t110_1_0_2},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t533_t533 (MethodInfo* method, void* obj, void** args);
MethodInfo m4628_MI = 
{
	"GetWidth", (methodPointerType)&m4628, &t1152_TI, &t109_0_0_0, RuntimeInvoker_t109_t533_t533, t1152_m4628_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 5, 2, false, false, 866, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
MethodInfo m4629_MI = 
{
	"IsComplex", (methodPointerType)&m4629, &t1152_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 198, 0, 7, 0, false, false, 867, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1127_0_0_0;
static ParameterInfo t1152_m4630_ParameterInfos[] = 
{
	{"i", 0, 134218545, &EmptyCustomAttributesCache, &t1127_0_0_0},
};
extern Il2CppType t118_0_0_0;
extern void* RuntimeInvoker_t118_t1127 (MethodInfo* method, void* obj, void** args);
MethodInfo m4630_MI = 
{
	"GetIntervalCost", (methodPointerType)&m4630, &t1152_TI, &t118_0_0_0, RuntimeInvoker_t118_t1127, t1152_m4630_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 1, false, false, 868, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1152_MIs[] =
{
	&m4621_MI,
	&m4622_MI,
	&m4623_MI,
	&m4624_MI,
	&m4625_MI,
	&m4626_MI,
	&m4627_MI,
	&m4628_MI,
	&m4629_MI,
	&m4630_MI,
	NULL
};
static MethodInfo* t1152_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m4627_MI,
	&m4628_MI,
	&m4542_MI,
	&m4629_MI,
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType t1152_0_0_0;
extern Il2CppType t1152_1_0_0;
struct t1152;
TypeInfo t1152_TI = 
{
	&g_System_dll_Image, NULL, "CharacterClass", "System.Text.RegularExpressions.Syntax", t1152_MIs, NULL, t1152_FIs, NULL, &t1136_TI, NULL, NULL, &t1152_TI, NULL, t1152_VT, &EmptyCustomAttributesCache, &t1152_TI, &t1152_0_0_0, &t1152_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1152), 0, -1, sizeof(t1152_SFs), 0, -1, 1048576, 0, false, false, false, false, false, false, false, false, false, true, false, false, 10, 0, 6, 0, 0, 8, 0, 0};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m4636_MI;


 void m4631 (t1140 * __this, t1136 * p0, int32_t p1, MethodInfo* method){
	{
		m460(__this, &m460_MI);
		__this->f0 = p0;
		__this->f2 = 0;
		__this->f4 = p1;
		__this->f3 = (t11*)NULL;
		__this->f5 = 0;
		__this->f1 = 0;
		return;
	}
}
 void m4632 (t1140 * __this, t1136 * p0, int32_t p1, int32_t p2, t11* p3, bool p4, MethodInfo* method){
	t1140 * G_B2_0 = {0};
	t1140 * G_B1_0 = {0};
	t11* G_B3_0 = {0};
	t1140 * G_B3_1 = {0};
	{
		m460(__this, &m460_MI);
		__this->f0 = p0;
		__this->f2 = p1;
		__this->f4 = p2;
		G_B1_0 = __this;
		if (!p4)
		{
			G_B2_0 = __this;
			goto IL_002f;
		}
	}
	{
		t11* L_0 = m5051(p3, &m5051_MI);
		G_B3_0 = L_0;
		G_B3_1 = G_B1_0;
		goto IL_0031;
	}

IL_002f:
	{
		G_B3_0 = p3;
		G_B3_1 = G_B2_0;
	}

IL_0031:
	{
		G_B3_1->f3 = G_B3_0;
		__this->f5 = p4;
		__this->f1 = 0;
		return;
	}
}
 void m4633 (t1140 * __this, t1136 * p0, int32_t p1, int32_t p2, uint16_t p3, MethodInfo* method){
	{
		m460(__this, &m460_MI);
		__this->f0 = p0;
		__this->f2 = p1;
		__this->f4 = p2;
		__this->f1 = p3;
		__this->f3 = (t11*)NULL;
		__this->f5 = 0;
		return;
	}
}
 int32_t m4634 (t1140 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->f2);
		return L_0;
	}
}
 int32_t m4635 (t1140 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->f4);
		return L_0;
	}
}
 int32_t m4636 (t1140 * __this, MethodInfo* method){
	int32_t G_B3_0 = 0;
	{
		t11* L_0 = (__this->f3);
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		t11* L_1 = (__this->f3);
		int32_t L_2 = m2358(L_1, &m2358_MI);
		G_B3_0 = L_2;
		goto IL_001c;
	}

IL_001b:
	{
		G_B3_0 = 0;
	}

IL_001c:
	{
		return G_B3_0;
	}
}
 bool m4637 (t1140 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->f4);
		return ((((int32_t)L_0) < ((int32_t)0))? 1 : 0);
	}
}
 bool m4638 (t1140 * __this, MethodInfo* method){
	{
		int32_t L_0 = m4636(__this, &m4636_MI);
		int32_t L_1 = m4635(__this, &m4635_MI);
		return ((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0);
	}
}
 t11* m4639 (t1140 * __this, MethodInfo* method){
	{
		t11* L_0 = (__this->f3);
		return L_0;
	}
}
 bool m4640 (t1140 * __this, MethodInfo* method){
	{
		bool L_0 = (__this->f5);
		return L_0;
	}
}
 uint16_t m4641 (t1140 * __this, MethodInfo* method){
	{
		uint16_t L_0 = (__this->f1);
		return L_0;
	}
}
 bool m4642 (t1140 * __this, MethodInfo* method){
	{
		t11* L_0 = (__this->f3);
		return ((((int32_t)((((t11*)L_0) == ((t5 *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
 bool m4643 (t1140 * __this, MethodInfo* method){
	{
		uint16_t L_0 = (__this->f1);
		return ((((int32_t)((((int32_t)L_0) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
 t1127  m4644 (t1140 * __this, int32_t p0, MethodInfo* method){
	{
		bool L_0 = m4642(__this, &m4642_MI);
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		t1127  L_1 = m4466(NULL, &m4466_MI);
		return L_1;
	}

IL_0011:
	{
		int32_t L_2 = m4634(__this, &m4634_MI);
		int32_t L_3 = m4634(__this, &m4634_MI);
		int32_t L_4 = m4636(__this, &m4636_MI);
		t1127  L_5 = {0};
		m4465(&L_5, ((int32_t)(p0+L_2)), ((int32_t)(((int32_t)(((int32_t)(p0+L_3))+L_4))-1)), &m4465_MI);
		return L_5;
	}
}
// Metadata Definition System.Text.RegularExpressions.Syntax.AnchorInfo
extern Il2CppType t1136_0_0_1;
FieldInfo t1140_f0_FieldInfo = 
{
	"expr", &t1136_0_0_1, &t1140_TI, offsetof(t1140, f0), &EmptyCustomAttributesCache};
extern Il2CppType t1106_0_0_1;
FieldInfo t1140_f1_FieldInfo = 
{
	"pos", &t1106_0_0_1, &t1140_TI, offsetof(t1140, f1), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t1140_f2_FieldInfo = 
{
	"offset", &t110_0_0_1, &t1140_TI, offsetof(t1140, f2), &EmptyCustomAttributesCache};
extern Il2CppType t11_0_0_1;
FieldInfo t1140_f3_FieldInfo = 
{
	"str", &t11_0_0_1, &t1140_TI, offsetof(t1140, f3), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t1140_f4_FieldInfo = 
{
	"width", &t110_0_0_1, &t1140_TI, offsetof(t1140, f4), &EmptyCustomAttributesCache};
extern Il2CppType t108_0_0_1;
FieldInfo t1140_f5_FieldInfo = 
{
	"ignore", &t108_0_0_1, &t1140_TI, offsetof(t1140, f5), &EmptyCustomAttributesCache};
static FieldInfo* t1140_FIs[] =
{
	&t1140_f0_FieldInfo,
	&t1140_f1_FieldInfo,
	&t1140_f2_FieldInfo,
	&t1140_f3_FieldInfo,
	&t1140_f4_FieldInfo,
	&t1140_f5_FieldInfo,
	NULL
};
static PropertyInfo t1140____Offset_PropertyInfo = 
{
	&t1140_TI, "Offset", &m4634_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1140____Width_PropertyInfo = 
{
	&t1140_TI, "Width", &m4635_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1140____Length_PropertyInfo = 
{
	&t1140_TI, "Length", &m4636_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1140____IsUnknownWidth_PropertyInfo = 
{
	&t1140_TI, "IsUnknownWidth", &m4637_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1140____IsComplete_PropertyInfo = 
{
	&t1140_TI, "IsComplete", &m4638_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1140____Substring_PropertyInfo = 
{
	&t1140_TI, "Substring", &m4639_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1140____IgnoreCase_PropertyInfo = 
{
	&t1140_TI, "IgnoreCase", &m4640_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1140____Position_PropertyInfo = 
{
	&t1140_TI, "Position", &m4641_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1140____IsSubstring_PropertyInfo = 
{
	&t1140_TI, "IsSubstring", &m4642_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1140____IsPosition_PropertyInfo = 
{
	&t1140_TI, "IsPosition", &m4643_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1140_PIs[] =
{
	&t1140____Offset_PropertyInfo,
	&t1140____Width_PropertyInfo,
	&t1140____Length_PropertyInfo,
	&t1140____IsUnknownWidth_PropertyInfo,
	&t1140____IsComplete_PropertyInfo,
	&t1140____Substring_PropertyInfo,
	&t1140____IgnoreCase_PropertyInfo,
	&t1140____Position_PropertyInfo,
	&t1140____IsSubstring_PropertyInfo,
	&t1140____IsPosition_PropertyInfo,
	NULL
};
extern Il2CppType t1136_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t1140_m4631_ParameterInfos[] = 
{
	{"expr", 0, 134218546, &EmptyCustomAttributesCache, &t1136_0_0_0},
	{"width", 1, 134218547, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m4631_MI = 
{
	".ctor", (methodPointerType)&m4631, &t1140_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t1140_m4631_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, false, 869, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1136_0_0_0;
extern Il2CppType t110_0_0_0;
extern Il2CppType t110_0_0_0;
extern Il2CppType t11_0_0_0;
extern Il2CppType t108_0_0_0;
static ParameterInfo t1140_m4632_ParameterInfos[] = 
{
	{"expr", 0, 134218548, &EmptyCustomAttributesCache, &t1136_0_0_0},
	{"offset", 1, 134218549, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"width", 2, 134218550, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"str", 3, 134218551, &EmptyCustomAttributesCache, &t11_0_0_0},
	{"ignore", 4, 134218552, &EmptyCustomAttributesCache, &t108_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110_t110_t5_t111 (MethodInfo* method, void* obj, void** args);
MethodInfo m4632_MI = 
{
	".ctor", (methodPointerType)&m4632, &t1140_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110_t110_t5_t111, t1140_m4632_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 5, false, false, 870, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1136_0_0_0;
extern Il2CppType t110_0_0_0;
extern Il2CppType t110_0_0_0;
extern Il2CppType t1106_0_0_0;
static ParameterInfo t1140_m4633_ParameterInfos[] = 
{
	{"expr", 0, 134218553, &EmptyCustomAttributesCache, &t1136_0_0_0},
	{"offset", 1, 134218554, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"width", 2, 134218555, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"pos", 3, 134218556, &EmptyCustomAttributesCache, &t1106_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110_t110_t764 (MethodInfo* method, void* obj, void** args);
MethodInfo m4633_MI = 
{
	".ctor", (methodPointerType)&m4633, &t1140_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110_t110_t764, t1140_m4633_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 4, false, false, 871, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m4634_MI = 
{
	"get_Offset", (methodPointerType)&m4634, &t1140_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 872, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m4635_MI = 
{
	"get_Width", (methodPointerType)&m4635, &t1140_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 873, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m4636_MI = 
{
	"get_Length", (methodPointerType)&m4636, &t1140_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 874, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
MethodInfo m4637_MI = 
{
	"get_IsUnknownWidth", (methodPointerType)&m4637, &t1140_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 875, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
MethodInfo m4638_MI = 
{
	"get_IsComplete", (methodPointerType)&m4638, &t1140_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 876, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t11_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m4639_MI = 
{
	"get_Substring", (methodPointerType)&m4639, &t1140_TI, &t11_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 877, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
MethodInfo m4640_MI = 
{
	"get_IgnoreCase", (methodPointerType)&m4640, &t1140_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 878, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1106_0_0_0;
extern void* RuntimeInvoker_t1106 (MethodInfo* method, void* obj, void** args);
MethodInfo m4641_MI = 
{
	"get_Position", (methodPointerType)&m4641, &t1140_TI, &t1106_0_0_0, RuntimeInvoker_t1106, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 879, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
MethodInfo m4642_MI = 
{
	"get_IsSubstring", (methodPointerType)&m4642, &t1140_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 880, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
MethodInfo m4643_MI = 
{
	"get_IsPosition", (methodPointerType)&m4643, &t1140_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 881, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t110_0_0_0;
static ParameterInfo t1140_m4644_ParameterInfos[] = 
{
	{"start", 0, 134218557, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t1127_0_0_0;
extern void* RuntimeInvoker_t1127_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m4644_MI = 
{
	"GetInterval", (methodPointerType)&m4644, &t1140_TI, &t1127_0_0_0, RuntimeInvoker_t1127_t110, t1140_m4644_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 882, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1140_MIs[] =
{
	&m4631_MI,
	&m4632_MI,
	&m4633_MI,
	&m4634_MI,
	&m4635_MI,
	&m4636_MI,
	&m4637_MI,
	&m4638_MI,
	&m4639_MI,
	&m4640_MI,
	&m4641_MI,
	&m4642_MI,
	&m4643_MI,
	&m4644_MI,
	NULL
};
static MethodInfo* t1140_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType t1140_0_0_0;
extern Il2CppType t1140_1_0_0;
struct t1140;
TypeInfo t1140_TI = 
{
	&g_System_dll_Image, NULL, "AnchorInfo", "System.Text.RegularExpressions.Syntax", t1140_MIs, t1140_PIs, t1140_FIs, NULL, &t5_TI, NULL, NULL, &t1140_TI, NULL, t1140_VT, &EmptyCustomAttributesCache, &t1140_TI, &t1140_0_0_0, &t1140_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1140), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, false, false, false, false, false, false, false, 14, 10, 6, 0, 0, 4, 0, 0};
#include "t1153.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1153_TI;
#include "t1153MD.h"

#include "t1154.h"
extern TypeInfo t1154_TI;
#include "t1154MD.h"
extern MethodInfo m4700_MI;


extern MethodInfo m4645_MI;
 void m4645 (t1153 * __this, MethodInfo* method){
	{
		m4700(__this, &m4700_MI);
		return;
	}
}
extern MethodInfo m4646_MI;
 void m4646 (t1153 * __this, t11* p0, MethodInfo* method){
	{
		m4700(__this, &m4700_MI);
		__this->f2 = p0;
		return;
	}
}
// Metadata Definition System.DefaultUriParser
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m4645_MI = 
{
	".ctor", (methodPointerType)&m4645, &t1153_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 883, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t11_0_0_0;
static ParameterInfo t1153_m4646_ParameterInfos[] = 
{
	{"scheme", 0, 134218558, &EmptyCustomAttributesCache, &t11_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m4646_MI = 
{
	".ctor", (methodPointerType)&m4646, &t1153_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t1153_m4646_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 884, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1153_MIs[] =
{
	&m4645_MI,
	&m4646_MI,
	NULL
};
extern MethodInfo m4702_MI;
extern MethodInfo m4703_MI;
static MethodInfo* t1153_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m4702_MI,
	&m4703_MI,
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType t1153_0_0_0;
extern Il2CppType t1153_1_0_0;
struct t1153;
TypeInfo t1153_TI = 
{
	&g_System_dll_Image, NULL, "DefaultUriParser", "System", t1153_MIs, NULL, NULL, NULL, &t1154_TI, NULL, NULL, &t1153_TI, NULL, t1153_VT, &EmptyCustomAttributesCache, &t1153_TI, &t1153_0_0_0, &t1153_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1153), 0, -1, 0, 0, -1, 1048576, 0, false, false, false, false, false, false, false, false, false, false, false, false, 2, 0, 0, 0, 0, 6, 0, 0};
#include "t1155.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1155_TI;
#include "t1155MD.h"



// Metadata Definition System.GenericUriParser
static MethodInfo* t1155_MIs[] =
{
	NULL
};
static MethodInfo* t1155_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m4702_MI,
	&m4703_MI,
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType t1155_0_0_0;
extern Il2CppType t1155_1_0_0;
struct t1155;
TypeInfo t1155_TI = 
{
	&g_System_dll_Image, NULL, "GenericUriParser", "System", t1155_MIs, NULL, NULL, NULL, &t1154_TI, NULL, NULL, &t1155_TI, NULL, t1155_VT, &EmptyCustomAttributesCache, &t1155_TI, &t1155_0_0_0, &t1155_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1155), 0, -1, 0, 0, -1, 1048577, 0, false, false, false, false, false, false, false, false, false, false, false, false, 0, 0, 0, 0, 0, 6, 0, 0};
#include "t1156.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1156_TI;
#include "t1156MD.h"



extern MethodInfo m4647_MI;
 void m4647 (t1156 * __this, t11* p0, t11* p1, int32_t p2, MethodInfo* method){
	{
		__this->f0 = p0;
		__this->f1 = p1;
		__this->f2 = p2;
		return;
	}
}
// Conversion methods for marshalling of: System.Uri/UriScheme
void t1156_marshal(const t1156& unmarshaled, t1156_marshaled& marshaled)
{
	marshaled.f0 = il2cpp_codegen_marshal_string(unmarshaled.f0);
	marshaled.f1 = il2cpp_codegen_marshal_string(unmarshaled.f1);
	marshaled.f2 = unmarshaled.f2;
}
void t1156_marshal_back(const t1156_marshaled& marshaled, t1156& unmarshaled)
{
	unmarshaled.f0 = il2cpp_codegen_marshal_string_result(marshaled.f0);
	unmarshaled.f1 = il2cpp_codegen_marshal_string_result(marshaled.f1);
	unmarshaled.f2 = marshaled.f2;
}
// Conversion method for clean up from marshalling of: System.Uri/UriScheme
void t1156_marshal_cleanup(t1156_marshaled& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.f0);
	marshaled.f0 = NULL;
	il2cpp_codegen_marshal_free(marshaled.f1);
	marshaled.f1 = NULL;
}
// Metadata Definition System.Uri/UriScheme
extern Il2CppType t11_0_0_6;
FieldInfo t1156_f0_FieldInfo = 
{
	"scheme", &t11_0_0_6, &t1156_TI, offsetof(t1156, f0) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t11_0_0_6;
FieldInfo t1156_f1_FieldInfo = 
{
	"delimiter", &t11_0_0_6, &t1156_TI, offsetof(t1156, f1) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_6;
FieldInfo t1156_f2_FieldInfo = 
{
	"defaultPort", &t110_0_0_6, &t1156_TI, offsetof(t1156, f2) + sizeof(t5), &EmptyCustomAttributesCache};
static FieldInfo* t1156_FIs[] =
{
	&t1156_f0_FieldInfo,
	&t1156_f1_FieldInfo,
	&t1156_f2_FieldInfo,
	NULL
};
extern Il2CppType t11_0_0_0;
extern Il2CppType t11_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t1156_m4647_ParameterInfos[] = 
{
	{"s", 0, 134218607, &EmptyCustomAttributesCache, &t11_0_0_0},
	{"d", 1, 134218608, &EmptyCustomAttributesCache, &t11_0_0_0},
	{"p", 2, 134218609, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t5_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m4647_MI = 
{
	".ctor", (methodPointerType)&m4647, &t1156_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t5_t110, t1156_m4647_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 3, false, false, 933, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1156_MIs[] =
{
	&m4647_MI,
	NULL
};
static MethodInfo* t1156_VT[] =
{
	&m2042_MI,
	&m465_MI,
	&m2043_MI,
	&m2148_MI,
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType t1156_0_0_0;
extern Il2CppType t1156_1_0_0;
extern TypeInfo t1011_TI;
TypeInfo t1156_TI = 
{
	&g_System_dll_Image, NULL, "UriScheme", "", t1156_MIs, NULL, t1156_FIs, NULL, &t267_TI, NULL, &t1011_TI, &t1156_TI, NULL, t1156_VT, &EmptyCustomAttributesCache, &t1156_TI, &t1156_0_0_0, &t1156_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)t1156_marshal, (methodPointerType)t1156_marshal_back, (methodPointerType)t1156_marshal_cleanup, sizeof (t1156)+ sizeof (Il2CppObject), 0, sizeof(t1156_marshaled), 0, 0, -1, 1048843, 0, true, false, false, false, false, false, false, false, false, false, false, false, 1, 0, 3, 0, 0, 4, 0, 0};
#include "t1011.h"
#ifndef _MSC_VER
#else
#endif
#include "t1011MD.h"

#include "t1159.h"
#include "t1026.h"
#include "t1028.h"
#include "t829.h"
#include "t830.h"
#include "t1160.h"
#include "t1161.h"
#include "t1158.h"
#include "t771.h"
#include "t623.h"
#include "t1181.h"
#include "t1208.h"
#include "t484.h"
#include "t162.h"
#include "t1188.h"
#include "t142.h"
extern TypeInfo t1026_TI;
extern TypeInfo t1028_TI;
extern TypeInfo t1161_TI;
extern TypeInfo t1157_TI;
extern TypeInfo t771_TI;
extern TypeInfo t623_TI;
extern TypeInfo t1181_TI;
extern TypeInfo t1208_TI;
extern TypeInfo t484_TI;
extern TypeInfo t162_TI;
extern TypeInfo t142_TI;
#include "t1026MD.h"
#include "t1028MD.h"
#include "t829MD.h"
#include "t1161MD.h"
#include "t490MD.h"
#include "t771MD.h"
#include "t623MD.h"
#include "t1181MD.h"
#include "t1208MD.h"
#include "t484MD.h"
#include "t162MD.h"
#include "t977MD.h"
#include "t142MD.h"
extern MethodInfo m4694_MI;
extern MethodInfo m4669_MI;
extern MethodInfo m4659_MI;
extern MethodInfo m4690_MI;
extern MethodInfo m1957_MI;
extern MethodInfo m2356_MI;
extern MethodInfo m4655_MI;
extern MethodInfo m4656_MI;
extern MethodInfo m3965_MI;
extern MethodInfo m3974_MI;
extern MethodInfo m3984_MI;
extern MethodInfo m3988_MI;
extern MethodInfo m4709_MI;
extern MethodInfo m4650_MI;
extern MethodInfo m4787_MI;
extern MethodInfo m4678_MI;
extern MethodInfo m4697_MI;
extern MethodInfo m4653_MI;
extern MethodInfo m4790_MI;
extern MethodInfo m4662_MI;
extern MethodInfo m4663_MI;
extern MethodInfo m3575_MI;
extern MethodInfo m5070_MI;
extern MethodInfo m4665_MI;
extern MethodInfo m4648_MI;
extern MethodInfo m4667_MI;
extern MethodInfo m4804_MI;
extern MethodInfo m5071_MI;
extern MethodInfo m3489_MI;
extern MethodInfo m4691_MI;
extern MethodInfo m2405_MI;
extern MethodInfo m4872_MI;
extern MethodInfo m4833_MI;
extern MethodInfo m4834_MI;
extern MethodInfo m4835_MI;
extern MethodInfo m4686_MI;
extern MethodInfo m4687_MI;
extern MethodInfo m2582_MI;
extern MethodInfo m4768_MI;
extern MethodInfo m4672_MI;
extern MethodInfo m4680_MI;
extern MethodInfo m4679_MI;
extern MethodInfo m4674_MI;
extern MethodInfo m4677_MI;
extern MethodInfo m4673_MI;
extern MethodInfo m4886_MI;
extern MethodInfo m5072_MI;
extern MethodInfo m2458_MI;
extern MethodInfo m4671_MI;
extern MethodInfo m4684_MI;
extern MethodInfo m4676_MI;
extern MethodInfo m4688_MI;
extern MethodInfo m5073_MI;
extern MethodInfo m3579_MI;
extern MethodInfo m3596_MI;
extern MethodInfo m4685_MI;
extern MethodInfo m3572_MI;
extern MethodInfo m4683_MI;
extern MethodInfo m4681_MI;
extern MethodInfo m4682_MI;
extern MethodInfo m4664_MI;
extern MethodInfo m3845_MI;
extern MethodInfo m5074_MI;
extern MethodInfo m4658_MI;
extern MethodInfo m5075_MI;
extern MethodInfo m4692_MI;
extern MethodInfo m2384_MI;
extern MethodInfo m5076_MI;
extern MethodInfo m4805_MI;
extern MethodInfo m4661_MI;
extern MethodInfo m3994_MI;
extern MethodInfo m4693_MI;
extern MethodInfo m584_MI;
extern MethodInfo m3580_MI;
extern MethodInfo m5077_MI;
extern MethodInfo m3577_MI;
extern MethodInfo m4670_MI;
extern MethodInfo m4705_MI;
extern MethodInfo m4689_MI;
extern MethodInfo m4660_MI;
extern MethodInfo m4759_MI;
extern MethodInfo m5078_MI;


 void m4648 (t1011 * __this, t11* p0, MethodInfo* method){
	{
		m4650(__this, p0, 0, &m4650_MI);
		return;
	}
}
extern MethodInfo m4649_MI;
 void m4649 (t1011 * __this, t829 * p0, t830  p1, MethodInfo* method){
	{
		t11* L_0 = m4787(p0, (t11*) &_stringLiteral558, &m4787_MI);
		m4650(__this, L_0, 1, &m4650_MI);
		return;
	}
}
 void m4650 (t1011 * __this, t11* p0, bool p1, MethodInfo* method){
	{
		IL2CPP_RUNTIME_CLASS_INIT((&t11_TI));
		__this->f2 = (((t11_SFs*)(&t11_TI)->static_fields)->f2);
		__this->f3 = (((t11_SFs*)(&t11_TI)->static_fields)->f2);
		__this->f4 = (-1);
		__this->f5 = (((t11_SFs*)(&t11_TI)->static_fields)->f2);
		__this->f6 = (((t11_SFs*)(&t11_TI)->static_fields)->f2);
		__this->f7 = (((t11_SFs*)(&t11_TI)->static_fields)->f2);
		__this->f8 = (((t11_SFs*)(&t11_TI)->static_fields)->f2);
		__this->f11 = 1;
		m460(__this, &m460_MI);
		__this->f12 = p1;
		__this->f1 = p0;
		m4678(__this, 1, &m4678_MI);
		bool L_0 = (__this->f11);
		if (L_0)
		{
			goto IL_0087;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT((&t11_TI));
		t11* L_1 = m2410(NULL, (t11*) &_stringLiteral559, p0, &m2410_MI);
		t1161 * L_2 = (t1161 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1161_TI));
		m4697(L_2, L_1, &m4697_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0087:
	{
		return;
	}
}
extern MethodInfo m4651_MI;
 void m4651 (t5 * __this, MethodInfo* method){
	{
		((t1011_SFs*)InitializedTypeInfo(&t1011_TI)->static_fields)->f16 = (t11*) &_stringLiteral560;
		((t1011_SFs*)InitializedTypeInfo(&t1011_TI)->static_fields)->f17 = (t11*) &_stringLiteral322;
		((t1011_SFs*)InitializedTypeInfo(&t1011_TI)->static_fields)->f18 = (t11*) &_stringLiteral378;
		((t1011_SFs*)InitializedTypeInfo(&t1011_TI)->static_fields)->f19 = (t11*) &_stringLiteral380;
		((t1011_SFs*)InitializedTypeInfo(&t1011_TI)->static_fields)->f20 = (t11*) &_stringLiteral561;
		((t1011_SFs*)InitializedTypeInfo(&t1011_TI)->static_fields)->f21 = (t11*) &_stringLiteral320;
		((t1011_SFs*)InitializedTypeInfo(&t1011_TI)->static_fields)->f22 = (t11*) &_stringLiteral319;
		((t1011_SFs*)InitializedTypeInfo(&t1011_TI)->static_fields)->f23 = (t11*) &_stringLiteral562;
		((t1011_SFs*)InitializedTypeInfo(&t1011_TI)->static_fields)->f24 = (t11*) &_stringLiteral563;
		((t1011_SFs*)InitializedTypeInfo(&t1011_TI)->static_fields)->f25 = (t11*) &_stringLiteral564;
		((t1011_SFs*)InitializedTypeInfo(&t1011_TI)->static_fields)->f26 = (t11*) &_stringLiteral565;
		((t1011_SFs*)InitializedTypeInfo(&t1011_TI)->static_fields)->f27 = (t11*) &_stringLiteral566;
		t1157* L_0 = ((t1157*)SZArrayNew(InitializedTypeInfo(&t1157_TI), 8));
		t1156  L_1 = {0};
		m4647(&L_1, (((t1011_SFs*)InitializedTypeInfo(&t1011_TI)->static_fields)->f21), (((t1011_SFs*)InitializedTypeInfo(&t1011_TI)->static_fields)->f17), ((int32_t)80), &m4647_MI);
		*((t1156 *)(t1156 *)SZArrayLdElema(L_0, 0)) = L_1;
		t1157* L_2 = L_0;
		t1156  L_3 = {0};
		m4647(&L_3, (((t1011_SFs*)InitializedTypeInfo(&t1011_TI)->static_fields)->f22), (((t1011_SFs*)InitializedTypeInfo(&t1011_TI)->static_fields)->f17), ((int32_t)443), &m4647_MI);
		*((t1156 *)(t1156 *)SZArrayLdElema(L_2, 1)) = L_3;
		t1157* L_4 = L_2;
		t1156  L_5 = {0};
		m4647(&L_5, (((t1011_SFs*)InitializedTypeInfo(&t1011_TI)->static_fields)->f19), (((t1011_SFs*)InitializedTypeInfo(&t1011_TI)->static_fields)->f17), ((int32_t)21), &m4647_MI);
		*((t1156 *)(t1156 *)SZArrayLdElema(L_4, 2)) = L_5;
		t1157* L_6 = L_4;
		t1156  L_7 = {0};
		m4647(&L_7, (((t1011_SFs*)InitializedTypeInfo(&t1011_TI)->static_fields)->f18), (((t1011_SFs*)InitializedTypeInfo(&t1011_TI)->static_fields)->f17), (-1), &m4647_MI);
		*((t1156 *)(t1156 *)SZArrayLdElema(L_6, 3)) = L_7;
		t1157* L_8 = L_6;
		t1156  L_9 = {0};
		m4647(&L_9, (((t1011_SFs*)InitializedTypeInfo(&t1011_TI)->static_fields)->f23), (t11*) &_stringLiteral216, ((int32_t)25), &m4647_MI);
		*((t1156 *)(t1156 *)SZArrayLdElema(L_8, 4)) = L_9;
		t1157* L_10 = L_8;
		t1156  L_11 = {0};
		m4647(&L_11, (((t1011_SFs*)InitializedTypeInfo(&t1011_TI)->static_fields)->f24), (t11*) &_stringLiteral216, ((int32_t)119), &m4647_MI);
		*((t1156 *)(t1156 *)SZArrayLdElema(L_10, 5)) = L_11;
		t1157* L_12 = L_10;
		t1156  L_13 = {0};
		m4647(&L_13, (((t1011_SFs*)InitializedTypeInfo(&t1011_TI)->static_fields)->f25), (((t1011_SFs*)InitializedTypeInfo(&t1011_TI)->static_fields)->f17), ((int32_t)119), &m4647_MI);
		*((t1156 *)(t1156 *)SZArrayLdElema(L_12, 6)) = L_13;
		t1157* L_14 = L_12;
		t1156  L_15 = {0};
		m4647(&L_15, (((t1011_SFs*)InitializedTypeInfo(&t1011_TI)->static_fields)->f20), (((t1011_SFs*)InitializedTypeInfo(&t1011_TI)->static_fields)->f17), ((int32_t)70), &m4647_MI);
		*((t1156 *)(t1156 *)SZArrayLdElema(L_14, 7)) = L_15;
		((t1011_SFs*)InitializedTypeInfo(&t1011_TI)->static_fields)->f28 = L_14;
		return;
	}
}
extern MethodInfo m4652_MI;
 void m4652 (t1011 * __this, t829 * p0, t830  p1, MethodInfo* method){
	{
		t11* L_0 = m4653(__this, &m4653_MI);
		m4790(p0, (t11*) &_stringLiteral558, L_0, &m4790_MI);
		return;
	}
}
 t11* m4653 (t1011 * __this, MethodInfo* method){
	{
		m4694(__this, &m4694_MI);
		t11* L_0 = (__this->f13);
		if (L_0)
		{
			goto IL_006e;
		}
	}
	{
		t11* L_1 = m4669(__this, 2, &m4669_MI);
		__this->f13 = L_1;
		t11* L_2 = (__this->f6);
		int32_t L_3 = m2358(L_2, &m2358_MI);
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		t11* L_4 = (__this->f13);
		t11* L_5 = (__this->f6);
		IL2CPP_RUNTIME_CLASS_INIT((&t11_TI));
		t11* L_6 = m2410(NULL, L_4, L_5, &m2410_MI);
		__this->f13 = L_6;
	}

IL_0046:
	{
		t11* L_7 = (__this->f7);
		int32_t L_8 = m2358(L_7, &m2358_MI);
		if ((((int32_t)L_8) <= ((int32_t)0)))
		{
			goto IL_006e;
		}
	}
	{
		t11* L_9 = (__this->f13);
		t11* L_10 = (__this->f7);
		IL2CPP_RUNTIME_CLASS_INIT((&t11_TI));
		t11* L_11 = m2410(NULL, L_9, L_10, &m2410_MI);
		__this->f13 = L_11;
	}

IL_006e:
	{
		t11* L_12 = (__this->f13);
		return L_12;
	}
}
extern MethodInfo m4654_MI;
 t11* m4654 (t1011 * __this, MethodInfo* method){
	t11* G_B3_0 = {0};
	{
		m4694(__this, &m4694_MI);
		t11* L_0 = m4659(__this, &m4659_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1011_TI));
		int32_t L_1 = m4690(NULL, L_0, &m4690_MI);
		int32_t L_2 = (__this->f4);
		if ((((uint32_t)L_1) != ((uint32_t)L_2)))
		{
			goto IL_0027;
		}
	}
	{
		t11* L_3 = (__this->f3);
		G_B3_0 = L_3;
		goto IL_0042;
	}

IL_0027:
	{
		t11* L_4 = (__this->f3);
		int32_t L_5 = (__this->f4);
		int32_t L_6 = L_5;
		t5 * L_7 = Box(InitializedTypeInfo(&t110_TI), &L_6);
		IL2CPP_RUNTIME_CLASS_INIT((&t11_TI));
		t11* L_8 = m1957(NULL, L_4, (t11*) &_stringLiteral216, L_7, &m1957_MI);
		G_B3_0 = L_8;
	}

IL_0042:
	{
		return G_B3_0;
	}
}
 t11* m4655 (t1011 * __this, MethodInfo* method){
	{
		m4694(__this, &m4694_MI);
		t11* L_0 = (__this->f3);
		return L_0;
	}
}
 bool m4656 (t1011 * __this, MethodInfo* method){
	{
		m4694(__this, &m4694_MI);
		t11* L_0 = m4659(__this, &m4659_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1011_TI));
		IL2CPP_RUNTIME_CLASS_INIT((&t11_TI));
		bool L_1 = m2356(NULL, L_0, (((t1011_SFs*)InitializedTypeInfo(&t1011_TI)->static_fields)->f18), &m2356_MI);
		return L_1;
	}
}
extern MethodInfo m4657_MI;
 bool m4657 (t1011 * __this, MethodInfo* method){
	t1026 * V_0 = {0};
	t1028 * V_1 = {0};
	{
		m4694(__this, &m4694_MI);
		t11* L_0 = m4655(__this, &m4655_MI);
		int32_t L_1 = m2358(L_0, &m2358_MI);
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		bool L_2 = m4656(__this, &m4656_MI);
		return L_2;
	}

IL_001d:
	{
		t11* L_3 = (__this->f3);
		IL2CPP_RUNTIME_CLASS_INIT((&t11_TI));
		bool L_4 = m2356(NULL, L_3, (t11*) &_stringLiteral376, &m2356_MI);
		if (L_4)
		{
			goto IL_0047;
		}
	}
	{
		t11* L_5 = (__this->f3);
		IL2CPP_RUNTIME_CLASS_INIT((&t11_TI));
		bool L_6 = m2356(NULL, L_5, (t11*) &_stringLiteral375, &m2356_MI);
		if (!L_6)
		{
			goto IL_0049;
		}
	}

IL_0047:
	{
		return 1;
	}

IL_0049:
	{
		t11* L_7 = (__this->f3);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1026_TI));
		bool L_8 = m3965(NULL, L_7, (&V_0), &m3965_MI);
		if (!L_8)
		{
			goto IL_006d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1026_TI));
		bool L_9 = (bool)VirtFuncInvoker1< bool, t5 * >::Invoke(&m3974_MI, (((t1026_SFs*)InitializedTypeInfo(&t1026_TI)->static_fields)->f6), V_0);
		if (!L_9)
		{
			goto IL_006d;
		}
	}
	{
		return 1;
	}

IL_006d:
	{
		t11* L_10 = (__this->f3);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1028_TI));
		bool L_11 = m3984(NULL, L_10, (&V_1), &m3984_MI);
		if (!L_11)
		{
			goto IL_008c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1028_TI));
		bool L_12 = m3988(NULL, V_1, &m3988_MI);
		if (!L_12)
		{
			goto IL_008c;
		}
	}
	{
		return 1;
	}

IL_008c:
	{
		return 0;
	}
}
 bool m4658 (t1011 * __this, MethodInfo* method){
	{
		m4694(__this, &m4694_MI);
		bool L_0 = (__this->f9);
		return L_0;
	}
}
 t11* m4659 (t1011 * __this, MethodInfo* method){
	{
		m4694(__this, &m4694_MI);
		t11* L_0 = (__this->f2);
		return L_0;
	}
}
 bool m4660 (t1011 * __this, MethodInfo* method){
	{
		bool L_0 = (__this->f11);
		return L_0;
	}
}
 int32_t m4661 (t5 * __this, t11* p0, MethodInfo* method){
	t1028 * V_0 = {0};
	{
		if (!p0)
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_0 = m2358(p0, &m2358_MI);
		if (L_0)
		{
			goto IL_0013;
		}
	}

IL_0011:
	{
		return (int32_t)(0);
	}

IL_0013:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1011_TI));
		bool L_1 = m4662(NULL, p0, &m4662_MI);
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		return (int32_t)(3);
	}

IL_0020:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1011_TI));
		bool L_2 = m4663(NULL, p0, &m4663_MI);
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		return (int32_t)(2);
	}

IL_002d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1028_TI));
		bool L_3 = m3984(NULL, p0, (&V_0), &m3984_MI);
		if (!L_3)
		{
			goto IL_003c;
		}
	}
	{
		return (int32_t)(4);
	}

IL_003c:
	{
		return (int32_t)(0);
	}
}
 bool m4662 (t5 * __this, t11* p0, MethodInfo* method){
	t585* V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	uint32_t V_3 = 0;
	{
		t146* L_0 = ((t146*)SZArrayNew(InitializedTypeInfo(&t146_TI), 1));
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_0, 0)) = (uint16_t)((int32_t)46);
		t585* L_1 = m3575(p0, L_0, &m3575_MI);
		V_0 = L_1;
		if ((((int32_t)(((int32_t)(((t107 *)V_0)->max_length)))) == ((int32_t)4)))
		{
			goto IL_001d;
		}
	}
	{
		return 0;
	}

IL_001d:
	{
		V_1 = 0;
		goto IL_0057;
	}

IL_0024:
	{
		int32_t L_2 = V_1;
		int32_t L_3 = m2358((*(t11**)(t11**)SZArrayLdElema(V_0, L_2)), &m2358_MI);
		V_2 = L_3;
		if (V_2)
		{
			goto IL_0035;
		}
	}
	{
		return 0;
	}

IL_0035:
	{
		int32_t L_4 = V_1;
		bool L_5 = m5070(NULL, (*(t11**)(t11**)SZArrayLdElema(V_0, L_4)), (&V_3), &m5070_MI);
		if (L_5)
		{
			goto IL_0046;
		}
	}
	{
		return 0;
	}

IL_0046:
	{
		if ((((uint32_t)V_3) <= ((uint32_t)((int32_t)255))))
		{
			goto IL_0053;
		}
	}
	{
		return 0;
	}

IL_0053:
	{
		V_1 = ((int32_t)(V_1+1));
	}

IL_0057:
	{
		if ((((int32_t)V_1) < ((int32_t)4)))
		{
			goto IL_0024;
		}
	}
	{
		return 1;
	}
}
 bool m4663 (t5 * __this, t11* p0, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	uint16_t V_3 = 0x0;
	{
		int32_t L_0 = m2358(p0, &m2358_MI);
		V_0 = L_0;
		V_1 = 0;
		V_2 = 0;
		goto IL_006e;
	}

IL_0010:
	{
		uint16_t L_1 = m2385(p0, V_2, &m2385_MI);
		V_3 = L_1;
		if (V_1)
		{
			goto IL_0030;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t144_TI));
		bool L_2 = m5015(NULL, V_3, &m5015_MI);
		if (L_2)
		{
			goto IL_002b;
		}
	}
	{
		return 0;
	}

IL_002b:
	{
		goto IL_005c;
	}

IL_0030:
	{
		if ((((uint32_t)V_3) != ((uint32_t)((int32_t)46))))
		{
			goto IL_003f;
		}
	}
	{
		V_1 = 0;
		goto IL_005c;
	}

IL_003f:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t144_TI));
		bool L_3 = m5015(NULL, V_3, &m5015_MI);
		if (L_3)
		{
			goto IL_005c;
		}
	}
	{
		if ((((int32_t)V_3) == ((int32_t)((int32_t)45))))
		{
			goto IL_005c;
		}
	}
	{
		if ((((int32_t)V_3) == ((int32_t)((int32_t)95))))
		{
			goto IL_005c;
		}
	}
	{
		return 0;
	}

IL_005c:
	{
		int32_t L_4 = ((int32_t)(V_1+1));
		V_1 = L_4;
		if ((((uint32_t)L_4) != ((uint32_t)((int32_t)64))))
		{
			goto IL_006a;
		}
	}
	{
		return 0;
	}

IL_006a:
	{
		V_2 = ((int32_t)(V_2+1));
	}

IL_006e:
	{
		if ((((int32_t)V_2) < ((int32_t)V_0)))
		{
			goto IL_0010;
		}
	}
	{
		return 1;
	}
}
 bool m4664 (t5 * __this, t11* p0, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint16_t V_2 = 0x0;
	{
		if (!p0)
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_0 = m2358(p0, &m2358_MI);
		if (L_0)
		{
			goto IL_0013;
		}
	}

IL_0011:
	{
		return 0;
	}

IL_0013:
	{
		uint16_t L_1 = m2385(p0, 0, &m2385_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1011_TI));
		bool L_2 = m4665(NULL, L_1, &m4665_MI);
		if (L_2)
		{
			goto IL_0026;
		}
	}
	{
		return 0;
	}

IL_0026:
	{
		int32_t L_3 = m2358(p0, &m2358_MI);
		V_0 = L_3;
		V_1 = 1;
		goto IL_0070;
	}

IL_0034:
	{
		uint16_t L_4 = m2385(p0, V_1, &m2385_MI);
		V_2 = L_4;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t144_TI));
		bool L_5 = m5016(NULL, V_2, &m5016_MI);
		if (L_5)
		{
			goto IL_006c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1011_TI));
		bool L_6 = m4665(NULL, V_2, &m4665_MI);
		if (L_6)
		{
			goto IL_006c;
		}
	}
	{
		if ((((int32_t)V_2) == ((int32_t)((int32_t)46))))
		{
			goto IL_006c;
		}
	}
	{
		if ((((int32_t)V_2) == ((int32_t)((int32_t)43))))
		{
			goto IL_006c;
		}
	}
	{
		if ((((int32_t)V_2) == ((int32_t)((int32_t)45))))
		{
			goto IL_006c;
		}
	}
	{
		return 0;
	}

IL_006c:
	{
		V_1 = ((int32_t)(V_1+1));
	}

IL_0070:
	{
		if ((((int32_t)V_1) < ((int32_t)V_0)))
		{
			goto IL_0034;
		}
	}
	{
		return 1;
	}
}
 bool m4665 (t5 * __this, uint16_t p0, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	int32_t G_B7_0 = 0;
	{
		V_0 = p0;
		if ((((int32_t)V_0) < ((int32_t)((int32_t)65))))
		{
			goto IL_0012;
		}
	}
	{
		if ((((int32_t)V_0) <= ((int32_t)((int32_t)90))))
		{
			goto IL_0027;
		}
	}

IL_0012:
	{
		if ((((int32_t)V_0) < ((int32_t)((int32_t)97))))
		{
			goto IL_0024;
		}
	}
	{
		G_B5_0 = ((((int32_t)((((int32_t)V_0) > ((int32_t)((int32_t)122)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0025;
	}

IL_0024:
	{
		G_B5_0 = 0;
	}

IL_0025:
	{
		G_B7_0 = G_B5_0;
		goto IL_0028;
	}

IL_0027:
	{
		G_B7_0 = 1;
	}

IL_0028:
	{
		return G_B7_0;
	}
}
extern MethodInfo m4666_MI;
 bool m4666 (t1011 * __this, t5 * p0, MethodInfo* method){
	t1011 * V_0 = {0};
	t11* V_1 = {0};
	{
		if (p0)
		{
			goto IL_0008;
		}
	}
	{
		return 0;
	}

IL_0008:
	{
		V_0 = ((t1011 *)IsInst(p0, InitializedTypeInfo(&t1011_TI)));
		if (V_0)
		{
			goto IL_002b;
		}
	}
	{
		V_1 = ((t11*)IsInst(p0, (&t11_TI)));
		if (V_1)
		{
			goto IL_0024;
		}
	}
	{
		return 0;
	}

IL_0024:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1011_TI));
		t1011 * L_0 = (t1011 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1011_TI));
		m4648(L_0, V_1, &m4648_MI);
		V_0 = L_0;
	}

IL_002b:
	{
		bool L_1 = m4667(__this, V_0, &m4667_MI);
		return L_1;
	}
}
 bool m4667 (t1011 * __this, t1011 * p0, MethodInfo* method){
	t771 * V_0 = {0};
	int32_t G_B10_0 = 0;
	{
		bool L_0 = (__this->f11);
		bool L_1 = (p0->f11);
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0013;
		}
	}
	{
		return 0;
	}

IL_0013:
	{
		bool L_2 = (__this->f11);
		if (L_2)
		{
			goto IL_0030;
		}
	}
	{
		t11* L_3 = (__this->f1);
		t11* L_4 = (p0->f1);
		IL2CPP_RUNTIME_CLASS_INIT((&t11_TI));
		bool L_5 = m2356(NULL, L_3, L_4, &m2356_MI);
		return L_5;
	}

IL_0030:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t771_TI));
		t771 * L_6 = m4804(NULL, &m4804_MI);
		V_0 = L_6;
		t11* L_7 = (__this->f2);
		t11* L_8 = m5071(L_7, V_0, &m5071_MI);
		t11* L_9 = (p0->f2);
		t11* L_10 = m5071(L_9, V_0, &m5071_MI);
		IL2CPP_RUNTIME_CLASS_INIT((&t11_TI));
		bool L_11 = m2356(NULL, L_8, L_10, &m2356_MI);
		if (!L_11)
		{
			goto IL_00b4;
		}
	}
	{
		t11* L_12 = (__this->f3);
		t11* L_13 = m5071(L_12, V_0, &m5071_MI);
		t11* L_14 = (p0->f3);
		t11* L_15 = m5071(L_14, V_0, &m5071_MI);
		IL2CPP_RUNTIME_CLASS_INIT((&t11_TI));
		bool L_16 = m2356(NULL, L_13, L_15, &m2356_MI);
		if (!L_16)
		{
			goto IL_00b4;
		}
	}
	{
		int32_t L_17 = (__this->f4);
		int32_t L_18 = (p0->f4);
		if ((((uint32_t)L_17) != ((uint32_t)L_18)))
		{
			goto IL_00b4;
		}
	}
	{
		t11* L_19 = (__this->f6);
		t11* L_20 = (p0->f6);
		IL2CPP_RUNTIME_CLASS_INIT((&t11_TI));
		bool L_21 = m2356(NULL, L_19, L_20, &m2356_MI);
		if (!L_21)
		{
			goto IL_00b4;
		}
	}
	{
		t11* L_22 = (__this->f5);
		t11* L_23 = (p0->f5);
		IL2CPP_RUNTIME_CLASS_INIT((&t11_TI));
		bool L_24 = m2356(NULL, L_22, L_23, &m2356_MI);
		G_B10_0 = ((int32_t)(L_24));
		goto IL_00b5;
	}

IL_00b4:
	{
		G_B10_0 = 0;
	}

IL_00b5:
	{
		return G_B10_0;
	}
}
extern MethodInfo m4668_MI;
 int32_t m4668 (t1011 * __this, MethodInfo* method){
	t771 * V_0 = {0};
	{
		int32_t L_0 = (__this->f15);
		if (L_0)
		{
			goto IL_007a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t771_TI));
		t771 * L_1 = m4804(NULL, &m4804_MI);
		V_0 = L_1;
		bool L_2 = (__this->f11);
		if (!L_2)
		{
			goto IL_0069;
		}
	}
	{
		t11* L_3 = (__this->f2);
		t11* L_4 = m5071(L_3, V_0, &m5071_MI);
		int32_t L_5 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m3489_MI, L_4);
		t11* L_6 = (__this->f3);
		t11* L_7 = m5071(L_6, V_0, &m5071_MI);
		int32_t L_8 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m3489_MI, L_7);
		int32_t L_9 = (__this->f4);
		t11* L_10 = (__this->f6);
		int32_t L_11 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m3489_MI, L_10);
		t11* L_12 = (__this->f5);
		int32_t L_13 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m3489_MI, L_12);
		__this->f15 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_5^(int32_t)L_8))^(int32_t)L_9))^(int32_t)L_11))^(int32_t)L_13));
		goto IL_007a;
	}

IL_0069:
	{
		t11* L_14 = (__this->f1);
		int32_t L_15 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m3489_MI, L_14);
		__this->f15 = L_15;
	}

IL_007a:
	{
		int32_t L_16 = (__this->f15);
		return L_16;
	}
}
 t11* m4669 (t1011 * __this, int32_t p0, MethodInfo* method){
	int32_t V_0 = 0;
	t448 * V_1 = {0};
	t448 * V_2 = {0};
	int32_t V_3 = {0};
	t11* V_4 = {0};
	t623 * V_5 = {0};
	int32_t V_6 = 0;
	{
		m4694(__this, &m4694_MI);
		V_3 = p0;
		if (V_3 == 0)
		{
			goto IL_001f;
		}
		if (V_3 == 1)
		{
			goto IL_0031;
		}
		if (V_3 == 2)
		{
			goto IL_0134;
		}
	}
	{
		goto IL_02ad;
	}

IL_001f:
	{
		t11* L_0 = (__this->f2);
		t11* L_1 = m4691(__this, &m4691_MI);
		IL2CPP_RUNTIME_CLASS_INIT((&t11_TI));
		t11* L_2 = m2410(NULL, L_0, L_1, &m2410_MI);
		return L_2;
	}

IL_0031:
	{
		t11* L_3 = (__this->f2);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1011_TI));
		IL2CPP_RUNTIME_CLASS_INIT((&t11_TI));
		bool L_4 = m2356(NULL, L_3, (((t1011_SFs*)InitializedTypeInfo(&t1011_TI)->static_fields)->f23), &m2356_MI);
		if (L_4)
		{
			goto IL_005b;
		}
	}
	{
		t11* L_5 = (__this->f2);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1011_TI));
		IL2CPP_RUNTIME_CLASS_INIT((&t11_TI));
		bool L_6 = m2356(NULL, L_5, (((t1011_SFs*)InitializedTypeInfo(&t1011_TI)->static_fields)->f24), &m2356_MI);
		if (!L_6)
		{
			goto IL_0061;
		}
	}

IL_005b:
	{
		IL2CPP_RUNTIME_CLASS_INIT((&t11_TI));
		return (((t11_SFs*)(&t11_TI)->static_fields)->f2);
	}

IL_0061:
	{
		t448 * L_7 = (t448 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t448_TI));
		m1971(L_7, &m1971_MI);
		V_1 = L_7;
		t11* L_8 = (__this->f2);
		m3574(V_1, L_8, &m3574_MI);
		t11* L_9 = m4691(__this, &m4691_MI);
		m3574(V_1, L_9, &m3574_MI);
		t11* L_10 = (__this->f5);
		int32_t L_11 = m2358(L_10, &m2358_MI);
		if ((((int32_t)L_11) <= ((int32_t)1)))
		{
			goto IL_00c3;
		}
	}
	{
		t11* L_12 = (__this->f5);
		uint16_t L_13 = m2385(L_12, 1, &m2385_MI);
		if ((((uint32_t)L_13) != ((uint32_t)((int32_t)58))))
		{
			goto IL_00c3;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1011_TI));
		t11* L_14 = (__this->f2);
		IL2CPP_RUNTIME_CLASS_INIT((&t11_TI));
		bool L_15 = m2356(NULL, (((t1011_SFs*)InitializedTypeInfo(&t1011_TI)->static_fields)->f18), L_14, &m2356_MI);
		if (!L_15)
		{
			goto IL_00c3;
		}
	}
	{
		m2405(V_1, ((int32_t)47), &m2405_MI);
	}

IL_00c3:
	{
		t11* L_16 = (__this->f8);
		int32_t L_17 = m2358(L_16, &m2358_MI);
		if ((((int32_t)L_17) <= ((int32_t)0)))
		{
			goto IL_00e8;
		}
	}
	{
		t11* L_18 = (__this->f8);
		t448 * L_19 = m3574(V_1, L_18, &m3574_MI);
		m2405(L_19, ((int32_t)64), &m2405_MI);
	}

IL_00e8:
	{
		t11* L_20 = (__this->f3);
		m3574(V_1, L_20, &m3574_MI);
		t11* L_21 = (__this->f2);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1011_TI));
		int32_t L_22 = m4690(NULL, L_21, &m4690_MI);
		V_0 = L_22;
		int32_t L_23 = (__this->f4);
		if ((((int32_t)L_23) == ((int32_t)(-1))))
		{
			goto IL_012d;
		}
	}
	{
		int32_t L_24 = (__this->f4);
		if ((((int32_t)L_24) == ((int32_t)V_0)))
		{
			goto IL_012d;
		}
	}
	{
		t448 * L_25 = m2405(V_1, ((int32_t)58), &m2405_MI);
		int32_t L_26 = (__this->f4);
		m4872(L_25, L_26, &m4872_MI);
	}

IL_012d:
	{
		t11* L_27 = (t11*)VirtFuncInvoker0< t11* >::Invoke(&m1975_MI, V_1);
		return L_27;
	}

IL_0134:
	{
		t448 * L_28 = (t448 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t448_TI));
		m1971(L_28, &m1971_MI);
		V_2 = L_28;
		t11* L_29 = (__this->f2);
		m3574(V_2, L_29, &m3574_MI);
		t11* L_30 = m4691(__this, &m4691_MI);
		m3574(V_2, L_30, &m3574_MI);
		t11* L_31 = (__this->f5);
		int32_t L_32 = m2358(L_31, &m2358_MI);
		if ((((int32_t)L_32) <= ((int32_t)1)))
		{
			goto IL_0196;
		}
	}
	{
		t11* L_33 = (__this->f5);
		uint16_t L_34 = m2385(L_33, 1, &m2385_MI);
		if ((((uint32_t)L_34) != ((uint32_t)((int32_t)58))))
		{
			goto IL_0196;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1011_TI));
		t11* L_35 = (__this->f2);
		IL2CPP_RUNTIME_CLASS_INIT((&t11_TI));
		bool L_36 = m2356(NULL, (((t1011_SFs*)InitializedTypeInfo(&t1011_TI)->static_fields)->f18), L_35, &m2356_MI);
		if (!L_36)
		{
			goto IL_0196;
		}
	}
	{
		m2405(V_2, ((int32_t)47), &m2405_MI);
	}

IL_0196:
	{
		t11* L_37 = (__this->f8);
		int32_t L_38 = m2358(L_37, &m2358_MI);
		if ((((int32_t)L_38) <= ((int32_t)0)))
		{
			goto IL_01bb;
		}
	}
	{
		t11* L_39 = (__this->f8);
		t448 * L_40 = m3574(V_2, L_39, &m3574_MI);
		m2405(L_40, ((int32_t)64), &m2405_MI);
	}

IL_01bb:
	{
		t11* L_41 = (__this->f3);
		m3574(V_2, L_41, &m3574_MI);
		t11* L_42 = (__this->f2);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1011_TI));
		int32_t L_43 = m4690(NULL, L_42, &m4690_MI);
		V_0 = L_43;
		int32_t L_44 = (__this->f4);
		if ((((int32_t)L_44) == ((int32_t)(-1))))
		{
			goto IL_0200;
		}
	}
	{
		int32_t L_45 = (__this->f4);
		if ((((int32_t)L_45) == ((int32_t)V_0)))
		{
			goto IL_0200;
		}
	}
	{
		t448 * L_46 = m2405(V_2, ((int32_t)58), &m2405_MI);
		int32_t L_47 = (__this->f4);
		m4872(L_46, L_47, &m4872_MI);
	}

IL_0200:
	{
		t11* L_48 = (__this->f5);
		int32_t L_49 = m2358(L_48, &m2358_MI);
		if ((((int32_t)L_49) <= ((int32_t)0)))
		{
			goto IL_02a6;
		}
	}
	{
		t11* L_50 = m4659(__this, &m4659_MI);
		V_4 = L_50;
		if (!V_4)
		{
			goto IL_0284;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1011_TI));
		if ((((t1011_SFs*)InitializedTypeInfo(&t1011_TI)->static_fields)->f30))
		{
			goto IL_0253;
		}
	}
	{
		t623 * L_51 = (t623 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t623_TI));
		m4833(L_51, 2, &m4833_MI);
		V_5 = L_51;
		VirtActionInvoker2< t11*, int32_t >::Invoke(&m4834_MI, V_5, (t11*) &_stringLiteral562, 0);
		VirtActionInvoker2< t11*, int32_t >::Invoke(&m4834_MI, V_5, (t11*) &_stringLiteral563, 0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1011_TI));
		((t1011_SFs*)InitializedTypeInfo(&t1011_TI)->static_fields)->f30 = V_5;
	}

IL_0253:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1011_TI));
		bool L_52 = (bool)VirtFuncInvoker2< bool, t11*, int32_t* >::Invoke(&m4835_MI, (((t1011_SFs*)InitializedTypeInfo(&t1011_TI)->static_fields)->f30), V_4, (&V_6));
		if (!L_52)
		{
			goto IL_0284;
		}
	}
	{
		if (!V_6)
		{
			goto IL_0272;
		}
	}
	{
		goto IL_0284;
	}

IL_0272:
	{
		t11* L_53 = (__this->f5);
		m3574(V_2, L_53, &m3574_MI);
		goto IL_02a6;
	}

IL_0284:
	{
		t11* L_54 = (__this->f5);
		t11* L_55 = m4659(__this, &m4659_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1011_TI));
		bool L_56 = m4686(NULL, L_55, &m4686_MI);
		t11* L_57 = m4687(NULL, L_54, L_56, &m4687_MI);
		m3574(V_2, L_57, &m3574_MI);
		goto IL_02a6;
	}

IL_02a6:
	{
		t11* L_58 = (t11*)VirtFuncInvoker0< t11* >::Invoke(&m1975_MI, V_2);
		return L_58;
	}

IL_02ad:
	{
		return (t11*)NULL;
	}
}
 int32_t m4670 (t5 * __this, uint16_t p0, MethodInfo* method){
	{
		if ((((int32_t)((int32_t)48)) > ((int32_t)p0)))
		{
			goto IL_0015;
		}
	}
	{
		if ((((int32_t)p0) > ((int32_t)((int32_t)57))))
		{
			goto IL_0015;
		}
	}
	{
		return ((uint16_t)(p0-((int32_t)48)));
	}

IL_0015:
	{
		if ((((int32_t)((int32_t)97)) > ((int32_t)p0)))
		{
			goto IL_002d;
		}
	}
	{
		if ((((int32_t)p0) > ((int32_t)((int32_t)102))))
		{
			goto IL_002d;
		}
	}
	{
		return ((int32_t)(((uint16_t)(p0-((int32_t)97)))+((int32_t)10)));
	}

IL_002d:
	{
		if ((((int32_t)((int32_t)65)) > ((int32_t)p0)))
		{
			goto IL_0045;
		}
	}
	{
		if ((((int32_t)p0) > ((int32_t)((int32_t)70))))
		{
			goto IL_0045;
		}
	}
	{
		return ((int32_t)(((uint16_t)(p0-((int32_t)65)))+((int32_t)10)));
	}

IL_0045:
	{
		t160 * L_0 = (t160 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t160_TI));
		m2582(L_0, (t11*) &_stringLiteral567, &m2582_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
 t11* m4671 (t5 * __this, uint16_t p0, MethodInfo* method){
	{
		if ((((int32_t)p0) <= ((int32_t)((int32_t)255))))
		{
			goto IL_0016;
		}
	}
	{
		t1181 * L_0 = (t1181 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1181_TI));
		m4768(L_0, (t11*) &_stringLiteral568, &m4768_MI);
		il2cpp_codegen_raise_exception(L_0);
	}

IL_0016:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1011_TI));
		uint16_t L_1 = m2385((((t1011_SFs*)InitializedTypeInfo(&t1011_TI)->static_fields)->f16), ((int32_t)((int32_t)((int32_t)((int32_t)p0&(int32_t)((int32_t)240)))>>(int32_t)4)), &m2385_MI);
		uint16_t L_2 = L_1;
		t5 * L_3 = Box(InitializedTypeInfo(&t144_TI), &L_2);
		uint16_t L_4 = m2385((((t1011_SFs*)InitializedTypeInfo(&t1011_TI)->static_fields)->f16), ((int32_t)((int32_t)p0&(int32_t)((int32_t)15))), &m2385_MI);
		uint16_t L_5 = L_4;
		t5 * L_6 = Box(InitializedTypeInfo(&t144_TI), &L_5);
		IL2CPP_RUNTIME_CLASS_INIT((&t11_TI));
		t11* L_7 = m1957(NULL, (t11*) &_stringLiteral569, L_3, L_6, &m1957_MI);
		return L_7;
	}
}
 bool m4672 (t5 * __this, uint16_t p0, MethodInfo* method){
	int32_t G_B7_0 = 0;
	int32_t G_B9_0 = 0;
	{
		if ((((int32_t)((int32_t)48)) > ((int32_t)p0)))
		{
			goto IL_0010;
		}
	}
	{
		if ((((int32_t)p0) <= ((int32_t)((int32_t)57))))
		{
			goto IL_0035;
		}
	}

IL_0010:
	{
		if ((((int32_t)((int32_t)97)) > ((int32_t)p0)))
		{
			goto IL_0020;
		}
	}
	{
		if ((((int32_t)p0) <= ((int32_t)((int32_t)102))))
		{
			goto IL_0035;
		}
	}

IL_0020:
	{
		if ((((int32_t)((int32_t)65)) > ((int32_t)p0)))
		{
			goto IL_0032;
		}
	}
	{
		G_B7_0 = ((((int32_t)((((int32_t)p0) > ((int32_t)((int32_t)70)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0033;
	}

IL_0032:
	{
		G_B7_0 = 0;
	}

IL_0033:
	{
		G_B9_0 = G_B7_0;
		goto IL_0036;
	}

IL_0035:
	{
		G_B9_0 = 1;
	}

IL_0036:
	{
		return G_B9_0;
	}
}
 bool m4673 (t5 * __this, t11* p0, int32_t p1, MethodInfo* method){
	int32_t G_B6_0 = 0;
	{
		int32_t L_0 = m2358(p0, &m2358_MI);
		if ((((int32_t)((int32_t)(p1+3))) <= ((int32_t)L_0)))
		{
			goto IL_0010;
		}
	}
	{
		return 0;
	}

IL_0010:
	{
		int32_t L_1 = p1;
		p1 = ((int32_t)(L_1+1));
		uint16_t L_2 = m2385(p0, L_1, &m2385_MI);
		if ((((uint32_t)L_2) != ((uint32_t)((int32_t)37))))
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_3 = p1;
		p1 = ((int32_t)(L_3+1));
		uint16_t L_4 = m2385(p0, L_3, &m2385_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1011_TI));
		bool L_5 = m4672(NULL, L_4, &m4672_MI);
		if (!L_5)
		{
			goto IL_0047;
		}
	}
	{
		uint16_t L_6 = m2385(p0, p1, &m2385_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1011_TI));
		bool L_7 = m4672(NULL, L_6, &m4672_MI);
		G_B6_0 = ((int32_t)(L_7));
		goto IL_0048;
	}

IL_0047:
	{
		G_B6_0 = 0;
	}

IL_0048:
	{
		return G_B6_0;
	}
}
 void m4674 (t1011 * __this, t11** p0, MethodInfo* method){
	t11* V_0 = {0};
	t11* G_B4_0 = {0};
	{
		t11* L_0 = (__this->f6);
		int32_t L_1 = m2358(L_0, &m2358_MI);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_005e;
		}
	}
	{
		t11* L_2 = (__this->f6);
		uint16_t L_3 = m2385(L_2, 0, &m2385_MI);
		if ((((uint32_t)L_3) != ((uint32_t)((int32_t)63))))
		{
			goto IL_0047;
		}
	}
	{
		uint16_t L_4 = ((int32_t)63);
		t5 * L_5 = Box(InitializedTypeInfo(&t144_TI), &L_4);
		t11* L_6 = (__this->f6);
		t11* L_7 = m2415(L_6, 1, &m2415_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1011_TI));
		t11* L_8 = m4680(NULL, L_7, 0, &m4680_MI);
		IL2CPP_RUNTIME_CLASS_INIT((&t11_TI));
		t11* L_9 = m1972(NULL, L_5, L_8, &m1972_MI);
		G_B4_0 = L_9;
		goto IL_0053;
	}

IL_0047:
	{
		t11* L_10 = (__this->f6);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1011_TI));
		t11* L_11 = m4680(NULL, L_10, 0, &m4680_MI);
		G_B4_0 = L_11;
	}

IL_0053:
	{
		V_0 = G_B4_0;
		IL2CPP_RUNTIME_CLASS_INIT((&t11_TI));
		t11* L_12 = m2410(NULL, (*((t11**)p0)), V_0, &m2410_MI);
		*((t5 **)(p0)) = (t5 *)L_12;
	}

IL_005e:
	{
		t11* L_13 = (__this->f7);
		int32_t L_14 = m2358(L_13, &m2358_MI);
		if ((((int32_t)L_14) <= ((int32_t)0)))
		{
			goto IL_007e;
		}
	}
	{
		t11* L_15 = (__this->f7);
		IL2CPP_RUNTIME_CLASS_INIT((&t11_TI));
		t11* L_16 = m2410(NULL, (*((t11**)p0)), L_15, &m2410_MI);
		*((t5 **)(p0)) = (t5 *)L_16;
	}

IL_007e:
	{
		return;
	}
}
extern MethodInfo m4675_MI;
 t11* m4675 (t1011 * __this, MethodInfo* method){
	{
		t11* L_0 = (__this->f14);
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		t11* L_1 = (__this->f14);
		return L_1;
	}

IL_0012:
	{
		bool L_2 = (__this->f11);
		if (!L_2)
		{
			goto IL_0035;
		}
	}
	{
		t11* L_3 = m4669(__this, 2, &m4669_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1011_TI));
		t11* L_4 = m4680(NULL, L_3, 1, &m4680_MI);
		__this->f14 = L_4;
		goto IL_0047;
	}

IL_0035:
	{
		t11* L_5 = (__this->f5);
		t11* L_6 = (t11*)VirtFuncInvoker1< t11*, t11* >::Invoke(&m4679_MI, __this, L_5);
		__this->f14 = L_6;
	}

IL_0047:
	{
		t11** L_7 = &(__this->f14);
		m4674(__this, L_7, &m4674_MI);
		t11* L_8 = (__this->f14);
		return L_8;
	}
}
 t11* m4676 (t5 * __this, t11* p0, MethodInfo* method){
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1011_TI));
		t11* L_0 = m4677(NULL, p0, 0, 1, 1, &m4677_MI);
		return L_0;
	}
}
 t11* m4677 (t5 * __this, t11* p0, bool p1, bool p2, bool p3, MethodInfo* method){
	t448 * V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	t1044* V_3 = {0};
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	uint16_t V_6 = 0x0;
	{
		if (p0)
		{
			goto IL_000c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT((&t11_TI));
		return (((t11_SFs*)(&t11_TI)->static_fields)->f2);
	}

IL_000c:
	{
		t448 * L_0 = (t448 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t448_TI));
		m1971(L_0, &m1971_MI);
		V_0 = L_0;
		int32_t L_1 = m2358(p0, &m2358_MI);
		V_1 = L_1;
		V_2 = 0;
		goto IL_0105;
	}

IL_0020:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1011_TI));
		bool L_2 = m4673(NULL, p0, V_2, &m4673_MI);
		if (!L_2)
		{
			goto IL_0044;
		}
	}
	{
		t11* L_3 = m2386(p0, V_2, 3, &m2386_MI);
		m3574(V_0, L_3, &m3574_MI);
		V_2 = ((int32_t)(V_2+2));
		goto IL_0101;
	}

IL_0044:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1208_TI));
		t1208 * L_4 = m4886(NULL, &m4886_MI);
		t146* L_5 = ((t146*)SZArrayNew(InitializedTypeInfo(&t146_TI), 1));
		uint16_t L_6 = m2385(p0, V_2, &m2385_MI);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_5, 0)) = (uint16_t)L_6;
		t1044* L_7 = (t1044*)VirtFuncInvoker1< t1044*, t146* >::Invoke(&m5072_MI, L_4, L_5);
		V_3 = L_7;
		V_4 = (((int32_t)(((t107 *)V_3)->max_length)));
		V_5 = 0;
		goto IL_00f8;
	}

IL_006c:
	{
		int32_t L_8 = V_5;
		V_6 = (((uint16_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(V_3, L_8))));
		if ((((int32_t)V_6) <= ((int32_t)((int32_t)32))))
		{
			goto IL_00d6;
		}
	}
	{
		if ((((int32_t)V_6) >= ((int32_t)((int32_t)127))))
		{
			goto IL_00d6;
		}
	}
	{
		int32_t L_9 = m2458((t11*) &_stringLiteral570, V_6, &m2458_MI);
		if ((((uint32_t)L_9) != ((uint32_t)(-1))))
		{
			goto IL_00d6;
		}
	}
	{
		if (!p2)
		{
			goto IL_00a6;
		}
	}
	{
		if ((((int32_t)V_6) == ((int32_t)((int32_t)35))))
		{
			goto IL_00d6;
		}
	}

IL_00a6:
	{
		if (!p3)
		{
			goto IL_00be;
		}
	}
	{
		if ((((int32_t)V_6) == ((int32_t)((int32_t)91))))
		{
			goto IL_00d6;
		}
	}
	{
		if ((((int32_t)V_6) == ((int32_t)((int32_t)93))))
		{
			goto IL_00d6;
		}
	}

IL_00be:
	{
		if (!p1)
		{
			goto IL_00e9;
		}
	}
	{
		int32_t L_10 = m2458((t11*) &_stringLiteral571, V_6, &m2458_MI);
		if ((((int32_t)L_10) == ((int32_t)(-1))))
		{
			goto IL_00e9;
		}
	}

IL_00d6:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1011_TI));
		t11* L_11 = m4671(NULL, V_6, &m4671_MI);
		m3574(V_0, L_11, &m3574_MI);
		goto IL_00f2;
	}

IL_00e9:
	{
		m2405(V_0, V_6, &m2405_MI);
	}

IL_00f2:
	{
		V_5 = ((int32_t)(V_5+1));
	}

IL_00f8:
	{
		if ((((int32_t)V_5) < ((int32_t)V_4)))
		{
			goto IL_006c;
		}
	}

IL_0101:
	{
		V_2 = ((int32_t)(V_2+1));
	}

IL_0105:
	{
		if ((((int32_t)V_2) < ((int32_t)V_1)))
		{
			goto IL_0020;
		}
	}
	{
		t11* L_12 = (t11*)VirtFuncInvoker0< t11* >::Invoke(&m1975_MI, V_0);
		return L_12;
	}
}
 void m4678 (t1011 * __this, int32_t p0, MethodInfo* method){
	{
		t11* L_0 = (__this->f1);
		m4684(__this, p0, L_0, &m4684_MI);
		bool L_1 = (__this->f12);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		return;
	}

IL_0019:
	{
		t11* L_2 = (__this->f3);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1011_TI));
		t11* L_3 = m4677(NULL, L_2, 0, 1, 0, &m4677_MI);
		__this->f3 = L_3;
		t11* L_4 = (__this->f3);
		int32_t L_5 = m2358(L_4, &m2358_MI);
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0086;
		}
	}
	{
		t11* L_6 = (__this->f3);
		uint16_t L_7 = m2385(L_6, 0, &m2385_MI);
		if ((((int32_t)L_7) == ((int32_t)((int32_t)91))))
		{
			goto IL_0086;
		}
	}
	{
		t11* L_8 = (__this->f3);
		t11* L_9 = (__this->f3);
		int32_t L_10 = m2358(L_9, &m2358_MI);
		uint16_t L_11 = m2385(L_8, ((int32_t)(L_10-1)), &m2385_MI);
		if ((((int32_t)L_11) == ((int32_t)((int32_t)93))))
		{
			goto IL_0086;
		}
	}
	{
		t11* L_12 = (__this->f3);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t771_TI));
		t771 * L_13 = m4804(NULL, &m4804_MI);
		t11* L_14 = m5071(L_12, L_13, &m5071_MI);
		__this->f3 = L_14;
	}

IL_0086:
	{
		t11* L_15 = (__this->f5);
		int32_t L_16 = m2358(L_15, &m2358_MI);
		if ((((int32_t)L_16) <= ((int32_t)0)))
		{
			goto IL_00a8;
		}
	}
	{
		t11* L_17 = (__this->f5);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1011_TI));
		t11* L_18 = m4676(NULL, L_17, &m4676_MI);
		__this->f5 = L_18;
	}

IL_00a8:
	{
		return;
	}
}
 t11* m4679 (t1011 * __this, t11* p0, MethodInfo* method){
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1011_TI));
		t11* L_0 = m4680(NULL, p0, 0, &m4680_MI);
		return L_0;
	}
}
 t11* m4680 (t5 * __this, t11* p0, bool p1, MethodInfo* method){
	t448 * V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	uint16_t V_3 = 0x0;
	uint16_t V_4 = 0x0;
	uint16_t V_5 = 0x0;
	{
		if (p0)
		{
			goto IL_000c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT((&t11_TI));
		return (((t11_SFs*)(&t11_TI)->static_fields)->f2);
	}

IL_000c:
	{
		t448 * L_0 = (t448 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t448_TI));
		m1971(L_0, &m1971_MI);
		V_0 = L_0;
		int32_t L_1 = m2358(p0, &m2358_MI);
		V_1 = L_1;
		V_2 = 0;
		goto IL_00ca;
	}

IL_0020:
	{
		uint16_t L_2 = m2385(p0, V_2, &m2385_MI);
		V_3 = L_2;
		if ((((uint32_t)V_3) != ((uint32_t)((int32_t)37))))
		{
			goto IL_00be;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1011_TI));
		uint16_t L_3 = m4688(NULL, p0, (&V_2), (&V_4), &m4688_MI);
		V_5 = L_3;
		if (!p1)
		{
			goto IL_005c;
		}
	}
	{
		if ((((uint32_t)V_5) != ((uint32_t)((int32_t)35))))
		{
			goto IL_005c;
		}
	}
	{
		m3574(V_0, (t11*) &_stringLiteral572, &m3574_MI);
		goto IL_00b5;
	}

IL_005c:
	{
		if (!p1)
		{
			goto IL_007c;
		}
	}
	{
		if ((((uint32_t)V_5) != ((uint32_t)((int32_t)37))))
		{
			goto IL_007c;
		}
	}
	{
		m3574(V_0, (t11*) &_stringLiteral573, &m3574_MI);
		goto IL_00b5;
	}

IL_007c:
	{
		if (!p1)
		{
			goto IL_009c;
		}
	}
	{
		if ((((uint32_t)V_5) != ((uint32_t)((int32_t)63))))
		{
			goto IL_009c;
		}
	}
	{
		m3574(V_0, (t11*) &_stringLiteral574, &m3574_MI);
		goto IL_00b5;
	}

IL_009c:
	{
		m2405(V_0, V_5, &m2405_MI);
		if (!V_4)
		{
			goto IL_00b5;
		}
	}
	{
		m2405(V_0, V_4, &m2405_MI);
	}

IL_00b5:
	{
		V_2 = ((int32_t)(V_2-1));
		goto IL_00c6;
	}

IL_00be:
	{
		m2405(V_0, V_3, &m2405_MI);
	}

IL_00c6:
	{
		V_2 = ((int32_t)(V_2+1));
	}

IL_00ca:
	{
		if ((((int32_t)V_2) < ((int32_t)V_1)))
		{
			goto IL_0020;
		}
	}
	{
		t11* L_4 = (t11*)VirtFuncInvoker0< t11* >::Invoke(&m1975_MI, V_0);
		return L_4;
	}
}
 void m4681 (t1011 * __this, t11* p0, MethodInfo* method){
	int32_t V_0 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1011_TI));
		__this->f2 = (((t1011_SFs*)InitializedTypeInfo(&t1011_TI)->static_fields)->f18);
		__this->f4 = (-1);
		IL2CPP_RUNTIME_CLASS_INIT((&t11_TI));
		__this->f7 = (((t11_SFs*)(&t11_TI)->static_fields)->f2);
		__this->f6 = (((t11_SFs*)(&t11_TI)->static_fields)->f2);
		__this->f9 = 1;
		t146* L_0 = ((t146*)SZArrayNew(InitializedTypeInfo(&t146_TI), 1));
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_0, 0)) = (uint16_t)((int32_t)92);
		t11* L_1 = m5073(p0, L_0, &m5073_MI);
		p0 = L_1;
		int32_t L_2 = m2458(p0, ((int32_t)92), &m2458_MI);
		V_0 = L_2;
		if ((((int32_t)V_0) <= ((int32_t)0)))
		{
			goto IL_0072;
		}
	}
	{
		t11* L_3 = m2415(p0, V_0, &m2415_MI);
		__this->f5 = L_3;
		t11* L_4 = m2386(p0, 0, V_0, &m2386_MI);
		__this->f3 = L_4;
		goto IL_0084;
	}

IL_0072:
	{
		__this->f3 = p0;
		IL2CPP_RUNTIME_CLASS_INIT((&t11_TI));
		__this->f5 = (((t11_SFs*)(&t11_TI)->static_fields)->f2);
	}

IL_0084:
	{
		t11* L_5 = (__this->f5);
		t11* L_6 = m3579(L_5, (t11*) &_stringLiteral575, (t11*) &_stringLiteral576, &m3579_MI);
		__this->f5 = L_6;
		return;
	}
}
 t11* m4682 (t1011 * __this, t11* p0, MethodInfo* method){
	{
		int32_t L_0 = m2358(p0, &m2358_MI);
		if ((((int32_t)L_0) <= ((int32_t)2)))
		{
			goto IL_002e;
		}
	}
	{
		uint16_t L_1 = m2385(p0, 2, &m2385_MI);
		if ((((int32_t)L_1) == ((int32_t)((int32_t)92))))
		{
			goto IL_002e;
		}
	}
	{
		uint16_t L_2 = m2385(p0, 2, &m2385_MI);
		if ((((int32_t)L_2) == ((int32_t)((int32_t)47))))
		{
			goto IL_002e;
		}
	}
	{
		return (t11*) &_stringLiteral577;
	}

IL_002e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1011_TI));
		__this->f2 = (((t1011_SFs*)InitializedTypeInfo(&t1011_TI)->static_fields)->f18);
		IL2CPP_RUNTIME_CLASS_INIT((&t11_TI));
		__this->f3 = (((t11_SFs*)(&t11_TI)->static_fields)->f2);
		__this->f4 = (-1);
		t11* L_3 = m3579(p0, (t11*) &_stringLiteral575, (t11*) &_stringLiteral576, &m3579_MI);
		__this->f5 = L_3;
		__this->f7 = (((t11_SFs*)(&t11_TI)->static_fields)->f2);
		__this->f6 = (((t11_SFs*)(&t11_TI)->static_fields)->f2);
		return (t11*)NULL;
	}
}
 void m4683 (t1011 * __this, t11* p0, MethodInfo* method){
	{
		__this->f0 = 1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1011_TI));
		__this->f2 = (((t1011_SFs*)InitializedTypeInfo(&t1011_TI)->static_fields)->f18);
		__this->f4 = (-1);
		IL2CPP_RUNTIME_CLASS_INIT((&t11_TI));
		__this->f7 = (((t11_SFs*)(&t11_TI)->static_fields)->f2);
		__this->f6 = (((t11_SFs*)(&t11_TI)->static_fields)->f2);
		__this->f3 = (((t11_SFs*)(&t11_TI)->static_fields)->f2);
		__this->f5 = (t11*)NULL;
		int32_t L_0 = m2358(p0, &m2358_MI);
		if ((((int32_t)L_0) < ((int32_t)2)))
		{
			goto IL_008f;
		}
	}
	{
		uint16_t L_1 = m2385(p0, 0, &m2385_MI);
		if ((((uint32_t)L_1) != ((uint32_t)((int32_t)47))))
		{
			goto IL_008f;
		}
	}
	{
		uint16_t L_2 = m2385(p0, 1, &m2385_MI);
		if ((((uint32_t)L_2) != ((uint32_t)((int32_t)47))))
		{
			goto IL_008f;
		}
	}
	{
		t146* L_3 = ((t146*)SZArrayNew(InitializedTypeInfo(&t146_TI), 1));
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_3, 0)) = (uint16_t)((int32_t)47);
		t11* L_4 = m5073(p0, L_3, &m5073_MI);
		p0 = L_4;
		uint16_t L_5 = ((int32_t)47);
		t5 * L_6 = Box(InitializedTypeInfo(&t144_TI), &L_5);
		IL2CPP_RUNTIME_CLASS_INIT((&t11_TI));
		t11* L_7 = m1972(NULL, L_6, p0, &m1972_MI);
		__this->f5 = L_7;
	}

IL_008f:
	{
		t11* L_8 = (__this->f5);
		if (L_8)
		{
			goto IL_00a1;
		}
	}
	{
		__this->f5 = p0;
	}

IL_00a1:
	{
		return;
	}
}
 void m4684 (t1011 * __this, int32_t p0, t11* p1, MethodInfo* method){
	t11* V_0 = {0};
	{
		if (p1)
		{
			goto IL_0011;
		}
	}
	{
		t484 * L_0 = (t484 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t484_TI));
		m3596(L_0, (t11*) &_stringLiteral578, &m3596_MI);
		il2cpp_codegen_raise_exception(L_0);
	}

IL_0011:
	{
		t11* L_1 = m4685(__this, p0, p1, &m4685_MI);
		V_0 = L_1;
		if (!V_0)
		{
			goto IL_0027;
		}
	}
	{
		t1161 * L_2 = (t1161 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1161_TI));
		m4697(L_2, V_0, &m4697_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0027:
	{
		return;
	}
}
 t11* m4685 (t1011 * __this, int32_t p0, t11* p1, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	t11* V_2 = {0};
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	t11* V_10 = {0};
	bool V_11 = false;
	t1028 * V_12 = {0};
	t1161 * V_13 = {0};
	int32_t G_B50_0 = 0;
	int32_t G_B55_0 = 0;
	int32_t G_B57_0 = 0;
	int32_t G_B139_0 = 0;
	{
		t11* L_0 = m3572(p1, &m3572_MI);
		p1 = L_0;
		int32_t L_1 = m2358(p1, &m2358_MI);
		V_0 = L_1;
		if (V_0)
		{
			goto IL_002b;
		}
	}
	{
		if ((((int32_t)p0) == ((int32_t)2)))
		{
			goto IL_0022;
		}
	}
	{
		if (p0)
		{
			goto IL_002b;
		}
	}

IL_0022:
	{
		__this->f11 = 0;
		return (t11*)NULL;
	}

IL_002b:
	{
		if ((((int32_t)V_0) > ((int32_t)1)))
		{
			goto IL_003f;
		}
	}
	{
		if ((((int32_t)p0) == ((int32_t)2)))
		{
			goto IL_003f;
		}
	}
	{
		return (t11*) &_stringLiteral579;
	}

IL_003f:
	{
		V_1 = 0;
		int32_t L_2 = m2458(p1, ((int32_t)58), &m2458_MI);
		V_1 = L_2;
		if (V_1)
		{
			goto IL_0056;
		}
	}
	{
		return (t11*) &_stringLiteral580;
	}

IL_0056:
	{
		if ((((int32_t)V_1) >= ((int32_t)0)))
		{
			goto IL_00d5;
		}
	}
	{
		uint16_t L_3 = m2385(p1, 0, &m2385_MI);
		if ((((uint32_t)L_3) != ((uint32_t)((int32_t)47))))
		{
			goto IL_0091;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t162_TI));
		if ((((uint32_t)(((t162_SFs*)InitializedTypeInfo(&t162_TI)->static_fields)->f2)) != ((uint32_t)((int32_t)47))))
		{
			goto IL_0091;
		}
	}
	{
		m4683(__this, p1, &m4683_MI);
		if ((((uint32_t)p0) != ((uint32_t)2)))
		{
			goto IL_008c;
		}
	}
	{
		__this->f11 = 0;
	}

IL_008c:
	{
		goto IL_00d3;
	}

IL_0091:
	{
		int32_t L_4 = m2358(p1, &m2358_MI);
		if ((((int32_t)L_4) < ((int32_t)2)))
		{
			goto IL_00c5;
		}
	}
	{
		uint16_t L_5 = m2385(p1, 0, &m2385_MI);
		if ((((uint32_t)L_5) != ((uint32_t)((int32_t)92))))
		{
			goto IL_00c5;
		}
	}
	{
		uint16_t L_6 = m2385(p1, 1, &m2385_MI);
		if ((((uint32_t)L_6) != ((uint32_t)((int32_t)92))))
		{
			goto IL_00c5;
		}
	}
	{
		m4681(__this, p1, &m4681_MI);
		goto IL_00d3;
	}

IL_00c5:
	{
		__this->f11 = 0;
		__this->f5 = p1;
	}

IL_00d3:
	{
		return (t11*)NULL;
	}

IL_00d5:
	{
		if ((((uint32_t)V_1) != ((uint32_t)1)))
		{
			goto IL_0105;
		}
	}
	{
		uint16_t L_7 = m2385(p1, 0, &m2385_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1011_TI));
		bool L_8 = m4665(NULL, L_7, &m4665_MI);
		if (L_8)
		{
			goto IL_00f3;
		}
	}
	{
		return (t11*) &_stringLiteral581;
	}

IL_00f3:
	{
		t11* L_9 = m4682(__this, p1, &m4682_MI);
		V_2 = L_9;
		if (!V_2)
		{
			goto IL_0103;
		}
	}
	{
		return V_2;
	}

IL_0103:
	{
		return (t11*)NULL;
	}

IL_0105:
	{
		t11* L_10 = m2386(p1, 0, V_1, &m2386_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t771_TI));
		t771 * L_11 = m4804(NULL, &m4804_MI);
		t11* L_12 = m5071(L_10, L_11, &m5071_MI);
		__this->f2 = L_12;
		t11* L_13 = (__this->f2);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1011_TI));
		bool L_14 = m4664(NULL, L_13, &m4664_MI);
		if (L_14)
		{
			goto IL_0138;
		}
	}
	{
		t11* L_15 = m3845(NULL, (t11*) &_stringLiteral582, &m3845_MI);
		return L_15;
	}

IL_0138:
	{
		V_3 = ((int32_t)(V_1+1));
		int32_t L_16 = m2358(p1, &m2358_MI);
		V_4 = L_16;
		int32_t L_17 = m5074(p1, ((int32_t)35), V_3, &m5074_MI);
		V_1 = L_17;
		bool L_18 = m4658(__this, &m4658_MI);
		if (L_18)
		{
			goto IL_019e;
		}
	}
	{
		if ((((int32_t)V_1) == ((int32_t)(-1))))
		{
			goto IL_019e;
		}
	}
	{
		bool L_19 = (__this->f12);
		if (!L_19)
		{
			goto IL_017d;
		}
	}
	{
		t11* L_20 = m2415(p1, V_1, &m2415_MI);
		__this->f7 = L_20;
		goto IL_019b;
	}

IL_017d:
	{
		t11* L_21 = m2415(p1, ((int32_t)(V_1+1)), &m2415_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1011_TI));
		t11* L_22 = m4676(NULL, L_21, &m4676_MI);
		IL2CPP_RUNTIME_CLASS_INIT((&t11_TI));
		t11* L_23 = m2410(NULL, (t11*) &_stringLiteral583, L_22, &m2410_MI);
		__this->f7 = L_23;
	}

IL_019b:
	{
		V_4 = V_1;
	}

IL_019e:
	{
		int32_t L_24 = m5075(p1, ((int32_t)63), V_3, ((int32_t)(V_4-V_3)), &m5075_MI);
		V_1 = L_24;
		if ((((int32_t)V_1) == ((int32_t)(-1))))
		{
			goto IL_01e3;
		}
	}
	{
		t11* L_25 = m2386(p1, V_1, ((int32_t)(V_4-V_1)), &m2386_MI);
		__this->f6 = L_25;
		V_4 = V_1;
		bool L_26 = (__this->f12);
		if (L_26)
		{
			goto IL_01e3;
		}
	}
	{
		t11* L_27 = (__this->f6);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1011_TI));
		t11* L_28 = m4676(NULL, L_27, &m4676_MI);
		__this->f6 = L_28;
	}

IL_01e3:
	{
		t11* L_29 = (__this->f2);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1011_TI));
		bool L_30 = m4692(NULL, L_29, &m4692_MI);
		if (!L_30)
		{
			goto IL_0255;
		}
	}
	{
		t11* L_31 = (__this->f2);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1011_TI));
		IL2CPP_RUNTIME_CLASS_INIT((&t11_TI));
		bool L_32 = m2384(NULL, L_31, (((t1011_SFs*)InitializedTypeInfo(&t1011_TI)->static_fields)->f23), &m2384_MI);
		if (!L_32)
		{
			goto IL_0255;
		}
	}
	{
		t11* L_33 = (__this->f2);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1011_TI));
		IL2CPP_RUNTIME_CLASS_INIT((&t11_TI));
		bool L_34 = m2384(NULL, L_33, (((t1011_SFs*)InitializedTypeInfo(&t1011_TI)->static_fields)->f24), &m2384_MI);
		if (!L_34)
		{
			goto IL_0255;
		}
	}
	{
		if ((((int32_t)((int32_t)(V_4-V_3))) < ((int32_t)2)))
		{
			goto IL_024f;
		}
	}
	{
		if ((((int32_t)((int32_t)(V_4-V_3))) < ((int32_t)2)))
		{
			goto IL_0255;
		}
	}
	{
		uint16_t L_35 = m2385(p1, V_3, &m2385_MI);
		if ((((uint32_t)L_35) != ((uint32_t)((int32_t)47))))
		{
			goto IL_0255;
		}
	}
	{
		uint16_t L_36 = m2385(p1, ((int32_t)(V_3+1)), &m2385_MI);
		if ((((int32_t)L_36) == ((int32_t)((int32_t)47))))
		{
			goto IL_0255;
		}
	}

IL_024f:
	{
		return (t11*) &_stringLiteral584;
	}

IL_0255:
	{
		if ((((int32_t)((int32_t)(V_4-V_3))) < ((int32_t)2)))
		{
			goto IL_027c;
		}
	}
	{
		uint16_t L_37 = m2385(p1, V_3, &m2385_MI);
		if ((((uint32_t)L_37) != ((uint32_t)((int32_t)47))))
		{
			goto IL_027c;
		}
	}
	{
		uint16_t L_38 = m2385(p1, ((int32_t)(V_3+1)), &m2385_MI);
		G_B50_0 = ((((int32_t)L_38) == ((int32_t)((int32_t)47)))? 1 : 0);
		goto IL_027d;
	}

IL_027c:
	{
		G_B50_0 = 0;
	}

IL_027d:
	{
		V_5 = G_B50_0;
		t11* L_39 = (__this->f2);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1011_TI));
		IL2CPP_RUNTIME_CLASS_INIT((&t11_TI));
		bool L_40 = m2356(NULL, L_39, (((t1011_SFs*)InitializedTypeInfo(&t1011_TI)->static_fields)->f18), &m2356_MI);
		if (!L_40)
		{
			goto IL_02b7;
		}
	}
	{
		if (!V_5)
		{
			goto IL_02b7;
		}
	}
	{
		if ((((int32_t)((int32_t)(V_4-V_3))) == ((int32_t)2)))
		{
			goto IL_02b4;
		}
	}
	{
		uint16_t L_41 = m2385(p1, ((int32_t)(V_3+2)), &m2385_MI);
		G_B55_0 = ((((int32_t)L_41) == ((int32_t)((int32_t)47)))? 1 : 0);
		goto IL_02b5;
	}

IL_02b4:
	{
		G_B55_0 = 1;
	}

IL_02b5:
	{
		G_B57_0 = G_B55_0;
		goto IL_02b8;
	}

IL_02b7:
	{
		G_B57_0 = 0;
	}

IL_02b8:
	{
		V_6 = G_B57_0;
		V_7 = 0;
		if (!V_5)
		{
			goto IL_03a8;
		}
	}
	{
		if ((((uint32_t)p0) != ((uint32_t)2)))
		{
			goto IL_02d1;
		}
	}
	{
		return (t11*) &_stringLiteral585;
	}

IL_02d1:
	{
		t11* L_42 = (__this->f2);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1011_TI));
		IL2CPP_RUNTIME_CLASS_INIT((&t11_TI));
		bool L_43 = m2384(NULL, L_42, (((t1011_SFs*)InitializedTypeInfo(&t1011_TI)->static_fields)->f23), &m2384_MI);
		if (!L_43)
		{
			goto IL_02ff;
		}
	}
	{
		t11* L_44 = (__this->f2);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1011_TI));
		IL2CPP_RUNTIME_CLASS_INIT((&t11_TI));
		bool L_45 = m2384(NULL, L_44, (((t1011_SFs*)InitializedTypeInfo(&t1011_TI)->static_fields)->f24), &m2384_MI);
		if (!L_45)
		{
			goto IL_02ff;
		}
	}
	{
		V_3 = ((int32_t)(V_3+2));
	}

IL_02ff:
	{
		t11* L_46 = (__this->f2);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1011_TI));
		IL2CPP_RUNTIME_CLASS_INIT((&t11_TI));
		bool L_47 = m2356(NULL, L_46, (((t1011_SFs*)InitializedTypeInfo(&t1011_TI)->static_fields)->f18), &m2356_MI);
		if (!L_47)
		{
			goto IL_0383;
		}
	}
	{
		V_8 = 2;
		V_9 = V_3;
		goto IL_033f;
	}

IL_031f:
	{
		uint16_t L_48 = m2385(p1, V_9, &m2385_MI);
		if ((((int32_t)L_48) == ((int32_t)((int32_t)47))))
		{
			goto IL_0333;
		}
	}
	{
		goto IL_0348;
	}

IL_0333:
	{
		V_8 = ((int32_t)(V_8+1));
		V_9 = ((int32_t)(V_9+1));
	}

IL_033f:
	{
		if ((((int32_t)V_9) < ((int32_t)V_4)))
		{
			goto IL_031f;
		}
	}

IL_0348:
	{
		if ((((int32_t)V_8) < ((int32_t)4)))
		{
			goto IL_0377;
		}
	}
	{
		V_6 = 0;
		goto IL_035c;
	}

IL_0358:
	{
		V_3 = ((int32_t)(V_3+1));
	}

IL_035c:
	{
		if ((((int32_t)V_3) >= ((int32_t)V_4)))
		{
			goto IL_0372;
		}
	}
	{
		uint16_t L_49 = m2385(p1, V_3, &m2385_MI);
		if ((((int32_t)L_49) == ((int32_t)((int32_t)47))))
		{
			goto IL_0358;
		}
	}

IL_0372:
	{
		goto IL_0383;
	}

IL_0377:
	{
		if ((((int32_t)V_8) < ((int32_t)3)))
		{
			goto IL_0383;
		}
	}
	{
		V_3 = ((int32_t)(V_3+1));
	}

IL_0383:
	{
		if ((((int32_t)((int32_t)(V_4-V_3))) <= ((int32_t)1)))
		{
			goto IL_03a3;
		}
	}
	{
		uint16_t L_50 = m2385(p1, ((int32_t)(V_3+1)), &m2385_MI);
		if ((((uint32_t)L_50) != ((uint32_t)((int32_t)58))))
		{
			goto IL_03a3;
		}
	}
	{
		V_6 = 0;
		V_7 = 1;
	}

IL_03a3:
	{
		goto IL_03d2;
	}

IL_03a8:
	{
		t11* L_51 = (__this->f2);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1011_TI));
		bool L_52 = m4692(NULL, L_51, &m4692_MI);
		if (L_52)
		{
			goto IL_03d2;
		}
	}
	{
		t11* L_53 = m2386(p1, V_3, ((int32_t)(V_4-V_3)), &m2386_MI);
		__this->f5 = L_53;
		__this->f10 = 1;
		return (t11*)NULL;
	}

IL_03d2:
	{
		if (!V_6)
		{
			goto IL_03e0;
		}
	}
	{
		V_1 = (-1);
		goto IL_040a;
	}

IL_03e0:
	{
		int32_t L_54 = m5075(p1, ((int32_t)47), V_3, ((int32_t)(V_4-V_3)), &m5075_MI);
		V_1 = L_54;
		if ((((uint32_t)V_1) != ((uint32_t)(-1))))
		{
			goto IL_040a;
		}
	}
	{
		if (!V_7)
		{
			goto IL_040a;
		}
	}
	{
		int32_t L_55 = m5075(p1, ((int32_t)92), V_3, ((int32_t)(V_4-V_3)), &m5075_MI);
		V_1 = L_55;
	}

IL_040a:
	{
		if ((((uint32_t)V_1) != ((uint32_t)(-1))))
		{
			goto IL_044b;
		}
	}
	{
		t11* L_56 = (__this->f2);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1011_TI));
		IL2CPP_RUNTIME_CLASS_INIT((&t11_TI));
		bool L_57 = m2384(NULL, L_56, (((t1011_SFs*)InitializedTypeInfo(&t1011_TI)->static_fields)->f23), &m2384_MI);
		if (!L_57)
		{
			goto IL_0446;
		}
	}
	{
		t11* L_58 = (__this->f2);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1011_TI));
		IL2CPP_RUNTIME_CLASS_INIT((&t11_TI));
		bool L_59 = m2384(NULL, L_58, (((t1011_SFs*)InitializedTypeInfo(&t1011_TI)->static_fields)->f24), &m2384_MI);
		if (!L_59)
		{
			goto IL_0446;
		}
	}
	{
		__this->f5 = (t11*) &_stringLiteral576;
	}

IL_0446:
	{
		goto IL_045f;
	}

IL_044b:
	{
		t11* L_60 = m2386(p1, V_1, ((int32_t)(V_4-V_1)), &m2386_MI);
		__this->f5 = L_60;
		V_4 = V_1;
	}

IL_045f:
	{
		if (!V_6)
		{
			goto IL_046d;
		}
	}
	{
		V_1 = (-1);
		goto IL_047b;
	}

IL_046d:
	{
		int32_t L_61 = m5075(p1, ((int32_t)64), V_3, ((int32_t)(V_4-V_3)), &m5075_MI);
		V_1 = L_61;
	}

IL_047b:
	{
		if ((((int32_t)V_1) == ((int32_t)(-1))))
		{
			goto IL_0496;
		}
	}
	{
		t11* L_62 = m2386(p1, V_3, ((int32_t)(V_1-V_3)), &m2386_MI);
		__this->f8 = L_62;
		V_3 = ((int32_t)(V_1+1));
	}

IL_0496:
	{
		__this->f4 = (-1);
		if (!V_6)
		{
			goto IL_04ab;
		}
	}
	{
		V_1 = (-1);
		goto IL_04bc;
	}

IL_04ab:
	{
		int32_t L_63 = m5076(p1, ((int32_t)58), ((int32_t)(V_4-1)), ((int32_t)(V_4-V_3)), &m5076_MI);
		V_1 = L_63;
	}

IL_04bc:
	{
		if ((((int32_t)V_1) == ((int32_t)(-1))))
		{
			goto IL_0566;
		}
	}
	{
		if ((((int32_t)V_1) == ((int32_t)((int32_t)(V_4-1)))))
		{
			goto IL_0566;
		}
	}
	{
		t11* L_64 = m2386(p1, ((int32_t)(V_1+1)), ((int32_t)(V_4-((int32_t)(V_1+1)))), &m2386_MI);
		V_10 = L_64;
		int32_t L_65 = m2358(V_10, &m2358_MI);
		if ((((int32_t)L_65) <= ((int32_t)0)))
		{
			goto IL_0544;
		}
	}
	{
		int32_t L_66 = m2358(V_10, &m2358_MI);
		uint16_t L_67 = m2385(V_10, ((int32_t)(L_66-1)), &m2385_MI);
		if ((((int32_t)L_67) == ((int32_t)((int32_t)93))))
		{
			goto IL_0544;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t771_TI));
		t771 * L_68 = m4804(NULL, &m4804_MI);
		int32_t* L_69 = &(__this->f4);
		bool L_70 = m4805(NULL, V_10, 7, L_68, L_69, &m4805_MI);
		if (!L_70)
		{
			goto IL_0536;
		}
	}
	{
		int32_t L_71 = (__this->f4);
		if ((((int32_t)L_71) < ((int32_t)0)))
		{
			goto IL_0536;
		}
	}
	{
		int32_t L_72 = (__this->f4);
		if ((((int32_t)L_72) <= ((int32_t)((int32_t)65535))))
		{
			goto IL_053c;
		}
	}

IL_0536:
	{
		return (t11*) &_stringLiteral586;
	}

IL_053c:
	{
		V_4 = V_1;
		goto IL_0561;
	}

IL_0544:
	{
		int32_t L_73 = (__this->f4);
		if ((((uint32_t)L_73) != ((uint32_t)(-1))))
		{
			goto IL_0561;
		}
	}
	{
		t11* L_74 = (__this->f2);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1011_TI));
		int32_t L_75 = m4690(NULL, L_74, &m4690_MI);
		__this->f4 = L_75;
	}

IL_0561:
	{
		goto IL_0583;
	}

IL_0566:
	{
		int32_t L_76 = (__this->f4);
		if ((((uint32_t)L_76) != ((uint32_t)(-1))))
		{
			goto IL_0583;
		}
	}
	{
		t11* L_77 = (__this->f2);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1011_TI));
		int32_t L_78 = m4690(NULL, L_77, &m4690_MI);
		__this->f4 = L_78;
	}

IL_0583:
	{
		t11* L_79 = m2386(p1, V_3, ((int32_t)(V_4-V_3)), &m2386_MI);
		p1 = L_79;
		__this->f3 = p1;
		if (!V_6)
		{
			goto IL_05c7;
		}
	}
	{
		uint16_t L_80 = ((int32_t)47);
		t5 * L_81 = Box(InitializedTypeInfo(&t144_TI), &L_80);
		IL2CPP_RUNTIME_CLASS_INIT((&t11_TI));
		t11* L_82 = m1972(NULL, L_81, p1, &m1972_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1011_TI));
		t11* L_83 = m4687(NULL, L_82, 1, &m4687_MI);
		__this->f5 = L_83;
		__this->f3 = (((t11_SFs*)(&t11_TI)->static_fields)->f2);
		goto IL_071c;
	}

IL_05c7:
	{
		t11* L_84 = (__this->f3);
		int32_t L_85 = m2358(L_84, &m2358_MI);
		if ((((uint32_t)L_85) != ((uint32_t)2)))
		{
			goto IL_0612;
		}
	}
	{
		t11* L_86 = (__this->f3);
		uint16_t L_87 = m2385(L_86, 1, &m2385_MI);
		if ((((uint32_t)L_87) != ((uint32_t)((int32_t)58))))
		{
			goto IL_0612;
		}
	}
	{
		t11* L_88 = (__this->f3);
		t11* L_89 = (__this->f5);
		IL2CPP_RUNTIME_CLASS_INIT((&t11_TI));
		t11* L_90 = m2410(NULL, L_88, L_89, &m2410_MI);
		__this->f5 = L_90;
		__this->f3 = (((t11_SFs*)(&t11_TI)->static_fields)->f2);
		goto IL_071c;
	}

IL_0612:
	{
		bool L_91 = (__this->f0);
		if (!L_91)
		{
			goto IL_063a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT((&t11_TI));
		t11* L_92 = m2410(NULL, (t11*) &_stringLiteral587, p1, &m2410_MI);
		p1 = L_92;
		__this->f3 = (((t11_SFs*)(&t11_TI)->static_fields)->f2);
		goto IL_071c;
	}

IL_063a:
	{
		t11* L_93 = (__this->f2);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1011_TI));
		IL2CPP_RUNTIME_CLASS_INIT((&t11_TI));
		bool L_94 = m2356(NULL, L_93, (((t1011_SFs*)InitializedTypeInfo(&t1011_TI)->static_fields)->f18), &m2356_MI);
		if (!L_94)
		{
			goto IL_065b;
		}
	}
	{
		__this->f9 = 1;
		goto IL_071c;
	}

IL_065b:
	{
		t11* L_95 = (__this->f2);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1011_TI));
		IL2CPP_RUNTIME_CLASS_INIT((&t11_TI));
		bool L_96 = m2356(NULL, L_95, (((t1011_SFs*)InitializedTypeInfo(&t1011_TI)->static_fields)->f24), &m2356_MI);
		if (!L_96)
		{
			goto IL_069d;
		}
	}
	{
		t11* L_97 = (__this->f3);
		int32_t L_98 = m2358(L_97, &m2358_MI);
		if ((((int32_t)L_98) <= ((int32_t)0)))
		{
			goto IL_0698;
		}
	}
	{
		t11* L_99 = (__this->f3);
		__this->f5 = L_99;
		IL2CPP_RUNTIME_CLASS_INIT((&t11_TI));
		__this->f3 = (((t11_SFs*)(&t11_TI)->static_fields)->f2);
	}

IL_0698:
	{
		goto IL_071c;
	}

IL_069d:
	{
		t11* L_100 = (__this->f3);
		int32_t L_101 = m2358(L_100, &m2358_MI);
		if (L_101)
		{
			goto IL_071c;
		}
	}
	{
		t11* L_102 = (__this->f2);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1011_TI));
		IL2CPP_RUNTIME_CLASS_INIT((&t11_TI));
		bool L_103 = m2356(NULL, L_102, (((t1011_SFs*)InitializedTypeInfo(&t1011_TI)->static_fields)->f21), &m2356_MI);
		if (L_103)
		{
			goto IL_0716;
		}
	}
	{
		t11* L_104 = (__this->f2);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1011_TI));
		IL2CPP_RUNTIME_CLASS_INIT((&t11_TI));
		bool L_105 = m2356(NULL, L_104, (((t1011_SFs*)InitializedTypeInfo(&t1011_TI)->static_fields)->f20), &m2356_MI);
		if (L_105)
		{
			goto IL_0716;
		}
	}
	{
		t11* L_106 = (__this->f2);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1011_TI));
		IL2CPP_RUNTIME_CLASS_INIT((&t11_TI));
		bool L_107 = m2356(NULL, L_106, (((t1011_SFs*)InitializedTypeInfo(&t1011_TI)->static_fields)->f25), &m2356_MI);
		if (L_107)
		{
			goto IL_0716;
		}
	}
	{
		t11* L_108 = (__this->f2);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1011_TI));
		IL2CPP_RUNTIME_CLASS_INIT((&t11_TI));
		bool L_109 = m2356(NULL, L_108, (((t1011_SFs*)InitializedTypeInfo(&t1011_TI)->static_fields)->f22), &m2356_MI);
		if (L_109)
		{
			goto IL_0716;
		}
	}
	{
		t11* L_110 = (__this->f2);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1011_TI));
		IL2CPP_RUNTIME_CLASS_INIT((&t11_TI));
		bool L_111 = m2356(NULL, L_110, (((t1011_SFs*)InitializedTypeInfo(&t1011_TI)->static_fields)->f19), &m2356_MI);
		if (!L_111)
		{
			goto IL_071c;
		}
	}

IL_0716:
	{
		return (t11*) &_stringLiteral588;
	}

IL_071c:
	{
		t11* L_112 = (__this->f3);
		int32_t L_113 = m2358(L_112, &m2358_MI);
		if ((((int32_t)L_113) <= ((int32_t)0)))
		{
			goto IL_073d;
		}
	}
	{
		t11* L_114 = (__this->f3);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1011_TI));
		int32_t L_115 = m4661(NULL, L_114, &m4661_MI);
		G_B139_0 = ((((int32_t)L_115) == ((int32_t)0))? 1 : 0);
		goto IL_073e;
	}

IL_073d:
	{
		G_B139_0 = 0;
	}

IL_073e:
	{
		V_11 = G_B139_0;
		if (V_11)
		{
			goto IL_07c1;
		}
	}
	{
		t11* L_116 = (__this->f3);
		int32_t L_117 = m2358(L_116, &m2358_MI);
		if ((((int32_t)L_117) <= ((int32_t)1)))
		{
			goto IL_07c1;
		}
	}
	{
		t11* L_118 = (__this->f3);
		uint16_t L_119 = m2385(L_118, 0, &m2385_MI);
		if ((((uint32_t)L_119) != ((uint32_t)((int32_t)91))))
		{
			goto IL_07c1;
		}
	}
	{
		t11* L_120 = (__this->f3);
		t11* L_121 = (__this->f3);
		int32_t L_122 = m2358(L_121, &m2358_MI);
		uint16_t L_123 = m2385(L_120, ((int32_t)(L_122-1)), &m2385_MI);
		if ((((uint32_t)L_123) != ((uint32_t)((int32_t)93))))
		{
			goto IL_07c1;
		}
	}
	{
		t11* L_124 = (__this->f3);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1028_TI));
		bool L_125 = m3984(NULL, L_124, (&V_12), &m3984_MI);
		if (!L_125)
		{
			goto IL_07be;
		}
	}
	{
		t11* L_126 = m3994(V_12, 1, &m3994_MI);
		IL2CPP_RUNTIME_CLASS_INIT((&t11_TI));
		t11* L_127 = m2328(NULL, (t11*) &_stringLiteral209, L_126, (t11*) &_stringLiteral210, &m2328_MI);
		__this->f3 = L_127;
		goto IL_07c1;
	}

IL_07be:
	{
		V_11 = 1;
	}

IL_07c1:
	{
		if (!V_11)
		{
			goto IL_07fe;
		}
	}
	{
		t1154 * L_128 = m4693(__this, &m4693_MI);
		if (((t1153 *)IsInst(L_128, InitializedTypeInfo(&t1153_TI))))
		{
			goto IL_07e3;
		}
	}
	{
		t1154 * L_129 = m4693(__this, &m4693_MI);
		if (L_129)
		{
			goto IL_07fe;
		}
	}

IL_07e3:
	{
		t11* L_130 = (__this->f3);
		IL2CPP_RUNTIME_CLASS_INIT((&t11_TI));
		t11* L_131 = m2328(NULL, (t11*) &_stringLiteral589, L_130, (t11*) &_stringLiteral92, &m2328_MI);
		t11* L_132 = m3845(NULL, L_131, &m3845_MI);
		return L_132;
	}

IL_07fe:
	{
		V_13 = (t1161 *)NULL;
		t1154 * L_133 = m4693(__this, &m4693_MI);
		if (!L_133)
		{
			goto IL_081a;
		}
	}
	{
		t1154 * L_134 = m4693(__this, &m4693_MI);
		VirtActionInvoker2< t1011 *, t1161 ** >::Invoke(&m4702_MI, L_134, __this, (&V_13));
	}

IL_081a:
	{
		if (!V_13)
		{
			goto IL_0829;
		}
	}
	{
		t11* L_135 = (t11*)VirtFuncInvoker0< t11* >::Invoke(&m584_MI, V_13);
		return L_135;
	}

IL_0829:
	{
		t11* L_136 = (__this->f2);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1011_TI));
		IL2CPP_RUNTIME_CLASS_INIT((&t11_TI));
		bool L_137 = m2384(NULL, L_136, (((t1011_SFs*)InitializedTypeInfo(&t1011_TI)->static_fields)->f23), &m2384_MI);
		if (!L_137)
		{
			goto IL_0884;
		}
	}
	{
		t11* L_138 = (__this->f2);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1011_TI));
		IL2CPP_RUNTIME_CLASS_INIT((&t11_TI));
		bool L_139 = m2384(NULL, L_138, (((t1011_SFs*)InitializedTypeInfo(&t1011_TI)->static_fields)->f24), &m2384_MI);
		if (!L_139)
		{
			goto IL_0884;
		}
	}
	{
		t11* L_140 = (__this->f2);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1011_TI));
		IL2CPP_RUNTIME_CLASS_INIT((&t11_TI));
		bool L_141 = m2384(NULL, L_140, (((t1011_SFs*)InitializedTypeInfo(&t1011_TI)->static_fields)->f18), &m2384_MI);
		if (!L_141)
		{
			goto IL_0884;
		}
	}
	{
		t11* L_142 = (__this->f5);
		t11* L_143 = (__this->f2);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1011_TI));
		bool L_144 = m4686(NULL, L_143, &m4686_MI);
		t11* L_145 = m4687(NULL, L_142, L_144, &m4687_MI);
		__this->f5 = L_145;
	}

IL_0884:
	{
		return (t11*)NULL;
	}
}
 bool m4686 (t5 * __this, t11* p0, MethodInfo* method){
	t11* V_0 = {0};
	t623 * V_1 = {0};
	int32_t V_2 = 0;
	{
		V_0 = p0;
		if (!V_0)
		{
			goto IL_007a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1011_TI));
		if ((((t1011_SFs*)InitializedTypeInfo(&t1011_TI)->static_fields)->f31))
		{
			goto IL_005b;
		}
	}
	{
		t623 * L_0 = (t623 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t623_TI));
		m4833(L_0, 5, &m4833_MI);
		V_1 = L_0;
		VirtActionInvoker2< t11*, int32_t >::Invoke(&m4834_MI, V_1, (t11*) &_stringLiteral378, 0);
		VirtActionInvoker2< t11*, int32_t >::Invoke(&m4834_MI, V_1, (t11*) &_stringLiteral320, 0);
		VirtActionInvoker2< t11*, int32_t >::Invoke(&m4834_MI, V_1, (t11*) &_stringLiteral319, 0);
		VirtActionInvoker2< t11*, int32_t >::Invoke(&m4834_MI, V_1, (t11*) &_stringLiteral565, 0);
		VirtActionInvoker2< t11*, int32_t >::Invoke(&m4834_MI, V_1, (t11*) &_stringLiteral566, 0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1011_TI));
		((t1011_SFs*)InitializedTypeInfo(&t1011_TI)->static_fields)->f31 = V_1;
	}

IL_005b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1011_TI));
		bool L_1 = (bool)VirtFuncInvoker2< bool, t11*, int32_t* >::Invoke(&m4835_MI, (((t1011_SFs*)InitializedTypeInfo(&t1011_TI)->static_fields)->f31), V_0, (&V_2));
		if (!L_1)
		{
			goto IL_007a;
		}
	}
	{
		if (!V_2)
		{
			goto IL_0078;
		}
	}
	{
		goto IL_007a;
	}

IL_0078:
	{
		return 1;
	}

IL_007a:
	{
		return 0;
	}
}
 t11* m4687 (t5 * __this, t11* p0, bool p1, MethodInfo* method){
	t448 * V_0 = {0};
	int32_t V_1 = 0;
	uint16_t V_2 = 0x0;
	uint16_t V_3 = 0x0;
	uint16_t V_4 = 0x0;
	t996 * V_5 = {0};
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	t11* V_8 = {0};
	int32_t V_9 = 0;
	bool V_10 = false;
	t11* V_11 = {0};
	t5 * V_12 = {0};
	uint16_t V_13 = 0x0;
	t5 * V_14 = {0};
	int32_t leaveInstructions[1] = {0};
	t142 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t142 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	{
		IL2CPP_RUNTIME_CLASS_INIT((&t11_TI));
		bool L_0 = m2356(NULL, p0, (t11*) &_stringLiteral576, &m2356_MI);
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		return p0;
	}

IL_0012:
	{
		t448 * L_1 = (t448 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t448_TI));
		m1971(L_1, &m1971_MI);
		V_0 = L_1;
		if (!p1)
		{
			goto IL_00f5;
		}
	}
	{
		V_1 = 0;
		goto IL_00dc;
	}

IL_0025:
	{
		uint16_t L_2 = m2385(p0, V_1, &m2385_MI);
		V_2 = L_2;
		V_13 = V_2;
		if ((((int32_t)V_13) == ((int32_t)((int32_t)37))))
		{
			goto IL_0055;
		}
	}
	{
		if ((((int32_t)V_13) == ((int32_t)((int32_t)92))))
		{
			goto IL_0047;
		}
	}
	{
		goto IL_00cb;
	}

IL_0047:
	{
		m2405(V_0, ((int32_t)47), &m2405_MI);
		goto IL_00d8;
	}

IL_0055:
	{
		int32_t L_3 = m2358(p0, &m2358_MI);
		if ((((int32_t)V_1) >= ((int32_t)((int32_t)(L_3-2)))))
		{
			goto IL_00be;
		}
	}
	{
		uint16_t L_4 = m2385(p0, ((int32_t)(V_1+1)), &m2385_MI);
		V_3 = L_4;
		uint16_t L_5 = m2385(p0, ((int32_t)(V_1+2)), &m2385_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t144_TI));
		uint16_t L_6 = m2455(NULL, L_5, &m2455_MI);
		V_4 = L_6;
		if ((((uint32_t)V_3) != ((uint32_t)((int32_t)50))))
		{
			goto IL_008e;
		}
	}
	{
		if ((((int32_t)V_4) == ((int32_t)((int32_t)70))))
		{
			goto IL_009f;
		}
	}

IL_008e:
	{
		if ((((uint32_t)V_3) != ((uint32_t)((int32_t)53))))
		{
			goto IL_00b1;
		}
	}
	{
		if ((((uint32_t)V_4) != ((uint32_t)((int32_t)67))))
		{
			goto IL_00b1;
		}
	}

IL_009f:
	{
		m2405(V_0, ((int32_t)47), &m2405_MI);
		V_1 = ((int32_t)(V_1+2));
		goto IL_00b9;
	}

IL_00b1:
	{
		m2405(V_0, V_2, &m2405_MI);
	}

IL_00b9:
	{
		goto IL_00c6;
	}

IL_00be:
	{
		m2405(V_0, V_2, &m2405_MI);
	}

IL_00c6:
	{
		goto IL_00d8;
	}

IL_00cb:
	{
		m2405(V_0, V_2, &m2405_MI);
		goto IL_00d8;
	}

IL_00d8:
	{
		V_1 = ((int32_t)(V_1+1));
	}

IL_00dc:
	{
		int32_t L_7 = m2358(p0, &m2358_MI);
		if ((((int32_t)V_1) < ((int32_t)L_7)))
		{
			goto IL_0025;
		}
	}
	{
		t11* L_8 = (t11*)VirtFuncInvoker0< t11* >::Invoke(&m1975_MI, V_0);
		p0 = L_8;
		goto IL_0101;
	}

IL_00f5:
	{
		t11* L_9 = m3580(p0, ((int32_t)92), ((int32_t)47), &m3580_MI);
		p0 = L_9;
	}

IL_0101:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t996_TI));
		t996 * L_10 = (t996 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t996_TI));
		m4773(L_10, &m4773_MI);
		V_5 = L_10;
		V_6 = 0;
		goto IL_01a3;
	}

IL_0110:
	{
		int32_t L_11 = m5074(p0, ((int32_t)47), V_6, &m5074_MI);
		V_7 = L_11;
		if ((((uint32_t)V_7) != ((uint32_t)(-1))))
		{
			goto IL_012c;
		}
	}
	{
		int32_t L_12 = m2358(p0, &m2358_MI);
		V_7 = L_12;
	}

IL_012c:
	{
		t11* L_13 = m2386(p0, V_6, ((int32_t)(V_7-V_6)), &m2386_MI);
		V_8 = L_13;
		V_6 = ((int32_t)(V_7+1));
		int32_t L_14 = m2358(V_8, &m2358_MI);
		if (!L_14)
		{
			goto IL_015e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT((&t11_TI));
		bool L_15 = m2356(NULL, V_8, (t11*) &_stringLiteral84, &m2356_MI);
		if (!L_15)
		{
			goto IL_0163;
		}
	}

IL_015e:
	{
		goto IL_01a3;
	}

IL_0163:
	{
		IL2CPP_RUNTIME_CLASS_INIT((&t11_TI));
		bool L_16 = m2356(NULL, V_8, (t11*) &_stringLiteral590, &m2356_MI);
		if (!L_16)
		{
			goto IL_0199;
		}
	}
	{
		int32_t L_17 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m4769_MI, V_5);
		V_9 = L_17;
		if (V_9)
		{
			goto IL_0189;
		}
	}
	{
		goto IL_01a3;
	}

IL_0189:
	{
		VirtActionInvoker1< int32_t >::Invoke(&m5057_MI, V_5, ((int32_t)(V_9-1)));
		goto IL_01a3;
	}

IL_0199:
	{
		VirtFuncInvoker1< int32_t, t5 * >::Invoke(&m4784_MI, V_5, V_8);
	}

IL_01a3:
	{
		int32_t L_18 = m2358(p0, &m2358_MI);
		if ((((int32_t)V_6) < ((int32_t)L_18)))
		{
			goto IL_0110;
		}
	}
	{
		int32_t L_19 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m4769_MI, V_5);
		if (L_19)
		{
			goto IL_01c2;
		}
	}
	{
		return (t11*) &_stringLiteral576;
	}

IL_01c2:
	{
		m5077(V_0, 0, &m5077_MI);
		uint16_t L_20 = m2385(p0, 0, &m2385_MI);
		if ((((uint32_t)L_20) != ((uint32_t)((int32_t)47))))
		{
			goto IL_01e0;
		}
	}
	{
		m2405(V_0, ((int32_t)47), &m2405_MI);
	}

IL_01e0:
	{
		V_10 = 1;
		t5 * L_21 = (t5 *)VirtFuncInvoker0< t5 * >::Invoke(&m4774_MI, V_5);
		V_12 = L_21;
	}

IL_01ec:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0220;
		}

IL_01f1:
		{
			t5 * L_22 = (t5 *)InterfaceFuncInvoker0< t5 * >::Invoke(&m4765_MI, V_12);
			V_11 = ((t11*)Castclass(L_22, (&t11_TI)));
			if (!V_10)
			{
				goto IL_020e;
			}
		}

IL_0206:
		{
			V_10 = 0;
			goto IL_0217;
		}

IL_020e:
		{
			m2405(V_0, ((int32_t)47), &m2405_MI);
		}

IL_0217:
		{
			m3574(V_0, V_11, &m3574_MI);
		}

IL_0220:
		{
			bool L_23 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&m747_MI, V_12);
			if (L_23)
			{
				goto IL_01f1;
			}
		}

IL_022c:
		{
			// IL_022c: leave IL_0247
			leaveInstructions[0] = 0x247; // 1
			THROW_SENTINEL(IL_0247);
			// finally target depth: 1
		}
	} // end try (depth: 1)
	catch(Il2CppFinallySentinel& e)
	{
		goto IL_0231;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t142 *)e.ex;
		goto IL_0231;
	}

IL_0231:
	{ // begin finally (depth: 1)
		{
			V_14 = ((t5 *)IsInst(V_12, InitializedTypeInfo(&t132_TI)));
			if (V_14)
			{
				goto IL_023f;
			}
		}

IL_023e:
		{
			// finally node depth: 1
			switch (leaveInstructions[0])
			{
				case 0x247:
					goto IL_0247;
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

IL_023f:
		{
			InterfaceActionInvoker0::Invoke(&m516_MI, V_14);
			// finally node depth: 1
			switch (leaveInstructions[0])
			{
				case 0x247:
					goto IL_0247;
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

IL_0247:
	{
		bool L_24 = m3577(p0, (t11*) &_stringLiteral576, &m3577_MI);
		if (!L_24)
		{
			goto IL_0260;
		}
	}
	{
		m2405(V_0, ((int32_t)47), &m2405_MI);
	}

IL_0260:
	{
		t11* L_25 = (t11*)VirtFuncInvoker0< t11* >::Invoke(&m1975_MI, V_0);
		return L_25;
	}
}
 uint16_t m4688 (t5 * __this, t11* p0, int32_t* p1, uint16_t* p2, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	t1044* V_5 = {0};
	bool V_6 = false;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	uint8_t V_10 = 0x0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	{
		*((int16_t*)(p2)) = (int16_t)0;
		if (p0)
		{
			goto IL_0014;
		}
	}
	{
		t160 * L_0 = (t160 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t160_TI));
		m2582(L_0, (t11*) &_stringLiteral515, &m2582_MI);
		il2cpp_codegen_raise_exception(L_0);
	}

IL_0014:
	{
		if ((((int32_t)(*((int32_t*)p1))) < ((int32_t)0)))
		{
			goto IL_0029;
		}
	}
	{
		int32_t L_1 = m2358(p0, &m2358_MI);
		if ((((int32_t)(*((int32_t*)p1))) < ((int32_t)L_1)))
		{
			goto IL_0034;
		}
	}

IL_0029:
	{
		t1181 * L_2 = (t1181 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1181_TI));
		m4768(L_2, (t11*) &_stringLiteral229, &m4768_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0034:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1011_TI));
		bool L_3 = m4673(NULL, p0, (*((int32_t*)p1)), &m4673_MI);
		if (L_3)
		{
			goto IL_0053;
		}
	}
	{
		int32_t L_4 = (*((int32_t*)p1));
		V_13 = L_4;
		*((int32_t*)(p1)) = (int32_t)((int32_t)(L_4+1));
		uint16_t L_5 = m2385(p0, V_13, &m2385_MI);
		return L_5;
	}

IL_0053:
	{
		int32_t L_6 = (*((int32_t*)p1));
		V_13 = L_6;
		*((int32_t*)(p1)) = (int32_t)((int32_t)(L_6+1));
		V_0 = V_13;
		int32_t L_7 = (*((int32_t*)p1));
		V_13 = L_7;
		*((int32_t*)(p1)) = (int32_t)((int32_t)(L_7+1));
		uint16_t L_8 = m2385(p0, V_13, &m2385_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1011_TI));
		int32_t L_9 = m4670(NULL, L_8, &m4670_MI);
		V_1 = L_9;
		int32_t L_10 = (*((int32_t*)p1));
		V_13 = L_10;
		*((int32_t*)(p1)) = (int32_t)((int32_t)(L_10+1));
		uint16_t L_11 = m2385(p0, V_13, &m2385_MI);
		int32_t L_12 = m4670(NULL, L_11, &m4670_MI);
		V_2 = L_12;
		V_3 = V_1;
		V_4 = 0;
		goto IL_00a1;
	}

IL_0097:
	{
		V_4 = ((int32_t)(V_4+1));
		V_3 = ((int32_t)((int32_t)V_3<<(int32_t)1));
	}

IL_00a1:
	{
		if ((((int32_t)((int32_t)((int32_t)V_3&(int32_t)8))) == ((int32_t)8)))
		{
			goto IL_0097;
		}
	}
	{
		if ((((int32_t)V_4) > ((int32_t)1)))
		{
			goto IL_00b9;
		}
	}
	{
		return (((uint16_t)((int32_t)((int32_t)((int32_t)((int32_t)V_1<<(int32_t)4))|(int32_t)V_2))));
	}

IL_00b9:
	{
		V_5 = ((t1044*)SZArrayNew(InitializedTypeInfo(&t1044_TI), V_4));
		V_6 = 0;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(V_5, 0)) = (uint8_t)(((uint8_t)((int32_t)((int32_t)((int32_t)((int32_t)V_1<<(int32_t)4))|(int32_t)V_2))));
		V_7 = 1;
		goto IL_014b;
	}

IL_00d7:
	{
		int32_t L_13 = (*((int32_t*)p1));
		V_13 = L_13;
		*((int32_t*)(p1)) = (int32_t)((int32_t)(L_13+1));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1011_TI));
		bool L_14 = m4673(NULL, p0, V_13, &m4673_MI);
		if (L_14)
		{
			goto IL_00f5;
		}
	}
	{
		V_6 = 1;
		goto IL_0154;
	}

IL_00f5:
	{
		int32_t L_15 = (*((int32_t*)p1));
		V_13 = L_15;
		*((int32_t*)(p1)) = (int32_t)((int32_t)(L_15+1));
		uint16_t L_16 = m2385(p0, V_13, &m2385_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1011_TI));
		int32_t L_17 = m4670(NULL, L_16, &m4670_MI);
		V_8 = L_17;
		if ((((int32_t)((int32_t)((int32_t)V_8&(int32_t)((int32_t)12)))) == ((int32_t)8)))
		{
			goto IL_0120;
		}
	}
	{
		V_6 = 1;
		goto IL_0154;
	}

IL_0120:
	{
		int32_t L_18 = (*((int32_t*)p1));
		V_13 = L_18;
		*((int32_t*)(p1)) = (int32_t)((int32_t)(L_18+1));
		uint16_t L_19 = m2385(p0, V_13, &m2385_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1011_TI));
		int32_t L_20 = m4670(NULL, L_19, &m4670_MI);
		V_9 = L_20;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(V_5, V_7)) = (uint8_t)(((uint8_t)((int32_t)((int32_t)((int32_t)((int32_t)V_8<<(int32_t)4))|(int32_t)V_9))));
		V_7 = ((int32_t)(V_7+1));
	}

IL_014b:
	{
		if ((((int32_t)V_7) < ((int32_t)V_4)))
		{
			goto IL_00d7;
		}
	}

IL_0154:
	{
		if (!V_6)
		{
			goto IL_0166;
		}
	}
	{
		*((int32_t*)(p1)) = (int32_t)((int32_t)(V_0+3));
		int32_t L_21 = 0;
		return (((uint16_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(V_5, L_21))));
	}

IL_0166:
	{
		V_10 = ((int32_t)255);
		V_10 = (((uint8_t)((int32_t)((int32_t)V_10>>(int32_t)((int32_t)((int32_t)((int32_t)(V_4+1))&(int32_t)((int32_t)31)))))));
		int32_t L_22 = 0;
		V_11 = ((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(V_5, L_22))&(int32_t)V_10));
		V_12 = 1;
		goto IL_01a4;
	}

IL_018b:
	{
		V_11 = ((int32_t)((int32_t)V_11<<(int32_t)6));
		int32_t L_23 = V_12;
		V_11 = ((int32_t)((int32_t)V_11|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(V_5, L_23))&(int32_t)((int32_t)63)))));
		V_12 = ((int32_t)(V_12+1));
	}

IL_01a4:
	{
		if ((((int32_t)V_12) < ((int32_t)V_4)))
		{
			goto IL_018b;
		}
	}
	{
		if ((((int32_t)V_11) > ((int32_t)((int32_t)65535))))
		{
			goto IL_01bd;
		}
	}
	{
		return (((uint16_t)V_11));
	}

IL_01bd:
	{
		V_11 = ((int32_t)(V_11-((int32_t)65536)));
		*((int16_t*)(p2)) = (int16_t)(((uint16_t)((int32_t)((int32_t)((int32_t)((int32_t)V_11&(int32_t)((int32_t)1023)))|(int32_t)((int32_t)56320)))));
		return (((uint16_t)((int32_t)((int32_t)((int32_t)((int32_t)V_11>>(int32_t)((int32_t)10)))|(int32_t)((int32_t)55296)))));
	}
}
 t11* m4689 (t5 * __this, t11* p0, MethodInfo* method){
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0037;
	}

IL_0007:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1011_TI));
		t11* L_0 = (((t1156 *)(t1156 *)SZArrayLdElema((((t1011_SFs*)InitializedTypeInfo(&t1011_TI)->static_fields)->f28), V_0))->f0);
		IL2CPP_RUNTIME_CLASS_INIT((&t11_TI));
		bool L_1 = m2356(NULL, L_0, p0, &m2356_MI);
		if (!L_1)
		{
			goto IL_0033;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1011_TI));
		t11* L_2 = (((t1156 *)(t1156 *)SZArrayLdElema((((t1011_SFs*)InitializedTypeInfo(&t1011_TI)->static_fields)->f28), V_0))->f1);
		return L_2;
	}

IL_0033:
	{
		V_0 = ((int32_t)(V_0+1));
	}

IL_0037:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1011_TI));
		if ((((int32_t)V_0) < ((int32_t)(((int32_t)(((t107 *)(((t1011_SFs*)InitializedTypeInfo(&t1011_TI)->static_fields)->f28))->max_length))))))
		{
			goto IL_0007;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1011_TI));
		return (((t1011_SFs*)InitializedTypeInfo(&t1011_TI)->static_fields)->f17);
	}
}
 int32_t m4690 (t5 * __this, t11* p0, MethodInfo* method){
	t1154 * V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1154_TI));
		t1154 * L_0 = m4709(NULL, p0, &m4709_MI);
		V_0 = L_0;
		if (V_0)
		{
			goto IL_000f;
		}
	}
	{
		return (-1);
	}

IL_000f:
	{
		int32_t L_1 = m4705(V_0, &m4705_MI);
		return L_1;
	}
}
 t11* m4691 (t1011 * __this, MethodInfo* method){
	{
		bool L_0 = (__this->f10);
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		return (t11*) &_stringLiteral216;
	}

IL_0011:
	{
		t11* L_1 = (__this->f2);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1011_TI));
		t11* L_2 = m4689(NULL, L_1, &m4689_MI);
		return L_2;
	}
}
 bool m4692 (t5 * __this, t11* p0, MethodInfo* method){
	t11* V_0 = {0};
	t623 * V_1 = {0};
	int32_t V_2 = 0;
	{
		V_0 = p0;
		if (!V_0)
		{
			goto IL_00b7;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1011_TI));
		if ((((t1011_SFs*)InitializedTypeInfo(&t1011_TI)->static_fields)->f32))
		{
			goto IL_0098;
		}
	}
	{
		t623 * L_0 = (t623 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t623_TI));
		m4833(L_0, ((int32_t)10), &m4833_MI);
		V_1 = L_0;
		VirtActionInvoker2< t11*, int32_t >::Invoke(&m4834_MI, V_1, (t11*) &_stringLiteral320, 0);
		VirtActionInvoker2< t11*, int32_t >::Invoke(&m4834_MI, V_1, (t11*) &_stringLiteral319, 0);
		VirtActionInvoker2< t11*, int32_t >::Invoke(&m4834_MI, V_1, (t11*) &_stringLiteral378, 0);
		VirtActionInvoker2< t11*, int32_t >::Invoke(&m4834_MI, V_1, (t11*) &_stringLiteral380, 0);
		VirtActionInvoker2< t11*, int32_t >::Invoke(&m4834_MI, V_1, (t11*) &_stringLiteral564, 0);
		VirtActionInvoker2< t11*, int32_t >::Invoke(&m4834_MI, V_1, (t11*) &_stringLiteral561, 0);
		VirtActionInvoker2< t11*, int32_t >::Invoke(&m4834_MI, V_1, (t11*) &_stringLiteral562, 0);
		VirtActionInvoker2< t11*, int32_t >::Invoke(&m4834_MI, V_1, (t11*) &_stringLiteral563, 0);
		VirtActionInvoker2< t11*, int32_t >::Invoke(&m4834_MI, V_1, (t11*) &_stringLiteral565, 0);
		VirtActionInvoker2< t11*, int32_t >::Invoke(&m4834_MI, V_1, (t11*) &_stringLiteral566, 0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1011_TI));
		((t1011_SFs*)InitializedTypeInfo(&t1011_TI)->static_fields)->f32 = V_1;
	}

IL_0098:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1011_TI));
		bool L_1 = (bool)VirtFuncInvoker2< bool, t11*, int32_t* >::Invoke(&m4835_MI, (((t1011_SFs*)InitializedTypeInfo(&t1011_TI)->static_fields)->f32), V_0, (&V_2));
		if (!L_1)
		{
			goto IL_00b7;
		}
	}
	{
		if (!V_2)
		{
			goto IL_00b5;
		}
	}
	{
		goto IL_00b7;
	}

IL_00b5:
	{
		return 1;
	}

IL_00b7:
	{
		return 0;
	}
}
 t1154 * m4693 (t1011 * __this, MethodInfo* method){
	{
		t1154 * L_0 = (__this->f29);
		if (L_0)
		{
			goto IL_0037;
		}
	}
	{
		t11* L_1 = m4659(__this, &m4659_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1154_TI));
		t1154 * L_2 = m4709(NULL, L_1, &m4709_MI);
		__this->f29 = L_2;
		t1154 * L_3 = (__this->f29);
		if (L_3)
		{
			goto IL_0037;
		}
	}
	{
		t1153 * L_4 = (t1153 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1153_TI));
		m4646(L_4, (t11*) &_stringLiteral557, &m4646_MI);
		__this->f29 = L_4;
	}

IL_0037:
	{
		t1154 * L_5 = (__this->f29);
		return L_5;
	}
}
 void m4694 (t1011 * __this, MethodInfo* method){
	{
		bool L_0 = m4660(__this, &m4660_MI);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		t133 * L_1 = (t133 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t133_TI));
		m4759(L_1, (t11*) &_stringLiteral591, &m4759_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0016:
	{
		return;
	}
}
extern MethodInfo m4695_MI;
 bool m4695 (t5 * __this, t1011 * p0, t1011 * p1, MethodInfo* method){
	{
		bool L_0 = m5078(NULL, p0, p1, &m5078_MI);
		return L_0;
	}
}
// Metadata Definition System.Uri
extern Il2CppType t108_0_0_1;
FieldInfo t1011_f0_FieldInfo = 
{
	"isUnixFilePath", &t108_0_0_1, &t1011_TI, offsetof(t1011, f0), &EmptyCustomAttributesCache};
extern Il2CppType t11_0_0_1;
FieldInfo t1011_f1_FieldInfo = 
{
	"source", &t11_0_0_1, &t1011_TI, offsetof(t1011, f1), &EmptyCustomAttributesCache};
extern Il2CppType t11_0_0_1;
FieldInfo t1011_f2_FieldInfo = 
{
	"scheme", &t11_0_0_1, &t1011_TI, offsetof(t1011, f2), &EmptyCustomAttributesCache};
extern Il2CppType t11_0_0_1;
FieldInfo t1011_f3_FieldInfo = 
{
	"host", &t11_0_0_1, &t1011_TI, offsetof(t1011, f3), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t1011_f4_FieldInfo = 
{
	"port", &t110_0_0_1, &t1011_TI, offsetof(t1011, f4), &EmptyCustomAttributesCache};
extern Il2CppType t11_0_0_1;
FieldInfo t1011_f5_FieldInfo = 
{
	"path", &t11_0_0_1, &t1011_TI, offsetof(t1011, f5), &EmptyCustomAttributesCache};
extern Il2CppType t11_0_0_1;
FieldInfo t1011_f6_FieldInfo = 
{
	"query", &t11_0_0_1, &t1011_TI, offsetof(t1011, f6), &EmptyCustomAttributesCache};
extern Il2CppType t11_0_0_1;
FieldInfo t1011_f7_FieldInfo = 
{
	"fragment", &t11_0_0_1, &t1011_TI, offsetof(t1011, f7), &EmptyCustomAttributesCache};
extern Il2CppType t11_0_0_1;
FieldInfo t1011_f8_FieldInfo = 
{
	"userinfo", &t11_0_0_1, &t1011_TI, offsetof(t1011, f8), &EmptyCustomAttributesCache};
extern Il2CppType t108_0_0_1;
FieldInfo t1011_f9_FieldInfo = 
{
	"isUnc", &t108_0_0_1, &t1011_TI, offsetof(t1011, f9), &EmptyCustomAttributesCache};
extern Il2CppType t108_0_0_1;
FieldInfo t1011_f10_FieldInfo = 
{
	"isOpaquePart", &t108_0_0_1, &t1011_TI, offsetof(t1011, f10), &EmptyCustomAttributesCache};
extern Il2CppType t108_0_0_1;
FieldInfo t1011_f11_FieldInfo = 
{
	"isAbsoluteUri", &t108_0_0_1, &t1011_TI, offsetof(t1011, f11), &EmptyCustomAttributesCache};
extern Il2CppType t108_0_0_1;
FieldInfo t1011_f12_FieldInfo = 
{
	"userEscaped", &t108_0_0_1, &t1011_TI, offsetof(t1011, f12), &EmptyCustomAttributesCache};
extern Il2CppType t11_0_0_1;
FieldInfo t1011_f13_FieldInfo = 
{
	"cachedAbsoluteUri", &t11_0_0_1, &t1011_TI, offsetof(t1011, f13), &EmptyCustomAttributesCache};
extern Il2CppType t11_0_0_1;
FieldInfo t1011_f14_FieldInfo = 
{
	"cachedToString", &t11_0_0_1, &t1011_TI, offsetof(t1011, f14), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t1011_f15_FieldInfo = 
{
	"cachedHashCode", &t110_0_0_1, &t1011_TI, offsetof(t1011, f15), &EmptyCustomAttributesCache};
extern Il2CppType t11_0_0_49;
FieldInfo t1011_f16_FieldInfo = 
{
	"hexUpperChars", &t11_0_0_49, &t1011_TI, offsetof(t1011_SFs, f16), &EmptyCustomAttributesCache};
extern Il2CppType t11_0_0_54;
FieldInfo t1011_f17_FieldInfo = 
{
	"SchemeDelimiter", &t11_0_0_54, &t1011_TI, offsetof(t1011_SFs, f17), &EmptyCustomAttributesCache};
extern Il2CppType t11_0_0_54;
FieldInfo t1011_f18_FieldInfo = 
{
	"UriSchemeFile", &t11_0_0_54, &t1011_TI, offsetof(t1011_SFs, f18), &EmptyCustomAttributesCache};
extern Il2CppType t11_0_0_54;
FieldInfo t1011_f19_FieldInfo = 
{
	"UriSchemeFtp", &t11_0_0_54, &t1011_TI, offsetof(t1011_SFs, f19), &EmptyCustomAttributesCache};
extern Il2CppType t11_0_0_54;
FieldInfo t1011_f20_FieldInfo = 
{
	"UriSchemeGopher", &t11_0_0_54, &t1011_TI, offsetof(t1011_SFs, f20), &EmptyCustomAttributesCache};
extern Il2CppType t11_0_0_54;
FieldInfo t1011_f21_FieldInfo = 
{
	"UriSchemeHttp", &t11_0_0_54, &t1011_TI, offsetof(t1011_SFs, f21), &EmptyCustomAttributesCache};
extern Il2CppType t11_0_0_54;
FieldInfo t1011_f22_FieldInfo = 
{
	"UriSchemeHttps", &t11_0_0_54, &t1011_TI, offsetof(t1011_SFs, f22), &EmptyCustomAttributesCache};
extern Il2CppType t11_0_0_54;
FieldInfo t1011_f23_FieldInfo = 
{
	"UriSchemeMailto", &t11_0_0_54, &t1011_TI, offsetof(t1011_SFs, f23), &EmptyCustomAttributesCache};
extern Il2CppType t11_0_0_54;
FieldInfo t1011_f24_FieldInfo = 
{
	"UriSchemeNews", &t11_0_0_54, &t1011_TI, offsetof(t1011_SFs, f24), &EmptyCustomAttributesCache};
extern Il2CppType t11_0_0_54;
FieldInfo t1011_f25_FieldInfo = 
{
	"UriSchemeNntp", &t11_0_0_54, &t1011_TI, offsetof(t1011_SFs, f25), &EmptyCustomAttributesCache};
extern Il2CppType t11_0_0_54;
FieldInfo t1011_f26_FieldInfo = 
{
	"UriSchemeNetPipe", &t11_0_0_54, &t1011_TI, offsetof(t1011_SFs, f26), &EmptyCustomAttributesCache};
extern Il2CppType t11_0_0_54;
FieldInfo t1011_f27_FieldInfo = 
{
	"UriSchemeNetTcp", &t11_0_0_54, &t1011_TI, offsetof(t1011_SFs, f27), &EmptyCustomAttributesCache};
extern Il2CppType t1157_0_0_17;
FieldInfo t1011_f28_FieldInfo = 
{
	"schemes", &t1157_0_0_17, &t1011_TI, offsetof(t1011_SFs, f28), &EmptyCustomAttributesCache};
extern Il2CppType t1154_0_0_129;
FieldInfo t1011_f29_FieldInfo = 
{
	"parser", &t1154_0_0_129, &t1011_TI, offsetof(t1011, f29), &EmptyCustomAttributesCache};
extern Il2CppType t623_0_0_17;
extern CustomAttributesCache t1011__CustomAttributeCache_U3CU3Ef__switch$map14;
FieldInfo t1011_f30_FieldInfo = 
{
	"<>f__switch$map14", &t623_0_0_17, &t1011_TI, offsetof(t1011_SFs, f30), &t1011__CustomAttributeCache_U3CU3Ef__switch$map14};
extern Il2CppType t623_0_0_17;
extern CustomAttributesCache t1011__CustomAttributeCache_U3CU3Ef__switch$map15;
FieldInfo t1011_f31_FieldInfo = 
{
	"<>f__switch$map15", &t623_0_0_17, &t1011_TI, offsetof(t1011_SFs, f31), &t1011__CustomAttributeCache_U3CU3Ef__switch$map15};
extern Il2CppType t623_0_0_17;
extern CustomAttributesCache t1011__CustomAttributeCache_U3CU3Ef__switch$map16;
FieldInfo t1011_f32_FieldInfo = 
{
	"<>f__switch$map16", &t623_0_0_17, &t1011_TI, offsetof(t1011_SFs, f32), &t1011__CustomAttributeCache_U3CU3Ef__switch$map16};
static FieldInfo* t1011_FIs[] =
{
	&t1011_f0_FieldInfo,
	&t1011_f1_FieldInfo,
	&t1011_f2_FieldInfo,
	&t1011_f3_FieldInfo,
	&t1011_f4_FieldInfo,
	&t1011_f5_FieldInfo,
	&t1011_f6_FieldInfo,
	&t1011_f7_FieldInfo,
	&t1011_f8_FieldInfo,
	&t1011_f9_FieldInfo,
	&t1011_f10_FieldInfo,
	&t1011_f11_FieldInfo,
	&t1011_f12_FieldInfo,
	&t1011_f13_FieldInfo,
	&t1011_f14_FieldInfo,
	&t1011_f15_FieldInfo,
	&t1011_f16_FieldInfo,
	&t1011_f17_FieldInfo,
	&t1011_f18_FieldInfo,
	&t1011_f19_FieldInfo,
	&t1011_f20_FieldInfo,
	&t1011_f21_FieldInfo,
	&t1011_f22_FieldInfo,
	&t1011_f23_FieldInfo,
	&t1011_f24_FieldInfo,
	&t1011_f25_FieldInfo,
	&t1011_f26_FieldInfo,
	&t1011_f27_FieldInfo,
	&t1011_f28_FieldInfo,
	&t1011_f29_FieldInfo,
	&t1011_f30_FieldInfo,
	&t1011_f31_FieldInfo,
	&t1011_f32_FieldInfo,
	NULL
};
static PropertyInfo t1011____AbsoluteUri_PropertyInfo = 
{
	&t1011_TI, "AbsoluteUri", &m4653_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1011____Authority_PropertyInfo = 
{
	&t1011_TI, "Authority", &m4654_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1011____Host_PropertyInfo = 
{
	&t1011_TI, "Host", &m4655_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1011____IsFile_PropertyInfo = 
{
	&t1011_TI, "IsFile", &m4656_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1011____IsLoopback_PropertyInfo = 
{
	&t1011_TI, "IsLoopback", &m4657_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1011____IsUnc_PropertyInfo = 
{
	&t1011_TI, "IsUnc", &m4658_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1011____Scheme_PropertyInfo = 
{
	&t1011_TI, "Scheme", &m4659_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1011____IsAbsoluteUri_PropertyInfo = 
{
	&t1011_TI, "IsAbsoluteUri", &m4660_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1011____Parser_PropertyInfo = 
{
	&t1011_TI, "Parser", &m4693_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1011_PIs[] =
{
	&t1011____AbsoluteUri_PropertyInfo,
	&t1011____Authority_PropertyInfo,
	&t1011____Host_PropertyInfo,
	&t1011____IsFile_PropertyInfo,
	&t1011____IsLoopback_PropertyInfo,
	&t1011____IsUnc_PropertyInfo,
	&t1011____Scheme_PropertyInfo,
	&t1011____IsAbsoluteUri_PropertyInfo,
	&t1011____Parser_PropertyInfo,
	NULL
};
extern Il2CppType t11_0_0_0;
static ParameterInfo t1011_m4648_ParameterInfos[] = 
{
	{"uriString", 0, 134218559, &EmptyCustomAttributesCache, &t11_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m4648_MI = 
{
	".ctor", (methodPointerType)&m4648, &t1011_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t1011_m4648_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 885, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t829_0_0_0;
extern Il2CppType t829_0_0_0;
extern Il2CppType t830_0_0_0;
extern Il2CppType t830_0_0_0;
static ParameterInfo t1011_m4649_ParameterInfos[] = 
{
	{"serializationInfo", 0, 134218560, &EmptyCustomAttributesCache, &t829_0_0_0},
	{"streamingContext", 1, 134218561, &EmptyCustomAttributesCache, &t830_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t830 (MethodInfo* method, void* obj, void** args);
MethodInfo m4649_MI = 
{
	".ctor", (methodPointerType)&m4649, &t1011_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t830, t1011_m4649_ParameterInfos, &EmptyCustomAttributesCache, 6276, 0, 255, 2, false, false, 886, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t11_0_0_0;
extern Il2CppType t108_0_0_0;
static ParameterInfo t1011_m4650_ParameterInfos[] = 
{
	{"uriString", 0, 134218562, &EmptyCustomAttributesCache, &t11_0_0_0},
	{"dontEscape", 1, 134218563, &EmptyCustomAttributesCache, &t108_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t111 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t1011__CustomAttributeCache_m4650;
MethodInfo m4650_MI = 
{
	".ctor", (methodPointerType)&m4650, &t1011_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t111, t1011_m4650_ParameterInfos, &t1011__CustomAttributeCache_m4650, 6278, 0, 255, 2, false, false, 887, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m4651_MI = 
{
	".cctor", (methodPointerType)&m4651, &t1011_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 888, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t829_0_0_0;
extern Il2CppType t830_0_0_0;
static ParameterInfo t1011_m4652_ParameterInfos[] = 
{
	{"info", 0, 134218564, &EmptyCustomAttributesCache, &t829_0_0_0},
	{"context", 1, 134218565, &EmptyCustomAttributesCache, &t830_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t830 (MethodInfo* method, void* obj, void** args);
MethodInfo m4652_MI = 
{
	"System.Runtime.Serialization.ISerializable.GetObjectData", (methodPointerType)&m4652, &t1011_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t830, t1011_m4652_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 4, 2, false, false, 889, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t11_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m4653_MI = 
{
	"get_AbsoluteUri", (methodPointerType)&m4653, &t1011_TI, &t11_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 890, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t11_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m4654_MI = 
{
	"get_Authority", (methodPointerType)&m4654, &t1011_TI, &t11_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 891, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t11_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m4655_MI = 
{
	"get_Host", (methodPointerType)&m4655, &t1011_TI, &t11_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 892, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
MethodInfo m4656_MI = 
{
	"get_IsFile", (methodPointerType)&m4656, &t1011_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 893, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
MethodInfo m4657_MI = 
{
	"get_IsLoopback", (methodPointerType)&m4657, &t1011_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 894, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
MethodInfo m4658_MI = 
{
	"get_IsUnc", (methodPointerType)&m4658, &t1011_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 895, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t11_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m4659_MI = 
{
	"get_Scheme", (methodPointerType)&m4659, &t1011_TI, &t11_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 896, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
MethodInfo m4660_MI = 
{
	"get_IsAbsoluteUri", (methodPointerType)&m4660, &t1011_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 897, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t11_0_0_0;
static ParameterInfo t1011_m4661_ParameterInfos[] = 
{
	{"name", 0, 134218566, &EmptyCustomAttributesCache, &t11_0_0_0},
};
extern Il2CppType t1158_0_0_0;
extern void* RuntimeInvoker_t1158_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m4661_MI = 
{
	"CheckHostName", (methodPointerType)&m4661, &t1011_TI, &t1158_0_0_0, RuntimeInvoker_t1158_t5, t1011_m4661_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 898, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t11_0_0_0;
static ParameterInfo t1011_m4662_ParameterInfos[] = 
{
	{"name", 0, 134218567, &EmptyCustomAttributesCache, &t11_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m4662_MI = 
{
	"IsIPv4Address", (methodPointerType)&m4662, &t1011_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t1011_m4662_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, false, 899, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t11_0_0_0;
static ParameterInfo t1011_m4663_ParameterInfos[] = 
{
	{"name", 0, 134218568, &EmptyCustomAttributesCache, &t11_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m4663_MI = 
{
	"IsDomainAddress", (methodPointerType)&m4663, &t1011_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t1011_m4663_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, false, 900, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t11_0_0_0;
static ParameterInfo t1011_m4664_ParameterInfos[] = 
{
	{"schemeName", 0, 134218569, &EmptyCustomAttributesCache, &t11_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m4664_MI = 
{
	"CheckSchemeName", (methodPointerType)&m4664, &t1011_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t1011_m4664_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 901, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t144_0_0_0;
static ParameterInfo t1011_m4665_ParameterInfos[] = 
{
	{"c", 0, 134218570, &EmptyCustomAttributesCache, &t144_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t150 (MethodInfo* method, void* obj, void** args);
MethodInfo m4665_MI = 
{
	"IsAlpha", (methodPointerType)&m4665, &t1011_TI, &t108_0_0_0, RuntimeInvoker_t108_t150, t1011_m4665_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 1, false, false, 902, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t5_0_0_0;
static ParameterInfo t1011_m4666_ParameterInfos[] = 
{
	{"comparant", 0, 134218571, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m4666_MI = 
{
	"Equals", (methodPointerType)&m4666, &t1011_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t1011_m4666_ParameterInfos, &EmptyCustomAttributesCache, 198, 0, 0, 1, false, false, 903, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1011_0_0_0;
extern Il2CppType t1011_0_0_0;
static ParameterInfo t1011_m4667_ParameterInfos[] = 
{
	{"uri", 0, 134218572, &EmptyCustomAttributesCache, &t1011_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m4667_MI = 
{
	"InternalEquals", (methodPointerType)&m4667, &t1011_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t1011_m4667_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 904, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m4668_MI = 
{
	"GetHashCode", (methodPointerType)&m4668, &t1011_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 198, 0, 2, 0, false, false, 905, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1159_0_0_0;
extern Il2CppType t1159_0_0_0;
static ParameterInfo t1011_m4669_ParameterInfos[] = 
{
	{"part", 0, 134218573, &EmptyCustomAttributesCache, &t1159_0_0_0},
};
extern Il2CppType t11_0_0_0;
extern void* RuntimeInvoker_t5_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m4669_MI = 
{
	"GetLeftPart", (methodPointerType)&m4669, &t1011_TI, &t11_0_0_0, RuntimeInvoker_t5_t110, t1011_m4669_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 906, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t144_0_0_0;
static ParameterInfo t1011_m4670_ParameterInfos[] = 
{
	{"digit", 0, 134218574, &EmptyCustomAttributesCache, &t144_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t150 (MethodInfo* method, void* obj, void** args);
MethodInfo m4670_MI = 
{
	"FromHex", (methodPointerType)&m4670, &t1011_TI, &t110_0_0_0, RuntimeInvoker_t110_t150, t1011_m4670_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 907, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t144_0_0_0;
static ParameterInfo t1011_m4671_ParameterInfos[] = 
{
	{"character", 0, 134218575, &EmptyCustomAttributesCache, &t144_0_0_0},
};
extern Il2CppType t11_0_0_0;
extern void* RuntimeInvoker_t5_t150 (MethodInfo* method, void* obj, void** args);
MethodInfo m4671_MI = 
{
	"HexEscape", (methodPointerType)&m4671, &t1011_TI, &t11_0_0_0, RuntimeInvoker_t5_t150, t1011_m4671_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 908, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t144_0_0_0;
static ParameterInfo t1011_m4672_ParameterInfos[] = 
{
	{"digit", 0, 134218576, &EmptyCustomAttributesCache, &t144_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t150 (MethodInfo* method, void* obj, void** args);
MethodInfo m4672_MI = 
{
	"IsHexDigit", (methodPointerType)&m4672, &t1011_TI, &t108_0_0_0, RuntimeInvoker_t108_t150, t1011_m4672_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 909, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t11_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t1011_m4673_ParameterInfos[] = 
{
	{"pattern", 0, 134218577, &EmptyCustomAttributesCache, &t11_0_0_0},
	{"index", 1, 134218578, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m4673_MI = 
{
	"IsHexEncoding", (methodPointerType)&m4673, &t1011_TI, &t108_0_0_0, RuntimeInvoker_t108_t5_t110, t1011_m4673_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 2, false, false, 910, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t11_1_0_0;
extern Il2CppType t11_1_0_0;
static ParameterInfo t1011_m4674_ParameterInfos[] = 
{
	{"result", 0, 134218579, &EmptyCustomAttributesCache, &t11_1_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t200 (MethodInfo* method, void* obj, void** args);
MethodInfo m4674_MI = 
{
	"AppendQueryAndFragment", (methodPointerType)&m4674, &t1011_TI, &t109_0_0_0, RuntimeInvoker_t109_t200, t1011_m4674_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 911, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t11_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m4675_MI = 
{
	"ToString", (methodPointerType)&m4675, &t1011_TI, &t11_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 198, 0, 3, 0, false, false, 912, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t11_0_0_0;
static ParameterInfo t1011_m4676_ParameterInfos[] = 
{
	{"str", 0, 134218580, &EmptyCustomAttributesCache, &t11_0_0_0},
};
extern Il2CppType t11_0_0_0;
extern void* RuntimeInvoker_t5_t5 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t1011__CustomAttributeCache_m4676;
MethodInfo m4676_MI = 
{
	"EscapeString", (methodPointerType)&m4676, &t1011_TI, &t11_0_0_0, RuntimeInvoker_t5_t5, t1011_m4676_ParameterInfos, &t1011__CustomAttributeCache_m4676, 148, 0, 255, 1, false, false, 913, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t11_0_0_0;
extern Il2CppType t108_0_0_0;
extern Il2CppType t108_0_0_0;
extern Il2CppType t108_0_0_0;
static ParameterInfo t1011_m4677_ParameterInfos[] = 
{
	{"str", 0, 134218581, &EmptyCustomAttributesCache, &t11_0_0_0},
	{"escapeReserved", 1, 134218582, &EmptyCustomAttributesCache, &t108_0_0_0},
	{"escapeHex", 2, 134218583, &EmptyCustomAttributesCache, &t108_0_0_0},
	{"escapeBrackets", 3, 134218584, &EmptyCustomAttributesCache, &t108_0_0_0},
};
extern Il2CppType t11_0_0_0;
extern void* RuntimeInvoker_t5_t5_t111_t111_t111 (MethodInfo* method, void* obj, void** args);
MethodInfo m4677_MI = 
{
	"EscapeString", (methodPointerType)&m4677, &t1011_TI, &t11_0_0_0, RuntimeInvoker_t5_t5_t111_t111_t111, t1011_m4677_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 4, false, false, 914, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1160_0_0_0;
extern Il2CppType t1160_0_0_0;
static ParameterInfo t1011_m4678_ParameterInfos[] = 
{
	{"kind", 0, 134218585, &EmptyCustomAttributesCache, &t1160_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m4678_MI = 
{
	"ParseUri", (methodPointerType)&m4678, &t1011_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t1011_m4678_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 915, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t11_0_0_0;
static ParameterInfo t1011_m4679_ParameterInfos[] = 
{
	{"str", 0, 134218586, &EmptyCustomAttributesCache, &t11_0_0_0},
};
extern Il2CppType t11_0_0_0;
extern void* RuntimeInvoker_t5_t5 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t1011__CustomAttributeCache_m4679;
MethodInfo m4679_MI = 
{
	"Unescape", (methodPointerType)&m4679, &t1011_TI, &t11_0_0_0, RuntimeInvoker_t5_t5, t1011_m4679_ParameterInfos, &t1011__CustomAttributeCache_m4679, 452, 0, 5, 1, false, false, 916, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t11_0_0_0;
extern Il2CppType t108_0_0_0;
static ParameterInfo t1011_m4680_ParameterInfos[] = 
{
	{"str", 0, 134218587, &EmptyCustomAttributesCache, &t11_0_0_0},
	{"excludeSpecial", 1, 134218588, &EmptyCustomAttributesCache, &t108_0_0_0},
};
extern Il2CppType t11_0_0_0;
extern void* RuntimeInvoker_t5_t5_t111 (MethodInfo* method, void* obj, void** args);
MethodInfo m4680_MI = 
{
	"Unescape", (methodPointerType)&m4680, &t1011_TI, &t11_0_0_0, RuntimeInvoker_t5_t5_t111, t1011_m4680_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 2, false, false, 917, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t11_0_0_0;
static ParameterInfo t1011_m4681_ParameterInfos[] = 
{
	{"uriString", 0, 134218589, &EmptyCustomAttributesCache, &t11_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m4681_MI = 
{
	"ParseAsWindowsUNC", (methodPointerType)&m4681, &t1011_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t1011_m4681_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 918, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t11_0_0_0;
static ParameterInfo t1011_m4682_ParameterInfos[] = 
{
	{"uriString", 0, 134218590, &EmptyCustomAttributesCache, &t11_0_0_0},
};
extern Il2CppType t11_0_0_0;
extern void* RuntimeInvoker_t5_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m4682_MI = 
{
	"ParseAsWindowsAbsoluteFilePath", (methodPointerType)&m4682, &t1011_TI, &t11_0_0_0, RuntimeInvoker_t5_t5, t1011_m4682_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 919, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t11_0_0_0;
static ParameterInfo t1011_m4683_ParameterInfos[] = 
{
	{"uriString", 0, 134218591, &EmptyCustomAttributesCache, &t11_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m4683_MI = 
{
	"ParseAsUnixAbsoluteFilePath", (methodPointerType)&m4683, &t1011_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t1011_m4683_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 920, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1160_0_0_0;
extern Il2CppType t11_0_0_0;
static ParameterInfo t1011_m4684_ParameterInfos[] = 
{
	{"kind", 0, 134218592, &EmptyCustomAttributesCache, &t1160_0_0_0},
	{"uriString", 1, 134218593, &EmptyCustomAttributesCache, &t11_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m4684_MI = 
{
	"Parse", (methodPointerType)&m4684, &t1011_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t1011_m4684_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, false, 921, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1160_0_0_0;
extern Il2CppType t11_0_0_0;
static ParameterInfo t1011_m4685_ParameterInfos[] = 
{
	{"kind", 0, 134218594, &EmptyCustomAttributesCache, &t1160_0_0_0},
	{"uriString", 1, 134218595, &EmptyCustomAttributesCache, &t11_0_0_0},
};
extern Il2CppType t11_0_0_0;
extern void* RuntimeInvoker_t5_t110_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m4685_MI = 
{
	"ParseNoExceptions", (methodPointerType)&m4685, &t1011_TI, &t11_0_0_0, RuntimeInvoker_t5_t110_t5, t1011_m4685_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, false, 922, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t11_0_0_0;
static ParameterInfo t1011_m4686_ParameterInfos[] = 
{
	{"scheme", 0, 134218596, &EmptyCustomAttributesCache, &t11_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m4686_MI = 
{
	"CompactEscaped", (methodPointerType)&m4686, &t1011_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t1011_m4686_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 1, false, false, 923, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t11_0_0_0;
extern Il2CppType t108_0_0_0;
static ParameterInfo t1011_m4687_ParameterInfos[] = 
{
	{"path", 0, 134218597, &EmptyCustomAttributesCache, &t11_0_0_0},
	{"compact_escaped", 1, 134218598, &EmptyCustomAttributesCache, &t108_0_0_0},
};
extern Il2CppType t11_0_0_0;
extern void* RuntimeInvoker_t5_t5_t111 (MethodInfo* method, void* obj, void** args);
MethodInfo m4687_MI = 
{
	"Reduce", (methodPointerType)&m4687, &t1011_TI, &t11_0_0_0, RuntimeInvoker_t5_t5_t111, t1011_m4687_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 2, false, false, 924, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t11_0_0_0;
extern Il2CppType t110_1_0_0;
extern Il2CppType t144_1_0_2;
extern Il2CppType t144_1_0_0;
static ParameterInfo t1011_m4688_ParameterInfos[] = 
{
	{"pattern", 0, 134218599, &EmptyCustomAttributesCache, &t11_0_0_0},
	{"index", 1, 134218600, &EmptyCustomAttributesCache, &t110_1_0_0},
	{"surrogate", 2, 134218601, &EmptyCustomAttributesCache, &t144_1_0_2},
};
extern Il2CppType t144_0_0_0;
extern void* RuntimeInvoker_t144_t5_t533_t1225 (MethodInfo* method, void* obj, void** args);
MethodInfo m4688_MI = 
{
	"HexUnescapeMultiByte", (methodPointerType)&m4688, &t1011_TI, &t144_0_0_0, RuntimeInvoker_t144_t5_t533_t1225, t1011_m4688_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 3, false, false, 925, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t11_0_0_0;
static ParameterInfo t1011_m4689_ParameterInfos[] = 
{
	{"scheme", 0, 134218602, &EmptyCustomAttributesCache, &t11_0_0_0},
};
extern Il2CppType t11_0_0_0;
extern void* RuntimeInvoker_t5_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m4689_MI = 
{
	"GetSchemeDelimiter", (methodPointerType)&m4689, &t1011_TI, &t11_0_0_0, RuntimeInvoker_t5_t5, t1011_m4689_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, false, 926, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t11_0_0_0;
static ParameterInfo t1011_m4690_ParameterInfos[] = 
{
	{"scheme", 0, 134218603, &EmptyCustomAttributesCache, &t11_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m4690_MI = 
{
	"GetDefaultPort", (methodPointerType)&m4690, &t1011_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t1011_m4690_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, false, 927, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t11_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m4691_MI = 
{
	"GetOpaqueWiseSchemeDelimiter", (methodPointerType)&m4691, &t1011_TI, &t11_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 928, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t11_0_0_0;
static ParameterInfo t1011_m4692_ParameterInfos[] = 
{
	{"scheme", 0, 134218604, &EmptyCustomAttributesCache, &t11_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m4692_MI = 
{
	"IsPredefinedScheme", (methodPointerType)&m4692, &t1011_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t1011_m4692_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 1, false, false, 929, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1154_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m4693_MI = 
{
	"get_Parser", (methodPointerType)&m4693, &t1011_TI, &t1154_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2177, 0, 255, 0, false, false, 930, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m4694_MI = 
{
	"EnsureAbsoluteUri", (methodPointerType)&m4694, &t1011_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 931, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1011_0_0_0;
extern Il2CppType t1011_0_0_0;
static ParameterInfo t1011_m4695_ParameterInfos[] = 
{
	{"u1", 0, 134218605, &EmptyCustomAttributesCache, &t1011_0_0_0},
	{"u2", 1, 134218606, &EmptyCustomAttributesCache, &t1011_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m4695_MI = 
{
	"op_Equality", (methodPointerType)&m4695, &t1011_TI, &t108_0_0_0, RuntimeInvoker_t108_t5_t5, t1011_m4695_ParameterInfos, &EmptyCustomAttributesCache, 2198, 0, 255, 2, false, false, 932, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1011_MIs[] =
{
	&m4648_MI,
	&m4649_MI,
	&m4650_MI,
	&m4651_MI,
	&m4652_MI,
	&m4653_MI,
	&m4654_MI,
	&m4655_MI,
	&m4656_MI,
	&m4657_MI,
	&m4658_MI,
	&m4659_MI,
	&m4660_MI,
	&m4661_MI,
	&m4662_MI,
	&m4663_MI,
	&m4664_MI,
	&m4665_MI,
	&m4666_MI,
	&m4667_MI,
	&m4668_MI,
	&m4669_MI,
	&m4670_MI,
	&m4671_MI,
	&m4672_MI,
	&m4673_MI,
	&m4674_MI,
	&m4675_MI,
	&m4676_MI,
	&m4677_MI,
	&m4678_MI,
	&m4679_MI,
	&m4680_MI,
	&m4681_MI,
	&m4682_MI,
	&m4683_MI,
	&m4684_MI,
	&m4685_MI,
	&m4686_MI,
	&m4687_MI,
	&m4688_MI,
	&m4689_MI,
	&m4690_MI,
	&m4691_MI,
	&m4692_MI,
	&m4693_MI,
	&m4694_MI,
	&m4695_MI,
	NULL
};
extern TypeInfo t1156_TI;
static TypeInfo* t1011_TI__nestedTypes[2] =
{
	&t1156_TI,
	NULL
};
static MethodInfo* t1011_VT[] =
{
	&m4666_MI,
	&m465_MI,
	&m4668_MI,
	&m4675_MI,
	&m4652_MI,
	&m4679_MI,
};
static TypeInfo* t1011_ITIs[] = 
{
	&t517_TI,
};
static Il2CppInterfaceOffsetPair t1011_IOs[] = 
{
	{ &t517_TI, 4},
};
extern TypeInfo t1002_TI;
#include "t1002.h"
#include "t1002MD.h"
extern MethodInfo m3928_MI;
extern TypeInfo t1163_TI;
#include "t1163.h"
void t1011_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t1002 * tmp;
		tmp = (t1002 *)il2cpp_codegen_object_new (&t1002_TI);
		m3928(tmp, il2cpp_codegen_type_get_object(InitializedTypeInfo(&t1163_TI)), &m3928_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t112_TI;
#include "t112.h"
#include "t112MD.h"
extern MethodInfo m468_MI;
void t1011_CustomAttributesCacheGenerator_U3CU3Ef__switch$map14(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t1011_CustomAttributesCacheGenerator_U3CU3Ef__switch$map15(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t1011_CustomAttributesCacheGenerator_U3CU3Ef__switch$map16(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t475_TI;
#include "t475.h"
#include "t475MD.h"
extern MethodInfo m5079_MI;
void t1011_CustomAttributesCacheGenerator_m4650(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t475 * tmp;
		tmp = (t475 *)il2cpp_codegen_object_new (&t475_TI);
		m5079(tmp, &m5079_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t1011_CustomAttributesCacheGenerator_m4676(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t475 * tmp;
		tmp = (t475 *)il2cpp_codegen_object_new (&t475_TI);
		m5079(tmp, &m5079_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t1011_CustomAttributesCacheGenerator_m4679(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t475 * tmp;
		tmp = (t475 *)il2cpp_codegen_object_new (&t475_TI);
		m5079(tmp, &m5079_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1011__CustomAttributeCache = {
1,
NULL,
&t1011_CustomAttributesCacheGenerator
};
CustomAttributesCache t1011__CustomAttributeCache_U3CU3Ef__switch$map14 = {
1,
NULL,
&t1011_CustomAttributesCacheGenerator_U3CU3Ef__switch$map14
};
CustomAttributesCache t1011__CustomAttributeCache_U3CU3Ef__switch$map15 = {
1,
NULL,
&t1011_CustomAttributesCacheGenerator_U3CU3Ef__switch$map15
};
CustomAttributesCache t1011__CustomAttributeCache_U3CU3Ef__switch$map16 = {
1,
NULL,
&t1011_CustomAttributesCacheGenerator_U3CU3Ef__switch$map16
};
CustomAttributesCache t1011__CustomAttributeCache_m4650 = {
1,
NULL,
&t1011_CustomAttributesCacheGenerator_m4650
};
CustomAttributesCache t1011__CustomAttributeCache_m4676 = {
1,
NULL,
&t1011_CustomAttributesCacheGenerator_m4676
};
CustomAttributesCache t1011__CustomAttributeCache_m4679 = {
1,
NULL,
&t1011_CustomAttributesCacheGenerator_m4679
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType t1011_1_0_0;
struct t1011;
extern CustomAttributesCache t1011__CustomAttributeCache;
extern CustomAttributesCache t1011__CustomAttributeCache_U3CU3Ef__switch$map14;
extern CustomAttributesCache t1011__CustomAttributeCache_U3CU3Ef__switch$map15;
extern CustomAttributesCache t1011__CustomAttributeCache_U3CU3Ef__switch$map16;
extern CustomAttributesCache t1011__CustomAttributeCache_m4650;
extern CustomAttributesCache t1011__CustomAttributeCache_m4676;
extern CustomAttributesCache t1011__CustomAttributeCache_m4679;
TypeInfo t1011_TI = 
{
	&g_System_dll_Image, NULL, "Uri", "System", t1011_MIs, t1011_PIs, t1011_FIs, NULL, &t5_TI, t1011_TI__nestedTypes, NULL, &t1011_TI, t1011_ITIs, t1011_VT, &t1011__CustomAttributeCache, &t1011_TI, &t1011_0_0_0, &t1011_1_0_0, t1011_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1011), 0, -1, sizeof(t1011_SFs), 0, -1, 1056769, 0, false, false, false, false, false, false, false, false, false, true, false, false, 48, 9, 33, 0, 1, 6, 1, 1};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t829_TI;
extern TypeInfo t830_TI;
#include "t1162MD.h"
extern MethodInfo m4798_MI;
extern MethodInfo m5080_MI;
extern MethodInfo m3502_MI;


extern MethodInfo m4696_MI;
 void m4696 (t1161 * __this, MethodInfo* method){
	{
		t11* L_0 = m3845(NULL, (t11*) &_stringLiteral592, &m3845_MI);
		m4798(__this, L_0, &m4798_MI);
		return;
	}
}
 void m4697 (t1161 * __this, t11* p0, MethodInfo* method){
	{
		m4798(__this, p0, &m4798_MI);
		return;
	}
}
extern MethodInfo m4698_MI;
 void m4698 (t1161 * __this, t829 * p0, t830  p1, MethodInfo* method){
	{
		m5080(__this, p0, p1, &m5080_MI);
		return;
	}
}
extern MethodInfo m4699_MI;
 void m4699 (t1161 * __this, t829 * p0, t830  p1, MethodInfo* method){
	{
		m3502(__this, p0, p1, &m3502_MI);
		return;
	}
}
// Metadata Definition System.UriFormatException
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m4696_MI = 
{
	".ctor", (methodPointerType)&m4696, &t1161_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 934, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t11_0_0_0;
static ParameterInfo t1161_m4697_ParameterInfos[] = 
{
	{"message", 0, 134218610, &EmptyCustomAttributesCache, &t11_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m4697_MI = 
{
	".ctor", (methodPointerType)&m4697, &t1161_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t1161_m4697_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 935, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t829_0_0_0;
extern Il2CppType t830_0_0_0;
static ParameterInfo t1161_m4698_ParameterInfos[] = 
{
	{"info", 0, 134218611, &EmptyCustomAttributesCache, &t829_0_0_0},
	{"context", 1, 134218612, &EmptyCustomAttributesCache, &t830_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t830 (MethodInfo* method, void* obj, void** args);
MethodInfo m4698_MI = 
{
	".ctor", (methodPointerType)&m4698, &t1161_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t830, t1161_m4698_ParameterInfos, &EmptyCustomAttributesCache, 6276, 0, 255, 2, false, false, 936, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t829_0_0_0;
extern Il2CppType t830_0_0_0;
static ParameterInfo t1161_m4699_ParameterInfos[] = 
{
	{"info", 0, 134218613, &EmptyCustomAttributesCache, &t829_0_0_0},
	{"context", 1, 134218614, &EmptyCustomAttributesCache, &t830_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t830 (MethodInfo* method, void* obj, void** args);
MethodInfo m4699_MI = 
{
	"System.Runtime.Serialization.ISerializable.GetObjectData", (methodPointerType)&m4699, &t1161_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t830, t1161_m4699_ParameterInfos, &EmptyCustomAttributesCache, 481, 0, 4, 2, false, false, 937, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1161_MIs[] =
{
	&m4696_MI,
	&m4697_MI,
	&m4698_MI,
	&m4699_MI,
	NULL
};
extern MethodInfo m3501_MI;
extern MethodInfo m3503_MI;
extern MethodInfo m3504_MI;
extern MethodInfo m3505_MI;
extern MethodInfo m3506_MI;
static MethodInfo* t1161_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m3501_MI,
	&m4699_MI,
	&m3503_MI,
	&m584_MI,
	&m3504_MI,
	&m3505_MI,
	&m3502_MI,
	&m3506_MI,
};
static TypeInfo* t1161_ITIs[] = 
{
	&t517_TI,
};
extern TypeInfo t728_TI;
static Il2CppInterfaceOffsetPair t1161_IOs[] = 
{
	{ &t517_TI, 4},
	{ &t728_TI, 5},
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType t1161_0_0_0;
extern Il2CppType t1161_1_0_0;
extern TypeInfo t1162_TI;
struct t1161;
TypeInfo t1161_TI = 
{
	&g_System_dll_Image, NULL, "UriFormatException", "System", t1161_MIs, NULL, NULL, NULL, &t1162_TI, NULL, NULL, &t1161_TI, t1161_ITIs, t1161_VT, &EmptyCustomAttributesCache, &t1161_TI, &t1161_0_0_0, &t1161_1_0_0, t1161_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1161), 0, -1, 0, 0, -1, 1056769, 0, false, false, false, false, false, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 11, 1, 2};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1158_TI;
#include "t1158MD.h"



// Metadata Definition System.UriHostNameType
extern Il2CppType t110_0_0_1542;
FieldInfo t1158_f1_FieldInfo = 
{
	"value__", &t110_0_0_1542, &t1158_TI, offsetof(t1158, f1) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t1158_0_0_32854;
FieldInfo t1158_f2_FieldInfo = 
{
	"Unknown", &t1158_0_0_32854, &t1158_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1158_0_0_32854;
FieldInfo t1158_f3_FieldInfo = 
{
	"Basic", &t1158_0_0_32854, &t1158_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1158_0_0_32854;
FieldInfo t1158_f4_FieldInfo = 
{
	"Dns", &t1158_0_0_32854, &t1158_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1158_0_0_32854;
FieldInfo t1158_f5_FieldInfo = 
{
	"IPv4", &t1158_0_0_32854, &t1158_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1158_0_0_32854;
FieldInfo t1158_f6_FieldInfo = 
{
	"IPv6", &t1158_0_0_32854, &t1158_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t1158_FIs[] =
{
	&t1158_f1_FieldInfo,
	&t1158_f2_FieldInfo,
	&t1158_f3_FieldInfo,
	&t1158_f4_FieldInfo,
	&t1158_f5_FieldInfo,
	&t1158_f6_FieldInfo,
	NULL
};
static const int32_t t1158_f2_DefaultValueData = 0;
static Il2CppFieldDefaultValueEntry t1158_f2_DefaultValue = 
{
	&t1158_f2_FieldInfo, { (char*)&t1158_f2_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1158_f3_DefaultValueData = 1;
static Il2CppFieldDefaultValueEntry t1158_f3_DefaultValue = 
{
	&t1158_f3_FieldInfo, { (char*)&t1158_f3_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1158_f4_DefaultValueData = 2;
static Il2CppFieldDefaultValueEntry t1158_f4_DefaultValue = 
{
	&t1158_f4_FieldInfo, { (char*)&t1158_f4_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1158_f5_DefaultValueData = 3;
static Il2CppFieldDefaultValueEntry t1158_f5_DefaultValue = 
{
	&t1158_f5_FieldInfo, { (char*)&t1158_f5_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1158_f6_DefaultValueData = 4;
static Il2CppFieldDefaultValueEntry t1158_f6_DefaultValue = 
{
	&t1158_f6_FieldInfo, { (char*)&t1158_f6_DefaultValueData, &t110_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t1158_FDVs[] = 
{
	&t1158_f2_DefaultValue,
	&t1158_f3_DefaultValue,
	&t1158_f4_DefaultValue,
	&t1158_f5_DefaultValue,
	&t1158_f6_DefaultValue,
	NULL
};
static MethodInfo* t1158_MIs[] =
{
	NULL
};
static MethodInfo* t1158_VT[] =
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
static Il2CppInterfaceOffsetPair t1158_IOs[] = 
{
	{ &t120_TI, 4},
	{ &t121_TI, 5},
	{ &t122_TI, 21},
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType t1158_0_0_0;
extern Il2CppType t1158_1_0_0;
TypeInfo t1158_TI = 
{
	&g_System_dll_Image, NULL, "UriHostNameType", "System", t1158_MIs, NULL, t1158_FIs, NULL, &t18_TI, NULL, NULL, &t110_TI, NULL, t1158_VT, &EmptyCustomAttributesCache, &t110_TI, &t1158_0_0_0, &t1158_1_0_0, t1158_IOs, NULL, NULL, t1158_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1158)+ sizeof (Il2CppObject), sizeof (int32_t), sizeof(int32_t), 0, 0, -1, 257, 0, true, false, false, true, false, false, false, false, false, false, false, false, 0, 0, 6, 0, 0, 23, 0, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1160_TI;
#include "t1160MD.h"



// Metadata Definition System.UriKind
extern Il2CppType t110_0_0_1542;
FieldInfo t1160_f1_FieldInfo = 
{
	"value__", &t110_0_0_1542, &t1160_TI, offsetof(t1160, f1) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t1160_0_0_32854;
FieldInfo t1160_f2_FieldInfo = 
{
	"RelativeOrAbsolute", &t1160_0_0_32854, &t1160_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1160_0_0_32854;
FieldInfo t1160_f3_FieldInfo = 
{
	"Absolute", &t1160_0_0_32854, &t1160_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1160_0_0_32854;
FieldInfo t1160_f4_FieldInfo = 
{
	"Relative", &t1160_0_0_32854, &t1160_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t1160_FIs[] =
{
	&t1160_f1_FieldInfo,
	&t1160_f2_FieldInfo,
	&t1160_f3_FieldInfo,
	&t1160_f4_FieldInfo,
	NULL
};
static const int32_t t1160_f2_DefaultValueData = 0;
static Il2CppFieldDefaultValueEntry t1160_f2_DefaultValue = 
{
	&t1160_f2_FieldInfo, { (char*)&t1160_f2_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1160_f3_DefaultValueData = 1;
static Il2CppFieldDefaultValueEntry t1160_f3_DefaultValue = 
{
	&t1160_f3_FieldInfo, { (char*)&t1160_f3_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1160_f4_DefaultValueData = 2;
static Il2CppFieldDefaultValueEntry t1160_f4_DefaultValue = 
{
	&t1160_f4_FieldInfo, { (char*)&t1160_f4_DefaultValueData, &t110_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t1160_FDVs[] = 
{
	&t1160_f2_DefaultValue,
	&t1160_f3_DefaultValue,
	&t1160_f4_DefaultValue,
	NULL
};
static MethodInfo* t1160_MIs[] =
{
	NULL
};
static MethodInfo* t1160_VT[] =
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
static Il2CppInterfaceOffsetPair t1160_IOs[] = 
{
	{ &t120_TI, 4},
	{ &t121_TI, 5},
	{ &t122_TI, 21},
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType t1160_1_0_0;
TypeInfo t1160_TI = 
{
	&g_System_dll_Image, NULL, "UriKind", "System", t1160_MIs, NULL, t1160_FIs, NULL, &t18_TI, NULL, NULL, &t110_TI, NULL, t1160_VT, &EmptyCustomAttributesCache, &t110_TI, &t1160_0_0_0, &t1160_1_0_0, t1160_IOs, NULL, NULL, t1160_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1160)+ sizeof (Il2CppObject), sizeof (int32_t), sizeof(int32_t), 0, 0, -1, 257, 0, true, false, false, true, false, false, false, false, false, false, false, false, 0, 0, 4, 0, 0, 23, 0, 3};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t1091_TI;
#include "t1091MD.h"
#include "t1186MD.h"
extern MethodInfo m4329_MI;
extern MethodInfo m4708_MI;
extern MethodInfo m4795_MI;
extern MethodInfo m4796_MI;
extern MethodInfo m4704_MI;
extern MethodInfo m4706_MI;
extern MethodInfo m4707_MI;


 void m4700 (t1154 * __this, MethodInfo* method){
	{
		m460(__this, &m460_MI);
		return;
	}
}
extern MethodInfo m4701_MI;
 void m4701 (t5 * __this, MethodInfo* method){
	{
		t5 * L_0 = (t5 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t5_TI));
		m460(L_0, &m460_MI);
		((t1154_SFs*)InitializedTypeInfo(&t1154_TI)->static_fields)->f0 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1091_TI));
		t1091 * L_1 = (t1091 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1091_TI));
		m4329(L_1, (t11*) &_stringLiteral593, &m4329_MI);
		((t1154_SFs*)InitializedTypeInfo(&t1154_TI)->static_fields)->f4 = L_1;
		t1091 * L_2 = (t1091 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1091_TI));
		m4329(L_2, (t11*) &_stringLiteral594, &m4329_MI);
		((t1154_SFs*)InitializedTypeInfo(&t1154_TI)->static_fields)->f5 = L_2;
		return;
	}
}
 void m4702 (t1154 * __this, t1011 * p0, t1161 ** p1, MethodInfo* method){
	{
		t11* L_0 = m4659(p0, &m4659_MI);
		t11* L_1 = (__this->f2);
		IL2CPP_RUNTIME_CLASS_INIT((&t11_TI));
		bool L_2 = m2384(NULL, L_0, L_1, &m2384_MI);
		if (!L_2)
		{
			goto IL_003c;
		}
	}
	{
		t11* L_3 = (__this->f2);
		IL2CPP_RUNTIME_CLASS_INIT((&t11_TI));
		bool L_4 = m2384(NULL, L_3, (t11*) &_stringLiteral557, &m2384_MI);
		if (!L_4)
		{
			goto IL_003c;
		}
	}
	{
		t1161 * L_5 = (t1161 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1161_TI));
		m4697(L_5, (t11*) &_stringLiteral595, &m4697_MI);
		*((t5 **)(p1)) = (t5 *)L_5;
		goto IL_003f;
	}

IL_003c:
	{
		*((t5 **)(p1)) = (t5 *)NULL;
	}

IL_003f:
	{
		return;
	}
}
 void m4703 (t1154 * __this, t11* p0, int32_t p1, MethodInfo* method){
	{
		return;
	}
}
 void m4704 (t1154 * __this, t11* p0, MethodInfo* method){
	{
		__this->f2 = p0;
		return;
	}
}
 int32_t m4705 (t1154 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->f3);
		return L_0;
	}
}
 void m4706 (t1154 * __this, int32_t p0, MethodInfo* method){
	{
		__this->f3 = p0;
		return;
	}
}
 void m4707 (t5 * __this, MethodInfo* method){
	t984 * V_0 = {0};
	t5 * V_1 = {0};
	int32_t leaveInstructions[1] = {0};
	t142 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t142 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1154_TI));
		if (!(((t1154_SFs*)InitializedTypeInfo(&t1154_TI)->static_fields)->f1))
		{
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t984_TI));
		t984 * L_0 = (t984 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t984_TI));
		m5003(L_0, &m5003_MI);
		V_0 = L_0;
		t1153 * L_1 = (t1153 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1153_TI));
		m4645(L_1, &m4645_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1011_TI));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1154_TI));
		m4708(NULL, V_0, L_1, (((t1011_SFs*)InitializedTypeInfo(&t1011_TI)->static_fields)->f18), (-1), &m4708_MI);
		t1153 * L_2 = (t1153 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1153_TI));
		m4645(L_2, &m4645_MI);
		m4708(NULL, V_0, L_2, (((t1011_SFs*)InitializedTypeInfo(&t1011_TI)->static_fields)->f19), ((int32_t)21), &m4708_MI);
		t1153 * L_3 = (t1153 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1153_TI));
		m4645(L_3, &m4645_MI);
		m4708(NULL, V_0, L_3, (((t1011_SFs*)InitializedTypeInfo(&t1011_TI)->static_fields)->f20), ((int32_t)70), &m4708_MI);
		t1153 * L_4 = (t1153 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1153_TI));
		m4645(L_4, &m4645_MI);
		m4708(NULL, V_0, L_4, (((t1011_SFs*)InitializedTypeInfo(&t1011_TI)->static_fields)->f21), ((int32_t)80), &m4708_MI);
		t1153 * L_5 = (t1153 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1153_TI));
		m4645(L_5, &m4645_MI);
		m4708(NULL, V_0, L_5, (((t1011_SFs*)InitializedTypeInfo(&t1011_TI)->static_fields)->f22), ((int32_t)443), &m4708_MI);
		t1153 * L_6 = (t1153 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1153_TI));
		m4645(L_6, &m4645_MI);
		m4708(NULL, V_0, L_6, (((t1011_SFs*)InitializedTypeInfo(&t1011_TI)->static_fields)->f23), ((int32_t)25), &m4708_MI);
		t1153 * L_7 = (t1153 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1153_TI));
		m4645(L_7, &m4645_MI);
		m4708(NULL, V_0, L_7, (((t1011_SFs*)InitializedTypeInfo(&t1011_TI)->static_fields)->f26), (-1), &m4708_MI);
		t1153 * L_8 = (t1153 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1153_TI));
		m4645(L_8, &m4645_MI);
		m4708(NULL, V_0, L_8, (((t1011_SFs*)InitializedTypeInfo(&t1011_TI)->static_fields)->f27), (-1), &m4708_MI);
		t1153 * L_9 = (t1153 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1153_TI));
		m4645(L_9, &m4645_MI);
		m4708(NULL, V_0, L_9, (((t1011_SFs*)InitializedTypeInfo(&t1011_TI)->static_fields)->f24), ((int32_t)119), &m4708_MI);
		t1153 * L_10 = (t1153 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1153_TI));
		m4645(L_10, &m4645_MI);
		m4708(NULL, V_0, L_10, (((t1011_SFs*)InitializedTypeInfo(&t1011_TI)->static_fields)->f25), ((int32_t)119), &m4708_MI);
		t1153 * L_11 = (t1153 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1153_TI));
		m4645(L_11, &m4645_MI);
		m4708(NULL, V_0, L_11, (t11*) &_stringLiteral596, ((int32_t)389), &m4708_MI);
		V_1 = (((t1154_SFs*)InitializedTypeInfo(&t1154_TI)->static_fields)->f0);
		m4795(NULL, V_1, &m4795_MI);
	}

IL_00e6:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1154_TI));
			if ((((t1154_SFs*)InitializedTypeInfo(&t1154_TI)->static_fields)->f1))
			{
				goto IL_00fb;
			}
		}

IL_00f0:
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1154_TI));
			((t1154_SFs*)InitializedTypeInfo(&t1154_TI)->static_fields)->f1 = V_0;
			goto IL_00fd;
		}

IL_00fb:
		{
			V_0 = (t984 *)NULL;
		}

IL_00fd:
		{
			// IL_00fd: leave IL_0109
			leaveInstructions[0] = 0x109; // 1
			THROW_SENTINEL(IL_0109);
			// finally target depth: 1
		}
	} // end try (depth: 1)
	catch(Il2CppFinallySentinel& e)
	{
		goto IL_0102;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t142 *)e.ex;
		goto IL_0102;
	}

IL_0102:
	{ // begin finally (depth: 1)
		m4796(NULL, V_1, &m4796_MI);
		// finally node depth: 1
		switch (leaveInstructions[0])
		{
			case 0x109:
				goto IL_0109;
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

IL_0109:
	{
		return;
	}
}
 void m4708 (t5 * __this, t984 * p0, t1154 * p1, t11* p2, int32_t p3, MethodInfo* method){
	t1153 * V_0 = {0};
	{
		m4704(p1, p2, &m4704_MI);
		m4706(p1, p3, &m4706_MI);
		if (!((t1155 *)IsInst(p1, InitializedTypeInfo(&t1155_TI))))
		{
			goto IL_0026;
		}
	}
	{
		VirtActionInvoker2< t5 *, t5 * >::Invoke(&m4783_MI, p0, p2, p1);
		goto IL_0042;
	}

IL_0026:
	{
		t1153 * L_0 = (t1153 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1153_TI));
		m4645(L_0, &m4645_MI);
		V_0 = L_0;
		m4704(V_0, p2, &m4704_MI);
		m4706(V_0, p3, &m4706_MI);
		VirtActionInvoker2< t5 *, t5 * >::Invoke(&m4783_MI, p0, p2, V_0);
	}

IL_0042:
	{
		VirtActionInvoker2< t11*, int32_t >::Invoke(&m4703_MI, p1, p2, p3);
		return;
	}
}
 t1154 * m4709 (t5 * __this, t11* p0, MethodInfo* method){
	t11* V_0 = {0};
	{
		if (p0)
		{
			goto IL_0008;
		}
	}
	{
		return (t1154 *)NULL;
	}

IL_0008:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1154_TI));
		m4707(NULL, &m4707_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t771_TI));
		t771 * L_0 = m4804(NULL, &m4804_MI);
		t11* L_1 = m5071(p0, L_0, &m5071_MI);
		V_0 = L_1;
		t5 * L_2 = (t5 *)VirtFuncInvoker1< t5 *, t5 * >::Invoke(&m4782_MI, (((t1154_SFs*)InitializedTypeInfo(&t1154_TI)->static_fields)->f1), V_0);
		return ((t1154 *)Castclass(L_2, InitializedTypeInfo(&t1154_TI)));
	}
}
// Metadata Definition System.UriParser
extern Il2CppType t5_0_0_17;
FieldInfo t1154_f0_FieldInfo = 
{
	"lock_object", &t5_0_0_17, &t1154_TI, offsetof(t1154_SFs, f0), &EmptyCustomAttributesCache};
extern Il2CppType t984_0_0_17;
FieldInfo t1154_f1_FieldInfo = 
{
	"table", &t984_0_0_17, &t1154_TI, offsetof(t1154_SFs, f1), &EmptyCustomAttributesCache};
extern Il2CppType t11_0_0_3;
FieldInfo t1154_f2_FieldInfo = 
{
	"scheme_name", &t11_0_0_3, &t1154_TI, offsetof(t1154, f2), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_1;
FieldInfo t1154_f3_FieldInfo = 
{
	"default_port", &t110_0_0_1, &t1154_TI, offsetof(t1154, f3), &EmptyCustomAttributesCache};
extern Il2CppType t1091_0_0_49;
FieldInfo t1154_f4_FieldInfo = 
{
	"uri_regex", &t1091_0_0_49, &t1154_TI, offsetof(t1154_SFs, f4), &EmptyCustomAttributesCache};
extern Il2CppType t1091_0_0_49;
FieldInfo t1154_f5_FieldInfo = 
{
	"auth_regex", &t1091_0_0_49, &t1154_TI, offsetof(t1154_SFs, f5), &EmptyCustomAttributesCache};
static FieldInfo* t1154_FIs[] =
{
	&t1154_f0_FieldInfo,
	&t1154_f1_FieldInfo,
	&t1154_f2_FieldInfo,
	&t1154_f3_FieldInfo,
	&t1154_f4_FieldInfo,
	&t1154_f5_FieldInfo,
	NULL
};
static PropertyInfo t1154____SchemeName_PropertyInfo = 
{
	&t1154_TI, "SchemeName", NULL, &m4704_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1154____DefaultPort_PropertyInfo = 
{
	&t1154_TI, "DefaultPort", &m4705_MI, &m4706_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1154_PIs[] =
{
	&t1154____SchemeName_PropertyInfo,
	&t1154____DefaultPort_PropertyInfo,
	NULL
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m4700_MI = 
{
	".ctor", (methodPointerType)&m4700, &t1154_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6276, 0, 255, 0, false, false, 938, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m4701_MI = 
{
	".cctor", (methodPointerType)&m4701, &t1154_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 939, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t1011_0_0_0;
extern Il2CppType t1161_1_0_2;
static ParameterInfo t1154_m4702_ParameterInfos[] = 
{
	{"uri", 0, 134218615, &EmptyCustomAttributesCache, &t1011_0_0_0},
	{"parsingError", 1, 134218616, &EmptyCustomAttributesCache, &t1161_1_0_2},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t1226 (MethodInfo* method, void* obj, void** args);
MethodInfo m4702_MI = 
{
	"InitializeAndValidate", (methodPointerType)&m4702, &t1154_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t1226, t1154_m4702_ParameterInfos, &EmptyCustomAttributesCache, 453, 0, 4, 2, false, false, 940, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t11_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t1154_m4703_ParameterInfos[] = 
{
	{"schemeName", 0, 134218617, &EmptyCustomAttributesCache, &t11_0_0_0},
	{"defaultPort", 1, 134218618, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t1154__CustomAttributeCache_m4703;
MethodInfo m4703_MI = 
{
	"OnRegister", (methodPointerType)&m4703, &t1154_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t1154_m4703_ParameterInfos, &t1154__CustomAttributeCache_m4703, 452, 0, 5, 2, false, false, 941, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t11_0_0_0;
static ParameterInfo t1154_m4704_ParameterInfos[] = 
{
	{"value", 0, 134218619, &EmptyCustomAttributesCache, &t11_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m4704_MI = 
{
	"set_SchemeName", (methodPointerType)&m4704, &t1154_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t1154_m4704_ParameterInfos, &EmptyCustomAttributesCache, 2179, 0, 255, 1, false, false, 942, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m4705_MI = 
{
	"get_DefaultPort", (methodPointerType)&m4705, &t1154_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 2179, 0, 255, 0, false, false, 943, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t110_0_0_0;
static ParameterInfo t1154_m4706_ParameterInfos[] = 
{
	{"value", 0, 134218620, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m4706_MI = 
{
	"set_DefaultPort", (methodPointerType)&m4706, &t1154_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t1154_m4706_ParameterInfos, &EmptyCustomAttributesCache, 2179, 0, 255, 1, false, false, 944, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m4707_MI = 
{
	"CreateDefaults", (methodPointerType)&m4707, &t1154_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 145, 0, 255, 0, false, false, 945, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t984_0_0_0;
extern Il2CppType t1154_0_0_0;
extern Il2CppType t1154_0_0_0;
extern Il2CppType t11_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t1154_m4708_ParameterInfos[] = 
{
	{"table", 0, 134218621, &EmptyCustomAttributesCache, &t984_0_0_0},
	{"uriParser", 1, 134218622, &EmptyCustomAttributesCache, &t1154_0_0_0},
	{"schemeName", 2, 134218623, &EmptyCustomAttributesCache, &t11_0_0_0},
	{"defaultPort", 3, 134218624, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t5_t5_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m4708_MI = 
{
	"InternalRegister", (methodPointerType)&m4708, &t1154_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t5_t5_t110, t1154_m4708_ParameterInfos, &EmptyCustomAttributesCache, 145, 0, 255, 4, false, false, 946, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t11_0_0_0;
static ParameterInfo t1154_m4709_ParameterInfos[] = 
{
	{"schemeName", 0, 134218625, &EmptyCustomAttributesCache, &t11_0_0_0},
};
extern Il2CppType t1154_0_0_0;
extern void* RuntimeInvoker_t5_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m4709_MI = 
{
	"GetParser", (methodPointerType)&m4709, &t1154_TI, &t1154_0_0_0, RuntimeInvoker_t5_t5, t1154_m4709_ParameterInfos, &EmptyCustomAttributesCache, 147, 0, 255, 1, false, false, 947, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1154_MIs[] =
{
	&m4700_MI,
	&m4701_MI,
	&m4702_MI,
	&m4703_MI,
	&m4704_MI,
	&m4705_MI,
	&m4706_MI,
	&m4707_MI,
	&m4708_MI,
	&m4709_MI,
	NULL
};
static MethodInfo* t1154_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m4702_MI,
	&m4703_MI,
};
extern TypeInfo t978_TI;
#include "t978.h"
#include "t978MD.h"
extern MethodInfo m3847_MI;
void t1154_CustomAttributesCacheGenerator_m4703(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t978 * tmp;
		tmp = (t978 *)il2cpp_codegen_object_new (&t978_TI);
		m3847(tmp, &m3847_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1154__CustomAttributeCache_m4703 = {
1,
NULL,
&t1154_CustomAttributesCacheGenerator_m4703
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType t1154_1_0_0;
struct t1154;
extern CustomAttributesCache t1154__CustomAttributeCache_m4703;
TypeInfo t1154_TI = 
{
	&g_System_dll_Image, NULL, "UriParser", "System", t1154_MIs, t1154_PIs, t1154_FIs, NULL, &t5_TI, NULL, NULL, &t1154_TI, NULL, t1154_VT, &EmptyCustomAttributesCache, &t1154_TI, &t1154_0_0_0, &t1154_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1154), 0, -1, sizeof(t1154_SFs), 0, -1, 1048705, 0, false, false, false, false, false, false, false, false, false, true, false, false, 10, 2, 6, 0, 0, 6, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1159_TI;
#include "t1159MD.h"



// Metadata Definition System.UriPartial
extern Il2CppType t110_0_0_1542;
FieldInfo t1159_f1_FieldInfo = 
{
	"value__", &t110_0_0_1542, &t1159_TI, offsetof(t1159, f1) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t1159_0_0_32854;
FieldInfo t1159_f2_FieldInfo = 
{
	"Scheme", &t1159_0_0_32854, &t1159_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1159_0_0_32854;
FieldInfo t1159_f3_FieldInfo = 
{
	"Authority", &t1159_0_0_32854, &t1159_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1159_0_0_32854;
FieldInfo t1159_f4_FieldInfo = 
{
	"Path", &t1159_0_0_32854, &t1159_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t1159_0_0_32854;
FieldInfo t1159_f5_FieldInfo = 
{
	"Query", &t1159_0_0_32854, &t1159_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t1159_FIs[] =
{
	&t1159_f1_FieldInfo,
	&t1159_f2_FieldInfo,
	&t1159_f3_FieldInfo,
	&t1159_f4_FieldInfo,
	&t1159_f5_FieldInfo,
	NULL
};
static const int32_t t1159_f2_DefaultValueData = 0;
static Il2CppFieldDefaultValueEntry t1159_f2_DefaultValue = 
{
	&t1159_f2_FieldInfo, { (char*)&t1159_f2_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1159_f3_DefaultValueData = 1;
static Il2CppFieldDefaultValueEntry t1159_f3_DefaultValue = 
{
	&t1159_f3_FieldInfo, { (char*)&t1159_f3_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1159_f4_DefaultValueData = 2;
static Il2CppFieldDefaultValueEntry t1159_f4_DefaultValue = 
{
	&t1159_f4_FieldInfo, { (char*)&t1159_f4_DefaultValueData, &t110_0_0_0 }};
static const int32_t t1159_f5_DefaultValueData = 3;
static Il2CppFieldDefaultValueEntry t1159_f5_DefaultValue = 
{
	&t1159_f5_FieldInfo, { (char*)&t1159_f5_DefaultValueData, &t110_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t1159_FDVs[] = 
{
	&t1159_f2_DefaultValue,
	&t1159_f3_DefaultValue,
	&t1159_f4_DefaultValue,
	&t1159_f5_DefaultValue,
	NULL
};
static MethodInfo* t1159_MIs[] =
{
	NULL
};
static MethodInfo* t1159_VT[] =
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
static Il2CppInterfaceOffsetPair t1159_IOs[] = 
{
	{ &t120_TI, 4},
	{ &t121_TI, 5},
	{ &t122_TI, 21},
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType t1159_1_0_0;
TypeInfo t1159_TI = 
{
	&g_System_dll_Image, NULL, "UriPartial", "System", t1159_MIs, NULL, t1159_FIs, NULL, &t18_TI, NULL, NULL, &t110_TI, NULL, t1159_VT, &EmptyCustomAttributesCache, &t110_TI, &t1159_0_0_0, &t1159_1_0_0, t1159_IOs, NULL, NULL, t1159_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1159)+ sizeof (Il2CppObject), sizeof (int32_t), sizeof(int32_t), 0, 0, -1, 257, 0, true, false, false, true, false, false, false, false, false, false, false, false, 0, 0, 5, 0, 0, 23, 0, 3};
#ifndef _MSC_VER
#else
#endif
#include "t1163MD.h"



// Metadata Definition System.UriTypeConverter
static MethodInfo* t1163_MIs[] =
{
	NULL
};
static MethodInfo* t1163_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType t1163_0_0_0;
extern Il2CppType t1163_1_0_0;
extern TypeInfo t1001_TI;
struct t1163;
TypeInfo t1163_TI = 
{
	&g_System_dll_Image, NULL, "UriTypeConverter", "System", t1163_MIs, NULL, NULL, NULL, &t1001_TI, NULL, NULL, &t1163_TI, NULL, t1163_VT, &EmptyCustomAttributesCache, &t1163_TI, &t1163_0_0_0, &t1163_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1163), 0, -1, 0, 0, -1, 1048577, 0, false, false, false, false, false, false, false, false, false, false, false, false, 0, 0, 0, 0, 0, 4, 0, 0};
#include "t1018.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1018_TI;
#include "t1018MD.h"

#include "t1008.h"
#include "t1019.h"
#include "t1004.h"


extern MethodInfo m4710_MI;
 void m4710 (t1018 * __this, t5 * p0, t124 p1, MethodInfo* method){
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m4711_MI;
 bool m4711 (t1018 * __this, t5 * p0, t1008 * p1, t1019 * p2, int32_t p3, MethodInfo* method){
	if(__this->f9 != NULL)
	{
		m4711((t1018 *)__this->f9,p0, p1, p2, p3, method);
	}
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->f3.f0));
	if (__this->f2 != NULL && ___methodIsStatic)
	{
		typedef bool (*FunctionPointerType) (t5 *, t5 * __this, t5 * p0, t1008 * p1, t1019 * p2, int32_t p3, MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(NULL,__this->f2,p0, p1, p2, p3,(MethodInfo*)(__this->f3.f0));
	}
	if (__this->f2 != NULL || ___methodIsStatic)
	{
		typedef bool (*FunctionPointerType) (t5 * __this, t5 * p0, t1008 * p1, t1019 * p2, int32_t p3, MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(__this->f2,p0, p1, p2, p3,(MethodInfo*)(__this->f3.f0));
	}
	else
	{
		typedef bool (*FunctionPointerType) (t5 * __this, t1008 * p1, t1019 * p2, int32_t p3, MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(p0, p1, p2, p3,(MethodInfo*)(__this->f3.f0));
	}
}
bool pinvoke_delegate_wrapper_t1018(Il2CppObject* delegate, t5 * p0, t1008 * p1, t1019 * p2, int32_t p3)
{
	typedef int32_t (STDCALL *native_function_ptr_type)(t5 *, t1008 *, t1019 *, int32_t);
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Marshaling of parameter 'p0' to native representation
	t5 * _p0_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Object'."));

	// Marshaling of parameter 'p1' to native representation
	t1008 * _p1_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Security.Cryptography.X509Certificates.X509Certificate'."));

	// Marshaling of parameter 'p2' to native representation
	t1019 * _p2_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Security.Cryptography.X509Certificates.X509Chain'."));

	// Marshaling of parameter 'p3' to native representation

	// Native function invocation and marshaling of return value back from native representation
	int32_t _return_value = _il2cpp_pinvoke_func(_p0_marshaled, _p1_marshaled, _p2_marshaled, p3);

	// Marshaling cleanup of parameter 'p0' native representation

	// Marshaling cleanup of parameter 'p1' native representation

	// Marshaling cleanup of parameter 'p2' native representation

	// Marshaling cleanup of parameter 'p3' native representation

	return _return_value;
}
extern MethodInfo m4712_MI;
 t5 * m4712 (t1018 * __this, t5 * p0, t1008 * p1, t1019 * p2, int32_t p3, t222 * p4, t5 * p5, MethodInfo* method){
	void *__d_args[5] = {0};
	__d_args[0] = p0;
	__d_args[1] = p1;
	__d_args[2] = p2;
	__d_args[3] = Box(InitializedTypeInfo(&t1004_TI), &p3);
	return (t5 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p4, (Il2CppObject*)p5);
}
extern MethodInfo m4713_MI;
 bool m4713 (t1018 * __this, t5 * p0, MethodInfo* method){
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
	return *(bool*)UnBox ((Il2CppCodeGenObject*)__result);
}
// Metadata Definition System.Net.Security.RemoteCertificateValidationCallback
extern Il2CppType t5_0_0_0;
extern Il2CppType t124_0_0_0;
static ParameterInfo t1018_m4710_ParameterInfos[] = 
{
	{"object", 0, 134218626, &EmptyCustomAttributesCache, &t5_0_0_0},
	{"method", 1, 134218627, &EmptyCustomAttributesCache, &t124_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t124 (MethodInfo* method, void* obj, void** args);
MethodInfo m4710_MI = 
{
	".ctor", (methodPointerType)&m4710, &t1018_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t124, t1018_m4710_ParameterInfos, &EmptyCustomAttributesCache, 6278, 3, 255, 2, false, false, 948, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t5_0_0_0;
extern Il2CppType t1008_0_0_0;
extern Il2CppType t1008_0_0_0;
extern Il2CppType t1019_0_0_0;
extern Il2CppType t1019_0_0_0;
extern Il2CppType t1004_0_0_0;
extern Il2CppType t1004_0_0_0;
static ParameterInfo t1018_m4711_ParameterInfos[] = 
{
	{"sender", 0, 134218628, &EmptyCustomAttributesCache, &t5_0_0_0},
	{"certificate", 1, 134218629, &EmptyCustomAttributesCache, &t1008_0_0_0},
	{"chain", 2, 134218630, &EmptyCustomAttributesCache, &t1019_0_0_0},
	{"sslPolicyErrors", 3, 134218631, &EmptyCustomAttributesCache, &t1004_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5_t5_t5_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m4711_MI = 
{
	"Invoke", (methodPointerType)&m4711, &t1018_TI, &t108_0_0_0, RuntimeInvoker_t108_t5_t5_t5_t110, t1018_m4711_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 10, 4, false, false, 949, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t5_0_0_0;
extern Il2CppType t1008_0_0_0;
extern Il2CppType t1019_0_0_0;
extern Il2CppType t1004_0_0_0;
extern Il2CppType t222_0_0_0;
extern Il2CppType t5_0_0_0;
static ParameterInfo t1018_m4712_ParameterInfos[] = 
{
	{"sender", 0, 134218632, &EmptyCustomAttributesCache, &t5_0_0_0},
	{"certificate", 1, 134218633, &EmptyCustomAttributesCache, &t1008_0_0_0},
	{"chain", 2, 134218634, &EmptyCustomAttributesCache, &t1019_0_0_0},
	{"sslPolicyErrors", 3, 134218635, &EmptyCustomAttributesCache, &t1004_0_0_0},
	{"callback", 4, 134218636, &EmptyCustomAttributesCache, &t222_0_0_0},
	{"object", 5, 134218637, &EmptyCustomAttributesCache, &t5_0_0_0},
};
extern Il2CppType t221_0_0_0;
extern void* RuntimeInvoker_t5_t5_t5_t5_t110_t5_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m4712_MI = 
{
	"BeginInvoke", (methodPointerType)&m4712, &t1018_TI, &t221_0_0_0, RuntimeInvoker_t5_t5_t5_t5_t110_t5_t5, t1018_m4712_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 11, 6, false, false, 950, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t221_0_0_0;
static ParameterInfo t1018_m4713_ParameterInfos[] = 
{
	{"result", 0, 134218638, &EmptyCustomAttributesCache, &t221_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m4713_MI = 
{
	"EndInvoke", (methodPointerType)&m4713, &t1018_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t1018_m4713_ParameterInfos, &EmptyCustomAttributesCache, 454, 3, 12, 1, false, false, 951, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1018_MIs[] =
{
	&m4710_MI,
	&m4711_MI,
	&m4712_MI,
	&m4713_MI,
	NULL
};
static MethodInfo* t1018_VT[] =
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
	&m4711_MI,
	&m4712_MI,
	&m4713_MI,
};
static Il2CppInterfaceOffsetPair t1018_IOs[] = 
{
	{ &t516_TI, 4},
	{ &t517_TI, 4},
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType t1018_0_0_0;
extern Il2CppType t1018_1_0_0;
struct t1018;
TypeInfo t1018_TI = 
{
	&g_System_dll_Image, NULL, "RemoteCertificateValidationCallback", "System.Net.Security", t1018_MIs, NULL, NULL, NULL, &t353_TI, NULL, NULL, &t1018_TI, NULL, t1018_VT, &EmptyCustomAttributesCache, &t1018_TI, &t1018_0_0_0, &t1018_1_0_0, t1018_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)pinvoke_delegate_wrapper_t1018, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1018), 0, sizeof(methodPointerType), 0, 0, -1, 257, 0, false, false, false, false, false, false, false, false, false, false, false, false, 4, 0, 0, 0, 0, 13, 0, 2};
#include "t1164.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1164_TI;
#include "t1164MD.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$128
void t1164_marshal(const t1164& unmarshaled, t1164_marshaled& marshaled)
{
}
void t1164_marshal_back(const t1164_marshaled& marshaled, t1164& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$128
void t1164_marshal_cleanup(t1164_marshaled& marshaled)
{
}
// Metadata Definition <PrivateImplementationDetails>/$ArrayType$128
static MethodInfo* t1164_MIs[] =
{
	NULL
};
static MethodInfo* t1164_VT[] =
{
	&m2042_MI,
	&m465_MI,
	&m2043_MI,
	&m2148_MI,
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType t1164_0_0_0;
extern Il2CppType t1164_1_0_0;
extern TypeInfo t1166_TI;
TypeInfo t1164_TI = 
{
	&g_System_dll_Image, NULL, "$ArrayType$128", "", t1164_MIs, NULL, NULL, NULL, &t267_TI, NULL, &t1166_TI, &t1164_TI, NULL, t1164_VT, &EmptyCustomAttributesCache, &t1164_TI, &t1164_0_0_0, &t1164_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)t1164_marshal, (methodPointerType)t1164_marshal_back, (methodPointerType)t1164_marshal_cleanup, sizeof (t1164)+ sizeof (Il2CppObject), 0, sizeof(t1164_marshaled), 0, 0, -1, 275, 0, true, false, false, false, false, false, false, false, false, false, false, false, 0, 0, 0, 0, 0, 4, 0, 0};
#include "t1165.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1165_TI;
#include "t1165MD.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$12
void t1165_marshal(const t1165& unmarshaled, t1165_marshaled& marshaled)
{
}
void t1165_marshal_back(const t1165_marshaled& marshaled, t1165& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$12
void t1165_marshal_cleanup(t1165_marshaled& marshaled)
{
}
// Metadata Definition <PrivateImplementationDetails>/$ArrayType$12
static MethodInfo* t1165_MIs[] =
{
	NULL
};
static MethodInfo* t1165_VT[] =
{
	&m2042_MI,
	&m465_MI,
	&m2043_MI,
	&m2148_MI,
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType t1165_0_0_0;
extern Il2CppType t1165_1_0_0;
TypeInfo t1165_TI = 
{
	&g_System_dll_Image, NULL, "$ArrayType$12", "", t1165_MIs, NULL, NULL, NULL, &t267_TI, NULL, &t1166_TI, &t1165_TI, NULL, t1165_VT, &EmptyCustomAttributesCache, &t1165_TI, &t1165_0_0_0, &t1165_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)t1165_marshal, (methodPointerType)t1165_marshal_back, (methodPointerType)t1165_marshal_cleanup, sizeof (t1165)+ sizeof (Il2CppObject), 0, sizeof(t1165_marshaled), 0, 0, -1, 275, 0, true, false, false, false, false, false, false, false, false, false, false, false, 0, 0, 0, 0, 0, 4, 0, 0};
#include "t1166.h"
#ifndef _MSC_VER
#else
#endif
#include "t1166MD.h"



// Metadata Definition <PrivateImplementationDetails>
extern Il2CppType t1164_0_0_275;
FieldInfo t1166_f0_FieldInfo = 
{
	"$$field-2", &t1164_0_0_275, &t1166_TI, offsetof(t1166_SFs, f0), &EmptyCustomAttributesCache};
extern Il2CppType t1165_0_0_275;
FieldInfo t1166_f1_FieldInfo = 
{
	"$$field-3", &t1165_0_0_275, &t1166_TI, offsetof(t1166_SFs, f1), &EmptyCustomAttributesCache};
extern Il2CppType t1165_0_0_275;
FieldInfo t1166_f2_FieldInfo = 
{
	"$$field-4", &t1165_0_0_275, &t1166_TI, offsetof(t1166_SFs, f2), &EmptyCustomAttributesCache};
static FieldInfo* t1166_FIs[] =
{
	&t1166_f0_FieldInfo,
	&t1166_f1_FieldInfo,
	&t1166_f2_FieldInfo,
	NULL
};
static const uint8_t t1166_f0_DefaultValueData[] = { 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1, 0x0, 0x1, 0x1, 0x1, 0x1, 0x0, 0x0, 0x0, 0x1, 0x1, 0x0, 0x1, 0x1, 0x0, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x0, 0x0, 0x0, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x0, 0x1, 0x0, 0x0, 0x0 };
static Il2CppFieldDefaultValueEntry t1166_f0_DefaultValue = 
{
	&t1166_f0_FieldInfo, { (char*)t1166_f0_DefaultValueData, &t1164_0_0_0 }};
static const uint8_t t1166_f1_DefaultValueData[] = { 0x2A, 0x86, 0x48, 0x86, 0xF7, 0xD, 0x1, 0x9, 0x1, 0x0, 0x0, 0x0 };
static Il2CppFieldDefaultValueEntry t1166_f1_DefaultValue = 
{
	&t1166_f1_FieldInfo, { (char*)t1166_f1_DefaultValueData, &t1165_0_0_0 }};
static const uint8_t t1166_f2_DefaultValueData[] = { 0x2A, 0x86, 0x48, 0x86, 0xF7, 0xD, 0x1, 0x7, 0x2, 0x0, 0x0, 0x0 };
static Il2CppFieldDefaultValueEntry t1166_f2_DefaultValue = 
{
	&t1166_f2_FieldInfo, { (char*)t1166_f2_DefaultValueData, &t1165_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t1166_FDVs[] = 
{
	&t1166_f0_DefaultValue,
	&t1166_f1_DefaultValue,
	&t1166_f2_DefaultValue,
	NULL
};
static MethodInfo* t1166_MIs[] =
{
	NULL
};
extern TypeInfo t1164_TI;
extern TypeInfo t1165_TI;
static TypeInfo* t1166_TI__nestedTypes[3] =
{
	&t1164_TI,
	&t1165_TI,
	NULL
};
static MethodInfo* t1166_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
};
void t1166_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1166__CustomAttributeCache = {
1,
NULL,
&t1166_CustomAttributesCacheGenerator
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType t1166_0_0_0;
extern Il2CppType t1166_1_0_0;
struct t1166;
extern CustomAttributesCache t1166__CustomAttributeCache;
TypeInfo t1166_TI = 
{
	&g_System_dll_Image, NULL, "<PrivateImplementationDetails>", "", t1166_MIs, NULL, t1166_FIs, NULL, &t5_TI, t1166_TI__nestedTypes, NULL, &t1166_TI, NULL, t1166_VT, &t1166__CustomAttributeCache, &t1166_TI, &t1166_0_0_0, &t1166_1_0_0, NULL, NULL, NULL, t1166_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1166), 0, -1, sizeof(t1166_SFs), 0, -1, 0, 0, false, false, false, false, false, false, false, false, false, false, false, false, 0, 0, 3, 0, 2, 4, 0, 0};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
