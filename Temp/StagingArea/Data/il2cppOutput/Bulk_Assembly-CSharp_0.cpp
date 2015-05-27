#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
#include "t0.h"
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
extern TypeInfo t0_TI;
#include "t0MD.h"


#include "t107.h"

// Metadata Definition <Module>
static MethodInfo* t0_MIs[] =
{
	NULL
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType t0_0_0_0;
extern Il2CppType t0_1_0_0;
struct t0;
TypeInfo t0_TI = 
{
	&g_AssemblyU2DCSharp_dll_Image, NULL, "<Module>", "", t0_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t0_TI, NULL, NULL, &EmptyCustomAttributesCache, &t0_TI, &t0_0_0_0, &t0_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t0), 0, -1, 0, 0, -1, 0, 0, false, false, false, false, false, false, false, false, false, false, false, false, 0, 0, 0, 0, 0, 0, 0, 0};
#include "t1.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1_TI;
#include "t1MD.h"

#include "t108.h"
#include "t109.h"
#include "t2.h"
#include "t3.h"
#include "t4.h"
#include "t6.h"
#include "t66.h"
#include "t110.h"
#include "t7.h"
#include "t11.h"
#include "t5.h"
extern TypeInfo t108_TI;
extern TypeInfo t66_TI;
extern TypeInfo t110_TI;
extern TypeInfo t4_TI;
extern TypeInfo t39_TI;
extern TypeInfo t11_TI;
extern TypeInfo t7_TI;
extern TypeInfo t109_TI;
#include "t5MD.h"
#include "t2MD.h"
#include "t6MD.h"
#include "t66MD.h"
#include "t3MD.h"
#include "t39MD.h"
#include "t11MD.h"
#include "t7MD.h"
extern MethodInfo m460_MI;
extern MethodInfo m5_MI;
extern MethodInfo m7_MI;
extern MethodInfo m6_MI;
extern MethodInfo m12_MI;
extern MethodInfo m4_MI;
extern MethodInfo m224_MI;
extern MethodInfo m461_MI;
extern MethodInfo m404_MI;
extern MethodInfo m226_MI;
extern MethodInfo m406_MI;
extern MethodInfo m228_MI;
extern MethodInfo m407_MI;
extern MethodInfo m230_MI;
extern MethodInfo m405_MI;
extern MethodInfo m13_MI;
extern MethodInfo m91_MI;
extern MethodInfo m462_MI;
extern MethodInfo m463_MI;


extern MethodInfo m0_MI;
 void m0 (t1 * __this, t2 * p0, t3 * p1, bool p2, bool p3, t4 * p4, MethodInfo* method){
	{
		m460(__this, &m460_MI);
		__this->f2 = p4;
		__this->f0 = p0;
		__this->f1 = p1;
		m5(__this, p2, &m5_MI);
		m7(__this, p3, &m7_MI);
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(&m6_MI, __this);
		if (L_0)
		{
			goto IL_0041;
		}
	}
	{
		t2 * L_1 = (__this->f0);
		m12(L_1, &m12_MI);
	}

IL_0041:
	{
		return;
	}
}
extern MethodInfo m1_MI;
 void m1 (t1 * __this, t6 * p0, MethodInfo* method){
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(&m4_MI, __this);
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}

IL_000c:
	{
		t66 * L_1 = m224(p0, &m224_MI);
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m461_MI, L_1);
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_0028;
		}
	}
	{
		t3 * L_3 = (__this->f1);
		m404(L_3, &m404_MI);
	}

IL_0028:
	{
		bool L_4 = m226(p0, &m226_MI);
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		t3 * L_5 = (__this->f1);
		m406(L_5, &m406_MI);
	}

IL_003e:
	{
		bool L_6 = m228(p0, &m228_MI);
		if (!L_6)
		{
			goto IL_0054;
		}
	}
	{
		t3 * L_7 = (__this->f1);
		m407(L_7, &m407_MI);
	}

IL_0054:
	{
		bool L_8 = m230(p0, &m230_MI);
		if (!L_8)
		{
			goto IL_006a;
		}
	}
	{
		t3 * L_9 = (__this->f1);
		m405(L_9, &m405_MI);
	}

IL_006a:
	{
		return;
	}
}
extern MethodInfo m2_MI;
 void m2 (t1 * __this, MethodInfo* method){
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(&m6_MI, __this);
		m7(__this, ((((int32_t)L_0) == ((int32_t)0))? 1 : 0), &m7_MI);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(&m6_MI, __this);
		if (!L_1)
		{
			goto IL_002a;
		}
	}
	{
		t2 * L_2 = (__this->f0);
		m13(L_2, &m13_MI);
		goto IL_0035;
	}

IL_002a:
	{
		t2 * L_3 = (__this->f0);
		m12(L_3, &m12_MI);
	}

IL_0035:
	{
		return;
	}
}
extern MethodInfo m3_MI;
 void m3 (t1 * __this, MethodInfo* method){
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(&m4_MI, __this);
		m5(__this, ((((int32_t)L_0) == ((int32_t)0))? 1 : 0), &m5_MI);
		return;
	}
}
 bool m4 (t1 * __this, MethodInfo* method){
	{
		bool L_0 = (__this->f3);
		return L_0;
	}
}
 void m5 (t1 * __this, bool p0, MethodInfo* method){
	{
		__this->f3 = p0;
		return;
	}
}
 bool m6 (t1 * __this, MethodInfo* method){
	{
		bool L_0 = (__this->f4);
		return L_0;
	}
}
 void m7 (t1 * __this, bool p0, MethodInfo* method){
	{
		__this->f4 = p0;
		return;
	}
}
extern MethodInfo m8_MI;
 void m8 (t1 * __this, t7 * p0, MethodInfo* method){
	t11* V_0 = {0};
	{
		t4 * L_0 = (__this->f2);
		t11* L_1 = (L_0->f17);
		bool L_2 = (bool)VirtFuncInvoker0< bool >::Invoke(&m6_MI, __this);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t39_TI));
		t11* L_3 = m91(NULL, ((((int32_t)L_2) == ((int32_t)0))? 1 : 0), &m91_MI);
		IL2CPP_RUNTIME_CLASS_INIT((&t11_TI));
		t11* L_4 = m462(NULL, L_1, L_3, &m462_MI);
		V_0 = L_4;
		VirtActionInvoker1< t11* >::Invoke(&m463_MI, p0, V_0);
		return;
	}
}
extern MethodInfo m9_MI;
 void m9 (t1 * __this, t7 * p0, MethodInfo* method){
	t11* V_0 = {0};
	{
		t4 * L_0 = (__this->f2);
		t11* L_1 = (L_0->f18);
		bool L_2 = (bool)VirtFuncInvoker0< bool >::Invoke(&m4_MI, __this);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t39_TI));
		t11* L_3 = m91(NULL, ((((int32_t)L_2) == ((int32_t)0))? 1 : 0), &m91_MI);
		IL2CPP_RUNTIME_CLASS_INIT((&t11_TI));
		t11* L_4 = m462(NULL, L_1, L_3, &m462_MI);
		V_0 = L_4;
		VirtActionInvoker1< t11* >::Invoke(&m463_MI, p0, V_0);
		return;
	}
}
// Metadata Definition AudioController
extern Il2CppType t2_0_0_1;
FieldInfo t1_f0_FieldInfo = 
{
	"backgroundMusic", &t2_0_0_1, &t1_TI, offsetof(t1, f0), &EmptyCustomAttributesCache};
extern Il2CppType t3_0_0_1;
FieldInfo t1_f1_FieldInfo = 
{
	"soundEffects", &t3_0_0_1, &t1_TI, offsetof(t1, f1), &EmptyCustomAttributesCache};
extern Il2CppType t4_0_0_1;
FieldInfo t1_f2_FieldInfo = 
{
	"configurableSettings", &t4_0_0_1, &t1_TI, offsetof(t1, f2), &EmptyCustomAttributesCache};
extern Il2CppType t108_0_0_1;
extern CustomAttributesCache t1__CustomAttributeCache_U3CSoundEffectsMutedU3Ek__BackingField;
FieldInfo t1_f3_FieldInfo = 
{
	"<SoundEffectsMuted>k__BackingField", &t108_0_0_1, &t1_TI, offsetof(t1, f3), &t1__CustomAttributeCache_U3CSoundEffectsMutedU3Ek__BackingField};
extern Il2CppType t108_0_0_1;
extern CustomAttributesCache t1__CustomAttributeCache_U3CBackgroundMusicMutedU3Ek__BackingField;
FieldInfo t1_f4_FieldInfo = 
{
	"<BackgroundMusicMuted>k__BackingField", &t108_0_0_1, &t1_TI, offsetof(t1, f4), &t1__CustomAttributeCache_U3CBackgroundMusicMutedU3Ek__BackingField};
static FieldInfo* t1_FIs[] =
{
	&t1_f0_FieldInfo,
	&t1_f1_FieldInfo,
	&t1_f2_FieldInfo,
	&t1_f3_FieldInfo,
	&t1_f4_FieldInfo,
	NULL
};
static PropertyInfo t1____SoundEffectsMuted_PropertyInfo = 
{
	&t1_TI, "SoundEffectsMuted", &m4_MI, &m5_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo t1____BackgroundMusicMuted_PropertyInfo = 
{
	&t1_TI, "BackgroundMusicMuted", &m6_MI, &m7_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t1_PIs[] =
{
	&t1____SoundEffectsMuted_PropertyInfo,
	&t1____BackgroundMusicMuted_PropertyInfo,
	NULL
};
extern Il2CppType t2_0_0_0;
extern Il2CppType t2_0_0_0;
extern Il2CppType t3_0_0_0;
extern Il2CppType t3_0_0_0;
extern Il2CppType t108_0_0_0;
extern Il2CppType t108_0_0_0;
extern Il2CppType t108_0_0_0;
extern Il2CppType t4_0_0_0;
extern Il2CppType t4_0_0_0;
static ParameterInfo t1_m0_ParameterInfos[] = 
{
	{"background", 0, 134217729, &EmptyCustomAttributesCache, &t2_0_0_0},
	{"sound", 1, 134217730, &EmptyCustomAttributesCache, &t3_0_0_0},
	{"soundEffectsMuted", 2, 134217731, &EmptyCustomAttributesCache, &t108_0_0_0},
	{"backgroundMusicMuted", 3, 134217732, &EmptyCustomAttributesCache, &t108_0_0_0},
	{"configSettings", 4, 134217733, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t5_t111_t111_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m0_MI = 
{
	".ctor", (methodPointerType)&m0, &t1_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t5_t111_t111_t5, t1_m0_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 5, false, false, 1, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t6_0_0_0;
extern Il2CppType t6_0_0_0;
static ParameterInfo t1_m1_ParameterInfos[] = 
{
	{"logicUpdate", 0, 134217734, &EmptyCustomAttributesCache, &t6_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m1_MI = 
{
	"PlaySounds", (methodPointerType)&m1, &t1_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t1_m1_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 4, 1, false, false, 2, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m2_MI = 
{
	"ToggleBackgroundMusic", (methodPointerType)&m2, &t1_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 5, 0, false, false, 3, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m3_MI = 
{
	"ToggleSoundEffects", (methodPointerType)&m3, &t1_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 486, 0, 6, 0, false, false, 4, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t1__CustomAttributeCache_m4;
MethodInfo m4_MI = 
{
	"get_SoundEffectsMuted", (methodPointerType)&m4, &t1_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &t1__CustomAttributeCache_m4, 2534, 0, 7, 0, false, false, 5, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t108_0_0_0;
static ParameterInfo t1_m5_ParameterInfos[] = 
{
	{"value", 0, 134217735, &EmptyCustomAttributesCache, &t108_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t111 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t1__CustomAttributeCache_m5;
MethodInfo m5_MI = 
{
	"set_SoundEffectsMuted", (methodPointerType)&m5, &t1_TI, &t109_0_0_0, RuntimeInvoker_t109_t111, t1_m5_ParameterInfos, &t1__CustomAttributeCache_m5, 2177, 0, 255, 1, false, false, 6, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t1__CustomAttributeCache_m6;
MethodInfo m6_MI = 
{
	"get_BackgroundMusicMuted", (methodPointerType)&m6, &t1_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &t1__CustomAttributeCache_m6, 2534, 0, 8, 0, false, false, 7, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t108_0_0_0;
static ParameterInfo t1_m7_ParameterInfos[] = 
{
	{"value", 0, 134217736, &EmptyCustomAttributesCache, &t108_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t111 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t1__CustomAttributeCache_m7;
MethodInfo m7_MI = 
{
	"set_BackgroundMusicMuted", (methodPointerType)&m7, &t1_TI, &t109_0_0_0, RuntimeInvoker_t109_t111, t1_m7_ParameterInfos, &t1__CustomAttributeCache_m7, 2177, 0, 255, 1, false, false, 8, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t7_0_0_0;
extern Il2CppType t7_0_0_0;
static ParameterInfo t1_m8_ParameterInfos[] = 
{
	{"addMessage", 0, 134217737, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m8_MI = 
{
	"AddBackgroundMusicStateMessage", (methodPointerType)&m8, &t1_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t1_m8_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 9, 1, false, false, 9, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t7_0_0_0;
static ParameterInfo t1_m9_ParameterInfos[] = 
{
	{"addMessage", 0, 134217738, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m9_MI = 
{
	"AddSoundEffectsStateMessage", (methodPointerType)&m9, &t1_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t1_m9_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 10, 1, false, false, 10, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t1_MIs[] =
{
	&m0_MI,
	&m1_MI,
	&m2_MI,
	&m3_MI,
	&m4_MI,
	&m5_MI,
	&m6_MI,
	&m7_MI,
	&m8_MI,
	&m9_MI,
	NULL
};
extern MethodInfo m464_MI;
extern MethodInfo m465_MI;
extern MethodInfo m466_MI;
extern MethodInfo m467_MI;
static MethodInfo* t1_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m1_MI,
	&m2_MI,
	&m3_MI,
	&m4_MI,
	&m6_MI,
	&m8_MI,
	&m9_MI,
};
extern TypeInfo t80_TI;
static TypeInfo* t1_ITIs[] = 
{
	&t80_TI,
};
static Il2CppInterfaceOffsetPair t1_IOs[] = 
{
	{ &t80_TI, 4},
};
extern TypeInfo t112_TI;
#include "t112.h"
#include "t112MD.h"
extern MethodInfo m468_MI;
void t1_CustomAttributesCacheGenerator_U3CSoundEffectsMutedU3Ek__BackingField(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t1_CustomAttributesCacheGenerator_U3CBackgroundMusicMutedU3Ek__BackingField(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t1_CustomAttributesCacheGenerator_m4(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t1_CustomAttributesCacheGenerator_m5(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t1_CustomAttributesCacheGenerator_m6(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t1_CustomAttributesCacheGenerator_m7(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t1__CustomAttributeCache_U3CSoundEffectsMutedU3Ek__BackingField = {
1,
NULL,
&t1_CustomAttributesCacheGenerator_U3CSoundEffectsMutedU3Ek__BackingField
};
CustomAttributesCache t1__CustomAttributeCache_U3CBackgroundMusicMutedU3Ek__BackingField = {
1,
NULL,
&t1_CustomAttributesCacheGenerator_U3CBackgroundMusicMutedU3Ek__BackingField
};
CustomAttributesCache t1__CustomAttributeCache_m4 = {
1,
NULL,
&t1_CustomAttributesCacheGenerator_m4
};
CustomAttributesCache t1__CustomAttributeCache_m5 = {
1,
NULL,
&t1_CustomAttributesCacheGenerator_m5
};
CustomAttributesCache t1__CustomAttributeCache_m6 = {
1,
NULL,
&t1_CustomAttributesCacheGenerator_m6
};
CustomAttributesCache t1__CustomAttributeCache_m7 = {
1,
NULL,
&t1_CustomAttributesCacheGenerator_m7
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType t1_0_0_0;
extern Il2CppType t1_1_0_0;
extern TypeInfo t5_TI;
struct t1;
extern CustomAttributesCache t1__CustomAttributeCache_U3CSoundEffectsMutedU3Ek__BackingField;
extern CustomAttributesCache t1__CustomAttributeCache_U3CBackgroundMusicMutedU3Ek__BackingField;
extern CustomAttributesCache t1__CustomAttributeCache_m4;
extern CustomAttributesCache t1__CustomAttributeCache_m5;
extern CustomAttributesCache t1__CustomAttributeCache_m6;
extern CustomAttributesCache t1__CustomAttributeCache_m7;
TypeInfo t1_TI = 
{
	&g_AssemblyU2DCSharp_dll_Image, NULL, "AudioController", "", t1_MIs, t1_PIs, t1_FIs, NULL, &t5_TI, NULL, NULL, &t1_TI, t1_ITIs, t1_VT, &EmptyCustomAttributesCache, &t1_TI, &t1_0_0_0, &t1_1_0_0, t1_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t1), 0, -1, 0, 0, -1, 1048577, 0, false, false, false, false, false, false, false, false, false, false, false, false, 10, 2, 5, 0, 0, 11, 1, 1};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2_TI;

#include "t9.h"
#include "t8.h"
#include "t10MD.h"
#include "t113MD.h"
#include "t9MD.h"
extern MethodInfo m469_MI;
extern MethodInfo m470_MI;
extern MethodInfo m471_MI;
extern MethodInfo m472_MI;
extern MethodInfo m473_MI;
extern MethodInfo m474_MI;
struct t113;
#include "t113.h"
#include "t114.h"
#include "t115.h"
struct t113;
 t5 * m475_gshared (t113 * __this, MethodInfo* method);
#define m475(__this, method) (t5 *)m475_gshared((t113 *)__this, method)
#define m470(__this, method) (t9 *)m475_gshared((t113 *)__this, method)


extern MethodInfo m10_MI;
 void m10 (t2 * __this, MethodInfo* method){
	{
		m469(__this, &m469_MI);
		return;
	}
}
extern MethodInfo m11_MI;
 void m11 (t2 * __this, MethodInfo* method){
	{
		t9 * L_0 = m470(__this, &m470_MI);
		__this->f3 = L_0;
		t9 * L_1 = (__this->f3);
		t8 * L_2 = (__this->f2);
		m471(L_1, L_2, &m471_MI);
		t9 * L_3 = (__this->f3);
		m472(L_3, 1, &m472_MI);
		return;
	}
}
 void m12 (t2 * __this, MethodInfo* method){
	{
		t9 * L_0 = (__this->f3);
		m473(L_0, &m473_MI);
		return;
	}
}
 void m13 (t2 * __this, MethodInfo* method){
	{
		t9 * L_0 = (__this->f3);
		m474(L_0, &m474_MI);
		return;
	}
}
// Metadata Definition BackgroundMusic
extern Il2CppType t8_0_0_6;
FieldInfo t2_f2_FieldInfo = 
{
	"backgroundMusicClip", &t8_0_0_6, &t2_TI, offsetof(t2, f2), &EmptyCustomAttributesCache};
extern Il2CppType t9_0_0_1;
FieldInfo t2_f3_FieldInfo = 
{
	"audioPlayer", &t9_0_0_1, &t2_TI, offsetof(t2, f3), &EmptyCustomAttributesCache};
static FieldInfo* t2_FIs[] =
{
	&t2_f2_FieldInfo,
	&t2_f3_FieldInfo,
	NULL
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m10_MI = 
{
	".ctor", (methodPointerType)&m10, &t2_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 11, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m11_MI = 
{
	"Start", (methodPointerType)&m11, &t2_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 12, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m12_MI = 
{
	"StartBackgroundMusic", (methodPointerType)&m12, &t2_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, false, 13, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m13_MI = 
{
	"StopBackgroundMusic", (methodPointerType)&m13, &t2_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, false, 14, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t2_MIs[] =
{
	&m10_MI,
	&m11_MI,
	&m12_MI,
	&m13_MI,
	NULL
};
extern MethodInfo m476_MI;
extern MethodInfo m477_MI;
extern MethodInfo m478_MI;
static MethodInfo* t2_VT[] =
{
	&m476_MI,
	&m465_MI,
	&m477_MI,
	&m478_MI,
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType t2_1_0_0;
extern TypeInfo t10_TI;
struct t2;
TypeInfo t2_TI = 
{
	&g_AssemblyU2DCSharp_dll_Image, NULL, "BackgroundMusic", "", t2_MIs, NULL, t2_FIs, NULL, &t10_TI, NULL, NULL, &t2_TI, NULL, t2_VT, &EmptyCustomAttributesCache, &t2_TI, &t2_0_0_0, &t2_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t2), 0, -1, 0, 0, -1, 1048577, 0, false, false, false, false, false, false, false, false, false, false, false, false, 4, 0, 2, 0, 0, 4, 0, 0};
#ifndef _MSC_VER
#else
#endif
#include "t4MD.h"

#include "t116.h"


extern MethodInfo m14_MI;
 void m14 (t4 * __this, MethodInfo* method){
	{
		__this->f2 = (t11*) &_stringLiteral1;
		__this->f3 = (t11*) &_stringLiteral2;
		__this->f4 = (t11*) &_stringLiteral3;
		__this->f5 = (t11*) &_stringLiteral4;
		__this->f6 = (t11*) &_stringLiteral5;
		__this->f7 = (t11*) &_stringLiteral6;
		__this->f8 = (t11*) &_stringLiteral7;
		__this->f9 = (t11*) &_stringLiteral8;
		__this->f10 = (t11*) &_stringLiteral7;
		__this->f11 = (t11*) &_stringLiteral9;
		__this->f12 = (t11*) &_stringLiteral5;
		__this->f13 = (2.0f);
		__this->f14 = (t11*) &_stringLiteral10;
		__this->f15 = (t11*) &_stringLiteral11;
		__this->f16 = (t11*) &_stringLiteral12;
		__this->f17 = (t11*) &_stringLiteral13;
		__this->f18 = (t11*) &_stringLiteral14;
		__this->f19 = ((int32_t)22);
		__this->f20 = ((int32_t)22);
		m469(__this, &m469_MI);
		return;
	}
}
// Metadata Definition ConfigurableSettings
extern Il2CppType t11_0_0_6;
FieldInfo t4_f2_FieldInfo = 
{
	"GameMessageLevelPattern", &t11_0_0_6, &t4_TI, offsetof(t4, f2), &EmptyCustomAttributesCache};
extern Il2CppType t11_0_0_6;
FieldInfo t4_f3_FieldInfo = 
{
	"GameMessageScorePattern", &t11_0_0_6, &t4_TI, offsetof(t4, f3), &EmptyCustomAttributesCache};
extern Il2CppType t11_0_0_6;
FieldInfo t4_f4_FieldInfo = 
{
	"GameMessageScoreFormatString", &t11_0_0_6, &t4_TI, offsetof(t4, f4), &EmptyCustomAttributesCache};
extern Il2CppType t11_0_0_6;
FieldInfo t4_f5_FieldInfo = 
{
	"GameMessagePausedText", &t11_0_0_6, &t4_TI, offsetof(t4, f5), &EmptyCustomAttributesCache};
extern Il2CppType t11_0_0_6;
FieldInfo t4_f6_FieldInfo = 
{
	"GameMessagePausedSubtext", &t11_0_0_6, &t4_TI, offsetof(t4, f6), &EmptyCustomAttributesCache};
extern Il2CppType t11_0_0_6;
FieldInfo t4_f7_FieldInfo = 
{
	"GameMessageGameOverText", &t11_0_0_6, &t4_TI, offsetof(t4, f7), &EmptyCustomAttributesCache};
extern Il2CppType t11_0_0_6;
FieldInfo t4_f8_FieldInfo = 
{
	"GameMessageGameOverSubtext", &t11_0_0_6, &t4_TI, offsetof(t4, f8), &EmptyCustomAttributesCache};
extern Il2CppType t11_0_0_6;
FieldInfo t4_f9_FieldInfo = 
{
	"GameMessageGameWonText", &t11_0_0_6, &t4_TI, offsetof(t4, f9), &EmptyCustomAttributesCache};
extern Il2CppType t11_0_0_6;
FieldInfo t4_f10_FieldInfo = 
{
	"GameMessageGameWonSubtext", &t11_0_0_6, &t4_TI, offsetof(t4, f10), &EmptyCustomAttributesCache};
extern Il2CppType t11_0_0_6;
FieldInfo t4_f11_FieldInfo = 
{
	"GameMessageGameStartText", &t11_0_0_6, &t4_TI, offsetof(t4, f11), &EmptyCustomAttributesCache};
extern Il2CppType t11_0_0_6;
FieldInfo t4_f12_FieldInfo = 
{
	"GameMessageGameStartSubtext", &t11_0_0_6, &t4_TI, offsetof(t4, f12), &EmptyCustomAttributesCache};
extern Il2CppType t116_0_0_6;
FieldInfo t4_f13_FieldInfo = 
{
	"GameMessageVisibleTime", &t116_0_0_6, &t4_TI, offsetof(t4, f13), &EmptyCustomAttributesCache};
extern Il2CppType t11_0_0_6;
FieldInfo t4_f14_FieldInfo = 
{
	"GameUserPrefKeyDifficulty", &t11_0_0_6, &t4_TI, offsetof(t4, f14), &EmptyCustomAttributesCache};
extern Il2CppType t11_0_0_6;
FieldInfo t4_f15_FieldInfo = 
{
	"GameUserPrefKeySoundEffectsMuted", &t11_0_0_6, &t4_TI, offsetof(t4, f15), &EmptyCustomAttributesCache};
extern Il2CppType t11_0_0_6;
FieldInfo t4_f16_FieldInfo = 
{
	"GameUserPrefKeyBackgroundMusicMuted", &t11_0_0_6, &t4_TI, offsetof(t4, f16), &EmptyCustomAttributesCache};
extern Il2CppType t11_0_0_6;
FieldInfo t4_f17_FieldInfo = 
{
	"GameMessageToggleMusicPattern", &t11_0_0_6, &t4_TI, offsetof(t4, f17), &EmptyCustomAttributesCache};
extern Il2CppType t11_0_0_6;
FieldInfo t4_f18_FieldInfo = 
{
	"GameMessageToggleSoundPattern", &t11_0_0_6, &t4_TI, offsetof(t4, f18), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_6;
FieldInfo t4_f19_FieldInfo = 
{
	"MineColumns", &t110_0_0_6, &t4_TI, offsetof(t4, f19), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_6;
FieldInfo t4_f20_FieldInfo = 
{
	"MineDepth", &t110_0_0_6, &t4_TI, offsetof(t4, f20), &EmptyCustomAttributesCache};
extern Il2CppType t12_0_0_6;
FieldInfo t4_f21_FieldInfo = 
{
	"EasyDifficultySettings", &t12_0_0_6, &t4_TI, offsetof(t4, f21), &EmptyCustomAttributesCache};
extern Il2CppType t12_0_0_6;
FieldInfo t4_f22_FieldInfo = 
{
	"ModerateDifficultySettings", &t12_0_0_6, &t4_TI, offsetof(t4, f22), &EmptyCustomAttributesCache};
extern Il2CppType t12_0_0_6;
FieldInfo t4_f23_FieldInfo = 
{
	"HardDifficultySettings", &t12_0_0_6, &t4_TI, offsetof(t4, f23), &EmptyCustomAttributesCache};
extern Il2CppType t12_0_0_6;
FieldInfo t4_f24_FieldInfo = 
{
	"ImpossibleDifficultySettings", &t12_0_0_6, &t4_TI, offsetof(t4, f24), &EmptyCustomAttributesCache};
static FieldInfo* t4_FIs[] =
{
	&t4_f2_FieldInfo,
	&t4_f3_FieldInfo,
	&t4_f4_FieldInfo,
	&t4_f5_FieldInfo,
	&t4_f6_FieldInfo,
	&t4_f7_FieldInfo,
	&t4_f8_FieldInfo,
	&t4_f9_FieldInfo,
	&t4_f10_FieldInfo,
	&t4_f11_FieldInfo,
	&t4_f12_FieldInfo,
	&t4_f13_FieldInfo,
	&t4_f14_FieldInfo,
	&t4_f15_FieldInfo,
	&t4_f16_FieldInfo,
	&t4_f17_FieldInfo,
	&t4_f18_FieldInfo,
	&t4_f19_FieldInfo,
	&t4_f20_FieldInfo,
	&t4_f21_FieldInfo,
	&t4_f22_FieldInfo,
	&t4_f23_FieldInfo,
	&t4_f24_FieldInfo,
	NULL
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m14_MI = 
{
	".ctor", (methodPointerType)&m14, &t4_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 15, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t4_MIs[] =
{
	&m14_MI,
	NULL
};
static MethodInfo* t4_VT[] =
{
	&m476_MI,
	&m465_MI,
	&m477_MI,
	&m478_MI,
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType t4_1_0_0;
struct t4;
TypeInfo t4_TI = 
{
	&g_AssemblyU2DCSharp_dll_Image, NULL, "ConfigurableSettings", "", t4_MIs, NULL, t4_FIs, NULL, &t10_TI, NULL, NULL, &t4_TI, NULL, t4_VT, &EmptyCustomAttributesCache, &t4_TI, &t4_0_0_0, &t4_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t4), 0, -1, 0, 0, -1, 1048577, 0, false, false, false, false, false, false, false, false, false, false, false, false, 1, 0, 23, 0, 0, 4, 0, 0};
#include "t13.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t13_TI;
#include "t13MD.h"

#include "t69.h"
#include "t117.h"
#include "t117MD.h"
extern MethodInfo m479_MI;
extern MethodInfo m480_MI;


extern MethodInfo m15_MI;
 void m15 (t13 * __this, MethodInfo* method){
	{
		m469(__this, &m469_MI);
		return;
	}
}
extern MethodInfo m16_MI;
 void m16 (t13 * __this, MethodInfo* method){
	{
		t69 * L_0 = m479(__this, &m479_MI);
		float L_1 = (__this->f2);
		m480(NULL, L_0, L_1, &m480_MI);
		return;
	}
}
// Metadata Definition DestroyByTime
extern Il2CppType t116_0_0_6;
FieldInfo t13_f2_FieldInfo = 
{
	"lifetime", &t116_0_0_6, &t13_TI, offsetof(t13, f2), &EmptyCustomAttributesCache};
static FieldInfo* t13_FIs[] =
{
	&t13_f2_FieldInfo,
	NULL
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m15_MI = 
{
	".ctor", (methodPointerType)&m15, &t13_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 16, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m16_MI = 
{
	"Start", (methodPointerType)&m16, &t13_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 17, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t13_MIs[] =
{
	&m15_MI,
	&m16_MI,
	NULL
};
static MethodInfo* t13_VT[] =
{
	&m476_MI,
	&m465_MI,
	&m477_MI,
	&m478_MI,
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType t13_0_0_0;
extern Il2CppType t13_1_0_0;
struct t13;
TypeInfo t13_TI = 
{
	&g_AssemblyU2DCSharp_dll_Image, NULL, "DestroyByTime", "", t13_MIs, NULL, t13_FIs, NULL, &t10_TI, NULL, NULL, &t13_TI, NULL, t13_VT, &EmptyCustomAttributesCache, &t13_TI, &t13_0_0_0, &t13_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t13), 0, -1, 0, 0, -1, 1048577, 0, false, false, false, false, false, false, false, false, false, false, false, false, 2, 0, 1, 0, 0, 4, 0, 0};
#include "t12.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t12_TI;
#include "t12MD.h"

#include "t118.h"


extern MethodInfo m17_MI;
 void m17 (t12 * __this, MethodInfo* method){
	{
		m469(__this, &m469_MI);
		return;
	}
}
extern MethodInfo m18_MI;
 int32_t m18 (t12 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->f2);
		return L_0;
	}
}
extern MethodInfo m19_MI;
 double m19 (t12 * __this, MethodInfo* method){
	{
		double L_0 = (__this->f3);
		return L_0;
	}
}
extern MethodInfo m20_MI;
 double m20 (t12 * __this, MethodInfo* method){
	{
		double L_0 = (__this->f4);
		return L_0;
	}
}
extern MethodInfo m21_MI;
 int32_t m21 (t12 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->f5);
		return L_0;
	}
}
extern MethodInfo m22_MI;
 int32_t m22 (t12 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->f6);
		return L_0;
	}
}
extern MethodInfo m23_MI;
 double m23 (t12 * __this, MethodInfo* method){
	{
		double L_0 = (__this->f7);
		return L_0;
	}
}
extern MethodInfo m24_MI;
 double m24 (t12 * __this, MethodInfo* method){
	{
		double L_0 = (__this->f9);
		return L_0;
	}
}
extern MethodInfo m25_MI;
 double m25 (t12 * __this, MethodInfo* method){
	{
		double L_0 = (__this->f8);
		return L_0;
	}
}
extern MethodInfo m26_MI;
 double m26 (t12 * __this, MethodInfo* method){
	{
		double L_0 = (__this->f10);
		return L_0;
	}
}
extern MethodInfo m27_MI;
 int32_t m27 (t12 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->f11);
		return L_0;
	}
}
extern MethodInfo m28_MI;
 int32_t m28 (t12 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->f12);
		return L_0;
	}
}
extern MethodInfo m29_MI;
 int32_t m29 (t12 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->f13);
		return L_0;
	}
}
// Metadata Definition DifficultySettings
extern Il2CppType t110_0_0_6;
FieldInfo t12_f2_FieldInfo = 
{
	"levelIncrementScoreThreshold", &t110_0_0_6, &t12_TI, offsetof(t12, f2), &EmptyCustomAttributesCache};
extern Il2CppType t118_0_0_6;
FieldInfo t12_f3_FieldInfo = 
{
	"tickSpeedMilliseconds", &t118_0_0_6, &t12_TI, offsetof(t12, f3), &EmptyCustomAttributesCache};
extern Il2CppType t118_0_0_6;
FieldInfo t12_f4_FieldInfo = 
{
	"tickSpeedMillisecondsFloor", &t118_0_0_6, &t12_TI, offsetof(t12, f4), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_6;
FieldInfo t12_f5_FieldInfo = 
{
	"collisionFinaliseTickCount", &t110_0_0_6, &t12_TI, offsetof(t12, f5), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_6;
FieldInfo t12_f6_FieldInfo = 
{
	"deltaStationaryInMilliseconds", &t110_0_0_6, &t12_TI, offsetof(t12, f6), &EmptyCustomAttributesCache};
extern Il2CppType t118_0_0_6;
FieldInfo t12_f7_FieldInfo = 
{
	"deltaDoubleJewelChance", &t118_0_0_6, &t12_TI, offsetof(t12, f7), &EmptyCustomAttributesCache};
extern Il2CppType t118_0_0_6;
FieldInfo t12_f8_FieldInfo = 
{
	"deltaDoubleJewelChanceFloor", &t118_0_0_6, &t12_TI, offsetof(t12, f8), &EmptyCustomAttributesCache};
extern Il2CppType t118_0_0_6;
FieldInfo t12_f9_FieldInfo = 
{
	"deltaTripleJewelChance", &t118_0_0_6, &t12_TI, offsetof(t12, f9), &EmptyCustomAttributesCache};
extern Il2CppType t118_0_0_6;
FieldInfo t12_f10_FieldInfo = 
{
	"deltaTripleJewelChanceFloor", &t118_0_0_6, &t12_TI, offsetof(t12, f10), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_6;
FieldInfo t12_f11_FieldInfo = 
{
	"groupCollisionScore", &t110_0_0_6, &t12_TI, offsetof(t12, f11), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_6;
FieldInfo t12_f12_FieldInfo = 
{
	"lastLevel", &t110_0_0_6, &t12_TI, offsetof(t12, f12), &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_6;
FieldInfo t12_f13_FieldInfo = 
{
	"initialLines", &t110_0_0_6, &t12_TI, offsetof(t12, f13), &EmptyCustomAttributesCache};
static FieldInfo* t12_FIs[] =
{
	&t12_f2_FieldInfo,
	&t12_f3_FieldInfo,
	&t12_f4_FieldInfo,
	&t12_f5_FieldInfo,
	&t12_f6_FieldInfo,
	&t12_f7_FieldInfo,
	&t12_f8_FieldInfo,
	&t12_f9_FieldInfo,
	&t12_f10_FieldInfo,
	&t12_f11_FieldInfo,
	&t12_f12_FieldInfo,
	&t12_f13_FieldInfo,
	NULL
};
static PropertyInfo t12____LevelIncrementScoreThreshold_PropertyInfo = 
{
	&t12_TI, "LevelIncrementScoreThreshold", &m18_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t12____TickSpeedMilliseconds_PropertyInfo = 
{
	&t12_TI, "TickSpeedMilliseconds", &m19_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t12____TickSpeedMillisecondsFloor_PropertyInfo = 
{
	&t12_TI, "TickSpeedMillisecondsFloor", &m20_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t12____CollisionFinaliseTickCount_PropertyInfo = 
{
	&t12_TI, "CollisionFinaliseTickCount", &m21_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t12____DeltaStationaryInMilliseconds_PropertyInfo = 
{
	&t12_TI, "DeltaStationaryInMilliseconds", &m22_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t12____DeltaDoubleJewelChance_PropertyInfo = 
{
	&t12_TI, "DeltaDoubleJewelChance", &m23_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t12____DeltaTripleJewelChance_PropertyInfo = 
{
	&t12_TI, "DeltaTripleJewelChance", &m24_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t12____DeltaDoubleJewelChanceFloor_PropertyInfo = 
{
	&t12_TI, "DeltaDoubleJewelChanceFloor", &m25_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t12____DeltaTripleJewelChanceFloor_PropertyInfo = 
{
	&t12_TI, "DeltaTripleJewelChanceFloor", &m26_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t12____GroupCollisionScore_PropertyInfo = 
{
	&t12_TI, "GroupCollisionScore", &m27_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t12____LastLevel_PropertyInfo = 
{
	&t12_TI, "LastLevel", &m28_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t12____InitialLines_PropertyInfo = 
{
	&t12_TI, "InitialLines", &m29_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t12_PIs[] =
{
	&t12____LevelIncrementScoreThreshold_PropertyInfo,
	&t12____TickSpeedMilliseconds_PropertyInfo,
	&t12____TickSpeedMillisecondsFloor_PropertyInfo,
	&t12____CollisionFinaliseTickCount_PropertyInfo,
	&t12____DeltaStationaryInMilliseconds_PropertyInfo,
	&t12____DeltaDoubleJewelChance_PropertyInfo,
	&t12____DeltaTripleJewelChance_PropertyInfo,
	&t12____DeltaDoubleJewelChanceFloor_PropertyInfo,
	&t12____DeltaTripleJewelChanceFloor_PropertyInfo,
	&t12____GroupCollisionScore_PropertyInfo,
	&t12____LastLevel_PropertyInfo,
	&t12____InitialLines_PropertyInfo,
	NULL
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m17_MI = 
{
	".ctor", (methodPointerType)&m17, &t12_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 18, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m18_MI = 
{
	"get_LevelIncrementScoreThreshold", (methodPointerType)&m18, &t12_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 2534, 0, 4, 0, false, false, 19, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t118_0_0_0;
extern void* RuntimeInvoker_t118 (MethodInfo* method, void* obj, void** args);
MethodInfo m19_MI = 
{
	"get_TickSpeedMilliseconds", (methodPointerType)&m19, &t12_TI, &t118_0_0_0, RuntimeInvoker_t118, NULL, &EmptyCustomAttributesCache, 2534, 0, 5, 0, false, false, 20, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t118_0_0_0;
extern void* RuntimeInvoker_t118 (MethodInfo* method, void* obj, void** args);
MethodInfo m20_MI = 
{
	"get_TickSpeedMillisecondsFloor", (methodPointerType)&m20, &t12_TI, &t118_0_0_0, RuntimeInvoker_t118, NULL, &EmptyCustomAttributesCache, 2534, 0, 6, 0, false, false, 21, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m21_MI = 
{
	"get_CollisionFinaliseTickCount", (methodPointerType)&m21, &t12_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 2534, 0, 7, 0, false, false, 22, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m22_MI = 
{
	"get_DeltaStationaryInMilliseconds", (methodPointerType)&m22, &t12_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 2534, 0, 8, 0, false, false, 23, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t118_0_0_0;
extern void* RuntimeInvoker_t118 (MethodInfo* method, void* obj, void** args);
MethodInfo m23_MI = 
{
	"get_DeltaDoubleJewelChance", (methodPointerType)&m23, &t12_TI, &t118_0_0_0, RuntimeInvoker_t118, NULL, &EmptyCustomAttributesCache, 2534, 0, 9, 0, false, false, 24, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t118_0_0_0;
extern void* RuntimeInvoker_t118 (MethodInfo* method, void* obj, void** args);
MethodInfo m24_MI = 
{
	"get_DeltaTripleJewelChance", (methodPointerType)&m24, &t12_TI, &t118_0_0_0, RuntimeInvoker_t118, NULL, &EmptyCustomAttributesCache, 2534, 0, 10, 0, false, false, 25, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t118_0_0_0;
extern void* RuntimeInvoker_t118 (MethodInfo* method, void* obj, void** args);
MethodInfo m25_MI = 
{
	"get_DeltaDoubleJewelChanceFloor", (methodPointerType)&m25, &t12_TI, &t118_0_0_0, RuntimeInvoker_t118, NULL, &EmptyCustomAttributesCache, 2534, 0, 11, 0, false, false, 26, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t118_0_0_0;
extern void* RuntimeInvoker_t118 (MethodInfo* method, void* obj, void** args);
MethodInfo m26_MI = 
{
	"get_DeltaTripleJewelChanceFloor", (methodPointerType)&m26, &t12_TI, &t118_0_0_0, RuntimeInvoker_t118, NULL, &EmptyCustomAttributesCache, 2534, 0, 12, 0, false, false, 27, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m27_MI = 
{
	"get_GroupCollisionScore", (methodPointerType)&m27, &t12_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 2534, 0, 13, 0, false, false, 28, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m28_MI = 
{
	"get_LastLevel", (methodPointerType)&m28, &t12_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 2534, 0, 14, 0, false, false, 29, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m29_MI = 
{
	"get_InitialLines", (methodPointerType)&m29, &t12_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 2534, 0, 15, 0, false, false, 30, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t12_MIs[] =
{
	&m17_MI,
	&m18_MI,
	&m19_MI,
	&m20_MI,
	&m21_MI,
	&m22_MI,
	&m23_MI,
	&m24_MI,
	&m25_MI,
	&m26_MI,
	&m27_MI,
	&m28_MI,
	&m29_MI,
	NULL
};
static MethodInfo* t12_VT[] =
{
	&m476_MI,
	&m465_MI,
	&m477_MI,
	&m478_MI,
	&m18_MI,
	&m19_MI,
	&m20_MI,
	&m21_MI,
	&m22_MI,
	&m23_MI,
	&m24_MI,
	&m25_MI,
	&m26_MI,
	&m27_MI,
	&m28_MI,
	&m29_MI,
};
extern TypeInfo t62_TI;
static TypeInfo* t12_ITIs[] = 
{
	&t62_TI,
};
static Il2CppInterfaceOffsetPair t12_IOs[] = 
{
	{ &t62_TI, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType t12_0_0_0;
extern Il2CppType t12_1_0_0;
struct t12;
TypeInfo t12_TI = 
{
	&g_AssemblyU2DCSharp_dll_Image, NULL, "DifficultySettings", "", t12_MIs, t12_PIs, t12_FIs, NULL, &t10_TI, NULL, NULL, &t12_TI, t12_ITIs, t12_VT, &EmptyCustomAttributesCache, &t12_TI, &t12_0_0_0, &t12_1_0_0, t12_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t12), 0, -1, 0, 0, -1, 1048577, 0, false, false, false, false, false, false, false, false, false, false, false, false, 13, 12, 12, 0, 0, 16, 1, 1};
#include "t14.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t14_TI;
#include "t14MD.h"

#include "t15.h"
#include "t37.h"
#include "t21.h"
extern TypeInfo t37_TI;
#include "t31MD.h"
#include "t37MD.h"
#include "t15MD.h"
extern MethodInfo m151_MI;
extern MethodInfo m481_MI;
extern MethodInfo m319_MI;


extern MethodInfo m30_MI;
 void m30 (t14 * __this, MethodInfo* method){
	{
		m460(__this, &m460_MI);
		return;
	}
}
extern MethodInfo m31_MI;
 int32_t m31 (t14 * __this, t15 * p0, t15 * p1, MethodInfo* method){
	{
		if ((((t15 *)p0) != ((t15 *)p1)))
		{
			goto IL_0009;
		}
	}
	{
		return 0;
	}

IL_0009:
	{
		if (p1)
		{
			goto IL_0011;
		}
	}
	{
		return 1;
	}

IL_0011:
	{
		if (p0)
		{
			goto IL_0019;
		}
	}
	{
		return (-1);
	}

IL_0019:
	{
		t37 * L_0 = m151(p0, &m151_MI);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m481_MI, L_0);
		t37 * L_2 = m151(p1, &m151_MI);
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m481_MI, L_2);
		if ((((int32_t)L_1) <= ((int32_t)L_3)))
		{
			goto IL_0036;
		}
	}
	{
		return 1;
	}

IL_0036:
	{
		t37 * L_4 = m151(p0, &m151_MI);
		int32_t L_5 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m481_MI, L_4);
		t37 * L_6 = m151(p1, &m151_MI);
		int32_t L_7 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m481_MI, L_6);
		if ((((int32_t)L_5) >= ((int32_t)L_7)))
		{
			goto IL_0053;
		}
	}
	{
		return (-1);
	}

IL_0053:
	{
		int32_t L_8 = m319(p0, &m319_MI);
		if ((((int32_t)L_8) == ((int32_t)2)))
		{
			goto IL_006b;
		}
	}
	{
		int32_t L_9 = m319(p0, &m319_MI);
		if ((((uint32_t)L_9) != ((uint32_t)3)))
		{
			goto IL_006d;
		}
	}

IL_006b:
	{
		return 1;
	}

IL_006d:
	{
		int32_t L_10 = m319(p1, &m319_MI);
		if ((((int32_t)L_10) == ((int32_t)2)))
		{
			goto IL_0085;
		}
	}
	{
		int32_t L_11 = m319(p1, &m319_MI);
		if ((((uint32_t)L_11) != ((uint32_t)3)))
		{
			goto IL_0087;
		}
	}

IL_0085:
	{
		return (-1);
	}

IL_0087:
	{
		return 0;
	}
}
// Metadata Definition JewelMine.Engine.CollisionGroupComparer
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m30_MI = 
{
	".ctor", (methodPointerType)&m30, &t14_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 31, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t15_0_0_0;
extern Il2CppType t15_0_0_0;
extern Il2CppType t15_0_0_0;
static ParameterInfo t14_m31_ParameterInfos[] = 
{
	{"x", 0, 134217739, &EmptyCustomAttributesCache, &t15_0_0_0},
	{"y", 1, 134217740, &EmptyCustomAttributesCache, &t15_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m31_MI = 
{
	"Compare", (methodPointerType)&m31, &t14_TI, &t110_0_0_0, RuntimeInvoker_t110_t5_t5, t14_m31_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 4, 2, false, false, 32, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t14_MIs[] =
{
	&m30_MI,
	&m31_MI,
	NULL
};
static MethodInfo* t14_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m31_MI,
};
extern TypeInfo t119_TI;
static TypeInfo* t14_ITIs[] = 
{
	&t119_TI,
};
static Il2CppInterfaceOffsetPair t14_IOs[] = 
{
	{ &t119_TI, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType t14_0_0_0;
extern Il2CppType t14_1_0_0;
struct t14;
TypeInfo t14_TI = 
{
	&g_AssemblyU2DCSharp_dll_Image, NULL, "CollisionGroupComparer", "JewelMine.Engine", t14_MIs, NULL, NULL, NULL, &t5_TI, NULL, NULL, &t14_TI, t14_ITIs, t14_VT, &EmptyCustomAttributesCache, &t14_TI, &t14_0_0_0, &t14_1_0_0, t14_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t14), 0, -1, 0, 0, -1, 1048577, 0, false, false, false, false, false, false, false, false, false, false, false, false, 2, 0, 0, 0, 0, 5, 1, 1};
#include "t16.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t16_TI;
#include "t16MD.h"



// Metadata Definition JewelMine.Engine.GameConstants
extern Il2CppType t110_0_0_32854;
FieldInfo t16_f0_FieldInfo = 
{
	"GAME_MINE_DEFAULT_COLUMN_SIZE", &t110_0_0_32854, &t16_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_32854;
FieldInfo t16_f1_FieldInfo = 
{
	"GAME_MINE_DEFAULT_DEPTH_SIZE", &t110_0_0_32854, &t16_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_32854;
FieldInfo t16_f2_FieldInfo = 
{
	"GAME_DEFAULT_LEVEL", &t110_0_0_32854, &t16_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t110_0_0_32854;
FieldInfo t16_f3_FieldInfo = 
{
	"GAME_NUM_JEWELS_FOR_GROUP_COLLISION", &t110_0_0_32854, &t16_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t11_0_0_32854;
FieldInfo t16_f4_FieldInfo = 
{
	"GAME_MESSAGE_SAVE_GAME_PATTERN", &t11_0_0_32854, &t16_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t11_0_0_32854;
FieldInfo t16_f5_FieldInfo = 
{
	"GAME_MESSAGE_LOAD_GAME_PATTERN", &t11_0_0_32854, &t16_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t11_0_0_32854;
FieldInfo t16_f6_FieldInfo = 
{
	"GAME_MESSAGE_SAVE_GAME_FAILED_PATTERN", &t11_0_0_32854, &t16_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t11_0_0_32854;
FieldInfo t16_f7_FieldInfo = 
{
	"GAME_MESSAGE_LOAD_GAME_FAILED_PATTERN", &t11_0_0_32854, &t16_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t11_0_0_32854;
FieldInfo t16_f8_FieldInfo = 
{
	"GAME_MESSAGE_CHANGED_DIFFICULTY_PATTERN", &t11_0_0_32854, &t16_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t11_0_0_32854;
FieldInfo t16_f9_FieldInfo = 
{
	"GAME_MESSAGE_RESTARTED", &t11_0_0_32854, &t16_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t11_0_0_32854;
FieldInfo t16_f10_FieldInfo = 
{
	"GAME_MESSAGE_POINTS_SCORED_PATTERN", &t11_0_0_32854, &t16_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t11_0_0_32854;
FieldInfo t16_f11_FieldInfo = 
{
	"GAME_DEFAULT_SAVE_GAME_FILENAME", &t11_0_0_32854, &t16_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t16_FIs[] =
{
	&t16_f0_FieldInfo,
	&t16_f1_FieldInfo,
	&t16_f2_FieldInfo,
	&t16_f3_FieldInfo,
	&t16_f4_FieldInfo,
	&t16_f5_FieldInfo,
	&t16_f6_FieldInfo,
	&t16_f7_FieldInfo,
	&t16_f8_FieldInfo,
	&t16_f9_FieldInfo,
	&t16_f10_FieldInfo,
	&t16_f11_FieldInfo,
	NULL
};
static const int32_t t16_f0_DefaultValueData = 22;
extern Il2CppType t110_0_0_0;
static Il2CppFieldDefaultValueEntry t16_f0_DefaultValue = 
{
	&t16_f0_FieldInfo, { (char*)&t16_f0_DefaultValueData, &t110_0_0_0 }};
static const int32_t t16_f1_DefaultValueData = 22;
static Il2CppFieldDefaultValueEntry t16_f1_DefaultValue = 
{
	&t16_f1_FieldInfo, { (char*)&t16_f1_DefaultValueData, &t110_0_0_0 }};
static const int32_t t16_f2_DefaultValueData = 1;
static Il2CppFieldDefaultValueEntry t16_f2_DefaultValue = 
{
	&t16_f2_FieldInfo, { (char*)&t16_f2_DefaultValueData, &t110_0_0_0 }};
static const int32_t t16_f3_DefaultValueData = 3;
static Il2CppFieldDefaultValueEntry t16_f3_DefaultValue = 
{
	&t16_f3_FieldInfo, { (char*)&t16_f3_DefaultValueData, &t110_0_0_0 }};
static const uint16_t t16_f4_DefaultValueData[] = { 0x53, 0x61, 0x76, 0x65, 0x64, 0x20, 0x7B, 0x30, 0x7D, 0x00 };
extern Il2CppType t11_0_0_0;
static Il2CppFieldDefaultValueEntry t16_f4_DefaultValue = 
{
	&t16_f4_FieldInfo, { (char*)&t16_f4_DefaultValueData, &t11_0_0_0 }};
static const uint16_t t16_f5_DefaultValueData[] = { 0x4C, 0x6F, 0x61, 0x64, 0x65, 0x64, 0x20, 0x66, 0x72, 0x6F, 0x6D, 0x20, 0x7B, 0x30, 0x7D, 0x00 };
static Il2CppFieldDefaultValueEntry t16_f5_DefaultValue = 
{
	&t16_f5_FieldInfo, { (char*)&t16_f5_DefaultValueData, &t11_0_0_0 }};
static const uint16_t t16_f6_DefaultValueData[] = { 0x53, 0x61, 0x76, 0x65, 0x20, 0x66, 0x61, 0x69, 0x6C, 0x65, 0x64, 0x20, 0x5B, 0x7B, 0x30, 0x7D, 0x5D, 0x00 };
static Il2CppFieldDefaultValueEntry t16_f6_DefaultValue = 
{
	&t16_f6_FieldInfo, { (char*)&t16_f6_DefaultValueData, &t11_0_0_0 }};
static const uint16_t t16_f7_DefaultValueData[] = { 0x4C, 0x6F, 0x61, 0x64, 0x65, 0x64, 0x20, 0x66, 0x61, 0x69, 0x6C, 0x65, 0x64, 0x20, 0x5B, 0x7B, 0x30, 0x7D, 0x5D, 0x00 };
static Il2CppFieldDefaultValueEntry t16_f7_DefaultValue = 
{
	&t16_f7_FieldInfo, { (char*)&t16_f7_DefaultValueData, &t11_0_0_0 }};
static const uint16_t t16_f8_DefaultValueData[] = { 0x44, 0x69, 0x66, 0x66, 0x69, 0x63, 0x75, 0x6C, 0x74, 0x79, 0x20, 0x73, 0x65, 0x74, 0x20, 0x74, 0x6F, 0x20, 0x7B, 0x30, 0x7D, 0x20, 0x5B, 0x7B, 0x31, 0x3A, 0x4E, 0x30, 0x7D, 0x20, 0x4C, 0x65, 0x76, 0x65, 0x6C, 0x73, 0x5D, 0x00 };
static Il2CppFieldDefaultValueEntry t16_f8_DefaultValue = 
{
	&t16_f8_FieldInfo, { (char*)&t16_f8_DefaultValueData, &t11_0_0_0 }};
static const uint16_t t16_f9_DefaultValueData[] = { 0x52, 0x65, 0x73, 0x74, 0x61, 0x72, 0x74, 0x65, 0x64, 0x00 };
static Il2CppFieldDefaultValueEntry t16_f9_DefaultValue = 
{
	&t16_f9_FieldInfo, { (char*)&t16_f9_DefaultValueData, &t11_0_0_0 }};
static const uint16_t t16_f10_DefaultValueData[] = { 0x7B, 0x30, 0x3A, 0x4E, 0x30, 0x7D, 0x20, 0x70, 0x6F, 0x69, 0x6E, 0x74, 0x73, 0x20, 0x73, 0x63, 0x6F, 0x72, 0x65, 0x64, 0x00 };
static Il2CppFieldDefaultValueEntry t16_f10_DefaultValue = 
{
	&t16_f10_FieldInfo, { (char*)&t16_f10_DefaultValueData, &t11_0_0_0 }};
static const uint16_t t16_f11_DefaultValueData[] = { 0x53, 0x61, 0x76, 0x65, 0x64, 0x2E, 0x47, 0x61, 0x6D, 0x65, 0x2E, 0x64, 0x61, 0x74, 0x61, 0x00 };
static Il2CppFieldDefaultValueEntry t16_f11_DefaultValue = 
{
	&t16_f11_FieldInfo, { (char*)&t16_f11_DefaultValueData, &t11_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t16_FDVs[] = 
{
	&t16_f0_DefaultValue,
	&t16_f1_DefaultValue,
	&t16_f2_DefaultValue,
	&t16_f3_DefaultValue,
	&t16_f4_DefaultValue,
	&t16_f5_DefaultValue,
	&t16_f6_DefaultValue,
	&t16_f7_DefaultValue,
	&t16_f8_DefaultValue,
	&t16_f9_DefaultValue,
	&t16_f10_DefaultValue,
	&t16_f11_DefaultValue,
	NULL
};
static MethodInfo* t16_MIs[] =
{
	NULL
};
static MethodInfo* t16_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType t16_0_0_0;
extern Il2CppType t16_1_0_0;
struct t16;
TypeInfo t16_TI = 
{
	&g_AssemblyU2DCSharp_dll_Image, NULL, "GameConstants", "JewelMine.Engine", t16_MIs, NULL, t16_FIs, NULL, &t5_TI, NULL, NULL, &t16_TI, NULL, t16_VT, &EmptyCustomAttributesCache, &t16_TI, &t16_0_0_0, &t16_1_0_0, NULL, NULL, NULL, t16_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t16), 0, -1, 0, 0, -1, 1048961, 0, false, false, false, false, false, false, false, false, false, false, false, false, 0, 0, 12, 0, 0, 4, 0, 0};
#include "t17.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t17_TI;
#include "t17MD.h"



// Metadata Definition JewelMine.Engine.GamePlayState
extern Il2CppType t110_0_0_1542;
FieldInfo t17_f1_FieldInfo = 
{
	"value__", &t110_0_0_1542, &t17_TI, offsetof(t17, f1) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t17_0_0_32854;
FieldInfo t17_f2_FieldInfo = 
{
	"NotStarted", &t17_0_0_32854, &t17_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t17_0_0_32854;
FieldInfo t17_f3_FieldInfo = 
{
	"Playing", &t17_0_0_32854, &t17_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t17_0_0_32854;
FieldInfo t17_f4_FieldInfo = 
{
	"Paused", &t17_0_0_32854, &t17_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t17_0_0_32854;
FieldInfo t17_f5_FieldInfo = 
{
	"GameOver", &t17_0_0_32854, &t17_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t17_0_0_32854;
FieldInfo t17_f6_FieldInfo = 
{
	"GameWon", &t17_0_0_32854, &t17_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t17_FIs[] =
{
	&t17_f1_FieldInfo,
	&t17_f2_FieldInfo,
	&t17_f3_FieldInfo,
	&t17_f4_FieldInfo,
	&t17_f5_FieldInfo,
	&t17_f6_FieldInfo,
	NULL
};
static const int32_t t17_f2_DefaultValueData = 0;
static Il2CppFieldDefaultValueEntry t17_f2_DefaultValue = 
{
	&t17_f2_FieldInfo, { (char*)&t17_f2_DefaultValueData, &t110_0_0_0 }};
static const int32_t t17_f3_DefaultValueData = 1;
static Il2CppFieldDefaultValueEntry t17_f3_DefaultValue = 
{
	&t17_f3_FieldInfo, { (char*)&t17_f3_DefaultValueData, &t110_0_0_0 }};
static const int32_t t17_f4_DefaultValueData = 2;
static Il2CppFieldDefaultValueEntry t17_f4_DefaultValue = 
{
	&t17_f4_FieldInfo, { (char*)&t17_f4_DefaultValueData, &t110_0_0_0 }};
static const int32_t t17_f5_DefaultValueData = 3;
static Il2CppFieldDefaultValueEntry t17_f5_DefaultValue = 
{
	&t17_f5_FieldInfo, { (char*)&t17_f5_DefaultValueData, &t110_0_0_0 }};
static const int32_t t17_f6_DefaultValueData = 4;
static Il2CppFieldDefaultValueEntry t17_f6_DefaultValue = 
{
	&t17_f6_FieldInfo, { (char*)&t17_f6_DefaultValueData, &t110_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t17_FDVs[] = 
{
	&t17_f2_DefaultValue,
	&t17_f3_DefaultValue,
	&t17_f4_DefaultValue,
	&t17_f5_DefaultValue,
	&t17_f6_DefaultValue,
	NULL
};
static MethodInfo* t17_MIs[] =
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
static MethodInfo* t17_VT[] =
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
static Il2CppInterfaceOffsetPair t17_IOs[] = 
{
	{ &t120_TI, 4},
	{ &t121_TI, 5},
	{ &t122_TI, 21},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType t17_0_0_0;
extern Il2CppType t17_1_0_0;
extern TypeInfo t18_TI;
TypeInfo t17_TI = 
{
	&g_AssemblyU2DCSharp_dll_Image, NULL, "GamePlayState", "JewelMine.Engine", t17_MIs, NULL, t17_FIs, NULL, &t18_TI, NULL, NULL, &t110_TI, NULL, t17_VT, &EmptyCustomAttributesCache, &t110_TI, &t17_0_0_0, &t17_1_0_0, t17_IOs, NULL, NULL, t17_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t17)+ sizeof (Il2CppObject), sizeof (int32_t), sizeof(int32_t), 0, 0, -1, 257, 0, true, false, false, true, false, false, false, false, false, false, false, false, 0, 0, 6, 0, 0, 23, 0, 3};
#include "t19.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t19_TI;
#include "t19MD.h"



// Metadata Definition JewelMine.Engine.JewelType
extern Il2CppType t110_0_0_1542;
FieldInfo t19_f1_FieldInfo = 
{
	"value__", &t110_0_0_1542, &t19_TI, offsetof(t19, f1) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t19_0_0_32854;
FieldInfo t19_f2_FieldInfo = 
{
	"Unknown", &t19_0_0_32854, &t19_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t19_0_0_32854;
FieldInfo t19_f3_FieldInfo = 
{
	"Diamond", &t19_0_0_32854, &t19_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t19_0_0_32854;
FieldInfo t19_f4_FieldInfo = 
{
	"Sapphire", &t19_0_0_32854, &t19_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t19_0_0_32854;
FieldInfo t19_f5_FieldInfo = 
{
	"Emerald", &t19_0_0_32854, &t19_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t19_0_0_32854;
FieldInfo t19_f6_FieldInfo = 
{
	"Topaz", &t19_0_0_32854, &t19_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t19_0_0_32854;
FieldInfo t19_f7_FieldInfo = 
{
	"Ruby", &t19_0_0_32854, &t19_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t19_0_0_32854;
FieldInfo t19_f8_FieldInfo = 
{
	"Amethyst", &t19_0_0_32854, &t19_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t19_0_0_32854;
FieldInfo t19_f9_FieldInfo = 
{
	"Citrine", &t19_0_0_32854, &t19_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t19_0_0_32854;
FieldInfo t19_f10_FieldInfo = 
{
	"SpessartiteGarnet", &t19_0_0_32854, &t19_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t19_FIs[] =
{
	&t19_f1_FieldInfo,
	&t19_f2_FieldInfo,
	&t19_f3_FieldInfo,
	&t19_f4_FieldInfo,
	&t19_f5_FieldInfo,
	&t19_f6_FieldInfo,
	&t19_f7_FieldInfo,
	&t19_f8_FieldInfo,
	&t19_f9_FieldInfo,
	&t19_f10_FieldInfo,
	NULL
};
static const int32_t t19_f2_DefaultValueData = 0;
static Il2CppFieldDefaultValueEntry t19_f2_DefaultValue = 
{
	&t19_f2_FieldInfo, { (char*)&t19_f2_DefaultValueData, &t110_0_0_0 }};
static const int32_t t19_f3_DefaultValueData = 1;
static Il2CppFieldDefaultValueEntry t19_f3_DefaultValue = 
{
	&t19_f3_FieldInfo, { (char*)&t19_f3_DefaultValueData, &t110_0_0_0 }};
static const int32_t t19_f4_DefaultValueData = 2;
static Il2CppFieldDefaultValueEntry t19_f4_DefaultValue = 
{
	&t19_f4_FieldInfo, { (char*)&t19_f4_DefaultValueData, &t110_0_0_0 }};
static const int32_t t19_f5_DefaultValueData = 3;
static Il2CppFieldDefaultValueEntry t19_f5_DefaultValue = 
{
	&t19_f5_FieldInfo, { (char*)&t19_f5_DefaultValueData, &t110_0_0_0 }};
static const int32_t t19_f6_DefaultValueData = 4;
static Il2CppFieldDefaultValueEntry t19_f6_DefaultValue = 
{
	&t19_f6_FieldInfo, { (char*)&t19_f6_DefaultValueData, &t110_0_0_0 }};
static const int32_t t19_f7_DefaultValueData = 5;
static Il2CppFieldDefaultValueEntry t19_f7_DefaultValue = 
{
	&t19_f7_FieldInfo, { (char*)&t19_f7_DefaultValueData, &t110_0_0_0 }};
static const int32_t t19_f8_DefaultValueData = 6;
static Il2CppFieldDefaultValueEntry t19_f8_DefaultValue = 
{
	&t19_f8_FieldInfo, { (char*)&t19_f8_DefaultValueData, &t110_0_0_0 }};
static const int32_t t19_f9_DefaultValueData = 7;
static Il2CppFieldDefaultValueEntry t19_f9_DefaultValue = 
{
	&t19_f9_FieldInfo, { (char*)&t19_f9_DefaultValueData, &t110_0_0_0 }};
static const int32_t t19_f10_DefaultValueData = 8;
static Il2CppFieldDefaultValueEntry t19_f10_DefaultValue = 
{
	&t19_f10_FieldInfo, { (char*)&t19_f10_DefaultValueData, &t110_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t19_FDVs[] = 
{
	&t19_f2_DefaultValue,
	&t19_f3_DefaultValue,
	&t19_f4_DefaultValue,
	&t19_f5_DefaultValue,
	&t19_f6_DefaultValue,
	&t19_f7_DefaultValue,
	&t19_f8_DefaultValue,
	&t19_f9_DefaultValue,
	&t19_f10_DefaultValue,
	NULL
};
static MethodInfo* t19_MIs[] =
{
	NULL
};
static MethodInfo* t19_VT[] =
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
static Il2CppInterfaceOffsetPair t19_IOs[] = 
{
	{ &t120_TI, 4},
	{ &t121_TI, 5},
	{ &t122_TI, 21},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType t19_0_0_0;
extern Il2CppType t19_1_0_0;
TypeInfo t19_TI = 
{
	&g_AssemblyU2DCSharp_dll_Image, NULL, "JewelType", "JewelMine.Engine", t19_MIs, NULL, t19_FIs, NULL, &t18_TI, NULL, NULL, &t110_TI, NULL, t19_VT, &EmptyCustomAttributesCache, &t110_TI, &t19_0_0_0, &t19_1_0_0, t19_IOs, NULL, NULL, t19_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t19)+ sizeof (Il2CppObject), sizeof (int32_t), sizeof(int32_t), 0, 0, -1, 257, 0, true, false, false, true, false, false, false, false, false, false, false, false, 0, 0, 10, 0, 0, 23, 0, 3};
#include "t20.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t20_TI;
#include "t20MD.h"



// Metadata Definition JewelMine.Engine.MovementType
extern Il2CppType t110_0_0_1542;
FieldInfo t20_f1_FieldInfo = 
{
	"value__", &t110_0_0_1542, &t20_TI, offsetof(t20, f1) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t20_0_0_32854;
FieldInfo t20_f2_FieldInfo = 
{
	"Down", &t20_0_0_32854, &t20_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t20_0_0_32854;
FieldInfo t20_f3_FieldInfo = 
{
	"Left", &t20_0_0_32854, &t20_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t20_0_0_32854;
FieldInfo t20_f4_FieldInfo = 
{
	"Right", &t20_0_0_32854, &t20_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t20_FIs[] =
{
	&t20_f1_FieldInfo,
	&t20_f2_FieldInfo,
	&t20_f3_FieldInfo,
	&t20_f4_FieldInfo,
	NULL
};
static const int32_t t20_f2_DefaultValueData = 0;
static Il2CppFieldDefaultValueEntry t20_f2_DefaultValue = 
{
	&t20_f2_FieldInfo, { (char*)&t20_f2_DefaultValueData, &t110_0_0_0 }};
static const int32_t t20_f3_DefaultValueData = 1;
static Il2CppFieldDefaultValueEntry t20_f3_DefaultValue = 
{
	&t20_f3_FieldInfo, { (char*)&t20_f3_DefaultValueData, &t110_0_0_0 }};
static const int32_t t20_f4_DefaultValueData = 2;
static Il2CppFieldDefaultValueEntry t20_f4_DefaultValue = 
{
	&t20_f4_FieldInfo, { (char*)&t20_f4_DefaultValueData, &t110_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t20_FDVs[] = 
{
	&t20_f2_DefaultValue,
	&t20_f3_DefaultValue,
	&t20_f4_DefaultValue,
	NULL
};
static MethodInfo* t20_MIs[] =
{
	NULL
};
static MethodInfo* t20_VT[] =
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
static Il2CppInterfaceOffsetPair t20_IOs[] = 
{
	{ &t120_TI, 4},
	{ &t121_TI, 5},
	{ &t122_TI, 21},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType t20_0_0_0;
extern Il2CppType t20_1_0_0;
TypeInfo t20_TI = 
{
	&g_AssemblyU2DCSharp_dll_Image, NULL, "MovementType", "JewelMine.Engine", t20_MIs, NULL, t20_FIs, NULL, &t18_TI, NULL, NULL, &t110_TI, NULL, t20_VT, &EmptyCustomAttributesCache, &t110_TI, &t20_0_0_0, &t20_1_0_0, t20_IOs, NULL, NULL, t20_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t20)+ sizeof (Il2CppObject), sizeof (int32_t), sizeof(int32_t), 0, 0, -1, 257, 0, true, false, false, true, false, false, false, false, false, false, false, false, 0, 0, 4, 0, 0, 23, 0, 3};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t21_TI;
#include "t21MD.h"



// Metadata Definition JewelMine.Engine.CollisionDirection
extern Il2CppType t110_0_0_1542;
FieldInfo t21_f1_FieldInfo = 
{
	"value__", &t110_0_0_1542, &t21_TI, offsetof(t21, f1) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t21_0_0_32854;
FieldInfo t21_f2_FieldInfo = 
{
	"Vertical", &t21_0_0_32854, &t21_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t21_0_0_32854;
FieldInfo t21_f3_FieldInfo = 
{
	"Horizontal", &t21_0_0_32854, &t21_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t21_0_0_32854;
FieldInfo t21_f4_FieldInfo = 
{
	"DiagonallyLeft", &t21_0_0_32854, &t21_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t21_0_0_32854;
FieldInfo t21_f5_FieldInfo = 
{
	"DiagonallyRight", &t21_0_0_32854, &t21_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t21_FIs[] =
{
	&t21_f1_FieldInfo,
	&t21_f2_FieldInfo,
	&t21_f3_FieldInfo,
	&t21_f4_FieldInfo,
	&t21_f5_FieldInfo,
	NULL
};
static const int32_t t21_f2_DefaultValueData = 0;
static Il2CppFieldDefaultValueEntry t21_f2_DefaultValue = 
{
	&t21_f2_FieldInfo, { (char*)&t21_f2_DefaultValueData, &t110_0_0_0 }};
static const int32_t t21_f3_DefaultValueData = 1;
static Il2CppFieldDefaultValueEntry t21_f3_DefaultValue = 
{
	&t21_f3_FieldInfo, { (char*)&t21_f3_DefaultValueData, &t110_0_0_0 }};
static const int32_t t21_f4_DefaultValueData = 2;
static Il2CppFieldDefaultValueEntry t21_f4_DefaultValue = 
{
	&t21_f4_FieldInfo, { (char*)&t21_f4_DefaultValueData, &t110_0_0_0 }};
static const int32_t t21_f5_DefaultValueData = 3;
static Il2CppFieldDefaultValueEntry t21_f5_DefaultValue = 
{
	&t21_f5_FieldInfo, { (char*)&t21_f5_DefaultValueData, &t110_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t21_FDVs[] = 
{
	&t21_f2_DefaultValue,
	&t21_f3_DefaultValue,
	&t21_f4_DefaultValue,
	&t21_f5_DefaultValue,
	NULL
};
static MethodInfo* t21_MIs[] =
{
	NULL
};
static MethodInfo* t21_VT[] =
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
static Il2CppInterfaceOffsetPair t21_IOs[] = 
{
	{ &t120_TI, 4},
	{ &t121_TI, 5},
	{ &t122_TI, 21},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType t21_0_0_0;
extern Il2CppType t21_1_0_0;
TypeInfo t21_TI = 
{
	&g_AssemblyU2DCSharp_dll_Image, NULL, "CollisionDirection", "JewelMine.Engine", t21_MIs, NULL, t21_FIs, NULL, &t18_TI, NULL, NULL, &t110_TI, NULL, t21_VT, &EmptyCustomAttributesCache, &t110_TI, &t21_0_0_0, &t21_1_0_0, t21_IOs, NULL, NULL, t21_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t21)+ sizeof (Il2CppObject), sizeof (int32_t), sizeof(int32_t), 0, 0, -1, 257, 0, true, false, false, true, false, false, false, false, false, false, false, false, 0, 0, 5, 0, 0, 23, 0, 3};
#include "t22.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t22_TI;
#include "t22MD.h"



// Metadata Definition JewelMine.Engine.DifficultyLevel
extern Il2CppType t110_0_0_1542;
FieldInfo t22_f1_FieldInfo = 
{
	"value__", &t110_0_0_1542, &t22_TI, offsetof(t22, f1) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t22_0_0_32854;
FieldInfo t22_f2_FieldInfo = 
{
	"Easy", &t22_0_0_32854, &t22_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t22_0_0_32854;
FieldInfo t22_f3_FieldInfo = 
{
	"Moderate", &t22_0_0_32854, &t22_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t22_0_0_32854;
FieldInfo t22_f4_FieldInfo = 
{
	"Hard", &t22_0_0_32854, &t22_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t22_0_0_32854;
FieldInfo t22_f5_FieldInfo = 
{
	"Impossible", &t22_0_0_32854, &t22_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t22_FIs[] =
{
	&t22_f1_FieldInfo,
	&t22_f2_FieldInfo,
	&t22_f3_FieldInfo,
	&t22_f4_FieldInfo,
	&t22_f5_FieldInfo,
	NULL
};
static const int32_t t22_f2_DefaultValueData = 0;
static Il2CppFieldDefaultValueEntry t22_f2_DefaultValue = 
{
	&t22_f2_FieldInfo, { (char*)&t22_f2_DefaultValueData, &t110_0_0_0 }};
static const int32_t t22_f3_DefaultValueData = 1;
static Il2CppFieldDefaultValueEntry t22_f3_DefaultValue = 
{
	&t22_f3_FieldInfo, { (char*)&t22_f3_DefaultValueData, &t110_0_0_0 }};
static const int32_t t22_f4_DefaultValueData = 2;
static Il2CppFieldDefaultValueEntry t22_f4_DefaultValue = 
{
	&t22_f4_FieldInfo, { (char*)&t22_f4_DefaultValueData, &t110_0_0_0 }};
static const int32_t t22_f5_DefaultValueData = 3;
static Il2CppFieldDefaultValueEntry t22_f5_DefaultValue = 
{
	&t22_f5_FieldInfo, { (char*)&t22_f5_DefaultValueData, &t110_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t22_FDVs[] = 
{
	&t22_f2_DefaultValue,
	&t22_f3_DefaultValue,
	&t22_f4_DefaultValue,
	&t22_f5_DefaultValue,
	NULL
};
static MethodInfo* t22_MIs[] =
{
	NULL
};
static MethodInfo* t22_VT[] =
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
static Il2CppInterfaceOffsetPair t22_IOs[] = 
{
	{ &t120_TI, 4},
	{ &t121_TI, 5},
	{ &t122_TI, 21},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType t22_0_0_0;
extern Il2CppType t22_1_0_0;
TypeInfo t22_TI = 
{
	&g_AssemblyU2DCSharp_dll_Image, NULL, "DifficultyLevel", "JewelMine.Engine", t22_MIs, NULL, t22_FIs, NULL, &t18_TI, NULL, NULL, &t110_TI, NULL, t22_VT, &EmptyCustomAttributesCache, &t110_TI, &t22_0_0_0, &t22_1_0_0, t22_IOs, NULL, NULL, t22_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t22)+ sizeof (Il2CppObject), sizeof (int32_t), sizeof(int32_t), 0, 0, -1, 257, 0, true, false, false, true, false, false, false, false, false, false, false, false, 0, 0, 5, 0, 0, 23, 0, 3};
#include "t23.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t23_TI;
#include "t23MD.h"

#include "t65.h"
extern TypeInfo t65_TI;
extern TypeInfo t15_TI;
#include "t65MD.h"
extern MethodInfo m222_MI;
extern MethodInfo m504_MI;


extern MethodInfo m32_MI;
 void m32 (t23 * __this, MethodInfo* method){
	{
		m460(__this, &m460_MI);
		return;
	}
}
extern MethodInfo m33_MI;
 bool m33 (t23 * __this, t15 * p0, MethodInfo* method){
	{
		t6 * L_0 = (__this->f0);
		t65 * L_1 = m222(L_0, &m222_MI);
		bool L_2 = (bool)VirtFuncInvoker1< bool, t15 * >::Invoke(&m504_MI, L_1, p0);
		return L_2;
	}
}
// Metadata Definition JewelMine.Engine.GameGroupCollisionDetector/<CheckMarkedCollisionGroupsStillValid>c__AnonStorey1
extern Il2CppType t6_0_0_3;
FieldInfo t23_f0_FieldInfo = 
{
	"logicUpdate", &t6_0_0_3, &t23_TI, offsetof(t23, f0), &EmptyCustomAttributesCache};
static FieldInfo* t23_FIs[] =
{
	&t23_f0_FieldInfo,
	NULL
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m32_MI = 
{
	".ctor", (methodPointerType)&m32, &t23_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 80, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t15_0_0_0;
static ParameterInfo t23_m33_ParameterInfos[] = 
{
	{"x", 0, 134217804, &EmptyCustomAttributesCache, &t15_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m33_MI = 
{
	"<>m__1", (methodPointerType)&m33, &t23_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t23_m33_ParameterInfos, &EmptyCustomAttributesCache, 131, 0, 255, 1, false, false, 81, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t23_MIs[] =
{
	&m32_MI,
	&m33_MI,
	NULL
};
static MethodInfo* t23_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
};
void t23_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t23__CustomAttributeCache = {
1,
NULL,
&t23_CustomAttributesCacheGenerator
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType t23_0_0_0;
extern Il2CppType t23_1_0_0;
struct t23;
extern TypeInfo t30_TI;
extern CustomAttributesCache t23__CustomAttributeCache;
TypeInfo t23_TI = 
{
	&g_AssemblyU2DCSharp_dll_Image, NULL, "<CheckMarkedCollisionGroupsStillValid>c__AnonStorey1", "", t23_MIs, NULL, t23_FIs, NULL, &t5_TI, NULL, &t30_TI, &t23_TI, NULL, t23_VT, &t23__CustomAttributeCache, &t23_TI, &t23_0_0_0, &t23_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t23), 0, -1, 0, 0, -1, 1048835, 0, false, false, false, false, false, false, false, false, false, false, false, false, 2, 0, 1, 0, 0, 4, 0, 0};
#include "t24.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t24_TI;
#include "t24MD.h"

#include "t26.h"
#include "t25.h"
#include "t26MD.h"
extern MethodInfo m155_MI;


extern MethodInfo m34_MI;
 void m34 (t24 * __this, MethodInfo* method){
	{
		m460(__this, &m460_MI);
		return;
	}
}
extern MethodInfo m35_MI;
 bool m35 (t24 * __this, t26 * p0, MethodInfo* method){
	{
		t25 * L_0 = m155(p0, &m155_MI);
		t25 * L_1 = (__this->f0);
		return ((((t25 *)L_0) == ((t25 *)L_1))? 1 : 0);
	}
}
// Metadata Definition JewelMine.Engine.GameGroupCollisionDetector/<FindSeconadryCollisionsByDirection>c__AnonStorey2
extern Il2CppType t25_0_0_3;
FieldInfo t24_f0_FieldInfo = 
{
	"searchJewel", &t25_0_0_3, &t24_TI, offsetof(t24, f0), &EmptyCustomAttributesCache};
static FieldInfo* t24_FIs[] =
{
	&t24_f0_FieldInfo,
	NULL
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m34_MI = 
{
	".ctor", (methodPointerType)&m34, &t24_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 82, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t26_0_0_0;
extern Il2CppType t26_0_0_0;
static ParameterInfo t24_m35_ParameterInfos[] = 
{
	{"x", 0, 134217805, &EmptyCustomAttributesCache, &t26_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m35_MI = 
{
	"<>m__23", (methodPointerType)&m35, &t24_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t24_m35_ParameterInfos, &EmptyCustomAttributesCache, 131, 0, 255, 1, false, false, 83, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t24_MIs[] =
{
	&m34_MI,
	&m35_MI,
	NULL
};
static MethodInfo* t24_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
};
void t24_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t24__CustomAttributeCache = {
1,
NULL,
&t24_CustomAttributesCacheGenerator
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType t24_0_0_0;
extern Il2CppType t24_1_0_0;
struct t24;
extern CustomAttributesCache t24__CustomAttributeCache;
TypeInfo t24_TI = 
{
	&g_AssemblyU2DCSharp_dll_Image, NULL, "<FindSeconadryCollisionsByDirection>c__AnonStorey2", "", t24_MIs, NULL, t24_FIs, NULL, &t5_TI, NULL, &t30_TI, &t24_TI, NULL, t24_VT, &t24__CustomAttributeCache, &t24_TI, &t24_0_0_0, &t24_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t24), 0, -1, 0, 0, -1, 1048835, 0, false, false, false, false, false, false, false, false, false, false, false, false, 2, 0, 1, 0, 0, 4, 0, 0};
#include "t27.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t27_TI;
#include "t27MD.h"

extern MethodInfo m153_MI;


extern MethodInfo m36_MI;
 void m36 (t27 * __this, MethodInfo* method){
	{
		m460(__this, &m460_MI);
		return;
	}
}
extern MethodInfo m37_MI;
 bool m37 (t27 * __this, t15 * p0, MethodInfo* method){
	{
		t25 * L_0 = (__this->f0);
		bool L_1 = m153(p0, L_0, &m153_MI);
		return L_1;
	}
}
// Metadata Definition JewelMine.Engine.GameGroupCollisionDetector/<IsAlreadyMarkedCollision>c__AnonStorey3
extern Il2CppType t25_0_0_3;
FieldInfo t27_f0_FieldInfo = 
{
	"target", &t25_0_0_3, &t27_TI, offsetof(t27, f0), &EmptyCustomAttributesCache};
static FieldInfo* t27_FIs[] =
{
	&t27_f0_FieldInfo,
	NULL
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m36_MI = 
{
	".ctor", (methodPointerType)&m36, &t27_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 84, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t15_0_0_0;
static ParameterInfo t27_m37_ParameterInfos[] = 
{
	{"x", 0, 134217806, &EmptyCustomAttributesCache, &t15_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m37_MI = 
{
	"<>m__24", (methodPointerType)&m37, &t27_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t27_m37_ParameterInfos, &EmptyCustomAttributesCache, 131, 0, 255, 1, false, false, 85, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t27_MIs[] =
{
	&m36_MI,
	&m37_MI,
	NULL
};
static MethodInfo* t27_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
};
void t27_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t27__CustomAttributeCache = {
1,
NULL,
&t27_CustomAttributesCacheGenerator
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType t27_0_0_0;
extern Il2CppType t27_1_0_0;
struct t27;
extern CustomAttributesCache t27__CustomAttributeCache;
TypeInfo t27_TI = 
{
	&g_AssemblyU2DCSharp_dll_Image, NULL, "<IsAlreadyMarkedCollision>c__AnonStorey3", "", t27_MIs, NULL, t27_FIs, NULL, &t5_TI, NULL, &t30_TI, &t27_TI, NULL, t27_VT, &t27__CustomAttributeCache, &t27_TI, &t27_0_0_0, &t27_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t27), 0, -1, 0, 0, -1, 1048835, 0, false, false, false, false, false, false, false, false, false, false, false, false, 2, 0, 1, 0, 0, 4, 0, 0};
#include "t28.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t28_TI;
#include "t28MD.h"

#include "Assembly-CSharp_ArrayTypes.h"
#include "t31.h"
#include "t123.h"
#include "t124.h"
#include "t30.h"
extern TypeInfo t123_TI;
#include "t125MD.h"
#include "t123MD.h"
#include "t30MD.h"
extern MethodInfo m505_MI;
extern MethodInfo m41_MI;
extern MethodInfo m506_MI;
extern MethodInfo m507_MI;
extern MethodInfo m55_MI;
struct t125;
#include "t125.h"
struct t125;
 bool m508_gshared (t5 * __this, t5* p0, t5 * p1, MethodInfo* method);
#define m508(__this, p0, p1, method) (bool)m508_gshared((t5 *)__this, (t5*)p0, (t5 *)p1, method)
#define m505(__this, p0, p1, method) (bool)m508_gshared((t5 *)__this, (t5*)p0, (t5 *)p1, method)


extern MethodInfo m38_MI;
 void m38 (t28 * __this, MethodInfo* method){
	{
		m460(__this, &m460_MI);
		return;
	}
}
extern MethodInfo m39_MI;
 bool m39 (t28 * __this, t15 * p0, MethodInfo* method){
	{
		t29* L_0 = (__this->f0);
		bool L_1 = m505(NULL, (t5*)(t5*)L_0, p0, &m505_MI);
		return L_1;
	}
}
extern MethodInfo m40_MI;
 void m40 (t28 * __this, t31 * p0, MethodInfo* method){
	{
		t37 * L_0 = m151(p0, &m151_MI);
		t124 L_1 = { &m41_MI };
		t123 * L_2 = (t123 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t123_TI));
		m506(L_2, __this, L_1, &m506_MI);
		m507(L_0, L_2, &m507_MI);
		return;
	}
}
 void m41 (t28 * __this, t26 * p0, MethodInfo* method){
	{
		t30 * L_0 = (__this->f1);
		m55(L_0, p0, &m55_MI);
		return;
	}
}
// Metadata Definition JewelMine.Engine.GameGroupCollisionDetector/<FinaliseCollisionGroups>c__AnonStorey4
extern Il2CppType t29_0_0_3;
FieldInfo t28_f0_FieldInfo = 
{
	"collisions", &t29_0_0_3, &t28_TI, offsetof(t28, f0), &EmptyCustomAttributesCache};
extern Il2CppType t30_0_0_3;
FieldInfo t28_f1_FieldInfo = 
{
	"<>f__this", &t30_0_0_3, &t28_TI, offsetof(t28, f1), &EmptyCustomAttributesCache};
static FieldInfo* t28_FIs[] =
{
	&t28_f0_FieldInfo,
	&t28_f1_FieldInfo,
	NULL
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m38_MI = 
{
	".ctor", (methodPointerType)&m38, &t28_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 86, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t15_0_0_0;
static ParameterInfo t28_m39_ParameterInfos[] = 
{
	{"x", 0, 134217807, &EmptyCustomAttributesCache, &t15_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m39_MI = 
{
	"<>m__25", (methodPointerType)&m39, &t28_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t28_m39_ParameterInfos, &EmptyCustomAttributesCache, 131, 0, 255, 1, false, false, 87, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t31_0_0_0;
extern Il2CppType t31_0_0_0;
static ParameterInfo t28_m40_ParameterInfos[] = 
{
	{"x", 0, 134217808, &EmptyCustomAttributesCache, &t31_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m40_MI = 
{
	"<>m__26", (methodPointerType)&m40, &t28_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t28_m40_ParameterInfos, &EmptyCustomAttributesCache, 131, 0, 255, 1, false, false, 88, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t26_0_0_0;
static ParameterInfo t28_m41_ParameterInfos[] = 
{
	{"y", 0, 134217809, &EmptyCustomAttributesCache, &t26_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m41_MI = 
{
	"<>m__27", (methodPointerType)&m41, &t28_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t28_m41_ParameterInfos, &EmptyCustomAttributesCache, 131, 0, 255, 1, false, false, 89, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t28_MIs[] =
{
	&m38_MI,
	&m39_MI,
	&m40_MI,
	&m41_MI,
	NULL
};
static MethodInfo* t28_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
};
void t28_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t28__CustomAttributeCache = {
1,
NULL,
&t28_CustomAttributesCacheGenerator
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType t28_0_0_0;
extern Il2CppType t28_1_0_0;
struct t28;
extern CustomAttributesCache t28__CustomAttributeCache;
TypeInfo t28_TI = 
{
	&g_AssemblyU2DCSharp_dll_Image, NULL, "<FinaliseCollisionGroups>c__AnonStorey4", "", t28_MIs, NULL, t28_FIs, NULL, &t5_TI, NULL, &t30_TI, &t28_TI, NULL, t28_VT, &t28__CustomAttributeCache, &t28_TI, &t28_0_0_0, &t28_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t28), 0, -1, 0, 0, -1, 1048835, 0, false, false, false, false, false, false, false, false, false, false, false, false, 4, 0, 2, 0, 0, 4, 0, 0};
#ifndef _MSC_VER
#else
#endif

#include "t32.h"
#include "t126.h"
#include "t127.h"
#include "t70.h"
#include "t68.h"
#include "t36.h"
#include "t128.h"
#include "t33.h"
#include "t34.h"
#include "t56.h"
#include "t35.h"
#include "t129.h"
#include "t130.h"
#include "t131.h"
extern TypeInfo t126_TI;
extern TypeInfo t127_TI;
extern TypeInfo t26_TI;
extern TypeInfo t132_TI;
extern TypeInfo t128_TI;
extern TypeInfo t33_TI;
extern TypeInfo t34_TI;
extern TypeInfo t36_TI;
extern TypeInfo t25_TI;
extern TypeInfo t114_TI;
extern TypeInfo t35_TI;
extern TypeInfo t129_TI;
extern TypeInfo t130_TI;
extern TypeInfo t131_TI;
#include "t32MD.h"
#include "t68MD.h"
#include "t126MD.h"
#include "t127MD.h"
#include "t128MD.h"
#include "t33MD.h"
#include "t34MD.h"
#include "t25MD.h"
#include "t56MD.h"
#include "t114MD.h"
#include "t36MD.h"
#include "t35MD.h"
#include "t129MD.h"
#include "t130MD.h"
#include "t131MD.h"
extern Il2CppType t25_0_0_0;
extern MethodInfo m509_MI;
extern MethodInfo m270_MI;
extern MethodInfo m330_MI;
extern MethodInfo m510_MI;
extern MethodInfo m511_MI;
extern MethodInfo m512_MI;
extern MethodInfo m513_MI;
extern MethodInfo m157_MI;
extern MethodInfo m338_MI;
extern MethodInfo m514_MI;
extern MethodInfo m515_MI;
extern MethodInfo m516_MI;
extern MethodInfo m517_MI;
extern MethodInfo m518_MI;
extern MethodInfo m519_MI;
extern MethodInfo m520_MI;
extern MethodInfo m43_MI;
extern MethodInfo m45_MI;
extern MethodInfo m47_MI;
extern MethodInfo m220_MI;
extern MethodInfo m521_MI;
extern MethodInfo m56_MI;
extern MethodInfo m522_MI;
extern MethodInfo m523_MI;
extern MethodInfo m524_MI;
extern MethodInfo m57_MI;
extern MethodInfo m525_MI;
extern MethodInfo m58_MI;
extern MethodInfo m526_MI;
extern MethodInfo m46_MI;
extern MethodInfo m59_MI;
extern MethodInfo m60_MI;
extern MethodInfo m61_MI;
extern MethodInfo m62_MI;
extern MethodInfo m63_MI;
extern MethodInfo m64_MI;
extern MethodInfo m65_MI;
extern MethodInfo m66_MI;
extern MethodInfo m67_MI;
extern MethodInfo m68_MI;
extern MethodInfo m69_MI;
extern MethodInfo m70_MI;
extern MethodInfo m71_MI;
extern MethodInfo m48_MI;
extern MethodInfo m527_MI;
extern MethodInfo m283_MI;
extern MethodInfo m53_MI;
extern MethodInfo m328_MI;
extern MethodInfo m298_MI;
extern MethodInfo m154_MI;
extern MethodInfo m528_MI;
extern MethodInfo m341_MI;
extern MethodInfo m324_MI;
extern MethodInfo m326_MI;
extern MethodInfo m529_MI;
extern MethodInfo m336_MI;
extern MethodInfo m530_MI;
extern MethodInfo m531_MI;
extern MethodInfo m532_MI;
extern MethodInfo m316_MI;
extern MethodInfo m320_MI;
extern MethodInfo m160_MI;
extern MethodInfo m72_MI;
extern MethodInfo m73_MI;
extern MethodInfo m49_MI;
extern MethodInfo m533_MI;
extern MethodInfo m74_MI;
extern MethodInfo m75_MI;
extern MethodInfo m76_MI;
extern MethodInfo m77_MI;
extern MethodInfo m78_MI;
extern MethodInfo m79_MI;
extern MethodInfo m80_MI;
extern MethodInfo m534_MI;
extern MethodInfo m535_MI;
extern MethodInfo m536_MI;
extern MethodInfo m537_MI;
extern MethodInfo m81_MI;
extern MethodInfo m82_MI;
extern MethodInfo m51_MI;
extern MethodInfo m83_MI;
extern MethodInfo m84_MI;
extern MethodInfo m85_MI;
extern MethodInfo m86_MI;
extern MethodInfo m87_MI;
extern MethodInfo m88_MI;
extern MethodInfo m538_MI;
extern MethodInfo m50_MI;
extern MethodInfo m52_MI;
extern MethodInfo m539_MI;
extern MethodInfo m540_MI;
extern MethodInfo m541_MI;
extern MethodInfo m542_MI;
extern MethodInfo m543_MI;
extern MethodInfo m334_MI;
extern MethodInfo m544_MI;
extern MethodInfo m545_MI;
extern MethodInfo m546_MI;
extern MethodInfo m339_MI;
extern MethodInfo m164_MI;
extern MethodInfo m166_MI;
struct t125;
 t5* m523 (t5 * __this, t5* p0, t33 * p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
struct t125;
#include "t133.h"
struct t125;
 t5 * m547_gshared (t5 * __this, t5* p0, MethodInfo* method);
#define m547(__this, p0, method) (t5 *)m547_gshared((t5 *)__this, (t5*)p0, method)
#define m524(__this, p0, method) (t26 *)m547_gshared((t5 *)__this, (t5*)p0, method)
struct t125;
 t5* m525 (t5 * __this, t5* p0, t33 * p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
struct t125;
#include "t134.h"
#include "t135.h"
struct t125;
#include "t136.h"
#include "t137.h"
 t5* m548_gshared (t5 * __this, t5* p0, t136 * p1, t5* p2, MethodInfo* method);
#define m548(__this, p0, p1, p2, method) (t5*)m548_gshared((t5 *)__this, (t5*)p0, (t136 *)p1, (t5*)p2, method)
#define m535(__this, p0, p1, p2, method) (t5*)m548_gshared((t5 *)__this, (t5*)p0, (t136 *)p1, (t5*)p2, method)
struct t125;
#include "t138.h"
#include "t139.h"
struct t125;
#include "t140.h"
#include "t141.h"
 t5 * m549_gshared (t5 * __this, t5* p0, MethodInfo* method);
#define m549(__this, p0, method) (t5 *)m549_gshared((t5 *)__this, (t5*)p0, method)
#define m536(__this, p0, method) (t15 *)m549_gshared((t5 *)__this, (t5*)p0, method)
struct t125;
struct t125;
 bool m550_gshared (t5 * __this, t5* p0, t141 * p1, MethodInfo* method);
#define m550(__this, p0, p1, method) (bool)m550_gshared((t5 *)__this, (t5*)p0, (t141 *)p1, method)
#define m540(__this, p0, p1, method) (bool)m550_gshared((t5 *)__this, (t5*)p0, (t141 *)p1, method)
struct t125;
#define m542(__this, p0, p1, method) (bool)m550_gshared((t5 *)__this, (t5*)p0, (t141 *)p1, method)


extern MethodInfo m42_MI;
 void m42 (t30 * __this, t32 * p0, MethodInfo* method){
	{
		m460(__this, &m460_MI);
		__this->f0 = p0;
		return;
	}
}
 void m43 (t30 * __this, t6 * p0, MethodInfo* method){
	t15 * V_0 = {0};
	t126  V_1 = {0};
	t26 * V_2 = {0};
	t127  V_3 = {0};
	t70 * V_4 = {0};
	t23 * V_5 = {0};
	int32_t leaveInstructions[2] = {0};
	t142 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t142 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	{
		t23 * L_0 = (t23 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t23_TI));
		m32(L_0, &m32_MI);
		V_5 = L_0;
		V_5->f0 = p0;
		t6 * L_1 = (V_5->f0);
		t65 * L_2 = m222(L_1, &m222_MI);
		VirtActionInvoker0::Invoke(&m509_MI, L_2);
		t32 * L_3 = (__this->f0);
		t68 * L_4 = m270(L_3, &m270_MI);
		t65 * L_5 = m330(L_4, &m330_MI);
		t126  L_6 = m510(L_5, &m510_MI);
		V_1 = L_6;
	}

IL_0036:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00bc;
		}

IL_003b:
		{
			t15 * L_7 = m511((&V_1), &m511_MI);
			V_0 = L_7;
			t37 * L_8 = m151(V_0, &m151_MI);
			t127  L_9 = m512(L_8, &m512_MI);
			V_3 = L_9;
		}

IL_004f:
		try
		{ // begin try (depth: 2)
			{
				goto IL_009f;
			}

IL_0054:
			{
				t26 * L_10 = m513((&V_3), &m513_MI);
				V_2 = L_10;
				t32 * L_11 = (__this->f0);
				t68 * L_12 = m270(L_11, &m270_MI);
				t36 * L_13 = m157(V_2, &m157_MI);
				t70 * L_14 = m338(L_12, L_13, &m338_MI);
				V_4 = L_14;
				if (!V_4)
				{
					goto IL_0088;
				}
			}

IL_007b:
			{
				t25 * L_15 = m155(V_2, &m155_MI);
				if ((((t70 *)V_4) == ((t25 *)L_15)))
				{
					goto IL_009f;
				}
			}

IL_0088:
			{
				t6 * L_16 = (V_5->f0);
				t65 * L_17 = m222(L_16, &m222_MI);
				VirtActionInvoker1< t15 * >::Invoke(&m514_MI, L_17, V_0);
				goto IL_00ab;
			}

IL_009f:
			{
				bool L_18 = m515((&V_3), &m515_MI);
				if (L_18)
				{
					goto IL_0054;
				}
			}

IL_00ab:
			{
				// IL_00ab: leave IL_00bc
				leaveInstructions[1] = 0xBC; // 2
				THROW_SENTINEL(IL_00bc);
				// finally target depth: 2
			}
		} // end try (depth: 2)
		catch(Il2CppFinallySentinel& e)
		{
			goto IL_00b0;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (t142 *)e.ex;
			goto IL_00b0;
		}

IL_00b0:
		{ // begin finally (depth: 2)
			t127  L_19 = V_3;
			t5 * L_20 = Box(InitializedTypeInfo(&t127_TI), &L_19);
			InterfaceActionInvoker0::Invoke(&m516_MI, L_20);
			// finally node depth: 2
			switch (leaveInstructions[1])
			{
				case 0xBC:
					goto IL_00bc;
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
		} // end finally (depth: 2)

IL_00bc:
		{
			bool L_21 = m517((&V_1), &m517_MI);
			if (L_21)
			{
				goto IL_003b;
			}
		}

IL_00c8:
		{
			// IL_00c8: leave IL_00d9
			leaveInstructions[0] = 0xD9; // 1
			THROW_SENTINEL(IL_00d9);
			// finally target depth: 1
		}
	} // end try (depth: 1)
	catch(Il2CppFinallySentinel& e)
	{
		goto IL_00cd;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t142 *)e.ex;
		goto IL_00cd;
	}

IL_00cd:
	{ // begin finally (depth: 1)
		t126  L_22 = V_1;
		t5 * L_23 = Box(InitializedTypeInfo(&t126_TI), &L_22);
		InterfaceActionInvoker0::Invoke(&m516_MI, L_23);
		// finally node depth: 1
		switch (leaveInstructions[0])
		{
			case 0xD9:
				goto IL_00d9;
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

IL_00d9:
	{
		t6 * L_24 = (V_5->f0);
		t65 * L_25 = m222(L_24, &m222_MI);
		int32_t L_26 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m518_MI, L_25);
		if ((((int32_t)L_26) <= ((int32_t)0)))
		{
			goto IL_0113;
		}
	}
	{
		t32 * L_27 = (__this->f0);
		t68 * L_28 = m270(L_27, &m270_MI);
		t65 * L_29 = m330(L_28, &m330_MI);
		t124 L_30 = { &m33_MI };
		t128 * L_31 = (t128 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t128_TI));
		m519(L_31, V_5, L_30, &m519_MI);
		m520(L_29, L_31, &m520_MI);
	}

IL_0113:
	{
		return;
	}
}
extern MethodInfo m44_MI;
 void m44 (t30 * __this, t6 * p0, MethodInfo* method){
	{
		m43(__this, p0, &m43_MI);
		m45(__this, &m45_MI);
		m47(__this, &m47_MI);
		t65 * L_0 = m220(p0, &m220_MI);
		VirtActionInvoker0::Invoke(&m509_MI, L_0);
		t65 * L_1 = m220(p0, &m220_MI);
		t32 * L_2 = (__this->f0);
		t68 * L_3 = m270(L_2, &m270_MI);
		t65 * L_4 = m330(L_3, &m330_MI);
		m521(L_1, L_4, &m521_MI);
		return;
	}
}
 void m45 (t30 * __this, MethodInfo* method){
	t15 * V_0 = {0};
	t126  V_1 = {0};
	t26 * V_2 = {0};
	t26 * V_3 = {0};
	t26 * V_4 = {0};
	t26 * V_5 = {0};
	t26 * V_6 = {0};
	t26 * V_7 = {0};
	t26 * V_8 = {0};
	t26 * V_9 = {0};
	int32_t V_10 = {0};
	int32_t leaveInstructions[1] = {0};
	t142 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t142 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	t37 * G_B9_0 = {0};
	t37 * G_B8_0 = {0};
	t37 * G_B11_0 = {0};
	t37 * G_B10_0 = {0};
	t36 * G_B13_0 = {0};
	t25 * G_B13_1 = {0};
	t30 * G_B13_2 = {0};
	t36 * G_B12_0 = {0};
	t25 * G_B12_1 = {0};
	t30 * G_B12_2 = {0};
	t36 * G_B15_0 = {0};
	t25 * G_B15_1 = {0};
	t30 * G_B15_2 = {0};
	t36 * G_B14_0 = {0};
	t25 * G_B14_1 = {0};
	t30 * G_B14_2 = {0};
	t37 * G_B18_0 = {0};
	t37 * G_B17_0 = {0};
	t37 * G_B20_0 = {0};
	t37 * G_B19_0 = {0};
	t36 * G_B22_0 = {0};
	t25 * G_B22_1 = {0};
	t30 * G_B22_2 = {0};
	t36 * G_B21_0 = {0};
	t25 * G_B21_1 = {0};
	t30 * G_B21_2 = {0};
	t36 * G_B24_0 = {0};
	t25 * G_B24_1 = {0};
	t30 * G_B24_2 = {0};
	t36 * G_B23_0 = {0};
	t25 * G_B23_1 = {0};
	t30 * G_B23_2 = {0};
	t37 * G_B27_0 = {0};
	t37 * G_B26_0 = {0};
	t37 * G_B29_0 = {0};
	t37 * G_B28_0 = {0};
	t36 * G_B31_0 = {0};
	t25 * G_B31_1 = {0};
	t30 * G_B31_2 = {0};
	t36 * G_B30_0 = {0};
	t25 * G_B30_1 = {0};
	t30 * G_B30_2 = {0};
	t36 * G_B33_0 = {0};
	t25 * G_B33_1 = {0};
	t30 * G_B33_2 = {0};
	t36 * G_B32_0 = {0};
	t25 * G_B32_1 = {0};
	t30 * G_B32_2 = {0};
	t37 * G_B36_0 = {0};
	t37 * G_B35_0 = {0};
	t37 * G_B38_0 = {0};
	t37 * G_B37_0 = {0};
	t36 * G_B40_0 = {0};
	t25 * G_B40_1 = {0};
	t30 * G_B40_2 = {0};
	t36 * G_B39_0 = {0};
	t25 * G_B39_1 = {0};
	t30 * G_B39_2 = {0};
	t36 * G_B42_0 = {0};
	t25 * G_B42_1 = {0};
	t30 * G_B42_2 = {0};
	t36 * G_B41_0 = {0};
	t25 * G_B41_1 = {0};
	t30 * G_B41_2 = {0};
	{
		t32 * L_0 = (__this->f0);
		t68 * L_1 = m270(L_0, &m270_MI);
		t65 * L_2 = m330(L_1, &m330_MI);
		t126  L_3 = m510(L_2, &m510_MI);
		V_1 = L_3;
	}

IL_0016:
	try
	{ // begin try (depth: 1)
		{
			goto IL_037f;
		}

IL_001b:
		{
			t15 * L_4 = m511((&V_1), &m511_MI);
			V_0 = L_4;
			if (!V_0)
			{
				goto IL_0039;
			}
		}

IL_0029:
		{
			t37 * L_5 = m151(V_0, &m151_MI);
			int32_t L_6 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m481_MI, L_5);
			if (L_6)
			{
				goto IL_003e;
			}
		}

IL_0039:
		{
			goto IL_037f;
		}

IL_003e:
		{
			int32_t L_7 = m319(V_0, &m319_MI);
			V_10 = L_7;
			if (V_10 == 0)
			{
				goto IL_0123;
			}
			if (V_10 == 1)
			{
				goto IL_0062;
			}
			if (V_10 == 2)
			{
				goto IL_01ea;
			}
			if (V_10 == 3)
			{
				goto IL_02b1;
			}
		}

IL_005d:
		{
			goto IL_0378;
		}

IL_0062:
		{
			t37 * L_8 = m151(V_0, &m151_MI);
			G_B8_0 = L_8;
			if ((((t30_SFs*)InitializedTypeInfo(&t30_TI)->static_fields)->f1))
			{
				G_B9_0 = L_8;
				goto IL_0080;
			}
		}

IL_006f:
		{
			t124 L_9 = { &m56_MI };
			t33 * L_10 = (t33 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t33_TI));
			m522(L_10, NULL, L_9, &m522_MI);
			((t30_SFs*)InitializedTypeInfo(&t30_TI)->static_fields)->f1 = L_10;
			G_B9_0 = G_B8_0;
		}

IL_0080:
		{
			t5* L_11 = m523(NULL, G_B9_0, (((t30_SFs*)InitializedTypeInfo(&t30_TI)->static_fields)->f1), &m523_MI);
			t26 * L_12 = m524(NULL, L_11, &m524_MI);
			V_2 = L_12;
			t37 * L_13 = m151(V_0, &m151_MI);
			G_B10_0 = L_13;
			if ((((t30_SFs*)InitializedTypeInfo(&t30_TI)->static_fields)->f2))
			{
				G_B11_0 = L_13;
				goto IL_00ae;
			}
		}

IL_009d:
		{
			t124 L_14 = { &m57_MI };
			t33 * L_15 = (t33 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t33_TI));
			m522(L_15, NULL, L_14, &m522_MI);
			((t30_SFs*)InitializedTypeInfo(&t30_TI)->static_fields)->f2 = L_15;
			G_B11_0 = G_B10_0;
		}

IL_00ae:
		{
			t5* L_16 = m525(NULL, G_B11_0, (((t30_SFs*)InitializedTypeInfo(&t30_TI)->static_fields)->f2), &m525_MI);
			t26 * L_17 = m524(NULL, L_16, &m524_MI);
			V_3 = L_17;
			t25 * L_18 = m155(V_3, &m155_MI);
			t36 * L_19 = m157(V_3, &m157_MI);
			G_B12_0 = L_19;
			G_B12_1 = L_18;
			G_B12_2 = __this;
			if ((((t30_SFs*)InitializedTypeInfo(&t30_TI)->static_fields)->f3))
			{
				G_B13_0 = L_19;
				G_B13_1 = L_18;
				G_B13_2 = __this;
				goto IL_00e3;
			}
		}

IL_00d2:
		{
			t124 L_20 = { &m58_MI };
			t34 * L_21 = (t34 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t34_TI));
			m526(L_21, NULL, L_20, &m526_MI);
			((t30_SFs*)InitializedTypeInfo(&t30_TI)->static_fields)->f3 = L_21;
			G_B13_0 = G_B12_0;
			G_B13_1 = G_B12_1;
			G_B13_2 = G_B12_2;
		}

IL_00e3:
		{
			m46(G_B13_2, G_B13_1, G_B13_0, (((t30_SFs*)InitializedTypeInfo(&t30_TI)->static_fields)->f3), V_0, &m46_MI);
			t25 * L_22 = m155(V_2, &m155_MI);
			t36 * L_23 = m157(V_2, &m157_MI);
			G_B14_0 = L_23;
			G_B14_1 = L_22;
			G_B14_2 = __this;
			if ((((t30_SFs*)InitializedTypeInfo(&t30_TI)->static_fields)->f4))
			{
				G_B15_0 = L_23;
				G_B15_1 = L_22;
				G_B15_2 = __this;
				goto IL_0113;
			}
		}

IL_0102:
		{
			t124 L_24 = { &m59_MI };
			t34 * L_25 = (t34 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t34_TI));
			m526(L_25, NULL, L_24, &m526_MI);
			((t30_SFs*)InitializedTypeInfo(&t30_TI)->static_fields)->f4 = L_25;
			G_B15_0 = G_B14_0;
			G_B15_1 = G_B14_1;
			G_B15_2 = G_B14_2;
		}

IL_0113:
		{
			m46(G_B15_2, G_B15_1, G_B15_0, (((t30_SFs*)InitializedTypeInfo(&t30_TI)->static_fields)->f4), V_0, &m46_MI);
			goto IL_0378;
		}

IL_0123:
		{
			t37 * L_26 = m151(V_0, &m151_MI);
			G_B17_0 = L_26;
			if ((((t30_SFs*)InitializedTypeInfo(&t30_TI)->static_fields)->f5))
			{
				G_B18_0 = L_26;
				goto IL_0141;
			}
		}

IL_0130:
		{
			t124 L_27 = { &m60_MI };
			t33 * L_28 = (t33 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t33_TI));
			m522(L_28, NULL, L_27, &m522_MI);
			((t30_SFs*)InitializedTypeInfo(&t30_TI)->static_fields)->f5 = L_28;
			G_B18_0 = G_B17_0;
		}

IL_0141:
		{
			t5* L_29 = m523(NULL, G_B18_0, (((t30_SFs*)InitializedTypeInfo(&t30_TI)->static_fields)->f5), &m523_MI);
			t26 * L_30 = m524(NULL, L_29, &m524_MI);
			V_4 = L_30;
			t37 * L_31 = m151(V_0, &m151_MI);
			G_B19_0 = L_31;
			if ((((t30_SFs*)InitializedTypeInfo(&t30_TI)->static_fields)->f6))
			{
				G_B20_0 = L_31;
				goto IL_0170;
			}
		}

IL_015f:
		{
			t124 L_32 = { &m61_MI };
			t33 * L_33 = (t33 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t33_TI));
			m522(L_33, NULL, L_32, &m522_MI);
			((t30_SFs*)InitializedTypeInfo(&t30_TI)->static_fields)->f6 = L_33;
			G_B20_0 = G_B19_0;
		}

IL_0170:
		{
			t5* L_34 = m525(NULL, G_B20_0, (((t30_SFs*)InitializedTypeInfo(&t30_TI)->static_fields)->f6), &m525_MI);
			t26 * L_35 = m524(NULL, L_34, &m524_MI);
			V_5 = L_35;
			t25 * L_36 = m155(V_5, &m155_MI);
			t36 * L_37 = m157(V_5, &m157_MI);
			G_B21_0 = L_37;
			G_B21_1 = L_36;
			G_B21_2 = __this;
			if ((((t30_SFs*)InitializedTypeInfo(&t30_TI)->static_fields)->f7))
			{
				G_B22_0 = L_37;
				G_B22_1 = L_36;
				G_B22_2 = __this;
				goto IL_01a8;
			}
		}

IL_0197:
		{
			t124 L_38 = { &m62_MI };
			t34 * L_39 = (t34 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t34_TI));
			m526(L_39, NULL, L_38, &m526_MI);
			((t30_SFs*)InitializedTypeInfo(&t30_TI)->static_fields)->f7 = L_39;
			G_B22_0 = G_B21_0;
			G_B22_1 = G_B21_1;
			G_B22_2 = G_B21_2;
		}

IL_01a8:
		{
			m46(G_B22_2, G_B22_1, G_B22_0, (((t30_SFs*)InitializedTypeInfo(&t30_TI)->static_fields)->f7), V_0, &m46_MI);
			t25 * L_40 = m155(V_4, &m155_MI);
			t36 * L_41 = m157(V_4, &m157_MI);
			G_B23_0 = L_41;
			G_B23_1 = L_40;
			G_B23_2 = __this;
			if ((((t30_SFs*)InitializedTypeInfo(&t30_TI)->static_fields)->f8))
			{
				G_B24_0 = L_41;
				G_B24_1 = L_40;
				G_B24_2 = __this;
				goto IL_01da;
			}
		}

IL_01c9:
		{
			t124 L_42 = { &m63_MI };
			t34 * L_43 = (t34 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t34_TI));
			m526(L_43, NULL, L_42, &m526_MI);
			((t30_SFs*)InitializedTypeInfo(&t30_TI)->static_fields)->f8 = L_43;
			G_B24_0 = G_B23_0;
			G_B24_1 = G_B23_1;
			G_B24_2 = G_B23_2;
		}

IL_01da:
		{
			m46(G_B24_2, G_B24_1, G_B24_0, (((t30_SFs*)InitializedTypeInfo(&t30_TI)->static_fields)->f8), V_0, &m46_MI);
			goto IL_0378;
		}

IL_01ea:
		{
			t37 * L_44 = m151(V_0, &m151_MI);
			G_B26_0 = L_44;
			if ((((t30_SFs*)InitializedTypeInfo(&t30_TI)->static_fields)->f9))
			{
				G_B27_0 = L_44;
				goto IL_0208;
			}
		}

IL_01f7:
		{
			t124 L_45 = { &m64_MI };
			t33 * L_46 = (t33 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t33_TI));
			m522(L_46, NULL, L_45, &m522_MI);
			((t30_SFs*)InitializedTypeInfo(&t30_TI)->static_fields)->f9 = L_46;
			G_B27_0 = G_B26_0;
		}

IL_0208:
		{
			t5* L_47 = m523(NULL, G_B27_0, (((t30_SFs*)InitializedTypeInfo(&t30_TI)->static_fields)->f9), &m523_MI);
			t26 * L_48 = m524(NULL, L_47, &m524_MI);
			V_6 = L_48;
			t37 * L_49 = m151(V_0, &m151_MI);
			G_B28_0 = L_49;
			if ((((t30_SFs*)InitializedTypeInfo(&t30_TI)->static_fields)->f10))
			{
				G_B29_0 = L_49;
				goto IL_0237;
			}
		}

IL_0226:
		{
			t124 L_50 = { &m65_MI };
			t33 * L_51 = (t33 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t33_TI));
			m522(L_51, NULL, L_50, &m522_MI);
			((t30_SFs*)InitializedTypeInfo(&t30_TI)->static_fields)->f10 = L_51;
			G_B29_0 = G_B28_0;
		}

IL_0237:
		{
			t5* L_52 = m525(NULL, G_B29_0, (((t30_SFs*)InitializedTypeInfo(&t30_TI)->static_fields)->f10), &m525_MI);
			t26 * L_53 = m524(NULL, L_52, &m524_MI);
			V_7 = L_53;
			t25 * L_54 = m155(V_7, &m155_MI);
			t36 * L_55 = m157(V_7, &m157_MI);
			G_B30_0 = L_55;
			G_B30_1 = L_54;
			G_B30_2 = __this;
			if ((((t30_SFs*)InitializedTypeInfo(&t30_TI)->static_fields)->f11))
			{
				G_B31_0 = L_55;
				G_B31_1 = L_54;
				G_B31_2 = __this;
				goto IL_026f;
			}
		}

IL_025e:
		{
			t124 L_56 = { &m66_MI };
			t34 * L_57 = (t34 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t34_TI));
			m526(L_57, NULL, L_56, &m526_MI);
			((t30_SFs*)InitializedTypeInfo(&t30_TI)->static_fields)->f11 = L_57;
			G_B31_0 = G_B30_0;
			G_B31_1 = G_B30_1;
			G_B31_2 = G_B30_2;
		}

IL_026f:
		{
			m46(G_B31_2, G_B31_1, G_B31_0, (((t30_SFs*)InitializedTypeInfo(&t30_TI)->static_fields)->f11), V_0, &m46_MI);
			t25 * L_58 = m155(V_6, &m155_MI);
			t36 * L_59 = m157(V_6, &m157_MI);
			G_B32_0 = L_59;
			G_B32_1 = L_58;
			G_B32_2 = __this;
			if ((((t30_SFs*)InitializedTypeInfo(&t30_TI)->static_fields)->f12))
			{
				G_B33_0 = L_59;
				G_B33_1 = L_58;
				G_B33_2 = __this;
				goto IL_02a1;
			}
		}

IL_0290:
		{
			t124 L_60 = { &m67_MI };
			t34 * L_61 = (t34 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t34_TI));
			m526(L_61, NULL, L_60, &m526_MI);
			((t30_SFs*)InitializedTypeInfo(&t30_TI)->static_fields)->f12 = L_61;
			G_B33_0 = G_B32_0;
			G_B33_1 = G_B32_1;
			G_B33_2 = G_B32_2;
		}

IL_02a1:
		{
			m46(G_B33_2, G_B33_1, G_B33_0, (((t30_SFs*)InitializedTypeInfo(&t30_TI)->static_fields)->f12), V_0, &m46_MI);
			goto IL_0378;
		}

IL_02b1:
		{
			t37 * L_62 = m151(V_0, &m151_MI);
			G_B35_0 = L_62;
			if ((((t30_SFs*)InitializedTypeInfo(&t30_TI)->static_fields)->f13))
			{
				G_B36_0 = L_62;
				goto IL_02cf;
			}
		}

IL_02be:
		{
			t124 L_63 = { &m68_MI };
			t33 * L_64 = (t33 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t33_TI));
			m522(L_64, NULL, L_63, &m522_MI);
			((t30_SFs*)InitializedTypeInfo(&t30_TI)->static_fields)->f13 = L_64;
			G_B36_0 = G_B35_0;
		}

IL_02cf:
		{
			t5* L_65 = m523(NULL, G_B36_0, (((t30_SFs*)InitializedTypeInfo(&t30_TI)->static_fields)->f13), &m523_MI);
			t26 * L_66 = m524(NULL, L_65, &m524_MI);
			V_8 = L_66;
			t37 * L_67 = m151(V_0, &m151_MI);
			G_B37_0 = L_67;
			if ((((t30_SFs*)InitializedTypeInfo(&t30_TI)->static_fields)->f14))
			{
				G_B38_0 = L_67;
				goto IL_02fe;
			}
		}

IL_02ed:
		{
			t124 L_68 = { &m69_MI };
			t33 * L_69 = (t33 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t33_TI));
			m522(L_69, NULL, L_68, &m522_MI);
			((t30_SFs*)InitializedTypeInfo(&t30_TI)->static_fields)->f14 = L_69;
			G_B38_0 = G_B37_0;
		}

IL_02fe:
		{
			t5* L_70 = m525(NULL, G_B38_0, (((t30_SFs*)InitializedTypeInfo(&t30_TI)->static_fields)->f14), &m525_MI);
			t26 * L_71 = m524(NULL, L_70, &m524_MI);
			V_9 = L_71;
			t25 * L_72 = m155(V_9, &m155_MI);
			t36 * L_73 = m157(V_9, &m157_MI);
			G_B39_0 = L_73;
			G_B39_1 = L_72;
			G_B39_2 = __this;
			if ((((t30_SFs*)InitializedTypeInfo(&t30_TI)->static_fields)->f15))
			{
				G_B40_0 = L_73;
				G_B40_1 = L_72;
				G_B40_2 = __this;
				goto IL_0336;
			}
		}

IL_0325:
		{
			t124 L_74 = { &m70_MI };
			t34 * L_75 = (t34 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t34_TI));
			m526(L_75, NULL, L_74, &m526_MI);
			((t30_SFs*)InitializedTypeInfo(&t30_TI)->static_fields)->f15 = L_75;
			G_B40_0 = G_B39_0;
			G_B40_1 = G_B39_1;
			G_B40_2 = G_B39_2;
		}

IL_0336:
		{
			m46(G_B40_2, G_B40_1, G_B40_0, (((t30_SFs*)InitializedTypeInfo(&t30_TI)->static_fields)->f15), V_0, &m46_MI);
			t25 * L_76 = m155(V_8, &m155_MI);
			t36 * L_77 = m157(V_8, &m157_MI);
			G_B41_0 = L_77;
			G_B41_1 = L_76;
			G_B41_2 = __this;
			if ((((t30_SFs*)InitializedTypeInfo(&t30_TI)->static_fields)->f16))
			{
				G_B42_0 = L_77;
				G_B42_1 = L_76;
				G_B42_2 = __this;
				goto IL_0368;
			}
		}

IL_0357:
		{
			t124 L_78 = { &m71_MI };
			t34 * L_79 = (t34 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t34_TI));
			m526(L_79, NULL, L_78, &m526_MI);
			((t30_SFs*)InitializedTypeInfo(&t30_TI)->static_fields)->f16 = L_79;
			G_B42_0 = G_B41_0;
			G_B42_1 = G_B41_1;
			G_B42_2 = G_B41_2;
		}

IL_0368:
		{
			m46(G_B42_2, G_B42_1, G_B42_0, (((t30_SFs*)InitializedTypeInfo(&t30_TI)->static_fields)->f16), V_0, &m46_MI);
			goto IL_0378;
		}

IL_0378:
		{
			m48(__this, V_0, &m48_MI);
		}

IL_037f:
		{
			bool L_80 = m517((&V_1), &m517_MI);
			if (L_80)
			{
				goto IL_001b;
			}
		}

IL_038b:
		{
			// IL_038b: leave IL_039c
			leaveInstructions[0] = 0x39C; // 1
			THROW_SENTINEL(IL_039c);
			// finally target depth: 1
		}
	} // end try (depth: 1)
	catch(Il2CppFinallySentinel& e)
	{
		goto IL_0390;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t142 *)e.ex;
		goto IL_0390;
	}

IL_0390:
	{ // begin finally (depth: 1)
		t126  L_81 = V_1;
		t5 * L_82 = Box(InitializedTypeInfo(&t126_TI), &L_81);
		InterfaceActionInvoker0::Invoke(&m516_MI, L_82);
		// finally node depth: 1
		switch (leaveInstructions[0])
		{
			case 0x39C:
				goto IL_039c;
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

IL_039c:
	{
		return;
	}
}
 void m46 (t30 * __this, t25 * p0, t36 * p1, t34 * p2, t15 * p3, MethodInfo* method){
	t36 * V_0 = {0};
	t25 * V_1 = {0};
	{
		t36 * L_0 = (t36 *)VirtFuncInvoker1< t36 *, t36 * >::Invoke(&m527_MI, p2, p1);
		V_0 = L_0;
		goto IL_00d1;
	}

IL_000d:
	{
		t32 * L_1 = (__this->f0);
		t68 * L_2 = m270(L_1, &m270_MI);
		t70 * L_3 = m338(L_2, V_0, &m338_MI);
		if (!L_3)
		{
			goto IL_00c4;
		}
	}
	{
		t32 * L_4 = (__this->f0);
		t68 * L_5 = m270(L_4, &m270_MI);
		t70 * L_6 = m338(L_5, V_0, &m338_MI);
		if (!((t25 *)IsInst(L_6, InitializedTypeInfo(&t25_TI))))
		{
			goto IL_00c4;
		}
	}
	{
		t32 * L_7 = (__this->f0);
		t68 * L_8 = m270(L_7, &m270_MI);
		t70 * L_9 = m338(L_8, V_0, &m338_MI);
		V_1 = ((t25 *)Castclass(L_9, InitializedTypeInfo(&t25_TI)));
		int32_t L_10 = m283(V_1, &m283_MI);
		int32_t L_11 = m283(p0, &m283_MI);
		if ((((uint32_t)L_10) != ((uint32_t)L_11)))
		{
			goto IL_00ba;
		}
	}
	{
		bool L_12 = m53(__this, V_1, &m53_MI);
		if (L_12)
		{
			goto IL_00ba;
		}
	}
	{
		t32 * L_13 = (__this->f0);
		t68 * L_14 = m270(L_13, &m270_MI);
		t56 * L_15 = m328(L_14, &m328_MI);
		if (!L_15)
		{
			goto IL_00a2;
		}
	}
	{
		t32 * L_16 = (__this->f0);
		t68 * L_17 = m270(L_16, &m270_MI);
		t56 * L_18 = m328(L_17, &m328_MI);
		bool L_19 = m298(L_18, V_1, &m298_MI);
		if (L_19)
		{
			goto IL_00ba;
		}
	}

IL_00a2:
	{
		t37 * L_20 = m151(p3, &m151_MI);
		t26 * L_21 = (t26 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t26_TI));
		m154(L_21, V_1, V_0, &m154_MI);
		VirtActionInvoker1< t26 * >::Invoke(&m528_MI, L_20, L_21);
		goto IL_00bf;
	}

IL_00ba:
	{
		goto IL_00e7;
	}

IL_00bf:
	{
		goto IL_00c9;
	}

IL_00c4:
	{
		goto IL_00e7;
	}

IL_00c9:
	{
		t36 * L_22 = (t36 *)VirtFuncInvoker1< t36 *, t36 * >::Invoke(&m527_MI, p2, V_0);
		V_0 = L_22;
	}

IL_00d1:
	{
		t32 * L_23 = (__this->f0);
		t68 * L_24 = m270(L_23, &m270_MI);
		bool L_25 = m341(L_24, V_0, &m341_MI);
		if (L_25)
		{
			goto IL_000d;
		}
	}

IL_00e7:
	{
		return;
	}
}
 void m47 (t30 * __this, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	t65 * V_2 = {0};
	t70 * V_3 = {0};
	t25 * V_4 = {0};
	t15 * V_5 = {0};
	t15 * V_6 = {0};
	t15 * V_7 = {0};
	t15 * V_8 = {0};
	t15 * V_9 = {0};
	t15 * V_10 = {0};
	t36 * G_B12_0 = {0};
	t25 * G_B12_1 = {0};
	t30 * G_B12_2 = {0};
	t37 * G_B12_3 = {0};
	t36 * G_B11_0 = {0};
	t25 * G_B11_1 = {0};
	t30 * G_B11_2 = {0};
	t37 * G_B11_3 = {0};
	t34 * G_B14_0 = {0};
	t36 * G_B14_1 = {0};
	t25 * G_B14_2 = {0};
	t30 * G_B14_3 = {0};
	t37 * G_B14_4 = {0};
	t34 * G_B13_0 = {0};
	t36 * G_B13_1 = {0};
	t25 * G_B13_2 = {0};
	t30 * G_B13_3 = {0};
	t37 * G_B13_4 = {0};
	t36 * G_B16_0 = {0};
	t25 * G_B16_1 = {0};
	t30 * G_B16_2 = {0};
	t37 * G_B16_3 = {0};
	t36 * G_B15_0 = {0};
	t25 * G_B15_1 = {0};
	t30 * G_B15_2 = {0};
	t37 * G_B15_3 = {0};
	t34 * G_B18_0 = {0};
	t36 * G_B18_1 = {0};
	t25 * G_B18_2 = {0};
	t30 * G_B18_3 = {0};
	t37 * G_B18_4 = {0};
	t34 * G_B17_0 = {0};
	t36 * G_B17_1 = {0};
	t25 * G_B17_2 = {0};
	t30 * G_B17_3 = {0};
	t37 * G_B17_4 = {0};
	t36 * G_B20_0 = {0};
	t25 * G_B20_1 = {0};
	t30 * G_B20_2 = {0};
	t37 * G_B20_3 = {0};
	t36 * G_B19_0 = {0};
	t25 * G_B19_1 = {0};
	t30 * G_B19_2 = {0};
	t37 * G_B19_3 = {0};
	t34 * G_B22_0 = {0};
	t36 * G_B22_1 = {0};
	t25 * G_B22_2 = {0};
	t30 * G_B22_3 = {0};
	t37 * G_B22_4 = {0};
	t34 * G_B21_0 = {0};
	t36 * G_B21_1 = {0};
	t25 * G_B21_2 = {0};
	t30 * G_B21_3 = {0};
	t37 * G_B21_4 = {0};
	t36 * G_B24_0 = {0};
	t25 * G_B24_1 = {0};
	t30 * G_B24_2 = {0};
	t37 * G_B24_3 = {0};
	t36 * G_B23_0 = {0};
	t25 * G_B23_1 = {0};
	t30 * G_B23_2 = {0};
	t37 * G_B23_3 = {0};
	t34 * G_B26_0 = {0};
	t36 * G_B26_1 = {0};
	t25 * G_B26_2 = {0};
	t30 * G_B26_3 = {0};
	t37 * G_B26_4 = {0};
	t34 * G_B25_0 = {0};
	t36 * G_B25_1 = {0};
	t25 * G_B25_2 = {0};
	t30 * G_B25_3 = {0};
	t37 * G_B25_4 = {0};
	t65 * G_B28_0 = {0};
	t65 * G_B27_0 = {0};
	{
		t32 * L_0 = (__this->f0);
		t68 * L_1 = m270(L_0, &m270_MI);
		int32_t L_2 = m324(L_1, &m324_MI);
		V_0 = ((int32_t)(L_2-1));
		goto IL_02f4;
	}

IL_0018:
	{
		t32 * L_3 = (__this->f0);
		t68 * L_4 = m270(L_3, &m270_MI);
		int32_t L_5 = m326(L_4, &m326_MI);
		V_1 = ((int32_t)(L_5-1));
		goto IL_02e9;
	}

IL_0030:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t65_TI));
		t65 * L_6 = (t65 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t65_TI));
		m529(L_6, &m529_MI);
		V_2 = L_6;
		t32 * L_7 = (__this->f0);
		t68 * L_8 = m270(L_7, &m270_MI);
		t75* L_9 = m336(L_8, &m336_MI);
		t70 * L_10 = GenArrayGet2(L_9, V_0, V_1, t70 *);;
		V_3 = L_10;
		if (!V_3)
		{
			goto IL_0069;
		}
	}
	{
		t114 * L_11 = m531(V_3, &m531_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t114_TI));
		t114 * L_12 = m532(NULL, LoadTypeToken(&t25_0_0_0), &m532_MI);
		if ((((t114 *)L_11) == ((t114 *)L_12)))
		{
			goto IL_006e;
		}
	}

IL_0069:
	{
		goto IL_02e5;
	}

IL_006e:
	{
		V_4 = ((t25 *)Castclass(V_3, InitializedTypeInfo(&t25_TI)));
		bool L_13 = m53(__this, V_4, &m53_MI);
		if (!L_13)
		{
			goto IL_0088;
		}
	}
	{
		goto IL_02e5;
	}

IL_0088:
	{
		t32 * L_14 = (__this->f0);
		t68 * L_15 = m270(L_14, &m270_MI);
		t56 * L_16 = m328(L_15, &m328_MI);
		if (!L_16)
		{
			goto IL_00be;
		}
	}
	{
		t32 * L_17 = (__this->f0);
		t68 * L_18 = m270(L_17, &m270_MI);
		t56 * L_19 = m328(L_18, &m328_MI);
		bool L_20 = m298(L_19, V_4, &m298_MI);
		if (!L_20)
		{
			goto IL_00be;
		}
	}
	{
		goto IL_02e5;
	}

IL_00be:
	{
		t15 * L_21 = (t15 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t15_TI));
		m316(L_21, &m316_MI);
		V_10 = L_21;
		m320(V_10, 0, &m320_MI);
		V_5 = V_10;
		t15 * L_22 = (t15 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t15_TI));
		m316(L_22, &m316_MI);
		V_10 = L_22;
		m320(V_10, 1, &m320_MI);
		V_6 = V_10;
		t15 * L_23 = (t15 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t15_TI));
		m316(L_23, &m316_MI);
		V_10 = L_23;
		m320(V_10, 2, &m320_MI);
		V_7 = V_10;
		t15 * L_24 = (t15 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t15_TI));
		m316(L_24, &m316_MI);
		V_10 = L_24;
		m320(V_10, 3, &m320_MI);
		V_8 = V_10;
		t37 * L_25 = m151(V_5, &m151_MI);
		t36 * L_26 = (t36 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t36_TI));
		m160(L_26, V_0, V_1, &m160_MI);
		G_B11_0 = L_26;
		G_B11_1 = V_4;
		G_B11_2 = __this;
		G_B11_3 = L_25;
		if ((((t30_SFs*)InitializedTypeInfo(&t30_TI)->static_fields)->f17))
		{
			G_B12_0 = L_26;
			G_B12_1 = V_4;
			G_B12_2 = __this;
			G_B12_3 = L_25;
			goto IL_0133;
		}
	}
	{
		t124 L_27 = { &m72_MI };
		t34 * L_28 = (t34 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t34_TI));
		m526(L_28, NULL, L_27, &m526_MI);
		((t30_SFs*)InitializedTypeInfo(&t30_TI)->static_fields)->f17 = L_28;
		G_B12_0 = G_B11_0;
		G_B12_1 = G_B11_1;
		G_B12_2 = G_B11_2;
		G_B12_3 = G_B11_3;
	}

IL_0133:
	{
		G_B13_0 = (((t30_SFs*)InitializedTypeInfo(&t30_TI)->static_fields)->f17);
		G_B13_1 = G_B12_0;
		G_B13_2 = G_B12_1;
		G_B13_3 = G_B12_2;
		G_B13_4 = G_B12_3;
		if ((((t30_SFs*)InitializedTypeInfo(&t30_TI)->static_fields)->f18))
		{
			G_B14_0 = (((t30_SFs*)InitializedTypeInfo(&t30_TI)->static_fields)->f17);
			G_B14_1 = G_B12_0;
			G_B14_2 = G_B12_1;
			G_B14_3 = G_B12_2;
			G_B14_4 = G_B12_3;
			goto IL_0150;
		}
	}
	{
		t124 L_29 = { &m73_MI };
		t34 * L_30 = (t34 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t34_TI));
		m526(L_30, NULL, L_29, &m526_MI);
		((t30_SFs*)InitializedTypeInfo(&t30_TI)->static_fields)->f18 = L_30;
		G_B14_0 = G_B13_0;
		G_B14_1 = G_B13_1;
		G_B14_2 = G_B13_2;
		G_B14_3 = G_B13_3;
		G_B14_4 = G_B13_4;
	}

IL_0150:
	{
		t37 * L_31 = m49(G_B14_3, G_B14_2, G_B14_1, G_B14_0, (((t30_SFs*)InitializedTypeInfo(&t30_TI)->static_fields)->f18), &m49_MI);
		m533(G_B14_4, L_31, &m533_MI);
		t37 * L_32 = m151(V_6, &m151_MI);
		t36 * L_33 = (t36 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t36_TI));
		m160(L_33, V_0, V_1, &m160_MI);
		G_B15_0 = L_33;
		G_B15_1 = V_4;
		G_B15_2 = __this;
		G_B15_3 = L_32;
		if ((((t30_SFs*)InitializedTypeInfo(&t30_TI)->static_fields)->f19))
		{
			G_B16_0 = L_33;
			G_B16_1 = V_4;
			G_B16_2 = __this;
			G_B16_3 = L_32;
			goto IL_0188;
		}
	}
	{
		t124 L_34 = { &m74_MI };
		t34 * L_35 = (t34 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t34_TI));
		m526(L_35, NULL, L_34, &m526_MI);
		((t30_SFs*)InitializedTypeInfo(&t30_TI)->static_fields)->f19 = L_35;
		G_B16_0 = G_B15_0;
		G_B16_1 = G_B15_1;
		G_B16_2 = G_B15_2;
		G_B16_3 = G_B15_3;
	}

IL_0188:
	{
		G_B17_0 = (((t30_SFs*)InitializedTypeInfo(&t30_TI)->static_fields)->f19);
		G_B17_1 = G_B16_0;
		G_B17_2 = G_B16_1;
		G_B17_3 = G_B16_2;
		G_B17_4 = G_B16_3;
		if ((((t30_SFs*)InitializedTypeInfo(&t30_TI)->static_fields)->f20))
		{
			G_B18_0 = (((t30_SFs*)InitializedTypeInfo(&t30_TI)->static_fields)->f19);
			G_B18_1 = G_B16_0;
			G_B18_2 = G_B16_1;
			G_B18_3 = G_B16_2;
			G_B18_4 = G_B16_3;
			goto IL_01a5;
		}
	}
	{
		t124 L_36 = { &m75_MI };
		t34 * L_37 = (t34 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t34_TI));
		m526(L_37, NULL, L_36, &m526_MI);
		((t30_SFs*)InitializedTypeInfo(&t30_TI)->static_fields)->f20 = L_37;
		G_B18_0 = G_B17_0;
		G_B18_1 = G_B17_1;
		G_B18_2 = G_B17_2;
		G_B18_3 = G_B17_3;
		G_B18_4 = G_B17_4;
	}

IL_01a5:
	{
		t37 * L_38 = m49(G_B18_3, G_B18_2, G_B18_1, G_B18_0, (((t30_SFs*)InitializedTypeInfo(&t30_TI)->static_fields)->f20), &m49_MI);
		m533(G_B18_4, L_38, &m533_MI);
		t37 * L_39 = m151(V_7, &m151_MI);
		t36 * L_40 = (t36 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t36_TI));
		m160(L_40, V_0, V_1, &m160_MI);
		G_B19_0 = L_40;
		G_B19_1 = V_4;
		G_B19_2 = __this;
		G_B19_3 = L_39;
		if ((((t30_SFs*)InitializedTypeInfo(&t30_TI)->static_fields)->f21))
		{
			G_B20_0 = L_40;
			G_B20_1 = V_4;
			G_B20_2 = __this;
			G_B20_3 = L_39;
			goto IL_01dd;
		}
	}
	{
		t124 L_41 = { &m76_MI };
		t34 * L_42 = (t34 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t34_TI));
		m526(L_42, NULL, L_41, &m526_MI);
		((t30_SFs*)InitializedTypeInfo(&t30_TI)->static_fields)->f21 = L_42;
		G_B20_0 = G_B19_0;
		G_B20_1 = G_B19_1;
		G_B20_2 = G_B19_2;
		G_B20_3 = G_B19_3;
	}

IL_01dd:
	{
		G_B21_0 = (((t30_SFs*)InitializedTypeInfo(&t30_TI)->static_fields)->f21);
		G_B21_1 = G_B20_0;
		G_B21_2 = G_B20_1;
		G_B21_3 = G_B20_2;
		G_B21_4 = G_B20_3;
		if ((((t30_SFs*)InitializedTypeInfo(&t30_TI)->static_fields)->f22))
		{
			G_B22_0 = (((t30_SFs*)InitializedTypeInfo(&t30_TI)->static_fields)->f21);
			G_B22_1 = G_B20_0;
			G_B22_2 = G_B20_1;
			G_B22_3 = G_B20_2;
			G_B22_4 = G_B20_3;
			goto IL_01fa;
		}
	}
	{
		t124 L_43 = { &m77_MI };
		t34 * L_44 = (t34 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t34_TI));
		m526(L_44, NULL, L_43, &m526_MI);
		((t30_SFs*)InitializedTypeInfo(&t30_TI)->static_fields)->f22 = L_44;
		G_B22_0 = G_B21_0;
		G_B22_1 = G_B21_1;
		G_B22_2 = G_B21_2;
		G_B22_3 = G_B21_3;
		G_B22_4 = G_B21_4;
	}

IL_01fa:
	{
		t37 * L_45 = m49(G_B22_3, G_B22_2, G_B22_1, G_B22_0, (((t30_SFs*)InitializedTypeInfo(&t30_TI)->static_fields)->f22), &m49_MI);
		m533(G_B22_4, L_45, &m533_MI);
		t37 * L_46 = m151(V_8, &m151_MI);
		t36 * L_47 = (t36 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t36_TI));
		m160(L_47, V_0, V_1, &m160_MI);
		G_B23_0 = L_47;
		G_B23_1 = V_4;
		G_B23_2 = __this;
		G_B23_3 = L_46;
		if ((((t30_SFs*)InitializedTypeInfo(&t30_TI)->static_fields)->f23))
		{
			G_B24_0 = L_47;
			G_B24_1 = V_4;
			G_B24_2 = __this;
			G_B24_3 = L_46;
			goto IL_0232;
		}
	}
	{
		t124 L_48 = { &m78_MI };
		t34 * L_49 = (t34 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t34_TI));
		m526(L_49, NULL, L_48, &m526_MI);
		((t30_SFs*)InitializedTypeInfo(&t30_TI)->static_fields)->f23 = L_49;
		G_B24_0 = G_B23_0;
		G_B24_1 = G_B23_1;
		G_B24_2 = G_B23_2;
		G_B24_3 = G_B23_3;
	}

IL_0232:
	{
		G_B25_0 = (((t30_SFs*)InitializedTypeInfo(&t30_TI)->static_fields)->f23);
		G_B25_1 = G_B24_0;
		G_B25_2 = G_B24_1;
		G_B25_3 = G_B24_2;
		G_B25_4 = G_B24_3;
		if ((((t30_SFs*)InitializedTypeInfo(&t30_TI)->static_fields)->f24))
		{
			G_B26_0 = (((t30_SFs*)InitializedTypeInfo(&t30_TI)->static_fields)->f23);
			G_B26_1 = G_B24_0;
			G_B26_2 = G_B24_1;
			G_B26_3 = G_B24_2;
			G_B26_4 = G_B24_3;
			goto IL_024f;
		}
	}
	{
		t124 L_50 = { &m79_MI };
		t34 * L_51 = (t34 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t34_TI));
		m526(L_51, NULL, L_50, &m526_MI);
		((t30_SFs*)InitializedTypeInfo(&t30_TI)->static_fields)->f24 = L_51;
		G_B26_0 = G_B25_0;
		G_B26_1 = G_B25_1;
		G_B26_2 = G_B25_2;
		G_B26_3 = G_B25_3;
		G_B26_4 = G_B25_4;
	}

IL_024f:
	{
		t37 * L_52 = m49(G_B26_3, G_B26_2, G_B26_1, G_B26_0, (((t30_SFs*)InitializedTypeInfo(&t30_TI)->static_fields)->f24), &m49_MI);
		m533(G_B26_4, L_52, &m533_MI);
		VirtActionInvoker1< t15 * >::Invoke(&m514_MI, V_2, V_5);
		VirtActionInvoker1< t15 * >::Invoke(&m514_MI, V_2, V_6);
		VirtActionInvoker1< t15 * >::Invoke(&m514_MI, V_2, V_7);
		VirtActionInvoker1< t15 * >::Invoke(&m514_MI, V_2, V_8);
		G_B27_0 = V_2;
		if ((((t30_SFs*)InitializedTypeInfo(&t30_TI)->static_fields)->f25))
		{
			G_B28_0 = V_2;
			goto IL_0297;
		}
	}
	{
		t124 L_53 = { &m80_MI };
		t35 * L_54 = (t35 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t35_TI));
		m534(L_54, NULL, L_53, &m534_MI);
		((t30_SFs*)InitializedTypeInfo(&t30_TI)->static_fields)->f25 = L_54;
		G_B28_0 = G_B27_0;
	}

IL_0297:
	{
		t14 * L_55 = (t14 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t14_TI));
		m30(L_55, &m30_MI);
		t5* L_56 = m535(NULL, G_B28_0, (((t30_SFs*)InitializedTypeInfo(&t30_TI)->static_fields)->f25), L_55, &m535_MI);
		t15 * L_57 = m536(NULL, L_56, &m536_MI);
		V_9 = L_57;
		if (!V_9)
		{
			goto IL_02e5;
		}
	}
	{
		t37 * L_58 = m151(V_9, &m151_MI);
		int32_t L_59 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m481_MI, L_58);
		if ((((int32_t)L_59) < ((int32_t)3)))
		{
			goto IL_02e5;
		}
	}
	{
		t32 * L_60 = (__this->f0);
		t68 * L_61 = m270(L_60, &m270_MI);
		t65 * L_62 = m330(L_61, &m330_MI);
		VirtActionInvoker1< t15 * >::Invoke(&m514_MI, L_62, V_9);
		m48(__this, V_9, &m48_MI);
	}

IL_02e5:
	{
		V_1 = ((int32_t)(V_1-1));
	}

IL_02e9:
	{
		if ((((int32_t)V_1) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		V_0 = ((int32_t)(V_0-1));
	}

IL_02f4:
	{
		if ((((int32_t)V_0) >= ((int32_t)0)))
		{
			goto IL_0018;
		}
	}
	{
		return;
	}
}
 void m48 (t30 * __this, t15 * p0, MethodInfo* method){
	t38* V_0 = {0};
	t26 * V_1 = {0};
	t38* V_2 = {0};
	int32_t V_3 = 0;
	t37 * V_4 = {0};
	t37 * V_5 = {0};
	t37 * V_6 = {0};
	t37 * V_7 = {0};
	t36 * G_B3_0 = {0};
	t25 * G_B3_1 = {0};
	t30 * G_B3_2 = {0};
	t36 * G_B2_0 = {0};
	t25 * G_B2_1 = {0};
	t30 * G_B2_2 = {0};
	t34 * G_B5_0 = {0};
	t36 * G_B5_1 = {0};
	t25 * G_B5_2 = {0};
	t30 * G_B5_3 = {0};
	t34 * G_B4_0 = {0};
	t36 * G_B4_1 = {0};
	t25 * G_B4_2 = {0};
	t30 * G_B4_3 = {0};
	t36 * G_B7_0 = {0};
	t25 * G_B7_1 = {0};
	t30 * G_B7_2 = {0};
	t36 * G_B6_0 = {0};
	t25 * G_B6_1 = {0};
	t30 * G_B6_2 = {0};
	t34 * G_B9_0 = {0};
	t36 * G_B9_1 = {0};
	t25 * G_B9_2 = {0};
	t30 * G_B9_3 = {0};
	t34 * G_B8_0 = {0};
	t36 * G_B8_1 = {0};
	t25 * G_B8_2 = {0};
	t30 * G_B8_3 = {0};
	t36 * G_B11_0 = {0};
	t25 * G_B11_1 = {0};
	t30 * G_B11_2 = {0};
	t36 * G_B10_0 = {0};
	t25 * G_B10_1 = {0};
	t30 * G_B10_2 = {0};
	t34 * G_B13_0 = {0};
	t36 * G_B13_1 = {0};
	t25 * G_B13_2 = {0};
	t30 * G_B13_3 = {0};
	t34 * G_B12_0 = {0};
	t36 * G_B12_1 = {0};
	t25 * G_B12_2 = {0};
	t30 * G_B12_3 = {0};
	t36 * G_B15_0 = {0};
	t25 * G_B15_1 = {0};
	t30 * G_B15_2 = {0};
	t36 * G_B14_0 = {0};
	t25 * G_B14_1 = {0};
	t30 * G_B14_2 = {0};
	t34 * G_B17_0 = {0};
	t36 * G_B17_1 = {0};
	t25 * G_B17_2 = {0};
	t30 * G_B17_3 = {0};
	t34 * G_B16_0 = {0};
	t36 * G_B16_1 = {0};
	t25 * G_B16_2 = {0};
	t30 * G_B16_3 = {0};
	{
		t37 * L_0 = m151(p0, &m151_MI);
		t38* L_1 = m537(L_0, &m537_MI);
		V_0 = L_1;
		V_2 = V_0;
		V_3 = 0;
		goto IL_01c1;
	}

IL_0015:
	{
		int32_t L_2 = V_3;
		V_1 = (*(t26 **)(t26 **)SZArrayLdElema(V_2, L_2));
		t25 * L_3 = m155(V_1, &m155_MI);
		t36 * L_4 = m157(V_1, &m157_MI);
		G_B2_0 = L_4;
		G_B2_1 = L_3;
		G_B2_2 = __this;
		if ((((t30_SFs*)InitializedTypeInfo(&t30_TI)->static_fields)->f26))
		{
			G_B3_0 = L_4;
			G_B3_1 = L_3;
			G_B3_2 = __this;
			goto IL_003e;
		}
	}
	{
		t124 L_5 = { &m81_MI };
		t34 * L_6 = (t34 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t34_TI));
		m526(L_6, NULL, L_5, &m526_MI);
		((t30_SFs*)InitializedTypeInfo(&t30_TI)->static_fields)->f26 = L_6;
		G_B3_0 = G_B2_0;
		G_B3_1 = G_B2_1;
		G_B3_2 = G_B2_2;
	}

IL_003e:
	{
		G_B4_0 = (((t30_SFs*)InitializedTypeInfo(&t30_TI)->static_fields)->f26);
		G_B4_1 = G_B3_0;
		G_B4_2 = G_B3_1;
		G_B4_3 = G_B3_2;
		if ((((t30_SFs*)InitializedTypeInfo(&t30_TI)->static_fields)->f27))
		{
			G_B5_0 = (((t30_SFs*)InitializedTypeInfo(&t30_TI)->static_fields)->f26);
			G_B5_1 = G_B3_0;
			G_B5_2 = G_B3_1;
			G_B5_3 = G_B3_2;
			goto IL_005b;
		}
	}
	{
		t124 L_7 = { &m82_MI };
		t34 * L_8 = (t34 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t34_TI));
		m526(L_8, NULL, L_7, &m526_MI);
		((t30_SFs*)InitializedTypeInfo(&t30_TI)->static_fields)->f27 = L_8;
		G_B5_0 = G_B4_0;
		G_B5_1 = G_B4_1;
		G_B5_2 = G_B4_2;
		G_B5_3 = G_B4_3;
	}

IL_005b:
	{
		t37 * L_9 = m51(G_B5_3, G_B5_2, G_B5_1, G_B5_0, (((t30_SFs*)InitializedTypeInfo(&t30_TI)->static_fields)->f27), V_0, &m51_MI);
		V_4 = L_9;
		t25 * L_10 = m155(V_1, &m155_MI);
		t36 * L_11 = m157(V_1, &m157_MI);
		G_B6_0 = L_11;
		G_B6_1 = L_10;
		G_B6_2 = __this;
		if ((((t30_SFs*)InitializedTypeInfo(&t30_TI)->static_fields)->f28))
		{
			G_B7_0 = L_11;
			G_B7_1 = L_10;
			G_B7_2 = __this;
			goto IL_008d;
		}
	}
	{
		t124 L_12 = { &m83_MI };
		t34 * L_13 = (t34 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t34_TI));
		m526(L_13, NULL, L_12, &m526_MI);
		((t30_SFs*)InitializedTypeInfo(&t30_TI)->static_fields)->f28 = L_13;
		G_B7_0 = G_B6_0;
		G_B7_1 = G_B6_1;
		G_B7_2 = G_B6_2;
	}

IL_008d:
	{
		G_B8_0 = (((t30_SFs*)InitializedTypeInfo(&t30_TI)->static_fields)->f28);
		G_B8_1 = G_B7_0;
		G_B8_2 = G_B7_1;
		G_B8_3 = G_B7_2;
		if ((((t30_SFs*)InitializedTypeInfo(&t30_TI)->static_fields)->f29))
		{
			G_B9_0 = (((t30_SFs*)InitializedTypeInfo(&t30_TI)->static_fields)->f28);
			G_B9_1 = G_B7_0;
			G_B9_2 = G_B7_1;
			G_B9_3 = G_B7_2;
			goto IL_00aa;
		}
	}
	{
		t124 L_14 = { &m84_MI };
		t34 * L_15 = (t34 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t34_TI));
		m526(L_15, NULL, L_14, &m526_MI);
		((t30_SFs*)InitializedTypeInfo(&t30_TI)->static_fields)->f29 = L_15;
		G_B9_0 = G_B8_0;
		G_B9_1 = G_B8_1;
		G_B9_2 = G_B8_2;
		G_B9_3 = G_B8_3;
	}

IL_00aa:
	{
		t37 * L_16 = m51(G_B9_3, G_B9_2, G_B9_1, G_B9_0, (((t30_SFs*)InitializedTypeInfo(&t30_TI)->static_fields)->f29), V_0, &m51_MI);
		V_5 = L_16;
		t25 * L_17 = m155(V_1, &m155_MI);
		t36 * L_18 = m157(V_1, &m157_MI);
		G_B10_0 = L_18;
		G_B10_1 = L_17;
		G_B10_2 = __this;
		if ((((t30_SFs*)InitializedTypeInfo(&t30_TI)->static_fields)->f30))
		{
			G_B11_0 = L_18;
			G_B11_1 = L_17;
			G_B11_2 = __this;
			goto IL_00dc;
		}
	}
	{
		t124 L_19 = { &m85_MI };
		t34 * L_20 = (t34 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t34_TI));
		m526(L_20, NULL, L_19, &m526_MI);
		((t30_SFs*)InitializedTypeInfo(&t30_TI)->static_fields)->f30 = L_20;
		G_B11_0 = G_B10_0;
		G_B11_1 = G_B10_1;
		G_B11_2 = G_B10_2;
	}

IL_00dc:
	{
		G_B12_0 = (((t30_SFs*)InitializedTypeInfo(&t30_TI)->static_fields)->f30);
		G_B12_1 = G_B11_0;
		G_B12_2 = G_B11_1;
		G_B12_3 = G_B11_2;
		if ((((t30_SFs*)InitializedTypeInfo(&t30_TI)->static_fields)->f31))
		{
			G_B13_0 = (((t30_SFs*)InitializedTypeInfo(&t30_TI)->static_fields)->f30);
			G_B13_1 = G_B11_0;
			G_B13_2 = G_B11_1;
			G_B13_3 = G_B11_2;
			goto IL_00f9;
		}
	}
	{
		t124 L_21 = { &m86_MI };
		t34 * L_22 = (t34 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t34_TI));
		m526(L_22, NULL, L_21, &m526_MI);
		((t30_SFs*)InitializedTypeInfo(&t30_TI)->static_fields)->f31 = L_22;
		G_B13_0 = G_B12_0;
		G_B13_1 = G_B12_1;
		G_B13_2 = G_B12_2;
		G_B13_3 = G_B12_3;
	}

IL_00f9:
	{
		t37 * L_23 = m51(G_B13_3, G_B13_2, G_B13_1, G_B13_0, (((t30_SFs*)InitializedTypeInfo(&t30_TI)->static_fields)->f31), V_0, &m51_MI);
		V_6 = L_23;
		t25 * L_24 = m155(V_1, &m155_MI);
		t36 * L_25 = m157(V_1, &m157_MI);
		G_B14_0 = L_25;
		G_B14_1 = L_24;
		G_B14_2 = __this;
		if ((((t30_SFs*)InitializedTypeInfo(&t30_TI)->static_fields)->f32))
		{
			G_B15_0 = L_25;
			G_B15_1 = L_24;
			G_B15_2 = __this;
			goto IL_012b;
		}
	}
	{
		t124 L_26 = { &m87_MI };
		t34 * L_27 = (t34 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t34_TI));
		m526(L_27, NULL, L_26, &m526_MI);
		((t30_SFs*)InitializedTypeInfo(&t30_TI)->static_fields)->f32 = L_27;
		G_B15_0 = G_B14_0;
		G_B15_1 = G_B14_1;
		G_B15_2 = G_B14_2;
	}

IL_012b:
	{
		G_B16_0 = (((t30_SFs*)InitializedTypeInfo(&t30_TI)->static_fields)->f32);
		G_B16_1 = G_B15_0;
		G_B16_2 = G_B15_1;
		G_B16_3 = G_B15_2;
		if ((((t30_SFs*)InitializedTypeInfo(&t30_TI)->static_fields)->f33))
		{
			G_B17_0 = (((t30_SFs*)InitializedTypeInfo(&t30_TI)->static_fields)->f32);
			G_B17_1 = G_B15_0;
			G_B17_2 = G_B15_1;
			G_B17_3 = G_B15_2;
			goto IL_0148;
		}
	}
	{
		t124 L_28 = { &m88_MI };
		t34 * L_29 = (t34 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t34_TI));
		m526(L_29, NULL, L_28, &m526_MI);
		((t30_SFs*)InitializedTypeInfo(&t30_TI)->static_fields)->f33 = L_29;
		G_B17_0 = G_B16_0;
		G_B17_1 = G_B16_1;
		G_B17_2 = G_B16_2;
		G_B17_3 = G_B16_3;
	}

IL_0148:
	{
		t37 * L_30 = m51(G_B17_3, G_B17_2, G_B17_1, G_B17_0, (((t30_SFs*)InitializedTypeInfo(&t30_TI)->static_fields)->f33), V_0, &m51_MI);
		V_7 = L_30;
		int32_t L_31 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m481_MI, V_4);
		if ((((int32_t)L_31) <= ((int32_t)0)))
		{
			goto IL_016f;
		}
	}
	{
		t37 * L_32 = m151(p0, &m151_MI);
		m533(L_32, V_4, &m533_MI);
	}

IL_016f:
	{
		int32_t L_33 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m481_MI, V_5);
		if ((((int32_t)L_33) <= ((int32_t)0)))
		{
			goto IL_0189;
		}
	}
	{
		t37 * L_34 = m151(p0, &m151_MI);
		m533(L_34, V_5, &m533_MI);
	}

IL_0189:
	{
		int32_t L_35 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m481_MI, V_6);
		if ((((int32_t)L_35) <= ((int32_t)0)))
		{
			goto IL_01a3;
		}
	}
	{
		t37 * L_36 = m151(p0, &m151_MI);
		m533(L_36, V_6, &m533_MI);
	}

IL_01a3:
	{
		int32_t L_37 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m481_MI, V_7);
		if ((((int32_t)L_37) <= ((int32_t)0)))
		{
			goto IL_01bd;
		}
	}
	{
		t37 * L_38 = m151(p0, &m151_MI);
		m533(L_38, V_7, &m533_MI);
	}

IL_01bd:
	{
		V_3 = ((int32_t)(V_3+1));
	}

IL_01c1:
	{
		if ((((int32_t)V_3) < ((int32_t)(((int32_t)(((t107 *)V_2)->max_length))))))
		{
			goto IL_0015;
		}
	}
	{
		return;
	}
}
 t37 * m49 (t30 * __this, t25 * p0, t36 * p1, t34 * p2, t34 * p3, MethodInfo* method){
	t37 * V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t37_TI));
		t37 * L_0 = (t37 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t37_TI));
		m538(L_0, &m538_MI);
		V_0 = L_0;
		t26 * L_1 = (t26 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t26_TI));
		m154(L_1, p0, p1, &m154_MI);
		VirtActionInvoker1< t26 * >::Invoke(&m528_MI, V_0, L_1);
		m50(__this, p0, p1, p2, V_0, &m50_MI);
		m50(__this, p0, p1, p3, V_0, &m50_MI);
		return V_0;
	}
}
 void m50 (t30 * __this, t25 * p0, t36 * p1, t34 * p2, t37 * p3, MethodInfo* method){
	t36 * V_0 = {0};
	t25 * V_1 = {0};
	{
		t36 * L_0 = (t36 *)VirtFuncInvoker1< t36 *, t36 * >::Invoke(&m527_MI, p2, p1);
		V_0 = L_0;
		goto IL_00d8;
	}

IL_000d:
	{
		t32 * L_1 = (__this->f0);
		t68 * L_2 = m270(L_1, &m270_MI);
		t70 * L_3 = m338(L_2, V_0, &m338_MI);
		if (!L_3)
		{
			goto IL_00cb;
		}
	}
	{
		t32 * L_4 = (__this->f0);
		t68 * L_5 = m270(L_4, &m270_MI);
		t70 * L_6 = m338(L_5, V_0, &m338_MI);
		if (!((t25 *)IsInst(L_6, InitializedTypeInfo(&t25_TI))))
		{
			goto IL_00cb;
		}
	}
	{
		t32 * L_7 = (__this->f0);
		t68 * L_8 = m270(L_7, &m270_MI);
		t70 * L_9 = m338(L_8, V_0, &m338_MI);
		V_1 = ((t25 *)Castclass(L_9, InitializedTypeInfo(&t25_TI)));
		int32_t L_10 = m283(V_1, &m283_MI);
		int32_t L_11 = m283(p0, &m283_MI);
		if ((((uint32_t)L_10) != ((uint32_t)L_11)))
		{
			goto IL_00c1;
		}
	}
	{
		bool L_12 = m53(__this, p0, &m53_MI);
		if (L_12)
		{
			goto IL_00c1;
		}
	}
	{
		bool L_13 = m53(__this, V_1, &m53_MI);
		if (L_13)
		{
			goto IL_00c1;
		}
	}
	{
		t32 * L_14 = (__this->f0);
		t68 * L_15 = m270(L_14, &m270_MI);
		t56 * L_16 = m328(L_15, &m328_MI);
		if (!L_16)
		{
			goto IL_00ae;
		}
	}
	{
		t32 * L_17 = (__this->f0);
		t68 * L_18 = m270(L_17, &m270_MI);
		t56 * L_19 = m328(L_18, &m328_MI);
		bool L_20 = m298(L_19, V_1, &m298_MI);
		if (L_20)
		{
			goto IL_00c1;
		}
	}

IL_00ae:
	{
		t26 * L_21 = (t26 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t26_TI));
		m154(L_21, V_1, V_0, &m154_MI);
		VirtActionInvoker1< t26 * >::Invoke(&m528_MI, p3, L_21);
		goto IL_00c6;
	}

IL_00c1:
	{
		goto IL_00ee;
	}

IL_00c6:
	{
		goto IL_00d0;
	}

IL_00cb:
	{
		goto IL_00ee;
	}

IL_00d0:
	{
		t36 * L_22 = (t36 *)VirtFuncInvoker1< t36 *, t36 * >::Invoke(&m527_MI, p2, V_0);
		V_0 = L_22;
	}

IL_00d8:
	{
		t32 * L_23 = (__this->f0);
		t68 * L_24 = m270(L_23, &m270_MI);
		bool L_25 = m341(L_24, V_0, &m341_MI);
		if (L_25)
		{
			goto IL_000d;
		}
	}

IL_00ee:
	{
		return;
	}
}
 t37 * m51 (t30 * __this, t25 * p0, t36 * p1, t34 * p2, t34 * p3, t38* p4, MethodInfo* method){
	t37 * V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t37_TI));
		t37 * L_0 = (t37 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t37_TI));
		m538(L_0, &m538_MI);
		V_0 = L_0;
		m52(__this, p0, p1, p2, V_0, p4, &m52_MI);
		m52(__this, p0, p1, p3, V_0, p4, &m52_MI);
		return V_0;
	}
}
 void m52 (t30 * __this, t25 * p0, t36 * p1, t34 * p2, t37 * p3, t38* p4, MethodInfo* method){
	t36 * V_0 = {0};
	t24 * V_1 = {0};
	{
		t36 * L_0 = (t36 *)VirtFuncInvoker1< t36 *, t36 * >::Invoke(&m527_MI, p2, p1);
		V_0 = L_0;
		goto IL_0103;
	}

IL_000d:
	{
		t32 * L_1 = (__this->f0);
		t68 * L_2 = m270(L_1, &m270_MI);
		t70 * L_3 = m338(L_2, V_0, &m338_MI);
		if (!L_3)
		{
			goto IL_00f6;
		}
	}
	{
		t32 * L_4 = (__this->f0);
		t68 * L_5 = m270(L_4, &m270_MI);
		t70 * L_6 = m338(L_5, V_0, &m338_MI);
		if (!((t25 *)IsInst(L_6, InitializedTypeInfo(&t25_TI))))
		{
			goto IL_00f6;
		}
	}
	{
		t24 * L_7 = (t24 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t24_TI));
		m34(L_7, &m34_MI);
		V_1 = L_7;
		t32 * L_8 = (__this->f0);
		t68 * L_9 = m270(L_8, &m270_MI);
		t70 * L_10 = m338(L_9, V_0, &m338_MI);
		V_1->f0 = ((t25 *)Castclass(L_10, InitializedTypeInfo(&t25_TI)));
		t25 * L_11 = (V_1->f0);
		int32_t L_12 = m283(L_11, &m283_MI);
		int32_t L_13 = m283(p0, &m283_MI);
		if ((((uint32_t)L_12) != ((uint32_t)L_13)))
		{
			goto IL_00ec;
		}
	}
	{
		t25 * L_14 = (V_1->f0);
		bool L_15 = m53(__this, L_14, &m53_MI);
		if (L_15)
		{
			goto IL_00ec;
		}
	}
	{
		t124 L_16 = { &m35_MI };
		t129 * L_17 = (t129 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t129_TI));
		m539(L_17, V_1, L_16, &m539_MI);
		bool L_18 = m540(NULL, (t5*)(t5*)p4, L_17, &m540_MI);
		if (L_18)
		{
			goto IL_00ec;
		}
	}
	{
		t32 * L_19 = (__this->f0);
		t68 * L_20 = m270(L_19, &m270_MI);
		t56 * L_21 = m328(L_20, &m328_MI);
		if (!L_21)
		{
			goto IL_00d4;
		}
	}
	{
		t32 * L_22 = (__this->f0);
		t68 * L_23 = m270(L_22, &m270_MI);
		t56 * L_24 = m328(L_23, &m328_MI);
		t25 * L_25 = (V_1->f0);
		bool L_26 = m298(L_24, L_25, &m298_MI);
		if (L_26)
		{
			goto IL_00ec;
		}
	}

IL_00d4:
	{
		t25 * L_27 = (V_1->f0);
		t26 * L_28 = (t26 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t26_TI));
		m154(L_28, L_27, V_0, &m154_MI);
		VirtActionInvoker1< t26 * >::Invoke(&m528_MI, p3, L_28);
		goto IL_00f1;
	}

IL_00ec:
	{
		goto IL_0119;
	}

IL_00f1:
	{
		goto IL_00fb;
	}

IL_00f6:
	{
		goto IL_0119;
	}

IL_00fb:
	{
		t36 * L_29 = (t36 *)VirtFuncInvoker1< t36 *, t36 * >::Invoke(&m527_MI, p2, V_0);
		V_0 = L_29;
	}

IL_0103:
	{
		t32 * L_30 = (__this->f0);
		t68 * L_31 = m270(L_30, &m270_MI);
		bool L_32 = m341(L_31, V_0, &m341_MI);
		if (L_32)
		{
			goto IL_000d;
		}
	}

IL_0119:
	{
		return;
	}
}
 bool m53 (t30 * __this, t25 * p0, MethodInfo* method){
	t27 * V_0 = {0};
	{
		t27 * L_0 = (t27 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t27_TI));
		m36(L_0, &m36_MI);
		V_0 = L_0;
		V_0->f0 = p0;
		t32 * L_1 = (__this->f0);
		t68 * L_2 = m270(L_1, &m270_MI);
		t65 * L_3 = m330(L_2, &m330_MI);
		t124 L_4 = { &m37_MI };
		t130 * L_5 = (t130 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t130_TI));
		m541(L_5, V_0, L_4, &m541_MI);
		bool L_6 = m542(NULL, L_3, L_5, &m542_MI);
		return L_6;
	}
}
extern MethodInfo m54_MI;
 void m54 (t30 * __this, t6 * p0, t29* p1, MethodInfo* method){
	t28 * V_0 = {0};
	{
		t28 * L_0 = (t28 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t28_TI));
		m38(L_0, &m38_MI);
		V_0 = L_0;
		V_0->f0 = p1;
		V_0->f1 = __this;
		t66 * L_1 = m224(p0, &m224_MI);
		VirtActionInvoker0::Invoke(&m543_MI, L_1);
		t32 * L_2 = (__this->f0);
		t68 * L_3 = m270(L_2, &m270_MI);
		t66 * L_4 = m334(L_3, &m334_MI);
		VirtActionInvoker0::Invoke(&m543_MI, L_4);
		t32 * L_5 = (__this->f0);
		t68 * L_6 = m270(L_5, &m270_MI);
		t66 * L_7 = m334(L_6, &m334_MI);
		t29* L_8 = (V_0->f0);
		m544(L_7, (t5*)(t5*)L_8, &m544_MI);
		t32 * L_9 = (__this->f0);
		t68 * L_10 = m270(L_9, &m270_MI);
		t65 * L_11 = m330(L_10, &m330_MI);
		t124 L_12 = { &m39_MI };
		t128 * L_13 = (t128 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t128_TI));
		m519(L_13, V_0, L_12, &m519_MI);
		m520(L_11, L_13, &m520_MI);
		t32 * L_14 = (__this->f0);
		t68 * L_15 = m270(L_14, &m270_MI);
		t66 * L_16 = m334(L_15, &m334_MI);
		t124 L_17 = { &m40_MI };
		t131 * L_18 = (t131 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t131_TI));
		m545(L_18, V_0, L_17, &m545_MI);
		m546(L_16, L_18, &m546_MI);
		t66 * L_19 = m224(p0, &m224_MI);
		t29* L_20 = (V_0->f0);
		m544(L_19, (t5*)(t5*)L_20, &m544_MI);
		return;
	}
}
 void m55 (t30 * __this, t26 * p0, MethodInfo* method){
	t70 * V_0 = {0};
	{
		t32 * L_0 = (__this->f0);
		t68 * L_1 = m270(L_0, &m270_MI);
		t36 * L_2 = m157(p0, &m157_MI);
		t70 * L_3 = m338(L_1, L_2, &m338_MI);
		V_0 = L_3;
		if (!V_0)
		{
			goto IL_0040;
		}
	}
	{
		t25 * L_4 = m155(p0, &m155_MI);
		if ((((t70 *)V_0) != ((t25 *)L_4)))
		{
			goto IL_0040;
		}
	}
	{
		t32 * L_5 = (__this->f0);
		t68 * L_6 = m270(L_5, &m270_MI);
		t36 * L_7 = m157(p0, &m157_MI);
		m339(L_6, L_7, (t70 *)NULL, &m339_MI);
	}

IL_0040:
	{
		return;
	}
}
 int32_t m56 (t5 * __this, t26 * p0, MethodInfo* method){
	{
		t36 * L_0 = m157(p0, &m157_MI);
		int32_t L_1 = m164(L_0, &m164_MI);
		return L_1;
	}
}
 int32_t m57 (t5 * __this, t26 * p0, MethodInfo* method){
	{
		t36 * L_0 = m157(p0, &m157_MI);
		int32_t L_1 = m164(L_0, &m164_MI);
		return L_1;
	}
}
 t36 * m58 (t5 * __this, t36 * p0, MethodInfo* method){
	{
		int32_t L_0 = m164(p0, &m164_MI);
		int32_t L_1 = m166(p0, &m166_MI);
		t36 * L_2 = (t36 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t36_TI));
		m160(L_2, ((int32_t)(L_0+1)), L_1, &m160_MI);
		return L_2;
	}
}
 t36 * m59 (t5 * __this, t36 * p0, MethodInfo* method){
	{
		int32_t L_0 = m164(p0, &m164_MI);
		int32_t L_1 = m166(p0, &m166_MI);
		t36 * L_2 = (t36 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t36_TI));
		m160(L_2, ((int32_t)(L_0-1)), L_1, &m160_MI);
		return L_2;
	}
}
 int32_t m60 (t5 * __this, t26 * p0, MethodInfo* method){
	{
		t36 * L_0 = m157(p0, &m157_MI);
		int32_t L_1 = m166(L_0, &m166_MI);
		return L_1;
	}
}
 int32_t m61 (t5 * __this, t26 * p0, MethodInfo* method){
	{
		t36 * L_0 = m157(p0, &m157_MI);
		int32_t L_1 = m166(L_0, &m166_MI);
		return L_1;
	}
}
 t36 * m62 (t5 * __this, t36 * p0, MethodInfo* method){
	{
		int32_t L_0 = m164(p0, &m164_MI);
		int32_t L_1 = m166(p0, &m166_MI);
		t36 * L_2 = (t36 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t36_TI));
		m160(L_2, L_0, ((int32_t)(L_1+1)), &m160_MI);
		return L_2;
	}
}
 t36 * m63 (t5 * __this, t36 * p0, MethodInfo* method){
	{
		int32_t L_0 = m164(p0, &m164_MI);
		int32_t L_1 = m166(p0, &m166_MI);
		t36 * L_2 = (t36 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t36_TI));
		m160(L_2, L_0, ((int32_t)(L_1-1)), &m160_MI);
		return L_2;
	}
}
 int32_t m64 (t5 * __this, t26 * p0, MethodInfo* method){
	{
		t36 * L_0 = m157(p0, &m157_MI);
		int32_t L_1 = m166(L_0, &m166_MI);
		return L_1;
	}
}
 int32_t m65 (t5 * __this, t26 * p0, MethodInfo* method){
	{
		t36 * L_0 = m157(p0, &m157_MI);
		int32_t L_1 = m166(L_0, &m166_MI);
		return L_1;
	}
}
 t36 * m66 (t5 * __this, t36 * p0, MethodInfo* method){
	{
		int32_t L_0 = m164(p0, &m164_MI);
		int32_t L_1 = m166(p0, &m166_MI);
		t36 * L_2 = (t36 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t36_TI));
		m160(L_2, ((int32_t)(L_0-1)), ((int32_t)(L_1-1)), &m160_MI);
		return L_2;
	}
}
 t36 * m67 (t5 * __this, t36 * p0, MethodInfo* method){
	{
		int32_t L_0 = m164(p0, &m164_MI);
		int32_t L_1 = m166(p0, &m166_MI);
		t36 * L_2 = (t36 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t36_TI));
		m160(L_2, ((int32_t)(L_0+1)), ((int32_t)(L_1+1)), &m160_MI);
		return L_2;
	}
}
 int32_t m68 (t5 * __this, t26 * p0, MethodInfo* method){
	{
		t36 * L_0 = m157(p0, &m157_MI);
		int32_t L_1 = m166(L_0, &m166_MI);
		return L_1;
	}
}
 int32_t m69 (t5 * __this, t26 * p0, MethodInfo* method){
	{
		t36 * L_0 = m157(p0, &m157_MI);
		int32_t L_1 = m166(L_0, &m166_MI);
		return L_1;
	}
}
 t36 * m70 (t5 * __this, t36 * p0, MethodInfo* method){
	{
		int32_t L_0 = m164(p0, &m164_MI);
		int32_t L_1 = m166(p0, &m166_MI);
		t36 * L_2 = (t36 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t36_TI));
		m160(L_2, ((int32_t)(L_0-1)), ((int32_t)(L_1+1)), &m160_MI);
		return L_2;
	}
}
 t36 * m71 (t5 * __this, t36 * p0, MethodInfo* method){
	{
		int32_t L_0 = m164(p0, &m164_MI);
		int32_t L_1 = m166(p0, &m166_MI);
		t36 * L_2 = (t36 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t36_TI));
		m160(L_2, ((int32_t)(L_0+1)), ((int32_t)(L_1-1)), &m160_MI);
		return L_2;
	}
}
 t36 * m72 (t5 * __this, t36 * p0, MethodInfo* method){
	{
		int32_t L_0 = m164(p0, &m164_MI);
		int32_t L_1 = m166(p0, &m166_MI);
		t36 * L_2 = (t36 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t36_TI));
		m160(L_2, L_0, ((int32_t)(L_1-1)), &m160_MI);
		return L_2;
	}
}
 t36 * m73 (t5 * __this, t36 * p0, MethodInfo* method){
	{
		int32_t L_0 = m164(p0, &m164_MI);
		int32_t L_1 = m166(p0, &m166_MI);
		t36 * L_2 = (t36 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t36_TI));
		m160(L_2, L_0, ((int32_t)(L_1+1)), &m160_MI);
		return L_2;
	}
}
 t36 * m74 (t5 * __this, t36 * p0, MethodInfo* method){
	{
		int32_t L_0 = m164(p0, &m164_MI);
		int32_t L_1 = m166(p0, &m166_MI);
		t36 * L_2 = (t36 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t36_TI));
		m160(L_2, ((int32_t)(L_0-1)), L_1, &m160_MI);
		return L_2;
	}
}
 t36 * m75 (t5 * __this, t36 * p0, MethodInfo* method){
	{
		int32_t L_0 = m164(p0, &m164_MI);
		int32_t L_1 = m166(p0, &m166_MI);
		t36 * L_2 = (t36 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t36_TI));
		m160(L_2, ((int32_t)(L_0+1)), L_1, &m160_MI);
		return L_2;
	}
}
 t36 * m76 (t5 * __this, t36 * p0, MethodInfo* method){
	{
		int32_t L_0 = m164(p0, &m164_MI);
		int32_t L_1 = m166(p0, &m166_MI);
		t36 * L_2 = (t36 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t36_TI));
		m160(L_2, ((int32_t)(L_0-1)), ((int32_t)(L_1-1)), &m160_MI);
		return L_2;
	}
}
 t36 * m77 (t5 * __this, t36 * p0, MethodInfo* method){
	{
		int32_t L_0 = m164(p0, &m164_MI);
		int32_t L_1 = m166(p0, &m166_MI);
		t36 * L_2 = (t36 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t36_TI));
		m160(L_2, ((int32_t)(L_0+1)), ((int32_t)(L_1+1)), &m160_MI);
		return L_2;
	}
}
 t36 * m78 (t5 * __this, t36 * p0, MethodInfo* method){
	{
		int32_t L_0 = m164(p0, &m164_MI);
		int32_t L_1 = m166(p0, &m166_MI);
		t36 * L_2 = (t36 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t36_TI));
		m160(L_2, ((int32_t)(L_0+1)), ((int32_t)(L_1-1)), &m160_MI);
		return L_2;
	}
}
 t36 * m79 (t5 * __this, t36 * p0, MethodInfo* method){
	{
		int32_t L_0 = m164(p0, &m164_MI);
		int32_t L_1 = m166(p0, &m166_MI);
		t36 * L_2 = (t36 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t36_TI));
		m160(L_2, ((int32_t)(L_0-1)), ((int32_t)(L_1+1)), &m160_MI);
		return L_2;
	}
}
 t15 * m80 (t5 * __this, t15 * p0, MethodInfo* method){
	{
		return p0;
	}
}
 t36 * m81 (t5 * __this, t36 * p0, MethodInfo* method){
	{
		int32_t L_0 = m164(p0, &m164_MI);
		int32_t L_1 = m166(p0, &m166_MI);
		t36 * L_2 = (t36 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t36_TI));
		m160(L_2, ((int32_t)(L_0+1)), L_1, &m160_MI);
		return L_2;
	}
}
 t36 * m82 (t5 * __this, t36 * p0, MethodInfo* method){
	{
		int32_t L_0 = m164(p0, &m164_MI);
		int32_t L_1 = m166(p0, &m166_MI);
		t36 * L_2 = (t36 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t36_TI));
		m160(L_2, ((int32_t)(L_0-1)), L_1, &m160_MI);
		return L_2;
	}
}
 t36 * m83 (t5 * __this, t36 * p0, MethodInfo* method){
	{
		int32_t L_0 = m164(p0, &m164_MI);
		int32_t L_1 = m166(p0, &m166_MI);
		t36 * L_2 = (t36 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t36_TI));
		m160(L_2, L_0, ((int32_t)(L_1+1)), &m160_MI);
		return L_2;
	}
}
 t36 * m84 (t5 * __this, t36 * p0, MethodInfo* method){
	{
		int32_t L_0 = m164(p0, &m164_MI);
		int32_t L_1 = m166(p0, &m166_MI);
		t36 * L_2 = (t36 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t36_TI));
		m160(L_2, L_0, ((int32_t)(L_1-1)), &m160_MI);
		return L_2;
	}
}
 t36 * m85 (t5 * __this, t36 * p0, MethodInfo* method){
	{
		int32_t L_0 = m164(p0, &m164_MI);
		int32_t L_1 = m166(p0, &m166_MI);
		t36 * L_2 = (t36 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t36_TI));
		m160(L_2, ((int32_t)(L_0-1)), ((int32_t)(L_1-1)), &m160_MI);
		return L_2;
	}
}
 t36 * m86 (t5 * __this, t36 * p0, MethodInfo* method){
	{
		int32_t L_0 = m164(p0, &m164_MI);
		int32_t L_1 = m166(p0, &m166_MI);
		t36 * L_2 = (t36 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t36_TI));
		m160(L_2, ((int32_t)(L_0+1)), ((int32_t)(L_1+1)), &m160_MI);
		return L_2;
	}
}
 t36 * m87 (t5 * __this, t36 * p0, MethodInfo* method){
	{
		int32_t L_0 = m164(p0, &m164_MI);
		int32_t L_1 = m166(p0, &m166_MI);
		t36 * L_2 = (t36 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t36_TI));
		m160(L_2, ((int32_t)(L_0+1)), ((int32_t)(L_1-1)), &m160_MI);
		return L_2;
	}
}
 t36 * m88 (t5 * __this, t36 * p0, MethodInfo* method){
	{
		int32_t L_0 = m164(p0, &m164_MI);
		int32_t L_1 = m166(p0, &m166_MI);
		t36 * L_2 = (t36 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t36_TI));
		m160(L_2, ((int32_t)(L_0-1)), ((int32_t)(L_1+1)), &m160_MI);
		return L_2;
	}
}
// Metadata Definition JewelMine.Engine.GameGroupCollisionDetector
extern Il2CppType t32_0_0_1;
FieldInfo t30_f0_FieldInfo = 
{
	"state", &t32_0_0_1, &t30_TI, offsetof(t30, f0), &EmptyCustomAttributesCache};
extern Il2CppType t33_0_0_17;
extern CustomAttributesCache t30__CustomAttributeCache_U3CU3Ef__am$cache1;
FieldInfo t30_f1_FieldInfo = 
{
	"<>f__am$cache1", &t33_0_0_17, &t30_TI, offsetof(t30_SFs, f1), &t30__CustomAttributeCache_U3CU3Ef__am$cache1};
extern Il2CppType t33_0_0_17;
extern CustomAttributesCache t30__CustomAttributeCache_U3CU3Ef__am$cache2;
FieldInfo t30_f2_FieldInfo = 
{
	"<>f__am$cache2", &t33_0_0_17, &t30_TI, offsetof(t30_SFs, f2), &t30__CustomAttributeCache_U3CU3Ef__am$cache2};
extern Il2CppType t34_0_0_17;
extern CustomAttributesCache t30__CustomAttributeCache_U3CU3Ef__am$cache3;
FieldInfo t30_f3_FieldInfo = 
{
	"<>f__am$cache3", &t34_0_0_17, &t30_TI, offsetof(t30_SFs, f3), &t30__CustomAttributeCache_U3CU3Ef__am$cache3};
extern Il2CppType t34_0_0_17;
extern CustomAttributesCache t30__CustomAttributeCache_U3CU3Ef__am$cache4;
FieldInfo t30_f4_FieldInfo = 
{
	"<>f__am$cache4", &t34_0_0_17, &t30_TI, offsetof(t30_SFs, f4), &t30__CustomAttributeCache_U3CU3Ef__am$cache4};
extern Il2CppType t33_0_0_17;
extern CustomAttributesCache t30__CustomAttributeCache_U3CU3Ef__am$cache5;
FieldInfo t30_f5_FieldInfo = 
{
	"<>f__am$cache5", &t33_0_0_17, &t30_TI, offsetof(t30_SFs, f5), &t30__CustomAttributeCache_U3CU3Ef__am$cache5};
extern Il2CppType t33_0_0_17;
extern CustomAttributesCache t30__CustomAttributeCache_U3CU3Ef__am$cache6;
FieldInfo t30_f6_FieldInfo = 
{
	"<>f__am$cache6", &t33_0_0_17, &t30_TI, offsetof(t30_SFs, f6), &t30__CustomAttributeCache_U3CU3Ef__am$cache6};
extern Il2CppType t34_0_0_17;
extern CustomAttributesCache t30__CustomAttributeCache_U3CU3Ef__am$cache7;
FieldInfo t30_f7_FieldInfo = 
{
	"<>f__am$cache7", &t34_0_0_17, &t30_TI, offsetof(t30_SFs, f7), &t30__CustomAttributeCache_U3CU3Ef__am$cache7};
extern Il2CppType t34_0_0_17;
extern CustomAttributesCache t30__CustomAttributeCache_U3CU3Ef__am$cache8;
FieldInfo t30_f8_FieldInfo = 
{
	"<>f__am$cache8", &t34_0_0_17, &t30_TI, offsetof(t30_SFs, f8), &t30__CustomAttributeCache_U3CU3Ef__am$cache8};
extern Il2CppType t33_0_0_17;
extern CustomAttributesCache t30__CustomAttributeCache_U3CU3Ef__am$cache9;
FieldInfo t30_f9_FieldInfo = 
{
	"<>f__am$cache9", &t33_0_0_17, &t30_TI, offsetof(t30_SFs, f9), &t30__CustomAttributeCache_U3CU3Ef__am$cache9};
extern Il2CppType t33_0_0_17;
extern CustomAttributesCache t30__CustomAttributeCache_U3CU3Ef__am$cacheA;
FieldInfo t30_f10_FieldInfo = 
{
	"<>f__am$cacheA", &t33_0_0_17, &t30_TI, offsetof(t30_SFs, f10), &t30__CustomAttributeCache_U3CU3Ef__am$cacheA};
extern Il2CppType t34_0_0_17;
extern CustomAttributesCache t30__CustomAttributeCache_U3CU3Ef__am$cacheB;
FieldInfo t30_f11_FieldInfo = 
{
	"<>f__am$cacheB", &t34_0_0_17, &t30_TI, offsetof(t30_SFs, f11), &t30__CustomAttributeCache_U3CU3Ef__am$cacheB};
extern Il2CppType t34_0_0_17;
extern CustomAttributesCache t30__CustomAttributeCache_U3CU3Ef__am$cacheC;
FieldInfo t30_f12_FieldInfo = 
{
	"<>f__am$cacheC", &t34_0_0_17, &t30_TI, offsetof(t30_SFs, f12), &t30__CustomAttributeCache_U3CU3Ef__am$cacheC};
extern Il2CppType t33_0_0_17;
extern CustomAttributesCache t30__CustomAttributeCache_U3CU3Ef__am$cacheD;
FieldInfo t30_f13_FieldInfo = 
{
	"<>f__am$cacheD", &t33_0_0_17, &t30_TI, offsetof(t30_SFs, f13), &t30__CustomAttributeCache_U3CU3Ef__am$cacheD};
extern Il2CppType t33_0_0_17;
extern CustomAttributesCache t30__CustomAttributeCache_U3CU3Ef__am$cacheE;
FieldInfo t30_f14_FieldInfo = 
{
	"<>f__am$cacheE", &t33_0_0_17, &t30_TI, offsetof(t30_SFs, f14), &t30__CustomAttributeCache_U3CU3Ef__am$cacheE};
extern Il2CppType t34_0_0_17;
extern CustomAttributesCache t30__CustomAttributeCache_U3CU3Ef__am$cacheF;
FieldInfo t30_f15_FieldInfo = 
{
	"<>f__am$cacheF", &t34_0_0_17, &t30_TI, offsetof(t30_SFs, f15), &t30__CustomAttributeCache_U3CU3Ef__am$cacheF};
extern Il2CppType t34_0_0_17;
extern CustomAttributesCache t30__CustomAttributeCache_U3CU3Ef__am$cache10;
FieldInfo t30_f16_FieldInfo = 
{
	"<>f__am$cache10", &t34_0_0_17, &t30_TI, offsetof(t30_SFs, f16), &t30__CustomAttributeCache_U3CU3Ef__am$cache10};
extern Il2CppType t34_0_0_17;
extern CustomAttributesCache t30__CustomAttributeCache_U3CU3Ef__am$cache11;
FieldInfo t30_f17_FieldInfo = 
{
	"<>f__am$cache11", &t34_0_0_17, &t30_TI, offsetof(t30_SFs, f17), &t30__CustomAttributeCache_U3CU3Ef__am$cache11};
extern Il2CppType t34_0_0_17;
extern CustomAttributesCache t30__CustomAttributeCache_U3CU3Ef__am$cache12;
FieldInfo t30_f18_FieldInfo = 
{
	"<>f__am$cache12", &t34_0_0_17, &t30_TI, offsetof(t30_SFs, f18), &t30__CustomAttributeCache_U3CU3Ef__am$cache12};
extern Il2CppType t34_0_0_17;
extern CustomAttributesCache t30__CustomAttributeCache_U3CU3Ef__am$cache13;
FieldInfo t30_f19_FieldInfo = 
{
	"<>f__am$cache13", &t34_0_0_17, &t30_TI, offsetof(t30_SFs, f19), &t30__CustomAttributeCache_U3CU3Ef__am$cache13};
extern Il2CppType t34_0_0_17;
extern CustomAttributesCache t30__CustomAttributeCache_U3CU3Ef__am$cache14;
FieldInfo t30_f20_FieldInfo = 
{
	"<>f__am$cache14", &t34_0_0_17, &t30_TI, offsetof(t30_SFs, f20), &t30__CustomAttributeCache_U3CU3Ef__am$cache14};
extern Il2CppType t34_0_0_17;
extern CustomAttributesCache t30__CustomAttributeCache_U3CU3Ef__am$cache15;
FieldInfo t30_f21_FieldInfo = 
{
	"<>f__am$cache15", &t34_0_0_17, &t30_TI, offsetof(t30_SFs, f21), &t30__CustomAttributeCache_U3CU3Ef__am$cache15};
extern Il2CppType t34_0_0_17;
extern CustomAttributesCache t30__CustomAttributeCache_U3CU3Ef__am$cache16;
FieldInfo t30_f22_FieldInfo = 
{
	"<>f__am$cache16", &t34_0_0_17, &t30_TI, offsetof(t30_SFs, f22), &t30__CustomAttributeCache_U3CU3Ef__am$cache16};
extern Il2CppType t34_0_0_17;
extern CustomAttributesCache t30__CustomAttributeCache_U3CU3Ef__am$cache17;
FieldInfo t30_f23_FieldInfo = 
{
	"<>f__am$cache17", &t34_0_0_17, &t30_TI, offsetof(t30_SFs, f23), &t30__CustomAttributeCache_U3CU3Ef__am$cache17};
extern Il2CppType t34_0_0_17;
extern CustomAttributesCache t30__CustomAttributeCache_U3CU3Ef__am$cache18;
FieldInfo t30_f24_FieldInfo = 
{
	"<>f__am$cache18", &t34_0_0_17, &t30_TI, offsetof(t30_SFs, f24), &t30__CustomAttributeCache_U3CU3Ef__am$cache18};
extern Il2CppType t35_0_0_17;
extern CustomAttributesCache t30__CustomAttributeCache_U3CU3Ef__am$cache19;
FieldInfo t30_f25_FieldInfo = 
{
	"<>f__am$cache19", &t35_0_0_17, &t30_TI, offsetof(t30_SFs, f25), &t30__CustomAttributeCache_U3CU3Ef__am$cache19};
extern Il2CppType t34_0_0_17;
extern CustomAttributesCache t30__CustomAttributeCache_U3CU3Ef__am$cache1A;
FieldInfo t30_f26_FieldInfo = 
{
	"<>f__am$cache1A", &t34_0_0_17, &t30_TI, offsetof(t30_SFs, f26), &t30__CustomAttributeCache_U3CU3Ef__am$cache1A};
extern Il2CppType t34_0_0_17;
extern CustomAttributesCache t30__CustomAttributeCache_U3CU3Ef__am$cache1B;
FieldInfo t30_f27_FieldInfo = 
{
	"<>f__am$cache1B", &t34_0_0_17, &t30_TI, offsetof(t30_SFs, f27), &t30__CustomAttributeCache_U3CU3Ef__am$cache1B};
extern Il2CppType t34_0_0_17;
extern CustomAttributesCache t30__CustomAttributeCache_U3CU3Ef__am$cache1C;
FieldInfo t30_f28_FieldInfo = 
{
	"<>f__am$cache1C", &t34_0_0_17, &t30_TI, offsetof(t30_SFs, f28), &t30__CustomAttributeCache_U3CU3Ef__am$cache1C};
extern Il2CppType t34_0_0_17;
extern CustomAttributesCache t30__CustomAttributeCache_U3CU3Ef__am$cache1D;
FieldInfo t30_f29_FieldInfo = 
{
	"<>f__am$cache1D", &t34_0_0_17, &t30_TI, offsetof(t30_SFs, f29), &t30__CustomAttributeCache_U3CU3Ef__am$cache1D};
extern Il2CppType t34_0_0_17;
extern CustomAttributesCache t30__CustomAttributeCache_U3CU3Ef__am$cache1E;
FieldInfo t30_f30_FieldInfo = 
{
	"<>f__am$cache1E", &t34_0_0_17, &t30_TI, offsetof(t30_SFs, f30), &t30__CustomAttributeCache_U3CU3Ef__am$cache1E};
extern Il2CppType t34_0_0_17;
extern CustomAttributesCache t30__CustomAttributeCache_U3CU3Ef__am$cache1F;
FieldInfo t30_f31_FieldInfo = 
{
	"<>f__am$cache1F", &t34_0_0_17, &t30_TI, offsetof(t30_SFs, f31), &t30__CustomAttributeCache_U3CU3Ef__am$cache1F};
extern Il2CppType t34_0_0_17;
extern CustomAttributesCache t30__CustomAttributeCache_U3CU3Ef__am$cache20;
FieldInfo t30_f32_FieldInfo = 
{
	"<>f__am$cache20", &t34_0_0_17, &t30_TI, offsetof(t30_SFs, f32), &t30__CustomAttributeCache_U3CU3Ef__am$cache20};
extern Il2CppType t34_0_0_17;
extern CustomAttributesCache t30__CustomAttributeCache_U3CU3Ef__am$cache21;
FieldInfo t30_f33_FieldInfo = 
{
	"<>f__am$cache21", &t34_0_0_17, &t30_TI, offsetof(t30_SFs, f33), &t30__CustomAttributeCache_U3CU3Ef__am$cache21};
static FieldInfo* t30_FIs[] =
{
	&t30_f0_FieldInfo,
	&t30_f1_FieldInfo,
	&t30_f2_FieldInfo,
	&t30_f3_FieldInfo,
	&t30_f4_FieldInfo,
	&t30_f5_FieldInfo,
	&t30_f6_FieldInfo,
	&t30_f7_FieldInfo,
	&t30_f8_FieldInfo,
	&t30_f9_FieldInfo,
	&t30_f10_FieldInfo,
	&t30_f11_FieldInfo,
	&t30_f12_FieldInfo,
	&t30_f13_FieldInfo,
	&t30_f14_FieldInfo,
	&t30_f15_FieldInfo,
	&t30_f16_FieldInfo,
	&t30_f17_FieldInfo,
	&t30_f18_FieldInfo,
	&t30_f19_FieldInfo,
	&t30_f20_FieldInfo,
	&t30_f21_FieldInfo,
	&t30_f22_FieldInfo,
	&t30_f23_FieldInfo,
	&t30_f24_FieldInfo,
	&t30_f25_FieldInfo,
	&t30_f26_FieldInfo,
	&t30_f27_FieldInfo,
	&t30_f28_FieldInfo,
	&t30_f29_FieldInfo,
	&t30_f30_FieldInfo,
	&t30_f31_FieldInfo,
	&t30_f32_FieldInfo,
	&t30_f33_FieldInfo,
	NULL
};
extern Il2CppType t32_0_0_0;
extern Il2CppType t32_0_0_0;
static ParameterInfo t30_m42_ParameterInfos[] = 
{
	{"gameState", 0, 134217741, &EmptyCustomAttributesCache, &t32_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m42_MI = 
{
	".ctor", (methodPointerType)&m42, &t30_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t30_m42_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 33, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t6_0_0_0;
static ParameterInfo t30_m43_ParameterInfos[] = 
{
	{"logicUpdate", 0, 134217742, &EmptyCustomAttributesCache, &t6_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m43_MI = 
{
	"CheckMarkedCollisionGroupsStillValid", (methodPointerType)&m43, &t30_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t30_m43_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 34, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t6_0_0_0;
static ParameterInfo t30_m44_ParameterInfos[] = 
{
	{"logicUpdate", 0, 134217743, &EmptyCustomAttributesCache, &t6_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m44_MI = 
{
	"MarkGroupCollisions", (methodPointerType)&m44, &t30_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t30_m44_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 35, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m45_MI = 
{
	"AddNewMembersToMarkedCollisions", (methodPointerType)&m45, &t30_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 36, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t25_0_0_0;
extern Il2CppType t36_0_0_0;
extern Il2CppType t36_0_0_0;
extern Il2CppType t34_0_0_0;
extern Il2CppType t34_0_0_0;
extern Il2CppType t15_0_0_0;
static ParameterInfo t30_m46_ParameterInfos[] = 
{
	{"target", 0, 134217744, &EmptyCustomAttributesCache, &t25_0_0_0},
	{"targetCoordinates", 1, 134217745, &EmptyCustomAttributesCache, &t36_0_0_0},
	{"moveSearch", 2, 134217746, &EmptyCustomAttributesCache, &t34_0_0_0},
	{"group", 3, 134217747, &EmptyCustomAttributesCache, &t15_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t5_t5_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m46_MI = 
{
	"AddNewMembersToMarkedCollisionGroupByDirection", (methodPointerType)&m46, &t30_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t5_t5_t5, t30_m46_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 4, false, false, 37, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m47_MI = 
{
	"AddNewMarkedCollisionGroups", (methodPointerType)&m47, &t30_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 38, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t15_0_0_0;
static ParameterInfo t30_m48_ParameterInfos[] = 
{
	{"group", 0, 134217748, &EmptyCustomAttributesCache, &t15_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m48_MI = 
{
	"AddSecondaryCollisionsToGroup", (methodPointerType)&m48, &t30_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t30_m48_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 39, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t25_0_0_0;
extern Il2CppType t36_0_0_0;
extern Il2CppType t34_0_0_0;
extern Il2CppType t34_0_0_0;
static ParameterInfo t30_m49_ParameterInfos[] = 
{
	{"target", 0, 134217749, &EmptyCustomAttributesCache, &t25_0_0_0},
	{"coordinates", 1, 134217750, &EmptyCustomAttributesCache, &t36_0_0_0},
	{"incrementSearch", 2, 134217751, &EmptyCustomAttributesCache, &t34_0_0_0},
	{"decrementSearch", 3, 134217752, &EmptyCustomAttributesCache, &t34_0_0_0},
};
extern Il2CppType t37_0_0_0;
extern void* RuntimeInvoker_t5_t5_t5_t5_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m49_MI = 
{
	"FindCollisions", (methodPointerType)&m49, &t30_TI, &t37_0_0_0, RuntimeInvoker_t5_t5_t5_t5_t5, t30_m49_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 4, false, false, 40, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t25_0_0_0;
extern Il2CppType t36_0_0_0;
extern Il2CppType t34_0_0_0;
extern Il2CppType t37_0_0_0;
extern Il2CppType t37_0_0_0;
static ParameterInfo t30_m50_ParameterInfos[] = 
{
	{"target", 0, 134217753, &EmptyCustomAttributesCache, &t25_0_0_0},
	{"targetCoordinates", 1, 134217754, &EmptyCustomAttributesCache, &t36_0_0_0},
	{"moveSearch", 2, 134217755, &EmptyCustomAttributesCache, &t34_0_0_0},
	{"foundCollisions", 3, 134217756, &EmptyCustomAttributesCache, &t37_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t5_t5_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m50_MI = 
{
	"FindCollisionsByDirection", (methodPointerType)&m50, &t30_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t5_t5_t5, t30_m50_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 4, false, false, 41, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t25_0_0_0;
extern Il2CppType t36_0_0_0;
extern Il2CppType t34_0_0_0;
extern Il2CppType t34_0_0_0;
extern Il2CppType t38_0_0_0;
extern Il2CppType t38_0_0_0;
static ParameterInfo t30_m51_ParameterInfos[] = 
{
	{"target", 0, 134217757, &EmptyCustomAttributesCache, &t25_0_0_0},
	{"coordinates", 1, 134217758, &EmptyCustomAttributesCache, &t36_0_0_0},
	{"incrementSearch", 2, 134217759, &EmptyCustomAttributesCache, &t34_0_0_0},
	{"decrementSearch", 3, 134217760, &EmptyCustomAttributesCache, &t34_0_0_0},
	{"groupMembers", 4, 134217761, &EmptyCustomAttributesCache, &t38_0_0_0},
};
extern Il2CppType t37_0_0_0;
extern void* RuntimeInvoker_t5_t5_t5_t5_t5_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m51_MI = 
{
	"FindSecondaryCollisions", (methodPointerType)&m51, &t30_TI, &t37_0_0_0, RuntimeInvoker_t5_t5_t5_t5_t5_t5, t30_m51_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 5, false, false, 42, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t25_0_0_0;
extern Il2CppType t36_0_0_0;
extern Il2CppType t34_0_0_0;
extern Il2CppType t37_0_0_0;
extern Il2CppType t38_0_0_0;
static ParameterInfo t30_m52_ParameterInfos[] = 
{
	{"target", 0, 134217762, &EmptyCustomAttributesCache, &t25_0_0_0},
	{"targetCoordinates", 1, 134217763, &EmptyCustomAttributesCache, &t36_0_0_0},
	{"moveSearch", 2, 134217764, &EmptyCustomAttributesCache, &t34_0_0_0},
	{"foundCollisions", 3, 134217765, &EmptyCustomAttributesCache, &t37_0_0_0},
	{"groupMembers", 4, 134217766, &EmptyCustomAttributesCache, &t38_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t5_t5_t5_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m52_MI = 
{
	"FindSeconadryCollisionsByDirection", (methodPointerType)&m52, &t30_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t5_t5_t5_t5, t30_m52_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 5, false, false, 43, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t25_0_0_0;
static ParameterInfo t30_m53_ParameterInfos[] = 
{
	{"target", 0, 134217767, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m53_MI = 
{
	"IsAlreadyMarkedCollision", (methodPointerType)&m53, &t30_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t30_m53_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 44, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t6_0_0_0;
extern Il2CppType t29_0_0_0;
extern Il2CppType t29_0_0_0;
extern CustomAttributesCache t30__CustomAttributeCache_t30_m54_Arg1_ParameterInfo;
static ParameterInfo t30_m54_ParameterInfos[] = 
{
	{"logicUpdate", 0, 134217768, &EmptyCustomAttributesCache, &t6_0_0_0},
	{"collisions", 1, 134217769, &t30__CustomAttributeCache_t30_m54_Arg1_ParameterInfo, &t29_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m54_MI = 
{
	"FinaliseCollisionGroups", (methodPointerType)&m54, &t30_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t5, t30_m54_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 2, false, false, 45, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t26_0_0_0;
static ParameterInfo t30_m55_ParameterInfos[] = 
{
	{"member", 0, 134217770, &EmptyCustomAttributesCache, &t26_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m55_MI = 
{
	"RemoveFromMine", (methodPointerType)&m55, &t30_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t30_m55_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 46, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t26_0_0_0;
static ParameterInfo t30_m56_ParameterInfos[] = 
{
	{"x", 0, 134217771, &EmptyCustomAttributesCache, &t26_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t30__CustomAttributeCache_m56;
MethodInfo m56_MI = 
{
	"<AddNewMembersToMarkedCollisions>m__2", (methodPointerType)&m56, &t30_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t30_m56_ParameterInfos, &t30__CustomAttributeCache_m56, 145, 0, 255, 1, false, false, 47, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t26_0_0_0;
static ParameterInfo t30_m57_ParameterInfos[] = 
{
	{"x", 0, 134217772, &EmptyCustomAttributesCache, &t26_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t30__CustomAttributeCache_m57;
MethodInfo m57_MI = 
{
	"<AddNewMembersToMarkedCollisions>m__3", (methodPointerType)&m57, &t30_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t30_m57_ParameterInfos, &t30__CustomAttributeCache_m57, 145, 0, 255, 1, false, false, 48, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t36_0_0_0;
static ParameterInfo t30_m58_ParameterInfos[] = 
{
	{"coordinates", 0, 134217773, &EmptyCustomAttributesCache, &t36_0_0_0},
};
extern Il2CppType t36_0_0_0;
extern void* RuntimeInvoker_t5_t5 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t30__CustomAttributeCache_m58;
MethodInfo m58_MI = 
{
	"<AddNewMembersToMarkedCollisions>m__4", (methodPointerType)&m58, &t30_TI, &t36_0_0_0, RuntimeInvoker_t5_t5, t30_m58_ParameterInfos, &t30__CustomAttributeCache_m58, 145, 0, 255, 1, false, false, 49, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t36_0_0_0;
static ParameterInfo t30_m59_ParameterInfos[] = 
{
	{"coordinates", 0, 134217774, &EmptyCustomAttributesCache, &t36_0_0_0},
};
extern Il2CppType t36_0_0_0;
extern void* RuntimeInvoker_t5_t5 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t30__CustomAttributeCache_m59;
MethodInfo m59_MI = 
{
	"<AddNewMembersToMarkedCollisions>m__5", (methodPointerType)&m59, &t30_TI, &t36_0_0_0, RuntimeInvoker_t5_t5, t30_m59_ParameterInfos, &t30__CustomAttributeCache_m59, 145, 0, 255, 1, false, false, 50, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t26_0_0_0;
static ParameterInfo t30_m60_ParameterInfos[] = 
{
	{"x", 0, 134217775, &EmptyCustomAttributesCache, &t26_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t30__CustomAttributeCache_m60;
MethodInfo m60_MI = 
{
	"<AddNewMembersToMarkedCollisions>m__6", (methodPointerType)&m60, &t30_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t30_m60_ParameterInfos, &t30__CustomAttributeCache_m60, 145, 0, 255, 1, false, false, 51, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t26_0_0_0;
static ParameterInfo t30_m61_ParameterInfos[] = 
{
	{"x", 0, 134217776, &EmptyCustomAttributesCache, &t26_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t30__CustomAttributeCache_m61;
MethodInfo m61_MI = 
{
	"<AddNewMembersToMarkedCollisions>m__7", (methodPointerType)&m61, &t30_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t30_m61_ParameterInfos, &t30__CustomAttributeCache_m61, 145, 0, 255, 1, false, false, 52, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t36_0_0_0;
static ParameterInfo t30_m62_ParameterInfos[] = 
{
	{"coordinates", 0, 134217777, &EmptyCustomAttributesCache, &t36_0_0_0},
};
extern Il2CppType t36_0_0_0;
extern void* RuntimeInvoker_t5_t5 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t30__CustomAttributeCache_m62;
MethodInfo m62_MI = 
{
	"<AddNewMembersToMarkedCollisions>m__8", (methodPointerType)&m62, &t30_TI, &t36_0_0_0, RuntimeInvoker_t5_t5, t30_m62_ParameterInfos, &t30__CustomAttributeCache_m62, 145, 0, 255, 1, false, false, 53, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t36_0_0_0;
static ParameterInfo t30_m63_ParameterInfos[] = 
{
	{"coordinates", 0, 134217778, &EmptyCustomAttributesCache, &t36_0_0_0},
};
extern Il2CppType t36_0_0_0;
extern void* RuntimeInvoker_t5_t5 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t30__CustomAttributeCache_m63;
MethodInfo m63_MI = 
{
	"<AddNewMembersToMarkedCollisions>m__9", (methodPointerType)&m63, &t30_TI, &t36_0_0_0, RuntimeInvoker_t5_t5, t30_m63_ParameterInfos, &t30__CustomAttributeCache_m63, 145, 0, 255, 1, false, false, 54, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t26_0_0_0;
static ParameterInfo t30_m64_ParameterInfos[] = 
{
	{"x", 0, 134217779, &EmptyCustomAttributesCache, &t26_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t30__CustomAttributeCache_m64;
MethodInfo m64_MI = 
{
	"<AddNewMembersToMarkedCollisions>m__A", (methodPointerType)&m64, &t30_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t30_m64_ParameterInfos, &t30__CustomAttributeCache_m64, 145, 0, 255, 1, false, false, 55, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t26_0_0_0;
static ParameterInfo t30_m65_ParameterInfos[] = 
{
	{"x", 0, 134217780, &EmptyCustomAttributesCache, &t26_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t30__CustomAttributeCache_m65;
MethodInfo m65_MI = 
{
	"<AddNewMembersToMarkedCollisions>m__B", (methodPointerType)&m65, &t30_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t30_m65_ParameterInfos, &t30__CustomAttributeCache_m65, 145, 0, 255, 1, false, false, 56, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t36_0_0_0;
static ParameterInfo t30_m66_ParameterInfos[] = 
{
	{"coordinates", 0, 134217781, &EmptyCustomAttributesCache, &t36_0_0_0},
};
extern Il2CppType t36_0_0_0;
extern void* RuntimeInvoker_t5_t5 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t30__CustomAttributeCache_m66;
MethodInfo m66_MI = 
{
	"<AddNewMembersToMarkedCollisions>m__C", (methodPointerType)&m66, &t30_TI, &t36_0_0_0, RuntimeInvoker_t5_t5, t30_m66_ParameterInfos, &t30__CustomAttributeCache_m66, 145, 0, 255, 1, false, false, 57, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t36_0_0_0;
static ParameterInfo t30_m67_ParameterInfos[] = 
{
	{"coordinates", 0, 134217782, &EmptyCustomAttributesCache, &t36_0_0_0},
};
extern Il2CppType t36_0_0_0;
extern void* RuntimeInvoker_t5_t5 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t30__CustomAttributeCache_m67;
MethodInfo m67_MI = 
{
	"<AddNewMembersToMarkedCollisions>m__D", (methodPointerType)&m67, &t30_TI, &t36_0_0_0, RuntimeInvoker_t5_t5, t30_m67_ParameterInfos, &t30__CustomAttributeCache_m67, 145, 0, 255, 1, false, false, 58, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t26_0_0_0;
static ParameterInfo t30_m68_ParameterInfos[] = 
{
	{"x", 0, 134217783, &EmptyCustomAttributesCache, &t26_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t30__CustomAttributeCache_m68;
MethodInfo m68_MI = 
{
	"<AddNewMembersToMarkedCollisions>m__E", (methodPointerType)&m68, &t30_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t30_m68_ParameterInfos, &t30__CustomAttributeCache_m68, 145, 0, 255, 1, false, false, 59, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t26_0_0_0;
static ParameterInfo t30_m69_ParameterInfos[] = 
{
	{"x", 0, 134217784, &EmptyCustomAttributesCache, &t26_0_0_0},
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110_t5 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t30__CustomAttributeCache_m69;
MethodInfo m69_MI = 
{
	"<AddNewMembersToMarkedCollisions>m__F", (methodPointerType)&m69, &t30_TI, &t110_0_0_0, RuntimeInvoker_t110_t5, t30_m69_ParameterInfos, &t30__CustomAttributeCache_m69, 145, 0, 255, 1, false, false, 60, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t36_0_0_0;
static ParameterInfo t30_m70_ParameterInfos[] = 
{
	{"coordinates", 0, 134217785, &EmptyCustomAttributesCache, &t36_0_0_0},
};
extern Il2CppType t36_0_0_0;
extern void* RuntimeInvoker_t5_t5 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t30__CustomAttributeCache_m70;
MethodInfo m70_MI = 
{
	"<AddNewMembersToMarkedCollisions>m__10", (methodPointerType)&m70, &t30_TI, &t36_0_0_0, RuntimeInvoker_t5_t5, t30_m70_ParameterInfos, &t30__CustomAttributeCache_m70, 145, 0, 255, 1, false, false, 61, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t36_0_0_0;
static ParameterInfo t30_m71_ParameterInfos[] = 
{
	{"coordinates", 0, 134217786, &EmptyCustomAttributesCache, &t36_0_0_0},
};
extern Il2CppType t36_0_0_0;
extern void* RuntimeInvoker_t5_t5 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t30__CustomAttributeCache_m71;
MethodInfo m71_MI = 
{
	"<AddNewMembersToMarkedCollisions>m__11", (methodPointerType)&m71, &t30_TI, &t36_0_0_0, RuntimeInvoker_t5_t5, t30_m71_ParameterInfos, &t30__CustomAttributeCache_m71, 145, 0, 255, 1, false, false, 62, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t36_0_0_0;
static ParameterInfo t30_m72_ParameterInfos[] = 
{
	{"coordinates", 0, 134217787, &EmptyCustomAttributesCache, &t36_0_0_0},
};
extern Il2CppType t36_0_0_0;
extern void* RuntimeInvoker_t5_t5 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t30__CustomAttributeCache_m72;
MethodInfo m72_MI = 
{
	"<AddNewMarkedCollisionGroups>m__12", (methodPointerType)&m72, &t30_TI, &t36_0_0_0, RuntimeInvoker_t5_t5, t30_m72_ParameterInfos, &t30__CustomAttributeCache_m72, 145, 0, 255, 1, false, false, 63, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t36_0_0_0;
static ParameterInfo t30_m73_ParameterInfos[] = 
{
	{"coordinates", 0, 134217788, &EmptyCustomAttributesCache, &t36_0_0_0},
};
extern Il2CppType t36_0_0_0;
extern void* RuntimeInvoker_t5_t5 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t30__CustomAttributeCache_m73;
MethodInfo m73_MI = 
{
	"<AddNewMarkedCollisionGroups>m__13", (methodPointerType)&m73, &t30_TI, &t36_0_0_0, RuntimeInvoker_t5_t5, t30_m73_ParameterInfos, &t30__CustomAttributeCache_m73, 145, 0, 255, 1, false, false, 64, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t36_0_0_0;
static ParameterInfo t30_m74_ParameterInfos[] = 
{
	{"coordinates", 0, 134217789, &EmptyCustomAttributesCache, &t36_0_0_0},
};
extern Il2CppType t36_0_0_0;
extern void* RuntimeInvoker_t5_t5 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t30__CustomAttributeCache_m74;
MethodInfo m74_MI = 
{
	"<AddNewMarkedCollisionGroups>m__14", (methodPointerType)&m74, &t30_TI, &t36_0_0_0, RuntimeInvoker_t5_t5, t30_m74_ParameterInfos, &t30__CustomAttributeCache_m74, 145, 0, 255, 1, false, false, 65, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t36_0_0_0;
static ParameterInfo t30_m75_ParameterInfos[] = 
{
	{"coordinates", 0, 134217790, &EmptyCustomAttributesCache, &t36_0_0_0},
};
extern Il2CppType t36_0_0_0;
extern void* RuntimeInvoker_t5_t5 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t30__CustomAttributeCache_m75;
MethodInfo m75_MI = 
{
	"<AddNewMarkedCollisionGroups>m__15", (methodPointerType)&m75, &t30_TI, &t36_0_0_0, RuntimeInvoker_t5_t5, t30_m75_ParameterInfos, &t30__CustomAttributeCache_m75, 145, 0, 255, 1, false, false, 66, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t36_0_0_0;
static ParameterInfo t30_m76_ParameterInfos[] = 
{
	{"coordinates", 0, 134217791, &EmptyCustomAttributesCache, &t36_0_0_0},
};
extern Il2CppType t36_0_0_0;
extern void* RuntimeInvoker_t5_t5 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t30__CustomAttributeCache_m76;
MethodInfo m76_MI = 
{
	"<AddNewMarkedCollisionGroups>m__16", (methodPointerType)&m76, &t30_TI, &t36_0_0_0, RuntimeInvoker_t5_t5, t30_m76_ParameterInfos, &t30__CustomAttributeCache_m76, 145, 0, 255, 1, false, false, 67, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t36_0_0_0;
static ParameterInfo t30_m77_ParameterInfos[] = 
{
	{"coordinates", 0, 134217792, &EmptyCustomAttributesCache, &t36_0_0_0},
};
extern Il2CppType t36_0_0_0;
extern void* RuntimeInvoker_t5_t5 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t30__CustomAttributeCache_m77;
MethodInfo m77_MI = 
{
	"<AddNewMarkedCollisionGroups>m__17", (methodPointerType)&m77, &t30_TI, &t36_0_0_0, RuntimeInvoker_t5_t5, t30_m77_ParameterInfos, &t30__CustomAttributeCache_m77, 145, 0, 255, 1, false, false, 68, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t36_0_0_0;
static ParameterInfo t30_m78_ParameterInfos[] = 
{
	{"coordinates", 0, 134217793, &EmptyCustomAttributesCache, &t36_0_0_0},
};
extern Il2CppType t36_0_0_0;
extern void* RuntimeInvoker_t5_t5 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t30__CustomAttributeCache_m78;
MethodInfo m78_MI = 
{
	"<AddNewMarkedCollisionGroups>m__18", (methodPointerType)&m78, &t30_TI, &t36_0_0_0, RuntimeInvoker_t5_t5, t30_m78_ParameterInfos, &t30__CustomAttributeCache_m78, 145, 0, 255, 1, false, false, 69, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t36_0_0_0;
static ParameterInfo t30_m79_ParameterInfos[] = 
{
	{"coordinates", 0, 134217794, &EmptyCustomAttributesCache, &t36_0_0_0},
};
extern Il2CppType t36_0_0_0;
extern void* RuntimeInvoker_t5_t5 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t30__CustomAttributeCache_m79;
MethodInfo m79_MI = 
{
	"<AddNewMarkedCollisionGroups>m__19", (methodPointerType)&m79, &t30_TI, &t36_0_0_0, RuntimeInvoker_t5_t5, t30_m79_ParameterInfos, &t30__CustomAttributeCache_m79, 145, 0, 255, 1, false, false, 70, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t15_0_0_0;
static ParameterInfo t30_m80_ParameterInfos[] = 
{
	{"group", 0, 134217795, &EmptyCustomAttributesCache, &t15_0_0_0},
};
extern Il2CppType t15_0_0_0;
extern void* RuntimeInvoker_t5_t5 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t30__CustomAttributeCache_m80;
MethodInfo m80_MI = 
{
	"<AddNewMarkedCollisionGroups>m__1A", (methodPointerType)&m80, &t30_TI, &t15_0_0_0, RuntimeInvoker_t5_t5, t30_m80_ParameterInfos, &t30__CustomAttributeCache_m80, 145, 0, 255, 1, false, false, 71, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t36_0_0_0;
static ParameterInfo t30_m81_ParameterInfos[] = 
{
	{"coordinates", 0, 134217796, &EmptyCustomAttributesCache, &t36_0_0_0},
};
extern Il2CppType t36_0_0_0;
extern void* RuntimeInvoker_t5_t5 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t30__CustomAttributeCache_m81;
MethodInfo m81_MI = 
{
	"<AddSecondaryCollisionsToGroup>m__1B", (methodPointerType)&m81, &t30_TI, &t36_0_0_0, RuntimeInvoker_t5_t5, t30_m81_ParameterInfos, &t30__CustomAttributeCache_m81, 145, 0, 255, 1, false, false, 72, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t36_0_0_0;
static ParameterInfo t30_m82_ParameterInfos[] = 
{
	{"coordinates", 0, 134217797, &EmptyCustomAttributesCache, &t36_0_0_0},
};
extern Il2CppType t36_0_0_0;
extern void* RuntimeInvoker_t5_t5 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t30__CustomAttributeCache_m82;
MethodInfo m82_MI = 
{
	"<AddSecondaryCollisionsToGroup>m__1C", (methodPointerType)&m82, &t30_TI, &t36_0_0_0, RuntimeInvoker_t5_t5, t30_m82_ParameterInfos, &t30__CustomAttributeCache_m82, 145, 0, 255, 1, false, false, 73, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t36_0_0_0;
static ParameterInfo t30_m83_ParameterInfos[] = 
{
	{"coordinates", 0, 134217798, &EmptyCustomAttributesCache, &t36_0_0_0},
};
extern Il2CppType t36_0_0_0;
extern void* RuntimeInvoker_t5_t5 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t30__CustomAttributeCache_m83;
MethodInfo m83_MI = 
{
	"<AddSecondaryCollisionsToGroup>m__1D", (methodPointerType)&m83, &t30_TI, &t36_0_0_0, RuntimeInvoker_t5_t5, t30_m83_ParameterInfos, &t30__CustomAttributeCache_m83, 145, 0, 255, 1, false, false, 74, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t36_0_0_0;
static ParameterInfo t30_m84_ParameterInfos[] = 
{
	{"coordinates", 0, 134217799, &EmptyCustomAttributesCache, &t36_0_0_0},
};
extern Il2CppType t36_0_0_0;
extern void* RuntimeInvoker_t5_t5 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t30__CustomAttributeCache_m84;
MethodInfo m84_MI = 
{
	"<AddSecondaryCollisionsToGroup>m__1E", (methodPointerType)&m84, &t30_TI, &t36_0_0_0, RuntimeInvoker_t5_t5, t30_m84_ParameterInfos, &t30__CustomAttributeCache_m84, 145, 0, 255, 1, false, false, 75, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t36_0_0_0;
static ParameterInfo t30_m85_ParameterInfos[] = 
{
	{"coordinates", 0, 134217800, &EmptyCustomAttributesCache, &t36_0_0_0},
};
extern Il2CppType t36_0_0_0;
extern void* RuntimeInvoker_t5_t5 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t30__CustomAttributeCache_m85;
MethodInfo m85_MI = 
{
	"<AddSecondaryCollisionsToGroup>m__1F", (methodPointerType)&m85, &t30_TI, &t36_0_0_0, RuntimeInvoker_t5_t5, t30_m85_ParameterInfos, &t30__CustomAttributeCache_m85, 145, 0, 255, 1, false, false, 76, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t36_0_0_0;
static ParameterInfo t30_m86_ParameterInfos[] = 
{
	{"coordinates", 0, 134217801, &EmptyCustomAttributesCache, &t36_0_0_0},
};
extern Il2CppType t36_0_0_0;
extern void* RuntimeInvoker_t5_t5 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t30__CustomAttributeCache_m86;
MethodInfo m86_MI = 
{
	"<AddSecondaryCollisionsToGroup>m__20", (methodPointerType)&m86, &t30_TI, &t36_0_0_0, RuntimeInvoker_t5_t5, t30_m86_ParameterInfos, &t30__CustomAttributeCache_m86, 145, 0, 255, 1, false, false, 77, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t36_0_0_0;
static ParameterInfo t30_m87_ParameterInfos[] = 
{
	{"coordinates", 0, 134217802, &EmptyCustomAttributesCache, &t36_0_0_0},
};
extern Il2CppType t36_0_0_0;
extern void* RuntimeInvoker_t5_t5 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t30__CustomAttributeCache_m87;
MethodInfo m87_MI = 
{
	"<AddSecondaryCollisionsToGroup>m__21", (methodPointerType)&m87, &t30_TI, &t36_0_0_0, RuntimeInvoker_t5_t5, t30_m87_ParameterInfos, &t30__CustomAttributeCache_m87, 145, 0, 255, 1, false, false, 78, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t36_0_0_0;
static ParameterInfo t30_m88_ParameterInfos[] = 
{
	{"coordinates", 0, 134217803, &EmptyCustomAttributesCache, &t36_0_0_0},
};
extern Il2CppType t36_0_0_0;
extern void* RuntimeInvoker_t5_t5 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t30__CustomAttributeCache_m88;
MethodInfo m88_MI = 
{
	"<AddSecondaryCollisionsToGroup>m__22", (methodPointerType)&m88, &t30_TI, &t36_0_0_0, RuntimeInvoker_t5_t5, t30_m88_ParameterInfos, &t30__CustomAttributeCache_m88, 145, 0, 255, 1, false, false, 79, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t30_MIs[] =
{
	&m42_MI,
	&m43_MI,
	&m44_MI,
	&m45_MI,
	&m46_MI,
	&m47_MI,
	&m48_MI,
	&m49_MI,
	&m50_MI,
	&m51_MI,
	&m52_MI,
	&m53_MI,
	&m54_MI,
	&m55_MI,
	&m56_MI,
	&m57_MI,
	&m58_MI,
	&m59_MI,
	&m60_MI,
	&m61_MI,
	&m62_MI,
	&m63_MI,
	&m64_MI,
	&m65_MI,
	&m66_MI,
	&m67_MI,
	&m68_MI,
	&m69_MI,
	&m70_MI,
	&m71_MI,
	&m72_MI,
	&m73_MI,
	&m74_MI,
	&m75_MI,
	&m76_MI,
	&m77_MI,
	&m78_MI,
	&m79_MI,
	&m80_MI,
	&m81_MI,
	&m82_MI,
	&m83_MI,
	&m84_MI,
	&m85_MI,
	&m86_MI,
	&m87_MI,
	&m88_MI,
	NULL
};
extern TypeInfo t23_TI;
extern TypeInfo t24_TI;
extern TypeInfo t27_TI;
extern TypeInfo t28_TI;
static TypeInfo* t30_TI__nestedTypes[5] =
{
	&t23_TI,
	&t24_TI,
	&t27_TI,
	&t28_TI,
	NULL
};
static MethodInfo* t30_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
};
void t30_CustomAttributesCacheGenerator_U3CU3Ef__am$cache1(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t30_CustomAttributesCacheGenerator_U3CU3Ef__am$cache2(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t30_CustomAttributesCacheGenerator_U3CU3Ef__am$cache3(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t30_CustomAttributesCacheGenerator_U3CU3Ef__am$cache4(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t30_CustomAttributesCacheGenerator_U3CU3Ef__am$cache5(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t30_CustomAttributesCacheGenerator_U3CU3Ef__am$cache6(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t30_CustomAttributesCacheGenerator_U3CU3Ef__am$cache7(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t30_CustomAttributesCacheGenerator_U3CU3Ef__am$cache8(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t30_CustomAttributesCacheGenerator_U3CU3Ef__am$cache9(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t30_CustomAttributesCacheGenerator_U3CU3Ef__am$cacheA(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t30_CustomAttributesCacheGenerator_U3CU3Ef__am$cacheB(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t30_CustomAttributesCacheGenerator_U3CU3Ef__am$cacheC(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t30_CustomAttributesCacheGenerator_U3CU3Ef__am$cacheD(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t30_CustomAttributesCacheGenerator_U3CU3Ef__am$cacheE(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t30_CustomAttributesCacheGenerator_U3CU3Ef__am$cacheF(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t30_CustomAttributesCacheGenerator_U3CU3Ef__am$cache10(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t30_CustomAttributesCacheGenerator_U3CU3Ef__am$cache11(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t30_CustomAttributesCacheGenerator_U3CU3Ef__am$cache12(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t30_CustomAttributesCacheGenerator_U3CU3Ef__am$cache13(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t30_CustomAttributesCacheGenerator_U3CU3Ef__am$cache14(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t30_CustomAttributesCacheGenerator_U3CU3Ef__am$cache15(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t30_CustomAttributesCacheGenerator_U3CU3Ef__am$cache16(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t30_CustomAttributesCacheGenerator_U3CU3Ef__am$cache17(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t30_CustomAttributesCacheGenerator_U3CU3Ef__am$cache18(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t30_CustomAttributesCacheGenerator_U3CU3Ef__am$cache19(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t30_CustomAttributesCacheGenerator_U3CU3Ef__am$cache1A(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t30_CustomAttributesCacheGenerator_U3CU3Ef__am$cache1B(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t30_CustomAttributesCacheGenerator_U3CU3Ef__am$cache1C(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t30_CustomAttributesCacheGenerator_U3CU3Ef__am$cache1D(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t30_CustomAttributesCacheGenerator_U3CU3Ef__am$cache1E(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t30_CustomAttributesCacheGenerator_U3CU3Ef__am$cache1F(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t30_CustomAttributesCacheGenerator_U3CU3Ef__am$cache20(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t30_CustomAttributesCacheGenerator_U3CU3Ef__am$cache21(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo t143_TI;
#include "t143.h"
#include "t143MD.h"
extern MethodInfo m551_MI;
void t30_CustomAttributesCacheGenerator_t30_m54_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t143 * tmp;
		tmp = (t143 *)il2cpp_codegen_object_new (&t143_TI);
		m551(tmp, &m551_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t30_CustomAttributesCacheGenerator_m56(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t30_CustomAttributesCacheGenerator_m57(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t30_CustomAttributesCacheGenerator_m58(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t30_CustomAttributesCacheGenerator_m59(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t30_CustomAttributesCacheGenerator_m60(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t30_CustomAttributesCacheGenerator_m61(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t30_CustomAttributesCacheGenerator_m62(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t30_CustomAttributesCacheGenerator_m63(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t30_CustomAttributesCacheGenerator_m64(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t30_CustomAttributesCacheGenerator_m65(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t30_CustomAttributesCacheGenerator_m66(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t30_CustomAttributesCacheGenerator_m67(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t30_CustomAttributesCacheGenerator_m68(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t30_CustomAttributesCacheGenerator_m69(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t30_CustomAttributesCacheGenerator_m70(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t30_CustomAttributesCacheGenerator_m71(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t30_CustomAttributesCacheGenerator_m72(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t30_CustomAttributesCacheGenerator_m73(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t30_CustomAttributesCacheGenerator_m74(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t30_CustomAttributesCacheGenerator_m75(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t30_CustomAttributesCacheGenerator_m76(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t30_CustomAttributesCacheGenerator_m77(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t30_CustomAttributesCacheGenerator_m78(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t30_CustomAttributesCacheGenerator_m79(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t30_CustomAttributesCacheGenerator_m80(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t30_CustomAttributesCacheGenerator_m81(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t30_CustomAttributesCacheGenerator_m82(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t30_CustomAttributesCacheGenerator_m83(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t30_CustomAttributesCacheGenerator_m84(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t30_CustomAttributesCacheGenerator_m85(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t30_CustomAttributesCacheGenerator_m86(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t30_CustomAttributesCacheGenerator_m87(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t30_CustomAttributesCacheGenerator_m88(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t30__CustomAttributeCache_U3CU3Ef__am$cache1 = {
1,
NULL,
&t30_CustomAttributesCacheGenerator_U3CU3Ef__am$cache1
};
CustomAttributesCache t30__CustomAttributeCache_U3CU3Ef__am$cache2 = {
1,
NULL,
&t30_CustomAttributesCacheGenerator_U3CU3Ef__am$cache2
};
CustomAttributesCache t30__CustomAttributeCache_U3CU3Ef__am$cache3 = {
1,
NULL,
&t30_CustomAttributesCacheGenerator_U3CU3Ef__am$cache3
};
CustomAttributesCache t30__CustomAttributeCache_U3CU3Ef__am$cache4 = {
1,
NULL,
&t30_CustomAttributesCacheGenerator_U3CU3Ef__am$cache4
};
CustomAttributesCache t30__CustomAttributeCache_U3CU3Ef__am$cache5 = {
1,
NULL,
&t30_CustomAttributesCacheGenerator_U3CU3Ef__am$cache5
};
CustomAttributesCache t30__CustomAttributeCache_U3CU3Ef__am$cache6 = {
1,
NULL,
&t30_CustomAttributesCacheGenerator_U3CU3Ef__am$cache6
};
CustomAttributesCache t30__CustomAttributeCache_U3CU3Ef__am$cache7 = {
1,
NULL,
&t30_CustomAttributesCacheGenerator_U3CU3Ef__am$cache7
};
CustomAttributesCache t30__CustomAttributeCache_U3CU3Ef__am$cache8 = {
1,
NULL,
&t30_CustomAttributesCacheGenerator_U3CU3Ef__am$cache8
};
CustomAttributesCache t30__CustomAttributeCache_U3CU3Ef__am$cache9 = {
1,
NULL,
&t30_CustomAttributesCacheGenerator_U3CU3Ef__am$cache9
};
CustomAttributesCache t30__CustomAttributeCache_U3CU3Ef__am$cacheA = {
1,
NULL,
&t30_CustomAttributesCacheGenerator_U3CU3Ef__am$cacheA
};
CustomAttributesCache t30__CustomAttributeCache_U3CU3Ef__am$cacheB = {
1,
NULL,
&t30_CustomAttributesCacheGenerator_U3CU3Ef__am$cacheB
};
CustomAttributesCache t30__CustomAttributeCache_U3CU3Ef__am$cacheC = {
1,
NULL,
&t30_CustomAttributesCacheGenerator_U3CU3Ef__am$cacheC
};
CustomAttributesCache t30__CustomAttributeCache_U3CU3Ef__am$cacheD = {
1,
NULL,
&t30_CustomAttributesCacheGenerator_U3CU3Ef__am$cacheD
};
CustomAttributesCache t30__CustomAttributeCache_U3CU3Ef__am$cacheE = {
1,
NULL,
&t30_CustomAttributesCacheGenerator_U3CU3Ef__am$cacheE
};
CustomAttributesCache t30__CustomAttributeCache_U3CU3Ef__am$cacheF = {
1,
NULL,
&t30_CustomAttributesCacheGenerator_U3CU3Ef__am$cacheF
};
CustomAttributesCache t30__CustomAttributeCache_U3CU3Ef__am$cache10 = {
1,
NULL,
&t30_CustomAttributesCacheGenerator_U3CU3Ef__am$cache10
};
CustomAttributesCache t30__CustomAttributeCache_U3CU3Ef__am$cache11 = {
1,
NULL,
&t30_CustomAttributesCacheGenerator_U3CU3Ef__am$cache11
};
CustomAttributesCache t30__CustomAttributeCache_U3CU3Ef__am$cache12 = {
1,
NULL,
&t30_CustomAttributesCacheGenerator_U3CU3Ef__am$cache12
};
CustomAttributesCache t30__CustomAttributeCache_U3CU3Ef__am$cache13 = {
1,
NULL,
&t30_CustomAttributesCacheGenerator_U3CU3Ef__am$cache13
};
CustomAttributesCache t30__CustomAttributeCache_U3CU3Ef__am$cache14 = {
1,
NULL,
&t30_CustomAttributesCacheGenerator_U3CU3Ef__am$cache14
};
CustomAttributesCache t30__CustomAttributeCache_U3CU3Ef__am$cache15 = {
1,
NULL,
&t30_CustomAttributesCacheGenerator_U3CU3Ef__am$cache15
};
CustomAttributesCache t30__CustomAttributeCache_U3CU3Ef__am$cache16 = {
1,
NULL,
&t30_CustomAttributesCacheGenerator_U3CU3Ef__am$cache16
};
CustomAttributesCache t30__CustomAttributeCache_U3CU3Ef__am$cache17 = {
1,
NULL,
&t30_CustomAttributesCacheGenerator_U3CU3Ef__am$cache17
};
CustomAttributesCache t30__CustomAttributeCache_U3CU3Ef__am$cache18 = {
1,
NULL,
&t30_CustomAttributesCacheGenerator_U3CU3Ef__am$cache18
};
CustomAttributesCache t30__CustomAttributeCache_U3CU3Ef__am$cache19 = {
1,
NULL,
&t30_CustomAttributesCacheGenerator_U3CU3Ef__am$cache19
};
CustomAttributesCache t30__CustomAttributeCache_U3CU3Ef__am$cache1A = {
1,
NULL,
&t30_CustomAttributesCacheGenerator_U3CU3Ef__am$cache1A
};
CustomAttributesCache t30__CustomAttributeCache_U3CU3Ef__am$cache1B = {
1,
NULL,
&t30_CustomAttributesCacheGenerator_U3CU3Ef__am$cache1B
};
CustomAttributesCache t30__CustomAttributeCache_U3CU3Ef__am$cache1C = {
1,
NULL,
&t30_CustomAttributesCacheGenerator_U3CU3Ef__am$cache1C
};
CustomAttributesCache t30__CustomAttributeCache_U3CU3Ef__am$cache1D = {
1,
NULL,
&t30_CustomAttributesCacheGenerator_U3CU3Ef__am$cache1D
};
CustomAttributesCache t30__CustomAttributeCache_U3CU3Ef__am$cache1E = {
1,
NULL,
&t30_CustomAttributesCacheGenerator_U3CU3Ef__am$cache1E
};
CustomAttributesCache t30__CustomAttributeCache_U3CU3Ef__am$cache1F = {
1,
NULL,
&t30_CustomAttributesCacheGenerator_U3CU3Ef__am$cache1F
};
CustomAttributesCache t30__CustomAttributeCache_U3CU3Ef__am$cache20 = {
1,
NULL,
&t30_CustomAttributesCacheGenerator_U3CU3Ef__am$cache20
};
CustomAttributesCache t30__CustomAttributeCache_U3CU3Ef__am$cache21 = {
1,
NULL,
&t30_CustomAttributesCacheGenerator_U3CU3Ef__am$cache21
};
CustomAttributesCache t30__CustomAttributeCache_t30_m54_Arg1_ParameterInfo = {
1,
NULL,
&t30_CustomAttributesCacheGenerator_t30_m54_Arg1_ParameterInfo
};
CustomAttributesCache t30__CustomAttributeCache_m56 = {
1,
NULL,
&t30_CustomAttributesCacheGenerator_m56
};
CustomAttributesCache t30__CustomAttributeCache_m57 = {
1,
NULL,
&t30_CustomAttributesCacheGenerator_m57
};
CustomAttributesCache t30__CustomAttributeCache_m58 = {
1,
NULL,
&t30_CustomAttributesCacheGenerator_m58
};
CustomAttributesCache t30__CustomAttributeCache_m59 = {
1,
NULL,
&t30_CustomAttributesCacheGenerator_m59
};
CustomAttributesCache t30__CustomAttributeCache_m60 = {
1,
NULL,
&t30_CustomAttributesCacheGenerator_m60
};
CustomAttributesCache t30__CustomAttributeCache_m61 = {
1,
NULL,
&t30_CustomAttributesCacheGenerator_m61
};
CustomAttributesCache t30__CustomAttributeCache_m62 = {
1,
NULL,
&t30_CustomAttributesCacheGenerator_m62
};
CustomAttributesCache t30__CustomAttributeCache_m63 = {
1,
NULL,
&t30_CustomAttributesCacheGenerator_m63
};
CustomAttributesCache t30__CustomAttributeCache_m64 = {
1,
NULL,
&t30_CustomAttributesCacheGenerator_m64
};
CustomAttributesCache t30__CustomAttributeCache_m65 = {
1,
NULL,
&t30_CustomAttributesCacheGenerator_m65
};
CustomAttributesCache t30__CustomAttributeCache_m66 = {
1,
NULL,
&t30_CustomAttributesCacheGenerator_m66
};
CustomAttributesCache t30__CustomAttributeCache_m67 = {
1,
NULL,
&t30_CustomAttributesCacheGenerator_m67
};
CustomAttributesCache t30__CustomAttributeCache_m68 = {
1,
NULL,
&t30_CustomAttributesCacheGenerator_m68
};
CustomAttributesCache t30__CustomAttributeCache_m69 = {
1,
NULL,
&t30_CustomAttributesCacheGenerator_m69
};
CustomAttributesCache t30__CustomAttributeCache_m70 = {
1,
NULL,
&t30_CustomAttributesCacheGenerator_m70
};
CustomAttributesCache t30__CustomAttributeCache_m71 = {
1,
NULL,
&t30_CustomAttributesCacheGenerator_m71
};
CustomAttributesCache t30__CustomAttributeCache_m72 = {
1,
NULL,
&t30_CustomAttributesCacheGenerator_m72
};
CustomAttributesCache t30__CustomAttributeCache_m73 = {
1,
NULL,
&t30_CustomAttributesCacheGenerator_m73
};
CustomAttributesCache t30__CustomAttributeCache_m74 = {
1,
NULL,
&t30_CustomAttributesCacheGenerator_m74
};
CustomAttributesCache t30__CustomAttributeCache_m75 = {
1,
NULL,
&t30_CustomAttributesCacheGenerator_m75
};
CustomAttributesCache t30__CustomAttributeCache_m76 = {
1,
NULL,
&t30_CustomAttributesCacheGenerator_m76
};
CustomAttributesCache t30__CustomAttributeCache_m77 = {
1,
NULL,
&t30_CustomAttributesCacheGenerator_m77
};
CustomAttributesCache t30__CustomAttributeCache_m78 = {
1,
NULL,
&t30_CustomAttributesCacheGenerator_m78
};
CustomAttributesCache t30__CustomAttributeCache_m79 = {
1,
NULL,
&t30_CustomAttributesCacheGenerator_m79
};
CustomAttributesCache t30__CustomAttributeCache_m80 = {
1,
NULL,
&t30_CustomAttributesCacheGenerator_m80
};
CustomAttributesCache t30__CustomAttributeCache_m81 = {
1,
NULL,
&t30_CustomAttributesCacheGenerator_m81
};
CustomAttributesCache t30__CustomAttributeCache_m82 = {
1,
NULL,
&t30_CustomAttributesCacheGenerator_m82
};
CustomAttributesCache t30__CustomAttributeCache_m83 = {
1,
NULL,
&t30_CustomAttributesCacheGenerator_m83
};
CustomAttributesCache t30__CustomAttributeCache_m84 = {
1,
NULL,
&t30_CustomAttributesCacheGenerator_m84
};
CustomAttributesCache t30__CustomAttributeCache_m85 = {
1,
NULL,
&t30_CustomAttributesCacheGenerator_m85
};
CustomAttributesCache t30__CustomAttributeCache_m86 = {
1,
NULL,
&t30_CustomAttributesCacheGenerator_m86
};
CustomAttributesCache t30__CustomAttributeCache_m87 = {
1,
NULL,
&t30_CustomAttributesCacheGenerator_m87
};
CustomAttributesCache t30__CustomAttributeCache_m88 = {
1,
NULL,
&t30_CustomAttributesCacheGenerator_m88
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType t30_0_0_0;
extern Il2CppType t30_1_0_0;
struct t30;
extern CustomAttributesCache t30__CustomAttributeCache_U3CU3Ef__am$cache1;
extern CustomAttributesCache t30__CustomAttributeCache_U3CU3Ef__am$cache2;
extern CustomAttributesCache t30__CustomAttributeCache_U3CU3Ef__am$cache3;
extern CustomAttributesCache t30__CustomAttributeCache_U3CU3Ef__am$cache4;
extern CustomAttributesCache t30__CustomAttributeCache_U3CU3Ef__am$cache5;
extern CustomAttributesCache t30__CustomAttributeCache_U3CU3Ef__am$cache6;
extern CustomAttributesCache t30__CustomAttributeCache_U3CU3Ef__am$cache7;
extern CustomAttributesCache t30__CustomAttributeCache_U3CU3Ef__am$cache8;
extern CustomAttributesCache t30__CustomAttributeCache_U3CU3Ef__am$cache9;
extern CustomAttributesCache t30__CustomAttributeCache_U3CU3Ef__am$cacheA;
extern CustomAttributesCache t30__CustomAttributeCache_U3CU3Ef__am$cacheB;
extern CustomAttributesCache t30__CustomAttributeCache_U3CU3Ef__am$cacheC;
extern CustomAttributesCache t30__CustomAttributeCache_U3CU3Ef__am$cacheD;
extern CustomAttributesCache t30__CustomAttributeCache_U3CU3Ef__am$cacheE;
extern CustomAttributesCache t30__CustomAttributeCache_U3CU3Ef__am$cacheF;
extern CustomAttributesCache t30__CustomAttributeCache_U3CU3Ef__am$cache10;
extern CustomAttributesCache t30__CustomAttributeCache_U3CU3Ef__am$cache11;
extern CustomAttributesCache t30__CustomAttributeCache_U3CU3Ef__am$cache12;
extern CustomAttributesCache t30__CustomAttributeCache_U3CU3Ef__am$cache13;
extern CustomAttributesCache t30__CustomAttributeCache_U3CU3Ef__am$cache14;
extern CustomAttributesCache t30__CustomAttributeCache_U3CU3Ef__am$cache15;
extern CustomAttributesCache t30__CustomAttributeCache_U3CU3Ef__am$cache16;
extern CustomAttributesCache t30__CustomAttributeCache_U3CU3Ef__am$cache17;
extern CustomAttributesCache t30__CustomAttributeCache_U3CU3Ef__am$cache18;
extern CustomAttributesCache t30__CustomAttributeCache_U3CU3Ef__am$cache19;
extern CustomAttributesCache t30__CustomAttributeCache_U3CU3Ef__am$cache1A;
extern CustomAttributesCache t30__CustomAttributeCache_U3CU3Ef__am$cache1B;
extern CustomAttributesCache t30__CustomAttributeCache_U3CU3Ef__am$cache1C;
extern CustomAttributesCache t30__CustomAttributeCache_U3CU3Ef__am$cache1D;
extern CustomAttributesCache t30__CustomAttributeCache_U3CU3Ef__am$cache1E;
extern CustomAttributesCache t30__CustomAttributeCache_U3CU3Ef__am$cache1F;
extern CustomAttributesCache t30__CustomAttributeCache_U3CU3Ef__am$cache20;
extern CustomAttributesCache t30__CustomAttributeCache_U3CU3Ef__am$cache21;
extern CustomAttributesCache t30__CustomAttributeCache_m56;
extern CustomAttributesCache t30__CustomAttributeCache_m57;
extern CustomAttributesCache t30__CustomAttributeCache_m58;
extern CustomAttributesCache t30__CustomAttributeCache_m59;
extern CustomAttributesCache t30__CustomAttributeCache_m60;
extern CustomAttributesCache t30__CustomAttributeCache_m61;
extern CustomAttributesCache t30__CustomAttributeCache_m62;
extern CustomAttributesCache t30__CustomAttributeCache_m63;
extern CustomAttributesCache t30__CustomAttributeCache_m64;
extern CustomAttributesCache t30__CustomAttributeCache_m65;
extern CustomAttributesCache t30__CustomAttributeCache_m66;
extern CustomAttributesCache t30__CustomAttributeCache_m67;
extern CustomAttributesCache t30__CustomAttributeCache_m68;
extern CustomAttributesCache t30__CustomAttributeCache_m69;
extern CustomAttributesCache t30__CustomAttributeCache_m70;
extern CustomAttributesCache t30__CustomAttributeCache_m71;
extern CustomAttributesCache t30__CustomAttributeCache_m72;
extern CustomAttributesCache t30__CustomAttributeCache_m73;
extern CustomAttributesCache t30__CustomAttributeCache_m74;
extern CustomAttributesCache t30__CustomAttributeCache_m75;
extern CustomAttributesCache t30__CustomAttributeCache_m76;
extern CustomAttributesCache t30__CustomAttributeCache_m77;
extern CustomAttributesCache t30__CustomAttributeCache_m78;
extern CustomAttributesCache t30__CustomAttributeCache_m79;
extern CustomAttributesCache t30__CustomAttributeCache_m80;
extern CustomAttributesCache t30__CustomAttributeCache_m81;
extern CustomAttributesCache t30__CustomAttributeCache_m82;
extern CustomAttributesCache t30__CustomAttributeCache_m83;
extern CustomAttributesCache t30__CustomAttributeCache_m84;
extern CustomAttributesCache t30__CustomAttributeCache_m85;
extern CustomAttributesCache t30__CustomAttributeCache_m86;
extern CustomAttributesCache t30__CustomAttributeCache_m87;
extern CustomAttributesCache t30__CustomAttributeCache_m88;
TypeInfo t30_TI = 
{
	&g_AssemblyU2DCSharp_dll_Image, NULL, "GameGroupCollisionDetector", "JewelMine.Engine", t30_MIs, NULL, t30_FIs, NULL, &t5_TI, t30_TI__nestedTypes, NULL, &t30_TI, NULL, t30_VT, &EmptyCustomAttributesCache, &t30_TI, &t30_0_0_0, &t30_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t30), 0, -1, sizeof(t30_SFs), 0, -1, 1048577, 0, false, false, false, false, false, false, false, false, false, false, false, false, 47, 0, 34, 0, 4, 4, 0, 0};
#include "t39.h"
#ifndef _MSC_VER
#else
#endif

#include "t40.h"
#include "t41.h"
#include "t144.h"
#include "mscorlib_ArrayTypes.h"
#include "t61.h"
extern TypeInfo t40_TI;
extern TypeInfo t41_TI;
extern TypeInfo t61_TI;
extern TypeInfo t144_TI;
#include "t40MD.h"
#include "t41MD.h"
#include "t61MD.h"
extern MethodInfo m552_MI;
extern MethodInfo m553_MI;
extern MethodInfo m93_MI;
extern MethodInfo m554_MI;
extern MethodInfo m555_MI;
extern MethodInfo m556_MI;
extern MethodInfo m557_MI;
extern MethodInfo m558_MI;
extern MethodInfo m559_MI;
extern MethodInfo m560_MI;
struct t125;
 t5* m555 (t5 * __this, t5* p0, t41 * p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
struct t125;
#include "t145.h"
 t146* m556 (t5 * __this, t5* p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


extern MethodInfo m89_MI;
 void m89 (t5 * __this, MethodInfo* method){
	{
		t40 * L_0 = (t40 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t40_TI));
		m552(L_0, (t11*) &_stringLiteral15, &m552_MI);
		((t39_SFs*)InitializedTypeInfo(&t39_TI)->static_fields)->f0 = L_0;
		return;
	}
}
extern MethodInfo m90_MI;
 t11* m90 (t5 * __this, t11* p0, MethodInfo* method){
	t11* V_0 = {0};
	t11* G_B4_0 = {0};
	t11* G_B3_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT((&t11_TI));
		bool L_0 = m553(NULL, p0, &m553_MI);
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		return p0;
	}

IL_000d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t39_TI));
		G_B3_0 = p0;
		if ((((t39_SFs*)InitializedTypeInfo(&t39_TI)->static_fields)->f1))
		{
			G_B4_0 = p0;
			goto IL_0026;
		}
	}
	{
		t124 L_1 = { &m93_MI };
		t41 * L_2 = (t41 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t41_TI));
		m554(L_2, NULL, L_1, &m554_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t39_TI));
		((t39_SFs*)InitializedTypeInfo(&t39_TI)->static_fields)->f1 = L_2;
		G_B4_0 = G_B3_0;
	}

IL_0026:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t39_TI));
		t5* L_3 = m555(NULL, G_B4_0, (((t39_SFs*)InitializedTypeInfo(&t39_TI)->static_fields)->f1), &m555_MI);
		t146* L_4 = m556(NULL, L_3, &m556_MI);
		IL2CPP_RUNTIME_CLASS_INIT((&t11_TI));
		t11* L_5 = (t11*)il2cpp_codegen_object_new ((&t11_TI));
		L_5 = m561(L_5, L_4, &m557_MI);
		V_0 = L_5;
		return V_0;
	}
}
 t11* m91 (t5 * __this, bool p0, MethodInfo* method){
	t11* G_B3_0 = {0};
	{
		if (!p0)
		{
			goto IL_0010;
		}
	}
	{
		G_B3_0 = (t11*) &_stringLiteral16;
		goto IL_0015;
	}

IL_0010:
	{
		G_B3_0 = (t11*) &_stringLiteral17;
	}

IL_0015:
	{
		return G_B3_0;
	}
}
extern MethodInfo m92_MI;
 double m92 (t5 * __this, double p0, MethodInfo* method){
	t61  V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t61_TI));
		t61  L_0 = m558(NULL, p0, &m558_MI);
		V_0 = L_0;
		double L_1 = m559((&V_0), &m559_MI);
		return L_1;
	}
}
 bool m93 (t5 * __this, uint16_t p0, MethodInfo* method){
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t39_TI));
		bool L_0 = (bool)VirtFuncInvoker1< bool, uint16_t >::Invoke(&m560_MI, (((t39_SFs*)InitializedTypeInfo(&t39_TI)->static_fields)->f0), p0);
		return ((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
	}
}
// Metadata Definition JewelMine.Engine.GameHelpers
extern Il2CppType t40_0_0_17;
FieldInfo t39_f0_FieldInfo = 
{
	"vowels", &t40_0_0_17, &t39_TI, offsetof(t39_SFs, f0), &EmptyCustomAttributesCache};
extern Il2CppType t41_0_0_17;
extern CustomAttributesCache t39__CustomAttributeCache_U3CU3Ef__am$cache1;
FieldInfo t39_f1_FieldInfo = 
{
	"<>f__am$cache1", &t41_0_0_17, &t39_TI, offsetof(t39_SFs, f1), &t39__CustomAttributeCache_U3CU3Ef__am$cache1};
static FieldInfo* t39_FIs[] =
{
	&t39_f0_FieldInfo,
	&t39_f1_FieldInfo,
	NULL
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m89_MI = 
{
	".cctor", (methodPointerType)&m89, &t39_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 90, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t147_0_0_0;
extern Il2CppType t147_0_0_0;
extern Il2CppType t148_0_0_0;
extern Il2CppType t148_0_0_0;
static ParameterInfo t39_m562_ParameterInfos[] = 
{
	{"source", 0, 134217810, &EmptyCustomAttributesCache, &t147_0_0_0},
	{"action", 1, 134217811, &EmptyCustomAttributesCache, &t148_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern Il2CppGenericContainer m562_IGC;
extern TypeInfo m562_gp_T_0_TI;
Il2CppGenericParamFull m562_gp_T_0_TI_GenericParamFull = { { &m562_IGC, 0}, {NULL, "T", 0, 0, NULL} };
static Il2CppGenericParamFull* m562_IGPA[1] = 
{
	&m562_gp_T_0_TI_GenericParamFull,
};
extern MethodInfo m562_MI;
Il2CppGenericContainer m562_IGC = { { NULL, NULL }, NULL, &m562_MI, 1, 1, m562_IGPA };
extern Il2CppGenericMethod m563_GM;
extern Il2CppGenericMethod m564_GM;
extern Il2CppGenericMethod m565_GM;
static Il2CppRGCTXDefinition m562_RGCTXData[4] = 
{
	{ IL2CPP_RGCTX_DATA_METHOD, &m563_GM }/* Method Definition */,
	{ IL2CPP_RGCTX_DATA_METHOD, &m564_GM }/* Method Definition */,
	{ IL2CPP_RGCTX_DATA_METHOD, &m565_GM }/* Method Definition */,
	{IL2CPP_RGCTX_DATA_INVALID, NULL},
};
extern CustomAttributesCache t39__CustomAttributeCache_m562;
MethodInfo m562_MI = 
{
	"ForEach", NULL, &t39_TI, &t109_0_0_0, NULL, t39_m562_ParameterInfos, &t39__CustomAttributeCache_m562, 150, 0, 255, 2, true, false, 91, m562_RGCTXData, (methodPointerType)NULL, &m562_IGC};
extern Il2CppType t11_0_0_0;
static ParameterInfo t39_m90_ParameterInfos[] = 
{
	{"name", 0, 134217812, &EmptyCustomAttributesCache, &t11_0_0_0},
};
extern Il2CppType t11_0_0_0;
extern void* RuntimeInvoker_t5_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m90_MI = 
{
	"ShortenName", (methodPointerType)&m90, &t39_TI, &t11_0_0_0, RuntimeInvoker_t5_t5, t39_m90_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 92, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t108_0_0_0;
static ParameterInfo t39_m91_ParameterInfos[] = 
{
	{"target", 0, 134217813, &EmptyCustomAttributesCache, &t108_0_0_0},
};
extern Il2CppType t11_0_0_0;
extern void* RuntimeInvoker_t5_t111 (MethodInfo* method, void* obj, void** args);
MethodInfo m91_MI = 
{
	"EncodeBooleanForDisplay", (methodPointerType)&m91, &t39_TI, &t11_0_0_0, RuntimeInvoker_t5_t111, t39_m91_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 93, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t118_0_0_0;
extern Il2CppType t118_0_0_0;
static ParameterInfo t39_m92_ParameterInfos[] = 
{
	{"source", 0, 134217814, &EmptyCustomAttributesCache, &t118_0_0_0},
};
extern Il2CppType t118_0_0_0;
extern void* RuntimeInvoker_t118_t118 (MethodInfo* method, void* obj, void** args);
MethodInfo m92_MI = 
{
	"ConvertMillisecondsToSeconds", (methodPointerType)&m92, &t39_TI, &t118_0_0_0, RuntimeInvoker_t118_t118, t39_m92_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 94, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t144_0_0_0;
extern Il2CppType t144_0_0_0;
static ParameterInfo t39_m93_ParameterInfos[] = 
{
	{"x", 0, 134217815, &EmptyCustomAttributesCache, &t144_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t150 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t39__CustomAttributeCache_m93;
MethodInfo m93_MI = 
{
	"<ShortenName>m__28", (methodPointerType)&m93, &t39_TI, &t108_0_0_0, RuntimeInvoker_t108_t150, t39_m93_ParameterInfos, &t39__CustomAttributeCache_m93, 145, 0, 255, 1, false, false, 95, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t39_MIs[] =
{
	&m89_MI,
	&m562_MI,
	&m90_MI,
	&m91_MI,
	&m92_MI,
	&m93_MI,
	NULL
};
static MethodInfo* t39_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
};
extern TypeInfo t151_TI;
#include "t151.h"
#include "t151MD.h"
extern MethodInfo m566_MI;
void t39_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t151 * tmp;
		tmp = (t151 *)il2cpp_codegen_object_new (&t151_TI);
		m566(tmp, &m566_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t39_CustomAttributesCacheGenerator_U3CU3Ef__am$cache1(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t39_CustomAttributesCacheGenerator_m562(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t151 * tmp;
		tmp = (t151 *)il2cpp_codegen_object_new (&t151_TI);
		m566(tmp, &m566_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t39_CustomAttributesCacheGenerator_m93(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t39__CustomAttributeCache = {
1,
NULL,
&t39_CustomAttributesCacheGenerator
};
CustomAttributesCache t39__CustomAttributeCache_U3CU3Ef__am$cache1 = {
1,
NULL,
&t39_CustomAttributesCacheGenerator_U3CU3Ef__am$cache1
};
CustomAttributesCache t39__CustomAttributeCache_m562 = {
1,
NULL,
&t39_CustomAttributesCacheGenerator_m562
};
CustomAttributesCache t39__CustomAttributeCache_m93 = {
1,
NULL,
&t39_CustomAttributesCacheGenerator_m93
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType t39_0_0_0;
extern Il2CppType t39_1_0_0;
struct t39;
extern CustomAttributesCache t39__CustomAttributeCache;
extern CustomAttributesCache t39__CustomAttributeCache_U3CU3Ef__am$cache1;
extern CustomAttributesCache t39__CustomAttributeCache_m562;
extern CustomAttributesCache t39__CustomAttributeCache_m93;
TypeInfo t39_TI = 
{
	&g_AssemblyU2DCSharp_dll_Image, NULL, "GameHelpers", "JewelMine.Engine", t39_MIs, NULL, t39_FIs, NULL, &t5_TI, NULL, NULL, &t39_TI, NULL, t39_VT, &t39__CustomAttributeCache, &t39_TI, &t39_0_0_0, &t39_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t39), 0, -1, sizeof(t39_SFs), 0, -1, 1048961, 0, false, false, false, false, false, false, false, false, false, true, false, false, 6, 0, 2, 0, 0, 4, 0, 0};
#include "t42.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t42_TI;
#include "t42MD.h"

#include "t43.h"
#include "t44.h"
#include "t67.h"
#include "t152.h"
extern TypeInfo t43_TI;
extern TypeInfo t152_TI;
extern TypeInfo t67_TI;
#include "t44MD.h"
#include "t67MD.h"
extern MethodInfo m317_MI;
extern MethodInfo m278_MI;
extern MethodInfo m246_MI;
extern MethodInfo m567_MI;
extern MethodInfo m568_MI;


extern MethodInfo m94_MI;
 void m94 (t42 * __this, MethodInfo* method){
	{
		m460(__this, &m460_MI);
		return;
	}
}
extern MethodInfo m95_MI;
 bool m95 (t42 * __this, t15 * p0, MethodInfo* method){
	{
		int32_t L_0 = m317(p0, &m317_MI);
		t43 * L_1 = (__this->f1);
		t32 * L_2 = (L_1->f1);
		int32_t L_3 = m278(L_2, &m278_MI);
		return ((((int32_t)((((int32_t)L_0) < ((int32_t)L_3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
extern MethodInfo m96_MI;
 void m96 (t42 * __this, t44  p0, MethodInfo* method){
	{
		t6 * L_0 = (__this->f0);
		t67 * L_1 = m246(L_0, &m246_MI);
		int64_t L_2 = m567((&p0), &m567_MI);
		int64_t L_3 = L_2;
		t5 * L_4 = Box(InitializedTypeInfo(&t152_TI), &L_3);
		IL2CPP_RUNTIME_CLASS_INIT((&t11_TI));
		t11* L_5 = m462(NULL, (t11*) &_stringLiteral28, L_4, &m462_MI);
		VirtActionInvoker1< t11* >::Invoke(&m568_MI, L_1, L_5);
		return;
	}
}
// Metadata Definition JewelMine.Engine.GameLogic/<ProcessCollisions>c__AnonStorey5
extern Il2CppType t6_0_0_3;
FieldInfo t42_f0_FieldInfo = 
{
	"logicUpdate", &t6_0_0_3, &t42_TI, offsetof(t42, f0), &EmptyCustomAttributesCache};
extern Il2CppType t43_0_0_3;
FieldInfo t42_f1_FieldInfo = 
{
	"<>f__this", &t43_0_0_3, &t42_TI, offsetof(t42, f1), &EmptyCustomAttributesCache};
static FieldInfo* t42_FIs[] =
{
	&t42_f0_FieldInfo,
	&t42_f1_FieldInfo,
	NULL
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m94_MI = 
{
	".ctor", (methodPointerType)&m94, &t42_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 145, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t15_0_0_0;
static ParameterInfo t42_m95_ParameterInfos[] = 
{
	{"x", 0, 134217883, &EmptyCustomAttributesCache, &t15_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m95_MI = 
{
	"<>m__2B", (methodPointerType)&m95, &t42_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t42_m95_ParameterInfos, &EmptyCustomAttributesCache, 131, 0, 255, 1, false, false, 146, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t44_0_0_0;
extern Il2CppType t44_0_0_0;
static ParameterInfo t42_m96_ParameterInfos[] = 
{
	{"x", 0, 134217884, &EmptyCustomAttributesCache, &t44_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t44 (MethodInfo* method, void* obj, void** args);
MethodInfo m96_MI = 
{
	"<>m__2C", (methodPointerType)&m96, &t42_TI, &t109_0_0_0, RuntimeInvoker_t109_t44, t42_m96_ParameterInfos, &EmptyCustomAttributesCache, 131, 0, 255, 1, false, false, 147, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t42_MIs[] =
{
	&m94_MI,
	&m95_MI,
	&m96_MI,
	NULL
};
static MethodInfo* t42_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
};
void t42_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t42__CustomAttributeCache = {
1,
NULL,
&t42_CustomAttributesCacheGenerator
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType t42_0_0_0;
extern Il2CppType t42_1_0_0;
struct t42;
extern CustomAttributesCache t42__CustomAttributeCache;
TypeInfo t42_TI = 
{
	&g_AssemblyU2DCSharp_dll_Image, NULL, "<ProcessCollisions>c__AnonStorey5", "", t42_MIs, NULL, t42_FIs, NULL, &t5_TI, NULL, &t43_TI, &t42_TI, NULL, t42_VT, &t42__CustomAttributeCache, &t42_TI, &t42_0_0_0, &t42_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t42), 0, -1, 0, 0, -1, 1048835, 0, false, false, false, false, false, false, false, false, false, false, false, false, 3, 0, 2, 0, 0, 4, 0, 0};
#include "t45.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t45_TI;
#include "t45MD.h"

extern MethodInfo m569_MI;
struct t125;
 bool m569 (t5 * __this, t5* p0, int32_t p1, MethodInfo* method) IL2CPP_METHOD_ATTR;


extern MethodInfo m97_MI;
 void m97 (t45 * __this, MethodInfo* method){
	{
		m460(__this, &m460_MI);
		return;
	}
}
extern MethodInfo m98_MI;
 bool m98 (t45 * __this, int32_t p0, MethodInfo* method){
	{
		t46* L_0 = (__this->f0);
		bool L_1 = m569(NULL, (t5*)(t5*)L_0, p0, &m569_MI);
		return ((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
	}
}
// Metadata Definition JewelMine.Engine.GameLogic/<GenerateRandomJewelType>c__AnonStorey6
extern Il2CppType t46_0_0_3;
FieldInfo t45_f0_FieldInfo = 
{
	"avoidTypes", &t46_0_0_3, &t45_TI, offsetof(t45, f0), &EmptyCustomAttributesCache};
static FieldInfo* t45_FIs[] =
{
	&t45_f0_FieldInfo,
	NULL
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m97_MI = 
{
	".ctor", (methodPointerType)&m97, &t45_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 148, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t19_0_0_0;
static ParameterInfo t45_m98_ParameterInfos[] = 
{
	{"x", 0, 134217885, &EmptyCustomAttributesCache, &t19_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m98_MI = 
{
	"<>m__2E", (methodPointerType)&m98, &t45_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t45_m98_ParameterInfos, &EmptyCustomAttributesCache, 131, 0, 255, 1, false, false, 149, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t45_MIs[] =
{
	&m97_MI,
	&m98_MI,
	NULL
};
static MethodInfo* t45_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
};
void t45_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t45__CustomAttributeCache = {
1,
NULL,
&t45_CustomAttributesCacheGenerator
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType t45_0_0_0;
extern Il2CppType t45_1_0_0;
struct t45;
extern CustomAttributesCache t45__CustomAttributeCache;
TypeInfo t45_TI = 
{
	&g_AssemblyU2DCSharp_dll_Image, NULL, "<GenerateRandomJewelType>c__AnonStorey6", "", t45_MIs, NULL, t45_FIs, NULL, &t5_TI, NULL, &t43_TI, &t45_TI, NULL, t45_VT, &t45__CustomAttributeCache, &t45_TI, &t45_0_0_0, &t45_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t45), 0, -1, 0, 0, -1, 1048835, 0, false, false, false, false, false, false, false, false, false, false, false, false, 2, 0, 1, 0, 0, 4, 0, 0};
#ifndef _MSC_VER
#else
#endif
#include "t43MD.h"

#include "t47.h"
#include "t48.h"
#include "t59.h"
#include "t51.h"
#include "t52.h"
#include "t63.h"
#include "t153.h"
#include "t154.h"
#include "t142.h"
#include "t76.h"
#include "t155.h"
#include "t156.h"
#include "t18.h"
#include "t73.h"
#include "t53.h"
#include "t49.h"
#include "t157.h"
#include "t50.h"
#include "t74.h"
#include "t72.h"
#include "t64.h"
#include "t158.h"
#include "t159.h"
#include "t160.h"
#include "t161.h"
extern TypeInfo t48_TI;
extern TypeInfo t32_TI;
extern TypeInfo t6_TI;
extern TypeInfo t52_TI;
extern TypeInfo t153_TI;
extern TypeInfo t162_TI;
extern TypeInfo t156_TI;
extern TypeInfo t51_TI;
extern TypeInfo t142_TI;
extern TypeInfo t76_TI;
extern TypeInfo t154_TI;
extern TypeInfo t59_TI;
extern TypeInfo t73_TI;
extern TypeInfo t49_TI;
extern TypeInfo t157_TI;
extern TypeInfo t50_TI;
extern TypeInfo t53_TI;
extern TypeInfo t74_TI;
extern TypeInfo t64_TI;
extern TypeInfo t158_TI;
extern TypeInfo t159_TI;
extern TypeInfo t163_TI;
extern TypeInfo t46_TI;
extern TypeInfo t56_TI;
extern TypeInfo t160_TI;
extern TypeInfo t161_TI;
#include "t47MD.h"
#include "t18MD.h"
#include "t48MD.h"
#include "t59MD.h"
#include "t51MD.h"
#include "t63MD.h"
#include "t52MD.h"
#include "t153MD.h"
#include "t162MD.h"
#include "t164MD.h"
#include "t156MD.h"
#include "t76MD.h"
#include "t142MD.h"
#include "t154MD.h"
#include "t73MD.h"
#include "t49MD.h"
#include "t157MD.h"
#include "t50MD.h"
#include "t53MD.h"
#include "t72MD.h"
#include "t74MD.h"
#include "t64MD.h"
#include "t158MD.h"
#include "t165MD.h"
#include "t159MD.h"
#include "t160MD.h"
#include "t161MD.h"
#include "t166MD.h"
extern MethodInfo m249_MI;
extern MethodInfo m101_MI;
extern MethodInfo m570_MI;
extern MethodInfo m571_MI;
extern MethodInfo m145_MI;
extern MethodInfo m572_MI;
extern MethodInfo m573_MI;
extern MethodInfo m574_MI;
extern MethodInfo m265_MI;
extern MethodInfo m268_MI;
extern MethodInfo m196_MI;
extern MethodInfo m128_MI;
extern MethodInfo m347_MI;
extern MethodInfo m217_MI;
extern MethodInfo m105_MI;
extern MethodInfo m109_MI;
extern MethodInfo m108_MI;
extern MethodInfo m266_MI;
extern MethodInfo m110_MI;
extern MethodInfo m122_MI;
extern MethodInfo m575_MI;
extern MethodInfo m576_MI;
extern MethodInfo m111_MI;
extern MethodInfo m112_MI;
extern MethodInfo m114_MI;
extern MethodInfo m213_MI;
extern MethodInfo m107_MI;
extern MethodInfo m215_MI;
extern MethodInfo m106_MI;
extern MethodInfo m577_MI;
extern MethodInfo m251_MI;
extern MethodInfo m578_MI;
extern MethodInfo m579_MI;
extern MethodInfo m580_MI;
extern MethodInfo m581_MI;
extern MethodInfo m102_MI;
extern MethodInfo m233_MI;
extern MethodInfo m239_MI;
extern MethodInfo m267_MI;
extern MethodInfo m349_MI;
extern MethodInfo m582_MI;
extern MethodInfo m583_MI;
extern MethodInfo m346_MI;
extern MethodInfo m584_MI;
extern MethodInfo m350_MI;
extern MethodInfo m348_MI;
extern MethodInfo m585_MI;
extern MethodInfo m586_MI;
extern MethodInfo m211_MI;
extern MethodInfo m170_MI;
extern MethodInfo m198_MI;
extern MethodInfo m194_MI;
extern MethodInfo m587_MI;
extern MethodInfo m245_MI;
extern MethodInfo m205_MI;
extern MethodInfo m119_MI;
extern MethodInfo m207_MI;
extern MethodInfo m116_MI;
extern MethodInfo m209_MI;
extern MethodInfo m115_MI;
extern MethodInfo m342_MI;
extern MethodInfo m118_MI;
extern MethodInfo m120_MI;
extern MethodInfo m272_MI;
extern MethodInfo m121_MI;
extern MethodInfo m203_MI;
extern MethodInfo m123_MI;
extern MethodInfo m124_MI;
extern MethodInfo m125_MI;
extern MethodInfo m135_MI;
extern MethodInfo m126_MI;
extern MethodInfo m295_MI;
extern MethodInfo m588_MI;
extern MethodInfo m589_MI;
extern MethodInfo m182_MI;
extern MethodInfo m590_MI;
extern MethodInfo m591_MI;
extern MethodInfo m329_MI;
extern MethodInfo m592_MI;
extern MethodInfo m296_MI;
extern MethodInfo m227_MI;
extern MethodInfo m146_MI;
extern MethodInfo m593_MI;
extern MethodInfo m594_MI;
extern MethodInfo m595_MI;
extern MethodInfo m596_MI;
extern MethodInfo m113_MI;
extern MethodInfo m597_MI;
extern MethodInfo m598_MI;
extern MethodInfo m274_MI;
extern MethodInfo m147_MI;
extern MethodInfo m599_MI;
extern MethodInfo m600_MI;
extern MethodInfo m275_MI;
extern MethodInfo m601_MI;
extern MethodInfo m192_MI;
extern MethodInfo m602_MI;
extern MethodInfo m132_MI;
extern MethodInfo m117_MI;
extern MethodInfo m235_MI;
extern MethodInfo m241_MI;
extern MethodInfo m237_MI;
extern MethodInfo m243_MI;
extern MethodInfo m172_MI;
extern MethodInfo m231_MI;
extern MethodInfo m273_MI;
extern MethodInfo m276_MI;
extern MethodInfo m178_MI;
extern MethodInfo m174_MI;
extern MethodInfo m277_MI;
extern MethodInfo m139_MI;
extern MethodInfo m289_MI;
extern MethodInfo m301_MI;
extern MethodInfo m307_MI;
extern MethodInfo m309_MI;
extern MethodInfo m303_MI;
extern MethodInfo m313_MI;
extern MethodInfo m291_MI;
extern MethodInfo m315_MI;
extern MethodInfo m293_MI;
extern MethodInfo m302_MI;
extern MethodInfo m218_MI;
extern MethodInfo m603_MI;
extern MethodInfo m229_MI;
extern MethodInfo m343_MI;
extern MethodInfo m137_MI;
extern MethodInfo m138_MI;
extern MethodInfo m604_MI;
extern MethodInfo m163_MI;
extern MethodInfo m340_MI;
extern MethodInfo m605_MI;
extern MethodInfo m606_MI;
extern MethodInfo m607_MI;
extern MethodInfo m131_MI;
extern MethodInfo m608_MI;
extern MethodInfo m129_MI;
extern MethodInfo m127_MI;
extern MethodInfo m130_MI;
extern MethodInfo m282_MI;
extern MethodInfo m133_MI;
extern MethodInfo m134_MI;
extern MethodInfo m344_MI;
extern MethodInfo m165_MI;
extern MethodInfo m167_MI;
extern MethodInfo m306_MI;
extern MethodInfo m162_MI;
extern MethodInfo m609_MI;
extern MethodInfo m610_MI;
extern MethodInfo m611_MI;
extern MethodInfo m612_MI;
extern MethodInfo m186_MI;
extern MethodInfo m190_MI;
extern MethodInfo m144_MI;
extern MethodInfo m184_MI;
extern MethodInfo m188_MI;
extern MethodInfo m288_MI;
extern MethodInfo m136_MI;
extern MethodInfo m143_MI;
extern MethodInfo m304_MI;
extern MethodInfo m305_MI;
extern MethodInfo m613_MI;
extern MethodInfo m140_MI;
extern MethodInfo m141_MI;
extern MethodInfo m142_MI;
extern MethodInfo m614_MI;
extern MethodInfo m615_MI;
extern MethodInfo m616_MI;
extern MethodInfo m617_MI;
extern MethodInfo m618_MI;
extern MethodInfo m321_MI;
struct t125;
 t5* m571 (t5 * __this, t5 * p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
struct t125;
 t5* m573 (t5 * __this, t5* p0, t48 * p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
struct t125;
 t46* m574 (t5 * __this, t5* p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
struct t125;
struct t125;
 t5* m619_gshared (t5 * __this, t5* p0, t141 * p1, MethodInfo* method);
#define m619(__this, p0, p1, method) (t5*)m619_gshared((t5 *)__this, (t5*)p0, (t141 *)p1, method)
#define m595(__this, p0, p1, method) (t5*)m619_gshared((t5 *)__this, (t5*)p0, (t141 *)p1, method)
struct t125;
struct t125;
#include "t167.h"
 t168* m620_gshared (t5 * __this, t5* p0, MethodInfo* method);
#define m620(__this, p0, method) (t168*)m620_gshared((t5 *)__this, (t5*)p0, method)
#define m596(__this, p0, method) (t54*)m620_gshared((t5 *)__this, (t5*)p0, method)
struct t39;
 void m598 (t5 * __this, t5* p0, t157 * p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
struct t125;
 int64_t m600 (t5 * __this, t5* p0, t50 * p1, MethodInfo* method) IL2CPP_METHOD_ATTR;


extern MethodInfo m99_MI;
 void m99 (t43 * __this, t47 * p0, MethodInfo* method){
	{
		m460(__this, &m460_MI);
		__this->f3 = p0;
		t47 * L_0 = (__this->f3);
		int32_t L_1 = m249(L_0, &m249_MI);
		m101(__this, L_1, &m101_MI);
		return;
	}
}
extern MethodInfo m100_MI;
 void m100 (t5 * __this, MethodInfo* method){
	t5* G_B2_0 = {0};
	t5* G_B1_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t114_TI));
		t114 * L_0 = m532(NULL, LoadTypeToken(&t19_0_0_0), &m532_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t18_TI));
		t107 * L_1 = m570(NULL, L_0, &m570_MI);
		t5* L_2 = m571(NULL, L_1, &m571_MI);
		G_B1_0 = L_2;
		if ((((t43_SFs*)InitializedTypeInfo(&t43_TI)->static_fields)->f4))
		{
			G_B2_0 = L_2;
			goto IL_002c;
		}
	}
	{
		t124 L_3 = { &m145_MI };
		t48 * L_4 = (t48 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t48_TI));
		m572(L_4, NULL, L_3, &m572_MI);
		((t43_SFs*)InitializedTypeInfo(&t43_TI)->static_fields)->f4 = L_4;
		G_B2_0 = G_B1_0;
	}

IL_002c:
	{
		t5* L_5 = m573(NULL, G_B2_0, (((t43_SFs*)InitializedTypeInfo(&t43_TI)->static_fields)->f4), &m573_MI);
		t46* L_6 = m574(NULL, L_5, &m574_MI);
		((t43_SFs*)InitializedTypeInfo(&t43_TI)->static_fields)->f0 = L_6;
		return;
	}
}
 void m101 (t43 * __this, int32_t p0, MethodInfo* method){
	{
		t47 * L_0 = (__this->f3);
		t32 * L_1 = (t32 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t32_TI));
		m265(L_1, L_0, p0, &m265_MI);
		__this->f1 = L_1;
		t32 * L_2 = (__this->f1);
		t30 * L_3 = (t30 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t30_TI));
		m42(L_3, L_2, &m42_MI);
		__this->f2 = L_3;
		t32 * L_4 = (__this->f1);
		t59 * L_5 = m268(L_4, &m268_MI);
		int32_t L_6 = m196(L_5, &m196_MI);
		m128(__this, L_6, &m128_MI);
		return;
	}
}
 void m102 (t43 * __this, t51 * p0, MethodInfo* method){
	{
		t32 * L_0 = m347(p0, &m347_MI);
		__this->f1 = L_0;
		t32 * L_1 = (__this->f1);
		t30 * L_2 = (t30 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t30_TI));
		m42(L_2, L_1, &m42_MI);
		__this->f2 = L_2;
		return;
	}
}
extern MethodInfo m103_MI;
 t32 * m103 (t43 * __this, MethodInfo* method){
	{
		t32 * L_0 = (__this->f1);
		return L_0;
	}
}
extern MethodInfo m104_MI;
 t6 * m104 (t43 * __this, t52 * p0, MethodInfo* method){
	t6 * V_0 = {0};
	bool V_1 = false;
	bool V_2 = false;
	int32_t V_3 = {0};
	int32_t G_B13_0 = 0;
	{
		t6 * L_0 = (t6 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t6_TI));
		m217(L_0, &m217_MI);
		V_0 = L_0;
		V_1 = 0;
		m105(__this, p0, V_0, (&V_1), &m105_MI);
		if (!V_1)
		{
			goto IL_001a;
		}
	}
	{
		return V_0;
	}

IL_001a:
	{
		m109(__this, p0, V_0, (&V_1), &m109_MI);
		if (!V_1)
		{
			goto IL_002c;
		}
	}
	{
		return V_0;
	}

IL_002c:
	{
		m108(__this, p0, V_0, (&V_1), &m108_MI);
		if (!V_1)
		{
			goto IL_003e;
		}
	}
	{
		return V_0;
	}

IL_003e:
	{
		t32 * L_1 = (__this->f1);
		int32_t L_2 = m266(L_1, &m266_MI);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0051;
		}
	}
	{
		return V_0;
	}

IL_0051:
	{
		m110(__this, p0, V_0, (&V_1), &m110_MI);
		if (!V_1)
		{
			goto IL_0063;
		}
	}
	{
		return V_0;
	}

IL_0063:
	{
		m122(__this, V_0, &m122_MI);
		t63 * L_3 = &(p0->f0);
		bool L_4 = m575(L_3, &m575_MI);
		V_2 = L_4;
		t63 * L_5 = &(p0->f0);
		bool L_6 = m575(L_5, &m575_MI);
		if (!L_6)
		{
			goto IL_0096;
		}
	}
	{
		t63 * L_7 = &(p0->f0);
		int32_t L_8 = m576(L_7, &m576_MI);
		G_B13_0 = ((int32_t)(L_8));
		goto IL_0097;
	}

IL_0096:
	{
		G_B13_0 = 0;
	}

IL_0097:
	{
		V_3 = G_B13_0;
		m111(__this, p0, V_0, V_2, V_3, &m111_MI);
		m112(__this, V_0, &m112_MI);
		m114(__this, V_0, &m114_MI);
		return V_0;
	}
}
 void m105 (t43 * __this, t52 * p0, t6 * p1, bool* p2, MethodInfo* method){
	{
		*((int8_t*)(p2)) = (int8_t)0;
		bool L_0 = m213(p0, &m213_MI);
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		m107(__this, p1, &m107_MI);
		goto IL_002d;
	}

IL_001a:
	{
		bool L_1 = m215(p0, &m215_MI);
		if (!L_1)
		{
			goto IL_002d;
		}
	}
	{
		m106(__this, p1, p2, &m106_MI);
	}

IL_002d:
	{
		return;
	}
}
 void m106 (t43 * __this, t6 * p0, bool* p1, MethodInfo* method){
	t51 * V_0 = {0};
	t153 * V_1 = {0};
	t154 * V_2 = {0};
	t142 * V_3 = {0};
	t76  V_4 = {0};
	int32_t leaveInstructions[2] = {0};
	t142 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t142 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	{
		*((int8_t*)(p1)) = (int8_t)0;
	}

IL_0003:
	try
	{ // begin try (depth: 1)
		{
			V_0 = (t51 *)NULL;
			t153 * L_0 = (t153 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t153_TI));
			m577(L_0, &m577_MI);
			V_1 = L_0;
			t47 * L_1 = (__this->f3);
			t11* L_2 = m251(L_1, &m251_MI);
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t162_TI));
			t11* L_3 = m578(NULL, L_2, (t11*) &_stringLiteral18, &m578_MI);
			t154 * L_4 = m579(NULL, L_3, 3, &m579_MI);
			V_2 = L_4;
		}

IL_0027:
		try
		{ // begin try (depth: 2)
			t5 * L_5 = (t5 *)VirtFuncInvoker1< t5 *, t156 * >::Invoke(&m580_MI, V_1, V_2);
			V_0 = ((t51 *)Castclass(L_5, InitializedTypeInfo(&t51_TI)));
			VirtActionInvoker0::Invoke(&m581_MI, V_2);
			// IL_003a: leave IL_004c
			leaveInstructions[1] = 0x4C; // 2
			THROW_SENTINEL(IL_004c);
			// finally target depth: 2
		} // end try (depth: 2)
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
		{ // begin finally (depth: 2)
			{
				if (!V_2)
				{
					goto IL_004b;
				}
			}

IL_0045:
			{
				InterfaceActionInvoker0::Invoke(&m516_MI, V_2);
			}

IL_004b:
			{
				// finally node depth: 2
				switch (leaveInstructions[1])
				{
					case 0x4C:
						goto IL_004c;
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

IL_004c:
		{
			m102(__this, V_0, &m102_MI);
			m233(p0, 1, &m233_MI);
			m239(p0, 1, &m239_MI);
			t32 * L_6 = (__this->f1);
			m267(L_6, 2, &m267_MI);
			t67 * L_7 = m246(p0, &m246_MI);
			t76  L_8 = m349(V_0, &m349_MI);
			V_4 = L_8;
			t11* L_9 = m582((&V_4), &m582_MI);
			IL2CPP_RUNTIME_CLASS_INIT((&t11_TI));
			t11* L_10 = m462(NULL, (t11*) &_stringLiteral19, L_9, &m462_MI);
			VirtActionInvoker1< t11* >::Invoke(&m568_MI, L_7, L_10);
			*((int8_t*)(p1)) = (int8_t)1;
			// IL_0094: leave IL_00ba
			goto IL_00ba;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (t142 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&t142_TI, e.ex->object.klass))
			goto IL_0099;
		throw e;
	}

IL_0099:
	{ // begin catch(System.Exception)
		V_3 = ((t142 *)__exception_local);
		t67 * L_11 = m246(p0, &m246_MI);
		t11* L_12 = (t11*)VirtFuncInvoker0< t11* >::Invoke(&m583_MI, V_3);
		IL2CPP_RUNTIME_CLASS_INIT((&t11_TI));
		t11* L_13 = m462(NULL, (t11*) &_stringLiteral20, L_12, &m462_MI);
		VirtActionInvoker1< t11* >::Invoke(&m568_MI, L_11, L_13);
		// IL_00b5: leave IL_00ba
		goto IL_00ba;
	} // end catch (depth: 1)

IL_00ba:
	{
		return;
	}
}
 void m107 (t43 * __this, t6 * p0, MethodInfo* method){
	t51 * V_0 = {0};
	t153 * V_1 = {0};
	t154 * V_2 = {0};
	t142 * V_3 = {0};
	t76  V_4 = {0};
	int32_t leaveInstructions[2] = {0};
	t142 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t142 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			t51 * L_0 = (t51 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t51_TI));
			m346(L_0, &m346_MI);
			V_0 = L_0;
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t76_TI));
			t76  L_1 = m584(NULL, &m584_MI);
			m350(V_0, L_1, &m350_MI);
			t32 * L_2 = (__this->f1);
			m348(V_0, L_2, &m348_MI);
			t153 * L_3 = (t153 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t153_TI));
			m577(L_3, &m577_MI);
			V_1 = L_3;
			t47 * L_4 = (__this->f3);
			t11* L_5 = m251(L_4, &m251_MI);
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t162_TI));
			t11* L_6 = m578(NULL, L_5, (t11*) &_stringLiteral18, &m578_MI);
			t154 * L_7 = m579(NULL, L_6, 4, &m579_MI);
			V_2 = L_7;
		}

IL_003f:
		try
		{ // begin try (depth: 2)
			VirtActionInvoker1< int64_t >::Invoke(&m585_MI, V_2, (((int64_t)0)));
			VirtActionInvoker2< t156 *, t5 * >::Invoke(&m586_MI, V_1, V_2, V_0);
			VirtActionInvoker0::Invoke(&m581_MI, V_2);
			// IL_0055: leave IL_0067
			leaveInstructions[1] = 0x67; // 2
			THROW_SENTINEL(IL_0067);
			// finally target depth: 2
		} // end try (depth: 2)
		catch(Il2CppFinallySentinel& e)
		{
			goto IL_005a;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (t142 *)e.ex;
			goto IL_005a;
		}

IL_005a:
		{ // begin finally (depth: 2)
			{
				if (!V_2)
				{
					goto IL_0066;
				}
			}

IL_0060:
			{
				InterfaceActionInvoker0::Invoke(&m516_MI, V_2);
			}

IL_0066:
			{
				// finally node depth: 2
				switch (leaveInstructions[1])
				{
					case 0x67:
						goto IL_0067;
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

IL_0067:
		{
			t67 * L_8 = m246(p0, &m246_MI);
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t76_TI));
			t76  L_9 = m584(NULL, &m584_MI);
			V_4 = L_9;
			t11* L_10 = m582((&V_4), &m582_MI);
			IL2CPP_RUNTIME_CLASS_INIT((&t11_TI));
			t11* L_11 = m462(NULL, (t11*) &_stringLiteral21, L_10, &m462_MI);
			VirtActionInvoker1< t11* >::Invoke(&m568_MI, L_8, L_11);
			// IL_008a: leave IL_00b0
			goto IL_00b0;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (t142 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&t142_TI, e.ex->object.klass))
			goto IL_008f;
		throw e;
	}

IL_008f:
	{ // begin catch(System.Exception)
		V_3 = ((t142 *)__exception_local);
		t67 * L_12 = m246(p0, &m246_MI);
		t11* L_13 = (t11*)VirtFuncInvoker0< t11* >::Invoke(&m583_MI, V_3);
		IL2CPP_RUNTIME_CLASS_INIT((&t11_TI));
		t11* L_14 = m462(NULL, (t11*) &_stringLiteral22, L_13, &m462_MI);
		VirtActionInvoker1< t11* >::Invoke(&m568_MI, L_12, L_14);
		// IL_00ab: leave IL_00b0
		goto IL_00b0;
	} // end catch (depth: 1)

IL_00b0:
	{
		return;
	}
}
 void m108 (t43 * __this, t52 * p0, t6 * p1, bool* p2, MethodInfo* method){
	int32_t V_0 = {0};
	int32_t V_1 = {0};
	{
		*((int8_t*)(p2)) = (int8_t)0;
		bool L_0 = m211(p0, &m211_MI);
		if (!L_0)
		{
			goto IL_007f;
		}
	}
	{
		*((int8_t*)(p2)) = (int8_t)1;
		t32 * L_1 = (__this->f1);
		t59 * L_2 = m268(L_1, &m268_MI);
		int32_t L_3 = m170(L_2, &m170_MI);
		V_0 = L_3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t59_TI));
		int32_t L_4 = m198(NULL, V_0, &m198_MI);
		V_1 = L_4;
		m101(__this, V_1, &m101_MI);
		m239(p1, 1, &m239_MI);
		t32 * L_5 = (__this->f1);
		m267(L_5, 2, &m267_MI);
		t67 * L_6 = m246(p1, &m246_MI);
		int32_t L_7 = V_1;
		t5 * L_8 = Box(InitializedTypeInfo(&t22_TI), &L_7);
		t11* L_9 = (t11*)VirtFuncInvoker0< t11* >::Invoke(&m484_MI, L_8);
		t32 * L_10 = (__this->f1);
		t59 * L_11 = m268(L_10, &m268_MI);
		int32_t L_12 = m194(L_11, &m194_MI);
		int32_t L_13 = L_12;
		t5 * L_14 = Box(InitializedTypeInfo(&t110_TI), &L_13);
		IL2CPP_RUNTIME_CLASS_INIT((&t11_TI));
		t11* L_15 = m587(NULL, (t11*) &_stringLiteral23, L_9, L_14, &m587_MI);
		VirtActionInvoker1< t11* >::Invoke(&m568_MI, L_6, L_15);
		m245(p1, 1, &m245_MI);
	}

IL_007f:
	{
		return;
	}
}
 void m109 (t43 * __this, t52 * p0, t6 * p1, bool* p2, MethodInfo* method){
	{
		*((int8_t*)(p2)) = (int8_t)0;
		bool L_0 = m205(p0, &m205_MI);
		if (!L_0)
		{
			goto IL_002d;
		}
	}
	{
		m119(__this, p1, &m119_MI);
		*((int8_t*)(p2)) = (int8_t)1;
		t67 * L_1 = m246(p1, &m246_MI);
		VirtActionInvoker1< t11* >::Invoke(&m568_MI, L_1, (t11*) &_stringLiteral24);
		goto IL_005c;
	}

IL_002d:
	{
		bool L_2 = m207(p0, &m207_MI);
		if (!L_2)
		{
			goto IL_0047;
		}
	}
	{
		m116(__this, p1, &m116_MI);
		*((int8_t*)(p2)) = (int8_t)1;
		goto IL_005c;
	}

IL_0047:
	{
		bool L_3 = m209(p0, &m209_MI);
		if (!L_3)
		{
			goto IL_005c;
		}
	}
	{
		m115(__this, p1, &m115_MI);
		*((int8_t*)(p2)) = (int8_t)0;
	}

IL_005c:
	{
		return;
	}
}
 void m110 (t43 * __this, t52 * p0, t6 * p1, bool* p2, MethodInfo* method){
	{
		*((int8_t*)(p2)) = (int8_t)0;
		t32 * L_0 = (__this->f1);
		t68 * L_1 = m270(L_0, &m270_MI);
		bool L_2 = m342(L_1, &m342_MI);
		if (!L_2)
		{
			goto IL_0027;
		}
	}
	{
		m118(__this, p1, &m118_MI);
		*((int8_t*)(p2)) = (int8_t)1;
		goto IL_006b;
	}

IL_0027:
	{
		bool L_3 = m120(__this, &m120_MI);
		if (!L_3)
		{
			goto IL_006b;
		}
	}
	{
		t32 * L_4 = (__this->f1);
		int32_t L_5 = m272(L_4, &m272_MI);
		t32 * L_6 = (__this->f1);
		t59 * L_7 = m268(L_6, &m268_MI);
		int32_t L_8 = m194(L_7, &m194_MI);
		if ((((uint32_t)L_5) != ((uint32_t)L_8)))
		{
			goto IL_0061;
		}
	}
	{
		m118(__this, p1, &m118_MI);
		*((int8_t*)(p2)) = (int8_t)1;
		goto IL_006b;
	}

IL_0061:
	{
		m121(__this, p1, &m121_MI);
		*((int8_t*)(p2)) = (int8_t)0;
	}

IL_006b:
	{
		return;
	}
}
 void m111 (t43 * __this, t52 * p0, t6 * p1, bool p2, int32_t p3, MethodInfo* method){
	int32_t V_0 = {0};
	bool V_1 = false;
	int32_t V_2 = 0;
	t73  V_3 = {0};
	t73  V_4 = {0};
	t73  V_5 = {0};
	t73  V_6 = {0};
	{
		V_0 = p3;
		t32 * L_0 = (__this->f1);
		t68 * L_1 = m270(L_0, &m270_MI);
		t56 * L_2 = m328(L_1, &m328_MI);
		if (!L_2)
		{
			goto IL_016d;
		}
	}
	{
		bool L_3 = m203(p0, &m203_MI);
		if (!L_3)
		{
			goto IL_002a;
		}
	}
	{
		m123(__this, p1, &m123_MI);
	}

IL_002a:
	{
		V_1 = 0;
		V_2 = 1;
		bool L_4 = m124(__this, p3, &m124_MI);
		if (L_4)
		{
			goto IL_0048;
		}
	}
	{
		bool L_5 = m125(__this, p3, &m125_MI);
		if (!L_5)
		{
			goto IL_004b;
		}
	}

IL_0048:
	{
		p3 = 0;
	}

IL_004b:
	{
		if (!p2)
		{
			goto IL_0068;
		}
	}
	{
		if (V_0)
		{
			goto IL_0068;
		}
	}
	{
		t32 * L_6 = (__this->f1);
		t68 * L_7 = m270(L_6, &m270_MI);
		int32_t L_8 = m326(L_7, &m326_MI);
		V_2 = L_8;
	}

IL_0068:
	{
		m135(__this, p3, p1, V_2, &m135_MI);
		bool L_9 = m126(__this, &m126_MI);
		if (!L_9)
		{
			goto IL_0080;
		}
	}
	{
		V_1 = 1;
	}

IL_0080:
	{
		if (!V_1)
		{
			goto IL_014e;
		}
	}
	{
		t32 * L_10 = (__this->f1);
		t68 * L_11 = m270(L_10, &m270_MI);
		t56 * L_12 = m328(L_11, &m328_MI);
		t73  L_13 = m295(L_12, &m295_MI);
		V_3 = L_13;
		bool L_14 = m588((&V_3), &m588_MI);
		if (!L_14)
		{
			goto IL_0100;
		}
	}
	{
		t32 * L_15 = (__this->f1);
		t68 * L_16 = m270(L_15, &m270_MI);
		t56 * L_17 = m328(L_16, &m328_MI);
		t73  L_18 = m295(L_17, &m295_MI);
		V_4 = L_18;
		t76  L_19 = m589((&V_4), &m589_MI);
		t32 * L_20 = (__this->f1);
		t59 * L_21 = m268(L_20, &m268_MI);
		t61  L_22 = m182(L_21, &m182_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t76_TI));
		t76  L_23 = m590(NULL, L_19, L_22, &m590_MI);
		t76  L_24 = m584(NULL, &m584_MI);
		bool L_25 = m591(NULL, L_23, L_24, &m591_MI);
		if (!L_25)
		{
			goto IL_0100;
		}
	}
	{
		t32 * L_26 = (__this->f1);
		t68 * L_27 = m270(L_26, &m270_MI);
		m329(L_27, (t56 *)NULL, &m329_MI);
		goto IL_0149;
	}

IL_0100:
	{
		t32 * L_28 = (__this->f1);
		t68 * L_29 = m270(L_28, &m270_MI);
		t56 * L_30 = m328(L_29, &m328_MI);
		t73  L_31 = m295(L_30, &m295_MI);
		V_5 = L_31;
		bool L_32 = m588((&V_5), &m588_MI);
		if (L_32)
		{
			goto IL_0149;
		}
	}
	{
		t32 * L_33 = (__this->f1);
		t68 * L_34 = m270(L_33, &m270_MI);
		t56 * L_35 = m328(L_34, &m328_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t76_TI));
		t76  L_36 = m584(NULL, &m584_MI);
		t73  L_37 = {0};
		m592(&L_37, L_36, &m592_MI);
		m296(L_35, L_37, &m296_MI);
		m227(p1, 1, &m227_MI);
	}

IL_0149:
	{
		goto IL_016d;
	}

IL_014e:
	{
		t32 * L_38 = (__this->f1);
		t68 * L_39 = m270(L_38, &m270_MI);
		t56 * L_40 = m328(L_39, &m328_MI);
		Initobj (&t73_TI, (&V_6));
		m296(L_40, V_6, &m296_MI);
	}

IL_016d:
	{
		return;
	}
}
 void m112 (t43 * __this, t6 * p0, MethodInfo* method){
	t54* V_0 = {0};
	t53 * V_1 = {0};
	t42 * V_2 = {0};
	t65 * G_B2_0 = {0};
	t65 * G_B1_0 = {0};
	t53 * G_B5_0 = {0};
	int64_t G_B5_1 = 0;
	t32 * G_B5_2 = {0};
	t53 * G_B4_0 = {0};
	int64_t G_B4_1 = 0;
	t32 * G_B4_2 = {0};
	{
		t42 * L_0 = (t42 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t42_TI));
		m94(L_0, &m94_MI);
		V_2 = L_0;
		V_2->f0 = p0;
		V_2->f1 = __this;
		t32 * L_1 = (__this->f1);
		t68 * L_2 = m270(L_1, &m270_MI);
		t65 * L_3 = m330(L_2, &m330_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t43_TI));
		G_B1_0 = L_3;
		if ((((t43_SFs*)InitializedTypeInfo(&t43_TI)->static_fields)->f5))
		{
			G_B2_0 = L_3;
			goto IL_003c;
		}
	}
	{
		t124 L_4 = { &m146_MI };
		t49 * L_5 = (t49 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t49_TI));
		m593(L_5, NULL, L_4, &m593_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t43_TI));
		((t43_SFs*)InitializedTypeInfo(&t43_TI)->static_fields)->f5 = L_5;
		G_B2_0 = G_B1_0;
	}

IL_003c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t43_TI));
		m594(G_B2_0, (((t43_SFs*)InitializedTypeInfo(&t43_TI)->static_fields)->f5), &m594_MI);
		t32 * L_6 = (__this->f1);
		t68 * L_7 = m270(L_6, &m270_MI);
		t65 * L_8 = m330(L_7, &m330_MI);
		t124 L_9 = { &m95_MI };
		t130 * L_10 = (t130 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t130_TI));
		m541(L_10, V_2, L_9, &m541_MI);
		t5* L_11 = m595(NULL, L_8, L_10, &m595_MI);
		t54* L_12 = m596(NULL, L_11, &m596_MI);
		V_0 = L_12;
		t30 * L_13 = (__this->f2);
		t6 * L_14 = (V_2->f0);
		m54(L_13, L_14, (t29*)(t29*)V_0, &m54_MI);
		if ((((int32_t)(((int32_t)(((t107 *)V_0)->max_length)))) <= ((int32_t)0)))
		{
			goto IL_00d7;
		}
	}
	{
		t53 * L_15 = m113(__this, V_0, &m113_MI);
		V_1 = L_15;
		t124 L_16 = { &m96_MI };
		t157 * L_17 = (t157 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t157_TI));
		m597(L_17, V_2, L_16, &m597_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t39_TI));
		m598(NULL, V_1, L_17, &m598_MI);
		t32 * L_18 = (__this->f1);
		t32 * L_19 = L_18;
		int64_t L_20 = m274(L_19, &m274_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t43_TI));
		G_B4_0 = V_1;
		G_B4_1 = L_20;
		G_B4_2 = L_19;
		if ((((t43_SFs*)InitializedTypeInfo(&t43_TI)->static_fields)->f6))
		{
			G_B5_0 = V_1;
			G_B5_1 = L_20;
			G_B5_2 = L_19;
			goto IL_00c7;
		}
	}
	{
		t124 L_21 = { &m147_MI };
		t50 * L_22 = (t50 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t50_TI));
		m599(L_22, NULL, L_21, &m599_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t43_TI));
		((t43_SFs*)InitializedTypeInfo(&t43_TI)->static_fields)->f6 = L_22;
		G_B5_0 = G_B4_0;
		G_B5_1 = G_B4_1;
		G_B5_2 = G_B4_2;
	}

IL_00c7:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t43_TI));
		int64_t L_23 = m600(NULL, G_B5_0, (((t43_SFs*)InitializedTypeInfo(&t43_TI)->static_fields)->f6), &m600_MI);
		m275(G_B5_2, ((int64_t)(G_B5_1+L_23)), &m275_MI);
	}

IL_00d7:
	{
		t30 * L_24 = (__this->f2);
		t6 * L_25 = (V_2->f0);
		m44(L_24, L_25, &m44_MI);
		return;
	}
}
 t53 * m113 (t43 * __this, t54* p0, MethodInfo* method){
	t53 * V_0 = {0};
	t15 * V_1 = {0};
	t54* V_2 = {0};
	int32_t V_3 = 0;
	int64_t V_4 = 0;
	int32_t V_5 = 0;
	{
		t53 * L_0 = (t53 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t53_TI));
		m601(L_0, &m601_MI);
		V_0 = L_0;
		V_2 = p0;
		V_3 = 0;
		goto IL_0075;
	}

IL_000f:
	{
		int32_t L_1 = V_3;
		V_1 = (*(t15 **)(t15 **)SZArrayLdElema(V_2, L_1));
		t32 * L_2 = (__this->f1);
		t59 * L_3 = m268(L_2, &m268_MI);
		int32_t L_4 = m192(L_3, &m192_MI);
		V_4 = (((int64_t)L_4));
		t37 * L_5 = m151(V_1, &m151_MI);
		int32_t L_6 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m481_MI, L_5);
		V_5 = ((int32_t)(L_6-3));
		if ((((int32_t)V_5) <= ((int32_t)0)))
		{
			goto IL_0048;
		}
	}
	{
		V_4 = ((int64_t)(V_4+((int64_t)((int64_t)V_4*(int64_t)(((int64_t)V_5))))));
	}

IL_0048:
	{
		int32_t L_7 = m319(V_1, &m319_MI);
		if ((((int32_t)L_7) == ((int32_t)2)))
		{
			goto IL_0060;
		}
	}
	{
		int32_t L_8 = m319(V_1, &m319_MI);
		if ((((uint32_t)L_8) != ((uint32_t)3)))
		{
			goto IL_0068;
		}
	}

IL_0060:
	{
		V_4 = ((int64_t)((int64_t)V_4*(int64_t)(((int64_t)((int32_t)10)))));
	}

IL_0068:
	{
		VirtActionInvoker2< t15 *, int64_t >::Invoke(&m602_MI, V_0, V_1, V_4);
		V_3 = ((int32_t)(V_3+1));
	}

IL_0075:
	{
		if ((((int32_t)V_3) < ((int32_t)(((int32_t)(((t107 *)V_2)->max_length))))))
		{
			goto IL_000f;
		}
	}
	{
		return V_0;
	}
}
 void m114 (t43 * __this, t6 * p0, MethodInfo* method){
	bool V_0 = false;
	{
		t32 * L_0 = (__this->f1);
		t68 * L_1 = m270(L_0, &m270_MI);
		t56 * L_2 = m328(L_1, &m328_MI);
		if (L_2)
		{
			goto IL_002a;
		}
	}
	{
		bool L_3 = m132(__this, p0, &m132_MI);
		V_0 = L_3;
		if (V_0)
		{
			goto IL_002a;
		}
	}
	{
		m117(__this, p0, &m117_MI);
	}

IL_002a:
	{
		return;
	}
}
 void m115 (t43 * __this, t6 * p0, MethodInfo* method){
	{
		t32 * L_0 = (__this->f1);
		m267(L_0, 1, &m267_MI);
		m235(p0, 1, &m235_MI);
		return;
	}
}
 void m116 (t43 * __this, t6 * p0, MethodInfo* method){
	{
		t32 * L_0 = (__this->f1);
		m267(L_0, 2, &m267_MI);
		m239(p0, 1, &m239_MI);
		return;
	}
}
 void m117 (t43 * __this, t6 * p0, MethodInfo* method){
	{
		t32 * L_0 = (__this->f1);
		m267(L_0, 3, &m267_MI);
		m241(p0, 1, &m241_MI);
		return;
	}
}
 void m118 (t43 * __this, t6 * p0, MethodInfo* method){
	{
		t32 * L_0 = (__this->f1);
		m267(L_0, 4, &m267_MI);
		m237(p0, 1, &m237_MI);
		return;
	}
}
 void m119 (t43 * __this, t6 * p0, MethodInfo* method){
	int32_t V_0 = {0};
	int32_t V_1 = {0};
	{
		t32 * L_0 = (__this->f1);
		int32_t L_1 = m266(L_0, &m266_MI);
		V_0 = L_1;
		t32 * L_2 = (__this->f1);
		t59 * L_3 = m268(L_2, &m268_MI);
		int32_t L_4 = m170(L_3, &m170_MI);
		V_1 = L_4;
		m101(__this, V_1, &m101_MI);
		m243(p0, 1, &m243_MI);
		if ((((int32_t)V_0) == ((int32_t)4)))
		{
			goto IL_0051;
		}
	}
	{
		if ((((int32_t)V_0) == ((int32_t)3)))
		{
			goto IL_0051;
		}
	}
	{
		t32 * L_5 = (__this->f1);
		m267(L_5, 2, &m267_MI);
		m239(p0, 1, &m239_MI);
		goto IL_0064;
	}

IL_0051:
	{
		t32 * L_6 = (__this->f1);
		m267(L_6, 1, &m267_MI);
		m235(p0, 1, &m235_MI);
	}

IL_0064:
	{
		return;
	}
}
 bool m120 (t43 * __this, MethodInfo* method){
	{
		t32 * L_0 = (__this->f1);
		int64_t L_1 = m274(L_0, &m274_MI);
		t32 * L_2 = (__this->f1);
		int32_t L_3 = m272(L_2, &m272_MI);
		t32 * L_4 = (__this->f1);
		t59 * L_5 = m268(L_4, &m268_MI);
		int32_t L_6 = m172(L_5, &m172_MI);
		return ((((int32_t)((((int64_t)L_1) < ((int64_t)(((int64_t)((int32_t)((int32_t)L_3*(int32_t)L_6))))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
 void m121 (t43 * __this, t6 * p0, MethodInfo* method){
	double V_0 = 0.0;
	double V_1 = 0.0;
	{
		m231(p0, 1, &m231_MI);
		t32 * L_0 = (__this->f1);
		t32 * L_1 = L_0;
		int32_t L_2 = m272(L_1, &m272_MI);
		m273(L_1, ((int32_t)(L_2+1)), &m273_MI);
		t32 * L_3 = (__this->f1);
		double L_4 = m276(L_3, &m276_MI);
		t32 * L_5 = (__this->f1);
		t59 * L_6 = m268(L_5, &m268_MI);
		double L_7 = m178(L_6, &m178_MI);
		if ((((double)L_4) != ((double)L_7)))
		{
			goto IL_003b;
		}
	}
	{
		return;
	}

IL_003b:
	{
		t32 * L_8 = (__this->f1);
		double L_9 = m276(L_8, &m276_MI);
		t32 * L_10 = (__this->f1);
		t59 * L_11 = m268(L_10, &m268_MI);
		double L_12 = m174(L_11, &m174_MI);
		V_0 = ((double)(L_9-L_12));
		t32 * L_13 = (__this->f1);
		t59 * L_14 = m268(L_13, &m268_MI);
		double L_15 = m178(L_14, &m178_MI);
		if ((((double)V_0) < ((double)L_15)))
		{
			goto IL_0095;
		}
	}
	{
		t32 * L_16 = (__this->f1);
		t32 * L_17 = L_16;
		double L_18 = m276(L_17, &m276_MI);
		t32 * L_19 = (__this->f1);
		t59 * L_20 = m268(L_19, &m268_MI);
		double L_21 = m174(L_20, &m174_MI);
		m277(L_17, ((double)(L_18-L_21)), &m277_MI);
		goto IL_00d9;
	}

IL_0095:
	{
		t32 * L_22 = (__this->f1);
		t59 * L_23 = m268(L_22, &m268_MI);
		double L_24 = m178(L_23, &m178_MI);
		V_1 = ((double)(V_0-L_24));
		t32 * L_25 = (__this->f1);
		t59 * L_26 = m268(L_25, &m268_MI);
		double L_27 = m174(L_26, &m174_MI);
		if ((((double)V_1) >= ((double)L_27)))
		{
			goto IL_00d9;
		}
	}
	{
		t32 * L_28 = (__this->f1);
		t32 * L_29 = (__this->f1);
		t59 * L_30 = m268(L_29, &m268_MI);
		double L_31 = m178(L_30, &m178_MI);
		m277(L_28, L_31, &m277_MI);
	}

IL_00d9:
	{
		return;
	}
}
 void m122 (t43 * __this, t6 * p0, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	t70 * V_2 = {0};
	{
		V_0 = 0;
		goto IL_00f1;
	}

IL_0007:
	{
		V_1 = 0;
		goto IL_00d7;
	}

IL_000e:
	{
		t32 * L_0 = (__this->f1);
		t68 * L_1 = m270(L_0, &m270_MI);
		t75* L_2 = m336(L_1, &m336_MI);
		t70 * L_3 = GenArrayGet2(L_2, V_0, V_1, t70 *);;
		V_2 = L_3;
		if (((t25 *)IsInst(V_2, InitializedTypeInfo(&t25_TI))))
		{
			goto IL_0036;
		}
	}
	{
		goto IL_00d3;
	}

IL_0036:
	{
		t32 * L_4 = (__this->f1);
		t68 * L_5 = m270(L_4, &m270_MI);
		t75* L_6 = m336(L_5, &m336_MI);
		t70 * L_7 = GenArrayGet2(L_6, V_0, V_1, t70 *);;
		if (!L_7)
		{
			goto IL_00d3;
		}
	}
	{
		t32 * L_8 = (__this->f1);
		t68 * L_9 = m270(L_8, &m270_MI);
		t56 * L_10 = m328(L_9, &m328_MI);
		if (!L_10)
		{
			goto IL_0087;
		}
	}
	{
		t32 * L_11 = (__this->f1);
		t68 * L_12 = m270(L_11, &m270_MI);
		t56 * L_13 = m328(L_12, &m328_MI);
		bool L_14 = m298(L_13, ((t25 *)Castclass(V_2, InitializedTypeInfo(&t25_TI))), &m298_MI);
		if (L_14)
		{
			goto IL_00d3;
		}
	}

IL_0087:
	{
		t32 * L_15 = (__this->f1);
		t68 * L_16 = m270(L_15, &m270_MI);
		t36 * L_17 = (t36 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t36_TI));
		m160(L_17, V_0, ((int32_t)(V_1-1)), &m160_MI);
		bool L_18 = m341(L_16, L_17, &m341_MI);
		if (!L_18)
		{
			goto IL_00d3;
		}
	}
	{
		t32 * L_19 = (__this->f1);
		t68 * L_20 = m270(L_19, &m270_MI);
		t75* L_21 = m336(L_20, &m336_MI);
		t70 * L_22 = GenArrayGet2(L_21, V_0, ((int32_t)(V_1-1)), t70 *);;
		if (L_22)
		{
			goto IL_00d3;
		}
	}
	{
		t36 * L_23 = (t36 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t36_TI));
		m160(L_23, V_0, V_1, &m160_MI);
		m139(__this, L_23, 0, p0, &m139_MI);
	}

IL_00d3:
	{
		V_1 = ((int32_t)(V_1+1));
	}

IL_00d7:
	{
		t32 * L_24 = (__this->f1);
		t68 * L_25 = m270(L_24, &m270_MI);
		int32_t L_26 = m326(L_25, &m326_MI);
		if ((((int32_t)V_1) < ((int32_t)L_26)))
		{
			goto IL_000e;
		}
	}
	{
		V_0 = ((int32_t)(V_0+1));
	}

IL_00f1:
	{
		t32 * L_27 = (__this->f1);
		t68 * L_28 = m270(L_27, &m270_MI);
		int32_t L_29 = m324(L_28, &m324_MI);
		if ((((int32_t)V_0) < ((int32_t)L_29)))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
 void m123 (t43 * __this, t6 * p0, MethodInfo* method){
	t56 * V_0 = {0};
	t25 * V_1 = {0};
	t74 * V_2 = {0};
	t74 * V_3 = {0};
	t74 * V_4 = {0};
	t74 * V_5 = {0};
	{
		t32 * L_0 = (__this->f1);
		t68 * L_1 = m270(L_0, &m270_MI);
		t56 * L_2 = m328(L_1, &m328_MI);
		V_0 = L_2;
		t72 * L_3 = m289(V_0, &m289_MI);
		t25 * L_4 = m301(L_3, &m301_MI);
		V_1 = L_4;
		t74 * L_5 = (t74 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t74_TI));
		m307(L_5, &m307_MI);
		V_5 = L_5;
		t72 * L_6 = m289(V_0, &m289_MI);
		t25 * L_7 = m301(L_6, &m301_MI);
		m309(V_5, L_7, &m309_MI);
		t72 * L_8 = m289(V_0, &m289_MI);
		t36 * L_9 = m303(L_8, &m303_MI);
		m313(V_5, L_9, &m313_MI);
		t72 * L_10 = m291(V_0, &m291_MI);
		t36 * L_11 = m303(L_10, &m303_MI);
		m315(V_5, L_11, &m315_MI);
		V_2 = V_5;
		t74 * L_12 = (t74 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t74_TI));
		m307(L_12, &m307_MI);
		V_5 = L_12;
		t72 * L_13 = m291(V_0, &m291_MI);
		t25 * L_14 = m301(L_13, &m301_MI);
		m309(V_5, L_14, &m309_MI);
		t72 * L_15 = m291(V_0, &m291_MI);
		t36 * L_16 = m303(L_15, &m303_MI);
		m313(V_5, L_16, &m313_MI);
		t72 * L_17 = m293(V_0, &m293_MI);
		t36 * L_18 = m303(L_17, &m303_MI);
		m315(V_5, L_18, &m315_MI);
		V_3 = V_5;
		t74 * L_19 = (t74 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t74_TI));
		m307(L_19, &m307_MI);
		V_5 = L_19;
		t72 * L_20 = m293(V_0, &m293_MI);
		t25 * L_21 = m301(L_20, &m301_MI);
		m309(V_5, L_21, &m309_MI);
		t72 * L_22 = m293(V_0, &m293_MI);
		t36 * L_23 = m303(L_22, &m303_MI);
		m313(V_5, L_23, &m313_MI);
		t72 * L_24 = m289(V_0, &m289_MI);
		t36 * L_25 = m303(L_24, &m303_MI);
		m315(V_5, L_25, &m315_MI);
		V_4 = V_5;
		t72 * L_26 = m289(V_0, &m289_MI);
		t72 * L_27 = m293(V_0, &m293_MI);
		t25 * L_28 = m301(L_27, &m301_MI);
		m302(L_26, L_28, &m302_MI);
		t72 * L_29 = m293(V_0, &m293_MI);
		t72 * L_30 = m291(V_0, &m291_MI);
		t25 * L_31 = m301(L_30, &m301_MI);
		m302(L_29, L_31, &m302_MI);
		t72 * L_32 = m291(V_0, &m291_MI);
		m302(L_32, V_1, &m302_MI);
		t32 * L_33 = (__this->f1);
		t68 * L_34 = m270(L_33, &m270_MI);
		t72 * L_35 = m289(V_0, &m289_MI);
		t36 * L_36 = m303(L_35, &m303_MI);
		bool L_37 = m341(L_34, L_36, &m341_MI);
		if (!L_37)
		{
			goto IL_0168;
		}
	}
	{
		t32 * L_38 = (__this->f1);
		t68 * L_39 = m270(L_38, &m270_MI);
		t72 * L_40 = m289(V_0, &m289_MI);
		t36 * L_41 = m303(L_40, &m303_MI);
		t72 * L_42 = m289(V_0, &m289_MI);
		t25 * L_43 = m301(L_42, &m301_MI);
		m339(L_39, L_41, L_43, &m339_MI);
		t64 * L_44 = m218(p0, &m218_MI);
		VirtActionInvoker1< t74 * >::Invoke(&m603_MI, L_44, V_2);
	}

IL_0168:
	{
		t32 * L_45 = (__this->f1);
		t68 * L_46 = m270(L_45, &m270_MI);
		t72 * L_47 = m291(V_0, &m291_MI);
		t36 * L_48 = m303(L_47, &m303_MI);
		bool L_49 = m341(L_46, L_48, &m341_MI);
		if (!L_49)
		{
			goto IL_01ba;
		}
	}
	{
		t32 * L_50 = (__this->f1);
		t68 * L_51 = m270(L_50, &m270_MI);
		t72 * L_52 = m291(V_0, &m291_MI);
		t36 * L_53 = m303(L_52, &m303_MI);
		t72 * L_54 = m291(V_0, &m291_MI);
		t25 * L_55 = m301(L_54, &m301_MI);
		m339(L_51, L_53, L_55, &m339_MI);
		t64 * L_56 = m218(p0, &m218_MI);
		VirtActionInvoker1< t74 * >::Invoke(&m603_MI, L_56, V_3);
	}

IL_01ba:
	{
		t32 * L_57 = (__this->f1);
		t68 * L_58 = m270(L_57, &m270_MI);
		t72 * L_59 = m293(V_0, &m293_MI);
		t36 * L_60 = m303(L_59, &m303_MI);
		bool L_61 = m341(L_58, L_60, &m341_MI);
		if (!L_61)
		{
			goto IL_020d;
		}
	}
	{
		t32 * L_62 = (__this->f1);
		t68 * L_63 = m270(L_62, &m270_MI);
		t72 * L_64 = m293(V_0, &m293_MI);
		t36 * L_65 = m303(L_64, &m303_MI);
		t72 * L_66 = m293(V_0, &m293_MI);
		t25 * L_67 = m301(L_66, &m301_MI);
		m339(L_63, L_65, L_67, &m339_MI);
		t64 * L_68 = m218(p0, &m218_MI);
		VirtActionInvoker1< t74 * >::Invoke(&m603_MI, L_68, V_4);
	}

IL_020d:
	{
		m229(p0, 1, &m229_MI);
		return;
	}
}
 bool m124 (t43 * __this, int32_t p0, MethodInfo* method){
	bool V_0 = false;
	t56 * V_1 = {0};
	{
		V_0 = 0;
		t32 * L_0 = (__this->f1);
		t68 * L_1 = m270(L_0, &m270_MI);
		t56 * L_2 = m328(L_1, &m328_MI);
		V_1 = L_2;
		if ((((uint32_t)p0) != ((uint32_t)1)))
		{
			goto IL_002f;
		}
	}
	{
		t72 * L_3 = m293(V_1, &m293_MI);
		t36 * L_4 = m303(L_3, &m303_MI);
		int32_t L_5 = m164(L_4, &m164_MI);
		if (!L_5)
		{
			goto IL_005b;
		}
	}

IL_002f:
	{
		if ((((uint32_t)p0) != ((uint32_t)2)))
		{
			goto IL_005d;
		}
	}
	{
		t72 * L_6 = m293(V_1, &m293_MI);
		t36 * L_7 = m303(L_6, &m303_MI);
		int32_t L_8 = m164(L_7, &m164_MI);
		t32 * L_9 = (__this->f1);
		t68 * L_10 = m270(L_9, &m270_MI);
		int32_t L_11 = m343(L_10, &m343_MI);
		if ((((uint32_t)L_8) != ((uint32_t)L_11)))
		{
			goto IL_005d;
		}
	}

IL_005b:
	{
		V_0 = 1;
	}

IL_005d:
	{
		return V_0;
	}
}
 bool m125 (t43 * __this, int32_t p0, MethodInfo* method){
	bool V_0 = false;
	t56 * V_1 = {0};
	t36 * V_2 = {0};
	t36 * V_3 = {0};
	{
		V_0 = 0;
		t32 * L_0 = (__this->f1);
		t68 * L_1 = m270(L_0, &m270_MI);
		t56 * L_2 = m328(L_1, &m328_MI);
		V_1 = L_2;
		t36 * L_3 = m137(__this, V_1, 1, &m137_MI);
		V_2 = L_3;
		t36 * L_4 = m138(__this, V_1, 1, &m138_MI);
		V_3 = L_4;
		if ((((uint32_t)p0) != ((uint32_t)1)))
		{
			goto IL_0032;
		}
	}
	{
		if (!V_2)
		{
			goto IL_003f;
		}
	}

IL_0032:
	{
		if ((((uint32_t)p0) != ((uint32_t)2)))
		{
			goto IL_0041;
		}
	}
	{
		if (V_3)
		{
			goto IL_0041;
		}
	}

IL_003f:
	{
		V_0 = 1;
	}

IL_0041:
	{
		return V_0;
	}
}
 bool m126 (t43 * __this, MethodInfo* method){
	t56 * V_0 = {0};
	int32_t G_B3_0 = 0;
	{
		t32 * L_0 = (__this->f1);
		t68 * L_1 = m270(L_0, &m270_MI);
		t56 * L_2 = m328(L_1, &m328_MI);
		V_0 = L_2;
		t72 * L_3 = m293(V_0, &m293_MI);
		t36 * L_4 = m303(L_3, &m303_MI);
		int32_t L_5 = m166(L_4, &m166_MI);
		if (!L_5)
		{
			goto IL_0065;
		}
	}
	{
		t32 * L_6 = (__this->f1);
		t68 * L_7 = m270(L_6, &m270_MI);
		t75* L_8 = m336(L_7, &m336_MI);
		t72 * L_9 = m293(V_0, &m293_MI);
		t36 * L_10 = m303(L_9, &m303_MI);
		int32_t L_11 = m164(L_10, &m164_MI);
		t72 * L_12 = m293(V_0, &m293_MI);
		t36 * L_13 = m303(L_12, &m303_MI);
		int32_t L_14 = m166(L_13, &m166_MI);
		t70 * L_15 = GenArrayGet2(L_8, L_11, ((int32_t)(L_14-1)), t70 *);;
		G_B3_0 = ((((int32_t)((((t70 *)L_15) == ((t5 *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0066;
	}

IL_0065:
	{
		G_B3_0 = 1;
	}

IL_0066:
	{
		return G_B3_0;
	}
}
 t46* m127 (t43 * __this, t36 * p0, MethodInfo* method){
	t158 * V_0 = {0};
	t58* V_1 = {0};
	t36 * V_2 = {0};
	t58* V_3 = {0};
	int32_t V_4 = 0;
	t70 * V_5 = {0};
	t25 * V_6 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t158_TI));
		t158 * L_0 = (t158 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t158_TI));
		m604(L_0, &m604_MI);
		V_0 = L_0;
		t58* L_1 = m163(NULL, p0, &m163_MI);
		V_1 = L_1;
		V_3 = V_1;
		V_4 = 0;
		goto IL_0083;
	}

IL_0017:
	{
		int32_t L_2 = V_4;
		V_2 = (*(t36 **)(t36 **)SZArrayLdElema(V_3, L_2));
		t32 * L_3 = (__this->f1);
		t68 * L_4 = m270(L_3, &m270_MI);
		bool L_5 = m341(L_4, V_2, &m341_MI);
		if (!L_5)
		{
			goto IL_007d;
		}
	}
	{
		t32 * L_6 = (__this->f1);
		t68 * L_7 = m270(L_6, &m270_MI);
		bool L_8 = m340(L_7, V_2, &m340_MI);
		if (L_8)
		{
			goto IL_007d;
		}
	}
	{
		t32 * L_9 = (__this->f1);
		t68 * L_10 = m270(L_9, &m270_MI);
		t70 * L_11 = m338(L_10, V_2, &m338_MI);
		V_5 = L_11;
		if (!((t25 *)IsInst(V_5, InitializedTypeInfo(&t25_TI))))
		{
			goto IL_007d;
		}
	}
	{
		V_6 = ((t25 *)Castclass(V_5, InitializedTypeInfo(&t25_TI)));
		int32_t L_12 = m283(V_6, &m283_MI);
		VirtActionInvoker1< int32_t >::Invoke(&m605_MI, V_0, L_12);
	}

IL_007d:
	{
		V_4 = ((int32_t)(V_4+1));
	}

IL_0083:
	{
		if ((((int32_t)V_4) < ((int32_t)(((int32_t)(((t107 *)V_3)->max_length))))))
		{
			goto IL_0017;
		}
	}
	{
		t46* L_13 = m606(V_0, &m606_MI);
		return L_13;
	}
}
 void m128 (t43 * __this, int32_t p0, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	t25 * V_3 = {0};
	{
		V_0 = 0;
		goto IL_006e;
	}

IL_0007:
	{
		V_1 = 0;
		goto IL_0054;
	}

IL_000e:
	{
		V_2 = 1;
		if ((((uint32_t)V_0) != ((uint32_t)((int32_t)(p0-1)))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_0 = m607(NULL, 0, 2, &m607_MI);
		V_2 = ((((int32_t)L_0) == ((int32_t)1))? 1 : 0);
	}

IL_0024:
	{
		if (!V_2)
		{
			goto IL_0050;
		}
	}
	{
		t36 * L_1 = (t36 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t36_TI));
		m160(L_1, V_1, V_0, &m160_MI);
		t25 * L_2 = m131(__this, L_1, &m131_MI);
		V_3 = L_2;
		t32 * L_3 = (__this->f1);
		t68 * L_4 = m270(L_3, &m270_MI);
		t75* L_5 = m336(L_4, &m336_MI);
		GenArraySet2(L_5, V_1, V_0, V_3, t70 *);;
	}

IL_0050:
	{
		V_1 = ((int32_t)(V_1+1));
	}

IL_0054:
	{
		t32 * L_6 = (__this->f1);
		t68 * L_7 = m270(L_6, &m270_MI);
		int32_t L_8 = m324(L_7, &m324_MI);
		if ((((int32_t)V_1) < ((int32_t)L_8)))
		{
			goto IL_000e;
		}
	}
	{
		V_0 = ((int32_t)(V_0+1));
	}

IL_006e:
	{
		if ((((int32_t)V_0) < ((int32_t)p0)))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
 int32_t m129 (t43 * __this, MethodInfo* method){
	int32_t V_0 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t43_TI));
		int32_t L_0 = m607(NULL, 0, (((int32_t)(((t107 *)(((t43_SFs*)InitializedTypeInfo(&t43_TI)->static_fields)->f0))->max_length))), &m607_MI);
		V_0 = L_0;
		int32_t L_1 = V_0;
		return (int32_t)((*(int32_t*)(int32_t*)SZArrayLdElema((((t43_SFs*)InitializedTypeInfo(&t43_TI)->static_fields)->f0), L_1)));
	}
}
 int32_t m130 (t43 * __this, t46* p0, MethodInfo* method){
	t46* V_0 = {0};
	int32_t V_1 = 0;
	t45 * V_2 = {0};
	{
		t45 * L_0 = (t45 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t45_TI));
		m97(L_0, &m97_MI);
		V_2 = L_0;
		V_2->f0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t43_TI));
		t124 L_1 = { &m98_MI };
		t48 * L_2 = (t48 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t48_TI));
		m572(L_2, V_2, L_1, &m572_MI);
		t5* L_3 = m573(NULL, (t5*)(t5*)(((t43_SFs*)InitializedTypeInfo(&t43_TI)->static_fields)->f0), L_2, &m573_MI);
		t46* L_4 = m574(NULL, L_3, &m574_MI);
		V_0 = L_4;
		if ((((int32_t)(((t107 *)V_0)->max_length))))
		{
			goto IL_0038;
		}
	}
	{
		int32_t L_5 = m129(__this, &m129_MI);
		return L_5;
	}

IL_0038:
	{
		int32_t L_6 = m607(NULL, 0, (((int32_t)(((t107 *)V_0)->max_length))), &m607_MI);
		V_1 = L_6;
		int32_t L_7 = V_1;
		return (int32_t)((*(int32_t*)(int32_t*)SZArrayLdElema(V_0, L_7)));
	}
}
 t25 * m131 (t43 * __this, t36 * p0, MethodInfo* method){
	t46* V_0 = {0};
	t25 * V_1 = {0};
	{
		t46* L_0 = m127(__this, p0, &m127_MI);
		V_0 = L_0;
		int32_t L_1 = m130(__this, V_0, &m130_MI);
		t25 * L_2 = (t25 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t25_TI));
		m282(L_2, L_1, &m282_MI);
		V_1 = L_2;
		return V_1;
	}
}
 bool m132 (t43 * __this, t6 * p0, MethodInfo* method){
	t55* V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	t56 * V_3 = {0};
	t74 * V_4 = {0};
	{
		t55* L_0 = m133(__this, &m133_MI);
		V_0 = L_0;
		if ((((int32_t)(((t107 *)V_0)->max_length))))
		{
			goto IL_0011;
		}
	}
	{
		return 0;
	}

IL_0011:
	{
		int32_t L_1 = m607(NULL, 0, (((int32_t)(((t107 *)V_0)->max_length))), &m607_MI);
		V_1 = L_1;
		int32_t L_2 = V_1;
		V_2 = (*(int32_t*)(int32_t*)SZArrayLdElema(V_0, L_2));
		t56 * L_3 = m134(__this, &m134_MI);
		V_3 = L_3;
		t32 * L_4 = (__this->f1);
		t68 * L_5 = m270(L_4, &m270_MI);
		m329(L_5, V_3, &m329_MI);
		t32 * L_6 = (__this->f1);
		t68 * L_7 = m270(L_6, &m270_MI);
		t75* L_8 = m336(L_7, &m336_MI);
		t32 * L_9 = (__this->f1);
		t68 * L_10 = m270(L_9, &m270_MI);
		int32_t L_11 = m344(L_10, &m344_MI);
		t72 * L_12 = m293(V_3, &m293_MI);
		t25 * L_13 = m301(L_12, &m301_MI);
		GenArraySet2(L_8, V_2, L_11, L_13, t70 *);;
		t72 * L_14 = m293(V_3, &m293_MI);
		t36 * L_15 = m303(L_14, &m303_MI);
		m165(L_15, V_2, &m165_MI);
		t72 * L_16 = m293(V_3, &m293_MI);
		t36 * L_17 = m303(L_16, &m303_MI);
		t32 * L_18 = (__this->f1);
		t68 * L_19 = m270(L_18, &m270_MI);
		int32_t L_20 = m344(L_19, &m344_MI);
		m167(L_17, L_20, &m167_MI);
		t72 * L_21 = m293(V_3, &m293_MI);
		m306(L_21, 1, &m306_MI);
		t64 * L_22 = m218(p0, &m218_MI);
		t74 * L_23 = (t74 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t74_TI));
		m307(L_23, &m307_MI);
		V_4 = L_23;
		t72 * L_24 = m293(V_3, &m293_MI);
		t25 * L_25 = m301(L_24, &m301_MI);
		m309(V_4, L_25, &m309_MI);
		t36 * L_26 = m162(NULL, &m162_MI);
		m313(V_4, L_26, &m313_MI);
		t32 * L_27 = (__this->f1);
		t68 * L_28 = m270(L_27, &m270_MI);
		int32_t L_29 = m344(L_28, &m344_MI);
		t36 * L_30 = (t36 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t36_TI));
		m160(L_30, V_2, L_29, &m160_MI);
		m315(V_4, L_30, &m315_MI);
		VirtActionInvoker1< t74 * >::Invoke(&m603_MI, L_22, V_4);
		return 1;
	}
}
 t55* m133 (t43 * __this, MethodInfo* method){
	t159 * V_0 = {0};
	int32_t V_1 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t159_TI));
		t159 * L_0 = (t159 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t159_TI));
		m609(L_0, &m609_MI);
		V_0 = L_0;
		V_1 = 0;
		goto IL_0043;
	}

IL_000d:
	{
		t32 * L_1 = (__this->f1);
		t68 * L_2 = m270(L_1, &m270_MI);
		t75* L_3 = m336(L_2, &m336_MI);
		t32 * L_4 = (__this->f1);
		t68 * L_5 = m270(L_4, &m270_MI);
		int32_t L_6 = m344(L_5, &m344_MI);
		t70 * L_7 = GenArrayGet2(L_3, V_1, L_6, t70 *);;
		if (L_7)
		{
			goto IL_003f;
		}
	}
	{
		VirtActionInvoker1< int32_t >::Invoke(&m610_MI, V_0, V_1);
	}

IL_003f:
	{
		V_1 = ((int32_t)(V_1+1));
	}

IL_0043:
	{
		t32 * L_8 = (__this->f1);
		t68 * L_9 = m270(L_8, &m270_MI);
		int32_t L_10 = m324(L_9, &m324_MI);
		if ((((int32_t)V_1) < ((int32_t)L_10)))
		{
			goto IL_000d;
		}
	}
	{
		t55* L_11 = m611(V_0, &m611_MI);
		return L_11;
	}
}
 t56 * m134 (t43 * __this, MethodInfo* method){
	t163* V_0 = {0};
	double V_1 = 0.0;
	double V_2 = 0.0;
	int32_t V_3 = {0};
	double V_4 = 0.0;
	double V_5 = 0.0;
	int32_t V_6 = {0};
	{
		V_0 = ((t163*)SZArrayNew(InitializedTypeInfo(&t163_TI), 3));
		float L_0 = m612(NULL, &m612_MI);
		V_1 = (((double)L_0));
		float L_1 = m612(NULL, &m612_MI);
		V_2 = (((double)L_1));
		int32_t L_2 = m129(__this, &m129_MI);
		V_3 = L_2;
		t25 * L_3 = (t25 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t25_TI));
		m282(L_3, V_3, &m282_MI);
		ArrayElementTypeCheck (V_0, L_3);
		*((t25 **)(t25 **)SZArrayLdElema(V_0, 0)) = (t25 *)L_3;
		t32 * L_4 = (__this->f1);
		int32_t L_5 = m272(L_4, &m272_MI);
		t32 * L_6 = (__this->f1);
		t59 * L_7 = m268(L_6, &m268_MI);
		int32_t L_8 = m194(L_7, &m194_MI);
		t32 * L_9 = (__this->f1);
		t59 * L_10 = m268(L_9, &m268_MI);
		double L_11 = m186(L_10, &m186_MI);
		t32 * L_12 = (__this->f1);
		t59 * L_13 = m268(L_12, &m268_MI);
		double L_14 = m190(L_13, &m190_MI);
		double L_15 = m144(__this, L_5, L_8, L_11, L_14, &m144_MI);
		V_4 = L_15;
		t32 * L_16 = (__this->f1);
		int32_t L_17 = m272(L_16, &m272_MI);
		t32 * L_18 = (__this->f1);
		t59 * L_19 = m268(L_18, &m268_MI);
		int32_t L_20 = m194(L_19, &m194_MI);
		t32 * L_21 = (__this->f1);
		t59 * L_22 = m268(L_21, &m268_MI);
		double L_23 = m184(L_22, &m184_MI);
		t32 * L_24 = (__this->f1);
		t59 * L_25 = m268(L_24, &m268_MI);
		double L_26 = m188(L_25, &m188_MI);
		double L_27 = m144(__this, L_17, L_20, L_23, L_26, &m144_MI);
		V_5 = L_27;
		if ((((double)V_1) > ((double)V_4)))
		{
			goto IL_00ca;
		}
	}
	{
		t25 * L_28 = (t25 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t25_TI));
		m282(L_28, V_3, &m282_MI);
		ArrayElementTypeCheck (V_0, L_28);
		*((t25 **)(t25 **)SZArrayLdElema(V_0, 1)) = (t25 *)L_28;
		t25 * L_29 = (t25 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t25_TI));
		m282(L_29, V_3, &m282_MI);
		ArrayElementTypeCheck (V_0, L_29);
		*((t25 **)(t25 **)SZArrayLdElema(V_0, 2)) = (t25 *)L_29;
		goto IL_0137;
	}

IL_00ca:
	{
		if ((((double)V_2) > ((double)V_5)))
		{
			goto IL_00f8;
		}
	}
	{
		t25 * L_30 = (t25 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t25_TI));
		m282(L_30, V_3, &m282_MI);
		ArrayElementTypeCheck (V_0, L_30);
		*((t25 **)(t25 **)SZArrayLdElema(V_0, 1)) = (t25 *)L_30;
		t46* L_31 = ((t46*)SZArrayNew(InitializedTypeInfo(&t46_TI), 1));
		*((int32_t*)(int32_t*)SZArrayLdElema(L_31, 0)) = (int32_t)V_3;
		int32_t L_32 = m130(__this, L_31, &m130_MI);
		t25 * L_33 = (t25 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t25_TI));
		m282(L_33, L_32, &m282_MI);
		ArrayElementTypeCheck (V_0, L_33);
		*((t25 **)(t25 **)SZArrayLdElema(V_0, 2)) = (t25 *)L_33;
		goto IL_0137;
	}

IL_00f8:
	{
		t46* L_34 = ((t46*)SZArrayNew(InitializedTypeInfo(&t46_TI), 1));
		*((int32_t*)(int32_t*)SZArrayLdElema(L_34, 0)) = (int32_t)V_3;
		int32_t L_35 = m130(__this, L_34, &m130_MI);
		t25 * L_36 = (t25 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t25_TI));
		m282(L_36, L_35, &m282_MI);
		ArrayElementTypeCheck (V_0, L_36);
		*((t25 **)(t25 **)SZArrayLdElema(V_0, 1)) = (t25 *)L_36;
		int32_t L_37 = 1;
		int32_t L_38 = m283((*(t25 **)(t25 **)SZArrayLdElema(V_0, L_37)), &m283_MI);
		V_6 = L_38;
		t46* L_39 = ((t46*)SZArrayNew(InitializedTypeInfo(&t46_TI), 2));
		*((int32_t*)(int32_t*)SZArrayLdElema(L_39, 0)) = (int32_t)V_3;
		t46* L_40 = L_39;
		*((int32_t*)(int32_t*)SZArrayLdElema(L_40, 1)) = (int32_t)V_6;
		int32_t L_41 = m130(__this, L_40, &m130_MI);
		t25 * L_42 = (t25 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t25_TI));
		m282(L_42, L_41, &m282_MI);
		ArrayElementTypeCheck (V_0, L_42);
		*((t25 **)(t25 **)SZArrayLdElema(V_0, 2)) = (t25 *)L_42;
	}

IL_0137:
	{
		int32_t L_43 = 0;
		int32_t L_44 = 1;
		int32_t L_45 = 2;
		t56 * L_46 = (t56 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t56_TI));
		m288(L_46, (*(t25 **)(t25 **)SZArrayLdElema(V_0, L_43)), (*(t25 **)(t25 **)SZArrayLdElema(V_0, L_44)), (*(t25 **)(t25 **)SZArrayLdElema(V_0, L_45)), &m288_MI);
		return L_46;
	}
}
 bool m135 (t43 * __this, int32_t p0, t6 * p1, int32_t p2, MethodInfo* method){
	t56 * V_0 = {0};
	t36 * V_1 = {0};
	t36 * V_2 = {0};
	t36 * V_3 = {0};
	t36 * V_4 = {0};
	int32_t V_5 = {0};
	t74 * V_6 = {0};
	{
		t32 * L_0 = (__this->f1);
		t68 * L_1 = m270(L_0, &m270_MI);
		t56 * L_2 = m328(L_1, &m328_MI);
		V_0 = L_2;
		V_1 = (t36 *)NULL;
		V_5 = p0;
		if (V_5 == 0)
		{
			goto IL_002e;
		}
		if (V_5 == 1)
		{
			goto IL_003c;
		}
		if (V_5 == 2)
		{
			goto IL_004a;
		}
	}
	{
		goto IL_0058;
	}

IL_002e:
	{
		t36 * L_3 = m136(__this, V_0, p2, &m136_MI);
		V_1 = L_3;
		goto IL_0058;
	}

IL_003c:
	{
		t36 * L_4 = m137(__this, V_0, p2, &m137_MI);
		V_1 = L_4;
		goto IL_0058;
	}

IL_004a:
	{
		t36 * L_5 = m138(__this, V_0, p2, &m138_MI);
		V_1 = L_5;
		goto IL_0058;
	}

IL_0058:
	{
		if (V_1)
		{
			goto IL_0060;
		}
	}
	{
		return 0;
	}

IL_0060:
	{
		t72 * L_6 = m289(V_0, &m289_MI);
		t36 * L_7 = m303(L_6, &m303_MI);
		V_2 = L_7;
		t72 * L_8 = m291(V_0, &m291_MI);
		t36 * L_9 = m303(L_8, &m303_MI);
		V_3 = L_9;
		t72 * L_10 = m293(V_0, &m293_MI);
		t36 * L_11 = m303(L_10, &m303_MI);
		V_4 = L_11;
		t72 * L_12 = m289(V_0, &m289_MI);
		t36 * L_13 = m303(L_12, &m303_MI);
		m143(__this, L_13, &m143_MI);
		t72 * L_14 = m291(V_0, &m291_MI);
		t36 * L_15 = m303(L_14, &m303_MI);
		m143(__this, L_15, &m143_MI);
		t72 * L_16 = m293(V_0, &m293_MI);
		t36 * L_17 = m303(L_16, &m303_MI);
		m143(__this, L_17, &m143_MI);
		t72 * L_18 = m289(V_0, &m289_MI);
		int32_t L_19 = m164(V_1, &m164_MI);
		int32_t L_20 = m166(V_1, &m166_MI);
		t36 * L_21 = (t36 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t36_TI));
		m160(L_21, L_19, ((int32_t)(L_20+2)), &m160_MI);
		m304(L_18, L_21, &m304_MI);
		t72 * L_22 = m291(V_0, &m291_MI);
		int32_t L_23 = m164(V_1, &m164_MI);
		int32_t L_24 = m166(V_1, &m166_MI);
		t36 * L_25 = (t36 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t36_TI));
		m160(L_25, L_23, ((int32_t)(L_24+1)), &m160_MI);
		m304(L_22, L_25, &m304_MI);
		t72 * L_26 = m293(V_0, &m293_MI);
		m304(L_26, V_1, &m304_MI);
		t32 * L_27 = (__this->f1);
		t68 * L_28 = m270(L_27, &m270_MI);
		t72 * L_29 = m289(V_0, &m289_MI);
		t36 * L_30 = m303(L_29, &m303_MI);
		bool L_31 = m341(L_28, L_30, &m341_MI);
		if (!L_31)
		{
			goto IL_01a2;
		}
	}
	{
		t72 * L_32 = m289(V_0, &m289_MI);
		bool L_33 = m305(L_32, &m305_MI);
		if (L_33)
		{
			goto IL_013c;
		}
	}
	{
		t72 * L_34 = m289(V_0, &m289_MI);
		m306(L_34, 1, &m306_MI);
	}

IL_013c:
	{
		t32 * L_35 = (__this->f1);
		t68 * L_36 = m270(L_35, &m270_MI);
		t72 * L_37 = m289(V_0, &m289_MI);
		t36 * L_38 = m303(L_37, &m303_MI);
		t72 * L_39 = m289(V_0, &m289_MI);
		t25 * L_40 = m301(L_39, &m301_MI);
		m339(L_36, L_38, L_40, &m339_MI);
		t64 * L_41 = m218(p1, &m218_MI);
		t74 * L_42 = (t74 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t74_TI));
		m307(L_42, &m307_MI);
		V_6 = L_42;
		t72 * L_43 = m289(V_0, &m289_MI);
		t25 * L_44 = m301(L_43, &m301_MI);
		m309(V_6, L_44, &m309_MI);
		m313(V_6, V_2, &m313_MI);
		t72 * L_45 = m289(V_0, &m289_MI);
		t36 * L_46 = m303(L_45, &m303_MI);
		m315(V_6, L_46, &m315_MI);
		VirtActionInvoker1< t74 * >::Invoke(&m603_MI, L_41, V_6);
	}

IL_01a2:
	{
		t32 * L_47 = (__this->f1);
		t68 * L_48 = m270(L_47, &m270_MI);
		t72 * L_49 = m291(V_0, &m291_MI);
		t36 * L_50 = m303(L_49, &m303_MI);
		bool L_51 = m341(L_48, L_50, &m341_MI);
		if (!L_51)
		{
			goto IL_0244;
		}
	}
	{
		t72 * L_52 = m291(V_0, &m291_MI);
		bool L_53 = m305(L_52, &m305_MI);
		if (L_53)
		{
			goto IL_01de;
		}
	}
	{
		t72 * L_54 = m291(V_0, &m291_MI);
		m306(L_54, 1, &m306_MI);
	}

IL_01de:
	{
		t32 * L_55 = (__this->f1);
		t68 * L_56 = m270(L_55, &m270_MI);
		t72 * L_57 = m291(V_0, &m291_MI);
		t36 * L_58 = m303(L_57, &m303_MI);
		t72 * L_59 = m291(V_0, &m291_MI);
		t25 * L_60 = m301(L_59, &m301_MI);
		m339(L_56, L_58, L_60, &m339_MI);
		t64 * L_61 = m218(p1, &m218_MI);
		t74 * L_62 = (t74 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t74_TI));
		m307(L_62, &m307_MI);
		V_6 = L_62;
		t72 * L_63 = m291(V_0, &m291_MI);
		t25 * L_64 = m301(L_63, &m301_MI);
		m309(V_6, L_64, &m309_MI);
		m313(V_6, V_3, &m313_MI);
		t72 * L_65 = m291(V_0, &m291_MI);
		t36 * L_66 = m303(L_65, &m303_MI);
		m315(V_6, L_66, &m315_MI);
		VirtActionInvoker1< t74 * >::Invoke(&m603_MI, L_61, V_6);
	}

IL_0244:
	{
		t32 * L_67 = (__this->f1);
		t68 * L_68 = m270(L_67, &m270_MI);
		t72 * L_69 = m293(V_0, &m293_MI);
		t36 * L_70 = m303(L_69, &m303_MI);
		bool L_71 = m341(L_68, L_70, &m341_MI);
		if (!L_71)
		{
			goto IL_02e7;
		}
	}
	{
		t72 * L_72 = m293(V_0, &m293_MI);
		bool L_73 = m305(L_72, &m305_MI);
		if (L_73)
		{
			goto IL_0280;
		}
	}
	{
		t72 * L_74 = m293(V_0, &m293_MI);
		m306(L_74, 1, &m306_MI);
	}

IL_0280:
	{
		t32 * L_75 = (__this->f1);
		t68 * L_76 = m270(L_75, &m270_MI);
		t72 * L_77 = m293(V_0, &m293_MI);
		t36 * L_78 = m303(L_77, &m303_MI);
		t72 * L_79 = m293(V_0, &m293_MI);
		t25 * L_80 = m301(L_79, &m301_MI);
		m339(L_76, L_78, L_80, &m339_MI);
		t64 * L_81 = m218(p1, &m218_MI);
		t74 * L_82 = (t74 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t74_TI));
		m307(L_82, &m307_MI);
		V_6 = L_82;
		t72 * L_83 = m293(V_0, &m293_MI);
		t25 * L_84 = m301(L_83, &m301_MI);
		m309(V_6, L_84, &m309_MI);
		m313(V_6, V_4, &m313_MI);
		t72 * L_85 = m293(V_0, &m293_MI);
		t36 * L_86 = m303(L_85, &m303_MI);
		m315(V_6, L_86, &m315_MI);
		VirtActionInvoker1< t74 * >::Invoke(&m603_MI, L_81, V_6);
	}

IL_02e7:
	{
		return 1;
	}
}
 t36 * m136 (t43 * __this, t56 * p0, int32_t p1, MethodInfo* method){
	t36 * V_0 = {0};
	int32_t V_1 = 0;
	t36 * V_2 = {0};
	t36 * V_3 = {0};
	t36 * V_4 = {0};
	{
		V_0 = (t36 *)NULL;
		V_1 = 1;
		goto IL_010b;
	}

IL_0009:
	{
		t72 * L_0 = m293(p0, &m293_MI);
		t36 * L_1 = m303(L_0, &m303_MI);
		int32_t L_2 = m164(L_1, &m164_MI);
		t72 * L_3 = m293(p0, &m293_MI);
		t36 * L_4 = m303(L_3, &m303_MI);
		int32_t L_5 = m166(L_4, &m166_MI);
		t36 * L_6 = (t36 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t36_TI));
		m160(L_6, L_2, ((int32_t)(L_5-V_1)), &m160_MI);
		V_2 = L_6;
		t72 * L_7 = m291(p0, &m291_MI);
		t36 * L_8 = m303(L_7, &m303_MI);
		int32_t L_9 = m164(L_8, &m164_MI);
		t72 * L_10 = m291(p0, &m291_MI);
		t36 * L_11 = m303(L_10, &m303_MI);
		int32_t L_12 = m166(L_11, &m166_MI);
		t36 * L_13 = (t36 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t36_TI));
		m160(L_13, L_9, ((int32_t)(L_12-V_1)), &m160_MI);
		V_3 = L_13;
		t72 * L_14 = m289(p0, &m289_MI);
		t36 * L_15 = m303(L_14, &m303_MI);
		int32_t L_16 = m164(L_15, &m164_MI);
		t72 * L_17 = m289(p0, &m289_MI);
		t36 * L_18 = m303(L_17, &m303_MI);
		int32_t L_19 = m166(L_18, &m166_MI);
		t36 * L_20 = (t36 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t36_TI));
		m160(L_20, L_16, ((int32_t)(L_19-V_1)), &m160_MI);
		V_4 = L_20;
		t32 * L_21 = (__this->f1);
		t68 * L_22 = m270(L_21, &m270_MI);
		bool L_23 = m341(L_22, V_2, &m341_MI);
		if (!L_23)
		{
			goto IL_0102;
		}
	}
	{
		t32 * L_24 = (__this->f1);
		t68 * L_25 = m270(L_24, &m270_MI);
		bool L_26 = m340(L_25, V_2, &m340_MI);
		if (!L_26)
		{
			goto IL_0102;
		}
	}
	{
		t72 * L_27 = m291(p0, &m291_MI);
		bool L_28 = m305(L_27, &m305_MI);
		if (!L_28)
		{
			goto IL_00d4;
		}
	}
	{
		t32 * L_29 = (__this->f1);
		t68 * L_30 = m270(L_29, &m270_MI);
		bool L_31 = m341(L_30, V_3, &m341_MI);
		if (!L_31)
		{
			goto IL_0102;
		}
	}

IL_00d4:
	{
		t72 * L_32 = m289(p0, &m289_MI);
		bool L_33 = m305(L_32, &m305_MI);
		if (!L_33)
		{
			goto IL_00fb;
		}
	}
	{
		t32 * L_34 = (__this->f1);
		t68 * L_35 = m270(L_34, &m270_MI);
		bool L_36 = m341(L_35, V_4, &m341_MI);
		if (!L_36)
		{
			goto IL_0102;
		}
	}

IL_00fb:
	{
		V_0 = V_2;
		goto IL_0107;
	}

IL_0102:
	{
		goto IL_0112;
	}

IL_0107:
	{
		V_1 = ((int32_t)(V_1+1));
	}

IL_010b:
	{
		if ((((int32_t)V_1) <= ((int32_t)p1)))
		{
			goto IL_0009;
		}
	}

IL_0112:
	{
		return V_0;
	}
}
 t36 * m137 (t43 * __this, t56 * p0, int32_t p1, MethodInfo* method){
	t36 * V_0 = {0};
	int32_t V_1 = 0;
	t36 * V_2 = {0};
	t36 * V_3 = {0};
	t36 * V_4 = {0};
	{
		V_0 = (t36 *)NULL;
		V_1 = 1;
		goto IL_0138;
	}

IL_0009:
	{
		t72 * L_0 = m293(p0, &m293_MI);
		t36 * L_1 = m303(L_0, &m303_MI);
		int32_t L_2 = m164(L_1, &m164_MI);
		t72 * L_3 = m293(p0, &m293_MI);
		t36 * L_4 = m303(L_3, &m303_MI);
		int32_t L_5 = m166(L_4, &m166_MI);
		t36 * L_6 = (t36 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t36_TI));
		m160(L_6, ((int32_t)(L_2-V_1)), L_5, &m160_MI);
		V_2 = L_6;
		t72 * L_7 = m291(p0, &m291_MI);
		t36 * L_8 = m303(L_7, &m303_MI);
		int32_t L_9 = m164(L_8, &m164_MI);
		t72 * L_10 = m291(p0, &m291_MI);
		t36 * L_11 = m303(L_10, &m303_MI);
		int32_t L_12 = m166(L_11, &m166_MI);
		t36 * L_13 = (t36 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t36_TI));
		m160(L_13, ((int32_t)(L_9-V_1)), L_12, &m160_MI);
		V_3 = L_13;
		t72 * L_14 = m289(p0, &m289_MI);
		t36 * L_15 = m303(L_14, &m303_MI);
		int32_t L_16 = m164(L_15, &m164_MI);
		t72 * L_17 = m289(p0, &m289_MI);
		t36 * L_18 = m303(L_17, &m303_MI);
		int32_t L_19 = m166(L_18, &m166_MI);
		t36 * L_20 = (t36 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t36_TI));
		m160(L_20, ((int32_t)(L_16-V_1)), L_19, &m160_MI);
		V_4 = L_20;
		t32 * L_21 = (__this->f1);
		t68 * L_22 = m270(L_21, &m270_MI);
		bool L_23 = m341(L_22, V_2, &m341_MI);
		if (!L_23)
		{
			goto IL_012f;
		}
	}
	{
		t32 * L_24 = (__this->f1);
		t68 * L_25 = m270(L_24, &m270_MI);
		bool L_26 = m340(L_25, V_2, &m340_MI);
		if (!L_26)
		{
			goto IL_012f;
		}
	}
	{
		t72 * L_27 = m291(p0, &m291_MI);
		bool L_28 = m305(L_27, &m305_MI);
		if (!L_28)
		{
			goto IL_00ea;
		}
	}
	{
		t32 * L_29 = (__this->f1);
		t68 * L_30 = m270(L_29, &m270_MI);
		bool L_31 = m341(L_30, V_3, &m341_MI);
		if (!L_31)
		{
			goto IL_012f;
		}
	}
	{
		t32 * L_32 = (__this->f1);
		t68 * L_33 = m270(L_32, &m270_MI);
		bool L_34 = m340(L_33, V_3, &m340_MI);
		if (!L_34)
		{
			goto IL_012f;
		}
	}

IL_00ea:
	{
		t72 * L_35 = m289(p0, &m289_MI);
		bool L_36 = m305(L_35, &m305_MI);
		if (!L_36)
		{
			goto IL_0128;
		}
	}
	{
		t32 * L_37 = (__this->f1);
		t68 * L_38 = m270(L_37, &m270_MI);
		bool L_39 = m341(L_38, V_4, &m341_MI);
		if (!L_39)
		{
			goto IL_012f;
		}
	}
	{
		t32 * L_40 = (__this->f1);
		t68 * L_41 = m270(L_40, &m270_MI);
		bool L_42 = m340(L_41, V_4, &m340_MI);
		if (!L_42)
		{
			goto IL_012f;
		}
	}

IL_0128:
	{
		V_0 = V_2;
		goto IL_0134;
	}

IL_012f:
	{
		goto IL_013f;
	}

IL_0134:
	{
		V_1 = ((int32_t)(V_1+1));
	}

IL_0138:
	{
		if ((((int32_t)V_1) <= ((int32_t)p1)))
		{
			goto IL_0009;
		}
	}

IL_013f:
	{
		return V_0;
	}
}
 t36 * m138 (t43 * __this, t56 * p0, int32_t p1, MethodInfo* method){
	t36 * V_0 = {0};
	int32_t V_1 = 0;
	t36 * V_2 = {0};
	t36 * V_3 = {0};
	t36 * V_4 = {0};
	{
		V_0 = (t36 *)NULL;
		V_1 = 1;
		goto IL_0138;
	}

IL_0009:
	{
		t72 * L_0 = m293(p0, &m293_MI);
		t36 * L_1 = m303(L_0, &m303_MI);
		int32_t L_2 = m164(L_1, &m164_MI);
		t72 * L_3 = m293(p0, &m293_MI);
		t36 * L_4 = m303(L_3, &m303_MI);
		int32_t L_5 = m166(L_4, &m166_MI);
		t36 * L_6 = (t36 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t36_TI));
		m160(L_6, ((int32_t)(L_2+V_1)), L_5, &m160_MI);
		V_2 = L_6;
		t72 * L_7 = m291(p0, &m291_MI);
		t36 * L_8 = m303(L_7, &m303_MI);
		int32_t L_9 = m164(L_8, &m164_MI);
		t72 * L_10 = m291(p0, &m291_MI);
		t36 * L_11 = m303(L_10, &m303_MI);
		int32_t L_12 = m166(L_11, &m166_MI);
		t36 * L_13 = (t36 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t36_TI));
		m160(L_13, ((int32_t)(L_9+V_1)), L_12, &m160_MI);
		V_3 = L_13;
		t72 * L_14 = m289(p0, &m289_MI);
		t36 * L_15 = m303(L_14, &m303_MI);
		int32_t L_16 = m164(L_15, &m164_MI);
		t72 * L_17 = m289(p0, &m289_MI);
		t36 * L_18 = m303(L_17, &m303_MI);
		int32_t L_19 = m166(L_18, &m166_MI);
		t36 * L_20 = (t36 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t36_TI));
		m160(L_20, ((int32_t)(L_16+V_1)), L_19, &m160_MI);
		V_4 = L_20;
		t32 * L_21 = (__this->f1);
		t68 * L_22 = m270(L_21, &m270_MI);
		bool L_23 = m341(L_22, V_2, &m341_MI);
		if (!L_23)
		{
			goto IL_012f;
		}
	}
	{
		t32 * L_24 = (__this->f1);
		t68 * L_25 = m270(L_24, &m270_MI);
		bool L_26 = m340(L_25, V_2, &m340_MI);
		if (!L_26)
		{
			goto IL_012f;
		}
	}
	{
		t72 * L_27 = m291(p0, &m291_MI);
		bool L_28 = m305(L_27, &m305_MI);
		if (!L_28)
		{
			goto IL_00ea;
		}
	}
	{
		t32 * L_29 = (__this->f1);
		t68 * L_30 = m270(L_29, &m270_MI);
		bool L_31 = m341(L_30, V_3, &m341_MI);
		if (!L_31)
		{
			goto IL_012f;
		}
	}
	{
		t32 * L_32 = (__this->f1);
		t68 * L_33 = m270(L_32, &m270_MI);
		bool L_34 = m340(L_33, V_3, &m340_MI);
		if (!L_34)
		{
			goto IL_012f;
		}
	}

IL_00ea:
	{
		t72 * L_35 = m289(p0, &m289_MI);
		bool L_36 = m305(L_35, &m305_MI);
		if (!L_36)
		{
			goto IL_0128;
		}
	}
	{
		t32 * L_37 = (__this->f1);
		t68 * L_38 = m270(L_37, &m270_MI);
		bool L_39 = m341(L_38, V_4, &m341_MI);
		if (!L_39)
		{
			goto IL_012f;
		}
	}
	{
		t32 * L_40 = (__this->f1);
		t68 * L_41 = m270(L_40, &m270_MI);
		bool L_42 = m340(L_41, V_4, &m340_MI);
		if (!L_42)
		{
			goto IL_012f;
		}
	}

IL_0128:
	{
		V_0 = V_2;
		goto IL_0134;
	}

IL_012f:
	{
		goto IL_013f;
	}

IL_0134:
	{
		V_1 = ((int32_t)(V_1+1));
	}

IL_0138:
	{
		if ((((int32_t)V_1) <= ((int32_t)p1)))
		{
			goto IL_0009;
		}
	}

IL_013f:
	{
		return V_0;
	}
}
 bool m139 (t43 * __this, t36 * p0, int32_t p1, t6 * p2, MethodInfo* method){
	t36 * V_0 = {0};
	t25 * V_1 = {0};
	int32_t V_2 = {0};
	t74 * V_3 = {0};
	{
		if (p0)
		{
			goto IL_0016;
		}
	}
	{
		t160 * L_0 = (t160 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t160_TI));
		m613(L_0, (t11*) &_stringLiteral25, (t11*) &_stringLiteral26, &m613_MI);
		il2cpp_codegen_raise_exception(L_0);
	}

IL_0016:
	{
		t32 * L_1 = (__this->f1);
		t68 * L_2 = m270(L_1, &m270_MI);
		bool L_3 = m341(L_2, p0, &m341_MI);
		if (!L_3)
		{
			goto IL_00dd;
		}
	}
	{
		V_0 = (t36 *)NULL;
		V_2 = p1;
		if (V_2 == 0)
		{
			goto IL_0047;
		}
		if (V_2 == 1)
		{
			goto IL_0055;
		}
		if (V_2 == 2)
		{
			goto IL_0063;
		}
	}
	{
		goto IL_0071;
	}

IL_0047:
	{
		t36 * L_4 = m140(__this, p0, 1, &m140_MI);
		V_0 = L_4;
		goto IL_0071;
	}

IL_0055:
	{
		t36 * L_5 = m141(__this, p0, 1, &m141_MI);
		V_0 = L_5;
		goto IL_0071;
	}

IL_0063:
	{
		t36 * L_6 = m142(__this, p0, 1, &m142_MI);
		V_0 = L_6;
		goto IL_0071;
	}

IL_0071:
	{
		if (V_0)
		{
			goto IL_0079;
		}
	}
	{
		return 0;
	}

IL_0079:
	{
		t32 * L_7 = (__this->f1);
		t68 * L_8 = m270(L_7, &m270_MI);
		t70 * L_9 = m338(L_8, p0, &m338_MI);
		V_1 = ((t25 *)Castclass(L_9, InitializedTypeInfo(&t25_TI)));
		t32 * L_10 = (__this->f1);
		t68 * L_11 = m270(L_10, &m270_MI);
		m339(L_11, V_0, V_1, &m339_MI);
		t32 * L_12 = (__this->f1);
		t68 * L_13 = m270(L_12, &m270_MI);
		m339(L_13, p0, (t70 *)NULL, &m339_MI);
		t64 * L_14 = m218(p2, &m218_MI);
		t74 * L_15 = (t74 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t74_TI));
		m307(L_15, &m307_MI);
		V_3 = L_15;
		m309(V_3, V_1, &m309_MI);
		m313(V_3, p0, &m313_MI);
		m315(V_3, V_0, &m315_MI);
		VirtActionInvoker1< t74 * >::Invoke(&m603_MI, L_14, V_3);
		return 1;
	}

IL_00dd:
	{
		return 0;
	}
}
 t36 * m140 (t43 * __this, t36 * p0, int32_t p1, MethodInfo* method){
	t36 * V_0 = {0};
	t161  V_1 = {0};
	int32_t V_2 = 0;
	t161  V_3 = {0};
	{
		if (p0)
		{
			goto IL_0016;
		}
	}
	{
		t160 * L_0 = (t160 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t160_TI));
		m613(L_0, (t11*) &_stringLiteral25, (t11*) &_stringLiteral27, &m613_MI);
		il2cpp_codegen_raise_exception(L_0);
	}

IL_0016:
	{
		V_0 = (t36 *)NULL;
		Initobj (&t161_TI, (&V_3));
		V_1 = V_3;
		V_2 = 1;
		goto IL_0095;
	}

IL_0029:
	{
		t32 * L_1 = (__this->f1);
		t68 * L_2 = m270(L_1, &m270_MI);
		int32_t L_3 = m164(p0, &m164_MI);
		int32_t L_4 = m166(p0, &m166_MI);
		t36 * L_5 = (t36 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t36_TI));
		m160(L_5, L_3, ((int32_t)(L_4-V_2)), &m160_MI);
		bool L_6 = m341(L_2, L_5, &m341_MI);
		if (!L_6)
		{
			goto IL_008c;
		}
	}
	{
		t32 * L_7 = (__this->f1);
		t68 * L_8 = m270(L_7, &m270_MI);
		int32_t L_9 = m164(p0, &m164_MI);
		int32_t L_10 = m166(p0, &m166_MI);
		t36 * L_11 = (t36 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t36_TI));
		m160(L_11, L_9, ((int32_t)(L_10-V_2)), &m160_MI);
		bool L_12 = m340(L_8, L_11, &m340_MI);
		if (!L_12)
		{
			goto IL_008c;
		}
	}
	{
		int32_t L_13 = m166(p0, &m166_MI);
		t161  L_14 = {0};
		m614(&L_14, ((int32_t)(L_13-V_2)), &m614_MI);
		V_1 = L_14;
		goto IL_0091;
	}

IL_008c:
	{
		goto IL_009c;
	}

IL_0091:
	{
		V_2 = ((int32_t)(V_2+1));
	}

IL_0095:
	{
		if ((((int32_t)V_2) <= ((int32_t)p1)))
		{
			goto IL_0029;
		}
	}

IL_009c:
	{
		bool L_15 = m615((&V_1), &m615_MI);
		if (!L_15)
		{
			goto IL_00bb;
		}
	}
	{
		int32_t L_16 = m164(p0, &m164_MI);
		int32_t L_17 = m616((&V_1), &m616_MI);
		t36 * L_18 = (t36 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t36_TI));
		m160(L_18, L_16, L_17, &m160_MI);
		V_0 = L_18;
	}

IL_00bb:
	{
		return V_0;
	}
}
 t36 * m141 (t43 * __this, t36 * p0, int32_t p1, MethodInfo* method){
	t36 * V_0 = {0};
	t161  V_1 = {0};
	int32_t V_2 = 0;
	t161  V_3 = {0};
	{
		if (p0)
		{
			goto IL_0016;
		}
	}
	{
		t160 * L_0 = (t160 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t160_TI));
		m613(L_0, (t11*) &_stringLiteral25, (t11*) &_stringLiteral27, &m613_MI);
		il2cpp_codegen_raise_exception(L_0);
	}

IL_0016:
	{
		V_0 = (t36 *)NULL;
		Initobj (&t161_TI, (&V_3));
		V_1 = V_3;
		V_2 = 1;
		goto IL_0095;
	}

IL_0029:
	{
		t32 * L_1 = (__this->f1);
		t68 * L_2 = m270(L_1, &m270_MI);
		int32_t L_3 = m164(p0, &m164_MI);
		int32_t L_4 = m166(p0, &m166_MI);
		t36 * L_5 = (t36 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t36_TI));
		m160(L_5, ((int32_t)(L_3-V_2)), L_4, &m160_MI);
		bool L_6 = m341(L_2, L_5, &m341_MI);
		if (!L_6)
		{
			goto IL_008c;
		}
	}
	{
		t32 * L_7 = (__this->f1);
		t68 * L_8 = m270(L_7, &m270_MI);
		int32_t L_9 = m164(p0, &m164_MI);
		int32_t L_10 = m166(p0, &m166_MI);
		t36 * L_11 = (t36 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t36_TI));
		m160(L_11, ((int32_t)(L_9-V_2)), L_10, &m160_MI);
		bool L_12 = m340(L_8, L_11, &m340_MI);
		if (!L_12)
		{
			goto IL_008c;
		}
	}
	{
		int32_t L_13 = m164(p0, &m164_MI);
		t161  L_14 = {0};
		m614(&L_14, ((int32_t)(L_13-V_2)), &m614_MI);
		V_1 = L_14;
		goto IL_0091;
	}

IL_008c:
	{
		goto IL_009c;
	}

IL_0091:
	{
		V_2 = ((int32_t)(V_2+1));
	}

IL_0095:
	{
		if ((((int32_t)V_2) <= ((int32_t)p1)))
		{
			goto IL_0029;
		}
	}

IL_009c:
	{
		bool L_15 = m615((&V_1), &m615_MI);
		if (!L_15)
		{
			goto IL_00bb;
		}
	}
	{
		int32_t L_16 = m616((&V_1), &m616_MI);
		int32_t L_17 = m166(p0, &m166_MI);
		t36 * L_18 = (t36 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t36_TI));
		m160(L_18, L_16, L_17, &m160_MI);
		V_0 = L_18;
	}

IL_00bb:
	{
		return V_0;
	}
}
 t36 * m142 (t43 * __this, t36 * p0, int32_t p1, MethodInfo* method){
	t36 * V_0 = {0};
	t161  V_1 = {0};
	int32_t V_2 = 0;
	t161  V_3 = {0};
	{
		if (p0)
		{
			goto IL_0016;
		}
	}
	{
		t160 * L_0 = (t160 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t160_TI));
		m613(L_0, (t11*) &_stringLiteral25, (t11*) &_stringLiteral27, &m613_MI);
		il2cpp_codegen_raise_exception(L_0);
	}

IL_0016:
	{
		V_0 = (t36 *)NULL;
		Initobj (&t161_TI, (&V_3));
		V_1 = V_3;
		V_2 = 1;
		goto IL_0095;
	}

IL_0029:
	{
		t32 * L_1 = (__this->f1);
		t68 * L_2 = m270(L_1, &m270_MI);
		int32_t L_3 = m164(p0, &m164_MI);
		int32_t L_4 = m166(p0, &m166_MI);
		t36 * L_5 = (t36 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t36_TI));
		m160(L_5, ((int32_t)(L_3+V_2)), L_4, &m160_MI);
		bool L_6 = m341(L_2, L_5, &m341_MI);
		if (!L_6)
		{
			goto IL_008c;
		}
	}
	{
		t32 * L_7 = (__this->f1);
		t68 * L_8 = m270(L_7, &m270_MI);
		int32_t L_9 = m164(p0, &m164_MI);
		int32_t L_10 = m166(p0, &m166_MI);
		t36 * L_11 = (t36 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t36_TI));
		m160(L_11, ((int32_t)(L_9+V_2)), L_10, &m160_MI);
		bool L_12 = m340(L_8, L_11, &m340_MI);
		if (!L_12)
		{
			goto IL_008c;
		}
	}
	{
		int32_t L_13 = m164(p0, &m164_MI);
		t161  L_14 = {0};
		m614(&L_14, ((int32_t)(L_13+V_2)), &m614_MI);
		V_1 = L_14;
		goto IL_0091;
	}

IL_008c:
	{
		goto IL_009c;
	}

IL_0091:
	{
		V_2 = ((int32_t)(V_2+1));
	}

IL_0095:
	{
		if ((((int32_t)V_2) <= ((int32_t)p1)))
		{
			goto IL_0029;
		}
	}

IL_009c:
	{
		bool L_15 = m615((&V_1), &m615_MI);
		if (!L_15)
		{
			goto IL_00bb;
		}
	}
	{
		int32_t L_16 = m616((&V_1), &m616_MI);
		int32_t L_17 = m166(p0, &m166_MI);
		t36 * L_18 = (t36 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t36_TI));
		m160(L_18, L_16, L_17, &m160_MI);
		V_0 = L_18;
	}

IL_00bb:
	{
		return V_0;
	}
}
 void m143 (t43 * __this, t36 * p0, MethodInfo* method){
	{
		if (!p0)
		{
			goto IL_002e;
		}
	}
	{
		t32 * L_0 = (__this->f1);
		t68 * L_1 = m270(L_0, &m270_MI);
		bool L_2 = m341(L_1, p0, &m341_MI);
		if (!L_2)
		{
			goto IL_002e;
		}
	}
	{
		t32 * L_3 = (__this->f1);
		t68 * L_4 = m270(L_3, &m270_MI);
		m339(L_4, p0, (t70 *)NULL, &m339_MI);
	}

IL_002e:
	{
		return;
	}
}
 double m144 (t43 * __this, int32_t p0, int32_t p1, double p2, double p3, MethodInfo* method){
	double V_0 = 0.0;
	double V_1 = 0.0;
	{
		V_0 = ((double)((double)((double)(p2-p3))/(double)(((double)p1))));
		V_1 = ((double)(p2-((double)((double)V_0*(double)(((double)((int32_t)(p0-1))))))));
		double L_0 = m617(NULL, V_1, p2, &m617_MI);
		V_1 = L_0;
		double L_1 = m618(NULL, V_1, p3, &m618_MI);
		return L_1;
	}
}
 bool m145 (t5 * __this, int32_t p0, MethodInfo* method){
	{
		return ((((int32_t)((((int32_t)p0) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
 void m146 (t5 * __this, t15 * p0, MethodInfo* method){
	{
		m321(p0, &m321_MI);
		return;
	}
}
 int64_t m147 (t5 * __this, t44  p0, MethodInfo* method){
	{
		int64_t L_0 = m567((&p0), &m567_MI);
		return L_0;
	}
}
// Metadata Definition JewelMine.Engine.GameLogic
extern Il2CppType t46_0_0_49;
FieldInfo t43_f0_FieldInfo = 
{
	"jewelTypes", &t46_0_0_49, &t43_TI, offsetof(t43_SFs, f0), &EmptyCustomAttributesCache};
extern Il2CppType t32_0_0_1;
FieldInfo t43_f1_FieldInfo = 
{
	"state", &t32_0_0_1, &t43_TI, offsetof(t43, f1), &EmptyCustomAttributesCache};
extern Il2CppType t30_0_0_1;
FieldInfo t43_f2_FieldInfo = 
{
	"collisionDetector", &t30_0_0_1, &t43_TI, offsetof(t43, f2), &EmptyCustomAttributesCache};
extern Il2CppType t47_0_0_1;
FieldInfo t43_f3_FieldInfo = 
{
	"userSettings", &t47_0_0_1, &t43_TI, offsetof(t43, f3), &EmptyCustomAttributesCache};
extern Il2CppType t48_0_0_17;
extern CustomAttributesCache t43__CustomAttributeCache_U3CU3Ef__am$cache4;
FieldInfo t43_f4_FieldInfo = 
{
	"<>f__am$cache4", &t48_0_0_17, &t43_TI, offsetof(t43_SFs, f4), &t43__CustomAttributeCache_U3CU3Ef__am$cache4};
extern Il2CppType t49_0_0_17;
extern CustomAttributesCache t43__CustomAttributeCache_U3CU3Ef__am$cache5;
FieldInfo t43_f5_FieldInfo = 
{
	"<>f__am$cache5", &t49_0_0_17, &t43_TI, offsetof(t43_SFs, f5), &t43__CustomAttributeCache_U3CU3Ef__am$cache5};
extern Il2CppType t50_0_0_17;
extern CustomAttributesCache t43__CustomAttributeCache_U3CU3Ef__am$cache6;
FieldInfo t43_f6_FieldInfo = 
{
	"<>f__am$cache6", &t50_0_0_17, &t43_TI, offsetof(t43_SFs, f6), &t43__CustomAttributeCache_U3CU3Ef__am$cache6};
static FieldInfo* t43_FIs[] =
{
	&t43_f0_FieldInfo,
	&t43_f1_FieldInfo,
	&t43_f2_FieldInfo,
	&t43_f3_FieldInfo,
	&t43_f4_FieldInfo,
	&t43_f5_FieldInfo,
	&t43_f6_FieldInfo,
	NULL
};
static PropertyInfo t43____State_PropertyInfo = 
{
	&t43_TI, "State", &m103_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t43_PIs[] =
{
	&t43____State_PropertyInfo,
	NULL
};
extern Il2CppType t47_0_0_0;
extern Il2CppType t47_0_0_0;
static ParameterInfo t43_m99_ParameterInfos[] = 
{
	{"settings", 0, 134217816, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m99_MI = 
{
	".ctor", (methodPointerType)&m99, &t43_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t43_m99_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 96, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m100_MI = 
{
	".cctor", (methodPointerType)&m100, &t43_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 97, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t22_0_0_0;
static ParameterInfo t43_m101_ParameterInfos[] = 
{
	{"level", 0, 134217817, &EmptyCustomAttributesCache, &t22_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m101_MI = 
{
	"Initialise", (methodPointerType)&m101, &t43_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t43_m101_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 98, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t51_0_0_0;
extern Il2CppType t51_0_0_0;
static ParameterInfo t43_m102_ParameterInfos[] = 
{
	{"savedGame", 0, 134217818, &EmptyCustomAttributesCache, &t51_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m102_MI = 
{
	"Initialise", (methodPointerType)&m102, &t43_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t43_m102_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 99, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t32_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m103_MI = 
{
	"get_State", (methodPointerType)&m103, &t43_TI, &t32_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 2534, 0, 6, 0, false, false, 100, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t52_0_0_0;
extern Il2CppType t52_0_0_0;
static ParameterInfo t43_m104_ParameterInfos[] = 
{
	{"logicInput", 0, 134217819, &EmptyCustomAttributesCache, &t52_0_0_0},
};
extern Il2CppType t6_0_0_0;
extern void* RuntimeInvoker_t5_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m104_MI = 
{
	"PerformGameLogic", (methodPointerType)&m104, &t43_TI, &t6_0_0_0, RuntimeInvoker_t5_t5, t43_m104_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 4, 1, false, false, 101, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t52_0_0_0;
extern Il2CppType t6_0_0_0;
extern Il2CppType t108_1_0_2;
extern Il2CppType t108_1_0_0;
static ParameterInfo t43_m105_ParameterInfos[] = 
{
	{"logicInput", 0, 134217820, &EmptyCustomAttributesCache, &t52_0_0_0},
	{"logicUpdate", 1, 134217821, &EmptyCustomAttributesCache, &t6_0_0_0},
	{"immediateReturn", 2, 134217822, &EmptyCustomAttributesCache, &t108_1_0_2},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t5_t169 (MethodInfo* method, void* obj, void** args);
MethodInfo m105_MI = 
{
	"ProcessGamePersistence", (methodPointerType)&m105, &t43_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t5_t169, t43_m105_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, false, false, 102, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t6_0_0_0;
extern Il2CppType t108_1_0_2;
static ParameterInfo t43_m106_ParameterInfos[] = 
{
	{"logicUpdate", 0, 134217823, &EmptyCustomAttributesCache, &t6_0_0_0},
	{"immediateReturn", 1, 134217824, &EmptyCustomAttributesCache, &t108_1_0_2},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t169 (MethodInfo* method, void* obj, void** args);
MethodInfo m106_MI = 
{
	"TryLoadGame", (methodPointerType)&m106, &t43_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t169, t43_m106_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, false, 103, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t6_0_0_0;
static ParameterInfo t43_m107_ParameterInfos[] = 
{
	{"logicUpdate", 0, 134217825, &EmptyCustomAttributesCache, &t6_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m107_MI = 
{
	"TrySaveGame", (methodPointerType)&m107, &t43_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t43_m107_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 104, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t52_0_0_0;
extern Il2CppType t6_0_0_0;
extern Il2CppType t108_1_0_2;
static ParameterInfo t43_m108_ParameterInfos[] = 
{
	{"logicInput", 0, 134217826, &EmptyCustomAttributesCache, &t52_0_0_0},
	{"logicUpdate", 1, 134217827, &EmptyCustomAttributesCache, &t6_0_0_0},
	{"immediateReturn", 2, 134217828, &EmptyCustomAttributesCache, &t108_1_0_2},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t5_t169 (MethodInfo* method, void* obj, void** args);
MethodInfo m108_MI = 
{
	"ProcessGameDifficultyChange", (methodPointerType)&m108, &t43_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t5_t169, t43_m108_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, false, false, 105, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t52_0_0_0;
extern Il2CppType t6_0_0_0;
extern Il2CppType t108_1_0_2;
static ParameterInfo t43_m109_ParameterInfos[] = 
{
	{"logicInput", 0, 134217829, &EmptyCustomAttributesCache, &t52_0_0_0},
	{"logicUpdate", 1, 134217830, &EmptyCustomAttributesCache, &t6_0_0_0},
	{"immediateReturn", 2, 134217831, &EmptyCustomAttributesCache, &t108_1_0_2},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t5_t169 (MethodInfo* method, void* obj, void** args);
MethodInfo m109_MI = 
{
	"ProcessGameStateChange", (methodPointerType)&m109, &t43_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t5_t169, t43_m109_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, false, false, 106, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t52_0_0_0;
extern Il2CppType t6_0_0_0;
extern Il2CppType t108_1_0_2;
static ParameterInfo t43_m110_ParameterInfos[] = 
{
	{"logicInput", 0, 134217832, &EmptyCustomAttributesCache, &t52_0_0_0},
	{"logicUpdate", 1, 134217833, &EmptyCustomAttributesCache, &t6_0_0_0},
	{"immediateReturn", 2, 134217834, &EmptyCustomAttributesCache, &t108_1_0_2},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t5_t169 (MethodInfo* method, void* obj, void** args);
MethodInfo m110_MI = 
{
	"ProcessLevelAdvancement", (methodPointerType)&m110, &t43_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t5_t169, t43_m110_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, false, false, 107, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t52_0_0_0;
extern Il2CppType t6_0_0_0;
extern Il2CppType t108_0_0_0;
extern Il2CppType t20_0_0_0;
static ParameterInfo t43_m111_ParameterInfos[] = 
{
	{"logicInput", 0, 134217835, &EmptyCustomAttributesCache, &t52_0_0_0},
	{"logicUpdate", 1, 134217836, &EmptyCustomAttributesCache, &t6_0_0_0},
	{"userInputMovement", 2, 134217837, &EmptyCustomAttributesCache, &t108_0_0_0},
	{"deltaMovement", 3, 134217838, &EmptyCustomAttributesCache, &t20_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t5_t111_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m111_MI = 
{
	"ProcessDeltaMovement", (methodPointerType)&m111, &t43_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t5_t111_t110, t43_m111_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 4, false, false, 108, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t6_0_0_0;
static ParameterInfo t43_m112_ParameterInfos[] = 
{
	{"logicUpdate", 0, 134217839, &EmptyCustomAttributesCache, &t6_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m112_MI = 
{
	"ProcessCollisions", (methodPointerType)&m112, &t43_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t43_m112_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 109, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t54_0_0_0;
extern Il2CppType t54_0_0_0;
static ParameterInfo t43_m113_ParameterInfos[] = 
{
	{"groups", 0, 134217840, &EmptyCustomAttributesCache, &t54_0_0_0},
};
extern Il2CppType t53_0_0_0;
extern void* RuntimeInvoker_t5_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m113_MI = 
{
	"CalculateScores", (methodPointerType)&m113, &t43_TI, &t53_0_0_0, RuntimeInvoker_t5_t5, t43_m113_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 110, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t6_0_0_0;
static ParameterInfo t43_m114_ParameterInfos[] = 
{
	{"logicUpdate", 0, 134217841, &EmptyCustomAttributesCache, &t6_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m114_MI = 
{
	"ProcessAddDelta", (methodPointerType)&m114, &t43_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t43_m114_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 111, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t6_0_0_0;
static ParameterInfo t43_m115_ParameterInfos[] = 
{
	{"logicUpdate", 0, 134217842, &EmptyCustomAttributesCache, &t6_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m115_MI = 
{
	"StartGame", (methodPointerType)&m115, &t43_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t43_m115_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 112, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t6_0_0_0;
static ParameterInfo t43_m116_ParameterInfos[] = 
{
	{"logicUpdate", 0, 134217843, &EmptyCustomAttributesCache, &t6_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m116_MI = 
{
	"PauseGame", (methodPointerType)&m116, &t43_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t43_m116_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 113, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t6_0_0_0;
static ParameterInfo t43_m117_ParameterInfos[] = 
{
	{"logicUpdate", 0, 134217844, &EmptyCustomAttributesCache, &t6_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m117_MI = 
{
	"GameOver", (methodPointerType)&m117, &t43_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t43_m117_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 114, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t6_0_0_0;
static ParameterInfo t43_m118_ParameterInfos[] = 
{
	{"logicUpdate", 0, 134217845, &EmptyCustomAttributesCache, &t6_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m118_MI = 
{
	"GameWon", (methodPointerType)&m118, &t43_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t43_m118_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 115, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t6_0_0_0;
static ParameterInfo t43_m119_ParameterInfos[] = 
{
	{"logicUpdate", 0, 134217846, &EmptyCustomAttributesCache, &t6_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m119_MI = 
{
	"RestartGame", (methodPointerType)&m119, &t43_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t43_m119_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 116, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
MethodInfo m120_MI = 
{
	"LevelThresholdReached", (methodPointerType)&m120, &t43_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 117, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t6_0_0_0;
static ParameterInfo t43_m121_ParameterInfos[] = 
{
	{"logicUpdate", 0, 134217847, &EmptyCustomAttributesCache, &t6_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m121_MI = 
{
	"IncrementLevel", (methodPointerType)&m121, &t43_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t43_m121_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 118, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t6_0_0_0;
static ParameterInfo t43_m122_ParameterInfos[] = 
{
	{"logicUpdate", 0, 134217848, &EmptyCustomAttributesCache, &t6_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m122_MI = 
{
	"MoveDownJewelsInLimbo", (methodPointerType)&m122, &t43_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t43_m122_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 119, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t6_0_0_0;
static ParameterInfo t43_m123_ParameterInfos[] = 
{
	{"logicUpdate", 0, 134217849, &EmptyCustomAttributesCache, &t6_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m123_MI = 
{
	"SwapDeltaJewels", (methodPointerType)&m123, &t43_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t43_m123_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 120, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t20_0_0_0;
static ParameterInfo t43_m124_ParameterInfos[] = 
{
	{"deltaMovement", 0, 134217850, &EmptyCustomAttributesCache, &t20_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m124_MI = 
{
	"IsDeltaAgainstBoundary", (methodPointerType)&m124, &t43_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t43_m124_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 121, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t20_0_0_0;
static ParameterInfo t43_m125_ParameterInfos[] = 
{
	{"deltaMovement", 0, 134217851, &EmptyCustomAttributesCache, &t20_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m125_MI = 
{
	"IsDeltaAgainstMineObject", (methodPointerType)&m125, &t43_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t43_m125_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 122, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
MethodInfo m126_MI = 
{
	"IsDeltaStationary", (methodPointerType)&m126, &t43_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 123, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t36_0_0_0;
static ParameterInfo t43_m127_ParameterInfos[] = 
{
	{"coordinates", 0, 134217852, &EmptyCustomAttributesCache, &t36_0_0_0},
};
extern Il2CppType t46_0_0_0;
extern void* RuntimeInvoker_t5_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m127_MI = 
{
	"FindJewelTypesAroundTarget", (methodPointerType)&m127, &t43_TI, &t46_0_0_0, RuntimeInvoker_t5_t5, t43_m127_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 124, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t110_0_0_0;
static ParameterInfo t43_m128_ParameterInfos[] = 
{
	{"numLines", 0, 134217853, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m128_MI = 
{
	"AddInitialLinesToMine", (methodPointerType)&m128, &t43_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t43_m128_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 125, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
MethodInfo m129_MI = 
{
	"GenerateRandomJewelType", (methodPointerType)&m129, &t43_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 126, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t46_0_0_0;
extern Il2CppType t46_0_0_0;
extern CustomAttributesCache t43__CustomAttributeCache_t43_m130_Arg0_ParameterInfo;
static ParameterInfo t43_m130_ParameterInfos[] = 
{
	{"avoidTypes", 0, 134217854, &t43__CustomAttributeCache_t43_m130_Arg0_ParameterInfo, &t46_0_0_0},
};
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m130_MI = 
{
	"GenerateRandomJewelType", (methodPointerType)&m130, &t43_TI, &t19_0_0_0, RuntimeInvoker_t19_t5, t43_m130_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 127, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t36_0_0_0;
static ParameterInfo t43_m131_ParameterInfos[] = 
{
	{"coordinates", 0, 134217855, &EmptyCustomAttributesCache, &t36_0_0_0},
};
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t5_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m131_MI = 
{
	"GenerateRandomJewelAvoidCollision", (methodPointerType)&m131, &t43_TI, &t25_0_0_0, RuntimeInvoker_t5_t5, t43_m131_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 128, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t6_0_0_0;
static ParameterInfo t43_m132_ParameterInfos[] = 
{
	{"logicUpdate", 0, 134217856, &EmptyCustomAttributesCache, &t6_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m132_MI = 
{
	"AddDelta", (methodPointerType)&m132, &t43_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t43_m132_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 129, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t55_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m133_MI = 
{
	"FindFreeCoordinatesForDelta", (methodPointerType)&m133, &t43_TI, &t55_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 130, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t56_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m134_MI = 
{
	"GenerateRandomDeltaJewelGroup", (methodPointerType)&m134, &t43_TI, &t56_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 131, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t20_0_0_0;
extern Il2CppType t6_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t43_m135_ParameterInfos[] = 
{
	{"movement", 0, 134217857, &EmptyCustomAttributesCache, &t20_0_0_0},
	{"logicUpdate", 1, 134217858, &EmptyCustomAttributesCache, &t6_0_0_0},
	{"numPositionsToMove", 2, 134217859, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t110_t5_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m135_MI = 
{
	"MoveDelta", (methodPointerType)&m135, &t43_TI, &t108_0_0_0, RuntimeInvoker_t108_t110_t5_t110, t43_m135_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, false, false, 132, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t56_0_0_0;
extern Il2CppType t56_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t43_m136_ParameterInfos[] = 
{
	{"delta", 0, 134217860, &EmptyCustomAttributesCache, &t56_0_0_0},
	{"numPositionsToMove", 1, 134217861, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t36_0_0_0;
extern void* RuntimeInvoker_t5_t5_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m136_MI = 
{
	"FindClosestDownPositionForDelta", (methodPointerType)&m136, &t43_TI, &t36_0_0_0, RuntimeInvoker_t5_t5_t110, t43_m136_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, false, 133, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t56_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t43_m137_ParameterInfos[] = 
{
	{"delta", 0, 134217862, &EmptyCustomAttributesCache, &t56_0_0_0},
	{"numPositionsToMove", 1, 134217863, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t36_0_0_0;
extern void* RuntimeInvoker_t5_t5_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m137_MI = 
{
	"FindClosestLeftPositionForDelta", (methodPointerType)&m137, &t43_TI, &t36_0_0_0, RuntimeInvoker_t5_t5_t110, t43_m137_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, false, 134, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t56_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t43_m138_ParameterInfos[] = 
{
	{"delta", 0, 134217864, &EmptyCustomAttributesCache, &t56_0_0_0},
	{"numPositionsToMove", 1, 134217865, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t36_0_0_0;
extern void* RuntimeInvoker_t5_t5_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m138_MI = 
{
	"FindClosestRightPositionForDelta", (methodPointerType)&m138, &t43_TI, &t36_0_0_0, RuntimeInvoker_t5_t5_t110, t43_m138_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, false, 135, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t36_0_0_0;
extern Il2CppType t20_0_0_0;
extern Il2CppType t6_0_0_0;
static ParameterInfo t43_m139_ParameterInfos[] = 
{
	{"coordinates", 0, 134217866, &EmptyCustomAttributesCache, &t36_0_0_0},
	{"movement", 1, 134217867, &EmptyCustomAttributesCache, &t20_0_0_0},
	{"logicUpdate", 2, 134217868, &EmptyCustomAttributesCache, &t6_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5_t110_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m139_MI = 
{
	"MoveJewel", (methodPointerType)&m139, &t43_TI, &t108_0_0_0, RuntimeInvoker_t108_t5_t110_t5, t43_m139_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 3, false, false, 136, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t36_0_0_0;
extern Il2CppType t110_0_0_4112;
static ParameterInfo t43_m140_ParameterInfos[] = 
{
	{"target", 0, 134217869, &EmptyCustomAttributesCache, &t36_0_0_0},
	{"numPositionsToMove", 1, 134217870, &EmptyCustomAttributesCache, &t110_0_0_4112},
};
extern Il2CppType t36_0_0_0;
extern void* RuntimeInvoker_t5_t5_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m140_MI = 
{
	"FindClosestDownPosition", (methodPointerType)&m140, &t43_TI, &t36_0_0_0, RuntimeInvoker_t5_t5_t110, t43_m140_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, false, 137, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t36_0_0_0;
extern Il2CppType t110_0_0_4112;
static ParameterInfo t43_m141_ParameterInfos[] = 
{
	{"target", 0, 134217871, &EmptyCustomAttributesCache, &t36_0_0_0},
	{"numPositionsToMove", 1, 134217872, &EmptyCustomAttributesCache, &t110_0_0_4112},
};
extern Il2CppType t36_0_0_0;
extern void* RuntimeInvoker_t5_t5_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m141_MI = 
{
	"FindClosestLeftPosition", (methodPointerType)&m141, &t43_TI, &t36_0_0_0, RuntimeInvoker_t5_t5_t110, t43_m141_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, false, 138, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t36_0_0_0;
extern Il2CppType t110_0_0_4112;
static ParameterInfo t43_m142_ParameterInfos[] = 
{
	{"target", 0, 134217873, &EmptyCustomAttributesCache, &t36_0_0_0},
	{"numPositionsToMove", 1, 134217874, &EmptyCustomAttributesCache, &t110_0_0_4112},
};
extern Il2CppType t36_0_0_0;
extern void* RuntimeInvoker_t5_t5_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m142_MI = 
{
	"FindClosestRightPosition", (methodPointerType)&m142, &t43_TI, &t36_0_0_0, RuntimeInvoker_t5_t5_t110, t43_m142_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, false, 139, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t36_0_0_0;
static ParameterInfo t43_m143_ParameterInfos[] = 
{
	{"coordinates", 0, 134217875, &EmptyCustomAttributesCache, &t36_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m143_MI = 
{
	"ClearGridPosition", (methodPointerType)&m143, &t43_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t43_m143_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 140, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t110_0_0_0;
extern Il2CppType t110_0_0_0;
extern Il2CppType t118_0_0_0;
extern Il2CppType t118_0_0_0;
static ParameterInfo t43_m144_ParameterInfos[] = 
{
	{"currentLevel", 0, 134217876, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"lastLevel", 1, 134217877, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"defaultChance", 2, 134217878, &EmptyCustomAttributesCache, &t118_0_0_0},
	{"floorChance", 3, 134217879, &EmptyCustomAttributesCache, &t118_0_0_0},
};
extern Il2CppType t118_0_0_0;
extern void* RuntimeInvoker_t118_t110_t110_t118_t118 (MethodInfo* method, void* obj, void** args);
MethodInfo m144_MI = 
{
	"CalculateChanceBasedOnLevel", (methodPointerType)&m144, &t43_TI, &t118_0_0_0, RuntimeInvoker_t118_t110_t110_t118_t118, t43_m144_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 4, false, false, 141, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t19_0_0_0;
static ParameterInfo t43_m145_ParameterInfos[] = 
{
	{"x", 0, 134217880, &EmptyCustomAttributesCache, &t19_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t110 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t43__CustomAttributeCache_m145;
MethodInfo m145_MI = 
{
	"<jewelTypes>m__29", (methodPointerType)&m145, &t43_TI, &t108_0_0_0, RuntimeInvoker_t108_t110, t43_m145_ParameterInfos, &t43__CustomAttributeCache_m145, 145, 0, 255, 1, false, false, 142, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t15_0_0_0;
static ParameterInfo t43_m146_ParameterInfos[] = 
{
	{"x", 0, 134217881, &EmptyCustomAttributesCache, &t15_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t43__CustomAttributeCache_m146;
MethodInfo m146_MI = 
{
	"<ProcessCollisions>m__2A", (methodPointerType)&m146, &t43_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t43_m146_ParameterInfos, &t43__CustomAttributeCache_m146, 145, 0, 255, 1, false, false, 143, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t44_0_0_0;
static ParameterInfo t43_m147_ParameterInfos[] = 
{
	{"x", 0, 134217882, &EmptyCustomAttributesCache, &t44_0_0_0},
};
extern Il2CppType t152_0_0_0;
extern void* RuntimeInvoker_t152_t44 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t43__CustomAttributeCache_m147;
MethodInfo m147_MI = 
{
	"<ProcessCollisions>m__2D", (methodPointerType)&m147, &t43_TI, &t152_0_0_0, RuntimeInvoker_t152_t44, t43_m147_ParameterInfos, &t43__CustomAttributeCache_m147, 145, 0, 255, 1, false, false, 144, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t43_MIs[] =
{
	&m99_MI,
	&m100_MI,
	&m101_MI,
	&m102_MI,
	&m103_MI,
	&m104_MI,
	&m105_MI,
	&m106_MI,
	&m107_MI,
	&m108_MI,
	&m109_MI,
	&m110_MI,
	&m111_MI,
	&m112_MI,
	&m113_MI,
	&m114_MI,
	&m115_MI,
	&m116_MI,
	&m117_MI,
	&m118_MI,
	&m119_MI,
	&m120_MI,
	&m121_MI,
	&m122_MI,
	&m123_MI,
	&m124_MI,
	&m125_MI,
	&m126_MI,
	&m127_MI,
	&m128_MI,
	&m129_MI,
	&m130_MI,
	&m131_MI,
	&m132_MI,
	&m133_MI,
	&m134_MI,
	&m135_MI,
	&m136_MI,
	&m137_MI,
	&m138_MI,
	&m139_MI,
	&m140_MI,
	&m141_MI,
	&m142_MI,
	&m143_MI,
	&m144_MI,
	&m145_MI,
	&m146_MI,
	&m147_MI,
	NULL
};
extern TypeInfo t42_TI;
extern TypeInfo t45_TI;
static TypeInfo* t43_TI__nestedTypes[3] =
{
	&t42_TI,
	&t45_TI,
	NULL
};
static MethodInfo* t43_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m104_MI,
	&m103_MI,
	&m103_MI,
};
extern TypeInfo t81_TI;
extern TypeInfo t105_TI;
static TypeInfo* t43_ITIs[] = 
{
	&t81_TI,
	&t105_TI,
};
static Il2CppInterfaceOffsetPair t43_IOs[] = 
{
	{ &t81_TI, 4},
	{ &t105_TI, 6},
};
void t43_CustomAttributesCacheGenerator_U3CU3Ef__am$cache4(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t43_CustomAttributesCacheGenerator_U3CU3Ef__am$cache5(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t43_CustomAttributesCacheGenerator_U3CU3Ef__am$cache6(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t43_CustomAttributesCacheGenerator_t43_m130_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t143 * tmp;
		tmp = (t143 *)il2cpp_codegen_object_new (&t143_TI);
		m551(tmp, &m551_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t43_CustomAttributesCacheGenerator_m145(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t43_CustomAttributesCacheGenerator_m146(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t43_CustomAttributesCacheGenerator_m147(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t43__CustomAttributeCache_U3CU3Ef__am$cache4 = {
1,
NULL,
&t43_CustomAttributesCacheGenerator_U3CU3Ef__am$cache4
};
CustomAttributesCache t43__CustomAttributeCache_U3CU3Ef__am$cache5 = {
1,
NULL,
&t43_CustomAttributesCacheGenerator_U3CU3Ef__am$cache5
};
CustomAttributesCache t43__CustomAttributeCache_U3CU3Ef__am$cache6 = {
1,
NULL,
&t43_CustomAttributesCacheGenerator_U3CU3Ef__am$cache6
};
CustomAttributesCache t43__CustomAttributeCache_t43_m130_Arg0_ParameterInfo = {
1,
NULL,
&t43_CustomAttributesCacheGenerator_t43_m130_Arg0_ParameterInfo
};
CustomAttributesCache t43__CustomAttributeCache_m145 = {
1,
NULL,
&t43_CustomAttributesCacheGenerator_m145
};
CustomAttributesCache t43__CustomAttributeCache_m146 = {
1,
NULL,
&t43_CustomAttributesCacheGenerator_m146
};
CustomAttributesCache t43__CustomAttributeCache_m147 = {
1,
NULL,
&t43_CustomAttributesCacheGenerator_m147
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType t43_0_0_0;
extern Il2CppType t43_1_0_0;
struct t43;
extern CustomAttributesCache t43__CustomAttributeCache_U3CU3Ef__am$cache4;
extern CustomAttributesCache t43__CustomAttributeCache_U3CU3Ef__am$cache5;
extern CustomAttributesCache t43__CustomAttributeCache_U3CU3Ef__am$cache6;
extern CustomAttributesCache t43__CustomAttributeCache_m145;
extern CustomAttributesCache t43__CustomAttributeCache_m146;
extern CustomAttributesCache t43__CustomAttributeCache_m147;
TypeInfo t43_TI = 
{
	&g_AssemblyU2DCSharp_dll_Image, NULL, "GameLogic", "JewelMine.Engine", t43_MIs, t43_PIs, t43_FIs, NULL, &t5_TI, t43_TI__nestedTypes, NULL, &t43_TI, t43_ITIs, t43_VT, &EmptyCustomAttributesCache, &t43_TI, &t43_0_0_0, &t43_1_0_0, t43_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t43), 0, -1, sizeof(t43_SFs), 0, -1, 1048577, 0, false, false, false, false, false, false, false, false, false, true, false, false, 49, 1, 7, 0, 2, 7, 2, 2};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition JewelMine.Engine.IGameAudioSystem
extern MethodInfo m621_MI;
static PropertyInfo t80____SoundEffectsMuted_PropertyInfo = 
{
	&t80_TI, "SoundEffectsMuted", &m621_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m622_MI;
static PropertyInfo t80____BackgroundMusicMuted_PropertyInfo = 
{
	&t80_TI, "BackgroundMusicMuted", &m622_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t80_PIs[] =
{
	&t80____SoundEffectsMuted_PropertyInfo,
	&t80____BackgroundMusicMuted_PropertyInfo,
	NULL
};
extern Il2CppType t6_0_0_0;
static ParameterInfo t80_m623_ParameterInfos[] = 
{
	{"logicUpdate", 0, 134217886, &EmptyCustomAttributesCache, &t6_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m623_MI = 
{
	"PlaySounds", NULL, &t80_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t80_m623_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, false, 150, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m624_MI = 
{
	"ToggleBackgroundMusic", NULL, &t80_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 1478, 0, 1, 0, false, false, 151, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m625_MI = 
{
	"ToggleSoundEffects", NULL, &t80_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 1478, 0, 2, 0, false, false, 152, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
MethodInfo m621_MI = 
{
	"get_SoundEffectsMuted", NULL, &t80_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 3526, 0, 3, 0, false, false, 153, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
MethodInfo m622_MI = 
{
	"get_BackgroundMusicMuted", NULL, &t80_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 3526, 0, 4, 0, false, false, 154, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t7_0_0_0;
static ParameterInfo t80_m626_ParameterInfos[] = 
{
	{"addMessage", 0, 134217887, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m626_MI = 
{
	"AddBackgroundMusicStateMessage", NULL, &t80_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t80_m626_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 5, 1, false, false, 155, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t7_0_0_0;
static ParameterInfo t80_m627_ParameterInfos[] = 
{
	{"addMessage", 0, 134217888, &EmptyCustomAttributesCache, &t7_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m627_MI = 
{
	"AddSoundEffectsStateMessage", NULL, &t80_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t80_m627_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 6, 1, false, false, 156, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t80_MIs[] =
{
	&m623_MI,
	&m624_MI,
	&m625_MI,
	&m621_MI,
	&m622_MI,
	&m626_MI,
	&m627_MI,
	NULL
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType t80_0_0_0;
extern Il2CppType t80_1_0_0;
struct t80;
TypeInfo t80_TI = 
{
	&g_AssemblyU2DCSharp_dll_Image, NULL, "IGameAudioSystem", "JewelMine.Engine", t80_MIs, t80_PIs, NULL, NULL, NULL, NULL, NULL, &t80_TI, NULL, NULL, &EmptyCustomAttributesCache, &t80_TI, &t80_0_0_0, &t80_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, false, false, false, false, false, false, false, 7, 2, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition IGameDifficultySettingsProvider
extern MethodInfo m628_MI;
static PropertyInfo t62____LevelIncrementScoreThreshold_PropertyInfo = 
{
	&t62_TI, "LevelIncrementScoreThreshold", &m628_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m629_MI;
static PropertyInfo t62____TickSpeedMilliseconds_PropertyInfo = 
{
	&t62_TI, "TickSpeedMilliseconds", &m629_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m630_MI;
static PropertyInfo t62____TickSpeedMillisecondsFloor_PropertyInfo = 
{
	&t62_TI, "TickSpeedMillisecondsFloor", &m630_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m631_MI;
static PropertyInfo t62____CollisionFinaliseTickCount_PropertyInfo = 
{
	&t62_TI, "CollisionFinaliseTickCount", &m631_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m632_MI;
static PropertyInfo t62____DeltaStationaryInMilliseconds_PropertyInfo = 
{
	&t62_TI, "DeltaStationaryInMilliseconds", &m632_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m633_MI;
static PropertyInfo t62____DeltaDoubleJewelChance_PropertyInfo = 
{
	&t62_TI, "DeltaDoubleJewelChance", &m633_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m634_MI;
static PropertyInfo t62____DeltaTripleJewelChance_PropertyInfo = 
{
	&t62_TI, "DeltaTripleJewelChance", &m634_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m635_MI;
static PropertyInfo t62____DeltaDoubleJewelChanceFloor_PropertyInfo = 
{
	&t62_TI, "DeltaDoubleJewelChanceFloor", &m635_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m636_MI;
static PropertyInfo t62____DeltaTripleJewelChanceFloor_PropertyInfo = 
{
	&t62_TI, "DeltaTripleJewelChanceFloor", &m636_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m637_MI;
static PropertyInfo t62____GroupCollisionScore_PropertyInfo = 
{
	&t62_TI, "GroupCollisionScore", &m637_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m638_MI;
static PropertyInfo t62____LastLevel_PropertyInfo = 
{
	&t62_TI, "LastLevel", &m638_MI, NULL, 0, &EmptyCustomAttributesCache};
extern MethodInfo m639_MI;
static PropertyInfo t62____InitialLines_PropertyInfo = 
{
	&t62_TI, "InitialLines", &m639_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t62_PIs[] =
{
	&t62____LevelIncrementScoreThreshold_PropertyInfo,
	&t62____TickSpeedMilliseconds_PropertyInfo,
	&t62____TickSpeedMillisecondsFloor_PropertyInfo,
	&t62____CollisionFinaliseTickCount_PropertyInfo,
	&t62____DeltaStationaryInMilliseconds_PropertyInfo,
	&t62____DeltaDoubleJewelChance_PropertyInfo,
	&t62____DeltaTripleJewelChance_PropertyInfo,
	&t62____DeltaDoubleJewelChanceFloor_PropertyInfo,
	&t62____DeltaTripleJewelChanceFloor_PropertyInfo,
	&t62____GroupCollisionScore_PropertyInfo,
	&t62____LastLevel_PropertyInfo,
	&t62____InitialLines_PropertyInfo,
	NULL
};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m628_MI = 
{
	"get_LevelIncrementScoreThreshold", NULL, &t62_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, false, 157, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t118_0_0_0;
extern void* RuntimeInvoker_t118 (MethodInfo* method, void* obj, void** args);
MethodInfo m629_MI = 
{
	"get_TickSpeedMilliseconds", NULL, &t62_TI, &t118_0_0_0, RuntimeInvoker_t118, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, false, 158, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t118_0_0_0;
extern void* RuntimeInvoker_t118 (MethodInfo* method, void* obj, void** args);
MethodInfo m630_MI = 
{
	"get_TickSpeedMillisecondsFloor", NULL, &t62_TI, &t118_0_0_0, RuntimeInvoker_t118, NULL, &EmptyCustomAttributesCache, 3526, 0, 2, 0, false, false, 159, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m631_MI = 
{
	"get_CollisionFinaliseTickCount", NULL, &t62_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 3526, 0, 3, 0, false, false, 160, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m632_MI = 
{
	"get_DeltaStationaryInMilliseconds", NULL, &t62_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 3526, 0, 4, 0, false, false, 161, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t118_0_0_0;
extern void* RuntimeInvoker_t118 (MethodInfo* method, void* obj, void** args);
MethodInfo m633_MI = 
{
	"get_DeltaDoubleJewelChance", NULL, &t62_TI, &t118_0_0_0, RuntimeInvoker_t118, NULL, &EmptyCustomAttributesCache, 3526, 0, 5, 0, false, false, 162, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t118_0_0_0;
extern void* RuntimeInvoker_t118 (MethodInfo* method, void* obj, void** args);
MethodInfo m634_MI = 
{
	"get_DeltaTripleJewelChance", NULL, &t62_TI, &t118_0_0_0, RuntimeInvoker_t118, NULL, &EmptyCustomAttributesCache, 3526, 0, 6, 0, false, false, 163, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t118_0_0_0;
extern void* RuntimeInvoker_t118 (MethodInfo* method, void* obj, void** args);
MethodInfo m635_MI = 
{
	"get_DeltaDoubleJewelChanceFloor", NULL, &t62_TI, &t118_0_0_0, RuntimeInvoker_t118, NULL, &EmptyCustomAttributesCache, 3526, 0, 7, 0, false, false, 164, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t118_0_0_0;
extern void* RuntimeInvoker_t118 (MethodInfo* method, void* obj, void** args);
MethodInfo m636_MI = 
{
	"get_DeltaTripleJewelChanceFloor", NULL, &t62_TI, &t118_0_0_0, RuntimeInvoker_t118, NULL, &EmptyCustomAttributesCache, 3526, 0, 8, 0, false, false, 165, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m637_MI = 
{
	"get_GroupCollisionScore", NULL, &t62_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 3526, 0, 9, 0, false, false, 166, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m638_MI = 
{
	"get_LastLevel", NULL, &t62_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 3526, 0, 10, 0, false, false, 167, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m639_MI = 
{
	"get_InitialLines", NULL, &t62_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 3526, 0, 11, 0, false, false, 168, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t62_MIs[] =
{
	&m628_MI,
	&m629_MI,
	&m630_MI,
	&m631_MI,
	&m632_MI,
	&m633_MI,
	&m634_MI,
	&m635_MI,
	&m636_MI,
	&m637_MI,
	&m638_MI,
	&m639_MI,
	NULL
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType t62_0_0_0;
extern Il2CppType t62_1_0_0;
struct t62;
TypeInfo t62_TI = 
{
	&g_AssemblyU2DCSharp_dll_Image, NULL, "IGameDifficultySettingsProvider", "", t62_MIs, t62_PIs, NULL, NULL, NULL, NULL, NULL, &t62_TI, NULL, NULL, &EmptyCustomAttributesCache, &t62_TI, &t62_0_0_0, &t62_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, false, false, false, false, false, false, false, 12, 12, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition JewelMine.Engine.IGameLogic
extern MethodInfo m640_MI;
static PropertyInfo t81____State_PropertyInfo = 
{
	&t81_TI, "State", &m640_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t81_PIs[] =
{
	&t81____State_PropertyInfo,
	NULL
};
extern Il2CppType t52_0_0_0;
static ParameterInfo t81_m641_ParameterInfos[] = 
{
	{"logicInput", 0, 134217889, &EmptyCustomAttributesCache, &t52_0_0_0},
};
extern Il2CppType t6_0_0_0;
extern void* RuntimeInvoker_t5_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m641_MI = 
{
	"PerformGameLogic", NULL, &t81_TI, &t6_0_0_0, RuntimeInvoker_t5_t5, t81_m641_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, false, 169, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t32_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m640_MI = 
{
	"get_State", NULL, &t81_TI, &t32_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 3526, 0, 1, 0, false, false, 170, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t81_MIs[] =
{
	&m641_MI,
	&m640_MI,
	NULL
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType t81_0_0_0;
extern Il2CppType t81_1_0_0;
struct t81;
TypeInfo t81_TI = 
{
	&g_AssemblyU2DCSharp_dll_Image, NULL, "IGameLogic", "JewelMine.Engine", t81_MIs, t81_PIs, NULL, NULL, NULL, NULL, NULL, &t81_TI, NULL, NULL, &EmptyCustomAttributesCache, &t81_TI, &t81_0_0_0, &t81_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, false, false, false, false, false, false, false, 2, 1, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition JewelMine.Engine.IGameStateProvider
extern MethodInfo m642_MI;
static PropertyInfo t105____State_PropertyInfo = 
{
	&t105_TI, "State", &m642_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t105_PIs[] =
{
	&t105____State_PropertyInfo,
	NULL
};
extern Il2CppType t32_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m642_MI = 
{
	"get_State", NULL, &t105_TI, &t32_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 3526, 0, 0, 0, false, false, 171, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t105_MIs[] =
{
	&m642_MI,
	NULL
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType t105_0_0_0;
extern Il2CppType t105_1_0_0;
struct t105;
TypeInfo t105_TI = 
{
	&g_AssemblyU2DCSharp_dll_Image, NULL, "IGameStateProvider", "JewelMine.Engine", t105_MIs, t105_PIs, NULL, NULL, NULL, NULL, NULL, &t105_TI, NULL, NULL, &EmptyCustomAttributesCache, &t105_TI, &t105_0_0_0, &t105_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, false, false, false, false, false, false, false, 1, 1, 0, 0, 0, 0, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t79_TI;



// Metadata Definition JewelMine.Engine.IGameView
extern Il2CppType t6_0_0_0;
static ParameterInfo t79_m643_ParameterInfos[] = 
{
	{"logicUpdate", 0, 134217890, &EmptyCustomAttributesCache, &t6_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m643_MI = 
{
	"UpdateView", NULL, &t79_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t79_m643_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 0, 1, false, false, 172, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t11_0_0_0;
static ParameterInfo t79_m644_ParameterInfos[] = 
{
	{"message", 0, 134217891, &EmptyCustomAttributesCache, &t11_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m644_MI = 
{
	"AddGameInformationMessage", NULL, &t79_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t79_m644_ParameterInfos, &EmptyCustomAttributesCache, 1478, 0, 1, 1, false, false, 173, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t79_MIs[] =
{
	&m643_MI,
	&m644_MI,
	NULL
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType t79_0_0_0;
extern Il2CppType t79_1_0_0;
struct t79;
TypeInfo t79_TI = 
{
	&g_AssemblyU2DCSharp_dll_Image, NULL, "IGameView", "JewelMine.Engine", t79_MIs, NULL, NULL, NULL, NULL, NULL, NULL, &t79_TI, NULL, NULL, &EmptyCustomAttributesCache, &t79_TI, &t79_0_0_0, &t79_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, 0, 0, -1, 0, 0, -1, 161, 0, false, true, false, false, false, false, false, false, false, false, false, false, 2, 0, 0, 0, 0, 0, 0, 0};
#include "t57.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t57_TI;
#include "t57MD.h"



extern MethodInfo m148_MI;
 void m148 (t57 * __this, MethodInfo* method){
	{
		m460(__this, &m460_MI);
		return;
	}
}
extern MethodInfo m149_MI;
 bool m149 (t57 * __this, t26 * p0, MethodInfo* method){
	{
		t25 * L_0 = m155(p0, &m155_MI);
		t25 * L_1 = (__this->f0);
		return ((((t25 *)L_0) == ((t25 *)L_1))? 1 : 0);
	}
}
// Metadata Definition JewelMine.Engine.Models.CollisionGroup/<IsGroupMember>c__AnonStorey0
extern Il2CppType t25_0_0_3;
FieldInfo t57_f0_FieldInfo = 
{
	"jewel", &t25_0_0_3, &t57_TI, offsetof(t57, f0), &EmptyCustomAttributesCache};
static FieldInfo* t57_FIs[] =
{
	&t57_f0_FieldInfo,
	NULL
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m148_MI = 
{
	".ctor", (methodPointerType)&m148, &t57_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 178, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t26_0_0_0;
static ParameterInfo t57_m149_ParameterInfos[] = 
{
	{"x", 0, 134217894, &EmptyCustomAttributesCache, &t26_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m149_MI = 
{
	"<>m__0", (methodPointerType)&m149, &t57_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t57_m149_ParameterInfos, &EmptyCustomAttributesCache, 131, 0, 255, 1, false, false, 179, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t57_MIs[] =
{
	&m148_MI,
	&m149_MI,
	NULL
};
static MethodInfo* t57_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
};
void t57_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t57__CustomAttributeCache = {
1,
NULL,
&t57_CustomAttributesCacheGenerator
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType t57_0_0_0;
extern Il2CppType t57_1_0_0;
struct t57;
extern TypeInfo t31_TI;
extern CustomAttributesCache t57__CustomAttributeCache;
TypeInfo t57_TI = 
{
	&g_AssemblyU2DCSharp_dll_Image, NULL, "<IsGroupMember>c__AnonStorey0", "", t57_MIs, NULL, t57_FIs, NULL, &t5_TI, NULL, &t31_TI, &t57_TI, NULL, t57_VT, &t57__CustomAttributeCache, &t57_TI, &t57_0_0_0, &t57_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t57), 0, -1, 0, 0, -1, 1048835, 0, false, false, false, false, false, false, false, false, false, false, false, false, 2, 0, 1, 0, 0, 4, 0, 0};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m152_MI;


extern MethodInfo m150_MI;
 void m150 (t31 * __this, MethodInfo* method){
	{
		m460(__this, &m460_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t37_TI));
		t37 * L_0 = (t37 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t37_TI));
		m538(L_0, &m538_MI);
		m152(__this, L_0, &m152_MI);
		return;
	}
}
 t37 * m151 (t31 * __this, MethodInfo* method){
	{
		t37 * L_0 = (__this->f0);
		return L_0;
	}
}
 void m152 (t31 * __this, t37 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		return;
	}
}
 bool m153 (t31 * __this, t25 * p0, MethodInfo* method){
	t57 * V_0 = {0};
	{
		t57 * L_0 = (t57 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t57_TI));
		m148(L_0, &m148_MI);
		V_0 = L_0;
		V_0->f0 = p0;
		t37 * L_1 = m151(__this, &m151_MI);
		t124 L_2 = { &m149_MI };
		t129 * L_3 = (t129 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t129_TI));
		m539(L_3, V_0, L_2, &m539_MI);
		bool L_4 = m540(NULL, L_1, L_3, &m540_MI);
		return L_4;
	}
}
// Metadata Definition JewelMine.Engine.Models.CollisionGroup
extern Il2CppType t37_0_0_1;
extern CustomAttributesCache t31__CustomAttributeCache_U3CMembersU3Ek__BackingField;
FieldInfo t31_f0_FieldInfo = 
{
	"<Members>k__BackingField", &t37_0_0_1, &t31_TI, offsetof(t31, f0), &t31__CustomAttributeCache_U3CMembersU3Ek__BackingField};
static FieldInfo* t31_FIs[] =
{
	&t31_f0_FieldInfo,
	NULL
};
static PropertyInfo t31____Members_PropertyInfo = 
{
	&t31_TI, "Members", &m151_MI, &m152_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t31_PIs[] =
{
	&t31____Members_PropertyInfo,
	NULL
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m150_MI = 
{
	".ctor", (methodPointerType)&m150, &t31_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 174, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t37_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t31__CustomAttributeCache_m151;
MethodInfo m151_MI = 
{
	"get_Members", (methodPointerType)&m151, &t31_TI, &t37_0_0_0, RuntimeInvoker_t5, NULL, &t31__CustomAttributeCache_m151, 2182, 0, 255, 0, false, false, 175, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t37_0_0_0;
static ParameterInfo t31_m152_ParameterInfos[] = 
{
	{"value", 0, 134217892, &EmptyCustomAttributesCache, &t37_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t31__CustomAttributeCache_m152;
MethodInfo m152_MI = 
{
	"set_Members", (methodPointerType)&m152, &t31_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t31_m152_ParameterInfos, &t31__CustomAttributeCache_m152, 2177, 0, 255, 1, false, false, 176, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t25_0_0_0;
static ParameterInfo t31_m153_ParameterInfos[] = 
{
	{"jewel", 0, 134217893, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m153_MI = 
{
	"IsGroupMember", (methodPointerType)&m153, &t31_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t31_m153_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 177, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t31_MIs[] =
{
	&m150_MI,
	&m151_MI,
	&m152_MI,
	&m153_MI,
	NULL
};
extern TypeInfo t57_TI;
static TypeInfo* t31_TI__nestedTypes[2] =
{
	&t57_TI,
	NULL
};
static MethodInfo* t31_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
};
void t31_CustomAttributesCacheGenerator_U3CMembersU3Ek__BackingField(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t31_CustomAttributesCacheGenerator_m151(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t31_CustomAttributesCacheGenerator_m152(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t31__CustomAttributeCache_U3CMembersU3Ek__BackingField = {
1,
NULL,
&t31_CustomAttributesCacheGenerator_U3CMembersU3Ek__BackingField
};
CustomAttributesCache t31__CustomAttributeCache_m151 = {
1,
NULL,
&t31_CustomAttributesCacheGenerator_m151
};
CustomAttributesCache t31__CustomAttributeCache_m152 = {
1,
NULL,
&t31_CustomAttributesCacheGenerator_m152
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType t31_1_0_0;
struct t31;
extern CustomAttributesCache t31__CustomAttributeCache_U3CMembersU3Ek__BackingField;
extern CustomAttributesCache t31__CustomAttributeCache_m151;
extern CustomAttributesCache t31__CustomAttributeCache_m152;
TypeInfo t31_TI = 
{
	&g_AssemblyU2DCSharp_dll_Image, NULL, "CollisionGroup", "JewelMine.Engine.Models", t31_MIs, t31_PIs, t31_FIs, NULL, &t5_TI, t31_TI__nestedTypes, NULL, &t31_TI, NULL, t31_VT, &EmptyCustomAttributesCache, &t31_TI, &t31_0_0_0, &t31_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t31), 0, -1, 0, 0, -1, 1056769, 0, false, false, false, false, false, false, false, false, false, false, false, false, 4, 1, 1, 0, 1, 4, 0, 0};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m156_MI;
extern MethodInfo m158_MI;


 void m154 (t26 * __this, t25 * p0, t36 * p1, MethodInfo* method){
	{
		m460(__this, &m460_MI);
		m156(__this, p0, &m156_MI);
		m158(__this, p1, &m158_MI);
		return;
	}
}
 t25 * m155 (t26 * __this, MethodInfo* method){
	{
		t25 * L_0 = (__this->f0);
		return L_0;
	}
}
 void m156 (t26 * __this, t25 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		return;
	}
}
 t36 * m157 (t26 * __this, MethodInfo* method){
	{
		t36 * L_0 = (__this->f1);
		return L_0;
	}
}
 void m158 (t26 * __this, t36 * p0, MethodInfo* method){
	{
		__this->f1 = p0;
		return;
	}
}
// Metadata Definition JewelMine.Engine.Models.CollisionGroupMember
extern Il2CppType t25_0_0_1;
extern CustomAttributesCache t26__CustomAttributeCache_U3CJewelU3Ek__BackingField;
FieldInfo t26_f0_FieldInfo = 
{
	"<Jewel>k__BackingField", &t25_0_0_1, &t26_TI, offsetof(t26, f0), &t26__CustomAttributeCache_U3CJewelU3Ek__BackingField};
extern Il2CppType t36_0_0_1;
extern CustomAttributesCache t26__CustomAttributeCache_U3CCoordinatesU3Ek__BackingField;
FieldInfo t26_f1_FieldInfo = 
{
	"<Coordinates>k__BackingField", &t36_0_0_1, &t26_TI, offsetof(t26, f1), &t26__CustomAttributeCache_U3CCoordinatesU3Ek__BackingField};
static FieldInfo* t26_FIs[] =
{
	&t26_f0_FieldInfo,
	&t26_f1_FieldInfo,
	NULL
};
static PropertyInfo t26____Jewel_PropertyInfo = 
{
	&t26_TI, "Jewel", &m155_MI, &m156_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo t26____Coordinates_PropertyInfo = 
{
	&t26_TI, "Coordinates", &m157_MI, &m158_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t26_PIs[] =
{
	&t26____Jewel_PropertyInfo,
	&t26____Coordinates_PropertyInfo,
	NULL
};
extern Il2CppType t25_0_0_0;
extern Il2CppType t36_0_0_0;
static ParameterInfo t26_m154_ParameterInfos[] = 
{
	{"jewel", 0, 134217895, &EmptyCustomAttributesCache, &t25_0_0_0},
	{"coordinates", 1, 134217896, &EmptyCustomAttributesCache, &t36_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m154_MI = 
{
	".ctor", (methodPointerType)&m154, &t26_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t5, t26_m154_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, false, 180, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t26__CustomAttributeCache_m155;
MethodInfo m155_MI = 
{
	"get_Jewel", (methodPointerType)&m155, &t26_TI, &t25_0_0_0, RuntimeInvoker_t5, NULL, &t26__CustomAttributeCache_m155, 2182, 0, 255, 0, false, false, 181, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t25_0_0_0;
static ParameterInfo t26_m156_ParameterInfos[] = 
{
	{"value", 0, 134217897, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t26__CustomAttributeCache_m156;
MethodInfo m156_MI = 
{
	"set_Jewel", (methodPointerType)&m156, &t26_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t26_m156_ParameterInfos, &t26__CustomAttributeCache_m156, 2179, 0, 255, 1, false, false, 182, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t36_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t26__CustomAttributeCache_m157;
MethodInfo m157_MI = 
{
	"get_Coordinates", (methodPointerType)&m157, &t26_TI, &t36_0_0_0, RuntimeInvoker_t5, NULL, &t26__CustomAttributeCache_m157, 2182, 0, 255, 0, false, false, 183, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t36_0_0_0;
static ParameterInfo t26_m158_ParameterInfos[] = 
{
	{"value", 0, 134217898, &EmptyCustomAttributesCache, &t36_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t26__CustomAttributeCache_m158;
MethodInfo m158_MI = 
{
	"set_Coordinates", (methodPointerType)&m158, &t26_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t26_m158_ParameterInfos, &t26__CustomAttributeCache_m158, 2179, 0, 255, 1, false, false, 184, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t26_MIs[] =
{
	&m154_MI,
	&m155_MI,
	&m156_MI,
	&m157_MI,
	&m158_MI,
	NULL
};
static MethodInfo* t26_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
};
void t26_CustomAttributesCacheGenerator_U3CJewelU3Ek__BackingField(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t26_CustomAttributesCacheGenerator_U3CCoordinatesU3Ek__BackingField(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t26_CustomAttributesCacheGenerator_m155(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t26_CustomAttributesCacheGenerator_m156(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t26_CustomAttributesCacheGenerator_m157(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t26_CustomAttributesCacheGenerator_m158(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t26__CustomAttributeCache_U3CJewelU3Ek__BackingField = {
1,
NULL,
&t26_CustomAttributesCacheGenerator_U3CJewelU3Ek__BackingField
};
CustomAttributesCache t26__CustomAttributeCache_U3CCoordinatesU3Ek__BackingField = {
1,
NULL,
&t26_CustomAttributesCacheGenerator_U3CCoordinatesU3Ek__BackingField
};
CustomAttributesCache t26__CustomAttributeCache_m155 = {
1,
NULL,
&t26_CustomAttributesCacheGenerator_m155
};
CustomAttributesCache t26__CustomAttributeCache_m156 = {
1,
NULL,
&t26_CustomAttributesCacheGenerator_m156
};
CustomAttributesCache t26__CustomAttributeCache_m157 = {
1,
NULL,
&t26_CustomAttributesCacheGenerator_m157
};
CustomAttributesCache t26__CustomAttributeCache_m158 = {
1,
NULL,
&t26_CustomAttributesCacheGenerator_m158
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType t26_1_0_0;
struct t26;
extern CustomAttributesCache t26__CustomAttributeCache_U3CJewelU3Ek__BackingField;
extern CustomAttributesCache t26__CustomAttributeCache_U3CCoordinatesU3Ek__BackingField;
extern CustomAttributesCache t26__CustomAttributeCache_m155;
extern CustomAttributesCache t26__CustomAttributeCache_m156;
extern CustomAttributesCache t26__CustomAttributeCache_m157;
extern CustomAttributesCache t26__CustomAttributeCache_m158;
TypeInfo t26_TI = 
{
	&g_AssemblyU2DCSharp_dll_Image, NULL, "CollisionGroupMember", "JewelMine.Engine.Models", t26_MIs, t26_PIs, t26_FIs, NULL, &t5_TI, NULL, NULL, &t26_TI, NULL, t26_VT, &EmptyCustomAttributesCache, &t26_TI, &t26_0_0_0, &t26_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t26), 0, -1, 0, 0, -1, 1056769, 0, false, false, false, false, false, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 4, 0, 0};
#ifndef _MSC_VER
#else
#endif

#include "t170.h"
extern TypeInfo t170_TI;
#include "t170MD.h"
extern MethodInfo m645_MI;
extern MethodInfo m646_MI;
extern MethodInfo m647_MI;


extern MethodInfo m159_MI;
 void m159 (t36 * __this, MethodInfo* method){
	{
		m460(__this, &m460_MI);
		return;
	}
}
 void m160 (t36 * __this, int32_t p0, int32_t p1, MethodInfo* method){
	{
		m460(__this, &m460_MI);
		m165(__this, p0, &m165_MI);
		m167(__this, p1, &m167_MI);
		return;
	}
}
extern MethodInfo m161_MI;
 void m161 (t36 * __this, t36 * p0, MethodInfo* method){
	{
		m460(__this, &m460_MI);
		int32_t L_0 = m164(p0, &m164_MI);
		m165(__this, L_0, &m165_MI);
		int32_t L_1 = m166(p0, &m166_MI);
		m167(__this, L_1, &m167_MI);
		return;
	}
}
 t36 * m162 (t5 * __this, MethodInfo* method){
	{
		t36 * L_0 = (t36 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t36_TI));
		m160(L_0, (-1), (-1), &m160_MI);
		return L_0;
	}
}
 t58* m163 (t5 * __this, t36 * p0, MethodInfo* method){
	t170 * V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t170_TI));
		t170 * L_0 = (t170 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t170_TI));
		m645(L_0, &m645_MI);
		V_0 = L_0;
		int32_t L_1 = m164(p0, &m164_MI);
		int32_t L_2 = m166(p0, &m166_MI);
		t36 * L_3 = (t36 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t36_TI));
		m160(L_3, ((int32_t)(L_1+1)), ((int32_t)(L_2+1)), &m160_MI);
		VirtActionInvoker1< t36 * >::Invoke(&m646_MI, V_0, L_3);
		int32_t L_4 = m164(p0, &m164_MI);
		int32_t L_5 = m166(p0, &m166_MI);
		t36 * L_6 = (t36 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t36_TI));
		m160(L_6, ((int32_t)(L_4-1)), ((int32_t)(L_5-1)), &m160_MI);
		VirtActionInvoker1< t36 * >::Invoke(&m646_MI, V_0, L_6);
		int32_t L_7 = m164(p0, &m164_MI);
		int32_t L_8 = m166(p0, &m166_MI);
		t36 * L_9 = (t36 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t36_TI));
		m160(L_9, ((int32_t)(L_7+1)), ((int32_t)(L_8-1)), &m160_MI);
		VirtActionInvoker1< t36 * >::Invoke(&m646_MI, V_0, L_9);
		int32_t L_10 = m164(p0, &m164_MI);
		int32_t L_11 = m166(p0, &m166_MI);
		t36 * L_12 = (t36 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t36_TI));
		m160(L_12, ((int32_t)(L_10-1)), ((int32_t)(L_11+1)), &m160_MI);
		VirtActionInvoker1< t36 * >::Invoke(&m646_MI, V_0, L_12);
		int32_t L_13 = m164(p0, &m164_MI);
		int32_t L_14 = m166(p0, &m166_MI);
		t36 * L_15 = (t36 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t36_TI));
		m160(L_15, L_13, ((int32_t)(L_14+1)), &m160_MI);
		VirtActionInvoker1< t36 * >::Invoke(&m646_MI, V_0, L_15);
		int32_t L_16 = m164(p0, &m164_MI);
		int32_t L_17 = m166(p0, &m166_MI);
		t36 * L_18 = (t36 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t36_TI));
		m160(L_18, L_16, ((int32_t)(L_17-1)), &m160_MI);
		VirtActionInvoker1< t36 * >::Invoke(&m646_MI, V_0, L_18);
		int32_t L_19 = m164(p0, &m164_MI);
		int32_t L_20 = m166(p0, &m166_MI);
		t36 * L_21 = (t36 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t36_TI));
		m160(L_21, ((int32_t)(L_19+1)), L_20, &m160_MI);
		VirtActionInvoker1< t36 * >::Invoke(&m646_MI, V_0, L_21);
		int32_t L_22 = m164(p0, &m164_MI);
		int32_t L_23 = m166(p0, &m166_MI);
		t36 * L_24 = (t36 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t36_TI));
		m160(L_24, ((int32_t)(L_22-1)), L_23, &m160_MI);
		VirtActionInvoker1< t36 * >::Invoke(&m646_MI, V_0, L_24);
		t58* L_25 = m647(V_0, &m647_MI);
		return L_25;
	}
}
 int32_t m164 (t36 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->f0);
		return L_0;
	}
}
 void m165 (t36 * __this, int32_t p0, MethodInfo* method){
	{
		__this->f0 = p0;
		return;
	}
}
 int32_t m166 (t36 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->f1);
		return L_0;
	}
}
 void m167 (t36 * __this, int32_t p0, MethodInfo* method){
	{
		__this->f1 = p0;
		return;
	}
}
// Metadata Definition JewelMine.Engine.Models.Coordinates
extern Il2CppType t110_0_0_1;
extern CustomAttributesCache t36__CustomAttributeCache_U3CXU3Ek__BackingField;
FieldInfo t36_f0_FieldInfo = 
{
	"<X>k__BackingField", &t110_0_0_1, &t36_TI, offsetof(t36, f0), &t36__CustomAttributeCache_U3CXU3Ek__BackingField};
extern Il2CppType t110_0_0_1;
extern CustomAttributesCache t36__CustomAttributeCache_U3CYU3Ek__BackingField;
FieldInfo t36_f1_FieldInfo = 
{
	"<Y>k__BackingField", &t110_0_0_1, &t36_TI, offsetof(t36, f1), &t36__CustomAttributeCache_U3CYU3Ek__BackingField};
static FieldInfo* t36_FIs[] =
{
	&t36_f0_FieldInfo,
	&t36_f1_FieldInfo,
	NULL
};
static PropertyInfo t36____X_PropertyInfo = 
{
	&t36_TI, "X", &m164_MI, &m165_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo t36____Y_PropertyInfo = 
{
	&t36_TI, "Y", &m166_MI, &m167_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t36_PIs[] =
{
	&t36____X_PropertyInfo,
	&t36____Y_PropertyInfo,
	NULL
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m159_MI = 
{
	".ctor", (methodPointerType)&m159, &t36_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 185, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t110_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t36_m160_ParameterInfos[] = 
{
	{"x", 0, 134217899, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"y", 1, 134217900, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m160_MI = 
{
	".ctor", (methodPointerType)&m160, &t36_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110, t36_m160_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, false, 186, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t36_0_0_0;
static ParameterInfo t36_m161_ParameterInfos[] = 
{
	{"source", 0, 134217901, &EmptyCustomAttributesCache, &t36_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m161_MI = 
{
	".ctor", (methodPointerType)&m161, &t36_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t36_m161_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 187, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t36_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m162_MI = 
{
	"CreateInvalidatedCoordinates", (methodPointerType)&m162, &t36_TI, &t36_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 150, 0, 255, 0, false, false, 188, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t36_0_0_0;
static ParameterInfo t36_m163_ParameterInfos[] = 
{
	{"target", 0, 134217902, &EmptyCustomAttributesCache, &t36_0_0_0},
};
extern Il2CppType t58_0_0_0;
extern void* RuntimeInvoker_t5_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m163_MI = 
{
	"GenerateSurroundingCoordinates", (methodPointerType)&m163, &t36_TI, &t58_0_0_0, RuntimeInvoker_t5_t5, t36_m163_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 189, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t36__CustomAttributeCache_m164;
MethodInfo m164_MI = 
{
	"get_X", (methodPointerType)&m164, &t36_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &t36__CustomAttributeCache_m164, 2182, 0, 255, 0, false, false, 190, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t110_0_0_0;
static ParameterInfo t36_m165_ParameterInfos[] = 
{
	{"value", 0, 134217903, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t36__CustomAttributeCache_m165;
MethodInfo m165_MI = 
{
	"set_X", (methodPointerType)&m165, &t36_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t36_m165_ParameterInfos, &t36__CustomAttributeCache_m165, 2182, 0, 255, 1, false, false, 191, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t36__CustomAttributeCache_m166;
MethodInfo m166_MI = 
{
	"get_Y", (methodPointerType)&m166, &t36_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &t36__CustomAttributeCache_m166, 2182, 0, 255, 0, false, false, 192, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t110_0_0_0;
static ParameterInfo t36_m167_ParameterInfos[] = 
{
	{"value", 0, 134217904, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t36__CustomAttributeCache_m167;
MethodInfo m167_MI = 
{
	"set_Y", (methodPointerType)&m167, &t36_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t36_m167_ParameterInfos, &t36__CustomAttributeCache_m167, 2182, 0, 255, 1, false, false, 193, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t36_MIs[] =
{
	&m159_MI,
	&m160_MI,
	&m161_MI,
	&m162_MI,
	&m163_MI,
	&m164_MI,
	&m165_MI,
	&m166_MI,
	&m167_MI,
	NULL
};
static MethodInfo* t36_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
};
void t36_CustomAttributesCacheGenerator_U3CXU3Ek__BackingField(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t36_CustomAttributesCacheGenerator_U3CYU3Ek__BackingField(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t36_CustomAttributesCacheGenerator_m164(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t36_CustomAttributesCacheGenerator_m165(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t36_CustomAttributesCacheGenerator_m166(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t36_CustomAttributesCacheGenerator_m167(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t36__CustomAttributeCache_U3CXU3Ek__BackingField = {
1,
NULL,
&t36_CustomAttributesCacheGenerator_U3CXU3Ek__BackingField
};
CustomAttributesCache t36__CustomAttributeCache_U3CYU3Ek__BackingField = {
1,
NULL,
&t36_CustomAttributesCacheGenerator_U3CYU3Ek__BackingField
};
CustomAttributesCache t36__CustomAttributeCache_m164 = {
1,
NULL,
&t36_CustomAttributesCacheGenerator_m164
};
CustomAttributesCache t36__CustomAttributeCache_m165 = {
1,
NULL,
&t36_CustomAttributesCacheGenerator_m165
};
CustomAttributesCache t36__CustomAttributeCache_m166 = {
1,
NULL,
&t36_CustomAttributesCacheGenerator_m166
};
CustomAttributesCache t36__CustomAttributeCache_m167 = {
1,
NULL,
&t36_CustomAttributesCacheGenerator_m167
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType t36_1_0_0;
struct t36;
extern CustomAttributesCache t36__CustomAttributeCache_U3CXU3Ek__BackingField;
extern CustomAttributesCache t36__CustomAttributeCache_U3CYU3Ek__BackingField;
extern CustomAttributesCache t36__CustomAttributeCache_m164;
extern CustomAttributesCache t36__CustomAttributeCache_m165;
extern CustomAttributesCache t36__CustomAttributeCache_m166;
extern CustomAttributesCache t36__CustomAttributeCache_m167;
TypeInfo t36_TI = 
{
	&g_AssemblyU2DCSharp_dll_Image, NULL, "Coordinates", "JewelMine.Engine.Models", t36_MIs, t36_PIs, t36_FIs, NULL, &t5_TI, NULL, NULL, &t36_TI, NULL, t36_VT, &EmptyCustomAttributesCache, &t36_TI, &t36_0_0_0, &t36_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t36), 0, -1, 0, 0, -1, 1056769, 0, false, false, false, false, false, false, false, false, false, false, false, false, 9, 2, 2, 0, 0, 4, 0, 0};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t118_TI;
extern MethodInfo m171_MI;
extern MethodInfo m257_MI;
extern MethodInfo m199_MI;
extern MethodInfo m259_MI;
extern MethodInfo m261_MI;
extern MethodInfo m263_MI;
extern MethodInfo m648_MI;
extern MethodInfo m649_MI;
extern MethodInfo m173_MI;
extern MethodInfo m177_MI;
extern MethodInfo m179_MI;
extern MethodInfo m181_MI;
extern MethodInfo m650_MI;
extern MethodInfo m183_MI;
extern MethodInfo m185_MI;
extern MethodInfo m189_MI;
extern MethodInfo m187_MI;
extern MethodInfo m191_MI;
extern MethodInfo m193_MI;
extern MethodInfo m195_MI;
extern MethodInfo m197_MI;
extern MethodInfo m200_MI;
extern MethodInfo m175_MI;
extern MethodInfo m176_MI;
struct t125;
 t5* m648 (t5 * __this, t5 * p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
struct t125;
#include "t171.h"
 t60* m649 (t5 * __this, t5* p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


extern MethodInfo m168_MI;
 void m168 (t59 * __this, int32_t p0, t47 * p1, MethodInfo* method){
	int32_t V_0 = {0};
	{
		m460(__this, &m460_MI);
		m171(__this, p0, &m171_MI);
		V_0 = p0;
		if (V_0 == 0)
		{
			goto IL_002a;
		}
		if (V_0 == 1)
		{
			goto IL_003b;
		}
		if (V_0 == 2)
		{
			goto IL_004c;
		}
		if (V_0 == 3)
		{
			goto IL_005d;
		}
	}
	{
		goto IL_006e;
	}

IL_002a:
	{
		t5 * L_0 = m257(p1, &m257_MI);
		m199(__this, L_0, &m199_MI);
		goto IL_006e;
	}

IL_003b:
	{
		t5 * L_1 = m259(p1, &m259_MI);
		m199(__this, L_1, &m199_MI);
		goto IL_006e;
	}

IL_004c:
	{
		t5 * L_2 = m261(p1, &m261_MI);
		m199(__this, L_2, &m199_MI);
		goto IL_006e;
	}

IL_005d:
	{
		t5 * L_3 = m263(p1, &m263_MI);
		m199(__this, L_3, &m199_MI);
		goto IL_006e;
	}

IL_006e:
	{
		return;
	}
}
extern MethodInfo m169_MI;
 void m169 (t5 * __this, MethodInfo* method){
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t114_TI));
		t114 * L_0 = m532(NULL, LoadTypeToken(&t22_0_0_0), &m532_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t18_TI));
		t107 * L_1 = m570(NULL, L_0, &m570_MI);
		t5* L_2 = m648(NULL, L_1, &m648_MI);
		t60* L_3 = m649(NULL, L_2, &m649_MI);
		((t59_SFs*)InitializedTypeInfo(&t59_TI)->static_fields)->f0 = L_3;
		return;
	}
}
 int32_t m170 (t59 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->f1);
		return L_0;
	}
}
 void m171 (t59 * __this, int32_t p0, MethodInfo* method){
	{
		__this->f1 = p0;
		return;
	}
}
 int32_t m172 (t59 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->f2);
		return L_0;
	}
}
 void m173 (t59 * __this, int32_t p0, MethodInfo* method){
	{
		__this->f2 = p0;
		return;
	}
}
 double m174 (t59 * __this, MethodInfo* method){
	{
		double L_0 = (__this->f3);
		return L_0;
	}
}
 void m175 (t59 * __this, double p0, MethodInfo* method){
	{
		__this->f3 = p0;
		return;
	}
}
 double m176 (t59 * __this, MethodInfo* method){
	{
		double L_0 = (__this->f4);
		return L_0;
	}
}
 void m177 (t59 * __this, double p0, MethodInfo* method){
	{
		__this->f4 = p0;
		return;
	}
}
 double m178 (t59 * __this, MethodInfo* method){
	{
		double L_0 = (__this->f5);
		return L_0;
	}
}
 void m179 (t59 * __this, double p0, MethodInfo* method){
	{
		__this->f5 = p0;
		return;
	}
}
extern MethodInfo m180_MI;
 int32_t m180 (t59 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->f6);
		return L_0;
	}
}
 void m181 (t59 * __this, int32_t p0, MethodInfo* method){
	{
		__this->f6 = p0;
		return;
	}
}
 t61  m182 (t59 * __this, MethodInfo* method){
	{
		t61  L_0 = (__this->f7);
		return L_0;
	}
}
 void m183 (t59 * __this, t61  p0, MethodInfo* method){
	{
		__this->f7 = p0;
		return;
	}
}
 double m184 (t59 * __this, MethodInfo* method){
	{
		double L_0 = (__this->f8);
		return L_0;
	}
}
 void m185 (t59 * __this, double p0, MethodInfo* method){
	{
		__this->f8 = p0;
		return;
	}
}
 double m186 (t59 * __this, MethodInfo* method){
	{
		double L_0 = (__this->f9);
		return L_0;
	}
}
 void m187 (t59 * __this, double p0, MethodInfo* method){
	{
		__this->f9 = p0;
		return;
	}
}
 double m188 (t59 * __this, MethodInfo* method){
	{
		double L_0 = (__this->f10);
		return L_0;
	}
}
 void m189 (t59 * __this, double p0, MethodInfo* method){
	{
		__this->f10 = p0;
		return;
	}
}
 double m190 (t59 * __this, MethodInfo* method){
	{
		double L_0 = (__this->f11);
		return L_0;
	}
}
 void m191 (t59 * __this, double p0, MethodInfo* method){
	{
		__this->f11 = p0;
		return;
	}
}
 int32_t m192 (t59 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->f12);
		return L_0;
	}
}
 void m193 (t59 * __this, int32_t p0, MethodInfo* method){
	{
		__this->f12 = p0;
		return;
	}
}
 int32_t m194 (t59 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->f13);
		return L_0;
	}
}
 void m195 (t59 * __this, int32_t p0, MethodInfo* method){
	{
		__this->f13 = p0;
		return;
	}
}
 int32_t m196 (t59 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->f14);
		return L_0;
	}
}
 void m197 (t59 * __this, int32_t p0, MethodInfo* method){
	{
		__this->f14 = p0;
		return;
	}
}
 int32_t m198 (t5 * __this, int32_t p0, MethodInfo* method){
	int32_t V_0 = 0;
	{
		V_0 = 0;
		V_0 = 0;
		goto IL_001f;
	}

IL_0009:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t59_TI));
		int32_t L_0 = V_0;
		if ((((uint32_t)(*(int32_t*)(int32_t*)SZArrayLdElema((((t59_SFs*)InitializedTypeInfo(&t59_TI)->static_fields)->f0), L_0))) != ((uint32_t)p0)))
		{
			goto IL_001b;
		}
	}
	{
		goto IL_002c;
	}

IL_001b:
	{
		V_0 = ((int32_t)(V_0+1));
	}

IL_001f:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t59_TI));
		if ((((int32_t)V_0) < ((int32_t)(((int32_t)(((t107 *)(((t59_SFs*)InitializedTypeInfo(&t59_TI)->static_fields)->f0))->max_length))))))
		{
			goto IL_0009;
		}
	}

IL_002c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t59_TI));
		if ((((uint32_t)V_0) != ((uint32_t)((int32_t)((((int32_t)(((t107 *)(((t59_SFs*)InitializedTypeInfo(&t59_TI)->static_fields)->f0))->max_length)))-1)))))
		{
			goto IL_0043;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t59_TI));
		int32_t L_1 = 0;
		return (int32_t)((*(int32_t*)(int32_t*)SZArrayLdElema((((t59_SFs*)InitializedTypeInfo(&t59_TI)->static_fields)->f0), L_1)));
	}

IL_0043:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t59_TI));
		int32_t L_2 = ((int32_t)(V_0+1));
		return (int32_t)((*(int32_t*)(int32_t*)SZArrayLdElema((((t59_SFs*)InitializedTypeInfo(&t59_TI)->static_fields)->f0), L_2)));
	}
}
 void m199 (t59 * __this, t5 * p0, MethodInfo* method){
	{
		int32_t L_0 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(&m628_MI, p0);
		m173(__this, L_0, &m173_MI);
		double L_1 = (double)InterfaceFuncInvoker0< double >::Invoke(&m629_MI, p0);
		m177(__this, L_1, &m177_MI);
		double L_2 = (double)InterfaceFuncInvoker0< double >::Invoke(&m630_MI, p0);
		m179(__this, L_2, &m179_MI);
		int32_t L_3 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(&m631_MI, p0);
		m181(__this, L_3, &m181_MI);
		int32_t L_4 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(&m632_MI, p0);
		t61  L_5 = {0};
		m650(&L_5, 0, 0, 0, 0, L_4, &m650_MI);
		m183(__this, L_5, &m183_MI);
		double L_6 = (double)InterfaceFuncInvoker0< double >::Invoke(&m633_MI, p0);
		m185(__this, L_6, &m185_MI);
		double L_7 = (double)InterfaceFuncInvoker0< double >::Invoke(&m635_MI, p0);
		m189(__this, L_7, &m189_MI);
		double L_8 = (double)InterfaceFuncInvoker0< double >::Invoke(&m634_MI, p0);
		m187(__this, L_8, &m187_MI);
		double L_9 = (double)InterfaceFuncInvoker0< double >::Invoke(&m636_MI, p0);
		m191(__this, L_9, &m191_MI);
		int32_t L_10 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(&m637_MI, p0);
		m193(__this, L_10, &m193_MI);
		int32_t L_11 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(&m638_MI, p0);
		m195(__this, L_11, &m195_MI);
		int32_t L_12 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(&m639_MI, p0);
		m197(__this, L_12, &m197_MI);
		double L_13 = m200(__this, &m200_MI);
		m175(__this, L_13, &m175_MI);
		return;
	}
}
 double m200 (t59 * __this, MethodInfo* method){
	{
		double L_0 = m176(__this, &m176_MI);
		double L_1 = m178(__this, &m178_MI);
		int32_t L_2 = m194(__this, &m194_MI);
		return ((double)((double)((double)(L_0-L_1))/(double)(((double)L_2))));
	}
}
// Metadata Definition JewelMine.Engine.Models.GameDifficulty
extern Il2CppType t60_0_0_17;
FieldInfo t59_f0_FieldInfo = 
{
	"levels", &t60_0_0_17, &t59_TI, offsetof(t59_SFs, f0), &EmptyCustomAttributesCache};
extern Il2CppType t22_0_0_1;
extern CustomAttributesCache t59__CustomAttributeCache_U3CDifficultyLevelU3Ek__BackingField;
FieldInfo t59_f1_FieldInfo = 
{
	"<DifficultyLevel>k__BackingField", &t22_0_0_1, &t59_TI, offsetof(t59, f1), &t59__CustomAttributeCache_U3CDifficultyLevelU3Ek__BackingField};
extern Il2CppType t110_0_0_1;
extern CustomAttributesCache t59__CustomAttributeCache_U3CLevelIncrementScoreThresholdU3Ek__BackingField;
FieldInfo t59_f2_FieldInfo = 
{
	"<LevelIncrementScoreThreshold>k__BackingField", &t110_0_0_1, &t59_TI, offsetof(t59, f2), &t59__CustomAttributeCache_U3CLevelIncrementScoreThresholdU3Ek__BackingField};
extern Il2CppType t118_0_0_1;
extern CustomAttributesCache t59__CustomAttributeCache_U3CLevelIncrementSpeedChangeU3Ek__BackingField;
FieldInfo t59_f3_FieldInfo = 
{
	"<LevelIncrementSpeedChange>k__BackingField", &t118_0_0_1, &t59_TI, offsetof(t59, f3), &t59__CustomAttributeCache_U3CLevelIncrementSpeedChangeU3Ek__BackingField};
extern Il2CppType t118_0_0_1;
extern CustomAttributesCache t59__CustomAttributeCache_U3CTickSpeedMillisecondsU3Ek__BackingField;
FieldInfo t59_f4_FieldInfo = 
{
	"<TickSpeedMilliseconds>k__BackingField", &t118_0_0_1, &t59_TI, offsetof(t59, f4), &t59__CustomAttributeCache_U3CTickSpeedMillisecondsU3Ek__BackingField};
extern Il2CppType t118_0_0_1;
extern CustomAttributesCache t59__CustomAttributeCache_U3CTickSpeedMillisecondsFloorU3Ek__BackingField;
FieldInfo t59_f5_FieldInfo = 
{
	"<TickSpeedMillisecondsFloor>k__BackingField", &t118_0_0_1, &t59_TI, offsetof(t59, f5), &t59__CustomAttributeCache_U3CTickSpeedMillisecondsFloorU3Ek__BackingField};
extern Il2CppType t110_0_0_1;
extern CustomAttributesCache t59__CustomAttributeCache_U3CCollisionFinaliseTickCountU3Ek__BackingField;
FieldInfo t59_f6_FieldInfo = 
{
	"<CollisionFinaliseTickCount>k__BackingField", &t110_0_0_1, &t59_TI, offsetof(t59, f6), &t59__CustomAttributeCache_U3CCollisionFinaliseTickCountU3Ek__BackingField};
extern Il2CppType t61_0_0_1;
extern CustomAttributesCache t59__CustomAttributeCache_U3CDeltaStationaryTimeSpanU3Ek__BackingField;
FieldInfo t59_f7_FieldInfo = 
{
	"<DeltaStationaryTimeSpan>k__BackingField", &t61_0_0_1, &t59_TI, offsetof(t59, f7), &t59__CustomAttributeCache_U3CDeltaStationaryTimeSpanU3Ek__BackingField};
extern Il2CppType t118_0_0_1;
extern CustomAttributesCache t59__CustomAttributeCache_U3CDeltaDoubleJewelChanceU3Ek__BackingField;
FieldInfo t59_f8_FieldInfo = 
{
	"<DeltaDoubleJewelChance>k__BackingField", &t118_0_0_1, &t59_TI, offsetof(t59, f8), &t59__CustomAttributeCache_U3CDeltaDoubleJewelChanceU3Ek__BackingField};
extern Il2CppType t118_0_0_1;
extern CustomAttributesCache t59__CustomAttributeCache_U3CDeltaTripleJewelChanceU3Ek__BackingField;
FieldInfo t59_f9_FieldInfo = 
{
	"<DeltaTripleJewelChance>k__BackingField", &t118_0_0_1, &t59_TI, offsetof(t59, f9), &t59__CustomAttributeCache_U3CDeltaTripleJewelChanceU3Ek__BackingField};
extern Il2CppType t118_0_0_1;
extern CustomAttributesCache t59__CustomAttributeCache_U3CDeltaDoubleJewelChanceFloorU3Ek__BackingField;
FieldInfo t59_f10_FieldInfo = 
{
	"<DeltaDoubleJewelChanceFloor>k__BackingField", &t118_0_0_1, &t59_TI, offsetof(t59, f10), &t59__CustomAttributeCache_U3CDeltaDoubleJewelChanceFloorU3Ek__BackingField};
extern Il2CppType t118_0_0_1;
extern CustomAttributesCache t59__CustomAttributeCache_U3CDeltaTripleJewelChanceFloorU3Ek__BackingField;
FieldInfo t59_f11_FieldInfo = 
{
	"<DeltaTripleJewelChanceFloor>k__BackingField", &t118_0_0_1, &t59_TI, offsetof(t59, f11), &t59__CustomAttributeCache_U3CDeltaTripleJewelChanceFloorU3Ek__BackingField};
extern Il2CppType t110_0_0_1;
extern CustomAttributesCache t59__CustomAttributeCache_U3CGroupCollisionScoreU3Ek__BackingField;
FieldInfo t59_f12_FieldInfo = 
{
	"<GroupCollisionScore>k__BackingField", &t110_0_0_1, &t59_TI, offsetof(t59, f12), &t59__CustomAttributeCache_U3CGroupCollisionScoreU3Ek__BackingField};
extern Il2CppType t110_0_0_1;
extern CustomAttributesCache t59__CustomAttributeCache_U3CLastLevelU3Ek__BackingField;
FieldInfo t59_f13_FieldInfo = 
{
	"<LastLevel>k__BackingField", &t110_0_0_1, &t59_TI, offsetof(t59, f13), &t59__CustomAttributeCache_U3CLastLevelU3Ek__BackingField};
extern Il2CppType t110_0_0_1;
extern CustomAttributesCache t59__CustomAttributeCache_U3CInitialLinesU3Ek__BackingField;
FieldInfo t59_f14_FieldInfo = 
{
	"<InitialLines>k__BackingField", &t110_0_0_1, &t59_TI, offsetof(t59, f14), &t59__CustomAttributeCache_U3CInitialLinesU3Ek__BackingField};
static FieldInfo* t59_FIs[] =
{
	&t59_f0_FieldInfo,
	&t59_f1_FieldInfo,
	&t59_f2_FieldInfo,
	&t59_f3_FieldInfo,
	&t59_f4_FieldInfo,
	&t59_f5_FieldInfo,
	&t59_f6_FieldInfo,
	&t59_f7_FieldInfo,
	&t59_f8_FieldInfo,
	&t59_f9_FieldInfo,
	&t59_f10_FieldInfo,
	&t59_f11_FieldInfo,
	&t59_f12_FieldInfo,
	&t59_f13_FieldInfo,
	&t59_f14_FieldInfo,
	NULL
};
static PropertyInfo t59____DifficultyLevel_PropertyInfo = 
{
	&t59_TI, "DifficultyLevel", &m170_MI, &m171_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo t59____LevelIncrementScoreThreshold_PropertyInfo = 
{
	&t59_TI, "LevelIncrementScoreThreshold", &m172_MI, &m173_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo t59____LevelIncrementSpeedChange_PropertyInfo = 
{
	&t59_TI, "LevelIncrementSpeedChange", &m174_MI, &m175_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo t59____TickSpeedMilliseconds_PropertyInfo = 
{
	&t59_TI, "TickSpeedMilliseconds", &m176_MI, &m177_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo t59____TickSpeedMillisecondsFloor_PropertyInfo = 
{
	&t59_TI, "TickSpeedMillisecondsFloor", &m178_MI, &m179_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo t59____CollisionFinaliseTickCount_PropertyInfo = 
{
	&t59_TI, "CollisionFinaliseTickCount", &m180_MI, &m181_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo t59____DeltaStationaryTimeSpan_PropertyInfo = 
{
	&t59_TI, "DeltaStationaryTimeSpan", &m182_MI, &m183_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo t59____DeltaDoubleJewelChance_PropertyInfo = 
{
	&t59_TI, "DeltaDoubleJewelChance", &m184_MI, &m185_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo t59____DeltaTripleJewelChance_PropertyInfo = 
{
	&t59_TI, "DeltaTripleJewelChance", &m186_MI, &m187_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo t59____DeltaDoubleJewelChanceFloor_PropertyInfo = 
{
	&t59_TI, "DeltaDoubleJewelChanceFloor", &m188_MI, &m189_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo t59____DeltaTripleJewelChanceFloor_PropertyInfo = 
{
	&t59_TI, "DeltaTripleJewelChanceFloor", &m190_MI, &m191_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo t59____GroupCollisionScore_PropertyInfo = 
{
	&t59_TI, "GroupCollisionScore", &m192_MI, &m193_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo t59____LastLevel_PropertyInfo = 
{
	&t59_TI, "LastLevel", &m194_MI, &m195_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo t59____InitialLines_PropertyInfo = 
{
	&t59_TI, "InitialLines", &m196_MI, &m197_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t59_PIs[] =
{
	&t59____DifficultyLevel_PropertyInfo,
	&t59____LevelIncrementScoreThreshold_PropertyInfo,
	&t59____LevelIncrementSpeedChange_PropertyInfo,
	&t59____TickSpeedMilliseconds_PropertyInfo,
	&t59____TickSpeedMillisecondsFloor_PropertyInfo,
	&t59____CollisionFinaliseTickCount_PropertyInfo,
	&t59____DeltaStationaryTimeSpan_PropertyInfo,
	&t59____DeltaDoubleJewelChance_PropertyInfo,
	&t59____DeltaTripleJewelChance_PropertyInfo,
	&t59____DeltaDoubleJewelChanceFloor_PropertyInfo,
	&t59____DeltaTripleJewelChanceFloor_PropertyInfo,
	&t59____GroupCollisionScore_PropertyInfo,
	&t59____LastLevel_PropertyInfo,
	&t59____InitialLines_PropertyInfo,
	NULL
};
extern Il2CppType t22_0_0_0;
extern Il2CppType t47_0_0_0;
static ParameterInfo t59_m168_ParameterInfos[] = 
{
	{"level", 0, 134217905, &EmptyCustomAttributesCache, &t22_0_0_0},
	{"userSettings", 1, 134217906, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m168_MI = 
{
	".ctor", (methodPointerType)&m168, &t59_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t5, t59_m168_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, false, 194, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m169_MI = 
{
	".cctor", (methodPointerType)&m169, &t59_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6161, 0, 255, 0, false, false, 195, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t22_0_0_0;
extern void* RuntimeInvoker_t22 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t59__CustomAttributeCache_m170;
MethodInfo m170_MI = 
{
	"get_DifficultyLevel", (methodPointerType)&m170, &t59_TI, &t22_0_0_0, RuntimeInvoker_t22, NULL, &t59__CustomAttributeCache_m170, 2182, 0, 255, 0, false, false, 196, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t22_0_0_0;
static ParameterInfo t59_m171_ParameterInfos[] = 
{
	{"value", 0, 134217907, &EmptyCustomAttributesCache, &t22_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t59__CustomAttributeCache_m171;
MethodInfo m171_MI = 
{
	"set_DifficultyLevel", (methodPointerType)&m171, &t59_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t59_m171_ParameterInfos, &t59__CustomAttributeCache_m171, 2177, 0, 255, 1, false, false, 197, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t59__CustomAttributeCache_m172;
MethodInfo m172_MI = 
{
	"get_LevelIncrementScoreThreshold", (methodPointerType)&m172, &t59_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &t59__CustomAttributeCache_m172, 2182, 0, 255, 0, false, false, 198, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t110_0_0_0;
static ParameterInfo t59_m173_ParameterInfos[] = 
{
	{"value", 0, 134217908, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t59__CustomAttributeCache_m173;
MethodInfo m173_MI = 
{
	"set_LevelIncrementScoreThreshold", (methodPointerType)&m173, &t59_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t59_m173_ParameterInfos, &t59__CustomAttributeCache_m173, 2177, 0, 255, 1, false, false, 199, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t118_0_0_0;
extern void* RuntimeInvoker_t118 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t59__CustomAttributeCache_m174;
MethodInfo m174_MI = 
{
	"get_LevelIncrementSpeedChange", (methodPointerType)&m174, &t59_TI, &t118_0_0_0, RuntimeInvoker_t118, NULL, &t59__CustomAttributeCache_m174, 2182, 0, 255, 0, false, false, 200, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t118_0_0_0;
static ParameterInfo t59_m175_ParameterInfos[] = 
{
	{"value", 0, 134217909, &EmptyCustomAttributesCache, &t118_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t118 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t59__CustomAttributeCache_m175;
MethodInfo m175_MI = 
{
	"set_LevelIncrementSpeedChange", (methodPointerType)&m175, &t59_TI, &t109_0_0_0, RuntimeInvoker_t109_t118, t59_m175_ParameterInfos, &t59__CustomAttributeCache_m175, 2177, 0, 255, 1, false, false, 201, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t118_0_0_0;
extern void* RuntimeInvoker_t118 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t59__CustomAttributeCache_m176;
MethodInfo m176_MI = 
{
	"get_TickSpeedMilliseconds", (methodPointerType)&m176, &t59_TI, &t118_0_0_0, RuntimeInvoker_t118, NULL, &t59__CustomAttributeCache_m176, 2182, 0, 255, 0, false, false, 202, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t118_0_0_0;
static ParameterInfo t59_m177_ParameterInfos[] = 
{
	{"value", 0, 134217910, &EmptyCustomAttributesCache, &t118_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t118 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t59__CustomAttributeCache_m177;
MethodInfo m177_MI = 
{
	"set_TickSpeedMilliseconds", (methodPointerType)&m177, &t59_TI, &t109_0_0_0, RuntimeInvoker_t109_t118, t59_m177_ParameterInfos, &t59__CustomAttributeCache_m177, 2177, 0, 255, 1, false, false, 203, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t118_0_0_0;
extern void* RuntimeInvoker_t118 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t59__CustomAttributeCache_m178;
MethodInfo m178_MI = 
{
	"get_TickSpeedMillisecondsFloor", (methodPointerType)&m178, &t59_TI, &t118_0_0_0, RuntimeInvoker_t118, NULL, &t59__CustomAttributeCache_m178, 2182, 0, 255, 0, false, false, 204, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t118_0_0_0;
static ParameterInfo t59_m179_ParameterInfos[] = 
{
	{"value", 0, 134217911, &EmptyCustomAttributesCache, &t118_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t118 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t59__CustomAttributeCache_m179;
MethodInfo m179_MI = 
{
	"set_TickSpeedMillisecondsFloor", (methodPointerType)&m179, &t59_TI, &t109_0_0_0, RuntimeInvoker_t109_t118, t59_m179_ParameterInfos, &t59__CustomAttributeCache_m179, 2177, 0, 255, 1, false, false, 205, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t59__CustomAttributeCache_m180;
MethodInfo m180_MI = 
{
	"get_CollisionFinaliseTickCount", (methodPointerType)&m180, &t59_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &t59__CustomAttributeCache_m180, 2182, 0, 255, 0, false, false, 206, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t110_0_0_0;
static ParameterInfo t59_m181_ParameterInfos[] = 
{
	{"value", 0, 134217912, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t59__CustomAttributeCache_m181;
MethodInfo m181_MI = 
{
	"set_CollisionFinaliseTickCount", (methodPointerType)&m181, &t59_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t59_m181_ParameterInfos, &t59__CustomAttributeCache_m181, 2177, 0, 255, 1, false, false, 207, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t61_0_0_0;
extern void* RuntimeInvoker_t61 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t59__CustomAttributeCache_m182;
MethodInfo m182_MI = 
{
	"get_DeltaStationaryTimeSpan", (methodPointerType)&m182, &t59_TI, &t61_0_0_0, RuntimeInvoker_t61, NULL, &t59__CustomAttributeCache_m182, 2182, 0, 255, 0, false, false, 208, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t61_0_0_0;
extern Il2CppType t61_0_0_0;
static ParameterInfo t59_m183_ParameterInfos[] = 
{
	{"value", 0, 134217913, &EmptyCustomAttributesCache, &t61_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t61 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t59__CustomAttributeCache_m183;
MethodInfo m183_MI = 
{
	"set_DeltaStationaryTimeSpan", (methodPointerType)&m183, &t59_TI, &t109_0_0_0, RuntimeInvoker_t109_t61, t59_m183_ParameterInfos, &t59__CustomAttributeCache_m183, 2177, 0, 255, 1, false, false, 209, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t118_0_0_0;
extern void* RuntimeInvoker_t118 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t59__CustomAttributeCache_m184;
MethodInfo m184_MI = 
{
	"get_DeltaDoubleJewelChance", (methodPointerType)&m184, &t59_TI, &t118_0_0_0, RuntimeInvoker_t118, NULL, &t59__CustomAttributeCache_m184, 2182, 0, 255, 0, false, false, 210, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t118_0_0_0;
static ParameterInfo t59_m185_ParameterInfos[] = 
{
	{"value", 0, 134217914, &EmptyCustomAttributesCache, &t118_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t118 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t59__CustomAttributeCache_m185;
MethodInfo m185_MI = 
{
	"set_DeltaDoubleJewelChance", (methodPointerType)&m185, &t59_TI, &t109_0_0_0, RuntimeInvoker_t109_t118, t59_m185_ParameterInfos, &t59__CustomAttributeCache_m185, 2177, 0, 255, 1, false, false, 211, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t118_0_0_0;
extern void* RuntimeInvoker_t118 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t59__CustomAttributeCache_m186;
MethodInfo m186_MI = 
{
	"get_DeltaTripleJewelChance", (methodPointerType)&m186, &t59_TI, &t118_0_0_0, RuntimeInvoker_t118, NULL, &t59__CustomAttributeCache_m186, 2182, 0, 255, 0, false, false, 212, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t118_0_0_0;
static ParameterInfo t59_m187_ParameterInfos[] = 
{
	{"value", 0, 134217915, &EmptyCustomAttributesCache, &t118_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t118 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t59__CustomAttributeCache_m187;
MethodInfo m187_MI = 
{
	"set_DeltaTripleJewelChance", (methodPointerType)&m187, &t59_TI, &t109_0_0_0, RuntimeInvoker_t109_t118, t59_m187_ParameterInfos, &t59__CustomAttributeCache_m187, 2177, 0, 255, 1, false, false, 213, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t118_0_0_0;
extern void* RuntimeInvoker_t118 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t59__CustomAttributeCache_m188;
MethodInfo m188_MI = 
{
	"get_DeltaDoubleJewelChanceFloor", (methodPointerType)&m188, &t59_TI, &t118_0_0_0, RuntimeInvoker_t118, NULL, &t59__CustomAttributeCache_m188, 2182, 0, 255, 0, false, false, 214, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t118_0_0_0;
static ParameterInfo t59_m189_ParameterInfos[] = 
{
	{"value", 0, 134217916, &EmptyCustomAttributesCache, &t118_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t118 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t59__CustomAttributeCache_m189;
MethodInfo m189_MI = 
{
	"set_DeltaDoubleJewelChanceFloor", (methodPointerType)&m189, &t59_TI, &t109_0_0_0, RuntimeInvoker_t109_t118, t59_m189_ParameterInfos, &t59__CustomAttributeCache_m189, 2177, 0, 255, 1, false, false, 215, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t118_0_0_0;
extern void* RuntimeInvoker_t118 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t59__CustomAttributeCache_m190;
MethodInfo m190_MI = 
{
	"get_DeltaTripleJewelChanceFloor", (methodPointerType)&m190, &t59_TI, &t118_0_0_0, RuntimeInvoker_t118, NULL, &t59__CustomAttributeCache_m190, 2182, 0, 255, 0, false, false, 216, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t118_0_0_0;
static ParameterInfo t59_m191_ParameterInfos[] = 
{
	{"value", 0, 134217917, &EmptyCustomAttributesCache, &t118_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t118 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t59__CustomAttributeCache_m191;
MethodInfo m191_MI = 
{
	"set_DeltaTripleJewelChanceFloor", (methodPointerType)&m191, &t59_TI, &t109_0_0_0, RuntimeInvoker_t109_t118, t59_m191_ParameterInfos, &t59__CustomAttributeCache_m191, 2177, 0, 255, 1, false, false, 217, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t59__CustomAttributeCache_m192;
MethodInfo m192_MI = 
{
	"get_GroupCollisionScore", (methodPointerType)&m192, &t59_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &t59__CustomAttributeCache_m192, 2182, 0, 255, 0, false, false, 218, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t110_0_0_0;
static ParameterInfo t59_m193_ParameterInfos[] = 
{
	{"value", 0, 134217918, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t59__CustomAttributeCache_m193;
MethodInfo m193_MI = 
{
	"set_GroupCollisionScore", (methodPointerType)&m193, &t59_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t59_m193_ParameterInfos, &t59__CustomAttributeCache_m193, 2177, 0, 255, 1, false, false, 219, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t59__CustomAttributeCache_m194;
MethodInfo m194_MI = 
{
	"get_LastLevel", (methodPointerType)&m194, &t59_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &t59__CustomAttributeCache_m194, 2182, 0, 255, 0, false, false, 220, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t110_0_0_0;
static ParameterInfo t59_m195_ParameterInfos[] = 
{
	{"value", 0, 134217919, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t59__CustomAttributeCache_m195;
MethodInfo m195_MI = 
{
	"set_LastLevel", (methodPointerType)&m195, &t59_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t59_m195_ParameterInfos, &t59__CustomAttributeCache_m195, 2177, 0, 255, 1, false, false, 221, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t59__CustomAttributeCache_m196;
MethodInfo m196_MI = 
{
	"get_InitialLines", (methodPointerType)&m196, &t59_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &t59__CustomAttributeCache_m196, 2182, 0, 255, 0, false, false, 222, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t110_0_0_0;
static ParameterInfo t59_m197_ParameterInfos[] = 
{
	{"value", 0, 134217920, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t59__CustomAttributeCache_m197;
MethodInfo m197_MI = 
{
	"set_InitialLines", (methodPointerType)&m197, &t59_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t59_m197_ParameterInfos, &t59__CustomAttributeCache_m197, 2177, 0, 255, 1, false, false, 223, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t22_0_0_0;
static ParameterInfo t59_m198_ParameterInfos[] = 
{
	{"target", 0, 134217921, &EmptyCustomAttributesCache, &t22_0_0_0},
};
extern Il2CppType t22_0_0_0;
extern void* RuntimeInvoker_t22_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m198_MI = 
{
	"FindNextDifficultyLevel", (methodPointerType)&m198, &t59_TI, &t22_0_0_0, RuntimeInvoker_t22_t110, t59_m198_ParameterInfos, &EmptyCustomAttributesCache, 150, 0, 255, 1, false, false, 224, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t62_0_0_0;
static ParameterInfo t59_m199_ParameterInfos[] = 
{
	{"provider", 0, 134217922, &EmptyCustomAttributesCache, &t62_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m199_MI = 
{
	"SetFromConfigurableSettings", (methodPointerType)&m199, &t59_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t59_m199_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 225, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t118_0_0_0;
extern void* RuntimeInvoker_t118 (MethodInfo* method, void* obj, void** args);
MethodInfo m200_MI = 
{
	"CalculateLevelIncrementSpeedChange", (methodPointerType)&m200, &t59_TI, &t118_0_0_0, RuntimeInvoker_t118, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 226, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t59_MIs[] =
{
	&m168_MI,
	&m169_MI,
	&m170_MI,
	&m171_MI,
	&m172_MI,
	&m173_MI,
	&m174_MI,
	&m175_MI,
	&m176_MI,
	&m177_MI,
	&m178_MI,
	&m179_MI,
	&m180_MI,
	&m181_MI,
	&m182_MI,
	&m183_MI,
	&m184_MI,
	&m185_MI,
	&m186_MI,
	&m187_MI,
	&m188_MI,
	&m189_MI,
	&m190_MI,
	&m191_MI,
	&m192_MI,
	&m193_MI,
	&m194_MI,
	&m195_MI,
	&m196_MI,
	&m197_MI,
	&m198_MI,
	&m199_MI,
	&m200_MI,
	NULL
};
static MethodInfo* t59_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
};
void t59_CustomAttributesCacheGenerator_U3CDifficultyLevelU3Ek__BackingField(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t59_CustomAttributesCacheGenerator_U3CLevelIncrementScoreThresholdU3Ek__BackingField(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t59_CustomAttributesCacheGenerator_U3CLevelIncrementSpeedChangeU3Ek__BackingField(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t59_CustomAttributesCacheGenerator_U3CTickSpeedMillisecondsU3Ek__BackingField(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t59_CustomAttributesCacheGenerator_U3CTickSpeedMillisecondsFloorU3Ek__BackingField(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t59_CustomAttributesCacheGenerator_U3CCollisionFinaliseTickCountU3Ek__BackingField(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t59_CustomAttributesCacheGenerator_U3CDeltaStationaryTimeSpanU3Ek__BackingField(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t59_CustomAttributesCacheGenerator_U3CDeltaDoubleJewelChanceU3Ek__BackingField(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t59_CustomAttributesCacheGenerator_U3CDeltaTripleJewelChanceU3Ek__BackingField(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t59_CustomAttributesCacheGenerator_U3CDeltaDoubleJewelChanceFloorU3Ek__BackingField(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t59_CustomAttributesCacheGenerator_U3CDeltaTripleJewelChanceFloorU3Ek__BackingField(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t59_CustomAttributesCacheGenerator_U3CGroupCollisionScoreU3Ek__BackingField(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t59_CustomAttributesCacheGenerator_U3CLastLevelU3Ek__BackingField(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t59_CustomAttributesCacheGenerator_U3CInitialLinesU3Ek__BackingField(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t59_CustomAttributesCacheGenerator_m170(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t59_CustomAttributesCacheGenerator_m171(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t59_CustomAttributesCacheGenerator_m172(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t59_CustomAttributesCacheGenerator_m173(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t59_CustomAttributesCacheGenerator_m174(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t59_CustomAttributesCacheGenerator_m175(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t59_CustomAttributesCacheGenerator_m176(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t59_CustomAttributesCacheGenerator_m177(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t59_CustomAttributesCacheGenerator_m178(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t59_CustomAttributesCacheGenerator_m179(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t59_CustomAttributesCacheGenerator_m180(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t59_CustomAttributesCacheGenerator_m181(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t59_CustomAttributesCacheGenerator_m182(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t59_CustomAttributesCacheGenerator_m183(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t59_CustomAttributesCacheGenerator_m184(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t59_CustomAttributesCacheGenerator_m185(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t59_CustomAttributesCacheGenerator_m186(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t59_CustomAttributesCacheGenerator_m187(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t59_CustomAttributesCacheGenerator_m188(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t59_CustomAttributesCacheGenerator_m189(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t59_CustomAttributesCacheGenerator_m190(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t59_CustomAttributesCacheGenerator_m191(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t59_CustomAttributesCacheGenerator_m192(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t59_CustomAttributesCacheGenerator_m193(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t59_CustomAttributesCacheGenerator_m194(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t59_CustomAttributesCacheGenerator_m195(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t59_CustomAttributesCacheGenerator_m196(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t59_CustomAttributesCacheGenerator_m197(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t59__CustomAttributeCache_U3CDifficultyLevelU3Ek__BackingField = {
1,
NULL,
&t59_CustomAttributesCacheGenerator_U3CDifficultyLevelU3Ek__BackingField
};
CustomAttributesCache t59__CustomAttributeCache_U3CLevelIncrementScoreThresholdU3Ek__BackingField = {
1,
NULL,
&t59_CustomAttributesCacheGenerator_U3CLevelIncrementScoreThresholdU3Ek__BackingField
};
CustomAttributesCache t59__CustomAttributeCache_U3CLevelIncrementSpeedChangeU3Ek__BackingField = {
1,
NULL,
&t59_CustomAttributesCacheGenerator_U3CLevelIncrementSpeedChangeU3Ek__BackingField
};
CustomAttributesCache t59__CustomAttributeCache_U3CTickSpeedMillisecondsU3Ek__BackingField = {
1,
NULL,
&t59_CustomAttributesCacheGenerator_U3CTickSpeedMillisecondsU3Ek__BackingField
};
CustomAttributesCache t59__CustomAttributeCache_U3CTickSpeedMillisecondsFloorU3Ek__BackingField = {
1,
NULL,
&t59_CustomAttributesCacheGenerator_U3CTickSpeedMillisecondsFloorU3Ek__BackingField
};
CustomAttributesCache t59__CustomAttributeCache_U3CCollisionFinaliseTickCountU3Ek__BackingField = {
1,
NULL,
&t59_CustomAttributesCacheGenerator_U3CCollisionFinaliseTickCountU3Ek__BackingField
};
CustomAttributesCache t59__CustomAttributeCache_U3CDeltaStationaryTimeSpanU3Ek__BackingField = {
1,
NULL,
&t59_CustomAttributesCacheGenerator_U3CDeltaStationaryTimeSpanU3Ek__BackingField
};
CustomAttributesCache t59__CustomAttributeCache_U3CDeltaDoubleJewelChanceU3Ek__BackingField = {
1,
NULL,
&t59_CustomAttributesCacheGenerator_U3CDeltaDoubleJewelChanceU3Ek__BackingField
};
CustomAttributesCache t59__CustomAttributeCache_U3CDeltaTripleJewelChanceU3Ek__BackingField = {
1,
NULL,
&t59_CustomAttributesCacheGenerator_U3CDeltaTripleJewelChanceU3Ek__BackingField
};
CustomAttributesCache t59__CustomAttributeCache_U3CDeltaDoubleJewelChanceFloorU3Ek__BackingField = {
1,
NULL,
&t59_CustomAttributesCacheGenerator_U3CDeltaDoubleJewelChanceFloorU3Ek__BackingField
};
CustomAttributesCache t59__CustomAttributeCache_U3CDeltaTripleJewelChanceFloorU3Ek__BackingField = {
1,
NULL,
&t59_CustomAttributesCacheGenerator_U3CDeltaTripleJewelChanceFloorU3Ek__BackingField
};
CustomAttributesCache t59__CustomAttributeCache_U3CGroupCollisionScoreU3Ek__BackingField = {
1,
NULL,
&t59_CustomAttributesCacheGenerator_U3CGroupCollisionScoreU3Ek__BackingField
};
CustomAttributesCache t59__CustomAttributeCache_U3CLastLevelU3Ek__BackingField = {
1,
NULL,
&t59_CustomAttributesCacheGenerator_U3CLastLevelU3Ek__BackingField
};
CustomAttributesCache t59__CustomAttributeCache_U3CInitialLinesU3Ek__BackingField = {
1,
NULL,
&t59_CustomAttributesCacheGenerator_U3CInitialLinesU3Ek__BackingField
};
CustomAttributesCache t59__CustomAttributeCache_m170 = {
1,
NULL,
&t59_CustomAttributesCacheGenerator_m170
};
CustomAttributesCache t59__CustomAttributeCache_m171 = {
1,
NULL,
&t59_CustomAttributesCacheGenerator_m171
};
CustomAttributesCache t59__CustomAttributeCache_m172 = {
1,
NULL,
&t59_CustomAttributesCacheGenerator_m172
};
CustomAttributesCache t59__CustomAttributeCache_m173 = {
1,
NULL,
&t59_CustomAttributesCacheGenerator_m173
};
CustomAttributesCache t59__CustomAttributeCache_m174 = {
1,
NULL,
&t59_CustomAttributesCacheGenerator_m174
};
CustomAttributesCache t59__CustomAttributeCache_m175 = {
1,
NULL,
&t59_CustomAttributesCacheGenerator_m175
};
CustomAttributesCache t59__CustomAttributeCache_m176 = {
1,
NULL,
&t59_CustomAttributesCacheGenerator_m176
};
CustomAttributesCache t59__CustomAttributeCache_m177 = {
1,
NULL,
&t59_CustomAttributesCacheGenerator_m177
};
CustomAttributesCache t59__CustomAttributeCache_m178 = {
1,
NULL,
&t59_CustomAttributesCacheGenerator_m178
};
CustomAttributesCache t59__CustomAttributeCache_m179 = {
1,
NULL,
&t59_CustomAttributesCacheGenerator_m179
};
CustomAttributesCache t59__CustomAttributeCache_m180 = {
1,
NULL,
&t59_CustomAttributesCacheGenerator_m180
};
CustomAttributesCache t59__CustomAttributeCache_m181 = {
1,
NULL,
&t59_CustomAttributesCacheGenerator_m181
};
CustomAttributesCache t59__CustomAttributeCache_m182 = {
1,
NULL,
&t59_CustomAttributesCacheGenerator_m182
};
CustomAttributesCache t59__CustomAttributeCache_m183 = {
1,
NULL,
&t59_CustomAttributesCacheGenerator_m183
};
CustomAttributesCache t59__CustomAttributeCache_m184 = {
1,
NULL,
&t59_CustomAttributesCacheGenerator_m184
};
CustomAttributesCache t59__CustomAttributeCache_m185 = {
1,
NULL,
&t59_CustomAttributesCacheGenerator_m185
};
CustomAttributesCache t59__CustomAttributeCache_m186 = {
1,
NULL,
&t59_CustomAttributesCacheGenerator_m186
};
CustomAttributesCache t59__CustomAttributeCache_m187 = {
1,
NULL,
&t59_CustomAttributesCacheGenerator_m187
};
CustomAttributesCache t59__CustomAttributeCache_m188 = {
1,
NULL,
&t59_CustomAttributesCacheGenerator_m188
};
CustomAttributesCache t59__CustomAttributeCache_m189 = {
1,
NULL,
&t59_CustomAttributesCacheGenerator_m189
};
CustomAttributesCache t59__CustomAttributeCache_m190 = {
1,
NULL,
&t59_CustomAttributesCacheGenerator_m190
};
CustomAttributesCache t59__CustomAttributeCache_m191 = {
1,
NULL,
&t59_CustomAttributesCacheGenerator_m191
};
CustomAttributesCache t59__CustomAttributeCache_m192 = {
1,
NULL,
&t59_CustomAttributesCacheGenerator_m192
};
CustomAttributesCache t59__CustomAttributeCache_m193 = {
1,
NULL,
&t59_CustomAttributesCacheGenerator_m193
};
CustomAttributesCache t59__CustomAttributeCache_m194 = {
1,
NULL,
&t59_CustomAttributesCacheGenerator_m194
};
CustomAttributesCache t59__CustomAttributeCache_m195 = {
1,
NULL,
&t59_CustomAttributesCacheGenerator_m195
};
CustomAttributesCache t59__CustomAttributeCache_m196 = {
1,
NULL,
&t59_CustomAttributesCacheGenerator_m196
};
CustomAttributesCache t59__CustomAttributeCache_m197 = {
1,
NULL,
&t59_CustomAttributesCacheGenerator_m197
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType t59_0_0_0;
extern Il2CppType t59_1_0_0;
struct t59;
extern CustomAttributesCache t59__CustomAttributeCache_U3CDifficultyLevelU3Ek__BackingField;
extern CustomAttributesCache t59__CustomAttributeCache_U3CLevelIncrementScoreThresholdU3Ek__BackingField;
extern CustomAttributesCache t59__CustomAttributeCache_U3CLevelIncrementSpeedChangeU3Ek__BackingField;
extern CustomAttributesCache t59__CustomAttributeCache_U3CTickSpeedMillisecondsU3Ek__BackingField;
extern CustomAttributesCache t59__CustomAttributeCache_U3CTickSpeedMillisecondsFloorU3Ek__BackingField;
extern CustomAttributesCache t59__CustomAttributeCache_U3CCollisionFinaliseTickCountU3Ek__BackingField;
extern CustomAttributesCache t59__CustomAttributeCache_U3CDeltaStationaryTimeSpanU3Ek__BackingField;
extern CustomAttributesCache t59__CustomAttributeCache_U3CDeltaDoubleJewelChanceU3Ek__BackingField;
extern CustomAttributesCache t59__CustomAttributeCache_U3CDeltaTripleJewelChanceU3Ek__BackingField;
extern CustomAttributesCache t59__CustomAttributeCache_U3CDeltaDoubleJewelChanceFloorU3Ek__BackingField;
extern CustomAttributesCache t59__CustomAttributeCache_U3CDeltaTripleJewelChanceFloorU3Ek__BackingField;
extern CustomAttributesCache t59__CustomAttributeCache_U3CGroupCollisionScoreU3Ek__BackingField;
extern CustomAttributesCache t59__CustomAttributeCache_U3CLastLevelU3Ek__BackingField;
extern CustomAttributesCache t59__CustomAttributeCache_U3CInitialLinesU3Ek__BackingField;
extern CustomAttributesCache t59__CustomAttributeCache_m170;
extern CustomAttributesCache t59__CustomAttributeCache_m171;
extern CustomAttributesCache t59__CustomAttributeCache_m172;
extern CustomAttributesCache t59__CustomAttributeCache_m173;
extern CustomAttributesCache t59__CustomAttributeCache_m174;
extern CustomAttributesCache t59__CustomAttributeCache_m175;
extern CustomAttributesCache t59__CustomAttributeCache_m176;
extern CustomAttributesCache t59__CustomAttributeCache_m177;
extern CustomAttributesCache t59__CustomAttributeCache_m178;
extern CustomAttributesCache t59__CustomAttributeCache_m179;
extern CustomAttributesCache t59__CustomAttributeCache_m180;
extern CustomAttributesCache t59__CustomAttributeCache_m181;
extern CustomAttributesCache t59__CustomAttributeCache_m182;
extern CustomAttributesCache t59__CustomAttributeCache_m183;
extern CustomAttributesCache t59__CustomAttributeCache_m184;
extern CustomAttributesCache t59__CustomAttributeCache_m185;
extern CustomAttributesCache t59__CustomAttributeCache_m186;
extern CustomAttributesCache t59__CustomAttributeCache_m187;
extern CustomAttributesCache t59__CustomAttributeCache_m188;
extern CustomAttributesCache t59__CustomAttributeCache_m189;
extern CustomAttributesCache t59__CustomAttributeCache_m190;
extern CustomAttributesCache t59__CustomAttributeCache_m191;
extern CustomAttributesCache t59__CustomAttributeCache_m192;
extern CustomAttributesCache t59__CustomAttributeCache_m193;
extern CustomAttributesCache t59__CustomAttributeCache_m194;
extern CustomAttributesCache t59__CustomAttributeCache_m195;
extern CustomAttributesCache t59__CustomAttributeCache_m196;
extern CustomAttributesCache t59__CustomAttributeCache_m197;
TypeInfo t59_TI = 
{
	&g_AssemblyU2DCSharp_dll_Image, NULL, "GameDifficulty", "JewelMine.Engine.Models", t59_MIs, t59_PIs, t59_FIs, NULL, &t5_TI, NULL, NULL, &t59_TI, NULL, t59_VT, &EmptyCustomAttributesCache, &t59_TI, &t59_0_0_0, &t59_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t59), 0, -1, sizeof(t59_SFs), 0, -1, 1056769, 0, false, false, false, false, false, false, false, false, false, true, false, false, 33, 14, 15, 0, 0, 4, 0, 0};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t63_TI;
extern MethodInfo m204_MI;
extern MethodInfo m206_MI;
extern MethodInfo m210_MI;
extern MethodInfo m208_MI;
extern MethodInfo m212_MI;
extern MethodInfo m214_MI;
extern MethodInfo m216_MI;


extern MethodInfo m201_MI;
 void m201 (t52 * __this, MethodInfo* method){
	{
		m460(__this, &m460_MI);
		return;
	}
}
extern MethodInfo m202_MI;
 void m202 (t52 * __this, MethodInfo* method){
	t63  V_0 = {0};
	{
		Initobj (&t63_TI, (&V_0));
		__this->f0 = V_0;
		m204(__this, 0, &m204_MI);
		m206(__this, 0, &m206_MI);
		m210(__this, 0, &m210_MI);
		m208(__this, 0, &m208_MI);
		m212(__this, 0, &m212_MI);
		m214(__this, 0, &m214_MI);
		m216(__this, 0, &m216_MI);
		return;
	}
}
 bool m203 (t52 * __this, MethodInfo* method){
	{
		bool L_0 = (__this->f1);
		return L_0;
	}
}
 void m204 (t52 * __this, bool p0, MethodInfo* method){
	{
		__this->f1 = p0;
		return;
	}
}
 bool m205 (t52 * __this, MethodInfo* method){
	{
		bool L_0 = (__this->f2);
		return L_0;
	}
}
 void m206 (t52 * __this, bool p0, MethodInfo* method){
	{
		__this->f2 = p0;
		return;
	}
}
 bool m207 (t52 * __this, MethodInfo* method){
	{
		bool L_0 = (__this->f3);
		return L_0;
	}
}
 void m208 (t52 * __this, bool p0, MethodInfo* method){
	{
		__this->f3 = p0;
		return;
	}
}
 bool m209 (t52 * __this, MethodInfo* method){
	{
		bool L_0 = (__this->f4);
		return L_0;
	}
}
 void m210 (t52 * __this, bool p0, MethodInfo* method){
	{
		__this->f4 = p0;
		return;
	}
}
 bool m211 (t52 * __this, MethodInfo* method){
	{
		bool L_0 = (__this->f5);
		return L_0;
	}
}
 void m212 (t52 * __this, bool p0, MethodInfo* method){
	{
		__this->f5 = p0;
		return;
	}
}
 bool m213 (t52 * __this, MethodInfo* method){
	{
		bool L_0 = (__this->f6);
		return L_0;
	}
}
 void m214 (t52 * __this, bool p0, MethodInfo* method){
	{
		__this->f6 = p0;
		return;
	}
}
 bool m215 (t52 * __this, MethodInfo* method){
	{
		bool L_0 = (__this->f7);
		return L_0;
	}
}
 void m216 (t52 * __this, bool p0, MethodInfo* method){
	{
		__this->f7 = p0;
		return;
	}
}
// Metadata Definition JewelMine.Engine.Models.GameLogicInput
extern Il2CppType t63_0_0_6;
FieldInfo t52_f0_FieldInfo = 
{
	"DeltaMovement", &t63_0_0_6, &t52_TI, offsetof(t52, f0), &EmptyCustomAttributesCache};
extern Il2CppType t108_0_0_1;
extern CustomAttributesCache t52__CustomAttributeCache_U3CDeltaSwapJewelsU3Ek__BackingField;
FieldInfo t52_f1_FieldInfo = 
{
	"<DeltaSwapJewels>k__BackingField", &t108_0_0_1, &t52_TI, offsetof(t52, f1), &t52__CustomAttributeCache_U3CDeltaSwapJewelsU3Ek__BackingField};
extern Il2CppType t108_0_0_1;
extern CustomAttributesCache t52__CustomAttributeCache_U3CRestartGameU3Ek__BackingField;
FieldInfo t52_f2_FieldInfo = 
{
	"<RestartGame>k__BackingField", &t108_0_0_1, &t52_TI, offsetof(t52, f2), &t52__CustomAttributeCache_U3CRestartGameU3Ek__BackingField};
extern Il2CppType t108_0_0_1;
extern CustomAttributesCache t52__CustomAttributeCache_U3CPauseGameU3Ek__BackingField;
FieldInfo t52_f3_FieldInfo = 
{
	"<PauseGame>k__BackingField", &t108_0_0_1, &t52_TI, offsetof(t52, f3), &t52__CustomAttributeCache_U3CPauseGameU3Ek__BackingField};
extern Il2CppType t108_0_0_1;
extern CustomAttributesCache t52__CustomAttributeCache_U3CGameStartedU3Ek__BackingField;
FieldInfo t52_f4_FieldInfo = 
{
	"<GameStarted>k__BackingField", &t108_0_0_1, &t52_TI, offsetof(t52, f4), &t52__CustomAttributeCache_U3CGameStartedU3Ek__BackingField};
extern Il2CppType t108_0_0_1;
extern CustomAttributesCache t52__CustomAttributeCache_U3CChangeDifficultyU3Ek__BackingField;
FieldInfo t52_f5_FieldInfo = 
{
	"<ChangeDifficulty>k__BackingField", &t108_0_0_1, &t52_TI, offsetof(t52, f5), &t52__CustomAttributeCache_U3CChangeDifficultyU3Ek__BackingField};
extern Il2CppType t108_0_0_1;
extern CustomAttributesCache t52__CustomAttributeCache_U3CSaveGameU3Ek__BackingField;
FieldInfo t52_f6_FieldInfo = 
{
	"<SaveGame>k__BackingField", &t108_0_0_1, &t52_TI, offsetof(t52, f6), &t52__CustomAttributeCache_U3CSaveGameU3Ek__BackingField};
extern Il2CppType t108_0_0_1;
extern CustomAttributesCache t52__CustomAttributeCache_U3CLoadGameU3Ek__BackingField;
FieldInfo t52_f7_FieldInfo = 
{
	"<LoadGame>k__BackingField", &t108_0_0_1, &t52_TI, offsetof(t52, f7), &t52__CustomAttributeCache_U3CLoadGameU3Ek__BackingField};
static FieldInfo* t52_FIs[] =
{
	&t52_f0_FieldInfo,
	&t52_f1_FieldInfo,
	&t52_f2_FieldInfo,
	&t52_f3_FieldInfo,
	&t52_f4_FieldInfo,
	&t52_f5_FieldInfo,
	&t52_f6_FieldInfo,
	&t52_f7_FieldInfo,
	NULL
};
static PropertyInfo t52____DeltaSwapJewels_PropertyInfo = 
{
	&t52_TI, "DeltaSwapJewels", &m203_MI, &m204_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo t52____RestartGame_PropertyInfo = 
{
	&t52_TI, "RestartGame", &m205_MI, &m206_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo t52____PauseGame_PropertyInfo = 
{
	&t52_TI, "PauseGame", &m207_MI, &m208_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo t52____GameStarted_PropertyInfo = 
{
	&t52_TI, "GameStarted", &m209_MI, &m210_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo t52____ChangeDifficulty_PropertyInfo = 
{
	&t52_TI, "ChangeDifficulty", &m211_MI, &m212_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo t52____SaveGame_PropertyInfo = 
{
	&t52_TI, "SaveGame", &m213_MI, &m214_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo t52____LoadGame_PropertyInfo = 
{
	&t52_TI, "LoadGame", &m215_MI, &m216_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t52_PIs[] =
{
	&t52____DeltaSwapJewels_PropertyInfo,
	&t52____RestartGame_PropertyInfo,
	&t52____PauseGame_PropertyInfo,
	&t52____GameStarted_PropertyInfo,
	&t52____ChangeDifficulty_PropertyInfo,
	&t52____SaveGame_PropertyInfo,
	&t52____LoadGame_PropertyInfo,
	NULL
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m201_MI = 
{
	".ctor", (methodPointerType)&m201, &t52_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 227, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m202_MI = 
{
	"Clear", (methodPointerType)&m202, &t52_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, false, 228, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t52__CustomAttributeCache_m203;
MethodInfo m203_MI = 
{
	"get_DeltaSwapJewels", (methodPointerType)&m203, &t52_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &t52__CustomAttributeCache_m203, 2182, 0, 255, 0, false, false, 229, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t108_0_0_0;
static ParameterInfo t52_m204_ParameterInfos[] = 
{
	{"value", 0, 134217923, &EmptyCustomAttributesCache, &t108_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t111 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t52__CustomAttributeCache_m204;
MethodInfo m204_MI = 
{
	"set_DeltaSwapJewels", (methodPointerType)&m204, &t52_TI, &t109_0_0_0, RuntimeInvoker_t109_t111, t52_m204_ParameterInfos, &t52__CustomAttributeCache_m204, 2182, 0, 255, 1, false, false, 230, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t52__CustomAttributeCache_m205;
MethodInfo m205_MI = 
{
	"get_RestartGame", (methodPointerType)&m205, &t52_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &t52__CustomAttributeCache_m205, 2182, 0, 255, 0, false, false, 231, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t108_0_0_0;
static ParameterInfo t52_m206_ParameterInfos[] = 
{
	{"value", 0, 134217924, &EmptyCustomAttributesCache, &t108_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t111 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t52__CustomAttributeCache_m206;
MethodInfo m206_MI = 
{
	"set_RestartGame", (methodPointerType)&m206, &t52_TI, &t109_0_0_0, RuntimeInvoker_t109_t111, t52_m206_ParameterInfos, &t52__CustomAttributeCache_m206, 2182, 0, 255, 1, false, false, 232, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t52__CustomAttributeCache_m207;
MethodInfo m207_MI = 
{
	"get_PauseGame", (methodPointerType)&m207, &t52_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &t52__CustomAttributeCache_m207, 2182, 0, 255, 0, false, false, 233, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t108_0_0_0;
static ParameterInfo t52_m208_ParameterInfos[] = 
{
	{"value", 0, 134217925, &EmptyCustomAttributesCache, &t108_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t111 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t52__CustomAttributeCache_m208;
MethodInfo m208_MI = 
{
	"set_PauseGame", (methodPointerType)&m208, &t52_TI, &t109_0_0_0, RuntimeInvoker_t109_t111, t52_m208_ParameterInfos, &t52__CustomAttributeCache_m208, 2182, 0, 255, 1, false, false, 234, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t52__CustomAttributeCache_m209;
MethodInfo m209_MI = 
{
	"get_GameStarted", (methodPointerType)&m209, &t52_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &t52__CustomAttributeCache_m209, 2182, 0, 255, 0, false, false, 235, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t108_0_0_0;
static ParameterInfo t52_m210_ParameterInfos[] = 
{
	{"value", 0, 134217926, &EmptyCustomAttributesCache, &t108_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t111 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t52__CustomAttributeCache_m210;
MethodInfo m210_MI = 
{
	"set_GameStarted", (methodPointerType)&m210, &t52_TI, &t109_0_0_0, RuntimeInvoker_t109_t111, t52_m210_ParameterInfos, &t52__CustomAttributeCache_m210, 2182, 0, 255, 1, false, false, 236, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t52__CustomAttributeCache_m211;
MethodInfo m211_MI = 
{
	"get_ChangeDifficulty", (methodPointerType)&m211, &t52_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &t52__CustomAttributeCache_m211, 2182, 0, 255, 0, false, false, 237, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t108_0_0_0;
static ParameterInfo t52_m212_ParameterInfos[] = 
{
	{"value", 0, 134217927, &EmptyCustomAttributesCache, &t108_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t111 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t52__CustomAttributeCache_m212;
MethodInfo m212_MI = 
{
	"set_ChangeDifficulty", (methodPointerType)&m212, &t52_TI, &t109_0_0_0, RuntimeInvoker_t109_t111, t52_m212_ParameterInfos, &t52__CustomAttributeCache_m212, 2182, 0, 255, 1, false, false, 238, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t52__CustomAttributeCache_m213;
MethodInfo m213_MI = 
{
	"get_SaveGame", (methodPointerType)&m213, &t52_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &t52__CustomAttributeCache_m213, 2182, 0, 255, 0, false, false, 239, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t108_0_0_0;
static ParameterInfo t52_m214_ParameterInfos[] = 
{
	{"value", 0, 134217928, &EmptyCustomAttributesCache, &t108_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t111 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t52__CustomAttributeCache_m214;
MethodInfo m214_MI = 
{
	"set_SaveGame", (methodPointerType)&m214, &t52_TI, &t109_0_0_0, RuntimeInvoker_t109_t111, t52_m214_ParameterInfos, &t52__CustomAttributeCache_m214, 2182, 0, 255, 1, false, false, 240, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t52__CustomAttributeCache_m215;
MethodInfo m215_MI = 
{
	"get_LoadGame", (methodPointerType)&m215, &t52_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &t52__CustomAttributeCache_m215, 2182, 0, 255, 0, false, false, 241, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t108_0_0_0;
static ParameterInfo t52_m216_ParameterInfos[] = 
{
	{"value", 0, 134217929, &EmptyCustomAttributesCache, &t108_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t111 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t52__CustomAttributeCache_m216;
MethodInfo m216_MI = 
{
	"set_LoadGame", (methodPointerType)&m216, &t52_TI, &t109_0_0_0, RuntimeInvoker_t109_t111, t52_m216_ParameterInfos, &t52__CustomAttributeCache_m216, 2182, 0, 255, 1, false, false, 242, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t52_MIs[] =
{
	&m201_MI,
	&m202_MI,
	&m203_MI,
	&m204_MI,
	&m205_MI,
	&m206_MI,
	&m207_MI,
	&m208_MI,
	&m209_MI,
	&m210_MI,
	&m211_MI,
	&m212_MI,
	&m213_MI,
	&m214_MI,
	&m215_MI,
	&m216_MI,
	NULL
};
static MethodInfo* t52_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
};
void t52_CustomAttributesCacheGenerator_U3CDeltaSwapJewelsU3Ek__BackingField(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t52_CustomAttributesCacheGenerator_U3CRestartGameU3Ek__BackingField(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t52_CustomAttributesCacheGenerator_U3CPauseGameU3Ek__BackingField(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t52_CustomAttributesCacheGenerator_U3CGameStartedU3Ek__BackingField(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t52_CustomAttributesCacheGenerator_U3CChangeDifficultyU3Ek__BackingField(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t52_CustomAttributesCacheGenerator_U3CSaveGameU3Ek__BackingField(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t52_CustomAttributesCacheGenerator_U3CLoadGameU3Ek__BackingField(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t52_CustomAttributesCacheGenerator_m203(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t52_CustomAttributesCacheGenerator_m204(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t52_CustomAttributesCacheGenerator_m205(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t52_CustomAttributesCacheGenerator_m206(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t52_CustomAttributesCacheGenerator_m207(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t52_CustomAttributesCacheGenerator_m208(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t52_CustomAttributesCacheGenerator_m209(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t52_CustomAttributesCacheGenerator_m210(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t52_CustomAttributesCacheGenerator_m211(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t52_CustomAttributesCacheGenerator_m212(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t52_CustomAttributesCacheGenerator_m213(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t52_CustomAttributesCacheGenerator_m214(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t52_CustomAttributesCacheGenerator_m215(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t52_CustomAttributesCacheGenerator_m216(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t52__CustomAttributeCache_U3CDeltaSwapJewelsU3Ek__BackingField = {
1,
NULL,
&t52_CustomAttributesCacheGenerator_U3CDeltaSwapJewelsU3Ek__BackingField
};
CustomAttributesCache t52__CustomAttributeCache_U3CRestartGameU3Ek__BackingField = {
1,
NULL,
&t52_CustomAttributesCacheGenerator_U3CRestartGameU3Ek__BackingField
};
CustomAttributesCache t52__CustomAttributeCache_U3CPauseGameU3Ek__BackingField = {
1,
NULL,
&t52_CustomAttributesCacheGenerator_U3CPauseGameU3Ek__BackingField
};
CustomAttributesCache t52__CustomAttributeCache_U3CGameStartedU3Ek__BackingField = {
1,
NULL,
&t52_CustomAttributesCacheGenerator_U3CGameStartedU3Ek__BackingField
};
CustomAttributesCache t52__CustomAttributeCache_U3CChangeDifficultyU3Ek__BackingField = {
1,
NULL,
&t52_CustomAttributesCacheGenerator_U3CChangeDifficultyU3Ek__BackingField
};
CustomAttributesCache t52__CustomAttributeCache_U3CSaveGameU3Ek__BackingField = {
1,
NULL,
&t52_CustomAttributesCacheGenerator_U3CSaveGameU3Ek__BackingField
};
CustomAttributesCache t52__CustomAttributeCache_U3CLoadGameU3Ek__BackingField = {
1,
NULL,
&t52_CustomAttributesCacheGenerator_U3CLoadGameU3Ek__BackingField
};
CustomAttributesCache t52__CustomAttributeCache_m203 = {
1,
NULL,
&t52_CustomAttributesCacheGenerator_m203
};
CustomAttributesCache t52__CustomAttributeCache_m204 = {
1,
NULL,
&t52_CustomAttributesCacheGenerator_m204
};
CustomAttributesCache t52__CustomAttributeCache_m205 = {
1,
NULL,
&t52_CustomAttributesCacheGenerator_m205
};
CustomAttributesCache t52__CustomAttributeCache_m206 = {
1,
NULL,
&t52_CustomAttributesCacheGenerator_m206
};
CustomAttributesCache t52__CustomAttributeCache_m207 = {
1,
NULL,
&t52_CustomAttributesCacheGenerator_m207
};
CustomAttributesCache t52__CustomAttributeCache_m208 = {
1,
NULL,
&t52_CustomAttributesCacheGenerator_m208
};
CustomAttributesCache t52__CustomAttributeCache_m209 = {
1,
NULL,
&t52_CustomAttributesCacheGenerator_m209
};
CustomAttributesCache t52__CustomAttributeCache_m210 = {
1,
NULL,
&t52_CustomAttributesCacheGenerator_m210
};
CustomAttributesCache t52__CustomAttributeCache_m211 = {
1,
NULL,
&t52_CustomAttributesCacheGenerator_m211
};
CustomAttributesCache t52__CustomAttributeCache_m212 = {
1,
NULL,
&t52_CustomAttributesCacheGenerator_m212
};
CustomAttributesCache t52__CustomAttributeCache_m213 = {
1,
NULL,
&t52_CustomAttributesCacheGenerator_m213
};
CustomAttributesCache t52__CustomAttributeCache_m214 = {
1,
NULL,
&t52_CustomAttributesCacheGenerator_m214
};
CustomAttributesCache t52__CustomAttributeCache_m215 = {
1,
NULL,
&t52_CustomAttributesCacheGenerator_m215
};
CustomAttributesCache t52__CustomAttributeCache_m216 = {
1,
NULL,
&t52_CustomAttributesCacheGenerator_m216
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType t52_1_0_0;
struct t52;
extern CustomAttributesCache t52__CustomAttributeCache_U3CDeltaSwapJewelsU3Ek__BackingField;
extern CustomAttributesCache t52__CustomAttributeCache_U3CRestartGameU3Ek__BackingField;
extern CustomAttributesCache t52__CustomAttributeCache_U3CPauseGameU3Ek__BackingField;
extern CustomAttributesCache t52__CustomAttributeCache_U3CGameStartedU3Ek__BackingField;
extern CustomAttributesCache t52__CustomAttributeCache_U3CChangeDifficultyU3Ek__BackingField;
extern CustomAttributesCache t52__CustomAttributeCache_U3CSaveGameU3Ek__BackingField;
extern CustomAttributesCache t52__CustomAttributeCache_U3CLoadGameU3Ek__BackingField;
extern CustomAttributesCache t52__CustomAttributeCache_m203;
extern CustomAttributesCache t52__CustomAttributeCache_m204;
extern CustomAttributesCache t52__CustomAttributeCache_m205;
extern CustomAttributesCache t52__CustomAttributeCache_m206;
extern CustomAttributesCache t52__CustomAttributeCache_m207;
extern CustomAttributesCache t52__CustomAttributeCache_m208;
extern CustomAttributesCache t52__CustomAttributeCache_m209;
extern CustomAttributesCache t52__CustomAttributeCache_m210;
extern CustomAttributesCache t52__CustomAttributeCache_m211;
extern CustomAttributesCache t52__CustomAttributeCache_m212;
extern CustomAttributesCache t52__CustomAttributeCache_m213;
extern CustomAttributesCache t52__CustomAttributeCache_m214;
extern CustomAttributesCache t52__CustomAttributeCache_m215;
extern CustomAttributesCache t52__CustomAttributeCache_m216;
TypeInfo t52_TI = 
{
	&g_AssemblyU2DCSharp_dll_Image, NULL, "GameLogicInput", "JewelMine.Engine.Models", t52_MIs, t52_PIs, t52_FIs, NULL, &t5_TI, NULL, NULL, &t52_TI, NULL, t52_VT, &EmptyCustomAttributesCache, &t52_TI, &t52_0_0_0, &t52_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t52), 0, -1, 0, 0, -1, 1048577, 0, false, false, false, false, false, false, false, false, false, false, false, false, 16, 7, 8, 0, 0, 4, 0, 0};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m651_MI;
extern MethodInfo m219_MI;
extern MethodInfo m221_MI;
extern MethodInfo m223_MI;
extern MethodInfo m652_MI;
extern MethodInfo m225_MI;
extern MethodInfo m653_MI;
extern MethodInfo m247_MI;


 void m217 (t6 * __this, MethodInfo* method){
	{
		m460(__this, &m460_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t64_TI));
		t64 * L_0 = (t64 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t64_TI));
		m651(L_0, &m651_MI);
		m219(__this, L_0, &m219_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t65_TI));
		t65 * L_1 = (t65 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t65_TI));
		m529(L_1, &m529_MI);
		m221(__this, L_1, &m221_MI);
		t65 * L_2 = (t65 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t65_TI));
		m529(L_2, &m529_MI);
		m223(__this, L_2, &m223_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t66_TI));
		t66 * L_3 = (t66 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t66_TI));
		m652(L_3, &m652_MI);
		m225(__this, L_3, &m225_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t67_TI));
		t67 * L_4 = (t67 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t67_TI));
		m653(L_4, &m653_MI);
		m247(__this, L_4, &m247_MI);
		return;
	}
}
 t64 * m218 (t6 * __this, MethodInfo* method){
	{
		t64 * L_0 = (__this->f0);
		return L_0;
	}
}
 void m219 (t6 * __this, t64 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		return;
	}
}
 t65 * m220 (t6 * __this, MethodInfo* method){
	{
		t65 * L_0 = (__this->f1);
		return L_0;
	}
}
 void m221 (t6 * __this, t65 * p0, MethodInfo* method){
	{
		__this->f1 = p0;
		return;
	}
}
 t65 * m222 (t6 * __this, MethodInfo* method){
	{
		t65 * L_0 = (__this->f2);
		return L_0;
	}
}
 void m223 (t6 * __this, t65 * p0, MethodInfo* method){
	{
		__this->f2 = p0;
		return;
	}
}
 t66 * m224 (t6 * __this, MethodInfo* method){
	{
		t66 * L_0 = (__this->f3);
		return L_0;
	}
}
 void m225 (t6 * __this, t66 * p0, MethodInfo* method){
	{
		__this->f3 = p0;
		return;
	}
}
 bool m226 (t6 * __this, MethodInfo* method){
	{
		bool L_0 = (__this->f4);
		return L_0;
	}
}
 void m227 (t6 * __this, bool p0, MethodInfo* method){
	{
		__this->f4 = p0;
		return;
	}
}
 bool m228 (t6 * __this, MethodInfo* method){
	{
		bool L_0 = (__this->f5);
		return L_0;
	}
}
 void m229 (t6 * __this, bool p0, MethodInfo* method){
	{
		__this->f5 = p0;
		return;
	}
}
 bool m230 (t6 * __this, MethodInfo* method){
	{
		bool L_0 = (__this->f6);
		return L_0;
	}
}
 void m231 (t6 * __this, bool p0, MethodInfo* method){
	{
		__this->f6 = p0;
		return;
	}
}
extern MethodInfo m232_MI;
 bool m232 (t6 * __this, MethodInfo* method){
	{
		bool L_0 = (__this->f7);
		return L_0;
	}
}
 void m233 (t6 * __this, bool p0, MethodInfo* method){
	{
		__this->f7 = p0;
		return;
	}
}
extern MethodInfo m234_MI;
 bool m234 (t6 * __this, MethodInfo* method){
	{
		bool L_0 = (__this->f8);
		return L_0;
	}
}
 void m235 (t6 * __this, bool p0, MethodInfo* method){
	{
		__this->f8 = p0;
		return;
	}
}
extern MethodInfo m236_MI;
 bool m236 (t6 * __this, MethodInfo* method){
	{
		bool L_0 = (__this->f9);
		return L_0;
	}
}
 void m237 (t6 * __this, bool p0, MethodInfo* method){
	{
		__this->f9 = p0;
		return;
	}
}
extern MethodInfo m238_MI;
 bool m238 (t6 * __this, MethodInfo* method){
	{
		bool L_0 = (__this->f10);
		return L_0;
	}
}
 void m239 (t6 * __this, bool p0, MethodInfo* method){
	{
		__this->f10 = p0;
		return;
	}
}
extern MethodInfo m240_MI;
 bool m240 (t6 * __this, MethodInfo* method){
	{
		bool L_0 = (__this->f11);
		return L_0;
	}
}
 void m241 (t6 * __this, bool p0, MethodInfo* method){
	{
		__this->f11 = p0;
		return;
	}
}
extern MethodInfo m242_MI;
 bool m242 (t6 * __this, MethodInfo* method){
	{
		bool L_0 = (__this->f12);
		return L_0;
	}
}
 void m243 (t6 * __this, bool p0, MethodInfo* method){
	{
		__this->f12 = p0;
		return;
	}
}
extern MethodInfo m244_MI;
 bool m244 (t6 * __this, MethodInfo* method){
	{
		bool L_0 = (__this->f13);
		return L_0;
	}
}
 void m245 (t6 * __this, bool p0, MethodInfo* method){
	{
		__this->f13 = p0;
		return;
	}
}
 t67 * m246 (t6 * __this, MethodInfo* method){
	{
		t67 * L_0 = (__this->f14);
		return L_0;
	}
}
 void m247 (t6 * __this, t67 * p0, MethodInfo* method){
	{
		__this->f14 = p0;
		return;
	}
}
// Metadata Definition JewelMine.Engine.Models.GameLogicUpdate
extern Il2CppType t64_0_0_1;
extern CustomAttributesCache t6__CustomAttributeCache_U3CJewelMovementsU3Ek__BackingField;
FieldInfo t6_f0_FieldInfo = 
{
	"<JewelMovements>k__BackingField", &t64_0_0_1, &t6_TI, offsetof(t6, f0), &t6__CustomAttributeCache_U3CJewelMovementsU3Ek__BackingField};
extern Il2CppType t65_0_0_1;
extern CustomAttributesCache t6__CustomAttributeCache_U3CCollisionsU3Ek__BackingField;
FieldInfo t6_f1_FieldInfo = 
{
	"<Collisions>k__BackingField", &t65_0_0_1, &t6_TI, offsetof(t6, f1), &t6__CustomAttributeCache_U3CCollisionsU3Ek__BackingField};
extern Il2CppType t65_0_0_1;
extern CustomAttributesCache t6__CustomAttributeCache_U3CInvalidCollisionsU3Ek__BackingField;
FieldInfo t6_f2_FieldInfo = 
{
	"<InvalidCollisions>k__BackingField", &t65_0_0_1, &t6_TI, offsetof(t6, f2), &t6__CustomAttributeCache_U3CInvalidCollisionsU3Ek__BackingField};
extern Il2CppType t66_0_0_1;
extern CustomAttributesCache t6__CustomAttributeCache_U3CFinalisedCollisionsU3Ek__BackingField;
FieldInfo t6_f3_FieldInfo = 
{
	"<FinalisedCollisions>k__BackingField", &t66_0_0_1, &t6_TI, offsetof(t6, f3), &t6__CustomAttributeCache_U3CFinalisedCollisionsU3Ek__BackingField};
extern Il2CppType t108_0_0_1;
extern CustomAttributesCache t6__CustomAttributeCache_U3CDeltaStationaryU3Ek__BackingField;
FieldInfo t6_f4_FieldInfo = 
{
	"<DeltaStationary>k__BackingField", &t108_0_0_1, &t6_TI, offsetof(t6, f4), &t6__CustomAttributeCache_U3CDeltaStationaryU3Ek__BackingField};
extern Il2CppType t108_0_0_1;
extern CustomAttributesCache t6__CustomAttributeCache_U3CDeltaJewelsSwappedU3Ek__BackingField;
FieldInfo t6_f5_FieldInfo = 
{
	"<DeltaJewelsSwapped>k__BackingField", &t108_0_0_1, &t6_TI, offsetof(t6, f5), &t6__CustomAttributeCache_U3CDeltaJewelsSwappedU3Ek__BackingField};
extern Il2CppType t108_0_0_1;
extern CustomAttributesCache t6__CustomAttributeCache_U3CLevelIncrementedU3Ek__BackingField;
FieldInfo t6_f6_FieldInfo = 
{
	"<LevelIncremented>k__BackingField", &t108_0_0_1, &t6_TI, offsetof(t6, f6), &t6__CustomAttributeCache_U3CLevelIncrementedU3Ek__BackingField};
extern Il2CppType t108_0_0_1;
extern CustomAttributesCache t6__CustomAttributeCache_U3CGameLoadedU3Ek__BackingField;
FieldInfo t6_f7_FieldInfo = 
{
	"<GameLoaded>k__BackingField", &t108_0_0_1, &t6_TI, offsetof(t6, f7), &t6__CustomAttributeCache_U3CGameLoadedU3Ek__BackingField};
extern Il2CppType t108_0_0_1;
extern CustomAttributesCache t6__CustomAttributeCache_U3CGameStartedU3Ek__BackingField;
FieldInfo t6_f8_FieldInfo = 
{
	"<GameStarted>k__BackingField", &t108_0_0_1, &t6_TI, offsetof(t6, f8), &t6__CustomAttributeCache_U3CGameStartedU3Ek__BackingField};
extern Il2CppType t108_0_0_1;
extern CustomAttributesCache t6__CustomAttributeCache_U3CGameWonU3Ek__BackingField;
FieldInfo t6_f9_FieldInfo = 
{
	"<GameWon>k__BackingField", &t108_0_0_1, &t6_TI, offsetof(t6, f9), &t6__CustomAttributeCache_U3CGameWonU3Ek__BackingField};
extern Il2CppType t108_0_0_1;
extern CustomAttributesCache t6__CustomAttributeCache_U3CGamePausedU3Ek__BackingField;
FieldInfo t6_f10_FieldInfo = 
{
	"<GamePaused>k__BackingField", &t108_0_0_1, &t6_TI, offsetof(t6, f10), &t6__CustomAttributeCache_U3CGamePausedU3Ek__BackingField};
extern Il2CppType t108_0_0_1;
extern CustomAttributesCache t6__CustomAttributeCache_U3CGameOverU3Ek__BackingField;
FieldInfo t6_f11_FieldInfo = 
{
	"<GameOver>k__BackingField", &t108_0_0_1, &t6_TI, offsetof(t6, f11), &t6__CustomAttributeCache_U3CGameOverU3Ek__BackingField};
extern Il2CppType t108_0_0_1;
extern CustomAttributesCache t6__CustomAttributeCache_U3CGameWasRestartedU3Ek__BackingField;
FieldInfo t6_f12_FieldInfo = 
{
	"<GameWasRestarted>k__BackingField", &t108_0_0_1, &t6_TI, offsetof(t6, f12), &t6__CustomAttributeCache_U3CGameWasRestartedU3Ek__BackingField};
extern Il2CppType t108_0_0_1;
extern CustomAttributesCache t6__CustomAttributeCache_U3CDifficultyChangedU3Ek__BackingField;
FieldInfo t6_f13_FieldInfo = 
{
	"<DifficultyChanged>k__BackingField", &t108_0_0_1, &t6_TI, offsetof(t6, f13), &t6__CustomAttributeCache_U3CDifficultyChangedU3Ek__BackingField};
extern Il2CppType t67_0_0_1;
extern CustomAttributesCache t6__CustomAttributeCache_U3CMessagesU3Ek__BackingField;
FieldInfo t6_f14_FieldInfo = 
{
	"<Messages>k__BackingField", &t67_0_0_1, &t6_TI, offsetof(t6, f14), &t6__CustomAttributeCache_U3CMessagesU3Ek__BackingField};
static FieldInfo* t6_FIs[] =
{
	&t6_f0_FieldInfo,
	&t6_f1_FieldInfo,
	&t6_f2_FieldInfo,
	&t6_f3_FieldInfo,
	&t6_f4_FieldInfo,
	&t6_f5_FieldInfo,
	&t6_f6_FieldInfo,
	&t6_f7_FieldInfo,
	&t6_f8_FieldInfo,
	&t6_f9_FieldInfo,
	&t6_f10_FieldInfo,
	&t6_f11_FieldInfo,
	&t6_f12_FieldInfo,
	&t6_f13_FieldInfo,
	&t6_f14_FieldInfo,
	NULL
};
static PropertyInfo t6____JewelMovements_PropertyInfo = 
{
	&t6_TI, "JewelMovements", &m218_MI, &m219_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo t6____Collisions_PropertyInfo = 
{
	&t6_TI, "Collisions", &m220_MI, &m221_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo t6____InvalidCollisions_PropertyInfo = 
{
	&t6_TI, "InvalidCollisions", &m222_MI, &m223_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo t6____FinalisedCollisions_PropertyInfo = 
{
	&t6_TI, "FinalisedCollisions", &m224_MI, &m225_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo t6____DeltaStationary_PropertyInfo = 
{
	&t6_TI, "DeltaStationary", &m226_MI, &m227_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo t6____DeltaJewelsSwapped_PropertyInfo = 
{
	&t6_TI, "DeltaJewelsSwapped", &m228_MI, &m229_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo t6____LevelIncremented_PropertyInfo = 
{
	&t6_TI, "LevelIncremented", &m230_MI, &m231_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo t6____GameLoaded_PropertyInfo = 
{
	&t6_TI, "GameLoaded", &m232_MI, &m233_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo t6____GameStarted_PropertyInfo = 
{
	&t6_TI, "GameStarted", &m234_MI, &m235_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo t6____GameWon_PropertyInfo = 
{
	&t6_TI, "GameWon", &m236_MI, &m237_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo t6____GamePaused_PropertyInfo = 
{
	&t6_TI, "GamePaused", &m238_MI, &m239_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo t6____GameOver_PropertyInfo = 
{
	&t6_TI, "GameOver", &m240_MI, &m241_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo t6____GameWasRestarted_PropertyInfo = 
{
	&t6_TI, "GameWasRestarted", &m242_MI, &m243_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo t6____DifficultyChanged_PropertyInfo = 
{
	&t6_TI, "DifficultyChanged", &m244_MI, &m245_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo t6____Messages_PropertyInfo = 
{
	&t6_TI, "Messages", &m246_MI, &m247_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t6_PIs[] =
{
	&t6____JewelMovements_PropertyInfo,
	&t6____Collisions_PropertyInfo,
	&t6____InvalidCollisions_PropertyInfo,
	&t6____FinalisedCollisions_PropertyInfo,
	&t6____DeltaStationary_PropertyInfo,
	&t6____DeltaJewelsSwapped_PropertyInfo,
	&t6____LevelIncremented_PropertyInfo,
	&t6____GameLoaded_PropertyInfo,
	&t6____GameStarted_PropertyInfo,
	&t6____GameWon_PropertyInfo,
	&t6____GamePaused_PropertyInfo,
	&t6____GameOver_PropertyInfo,
	&t6____GameWasRestarted_PropertyInfo,
	&t6____DifficultyChanged_PropertyInfo,
	&t6____Messages_PropertyInfo,
	NULL
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m217_MI = 
{
	".ctor", (methodPointerType)&m217, &t6_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 243, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t64_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t6__CustomAttributeCache_m218;
MethodInfo m218_MI = 
{
	"get_JewelMovements", (methodPointerType)&m218, &t6_TI, &t64_0_0_0, RuntimeInvoker_t5, NULL, &t6__CustomAttributeCache_m218, 2182, 0, 255, 0, false, false, 244, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t64_0_0_0;
extern Il2CppType t64_0_0_0;
static ParameterInfo t6_m219_ParameterInfos[] = 
{
	{"value", 0, 134217930, &EmptyCustomAttributesCache, &t64_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t6__CustomAttributeCache_m219;
MethodInfo m219_MI = 
{
	"set_JewelMovements", (methodPointerType)&m219, &t6_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t6_m219_ParameterInfos, &t6__CustomAttributeCache_m219, 2177, 0, 255, 1, false, false, 245, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t65_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t6__CustomAttributeCache_m220;
MethodInfo m220_MI = 
{
	"get_Collisions", (methodPointerType)&m220, &t6_TI, &t65_0_0_0, RuntimeInvoker_t5, NULL, &t6__CustomAttributeCache_m220, 2182, 0, 255, 0, false, false, 246, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t65_0_0_0;
extern Il2CppType t65_0_0_0;
static ParameterInfo t6_m221_ParameterInfos[] = 
{
	{"value", 0, 134217931, &EmptyCustomAttributesCache, &t65_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t6__CustomAttributeCache_m221;
MethodInfo m221_MI = 
{
	"set_Collisions", (methodPointerType)&m221, &t6_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t6_m221_ParameterInfos, &t6__CustomAttributeCache_m221, 2177, 0, 255, 1, false, false, 247, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t65_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t6__CustomAttributeCache_m222;
MethodInfo m222_MI = 
{
	"get_InvalidCollisions", (methodPointerType)&m222, &t6_TI, &t65_0_0_0, RuntimeInvoker_t5, NULL, &t6__CustomAttributeCache_m222, 2182, 0, 255, 0, false, false, 248, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t65_0_0_0;
static ParameterInfo t6_m223_ParameterInfos[] = 
{
	{"value", 0, 134217932, &EmptyCustomAttributesCache, &t65_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t6__CustomAttributeCache_m223;
MethodInfo m223_MI = 
{
	"set_InvalidCollisions", (methodPointerType)&m223, &t6_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t6_m223_ParameterInfos, &t6__CustomAttributeCache_m223, 2177, 0, 255, 1, false, false, 249, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t66_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t6__CustomAttributeCache_m224;
MethodInfo m224_MI = 
{
	"get_FinalisedCollisions", (methodPointerType)&m224, &t6_TI, &t66_0_0_0, RuntimeInvoker_t5, NULL, &t6__CustomAttributeCache_m224, 2182, 0, 255, 0, false, false, 250, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t66_0_0_0;
extern Il2CppType t66_0_0_0;
static ParameterInfo t6_m225_ParameterInfos[] = 
{
	{"value", 0, 134217933, &EmptyCustomAttributesCache, &t66_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t6__CustomAttributeCache_m225;
MethodInfo m225_MI = 
{
	"set_FinalisedCollisions", (methodPointerType)&m225, &t6_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t6_m225_ParameterInfos, &t6__CustomAttributeCache_m225, 2177, 0, 255, 1, false, false, 251, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t6__CustomAttributeCache_m226;
MethodInfo m226_MI = 
{
	"get_DeltaStationary", (methodPointerType)&m226, &t6_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &t6__CustomAttributeCache_m226, 2182, 0, 255, 0, false, false, 252, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t108_0_0_0;
static ParameterInfo t6_m227_ParameterInfos[] = 
{
	{"value", 0, 134217934, &EmptyCustomAttributesCache, &t108_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t111 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t6__CustomAttributeCache_m227;
MethodInfo m227_MI = 
{
	"set_DeltaStationary", (methodPointerType)&m227, &t6_TI, &t109_0_0_0, RuntimeInvoker_t109_t111, t6_m227_ParameterInfos, &t6__CustomAttributeCache_m227, 2182, 0, 255, 1, false, false, 253, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t6__CustomAttributeCache_m228;
MethodInfo m228_MI = 
{
	"get_DeltaJewelsSwapped", (methodPointerType)&m228, &t6_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &t6__CustomAttributeCache_m228, 2182, 0, 255, 0, false, false, 254, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t108_0_0_0;
static ParameterInfo t6_m229_ParameterInfos[] = 
{
	{"value", 0, 134217935, &EmptyCustomAttributesCache, &t108_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t111 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t6__CustomAttributeCache_m229;
MethodInfo m229_MI = 
{
	"set_DeltaJewelsSwapped", (methodPointerType)&m229, &t6_TI, &t109_0_0_0, RuntimeInvoker_t109_t111, t6_m229_ParameterInfos, &t6__CustomAttributeCache_m229, 2182, 0, 255, 1, false, false, 255, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t6__CustomAttributeCache_m230;
MethodInfo m230_MI = 
{
	"get_LevelIncremented", (methodPointerType)&m230, &t6_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &t6__CustomAttributeCache_m230, 2182, 0, 255, 0, false, false, 256, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t108_0_0_0;
static ParameterInfo t6_m231_ParameterInfos[] = 
{
	{"value", 0, 134217936, &EmptyCustomAttributesCache, &t108_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t111 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t6__CustomAttributeCache_m231;
MethodInfo m231_MI = 
{
	"set_LevelIncremented", (methodPointerType)&m231, &t6_TI, &t109_0_0_0, RuntimeInvoker_t109_t111, t6_m231_ParameterInfos, &t6__CustomAttributeCache_m231, 2182, 0, 255, 1, false, false, 257, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t6__CustomAttributeCache_m232;
MethodInfo m232_MI = 
{
	"get_GameLoaded", (methodPointerType)&m232, &t6_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &t6__CustomAttributeCache_m232, 2182, 0, 255, 0, false, false, 258, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t108_0_0_0;
static ParameterInfo t6_m233_ParameterInfos[] = 
{
	{"value", 0, 134217937, &EmptyCustomAttributesCache, &t108_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t111 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t6__CustomAttributeCache_m233;
MethodInfo m233_MI = 
{
	"set_GameLoaded", (methodPointerType)&m233, &t6_TI, &t109_0_0_0, RuntimeInvoker_t109_t111, t6_m233_ParameterInfos, &t6__CustomAttributeCache_m233, 2182, 0, 255, 1, false, false, 259, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t6__CustomAttributeCache_m234;
MethodInfo m234_MI = 
{
	"get_GameStarted", (methodPointerType)&m234, &t6_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &t6__CustomAttributeCache_m234, 2182, 0, 255, 0, false, false, 260, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t108_0_0_0;
static ParameterInfo t6_m235_ParameterInfos[] = 
{
	{"value", 0, 134217938, &EmptyCustomAttributesCache, &t108_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t111 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t6__CustomAttributeCache_m235;
MethodInfo m235_MI = 
{
	"set_GameStarted", (methodPointerType)&m235, &t6_TI, &t109_0_0_0, RuntimeInvoker_t109_t111, t6_m235_ParameterInfos, &t6__CustomAttributeCache_m235, 2182, 0, 255, 1, false, false, 261, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t6__CustomAttributeCache_m236;
MethodInfo m236_MI = 
{
	"get_GameWon", (methodPointerType)&m236, &t6_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &t6__CustomAttributeCache_m236, 2182, 0, 255, 0, false, false, 262, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t108_0_0_0;
static ParameterInfo t6_m237_ParameterInfos[] = 
{
	{"value", 0, 134217939, &EmptyCustomAttributesCache, &t108_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t111 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t6__CustomAttributeCache_m237;
MethodInfo m237_MI = 
{
	"set_GameWon", (methodPointerType)&m237, &t6_TI, &t109_0_0_0, RuntimeInvoker_t109_t111, t6_m237_ParameterInfos, &t6__CustomAttributeCache_m237, 2182, 0, 255, 1, false, false, 263, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t6__CustomAttributeCache_m238;
MethodInfo m238_MI = 
{
	"get_GamePaused", (methodPointerType)&m238, &t6_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &t6__CustomAttributeCache_m238, 2182, 0, 255, 0, false, false, 264, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t108_0_0_0;
static ParameterInfo t6_m239_ParameterInfos[] = 
{
	{"value", 0, 134217940, &EmptyCustomAttributesCache, &t108_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t111 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t6__CustomAttributeCache_m239;
MethodInfo m239_MI = 
{
	"set_GamePaused", (methodPointerType)&m239, &t6_TI, &t109_0_0_0, RuntimeInvoker_t109_t111, t6_m239_ParameterInfos, &t6__CustomAttributeCache_m239, 2182, 0, 255, 1, false, false, 265, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t6__CustomAttributeCache_m240;
MethodInfo m240_MI = 
{
	"get_GameOver", (methodPointerType)&m240, &t6_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &t6__CustomAttributeCache_m240, 2182, 0, 255, 0, false, false, 266, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t108_0_0_0;
static ParameterInfo t6_m241_ParameterInfos[] = 
{
	{"value", 0, 134217941, &EmptyCustomAttributesCache, &t108_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t111 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t6__CustomAttributeCache_m241;
MethodInfo m241_MI = 
{
	"set_GameOver", (methodPointerType)&m241, &t6_TI, &t109_0_0_0, RuntimeInvoker_t109_t111, t6_m241_ParameterInfos, &t6__CustomAttributeCache_m241, 2182, 0, 255, 1, false, false, 267, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t6__CustomAttributeCache_m242;
MethodInfo m242_MI = 
{
	"get_GameWasRestarted", (methodPointerType)&m242, &t6_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &t6__CustomAttributeCache_m242, 2182, 0, 255, 0, false, false, 268, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t108_0_0_0;
static ParameterInfo t6_m243_ParameterInfos[] = 
{
	{"value", 0, 134217942, &EmptyCustomAttributesCache, &t108_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t111 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t6__CustomAttributeCache_m243;
MethodInfo m243_MI = 
{
	"set_GameWasRestarted", (methodPointerType)&m243, &t6_TI, &t109_0_0_0, RuntimeInvoker_t109_t111, t6_m243_ParameterInfos, &t6__CustomAttributeCache_m243, 2182, 0, 255, 1, false, false, 269, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t6__CustomAttributeCache_m244;
MethodInfo m244_MI = 
{
	"get_DifficultyChanged", (methodPointerType)&m244, &t6_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &t6__CustomAttributeCache_m244, 2182, 0, 255, 0, false, false, 270, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t108_0_0_0;
static ParameterInfo t6_m245_ParameterInfos[] = 
{
	{"value", 0, 134217943, &EmptyCustomAttributesCache, &t108_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t111 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t6__CustomAttributeCache_m245;
MethodInfo m245_MI = 
{
	"set_DifficultyChanged", (methodPointerType)&m245, &t6_TI, &t109_0_0_0, RuntimeInvoker_t109_t111, t6_m245_ParameterInfos, &t6__CustomAttributeCache_m245, 2182, 0, 255, 1, false, false, 271, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t67_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t6__CustomAttributeCache_m246;
MethodInfo m246_MI = 
{
	"get_Messages", (methodPointerType)&m246, &t6_TI, &t67_0_0_0, RuntimeInvoker_t5, NULL, &t6__CustomAttributeCache_m246, 2182, 0, 255, 0, false, false, 272, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t67_0_0_0;
extern Il2CppType t67_0_0_0;
static ParameterInfo t6_m247_ParameterInfos[] = 
{
	{"value", 0, 134217944, &EmptyCustomAttributesCache, &t67_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t6__CustomAttributeCache_m247;
MethodInfo m247_MI = 
{
	"set_Messages", (methodPointerType)&m247, &t6_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t6_m247_ParameterInfos, &t6__CustomAttributeCache_m247, 2182, 0, 255, 1, false, false, 273, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t6_MIs[] =
{
	&m217_MI,
	&m218_MI,
	&m219_MI,
	&m220_MI,
	&m221_MI,
	&m222_MI,
	&m223_MI,
	&m224_MI,
	&m225_MI,
	&m226_MI,
	&m227_MI,
	&m228_MI,
	&m229_MI,
	&m230_MI,
	&m231_MI,
	&m232_MI,
	&m233_MI,
	&m234_MI,
	&m235_MI,
	&m236_MI,
	&m237_MI,
	&m238_MI,
	&m239_MI,
	&m240_MI,
	&m241_MI,
	&m242_MI,
	&m243_MI,
	&m244_MI,
	&m245_MI,
	&m246_MI,
	&m247_MI,
	NULL
};
static MethodInfo* t6_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
};
void t6_CustomAttributesCacheGenerator_U3CJewelMovementsU3Ek__BackingField(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t6_CustomAttributesCacheGenerator_U3CCollisionsU3Ek__BackingField(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t6_CustomAttributesCacheGenerator_U3CInvalidCollisionsU3Ek__BackingField(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t6_CustomAttributesCacheGenerator_U3CFinalisedCollisionsU3Ek__BackingField(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t6_CustomAttributesCacheGenerator_U3CDeltaStationaryU3Ek__BackingField(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t6_CustomAttributesCacheGenerator_U3CDeltaJewelsSwappedU3Ek__BackingField(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t6_CustomAttributesCacheGenerator_U3CLevelIncrementedU3Ek__BackingField(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t6_CustomAttributesCacheGenerator_U3CGameLoadedU3Ek__BackingField(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t6_CustomAttributesCacheGenerator_U3CGameStartedU3Ek__BackingField(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t6_CustomAttributesCacheGenerator_U3CGameWonU3Ek__BackingField(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t6_CustomAttributesCacheGenerator_U3CGamePausedU3Ek__BackingField(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t6_CustomAttributesCacheGenerator_U3CGameOverU3Ek__BackingField(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t6_CustomAttributesCacheGenerator_U3CGameWasRestartedU3Ek__BackingField(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t6_CustomAttributesCacheGenerator_U3CDifficultyChangedU3Ek__BackingField(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t6_CustomAttributesCacheGenerator_U3CMessagesU3Ek__BackingField(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t6_CustomAttributesCacheGenerator_m218(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t6_CustomAttributesCacheGenerator_m219(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t6_CustomAttributesCacheGenerator_m220(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t6_CustomAttributesCacheGenerator_m221(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t6_CustomAttributesCacheGenerator_m222(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t6_CustomAttributesCacheGenerator_m223(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t6_CustomAttributesCacheGenerator_m224(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t6_CustomAttributesCacheGenerator_m225(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t6_CustomAttributesCacheGenerator_m226(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t6_CustomAttributesCacheGenerator_m227(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t6_CustomAttributesCacheGenerator_m228(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t6_CustomAttributesCacheGenerator_m229(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t6_CustomAttributesCacheGenerator_m230(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t6_CustomAttributesCacheGenerator_m231(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t6_CustomAttributesCacheGenerator_m232(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t6_CustomAttributesCacheGenerator_m233(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t6_CustomAttributesCacheGenerator_m234(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t6_CustomAttributesCacheGenerator_m235(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t6_CustomAttributesCacheGenerator_m236(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t6_CustomAttributesCacheGenerator_m237(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t6_CustomAttributesCacheGenerator_m238(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t6_CustomAttributesCacheGenerator_m239(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t6_CustomAttributesCacheGenerator_m240(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t6_CustomAttributesCacheGenerator_m241(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t6_CustomAttributesCacheGenerator_m242(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t6_CustomAttributesCacheGenerator_m243(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t6_CustomAttributesCacheGenerator_m244(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t6_CustomAttributesCacheGenerator_m245(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t6_CustomAttributesCacheGenerator_m246(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t6_CustomAttributesCacheGenerator_m247(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t6__CustomAttributeCache_U3CJewelMovementsU3Ek__BackingField = {
1,
NULL,
&t6_CustomAttributesCacheGenerator_U3CJewelMovementsU3Ek__BackingField
};
CustomAttributesCache t6__CustomAttributeCache_U3CCollisionsU3Ek__BackingField = {
1,
NULL,
&t6_CustomAttributesCacheGenerator_U3CCollisionsU3Ek__BackingField
};
CustomAttributesCache t6__CustomAttributeCache_U3CInvalidCollisionsU3Ek__BackingField = {
1,
NULL,
&t6_CustomAttributesCacheGenerator_U3CInvalidCollisionsU3Ek__BackingField
};
CustomAttributesCache t6__CustomAttributeCache_U3CFinalisedCollisionsU3Ek__BackingField = {
1,
NULL,
&t6_CustomAttributesCacheGenerator_U3CFinalisedCollisionsU3Ek__BackingField
};
CustomAttributesCache t6__CustomAttributeCache_U3CDeltaStationaryU3Ek__BackingField = {
1,
NULL,
&t6_CustomAttributesCacheGenerator_U3CDeltaStationaryU3Ek__BackingField
};
CustomAttributesCache t6__CustomAttributeCache_U3CDeltaJewelsSwappedU3Ek__BackingField = {
1,
NULL,
&t6_CustomAttributesCacheGenerator_U3CDeltaJewelsSwappedU3Ek__BackingField
};
CustomAttributesCache t6__CustomAttributeCache_U3CLevelIncrementedU3Ek__BackingField = {
1,
NULL,
&t6_CustomAttributesCacheGenerator_U3CLevelIncrementedU3Ek__BackingField
};
CustomAttributesCache t6__CustomAttributeCache_U3CGameLoadedU3Ek__BackingField = {
1,
NULL,
&t6_CustomAttributesCacheGenerator_U3CGameLoadedU3Ek__BackingField
};
CustomAttributesCache t6__CustomAttributeCache_U3CGameStartedU3Ek__BackingField = {
1,
NULL,
&t6_CustomAttributesCacheGenerator_U3CGameStartedU3Ek__BackingField
};
CustomAttributesCache t6__CustomAttributeCache_U3CGameWonU3Ek__BackingField = {
1,
NULL,
&t6_CustomAttributesCacheGenerator_U3CGameWonU3Ek__BackingField
};
CustomAttributesCache t6__CustomAttributeCache_U3CGamePausedU3Ek__BackingField = {
1,
NULL,
&t6_CustomAttributesCacheGenerator_U3CGamePausedU3Ek__BackingField
};
CustomAttributesCache t6__CustomAttributeCache_U3CGameOverU3Ek__BackingField = {
1,
NULL,
&t6_CustomAttributesCacheGenerator_U3CGameOverU3Ek__BackingField
};
CustomAttributesCache t6__CustomAttributeCache_U3CGameWasRestartedU3Ek__BackingField = {
1,
NULL,
&t6_CustomAttributesCacheGenerator_U3CGameWasRestartedU3Ek__BackingField
};
CustomAttributesCache t6__CustomAttributeCache_U3CDifficultyChangedU3Ek__BackingField = {
1,
NULL,
&t6_CustomAttributesCacheGenerator_U3CDifficultyChangedU3Ek__BackingField
};
CustomAttributesCache t6__CustomAttributeCache_U3CMessagesU3Ek__BackingField = {
1,
NULL,
&t6_CustomAttributesCacheGenerator_U3CMessagesU3Ek__BackingField
};
CustomAttributesCache t6__CustomAttributeCache_m218 = {
1,
NULL,
&t6_CustomAttributesCacheGenerator_m218
};
CustomAttributesCache t6__CustomAttributeCache_m219 = {
1,
NULL,
&t6_CustomAttributesCacheGenerator_m219
};
CustomAttributesCache t6__CustomAttributeCache_m220 = {
1,
NULL,
&t6_CustomAttributesCacheGenerator_m220
};
CustomAttributesCache t6__CustomAttributeCache_m221 = {
1,
NULL,
&t6_CustomAttributesCacheGenerator_m221
};
CustomAttributesCache t6__CustomAttributeCache_m222 = {
1,
NULL,
&t6_CustomAttributesCacheGenerator_m222
};
CustomAttributesCache t6__CustomAttributeCache_m223 = {
1,
NULL,
&t6_CustomAttributesCacheGenerator_m223
};
CustomAttributesCache t6__CustomAttributeCache_m224 = {
1,
NULL,
&t6_CustomAttributesCacheGenerator_m224
};
CustomAttributesCache t6__CustomAttributeCache_m225 = {
1,
NULL,
&t6_CustomAttributesCacheGenerator_m225
};
CustomAttributesCache t6__CustomAttributeCache_m226 = {
1,
NULL,
&t6_CustomAttributesCacheGenerator_m226
};
CustomAttributesCache t6__CustomAttributeCache_m227 = {
1,
NULL,
&t6_CustomAttributesCacheGenerator_m227
};
CustomAttributesCache t6__CustomAttributeCache_m228 = {
1,
NULL,
&t6_CustomAttributesCacheGenerator_m228
};
CustomAttributesCache t6__CustomAttributeCache_m229 = {
1,
NULL,
&t6_CustomAttributesCacheGenerator_m229
};
CustomAttributesCache t6__CustomAttributeCache_m230 = {
1,
NULL,
&t6_CustomAttributesCacheGenerator_m230
};
CustomAttributesCache t6__CustomAttributeCache_m231 = {
1,
NULL,
&t6_CustomAttributesCacheGenerator_m231
};
CustomAttributesCache t6__CustomAttributeCache_m232 = {
1,
NULL,
&t6_CustomAttributesCacheGenerator_m232
};
CustomAttributesCache t6__CustomAttributeCache_m233 = {
1,
NULL,
&t6_CustomAttributesCacheGenerator_m233
};
CustomAttributesCache t6__CustomAttributeCache_m234 = {
1,
NULL,
&t6_CustomAttributesCacheGenerator_m234
};
CustomAttributesCache t6__CustomAttributeCache_m235 = {
1,
NULL,
&t6_CustomAttributesCacheGenerator_m235
};
CustomAttributesCache t6__CustomAttributeCache_m236 = {
1,
NULL,
&t6_CustomAttributesCacheGenerator_m236
};
CustomAttributesCache t6__CustomAttributeCache_m237 = {
1,
NULL,
&t6_CustomAttributesCacheGenerator_m237
};
CustomAttributesCache t6__CustomAttributeCache_m238 = {
1,
NULL,
&t6_CustomAttributesCacheGenerator_m238
};
CustomAttributesCache t6__CustomAttributeCache_m239 = {
1,
NULL,
&t6_CustomAttributesCacheGenerator_m239
};
CustomAttributesCache t6__CustomAttributeCache_m240 = {
1,
NULL,
&t6_CustomAttributesCacheGenerator_m240
};
CustomAttributesCache t6__CustomAttributeCache_m241 = {
1,
NULL,
&t6_CustomAttributesCacheGenerator_m241
};
CustomAttributesCache t6__CustomAttributeCache_m242 = {
1,
NULL,
&t6_CustomAttributesCacheGenerator_m242
};
CustomAttributesCache t6__CustomAttributeCache_m243 = {
1,
NULL,
&t6_CustomAttributesCacheGenerator_m243
};
CustomAttributesCache t6__CustomAttributeCache_m244 = {
1,
NULL,
&t6_CustomAttributesCacheGenerator_m244
};
CustomAttributesCache t6__CustomAttributeCache_m245 = {
1,
NULL,
&t6_CustomAttributesCacheGenerator_m245
};
CustomAttributesCache t6__CustomAttributeCache_m246 = {
1,
NULL,
&t6_CustomAttributesCacheGenerator_m246
};
CustomAttributesCache t6__CustomAttributeCache_m247 = {
1,
NULL,
&t6_CustomAttributesCacheGenerator_m247
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType t6_1_0_0;
struct t6;
extern CustomAttributesCache t6__CustomAttributeCache_U3CJewelMovementsU3Ek__BackingField;
extern CustomAttributesCache t6__CustomAttributeCache_U3CCollisionsU3Ek__BackingField;
extern CustomAttributesCache t6__CustomAttributeCache_U3CInvalidCollisionsU3Ek__BackingField;
extern CustomAttributesCache t6__CustomAttributeCache_U3CFinalisedCollisionsU3Ek__BackingField;
extern CustomAttributesCache t6__CustomAttributeCache_U3CDeltaStationaryU3Ek__BackingField;
extern CustomAttributesCache t6__CustomAttributeCache_U3CDeltaJewelsSwappedU3Ek__BackingField;
extern CustomAttributesCache t6__CustomAttributeCache_U3CLevelIncrementedU3Ek__BackingField;
extern CustomAttributesCache t6__CustomAttributeCache_U3CGameLoadedU3Ek__BackingField;
extern CustomAttributesCache t6__CustomAttributeCache_U3CGameStartedU3Ek__BackingField;
extern CustomAttributesCache t6__CustomAttributeCache_U3CGameWonU3Ek__BackingField;
extern CustomAttributesCache t6__CustomAttributeCache_U3CGamePausedU3Ek__BackingField;
extern CustomAttributesCache t6__CustomAttributeCache_U3CGameOverU3Ek__BackingField;
extern CustomAttributesCache t6__CustomAttributeCache_U3CGameWasRestartedU3Ek__BackingField;
extern CustomAttributesCache t6__CustomAttributeCache_U3CDifficultyChangedU3Ek__BackingField;
extern CustomAttributesCache t6__CustomAttributeCache_U3CMessagesU3Ek__BackingField;
extern CustomAttributesCache t6__CustomAttributeCache_m218;
extern CustomAttributesCache t6__CustomAttributeCache_m219;
extern CustomAttributesCache t6__CustomAttributeCache_m220;
extern CustomAttributesCache t6__CustomAttributeCache_m221;
extern CustomAttributesCache t6__CustomAttributeCache_m222;
extern CustomAttributesCache t6__CustomAttributeCache_m223;
extern CustomAttributesCache t6__CustomAttributeCache_m224;
extern CustomAttributesCache t6__CustomAttributeCache_m225;
extern CustomAttributesCache t6__CustomAttributeCache_m226;
extern CustomAttributesCache t6__CustomAttributeCache_m227;
extern CustomAttributesCache t6__CustomAttributeCache_m228;
extern CustomAttributesCache t6__CustomAttributeCache_m229;
extern CustomAttributesCache t6__CustomAttributeCache_m230;
extern CustomAttributesCache t6__CustomAttributeCache_m231;
extern CustomAttributesCache t6__CustomAttributeCache_m232;
extern CustomAttributesCache t6__CustomAttributeCache_m233;
extern CustomAttributesCache t6__CustomAttributeCache_m234;
extern CustomAttributesCache t6__CustomAttributeCache_m235;
extern CustomAttributesCache t6__CustomAttributeCache_m236;
extern CustomAttributesCache t6__CustomAttributeCache_m237;
extern CustomAttributesCache t6__CustomAttributeCache_m238;
extern CustomAttributesCache t6__CustomAttributeCache_m239;
extern CustomAttributesCache t6__CustomAttributeCache_m240;
extern CustomAttributesCache t6__CustomAttributeCache_m241;
extern CustomAttributesCache t6__CustomAttributeCache_m242;
extern CustomAttributesCache t6__CustomAttributeCache_m243;
extern CustomAttributesCache t6__CustomAttributeCache_m244;
extern CustomAttributesCache t6__CustomAttributeCache_m245;
extern CustomAttributesCache t6__CustomAttributeCache_m246;
extern CustomAttributesCache t6__CustomAttributeCache_m247;
TypeInfo t6_TI = 
{
	&g_AssemblyU2DCSharp_dll_Image, NULL, "GameLogicUpdate", "JewelMine.Engine.Models", t6_MIs, t6_PIs, t6_FIs, NULL, &t5_TI, NULL, NULL, &t6_TI, NULL, t6_VT, &EmptyCustomAttributesCache, &t6_TI, &t6_0_0_0, &t6_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t6), 0, -1, 0, 0, -1, 1048577, 0, false, false, false, false, false, false, false, false, false, false, false, false, 31, 15, 15, 0, 0, 4, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t47_TI;

extern MethodInfo m254_MI;
extern MethodInfo m256_MI;


extern MethodInfo m248_MI;
 void m248 (t47 * __this, MethodInfo* method){
	{
		m460(__this, &m460_MI);
		m254(__this, ((int32_t)22), &m254_MI);
		m256(__this, ((int32_t)22), &m256_MI);
		return;
	}
}
 int32_t m249 (t47 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->f0);
		return L_0;
	}
}
extern MethodInfo m250_MI;
 void m250 (t47 * __this, int32_t p0, MethodInfo* method){
	{
		__this->f0 = p0;
		return;
	}
}
 t11* m251 (t47 * __this, MethodInfo* method){
	{
		t11* L_0 = (__this->f1);
		return L_0;
	}
}
extern MethodInfo m252_MI;
 void m252 (t47 * __this, t11* p0, MethodInfo* method){
	{
		__this->f1 = p0;
		return;
	}
}
extern MethodInfo m253_MI;
 int32_t m253 (t47 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->f2);
		return L_0;
	}
}
 void m254 (t47 * __this, int32_t p0, MethodInfo* method){
	{
		__this->f2 = p0;
		return;
	}
}
extern MethodInfo m255_MI;
 int32_t m255 (t47 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->f3);
		return L_0;
	}
}
 void m256 (t47 * __this, int32_t p0, MethodInfo* method){
	{
		__this->f3 = p0;
		return;
	}
}
 t5 * m257 (t47 * __this, MethodInfo* method){
	{
		t5 * L_0 = (__this->f4);
		return L_0;
	}
}
extern MethodInfo m258_MI;
 void m258 (t47 * __this, t5 * p0, MethodInfo* method){
	{
		__this->f4 = p0;
		return;
	}
}
 t5 * m259 (t47 * __this, MethodInfo* method){
	{
		t5 * L_0 = (__this->f5);
		return L_0;
	}
}
extern MethodInfo m260_MI;
 void m260 (t47 * __this, t5 * p0, MethodInfo* method){
	{
		__this->f5 = p0;
		return;
	}
}
 t5 * m261 (t47 * __this, MethodInfo* method){
	{
		t5 * L_0 = (__this->f6);
		return L_0;
	}
}
extern MethodInfo m262_MI;
 void m262 (t47 * __this, t5 * p0, MethodInfo* method){
	{
		__this->f6 = p0;
		return;
	}
}
 t5 * m263 (t47 * __this, MethodInfo* method){
	{
		t5 * L_0 = (__this->f7);
		return L_0;
	}
}
extern MethodInfo m264_MI;
 void m264 (t47 * __this, t5 * p0, MethodInfo* method){
	{
		__this->f7 = p0;
		return;
	}
}
// Metadata Definition JewelMine.Engine.Models.GameLogicUserSettings
extern Il2CppType t22_0_0_1;
extern CustomAttributesCache t47__CustomAttributeCache_U3CUserPreferredDifficultyU3Ek__BackingField;
FieldInfo t47_f0_FieldInfo = 
{
	"<UserPreferredDifficulty>k__BackingField", &t22_0_0_1, &t47_TI, offsetof(t47, f0), &t47__CustomAttributeCache_U3CUserPreferredDifficultyU3Ek__BackingField};
extern Il2CppType t11_0_0_1;
extern CustomAttributesCache t47__CustomAttributeCache_U3CSaveGamePathU3Ek__BackingField;
FieldInfo t47_f1_FieldInfo = 
{
	"<SaveGamePath>k__BackingField", &t11_0_0_1, &t47_TI, offsetof(t47, f1), &t47__CustomAttributeCache_U3CSaveGamePathU3Ek__BackingField};
extern Il2CppType t110_0_0_1;
extern CustomAttributesCache t47__CustomAttributeCache_U3CMineColumnsU3Ek__BackingField;
FieldInfo t47_f2_FieldInfo = 
{
	"<MineColumns>k__BackingField", &t110_0_0_1, &t47_TI, offsetof(t47, f2), &t47__CustomAttributeCache_U3CMineColumnsU3Ek__BackingField};
extern Il2CppType t110_0_0_1;
extern CustomAttributesCache t47__CustomAttributeCache_U3CMineDepthU3Ek__BackingField;
FieldInfo t47_f3_FieldInfo = 
{
	"<MineDepth>k__BackingField", &t110_0_0_1, &t47_TI, offsetof(t47, f3), &t47__CustomAttributeCache_U3CMineDepthU3Ek__BackingField};
extern Il2CppType t62_0_0_1;
extern CustomAttributesCache t47__CustomAttributeCache_U3CEasyDifficultySettingsU3Ek__BackingField;
FieldInfo t47_f4_FieldInfo = 
{
	"<EasyDifficultySettings>k__BackingField", &t62_0_0_1, &t47_TI, offsetof(t47, f4), &t47__CustomAttributeCache_U3CEasyDifficultySettingsU3Ek__BackingField};
extern Il2CppType t62_0_0_1;
extern CustomAttributesCache t47__CustomAttributeCache_U3CModerateDifficultySettingsU3Ek__BackingField;
FieldInfo t47_f5_FieldInfo = 
{
	"<ModerateDifficultySettings>k__BackingField", &t62_0_0_1, &t47_TI, offsetof(t47, f5), &t47__CustomAttributeCache_U3CModerateDifficultySettingsU3Ek__BackingField};
extern Il2CppType t62_0_0_1;
extern CustomAttributesCache t47__CustomAttributeCache_U3CHardDifficultySettingsU3Ek__BackingField;
FieldInfo t47_f6_FieldInfo = 
{
	"<HardDifficultySettings>k__BackingField", &t62_0_0_1, &t47_TI, offsetof(t47, f6), &t47__CustomAttributeCache_U3CHardDifficultySettingsU3Ek__BackingField};
extern Il2CppType t62_0_0_1;
extern CustomAttributesCache t47__CustomAttributeCache_U3CImpossibleDifficultySettingsU3Ek__BackingField;
FieldInfo t47_f7_FieldInfo = 
{
	"<ImpossibleDifficultySettings>k__BackingField", &t62_0_0_1, &t47_TI, offsetof(t47, f7), &t47__CustomAttributeCache_U3CImpossibleDifficultySettingsU3Ek__BackingField};
static FieldInfo* t47_FIs[] =
{
	&t47_f0_FieldInfo,
	&t47_f1_FieldInfo,
	&t47_f2_FieldInfo,
	&t47_f3_FieldInfo,
	&t47_f4_FieldInfo,
	&t47_f5_FieldInfo,
	&t47_f6_FieldInfo,
	&t47_f7_FieldInfo,
	NULL
};
static PropertyInfo t47____UserPreferredDifficulty_PropertyInfo = 
{
	&t47_TI, "UserPreferredDifficulty", &m249_MI, &m250_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo t47____SaveGamePath_PropertyInfo = 
{
	&t47_TI, "SaveGamePath", &m251_MI, &m252_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo t47____MineColumns_PropertyInfo = 
{
	&t47_TI, "MineColumns", &m253_MI, &m254_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo t47____MineDepth_PropertyInfo = 
{
	&t47_TI, "MineDepth", &m255_MI, &m256_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo t47____EasyDifficultySettings_PropertyInfo = 
{
	&t47_TI, "EasyDifficultySettings", &m257_MI, &m258_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo t47____ModerateDifficultySettings_PropertyInfo = 
{
	&t47_TI, "ModerateDifficultySettings", &m259_MI, &m260_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo t47____HardDifficultySettings_PropertyInfo = 
{
	&t47_TI, "HardDifficultySettings", &m261_MI, &m262_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo t47____ImpossibleDifficultySettings_PropertyInfo = 
{
	&t47_TI, "ImpossibleDifficultySettings", &m263_MI, &m264_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t47_PIs[] =
{
	&t47____UserPreferredDifficulty_PropertyInfo,
	&t47____SaveGamePath_PropertyInfo,
	&t47____MineColumns_PropertyInfo,
	&t47____MineDepth_PropertyInfo,
	&t47____EasyDifficultySettings_PropertyInfo,
	&t47____ModerateDifficultySettings_PropertyInfo,
	&t47____HardDifficultySettings_PropertyInfo,
	&t47____ImpossibleDifficultySettings_PropertyInfo,
	NULL
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m248_MI = 
{
	".ctor", (methodPointerType)&m248, &t47_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 274, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t22_0_0_0;
extern void* RuntimeInvoker_t22 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t47__CustomAttributeCache_m249;
MethodInfo m249_MI = 
{
	"get_UserPreferredDifficulty", (methodPointerType)&m249, &t47_TI, &t22_0_0_0, RuntimeInvoker_t22, NULL, &t47__CustomAttributeCache_m249, 2182, 0, 255, 0, false, false, 275, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t22_0_0_0;
static ParameterInfo t47_m250_ParameterInfos[] = 
{
	{"value", 0, 134217945, &EmptyCustomAttributesCache, &t22_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t47__CustomAttributeCache_m250;
MethodInfo m250_MI = 
{
	"set_UserPreferredDifficulty", (methodPointerType)&m250, &t47_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t47_m250_ParameterInfos, &t47__CustomAttributeCache_m250, 2182, 0, 255, 1, false, false, 276, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t11_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t47__CustomAttributeCache_m251;
MethodInfo m251_MI = 
{
	"get_SaveGamePath", (methodPointerType)&m251, &t47_TI, &t11_0_0_0, RuntimeInvoker_t5, NULL, &t47__CustomAttributeCache_m251, 2182, 0, 255, 0, false, false, 277, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t11_0_0_0;
static ParameterInfo t47_m252_ParameterInfos[] = 
{
	{"value", 0, 134217946, &EmptyCustomAttributesCache, &t11_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t47__CustomAttributeCache_m252;
MethodInfo m252_MI = 
{
	"set_SaveGamePath", (methodPointerType)&m252, &t47_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t47_m252_ParameterInfos, &t47__CustomAttributeCache_m252, 2182, 0, 255, 1, false, false, 278, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t47__CustomAttributeCache_m253;
MethodInfo m253_MI = 
{
	"get_MineColumns", (methodPointerType)&m253, &t47_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &t47__CustomAttributeCache_m253, 2182, 0, 255, 0, false, false, 279, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t110_0_0_0;
static ParameterInfo t47_m254_ParameterInfos[] = 
{
	{"value", 0, 134217947, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t47__CustomAttributeCache_m254;
MethodInfo m254_MI = 
{
	"set_MineColumns", (methodPointerType)&m254, &t47_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t47_m254_ParameterInfos, &t47__CustomAttributeCache_m254, 2182, 0, 255, 1, false, false, 280, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t47__CustomAttributeCache_m255;
MethodInfo m255_MI = 
{
	"get_MineDepth", (methodPointerType)&m255, &t47_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &t47__CustomAttributeCache_m255, 2182, 0, 255, 0, false, false, 281, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t110_0_0_0;
static ParameterInfo t47_m256_ParameterInfos[] = 
{
	{"value", 0, 134217948, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t47__CustomAttributeCache_m256;
MethodInfo m256_MI = 
{
	"set_MineDepth", (methodPointerType)&m256, &t47_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t47_m256_ParameterInfos, &t47__CustomAttributeCache_m256, 2182, 0, 255, 1, false, false, 282, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t62_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t47__CustomAttributeCache_m257;
MethodInfo m257_MI = 
{
	"get_EasyDifficultySettings", (methodPointerType)&m257, &t47_TI, &t62_0_0_0, RuntimeInvoker_t5, NULL, &t47__CustomAttributeCache_m257, 2182, 0, 255, 0, false, false, 283, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t62_0_0_0;
static ParameterInfo t47_m258_ParameterInfos[] = 
{
	{"value", 0, 134217949, &EmptyCustomAttributesCache, &t62_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t47__CustomAttributeCache_m258;
MethodInfo m258_MI = 
{
	"set_EasyDifficultySettings", (methodPointerType)&m258, &t47_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t47_m258_ParameterInfos, &t47__CustomAttributeCache_m258, 2182, 0, 255, 1, false, false, 284, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t62_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t47__CustomAttributeCache_m259;
MethodInfo m259_MI = 
{
	"get_ModerateDifficultySettings", (methodPointerType)&m259, &t47_TI, &t62_0_0_0, RuntimeInvoker_t5, NULL, &t47__CustomAttributeCache_m259, 2182, 0, 255, 0, false, false, 285, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t62_0_0_0;
static ParameterInfo t47_m260_ParameterInfos[] = 
{
	{"value", 0, 134217950, &EmptyCustomAttributesCache, &t62_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t47__CustomAttributeCache_m260;
MethodInfo m260_MI = 
{
	"set_ModerateDifficultySettings", (methodPointerType)&m260, &t47_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t47_m260_ParameterInfos, &t47__CustomAttributeCache_m260, 2182, 0, 255, 1, false, false, 286, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t62_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t47__CustomAttributeCache_m261;
MethodInfo m261_MI = 
{
	"get_HardDifficultySettings", (methodPointerType)&m261, &t47_TI, &t62_0_0_0, RuntimeInvoker_t5, NULL, &t47__CustomAttributeCache_m261, 2182, 0, 255, 0, false, false, 287, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t62_0_0_0;
static ParameterInfo t47_m262_ParameterInfos[] = 
{
	{"value", 0, 134217951, &EmptyCustomAttributesCache, &t62_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t47__CustomAttributeCache_m262;
MethodInfo m262_MI = 
{
	"set_HardDifficultySettings", (methodPointerType)&m262, &t47_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t47_m262_ParameterInfos, &t47__CustomAttributeCache_m262, 2182, 0, 255, 1, false, false, 288, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t62_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t47__CustomAttributeCache_m263;
MethodInfo m263_MI = 
{
	"get_ImpossibleDifficultySettings", (methodPointerType)&m263, &t47_TI, &t62_0_0_0, RuntimeInvoker_t5, NULL, &t47__CustomAttributeCache_m263, 2182, 0, 255, 0, false, false, 289, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t62_0_0_0;
static ParameterInfo t47_m264_ParameterInfos[] = 
{
	{"value", 0, 134217952, &EmptyCustomAttributesCache, &t62_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t47__CustomAttributeCache_m264;
MethodInfo m264_MI = 
{
	"set_ImpossibleDifficultySettings", (methodPointerType)&m264, &t47_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t47_m264_ParameterInfos, &t47__CustomAttributeCache_m264, 2182, 0, 255, 1, false, false, 290, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t47_MIs[] =
{
	&m248_MI,
	&m249_MI,
	&m250_MI,
	&m251_MI,
	&m252_MI,
	&m253_MI,
	&m254_MI,
	&m255_MI,
	&m256_MI,
	&m257_MI,
	&m258_MI,
	&m259_MI,
	&m260_MI,
	&m261_MI,
	&m262_MI,
	&m263_MI,
	&m264_MI,
	NULL
};
static MethodInfo* t47_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
};
void t47_CustomAttributesCacheGenerator_U3CUserPreferredDifficultyU3Ek__BackingField(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t47_CustomAttributesCacheGenerator_U3CSaveGamePathU3Ek__BackingField(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t47_CustomAttributesCacheGenerator_U3CMineColumnsU3Ek__BackingField(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t47_CustomAttributesCacheGenerator_U3CMineDepthU3Ek__BackingField(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t47_CustomAttributesCacheGenerator_U3CEasyDifficultySettingsU3Ek__BackingField(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t47_CustomAttributesCacheGenerator_U3CModerateDifficultySettingsU3Ek__BackingField(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t47_CustomAttributesCacheGenerator_U3CHardDifficultySettingsU3Ek__BackingField(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t47_CustomAttributesCacheGenerator_U3CImpossibleDifficultySettingsU3Ek__BackingField(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t47_CustomAttributesCacheGenerator_m249(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t47_CustomAttributesCacheGenerator_m250(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t47_CustomAttributesCacheGenerator_m251(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t47_CustomAttributesCacheGenerator_m252(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t47_CustomAttributesCacheGenerator_m253(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t47_CustomAttributesCacheGenerator_m254(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t47_CustomAttributesCacheGenerator_m255(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t47_CustomAttributesCacheGenerator_m256(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t47_CustomAttributesCacheGenerator_m257(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t47_CustomAttributesCacheGenerator_m258(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t47_CustomAttributesCacheGenerator_m259(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t47_CustomAttributesCacheGenerator_m260(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t47_CustomAttributesCacheGenerator_m261(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t47_CustomAttributesCacheGenerator_m262(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t47_CustomAttributesCacheGenerator_m263(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t47_CustomAttributesCacheGenerator_m264(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t47__CustomAttributeCache_U3CUserPreferredDifficultyU3Ek__BackingField = {
1,
NULL,
&t47_CustomAttributesCacheGenerator_U3CUserPreferredDifficultyU3Ek__BackingField
};
CustomAttributesCache t47__CustomAttributeCache_U3CSaveGamePathU3Ek__BackingField = {
1,
NULL,
&t47_CustomAttributesCacheGenerator_U3CSaveGamePathU3Ek__BackingField
};
CustomAttributesCache t47__CustomAttributeCache_U3CMineColumnsU3Ek__BackingField = {
1,
NULL,
&t47_CustomAttributesCacheGenerator_U3CMineColumnsU3Ek__BackingField
};
CustomAttributesCache t47__CustomAttributeCache_U3CMineDepthU3Ek__BackingField = {
1,
NULL,
&t47_CustomAttributesCacheGenerator_U3CMineDepthU3Ek__BackingField
};
CustomAttributesCache t47__CustomAttributeCache_U3CEasyDifficultySettingsU3Ek__BackingField = {
1,
NULL,
&t47_CustomAttributesCacheGenerator_U3CEasyDifficultySettingsU3Ek__BackingField
};
CustomAttributesCache t47__CustomAttributeCache_U3CModerateDifficultySettingsU3Ek__BackingField = {
1,
NULL,
&t47_CustomAttributesCacheGenerator_U3CModerateDifficultySettingsU3Ek__BackingField
};
CustomAttributesCache t47__CustomAttributeCache_U3CHardDifficultySettingsU3Ek__BackingField = {
1,
NULL,
&t47_CustomAttributesCacheGenerator_U3CHardDifficultySettingsU3Ek__BackingField
};
CustomAttributesCache t47__CustomAttributeCache_U3CImpossibleDifficultySettingsU3Ek__BackingField = {
1,
NULL,
&t47_CustomAttributesCacheGenerator_U3CImpossibleDifficultySettingsU3Ek__BackingField
};
CustomAttributesCache t47__CustomAttributeCache_m249 = {
1,
NULL,
&t47_CustomAttributesCacheGenerator_m249
};
CustomAttributesCache t47__CustomAttributeCache_m250 = {
1,
NULL,
&t47_CustomAttributesCacheGenerator_m250
};
CustomAttributesCache t47__CustomAttributeCache_m251 = {
1,
NULL,
&t47_CustomAttributesCacheGenerator_m251
};
CustomAttributesCache t47__CustomAttributeCache_m252 = {
1,
NULL,
&t47_CustomAttributesCacheGenerator_m252
};
CustomAttributesCache t47__CustomAttributeCache_m253 = {
1,
NULL,
&t47_CustomAttributesCacheGenerator_m253
};
CustomAttributesCache t47__CustomAttributeCache_m254 = {
1,
NULL,
&t47_CustomAttributesCacheGenerator_m254
};
CustomAttributesCache t47__CustomAttributeCache_m255 = {
1,
NULL,
&t47_CustomAttributesCacheGenerator_m255
};
CustomAttributesCache t47__CustomAttributeCache_m256 = {
1,
NULL,
&t47_CustomAttributesCacheGenerator_m256
};
CustomAttributesCache t47__CustomAttributeCache_m257 = {
1,
NULL,
&t47_CustomAttributesCacheGenerator_m257
};
CustomAttributesCache t47__CustomAttributeCache_m258 = {
1,
NULL,
&t47_CustomAttributesCacheGenerator_m258
};
CustomAttributesCache t47__CustomAttributeCache_m259 = {
1,
NULL,
&t47_CustomAttributesCacheGenerator_m259
};
CustomAttributesCache t47__CustomAttributeCache_m260 = {
1,
NULL,
&t47_CustomAttributesCacheGenerator_m260
};
CustomAttributesCache t47__CustomAttributeCache_m261 = {
1,
NULL,
&t47_CustomAttributesCacheGenerator_m261
};
CustomAttributesCache t47__CustomAttributeCache_m262 = {
1,
NULL,
&t47_CustomAttributesCacheGenerator_m262
};
CustomAttributesCache t47__CustomAttributeCache_m263 = {
1,
NULL,
&t47_CustomAttributesCacheGenerator_m263
};
CustomAttributesCache t47__CustomAttributeCache_m264 = {
1,
NULL,
&t47_CustomAttributesCacheGenerator_m264
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType t47_1_0_0;
struct t47;
extern CustomAttributesCache t47__CustomAttributeCache_U3CUserPreferredDifficultyU3Ek__BackingField;
extern CustomAttributesCache t47__CustomAttributeCache_U3CSaveGamePathU3Ek__BackingField;
extern CustomAttributesCache t47__CustomAttributeCache_U3CMineColumnsU3Ek__BackingField;
extern CustomAttributesCache t47__CustomAttributeCache_U3CMineDepthU3Ek__BackingField;
extern CustomAttributesCache t47__CustomAttributeCache_U3CEasyDifficultySettingsU3Ek__BackingField;
extern CustomAttributesCache t47__CustomAttributeCache_U3CModerateDifficultySettingsU3Ek__BackingField;
extern CustomAttributesCache t47__CustomAttributeCache_U3CHardDifficultySettingsU3Ek__BackingField;
extern CustomAttributesCache t47__CustomAttributeCache_U3CImpossibleDifficultySettingsU3Ek__BackingField;
extern CustomAttributesCache t47__CustomAttributeCache_m249;
extern CustomAttributesCache t47__CustomAttributeCache_m250;
extern CustomAttributesCache t47__CustomAttributeCache_m251;
extern CustomAttributesCache t47__CustomAttributeCache_m252;
extern CustomAttributesCache t47__CustomAttributeCache_m253;
extern CustomAttributesCache t47__CustomAttributeCache_m254;
extern CustomAttributesCache t47__CustomAttributeCache_m255;
extern CustomAttributesCache t47__CustomAttributeCache_m256;
extern CustomAttributesCache t47__CustomAttributeCache_m257;
extern CustomAttributesCache t47__CustomAttributeCache_m258;
extern CustomAttributesCache t47__CustomAttributeCache_m259;
extern CustomAttributesCache t47__CustomAttributeCache_m260;
extern CustomAttributesCache t47__CustomAttributeCache_m261;
extern CustomAttributesCache t47__CustomAttributeCache_m262;
extern CustomAttributesCache t47__CustomAttributeCache_m263;
extern CustomAttributesCache t47__CustomAttributeCache_m264;
TypeInfo t47_TI = 
{
	&g_AssemblyU2DCSharp_dll_Image, NULL, "GameLogicUserSettings", "JewelMine.Engine.Models", t47_MIs, t47_PIs, t47_FIs, NULL, &t5_TI, NULL, NULL, &t47_TI, NULL, t47_VT, &EmptyCustomAttributesCache, &t47_TI, &t47_0_0_0, &t47_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t47), 0, -1, 0, 0, -1, 1048577, 0, false, false, false, false, false, false, false, false, false, false, false, false, 17, 8, 8, 0, 0, 4, 0, 0};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t68_TI;
extern MethodInfo m323_MI;
extern MethodInfo m271_MI;
extern MethodInfo m269_MI;
extern MethodInfo m281_MI;
extern MethodInfo m279_MI;


 void m265 (t32 * __this, t47 * p0, int32_t p1, MethodInfo* method){
	{
		m460(__this, &m460_MI);
		int32_t L_0 = m253(p0, &m253_MI);
		int32_t L_1 = m255(p0, &m255_MI);
		t68 * L_2 = (t68 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t68_TI));
		m323(L_2, L_0, L_1, &m323_MI);
		m271(__this, L_2, &m271_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t59_TI));
		t59 * L_3 = (t59 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t59_TI));
		m168(L_3, p1, p0, &m168_MI);
		m269(__this, L_3, &m269_MI);
		m267(__this, 0, &m267_MI);
		m273(__this, 1, &m273_MI);
		t59 * L_4 = m268(__this, &m268_MI);
		double L_5 = m176(L_4, &m176_MI);
		m277(__this, L_5, &m277_MI);
		m275(__this, (((int64_t)0)), &m275_MI);
		t59 * L_6 = m268(__this, &m268_MI);
		t61  L_7 = m182(L_6, &m182_MI);
		m281(__this, L_7, &m281_MI);
		t59 * L_8 = m268(__this, &m268_MI);
		int32_t L_9 = m180(L_8, &m180_MI);
		m279(__this, L_9, &m279_MI);
		return;
	}
}
 int32_t m266 (t32 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->f0);
		return L_0;
	}
}
 void m267 (t32 * __this, int32_t p0, MethodInfo* method){
	{
		__this->f0 = p0;
		return;
	}
}
 t59 * m268 (t32 * __this, MethodInfo* method){
	{
		t59 * L_0 = (__this->f1);
		return L_0;
	}
}
 void m269 (t32 * __this, t59 * p0, MethodInfo* method){
	{
		__this->f1 = p0;
		return;
	}
}
 t68 * m270 (t32 * __this, MethodInfo* method){
	{
		t68 * L_0 = (__this->f2);
		return L_0;
	}
}
 void m271 (t32 * __this, t68 * p0, MethodInfo* method){
	{
		__this->f2 = p0;
		return;
	}
}
 int32_t m272 (t32 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->f3);
		return L_0;
	}
}
 void m273 (t32 * __this, int32_t p0, MethodInfo* method){
	{
		__this->f3 = p0;
		return;
	}
}
 int64_t m274 (t32 * __this, MethodInfo* method){
	{
		int64_t L_0 = (__this->f4);
		return L_0;
	}
}
 void m275 (t32 * __this, int64_t p0, MethodInfo* method){
	{
		__this->f4 = p0;
		return;
	}
}
 double m276 (t32 * __this, MethodInfo* method){
	{
		double L_0 = (__this->f5);
		return L_0;
	}
}
 void m277 (t32 * __this, double p0, MethodInfo* method){
	{
		__this->f5 = p0;
		return;
	}
}
 int32_t m278 (t32 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->f6);
		return L_0;
	}
}
 void m279 (t32 * __this, int32_t p0, MethodInfo* method){
	{
		__this->f6 = p0;
		return;
	}
}
extern MethodInfo m280_MI;
 t61  m280 (t32 * __this, MethodInfo* method){
	{
		t61  L_0 = (__this->f7);
		return L_0;
	}
}
 void m281 (t32 * __this, t61  p0, MethodInfo* method){
	{
		__this->f7 = p0;
		return;
	}
}
// Metadata Definition JewelMine.Engine.Models.GameState
extern Il2CppType t17_0_0_1;
extern CustomAttributesCache t32__CustomAttributeCache_U3CPlayStateU3Ek__BackingField;
FieldInfo t32_f0_FieldInfo = 
{
	"<PlayState>k__BackingField", &t17_0_0_1, &t32_TI, offsetof(t32, f0), &t32__CustomAttributeCache_U3CPlayStateU3Ek__BackingField};
extern Il2CppType t59_0_0_1;
extern CustomAttributesCache t32__CustomAttributeCache_U3CDifficultyU3Ek__BackingField;
FieldInfo t32_f1_FieldInfo = 
{
	"<Difficulty>k__BackingField", &t59_0_0_1, &t32_TI, offsetof(t32, f1), &t32__CustomAttributeCache_U3CDifficultyU3Ek__BackingField};
extern Il2CppType t68_0_0_1;
extern CustomAttributesCache t32__CustomAttributeCache_U3CMineU3Ek__BackingField;
FieldInfo t32_f2_FieldInfo = 
{
	"<Mine>k__BackingField", &t68_0_0_1, &t32_TI, offsetof(t32, f2), &t32__CustomAttributeCache_U3CMineU3Ek__BackingField};
extern Il2CppType t110_0_0_1;
extern CustomAttributesCache t32__CustomAttributeCache_U3CLevelU3Ek__BackingField;
FieldInfo t32_f3_FieldInfo = 
{
	"<Level>k__BackingField", &t110_0_0_1, &t32_TI, offsetof(t32, f3), &t32__CustomAttributeCache_U3CLevelU3Ek__BackingField};
extern Il2CppType t152_0_0_1;
extern CustomAttributesCache t32__CustomAttributeCache_U3CScoreU3Ek__BackingField;
FieldInfo t32_f4_FieldInfo = 
{
	"<Score>k__BackingField", &t152_0_0_1, &t32_TI, offsetof(t32, f4), &t32__CustomAttributeCache_U3CScoreU3Ek__BackingField};
extern Il2CppType t118_0_0_1;
extern CustomAttributesCache t32__CustomAttributeCache_U3CTickSpeedMillisecondsU3Ek__BackingField;
FieldInfo t32_f5_FieldInfo = 
{
	"<TickSpeedMilliseconds>k__BackingField", &t118_0_0_1, &t32_TI, offsetof(t32, f5), &t32__CustomAttributeCache_U3CTickSpeedMillisecondsU3Ek__BackingField};
extern Il2CppType t110_0_0_1;
extern CustomAttributesCache t32__CustomAttributeCache_U3CCollisionFinailseTickCountU3Ek__BackingField;
FieldInfo t32_f6_FieldInfo = 
{
	"<CollisionFinailseTickCount>k__BackingField", &t110_0_0_1, &t32_TI, offsetof(t32, f6), &t32__CustomAttributeCache_U3CCollisionFinailseTickCountU3Ek__BackingField};
extern Il2CppType t61_0_0_1;
extern CustomAttributesCache t32__CustomAttributeCache_U3CDeltaStationaryTimeSpanU3Ek__BackingField;
FieldInfo t32_f7_FieldInfo = 
{
	"<DeltaStationaryTimeSpan>k__BackingField", &t61_0_0_1, &t32_TI, offsetof(t32, f7), &t32__CustomAttributeCache_U3CDeltaStationaryTimeSpanU3Ek__BackingField};
static FieldInfo* t32_FIs[] =
{
	&t32_f0_FieldInfo,
	&t32_f1_FieldInfo,
	&t32_f2_FieldInfo,
	&t32_f3_FieldInfo,
	&t32_f4_FieldInfo,
	&t32_f5_FieldInfo,
	&t32_f6_FieldInfo,
	&t32_f7_FieldInfo,
	NULL
};
static PropertyInfo t32____PlayState_PropertyInfo = 
{
	&t32_TI, "PlayState", &m266_MI, &m267_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo t32____Difficulty_PropertyInfo = 
{
	&t32_TI, "Difficulty", &m268_MI, &m269_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo t32____Mine_PropertyInfo = 
{
	&t32_TI, "Mine", &m270_MI, &m271_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo t32____Level_PropertyInfo = 
{
	&t32_TI, "Level", &m272_MI, &m273_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo t32____Score_PropertyInfo = 
{
	&t32_TI, "Score", &m274_MI, &m275_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo t32____TickSpeedMilliseconds_PropertyInfo = 
{
	&t32_TI, "TickSpeedMilliseconds", &m276_MI, &m277_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo t32____CollisionFinailseTickCount_PropertyInfo = 
{
	&t32_TI, "CollisionFinailseTickCount", &m278_MI, &m279_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo t32____DeltaStationaryTimeSpan_PropertyInfo = 
{
	&t32_TI, "DeltaStationaryTimeSpan", &m280_MI, &m281_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t32_PIs[] =
{
	&t32____PlayState_PropertyInfo,
	&t32____Difficulty_PropertyInfo,
	&t32____Mine_PropertyInfo,
	&t32____Level_PropertyInfo,
	&t32____Score_PropertyInfo,
	&t32____TickSpeedMilliseconds_PropertyInfo,
	&t32____CollisionFinailseTickCount_PropertyInfo,
	&t32____DeltaStationaryTimeSpan_PropertyInfo,
	NULL
};
extern Il2CppType t47_0_0_0;
extern Il2CppType t22_0_0_0;
static ParameterInfo t32_m265_ParameterInfos[] = 
{
	{"userSettings", 0, 134217953, &EmptyCustomAttributesCache, &t47_0_0_0},
	{"level", 1, 134217954, &EmptyCustomAttributesCache, &t22_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m265_MI = 
{
	".ctor", (methodPointerType)&m265, &t32_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t110, t32_m265_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, false, 291, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t17_0_0_0;
extern void* RuntimeInvoker_t17 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t32__CustomAttributeCache_m266;
MethodInfo m266_MI = 
{
	"get_PlayState", (methodPointerType)&m266, &t32_TI, &t17_0_0_0, RuntimeInvoker_t17, NULL, &t32__CustomAttributeCache_m266, 2182, 0, 255, 0, false, false, 292, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t17_0_0_0;
static ParameterInfo t32_m267_ParameterInfos[] = 
{
	{"value", 0, 134217955, &EmptyCustomAttributesCache, &t17_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t32__CustomAttributeCache_m267;
MethodInfo m267_MI = 
{
	"set_PlayState", (methodPointerType)&m267, &t32_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t32_m267_ParameterInfos, &t32__CustomAttributeCache_m267, 2179, 0, 255, 1, false, false, 293, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t59_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t32__CustomAttributeCache_m268;
MethodInfo m268_MI = 
{
	"get_Difficulty", (methodPointerType)&m268, &t32_TI, &t59_0_0_0, RuntimeInvoker_t5, NULL, &t32__CustomAttributeCache_m268, 2182, 0, 255, 0, false, false, 294, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t59_0_0_0;
static ParameterInfo t32_m269_ParameterInfos[] = 
{
	{"value", 0, 134217956, &EmptyCustomAttributesCache, &t59_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t32__CustomAttributeCache_m269;
MethodInfo m269_MI = 
{
	"set_Difficulty", (methodPointerType)&m269, &t32_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t32_m269_ParameterInfos, &t32__CustomAttributeCache_m269, 2179, 0, 255, 1, false, false, 295, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t68_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t32__CustomAttributeCache_m270;
MethodInfo m270_MI = 
{
	"get_Mine", (methodPointerType)&m270, &t32_TI, &t68_0_0_0, RuntimeInvoker_t5, NULL, &t32__CustomAttributeCache_m270, 2182, 0, 255, 0, false, false, 296, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t68_0_0_0;
extern Il2CppType t68_0_0_0;
static ParameterInfo t32_m271_ParameterInfos[] = 
{
	{"value", 0, 134217957, &EmptyCustomAttributesCache, &t68_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t32__CustomAttributeCache_m271;
MethodInfo m271_MI = 
{
	"set_Mine", (methodPointerType)&m271, &t32_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t32_m271_ParameterInfos, &t32__CustomAttributeCache_m271, 2177, 0, 255, 1, false, false, 297, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t32__CustomAttributeCache_m272;
MethodInfo m272_MI = 
{
	"get_Level", (methodPointerType)&m272, &t32_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &t32__CustomAttributeCache_m272, 2182, 0, 255, 0, false, false, 298, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t110_0_0_0;
static ParameterInfo t32_m273_ParameterInfos[] = 
{
	{"value", 0, 134217958, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t32__CustomAttributeCache_m273;
MethodInfo m273_MI = 
{
	"set_Level", (methodPointerType)&m273, &t32_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t32_m273_ParameterInfos, &t32__CustomAttributeCache_m273, 2179, 0, 255, 1, false, false, 299, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t152_0_0_0;
extern void* RuntimeInvoker_t152 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t32__CustomAttributeCache_m274;
MethodInfo m274_MI = 
{
	"get_Score", (methodPointerType)&m274, &t32_TI, &t152_0_0_0, RuntimeInvoker_t152, NULL, &t32__CustomAttributeCache_m274, 2182, 0, 255, 0, false, false, 300, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t152_0_0_0;
extern Il2CppType t152_0_0_0;
static ParameterInfo t32_m275_ParameterInfos[] = 
{
	{"value", 0, 134217959, &EmptyCustomAttributesCache, &t152_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t152 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t32__CustomAttributeCache_m275;
MethodInfo m275_MI = 
{
	"set_Score", (methodPointerType)&m275, &t32_TI, &t109_0_0_0, RuntimeInvoker_t109_t152, t32_m275_ParameterInfos, &t32__CustomAttributeCache_m275, 2179, 0, 255, 1, false, false, 301, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t118_0_0_0;
extern void* RuntimeInvoker_t118 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t32__CustomAttributeCache_m276;
MethodInfo m276_MI = 
{
	"get_TickSpeedMilliseconds", (methodPointerType)&m276, &t32_TI, &t118_0_0_0, RuntimeInvoker_t118, NULL, &t32__CustomAttributeCache_m276, 2182, 0, 255, 0, false, false, 302, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t118_0_0_0;
static ParameterInfo t32_m277_ParameterInfos[] = 
{
	{"value", 0, 134217960, &EmptyCustomAttributesCache, &t118_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t118 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t32__CustomAttributeCache_m277;
MethodInfo m277_MI = 
{
	"set_TickSpeedMilliseconds", (methodPointerType)&m277, &t32_TI, &t109_0_0_0, RuntimeInvoker_t109_t118, t32_m277_ParameterInfos, &t32__CustomAttributeCache_m277, 2179, 0, 255, 1, false, false, 303, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t32__CustomAttributeCache_m278;
MethodInfo m278_MI = 
{
	"get_CollisionFinailseTickCount", (methodPointerType)&m278, &t32_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &t32__CustomAttributeCache_m278, 2182, 0, 255, 0, false, false, 304, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t110_0_0_0;
static ParameterInfo t32_m279_ParameterInfos[] = 
{
	{"value", 0, 134217961, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t32__CustomAttributeCache_m279;
MethodInfo m279_MI = 
{
	"set_CollisionFinailseTickCount", (methodPointerType)&m279, &t32_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t32_m279_ParameterInfos, &t32__CustomAttributeCache_m279, 2179, 0, 255, 1, false, false, 305, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t61_0_0_0;
extern void* RuntimeInvoker_t61 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t32__CustomAttributeCache_m280;
MethodInfo m280_MI = 
{
	"get_DeltaStationaryTimeSpan", (methodPointerType)&m280, &t32_TI, &t61_0_0_0, RuntimeInvoker_t61, NULL, &t32__CustomAttributeCache_m280, 2182, 0, 255, 0, false, false, 306, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t61_0_0_0;
static ParameterInfo t32_m281_ParameterInfos[] = 
{
	{"value", 0, 134217962, &EmptyCustomAttributesCache, &t61_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t61 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t32__CustomAttributeCache_m281;
MethodInfo m281_MI = 
{
	"set_DeltaStationaryTimeSpan", (methodPointerType)&m281, &t32_TI, &t109_0_0_0, RuntimeInvoker_t109_t61, t32_m281_ParameterInfos, &t32__CustomAttributeCache_m281, 2179, 0, 255, 1, false, false, 307, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t32_MIs[] =
{
	&m265_MI,
	&m266_MI,
	&m267_MI,
	&m268_MI,
	&m269_MI,
	&m270_MI,
	&m271_MI,
	&m272_MI,
	&m273_MI,
	&m274_MI,
	&m275_MI,
	&m276_MI,
	&m277_MI,
	&m278_MI,
	&m279_MI,
	&m280_MI,
	&m281_MI,
	NULL
};
static MethodInfo* t32_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
};
void t32_CustomAttributesCacheGenerator_U3CPlayStateU3Ek__BackingField(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t32_CustomAttributesCacheGenerator_U3CDifficultyU3Ek__BackingField(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t32_CustomAttributesCacheGenerator_U3CMineU3Ek__BackingField(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t32_CustomAttributesCacheGenerator_U3CLevelU3Ek__BackingField(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t32_CustomAttributesCacheGenerator_U3CScoreU3Ek__BackingField(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t32_CustomAttributesCacheGenerator_U3CTickSpeedMillisecondsU3Ek__BackingField(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t32_CustomAttributesCacheGenerator_U3CCollisionFinailseTickCountU3Ek__BackingField(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t32_CustomAttributesCacheGenerator_U3CDeltaStationaryTimeSpanU3Ek__BackingField(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t32_CustomAttributesCacheGenerator_m266(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t32_CustomAttributesCacheGenerator_m267(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t32_CustomAttributesCacheGenerator_m268(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t32_CustomAttributesCacheGenerator_m269(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t32_CustomAttributesCacheGenerator_m270(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t32_CustomAttributesCacheGenerator_m271(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t32_CustomAttributesCacheGenerator_m272(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t32_CustomAttributesCacheGenerator_m273(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t32_CustomAttributesCacheGenerator_m274(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t32_CustomAttributesCacheGenerator_m275(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t32_CustomAttributesCacheGenerator_m276(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t32_CustomAttributesCacheGenerator_m277(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t32_CustomAttributesCacheGenerator_m278(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t32_CustomAttributesCacheGenerator_m279(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t32_CustomAttributesCacheGenerator_m280(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t32_CustomAttributesCacheGenerator_m281(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t32__CustomAttributeCache_U3CPlayStateU3Ek__BackingField = {
1,
NULL,
&t32_CustomAttributesCacheGenerator_U3CPlayStateU3Ek__BackingField
};
CustomAttributesCache t32__CustomAttributeCache_U3CDifficultyU3Ek__BackingField = {
1,
NULL,
&t32_CustomAttributesCacheGenerator_U3CDifficultyU3Ek__BackingField
};
CustomAttributesCache t32__CustomAttributeCache_U3CMineU3Ek__BackingField = {
1,
NULL,
&t32_CustomAttributesCacheGenerator_U3CMineU3Ek__BackingField
};
CustomAttributesCache t32__CustomAttributeCache_U3CLevelU3Ek__BackingField = {
1,
NULL,
&t32_CustomAttributesCacheGenerator_U3CLevelU3Ek__BackingField
};
CustomAttributesCache t32__CustomAttributeCache_U3CScoreU3Ek__BackingField = {
1,
NULL,
&t32_CustomAttributesCacheGenerator_U3CScoreU3Ek__BackingField
};
CustomAttributesCache t32__CustomAttributeCache_U3CTickSpeedMillisecondsU3Ek__BackingField = {
1,
NULL,
&t32_CustomAttributesCacheGenerator_U3CTickSpeedMillisecondsU3Ek__BackingField
};
CustomAttributesCache t32__CustomAttributeCache_U3CCollisionFinailseTickCountU3Ek__BackingField = {
1,
NULL,
&t32_CustomAttributesCacheGenerator_U3CCollisionFinailseTickCountU3Ek__BackingField
};
CustomAttributesCache t32__CustomAttributeCache_U3CDeltaStationaryTimeSpanU3Ek__BackingField = {
1,
NULL,
&t32_CustomAttributesCacheGenerator_U3CDeltaStationaryTimeSpanU3Ek__BackingField
};
CustomAttributesCache t32__CustomAttributeCache_m266 = {
1,
NULL,
&t32_CustomAttributesCacheGenerator_m266
};
CustomAttributesCache t32__CustomAttributeCache_m267 = {
1,
NULL,
&t32_CustomAttributesCacheGenerator_m267
};
CustomAttributesCache t32__CustomAttributeCache_m268 = {
1,
NULL,
&t32_CustomAttributesCacheGenerator_m268
};
CustomAttributesCache t32__CustomAttributeCache_m269 = {
1,
NULL,
&t32_CustomAttributesCacheGenerator_m269
};
CustomAttributesCache t32__CustomAttributeCache_m270 = {
1,
NULL,
&t32_CustomAttributesCacheGenerator_m270
};
CustomAttributesCache t32__CustomAttributeCache_m271 = {
1,
NULL,
&t32_CustomAttributesCacheGenerator_m271
};
CustomAttributesCache t32__CustomAttributeCache_m272 = {
1,
NULL,
&t32_CustomAttributesCacheGenerator_m272
};
CustomAttributesCache t32__CustomAttributeCache_m273 = {
1,
NULL,
&t32_CustomAttributesCacheGenerator_m273
};
CustomAttributesCache t32__CustomAttributeCache_m274 = {
1,
NULL,
&t32_CustomAttributesCacheGenerator_m274
};
CustomAttributesCache t32__CustomAttributeCache_m275 = {
1,
NULL,
&t32_CustomAttributesCacheGenerator_m275
};
CustomAttributesCache t32__CustomAttributeCache_m276 = {
1,
NULL,
&t32_CustomAttributesCacheGenerator_m276
};
CustomAttributesCache t32__CustomAttributeCache_m277 = {
1,
NULL,
&t32_CustomAttributesCacheGenerator_m277
};
CustomAttributesCache t32__CustomAttributeCache_m278 = {
1,
NULL,
&t32_CustomAttributesCacheGenerator_m278
};
CustomAttributesCache t32__CustomAttributeCache_m279 = {
1,
NULL,
&t32_CustomAttributesCacheGenerator_m279
};
CustomAttributesCache t32__CustomAttributeCache_m280 = {
1,
NULL,
&t32_CustomAttributesCacheGenerator_m280
};
CustomAttributesCache t32__CustomAttributeCache_m281 = {
1,
NULL,
&t32_CustomAttributesCacheGenerator_m281
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType t32_1_0_0;
struct t32;
extern CustomAttributesCache t32__CustomAttributeCache_U3CPlayStateU3Ek__BackingField;
extern CustomAttributesCache t32__CustomAttributeCache_U3CDifficultyU3Ek__BackingField;
extern CustomAttributesCache t32__CustomAttributeCache_U3CMineU3Ek__BackingField;
extern CustomAttributesCache t32__CustomAttributeCache_U3CLevelU3Ek__BackingField;
extern CustomAttributesCache t32__CustomAttributeCache_U3CScoreU3Ek__BackingField;
extern CustomAttributesCache t32__CustomAttributeCache_U3CTickSpeedMillisecondsU3Ek__BackingField;
extern CustomAttributesCache t32__CustomAttributeCache_U3CCollisionFinailseTickCountU3Ek__BackingField;
extern CustomAttributesCache t32__CustomAttributeCache_U3CDeltaStationaryTimeSpanU3Ek__BackingField;
extern CustomAttributesCache t32__CustomAttributeCache_m266;
extern CustomAttributesCache t32__CustomAttributeCache_m267;
extern CustomAttributesCache t32__CustomAttributeCache_m268;
extern CustomAttributesCache t32__CustomAttributeCache_m269;
extern CustomAttributesCache t32__CustomAttributeCache_m270;
extern CustomAttributesCache t32__CustomAttributeCache_m271;
extern CustomAttributesCache t32__CustomAttributeCache_m272;
extern CustomAttributesCache t32__CustomAttributeCache_m273;
extern CustomAttributesCache t32__CustomAttributeCache_m274;
extern CustomAttributesCache t32__CustomAttributeCache_m275;
extern CustomAttributesCache t32__CustomAttributeCache_m276;
extern CustomAttributesCache t32__CustomAttributeCache_m277;
extern CustomAttributesCache t32__CustomAttributeCache_m278;
extern CustomAttributesCache t32__CustomAttributeCache_m279;
extern CustomAttributesCache t32__CustomAttributeCache_m280;
extern CustomAttributesCache t32__CustomAttributeCache_m281;
TypeInfo t32_TI = 
{
	&g_AssemblyU2DCSharp_dll_Image, NULL, "GameState", "JewelMine.Engine.Models", t32_MIs, t32_PIs, t32_FIs, NULL, &t5_TI, NULL, NULL, &t32_TI, NULL, t32_VT, &EmptyCustomAttributesCache, &t32_TI, &t32_0_0_0, &t32_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t32), 0, -1, 0, 0, -1, 1056769, 0, false, false, false, false, false, false, false, false, false, false, false, false, 17, 8, 8, 0, 0, 4, 0, 0};
#ifndef _MSC_VER
#else
#endif

#include "t71.h"
extern TypeInfo t71_TI;
#include "t70MD.h"
#include "t71MD.h"
extern MethodInfo m345_MI;
extern MethodInfo m284_MI;
extern MethodInfo m654_MI;
extern MethodInfo m286_MI;


 void m282 (t25 * __this, int32_t p0, MethodInfo* method){
	{
		m345(__this, &m345_MI);
		m284(__this, p0, &m284_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t71_TI));
		t71  L_0 = m654(NULL, &m654_MI);
		m286(__this, L_0, &m286_MI);
		return;
	}
}
 int32_t m283 (t25 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->f1);
		return L_0;
	}
}
 void m284 (t25 * __this, int32_t p0, MethodInfo* method){
	{
		__this->f1 = p0;
		return;
	}
}
extern MethodInfo m285_MI;
 t71  m285 (t25 * __this, MethodInfo* method){
	{
		t71  L_0 = (__this->f2);
		return L_0;
	}
}
 void m286 (t25 * __this, t71  p0, MethodInfo* method){
	{
		__this->f2 = p0;
		return;
	}
}
// Metadata Definition JewelMine.Engine.Models.Jewel
extern Il2CppType t69_0_0_134;
FieldInfo t25_f0_FieldInfo = 
{
	"GameObject", &t69_0_0_134, &t25_TI, offsetof(t25, f0), &EmptyCustomAttributesCache};
extern Il2CppType t19_0_0_1;
extern CustomAttributesCache t25__CustomAttributeCache_U3CJewelTypeU3Ek__BackingField;
FieldInfo t25_f1_FieldInfo = 
{
	"<JewelType>k__BackingField", &t19_0_0_1, &t25_TI, offsetof(t25, f1), &t25__CustomAttributeCache_U3CJewelTypeU3Ek__BackingField};
extern Il2CppType t71_0_0_1;
extern CustomAttributesCache t25__CustomAttributeCache_U3CIdentifierU3Ek__BackingField;
FieldInfo t25_f2_FieldInfo = 
{
	"<Identifier>k__BackingField", &t71_0_0_1, &t25_TI, offsetof(t25, f2), &t25__CustomAttributeCache_U3CIdentifierU3Ek__BackingField};
static FieldInfo* t25_FIs[] =
{
	&t25_f0_FieldInfo,
	&t25_f1_FieldInfo,
	&t25_f2_FieldInfo,
	NULL
};
static PropertyInfo t25____JewelType_PropertyInfo = 
{
	&t25_TI, "JewelType", &m283_MI, &m284_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo t25____Identifier_PropertyInfo = 
{
	&t25_TI, "Identifier", &m285_MI, &m286_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t25_PIs[] =
{
	&t25____JewelType_PropertyInfo,
	&t25____Identifier_PropertyInfo,
	NULL
};
extern Il2CppType t19_0_0_0;
static ParameterInfo t25_m282_ParameterInfos[] = 
{
	{"type", 0, 134217963, &EmptyCustomAttributesCache, &t19_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m282_MI = 
{
	".ctor", (methodPointerType)&m282, &t25_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t25_m282_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 308, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t19_0_0_0;
extern void* RuntimeInvoker_t19 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t25__CustomAttributeCache_m283;
MethodInfo m283_MI = 
{
	"get_JewelType", (methodPointerType)&m283, &t25_TI, &t19_0_0_0, RuntimeInvoker_t19, NULL, &t25__CustomAttributeCache_m283, 2182, 0, 255, 0, false, false, 309, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t19_0_0_0;
static ParameterInfo t25_m284_ParameterInfos[] = 
{
	{"value", 0, 134217964, &EmptyCustomAttributesCache, &t19_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t25__CustomAttributeCache_m284;
MethodInfo m284_MI = 
{
	"set_JewelType", (methodPointerType)&m284, &t25_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t25_m284_ParameterInfos, &t25__CustomAttributeCache_m284, 2177, 0, 255, 1, false, false, 310, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t71_0_0_0;
extern void* RuntimeInvoker_t71 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t25__CustomAttributeCache_m285;
MethodInfo m285_MI = 
{
	"get_Identifier", (methodPointerType)&m285, &t25_TI, &t71_0_0_0, RuntimeInvoker_t71, NULL, &t25__CustomAttributeCache_m285, 2182, 0, 255, 0, false, false, 311, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t71_0_0_0;
extern Il2CppType t71_0_0_0;
static ParameterInfo t25_m286_ParameterInfos[] = 
{
	{"value", 0, 134217965, &EmptyCustomAttributesCache, &t71_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t71 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t25__CustomAttributeCache_m286;
MethodInfo m286_MI = 
{
	"set_Identifier", (methodPointerType)&m286, &t25_TI, &t109_0_0_0, RuntimeInvoker_t109_t71, t25_m286_ParameterInfos, &t25__CustomAttributeCache_m286, 2177, 0, 255, 1, false, false, 312, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t25_MIs[] =
{
	&m282_MI,
	&m283_MI,
	&m284_MI,
	&m285_MI,
	&m286_MI,
	NULL
};
static MethodInfo* t25_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
};
void t25_CustomAttributesCacheGenerator_U3CJewelTypeU3Ek__BackingField(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t25_CustomAttributesCacheGenerator_U3CIdentifierU3Ek__BackingField(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t25_CustomAttributesCacheGenerator_m283(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t25_CustomAttributesCacheGenerator_m284(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t25_CustomAttributesCacheGenerator_m285(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t25_CustomAttributesCacheGenerator_m286(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t25__CustomAttributeCache_U3CJewelTypeU3Ek__BackingField = {
1,
NULL,
&t25_CustomAttributesCacheGenerator_U3CJewelTypeU3Ek__BackingField
};
CustomAttributesCache t25__CustomAttributeCache_U3CIdentifierU3Ek__BackingField = {
1,
NULL,
&t25_CustomAttributesCacheGenerator_U3CIdentifierU3Ek__BackingField
};
CustomAttributesCache t25__CustomAttributeCache_m283 = {
1,
NULL,
&t25_CustomAttributesCacheGenerator_m283
};
CustomAttributesCache t25__CustomAttributeCache_m284 = {
1,
NULL,
&t25_CustomAttributesCacheGenerator_m284
};
CustomAttributesCache t25__CustomAttributeCache_m285 = {
1,
NULL,
&t25_CustomAttributesCacheGenerator_m285
};
CustomAttributesCache t25__CustomAttributeCache_m286 = {
1,
NULL,
&t25_CustomAttributesCacheGenerator_m286
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType t25_1_0_0;
extern TypeInfo t70_TI;
struct t25;
extern CustomAttributesCache t25__CustomAttributeCache_U3CJewelTypeU3Ek__BackingField;
extern CustomAttributesCache t25__CustomAttributeCache_U3CIdentifierU3Ek__BackingField;
extern CustomAttributesCache t25__CustomAttributeCache_m283;
extern CustomAttributesCache t25__CustomAttributeCache_m284;
extern CustomAttributesCache t25__CustomAttributeCache_m285;
extern CustomAttributesCache t25__CustomAttributeCache_m286;
TypeInfo t25_TI = 
{
	&g_AssemblyU2DCSharp_dll_Image, NULL, "Jewel", "JewelMine.Engine.Models", t25_MIs, t25_PIs, t25_FIs, NULL, &t70_TI, NULL, NULL, &t25_TI, NULL, t25_VT, &EmptyCustomAttributesCache, &t25_TI, &t25_0_0_0, &t25_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t25), 0, -1, 0, 0, -1, 1056769, 0, false, false, false, false, false, false, false, false, false, false, false, false, 5, 2, 3, 0, 0, 4, 0, 0};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t72_TI;
extern MethodInfo m290_MI;
extern MethodInfo m292_MI;
extern MethodInfo m294_MI;
extern MethodInfo m299_MI;


extern MethodInfo m287_MI;
 void m287 (t56 * __this, t72 * p0, t72 * p1, t72 * p2, MethodInfo* method){
	{
		m460(__this, &m460_MI);
		m290(__this, p0, &m290_MI);
		m292(__this, p1, &m292_MI);
		m294(__this, p2, &m294_MI);
		return;
	}
}
 void m288 (t56 * __this, t25 * p0, t25 * p1, t25 * p2, MethodInfo* method){
	{
		m460(__this, &m460_MI);
		t36 * L_0 = m162(NULL, &m162_MI);
		t72 * L_1 = (t72 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t72_TI));
		m299(L_1, p0, L_0, &m299_MI);
		m290(__this, L_1, &m290_MI);
		t36 * L_2 = m162(NULL, &m162_MI);
		t72 * L_3 = (t72 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t72_TI));
		m299(L_3, p1, L_2, &m299_MI);
		m292(__this, L_3, &m292_MI);
		t36 * L_4 = m162(NULL, &m162_MI);
		t72 * L_5 = (t72 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t72_TI));
		m299(L_5, p2, L_4, &m299_MI);
		m294(__this, L_5, &m294_MI);
		return;
	}
}
 t72 * m289 (t56 * __this, MethodInfo* method){
	{
		t72 * L_0 = (__this->f0);
		return L_0;
	}
}
 void m290 (t56 * __this, t72 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		return;
	}
}
 t72 * m291 (t56 * __this, MethodInfo* method){
	{
		t72 * L_0 = (__this->f1);
		return L_0;
	}
}
 void m292 (t56 * __this, t72 * p0, MethodInfo* method){
	{
		__this->f1 = p0;
		return;
	}
}
 t72 * m293 (t56 * __this, MethodInfo* method){
	{
		t72 * L_0 = (__this->f2);
		return L_0;
	}
}
 void m294 (t56 * __this, t72 * p0, MethodInfo* method){
	{
		__this->f2 = p0;
		return;
	}
}
 t73  m295 (t56 * __this, MethodInfo* method){
	{
		t73  L_0 = (__this->f3);
		return L_0;
	}
}
 void m296 (t56 * __this, t73  p0, MethodInfo* method){
	{
		__this->f3 = p0;
		return;
	}
}
extern MethodInfo m297_MI;
 bool m297 (t56 * __this, MethodInfo* method){
	int32_t G_B4_0 = 0;
	{
		t72 * L_0 = m289(__this, &m289_MI);
		bool L_1 = m305(L_0, &m305_MI);
		if (!L_1)
		{
			goto IL_002d;
		}
	}
	{
		t72 * L_2 = m291(__this, &m291_MI);
		bool L_3 = m305(L_2, &m305_MI);
		if (!L_3)
		{
			goto IL_002d;
		}
	}
	{
		t72 * L_4 = m293(__this, &m293_MI);
		bool L_5 = m305(L_4, &m305_MI);
		G_B4_0 = ((int32_t)(L_5));
		goto IL_002e;
	}

IL_002d:
	{
		G_B4_0 = 0;
	}

IL_002e:
	{
		return G_B4_0;
	}
}
 bool m298 (t56 * __this, t25 * p0, MethodInfo* method){
	int32_t G_B4_0 = 0;
	{
		t72 * L_0 = m289(__this, &m289_MI);
		t25 * L_1 = m301(L_0, &m301_MI);
		if ((((t25 *)p0) == ((t25 *)L_1)))
		{
			goto IL_0032;
		}
	}
	{
		t72 * L_2 = m291(__this, &m291_MI);
		t25 * L_3 = m301(L_2, &m301_MI);
		if ((((t25 *)p0) == ((t25 *)L_3)))
		{
			goto IL_0032;
		}
	}
	{
		t72 * L_4 = m293(__this, &m293_MI);
		t25 * L_5 = m301(L_4, &m301_MI);
		G_B4_0 = ((((t25 *)p0) == ((t25 *)L_5))? 1 : 0);
		goto IL_0033;
	}

IL_0032:
	{
		G_B4_0 = 1;
	}

IL_0033:
	{
		return G_B4_0;
	}
}
// Metadata Definition JewelMine.Engine.Models.JewelGroup
extern Il2CppType t72_0_0_1;
extern CustomAttributesCache t56__CustomAttributeCache_U3CTopU3Ek__BackingField;
FieldInfo t56_f0_FieldInfo = 
{
	"<Top>k__BackingField", &t72_0_0_1, &t56_TI, offsetof(t56, f0), &t56__CustomAttributeCache_U3CTopU3Ek__BackingField};
extern Il2CppType t72_0_0_1;
extern CustomAttributesCache t56__CustomAttributeCache_U3CMiddleU3Ek__BackingField;
FieldInfo t56_f1_FieldInfo = 
{
	"<Middle>k__BackingField", &t72_0_0_1, &t56_TI, offsetof(t56, f1), &t56__CustomAttributeCache_U3CMiddleU3Ek__BackingField};
extern Il2CppType t72_0_0_1;
extern CustomAttributesCache t56__CustomAttributeCache_U3CBottomU3Ek__BackingField;
FieldInfo t56_f2_FieldInfo = 
{
	"<Bottom>k__BackingField", &t72_0_0_1, &t56_TI, offsetof(t56, f2), &t56__CustomAttributeCache_U3CBottomU3Ek__BackingField};
extern Il2CppType t73_0_0_1;
extern CustomAttributesCache t56__CustomAttributeCache_U3CStationarySinceU3Ek__BackingField;
FieldInfo t56_f3_FieldInfo = 
{
	"<StationarySince>k__BackingField", &t73_0_0_1, &t56_TI, offsetof(t56, f3), &t56__CustomAttributeCache_U3CStationarySinceU3Ek__BackingField};
static FieldInfo* t56_FIs[] =
{
	&t56_f0_FieldInfo,
	&t56_f1_FieldInfo,
	&t56_f2_FieldInfo,
	&t56_f3_FieldInfo,
	NULL
};
static PropertyInfo t56____Top_PropertyInfo = 
{
	&t56_TI, "Top", &m289_MI, &m290_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo t56____Middle_PropertyInfo = 
{
	&t56_TI, "Middle", &m291_MI, &m292_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo t56____Bottom_PropertyInfo = 
{
	&t56_TI, "Bottom", &m293_MI, &m294_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo t56____StationarySince_PropertyInfo = 
{
	&t56_TI, "StationarySince", &m295_MI, &m296_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo t56____HasWholeGroupEnteredBounds_PropertyInfo = 
{
	&t56_TI, "HasWholeGroupEnteredBounds", &m297_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t56_PIs[] =
{
	&t56____Top_PropertyInfo,
	&t56____Middle_PropertyInfo,
	&t56____Bottom_PropertyInfo,
	&t56____StationarySince_PropertyInfo,
	&t56____HasWholeGroupEnteredBounds_PropertyInfo,
	NULL
};
extern Il2CppType t72_0_0_0;
extern Il2CppType t72_0_0_0;
extern Il2CppType t72_0_0_0;
extern Il2CppType t72_0_0_0;
static ParameterInfo t56_m287_ParameterInfos[] = 
{
	{"top", 0, 134217966, &EmptyCustomAttributesCache, &t72_0_0_0},
	{"middle", 1, 134217967, &EmptyCustomAttributesCache, &t72_0_0_0},
	{"bottom", 2, 134217968, &EmptyCustomAttributesCache, &t72_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t5_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m287_MI = 
{
	".ctor", (methodPointerType)&m287, &t56_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t5_t5, t56_m287_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 3, false, false, 313, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t25_0_0_0;
extern Il2CppType t25_0_0_0;
extern Il2CppType t25_0_0_0;
static ParameterInfo t56_m288_ParameterInfos[] = 
{
	{"top", 0, 134217969, &EmptyCustomAttributesCache, &t25_0_0_0},
	{"middle", 1, 134217970, &EmptyCustomAttributesCache, &t25_0_0_0},
	{"bottom", 2, 134217971, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t5_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m288_MI = 
{
	".ctor", (methodPointerType)&m288, &t56_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t5_t5, t56_m288_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 3, false, false, 314, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t72_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t56__CustomAttributeCache_m289;
MethodInfo m289_MI = 
{
	"get_Top", (methodPointerType)&m289, &t56_TI, &t72_0_0_0, RuntimeInvoker_t5, NULL, &t56__CustomAttributeCache_m289, 2182, 0, 255, 0, false, false, 315, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t72_0_0_0;
static ParameterInfo t56_m290_ParameterInfos[] = 
{
	{"value", 0, 134217972, &EmptyCustomAttributesCache, &t72_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t56__CustomAttributeCache_m290;
MethodInfo m290_MI = 
{
	"set_Top", (methodPointerType)&m290, &t56_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t56_m290_ParameterInfos, &t56__CustomAttributeCache_m290, 2177, 0, 255, 1, false, false, 316, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t72_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t56__CustomAttributeCache_m291;
MethodInfo m291_MI = 
{
	"get_Middle", (methodPointerType)&m291, &t56_TI, &t72_0_0_0, RuntimeInvoker_t5, NULL, &t56__CustomAttributeCache_m291, 2182, 0, 255, 0, false, false, 317, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t72_0_0_0;
static ParameterInfo t56_m292_ParameterInfos[] = 
{
	{"value", 0, 134217973, &EmptyCustomAttributesCache, &t72_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t56__CustomAttributeCache_m292;
MethodInfo m292_MI = 
{
	"set_Middle", (methodPointerType)&m292, &t56_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t56_m292_ParameterInfos, &t56__CustomAttributeCache_m292, 2177, 0, 255, 1, false, false, 318, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t72_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t56__CustomAttributeCache_m293;
MethodInfo m293_MI = 
{
	"get_Bottom", (methodPointerType)&m293, &t56_TI, &t72_0_0_0, RuntimeInvoker_t5, NULL, &t56__CustomAttributeCache_m293, 2182, 0, 255, 0, false, false, 319, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t72_0_0_0;
static ParameterInfo t56_m294_ParameterInfos[] = 
{
	{"value", 0, 134217974, &EmptyCustomAttributesCache, &t72_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t56__CustomAttributeCache_m294;
MethodInfo m294_MI = 
{
	"set_Bottom", (methodPointerType)&m294, &t56_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t56_m294_ParameterInfos, &t56__CustomAttributeCache_m294, 2177, 0, 255, 1, false, false, 320, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t73_0_0_0;
extern void* RuntimeInvoker_t73 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t56__CustomAttributeCache_m295;
MethodInfo m295_MI = 
{
	"get_StationarySince", (methodPointerType)&m295, &t56_TI, &t73_0_0_0, RuntimeInvoker_t73, NULL, &t56__CustomAttributeCache_m295, 2182, 0, 255, 0, false, false, 321, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t73_0_0_0;
extern Il2CppType t73_0_0_0;
static ParameterInfo t56_m296_ParameterInfos[] = 
{
	{"value", 0, 134217975, &EmptyCustomAttributesCache, &t73_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t73 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t56__CustomAttributeCache_m296;
MethodInfo m296_MI = 
{
	"set_StationarySince", (methodPointerType)&m296, &t56_TI, &t109_0_0_0, RuntimeInvoker_t109_t73, t56_m296_ParameterInfos, &t56__CustomAttributeCache_m296, 2179, 0, 255, 1, false, false, 322, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
MethodInfo m297_MI = 
{
	"get_HasWholeGroupEnteredBounds", (methodPointerType)&m297, &t56_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 323, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t25_0_0_0;
static ParameterInfo t56_m298_ParameterInfos[] = 
{
	{"jewel", 0, 134217976, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m298_MI = 
{
	"IsGroupMember", (methodPointerType)&m298, &t56_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t56_m298_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 324, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t56_MIs[] =
{
	&m287_MI,
	&m288_MI,
	&m289_MI,
	&m290_MI,
	&m291_MI,
	&m292_MI,
	&m293_MI,
	&m294_MI,
	&m295_MI,
	&m296_MI,
	&m297_MI,
	&m298_MI,
	NULL
};
static MethodInfo* t56_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
};
void t56_CustomAttributesCacheGenerator_U3CTopU3Ek__BackingField(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t56_CustomAttributesCacheGenerator_U3CMiddleU3Ek__BackingField(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t56_CustomAttributesCacheGenerator_U3CBottomU3Ek__BackingField(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t56_CustomAttributesCacheGenerator_U3CStationarySinceU3Ek__BackingField(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t56_CustomAttributesCacheGenerator_m289(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t56_CustomAttributesCacheGenerator_m290(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t56_CustomAttributesCacheGenerator_m291(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t56_CustomAttributesCacheGenerator_m292(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t56_CustomAttributesCacheGenerator_m293(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t56_CustomAttributesCacheGenerator_m294(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t56_CustomAttributesCacheGenerator_m295(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t56_CustomAttributesCacheGenerator_m296(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t56__CustomAttributeCache_U3CTopU3Ek__BackingField = {
1,
NULL,
&t56_CustomAttributesCacheGenerator_U3CTopU3Ek__BackingField
};
CustomAttributesCache t56__CustomAttributeCache_U3CMiddleU3Ek__BackingField = {
1,
NULL,
&t56_CustomAttributesCacheGenerator_U3CMiddleU3Ek__BackingField
};
CustomAttributesCache t56__CustomAttributeCache_U3CBottomU3Ek__BackingField = {
1,
NULL,
&t56_CustomAttributesCacheGenerator_U3CBottomU3Ek__BackingField
};
CustomAttributesCache t56__CustomAttributeCache_U3CStationarySinceU3Ek__BackingField = {
1,
NULL,
&t56_CustomAttributesCacheGenerator_U3CStationarySinceU3Ek__BackingField
};
CustomAttributesCache t56__CustomAttributeCache_m289 = {
1,
NULL,
&t56_CustomAttributesCacheGenerator_m289
};
CustomAttributesCache t56__CustomAttributeCache_m290 = {
1,
NULL,
&t56_CustomAttributesCacheGenerator_m290
};
CustomAttributesCache t56__CustomAttributeCache_m291 = {
1,
NULL,
&t56_CustomAttributesCacheGenerator_m291
};
CustomAttributesCache t56__CustomAttributeCache_m292 = {
1,
NULL,
&t56_CustomAttributesCacheGenerator_m292
};
CustomAttributesCache t56__CustomAttributeCache_m293 = {
1,
NULL,
&t56_CustomAttributesCacheGenerator_m293
};
CustomAttributesCache t56__CustomAttributeCache_m294 = {
1,
NULL,
&t56_CustomAttributesCacheGenerator_m294
};
CustomAttributesCache t56__CustomAttributeCache_m295 = {
1,
NULL,
&t56_CustomAttributesCacheGenerator_m295
};
CustomAttributesCache t56__CustomAttributeCache_m296 = {
1,
NULL,
&t56_CustomAttributesCacheGenerator_m296
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType t56_1_0_0;
struct t56;
extern CustomAttributesCache t56__CustomAttributeCache_U3CTopU3Ek__BackingField;
extern CustomAttributesCache t56__CustomAttributeCache_U3CMiddleU3Ek__BackingField;
extern CustomAttributesCache t56__CustomAttributeCache_U3CBottomU3Ek__BackingField;
extern CustomAttributesCache t56__CustomAttributeCache_U3CStationarySinceU3Ek__BackingField;
extern CustomAttributesCache t56__CustomAttributeCache_m289;
extern CustomAttributesCache t56__CustomAttributeCache_m290;
extern CustomAttributesCache t56__CustomAttributeCache_m291;
extern CustomAttributesCache t56__CustomAttributeCache_m292;
extern CustomAttributesCache t56__CustomAttributeCache_m293;
extern CustomAttributesCache t56__CustomAttributeCache_m294;
extern CustomAttributesCache t56__CustomAttributeCache_m295;
extern CustomAttributesCache t56__CustomAttributeCache_m296;
TypeInfo t56_TI = 
{
	&g_AssemblyU2DCSharp_dll_Image, NULL, "JewelGroup", "JewelMine.Engine.Models", t56_MIs, t56_PIs, t56_FIs, NULL, &t5_TI, NULL, NULL, &t56_TI, NULL, t56_VT, &EmptyCustomAttributesCache, &t56_TI, &t56_0_0_0, &t56_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t56), 0, -1, 0, 0, -1, 1056769, 0, false, false, false, false, false, false, false, false, false, false, false, false, 12, 5, 4, 0, 0, 4, 0, 0};
#ifndef _MSC_VER
#else
#endif



 void m299 (t72 * __this, t25 * p0, t36 * p1, MethodInfo* method){
	{
		m460(__this, &m460_MI);
		m302(__this, p0, &m302_MI);
		m304(__this, p1, &m304_MI);
		m306(__this, 0, &m306_MI);
		return;
	}
}
extern MethodInfo m300_MI;
 void m300 (t72 * __this, t25 * p0, t36 * p1, bool p2, MethodInfo* method){
	{
		m460(__this, &m460_MI);
		m302(__this, p0, &m302_MI);
		m304(__this, p1, &m304_MI);
		m306(__this, p2, &m306_MI);
		return;
	}
}
 t25 * m301 (t72 * __this, MethodInfo* method){
	{
		t25 * L_0 = (__this->f0);
		return L_0;
	}
}
 void m302 (t72 * __this, t25 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		return;
	}
}
 t36 * m303 (t72 * __this, MethodInfo* method){
	{
		t36 * L_0 = (__this->f1);
		return L_0;
	}
}
 void m304 (t72 * __this, t36 * p0, MethodInfo* method){
	{
		__this->f1 = p0;
		return;
	}
}
 bool m305 (t72 * __this, MethodInfo* method){
	{
		bool L_0 = (__this->f2);
		return L_0;
	}
}
 void m306 (t72 * __this, bool p0, MethodInfo* method){
	{
		__this->f2 = p0;
		return;
	}
}
// Metadata Definition JewelMine.Engine.Models.JewelGroupMember
extern Il2CppType t25_0_0_1;
extern CustomAttributesCache t72__CustomAttributeCache_U3CJewelU3Ek__BackingField;
FieldInfo t72_f0_FieldInfo = 
{
	"<Jewel>k__BackingField", &t25_0_0_1, &t72_TI, offsetof(t72, f0), &t72__CustomAttributeCache_U3CJewelU3Ek__BackingField};
extern Il2CppType t36_0_0_1;
extern CustomAttributesCache t72__CustomAttributeCache_U3CCoordinatesU3Ek__BackingField;
FieldInfo t72_f1_FieldInfo = 
{
	"<Coordinates>k__BackingField", &t36_0_0_1, &t72_TI, offsetof(t72, f1), &t72__CustomAttributeCache_U3CCoordinatesU3Ek__BackingField};
extern Il2CppType t108_0_0_1;
extern CustomAttributesCache t72__CustomAttributeCache_U3CHasEnteredBoundsU3Ek__BackingField;
FieldInfo t72_f2_FieldInfo = 
{
	"<HasEnteredBounds>k__BackingField", &t108_0_0_1, &t72_TI, offsetof(t72, f2), &t72__CustomAttributeCache_U3CHasEnteredBoundsU3Ek__BackingField};
static FieldInfo* t72_FIs[] =
{
	&t72_f0_FieldInfo,
	&t72_f1_FieldInfo,
	&t72_f2_FieldInfo,
	NULL
};
static PropertyInfo t72____Jewel_PropertyInfo = 
{
	&t72_TI, "Jewel", &m301_MI, &m302_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo t72____Coordinates_PropertyInfo = 
{
	&t72_TI, "Coordinates", &m303_MI, &m304_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo t72____HasEnteredBounds_PropertyInfo = 
{
	&t72_TI, "HasEnteredBounds", &m305_MI, &m306_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t72_PIs[] =
{
	&t72____Jewel_PropertyInfo,
	&t72____Coordinates_PropertyInfo,
	&t72____HasEnteredBounds_PropertyInfo,
	NULL
};
extern Il2CppType t25_0_0_0;
extern Il2CppType t36_0_0_0;
static ParameterInfo t72_m299_ParameterInfos[] = 
{
	{"jewel", 0, 134217977, &EmptyCustomAttributesCache, &t25_0_0_0},
	{"coordinates", 1, 134217978, &EmptyCustomAttributesCache, &t36_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m299_MI = 
{
	".ctor", (methodPointerType)&m299, &t72_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t5, t72_m299_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, false, 325, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t25_0_0_0;
extern Il2CppType t36_0_0_0;
extern Il2CppType t108_0_0_0;
static ParameterInfo t72_m300_ParameterInfos[] = 
{
	{"jewel", 0, 134217979, &EmptyCustomAttributesCache, &t25_0_0_0},
	{"coordinates", 1, 134217980, &EmptyCustomAttributesCache, &t36_0_0_0},
	{"hasEnteredBounds", 2, 134217981, &EmptyCustomAttributesCache, &t108_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t5_t111 (MethodInfo* method, void* obj, void** args);
MethodInfo m300_MI = 
{
	".ctor", (methodPointerType)&m300, &t72_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t5_t111, t72_m300_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 3, false, false, 326, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t72__CustomAttributeCache_m301;
MethodInfo m301_MI = 
{
	"get_Jewel", (methodPointerType)&m301, &t72_TI, &t25_0_0_0, RuntimeInvoker_t5, NULL, &t72__CustomAttributeCache_m301, 2182, 0, 255, 0, false, false, 327, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t25_0_0_0;
static ParameterInfo t72_m302_ParameterInfos[] = 
{
	{"value", 0, 134217982, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t72__CustomAttributeCache_m302;
MethodInfo m302_MI = 
{
	"set_Jewel", (methodPointerType)&m302, &t72_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t72_m302_ParameterInfos, &t72__CustomAttributeCache_m302, 2179, 0, 255, 1, false, false, 328, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t36_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t72__CustomAttributeCache_m303;
MethodInfo m303_MI = 
{
	"get_Coordinates", (methodPointerType)&m303, &t72_TI, &t36_0_0_0, RuntimeInvoker_t5, NULL, &t72__CustomAttributeCache_m303, 2182, 0, 255, 0, false, false, 329, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t36_0_0_0;
static ParameterInfo t72_m304_ParameterInfos[] = 
{
	{"value", 0, 134217983, &EmptyCustomAttributesCache, &t36_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t72__CustomAttributeCache_m304;
MethodInfo m304_MI = 
{
	"set_Coordinates", (methodPointerType)&m304, &t72_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t72_m304_ParameterInfos, &t72__CustomAttributeCache_m304, 2179, 0, 255, 1, false, false, 330, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t72__CustomAttributeCache_m305;
MethodInfo m305_MI = 
{
	"get_HasEnteredBounds", (methodPointerType)&m305, &t72_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &t72__CustomAttributeCache_m305, 2182, 0, 255, 0, false, false, 331, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t108_0_0_0;
static ParameterInfo t72_m306_ParameterInfos[] = 
{
	{"value", 0, 134217984, &EmptyCustomAttributesCache, &t108_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t111 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t72__CustomAttributeCache_m306;
MethodInfo m306_MI = 
{
	"set_HasEnteredBounds", (methodPointerType)&m306, &t72_TI, &t109_0_0_0, RuntimeInvoker_t109_t111, t72_m306_ParameterInfos, &t72__CustomAttributeCache_m306, 2179, 0, 255, 1, false, false, 332, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t72_MIs[] =
{
	&m299_MI,
	&m300_MI,
	&m301_MI,
	&m302_MI,
	&m303_MI,
	&m304_MI,
	&m305_MI,
	&m306_MI,
	NULL
};
static MethodInfo* t72_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
};
void t72_CustomAttributesCacheGenerator_U3CJewelU3Ek__BackingField(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t72_CustomAttributesCacheGenerator_U3CCoordinatesU3Ek__BackingField(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t72_CustomAttributesCacheGenerator_U3CHasEnteredBoundsU3Ek__BackingField(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t72_CustomAttributesCacheGenerator_m301(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t72_CustomAttributesCacheGenerator_m302(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t72_CustomAttributesCacheGenerator_m303(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t72_CustomAttributesCacheGenerator_m304(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t72_CustomAttributesCacheGenerator_m305(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t72_CustomAttributesCacheGenerator_m306(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t72__CustomAttributeCache_U3CJewelU3Ek__BackingField = {
1,
NULL,
&t72_CustomAttributesCacheGenerator_U3CJewelU3Ek__BackingField
};
CustomAttributesCache t72__CustomAttributeCache_U3CCoordinatesU3Ek__BackingField = {
1,
NULL,
&t72_CustomAttributesCacheGenerator_U3CCoordinatesU3Ek__BackingField
};
CustomAttributesCache t72__CustomAttributeCache_U3CHasEnteredBoundsU3Ek__BackingField = {
1,
NULL,
&t72_CustomAttributesCacheGenerator_U3CHasEnteredBoundsU3Ek__BackingField
};
CustomAttributesCache t72__CustomAttributeCache_m301 = {
1,
NULL,
&t72_CustomAttributesCacheGenerator_m301
};
CustomAttributesCache t72__CustomAttributeCache_m302 = {
1,
NULL,
&t72_CustomAttributesCacheGenerator_m302
};
CustomAttributesCache t72__CustomAttributeCache_m303 = {
1,
NULL,
&t72_CustomAttributesCacheGenerator_m303
};
CustomAttributesCache t72__CustomAttributeCache_m304 = {
1,
NULL,
&t72_CustomAttributesCacheGenerator_m304
};
CustomAttributesCache t72__CustomAttributeCache_m305 = {
1,
NULL,
&t72_CustomAttributesCacheGenerator_m305
};
CustomAttributesCache t72__CustomAttributeCache_m306 = {
1,
NULL,
&t72_CustomAttributesCacheGenerator_m306
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType t72_1_0_0;
struct t72;
extern CustomAttributesCache t72__CustomAttributeCache_U3CJewelU3Ek__BackingField;
extern CustomAttributesCache t72__CustomAttributeCache_U3CCoordinatesU3Ek__BackingField;
extern CustomAttributesCache t72__CustomAttributeCache_U3CHasEnteredBoundsU3Ek__BackingField;
extern CustomAttributesCache t72__CustomAttributeCache_m301;
extern CustomAttributesCache t72__CustomAttributeCache_m302;
extern CustomAttributesCache t72__CustomAttributeCache_m303;
extern CustomAttributesCache t72__CustomAttributeCache_m304;
extern CustomAttributesCache t72__CustomAttributeCache_m305;
extern CustomAttributesCache t72__CustomAttributeCache_m306;
TypeInfo t72_TI = 
{
	&g_AssemblyU2DCSharp_dll_Image, NULL, "JewelGroupMember", "JewelMine.Engine.Models", t72_MIs, t72_PIs, t72_FIs, NULL, &t5_TI, NULL, NULL, &t72_TI, NULL, t72_VT, &EmptyCustomAttributesCache, &t72_TI, &t72_0_0_0, &t72_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t72), 0, -1, 0, 0, -1, 1056769, 0, false, false, false, false, false, false, false, false, false, false, false, false, 8, 3, 3, 0, 0, 4, 0, 0};
#ifndef _MSC_VER
#else
#endif



 void m307 (t74 * __this, MethodInfo* method){
	{
		m460(__this, &m460_MI);
		return;
	}
}
extern MethodInfo m308_MI;
 t25 * m308 (t74 * __this, MethodInfo* method){
	{
		t25 * L_0 = (__this->f0);
		return L_0;
	}
}
 void m309 (t74 * __this, t25 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		return;
	}
}
extern MethodInfo m310_MI;
 bool m310 (t74 * __this, MethodInfo* method){
	{
		bool L_0 = (__this->f1);
		return L_0;
	}
}
extern MethodInfo m311_MI;
 void m311 (t74 * __this, bool p0, MethodInfo* method){
	{
		__this->f1 = p0;
		return;
	}
}
extern MethodInfo m312_MI;
 t36 * m312 (t74 * __this, MethodInfo* method){
	{
		t36 * L_0 = (__this->f2);
		return L_0;
	}
}
 void m313 (t74 * __this, t36 * p0, MethodInfo* method){
	{
		__this->f2 = p0;
		return;
	}
}
extern MethodInfo m314_MI;
 t36 * m314 (t74 * __this, MethodInfo* method){
	{
		t36 * L_0 = (__this->f3);
		return L_0;
	}
}
 void m315 (t74 * __this, t36 * p0, MethodInfo* method){
	{
		__this->f3 = p0;
		return;
	}
}
// Metadata Definition JewelMine.Engine.Models.JewelMovement
extern Il2CppType t25_0_0_1;
extern CustomAttributesCache t74__CustomAttributeCache_U3CJewelU3Ek__BackingField;
FieldInfo t74_f0_FieldInfo = 
{
	"<Jewel>k__BackingField", &t25_0_0_1, &t74_TI, offsetof(t74, f0), &t74__CustomAttributeCache_U3CJewelU3Ek__BackingField};
extern Il2CppType t108_0_0_1;
extern CustomAttributesCache t74__CustomAttributeCache_U3CIsNewJewelU3Ek__BackingField;
FieldInfo t74_f1_FieldInfo = 
{
	"<IsNewJewel>k__BackingField", &t108_0_0_1, &t74_TI, offsetof(t74, f1), &t74__CustomAttributeCache_U3CIsNewJewelU3Ek__BackingField};
extern Il2CppType t36_0_0_1;
extern CustomAttributesCache t74__CustomAttributeCache_U3COriginalU3Ek__BackingField;
FieldInfo t74_f2_FieldInfo = 
{
	"<Original>k__BackingField", &t36_0_0_1, &t74_TI, offsetof(t74, f2), &t74__CustomAttributeCache_U3COriginalU3Ek__BackingField};
extern Il2CppType t36_0_0_1;
extern CustomAttributesCache t74__CustomAttributeCache_U3CNewU3Ek__BackingField;
FieldInfo t74_f3_FieldInfo = 
{
	"<New>k__BackingField", &t36_0_0_1, &t74_TI, offsetof(t74, f3), &t74__CustomAttributeCache_U3CNewU3Ek__BackingField};
static FieldInfo* t74_FIs[] =
{
	&t74_f0_FieldInfo,
	&t74_f1_FieldInfo,
	&t74_f2_FieldInfo,
	&t74_f3_FieldInfo,
	NULL
};
static PropertyInfo t74____Jewel_PropertyInfo = 
{
	&t74_TI, "Jewel", &m308_MI, &m309_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo t74____IsNewJewel_PropertyInfo = 
{
	&t74_TI, "IsNewJewel", &m310_MI, &m311_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo t74____Original_PropertyInfo = 
{
	&t74_TI, "Original", &m312_MI, &m313_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo t74____New_PropertyInfo = 
{
	&t74_TI, "New", &m314_MI, &m315_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t74_PIs[] =
{
	&t74____Jewel_PropertyInfo,
	&t74____IsNewJewel_PropertyInfo,
	&t74____Original_PropertyInfo,
	&t74____New_PropertyInfo,
	NULL
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m307_MI = 
{
	".ctor", (methodPointerType)&m307, &t74_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 333, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t25_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t74__CustomAttributeCache_m308;
MethodInfo m308_MI = 
{
	"get_Jewel", (methodPointerType)&m308, &t74_TI, &t25_0_0_0, RuntimeInvoker_t5, NULL, &t74__CustomAttributeCache_m308, 2182, 0, 255, 0, false, false, 334, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t25_0_0_0;
static ParameterInfo t74_m309_ParameterInfos[] = 
{
	{"value", 0, 134217985, &EmptyCustomAttributesCache, &t25_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t74__CustomAttributeCache_m309;
MethodInfo m309_MI = 
{
	"set_Jewel", (methodPointerType)&m309, &t74_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t74_m309_ParameterInfos, &t74__CustomAttributeCache_m309, 2182, 0, 255, 1, false, false, 335, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t74__CustomAttributeCache_m310;
MethodInfo m310_MI = 
{
	"get_IsNewJewel", (methodPointerType)&m310, &t74_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &t74__CustomAttributeCache_m310, 2182, 0, 255, 0, false, false, 336, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t108_0_0_0;
static ParameterInfo t74_m311_ParameterInfos[] = 
{
	{"value", 0, 134217986, &EmptyCustomAttributesCache, &t108_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t111 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t74__CustomAttributeCache_m311;
MethodInfo m311_MI = 
{
	"set_IsNewJewel", (methodPointerType)&m311, &t74_TI, &t109_0_0_0, RuntimeInvoker_t109_t111, t74_m311_ParameterInfos, &t74__CustomAttributeCache_m311, 2182, 0, 255, 1, false, false, 337, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t36_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t74__CustomAttributeCache_m312;
MethodInfo m312_MI = 
{
	"get_Original", (methodPointerType)&m312, &t74_TI, &t36_0_0_0, RuntimeInvoker_t5, NULL, &t74__CustomAttributeCache_m312, 2182, 0, 255, 0, false, false, 338, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t36_0_0_0;
static ParameterInfo t74_m313_ParameterInfos[] = 
{
	{"value", 0, 134217987, &EmptyCustomAttributesCache, &t36_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t74__CustomAttributeCache_m313;
MethodInfo m313_MI = 
{
	"set_Original", (methodPointerType)&m313, &t74_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t74_m313_ParameterInfos, &t74__CustomAttributeCache_m313, 2182, 0, 255, 1, false, false, 339, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t36_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t74__CustomAttributeCache_m314;
MethodInfo m314_MI = 
{
	"get_New", (methodPointerType)&m314, &t74_TI, &t36_0_0_0, RuntimeInvoker_t5, NULL, &t74__CustomAttributeCache_m314, 2182, 0, 255, 0, false, false, 340, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t36_0_0_0;
static ParameterInfo t74_m315_ParameterInfos[] = 
{
	{"value", 0, 134217988, &EmptyCustomAttributesCache, &t36_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t74__CustomAttributeCache_m315;
MethodInfo m315_MI = 
{
	"set_New", (methodPointerType)&m315, &t74_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t74_m315_ParameterInfos, &t74__CustomAttributeCache_m315, 2182, 0, 255, 1, false, false, 341, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t74_MIs[] =
{
	&m307_MI,
	&m308_MI,
	&m309_MI,
	&m310_MI,
	&m311_MI,
	&m312_MI,
	&m313_MI,
	&m314_MI,
	&m315_MI,
	NULL
};
static MethodInfo* t74_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
};
void t74_CustomAttributesCacheGenerator_U3CJewelU3Ek__BackingField(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t74_CustomAttributesCacheGenerator_U3CIsNewJewelU3Ek__BackingField(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t74_CustomAttributesCacheGenerator_U3COriginalU3Ek__BackingField(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t74_CustomAttributesCacheGenerator_U3CNewU3Ek__BackingField(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t74_CustomAttributesCacheGenerator_m308(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t74_CustomAttributesCacheGenerator_m309(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t74_CustomAttributesCacheGenerator_m310(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t74_CustomAttributesCacheGenerator_m311(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t74_CustomAttributesCacheGenerator_m312(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t74_CustomAttributesCacheGenerator_m313(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t74_CustomAttributesCacheGenerator_m314(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t74_CustomAttributesCacheGenerator_m315(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t74__CustomAttributeCache_U3CJewelU3Ek__BackingField = {
1,
NULL,
&t74_CustomAttributesCacheGenerator_U3CJewelU3Ek__BackingField
};
CustomAttributesCache t74__CustomAttributeCache_U3CIsNewJewelU3Ek__BackingField = {
1,
NULL,
&t74_CustomAttributesCacheGenerator_U3CIsNewJewelU3Ek__BackingField
};
CustomAttributesCache t74__CustomAttributeCache_U3COriginalU3Ek__BackingField = {
1,
NULL,
&t74_CustomAttributesCacheGenerator_U3COriginalU3Ek__BackingField
};
CustomAttributesCache t74__CustomAttributeCache_U3CNewU3Ek__BackingField = {
1,
NULL,
&t74_CustomAttributesCacheGenerator_U3CNewU3Ek__BackingField
};
CustomAttributesCache t74__CustomAttributeCache_m308 = {
1,
NULL,
&t74_CustomAttributesCacheGenerator_m308
};
CustomAttributesCache t74__CustomAttributeCache_m309 = {
1,
NULL,
&t74_CustomAttributesCacheGenerator_m309
};
CustomAttributesCache t74__CustomAttributeCache_m310 = {
1,
NULL,
&t74_CustomAttributesCacheGenerator_m310
};
CustomAttributesCache t74__CustomAttributeCache_m311 = {
1,
NULL,
&t74_CustomAttributesCacheGenerator_m311
};
CustomAttributesCache t74__CustomAttributeCache_m312 = {
1,
NULL,
&t74_CustomAttributesCacheGenerator_m312
};
CustomAttributesCache t74__CustomAttributeCache_m313 = {
1,
NULL,
&t74_CustomAttributesCacheGenerator_m313
};
CustomAttributesCache t74__CustomAttributeCache_m314 = {
1,
NULL,
&t74_CustomAttributesCacheGenerator_m314
};
CustomAttributesCache t74__CustomAttributeCache_m315 = {
1,
NULL,
&t74_CustomAttributesCacheGenerator_m315
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType t74_0_0_0;
extern Il2CppType t74_1_0_0;
struct t74;
extern CustomAttributesCache t74__CustomAttributeCache_U3CJewelU3Ek__BackingField;
extern CustomAttributesCache t74__CustomAttributeCache_U3CIsNewJewelU3Ek__BackingField;
extern CustomAttributesCache t74__CustomAttributeCache_U3COriginalU3Ek__BackingField;
extern CustomAttributesCache t74__CustomAttributeCache_U3CNewU3Ek__BackingField;
extern CustomAttributesCache t74__CustomAttributeCache_m308;
extern CustomAttributesCache t74__CustomAttributeCache_m309;
extern CustomAttributesCache t74__CustomAttributeCache_m310;
extern CustomAttributesCache t74__CustomAttributeCache_m311;
extern CustomAttributesCache t74__CustomAttributeCache_m312;
extern CustomAttributesCache t74__CustomAttributeCache_m313;
extern CustomAttributesCache t74__CustomAttributeCache_m314;
extern CustomAttributesCache t74__CustomAttributeCache_m315;
TypeInfo t74_TI = 
{
	&g_AssemblyU2DCSharp_dll_Image, NULL, "JewelMovement", "JewelMine.Engine.Models", t74_MIs, t74_PIs, t74_FIs, NULL, &t5_TI, NULL, NULL, &t74_TI, NULL, t74_VT, &EmptyCustomAttributesCache, &t74_TI, &t74_0_0_0, &t74_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t74), 0, -1, 0, 0, -1, 1048577, 0, false, false, false, false, false, false, false, false, false, false, false, false, 9, 4, 4, 0, 0, 4, 0, 0};
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m318_MI;


 void m316 (t15 * __this, MethodInfo* method){
	{
		m150(__this, &m150_MI);
		return;
	}
}
 int32_t m317 (t15 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->f1);
		return L_0;
	}
}
 void m318 (t15 * __this, int32_t p0, MethodInfo* method){
	{
		__this->f1 = p0;
		return;
	}
}
 int32_t m319 (t15 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->f2);
		return L_0;
	}
}
 void m320 (t15 * __this, int32_t p0, MethodInfo* method){
	{
		__this->f2 = p0;
		return;
	}
}
 void m321 (t15 * __this, MethodInfo* method){
	{
		int32_t L_0 = m317(__this, &m317_MI);
		m318(__this, ((int32_t)(L_0+1)), &m318_MI);
		return;
	}
}
// Metadata Definition JewelMine.Engine.Models.MarkedCollisionGroup
extern Il2CppType t110_0_0_1;
extern CustomAttributesCache t15__CustomAttributeCache_U3CCollisionTickCountU3Ek__BackingField;
FieldInfo t15_f1_FieldInfo = 
{
	"<CollisionTickCount>k__BackingField", &t110_0_0_1, &t15_TI, offsetof(t15, f1), &t15__CustomAttributeCache_U3CCollisionTickCountU3Ek__BackingField};
extern Il2CppType t21_0_0_1;
extern CustomAttributesCache t15__CustomAttributeCache_U3CDirectionU3Ek__BackingField;
FieldInfo t15_f2_FieldInfo = 
{
	"<Direction>k__BackingField", &t21_0_0_1, &t15_TI, offsetof(t15, f2), &t15__CustomAttributeCache_U3CDirectionU3Ek__BackingField};
static FieldInfo* t15_FIs[] =
{
	&t15_f1_FieldInfo,
	&t15_f2_FieldInfo,
	NULL
};
static PropertyInfo t15____CollisionTickCount_PropertyInfo = 
{
	&t15_TI, "CollisionTickCount", &m317_MI, &m318_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo t15____Direction_PropertyInfo = 
{
	&t15_TI, "Direction", &m319_MI, &m320_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t15_PIs[] =
{
	&t15____CollisionTickCount_PropertyInfo,
	&t15____Direction_PropertyInfo,
	NULL
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m316_MI = 
{
	".ctor", (methodPointerType)&m316, &t15_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 342, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t15__CustomAttributeCache_m317;
MethodInfo m317_MI = 
{
	"get_CollisionTickCount", (methodPointerType)&m317, &t15_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &t15__CustomAttributeCache_m317, 2182, 0, 255, 0, false, false, 343, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t110_0_0_0;
static ParameterInfo t15_m318_ParameterInfos[] = 
{
	{"value", 0, 134217989, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t15__CustomAttributeCache_m318;
MethodInfo m318_MI = 
{
	"set_CollisionTickCount", (methodPointerType)&m318, &t15_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t15_m318_ParameterInfos, &t15__CustomAttributeCache_m318, 2179, 0, 255, 1, false, false, 344, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t21_0_0_0;
extern void* RuntimeInvoker_t21 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t15__CustomAttributeCache_m319;
MethodInfo m319_MI = 
{
	"get_Direction", (methodPointerType)&m319, &t15_TI, &t21_0_0_0, RuntimeInvoker_t21, NULL, &t15__CustomAttributeCache_m319, 2182, 0, 255, 0, false, false, 345, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t21_0_0_0;
static ParameterInfo t15_m320_ParameterInfos[] = 
{
	{"value", 0, 134217990, &EmptyCustomAttributesCache, &t21_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t15__CustomAttributeCache_m320;
MethodInfo m320_MI = 
{
	"set_Direction", (methodPointerType)&m320, &t15_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t15_m320_ParameterInfos, &t15__CustomAttributeCache_m320, 2182, 0, 255, 1, false, false, 346, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m321_MI = 
{
	"IncrementCollisionTickCount", (methodPointerType)&m321, &t15_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, false, 347, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t15_MIs[] =
{
	&m316_MI,
	&m317_MI,
	&m318_MI,
	&m319_MI,
	&m320_MI,
	&m321_MI,
	NULL
};
static MethodInfo* t15_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
};
void t15_CustomAttributesCacheGenerator_U3CCollisionTickCountU3Ek__BackingField(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t15_CustomAttributesCacheGenerator_U3CDirectionU3Ek__BackingField(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t15_CustomAttributesCacheGenerator_m317(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t15_CustomAttributesCacheGenerator_m318(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t15_CustomAttributesCacheGenerator_m319(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t15_CustomAttributesCacheGenerator_m320(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t15__CustomAttributeCache_U3CCollisionTickCountU3Ek__BackingField = {
1,
NULL,
&t15_CustomAttributesCacheGenerator_U3CCollisionTickCountU3Ek__BackingField
};
CustomAttributesCache t15__CustomAttributeCache_U3CDirectionU3Ek__BackingField = {
1,
NULL,
&t15_CustomAttributesCacheGenerator_U3CDirectionU3Ek__BackingField
};
CustomAttributesCache t15__CustomAttributeCache_m317 = {
1,
NULL,
&t15_CustomAttributesCacheGenerator_m317
};
CustomAttributesCache t15__CustomAttributeCache_m318 = {
1,
NULL,
&t15_CustomAttributesCacheGenerator_m318
};
CustomAttributesCache t15__CustomAttributeCache_m319 = {
1,
NULL,
&t15_CustomAttributesCacheGenerator_m319
};
CustomAttributesCache t15__CustomAttributeCache_m320 = {
1,
NULL,
&t15_CustomAttributesCacheGenerator_m320
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType t15_1_0_0;
struct t15;
extern CustomAttributesCache t15__CustomAttributeCache_U3CCollisionTickCountU3Ek__BackingField;
extern CustomAttributesCache t15__CustomAttributeCache_U3CDirectionU3Ek__BackingField;
extern CustomAttributesCache t15__CustomAttributeCache_m317;
extern CustomAttributesCache t15__CustomAttributeCache_m318;
extern CustomAttributesCache t15__CustomAttributeCache_m319;
extern CustomAttributesCache t15__CustomAttributeCache_m320;
TypeInfo t15_TI = 
{
	&g_AssemblyU2DCSharp_dll_Image, NULL, "MarkedCollisionGroup", "JewelMine.Engine.Models", t15_MIs, t15_PIs, t15_FIs, NULL, &t31_TI, NULL, NULL, &t15_TI, NULL, t15_VT, &EmptyCustomAttributesCache, &t15_TI, &t15_0_0_0, &t15_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t15), 0, -1, 0, 0, -1, 1056769, 0, false, false, false, false, false, false, false, false, false, false, false, false, 6, 2, 2, 0, 0, 4, 0, 0};
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t75_TI;
extern MethodInfo m325_MI;
extern MethodInfo m327_MI;
extern MethodInfo m655_MI;
extern MethodInfo m337_MI;
extern MethodInfo m331_MI;
extern MethodInfo m333_MI;
extern MethodInfo m335_MI;


extern MethodInfo m322_MI;
 void m322 (t68 * __this, MethodInfo* method){
	{
		m323(__this, ((int32_t)22), ((int32_t)22), &m323_MI);
		return;
	}
}
 void m323 (t68 * __this, int32_t p0, int32_t p1, MethodInfo* method){
	{
		m460(__this, &m460_MI);
		int32_t L_0 = m324(__this, &m324_MI);
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001a;
		}
	}
	{
		m325(__this, ((int32_t)22), &m325_MI);
	}

IL_001a:
	{
		int32_t L_1 = m326(__this, &m326_MI);
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_002e;
		}
	}
	{
		m327(__this, ((int32_t)22), &m327_MI);
	}

IL_002e:
	{
		m325(__this, p0, &m325_MI);
		m327(__this, p1, &m327_MI);
		m329(__this, (t56 *)NULL, &m329_MI);
		int32_t L_2 = m324(__this, &m324_MI);
		int32_t L_3 = m326(__this, &m326_MI);
		t75* L_4 = (t75*)GenArrayNew2(InitializedTypeInfo(&t75_TI), L_2, L_3);
		m337(__this, L_4, &m337_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t65_TI));
		t65 * L_5 = (t65 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t65_TI));
		m529(L_5, &m529_MI);
		m331(__this, L_5, &m331_MI);
		t65 * L_6 = (t65 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t65_TI));
		m529(L_6, &m529_MI);
		m333(__this, L_6, &m333_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t66_TI));
		t66 * L_7 = (t66 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t66_TI));
		m652(L_7, &m652_MI);
		m335(__this, L_7, &m335_MI);
		return;
	}
}
 int32_t m324 (t68 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->f0);
		return L_0;
	}
}
 void m325 (t68 * __this, int32_t p0, MethodInfo* method){
	{
		__this->f0 = p0;
		return;
	}
}
 int32_t m326 (t68 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->f1);
		return L_0;
	}
}
 void m327 (t68 * __this, int32_t p0, MethodInfo* method){
	{
		__this->f1 = p0;
		return;
	}
}
 t56 * m328 (t68 * __this, MethodInfo* method){
	{
		t56 * L_0 = (__this->f2);
		return L_0;
	}
}
 void m329 (t68 * __this, t56 * p0, MethodInfo* method){
	{
		__this->f2 = p0;
		return;
	}
}
 t65 * m330 (t68 * __this, MethodInfo* method){
	{
		t65 * L_0 = (__this->f3);
		return L_0;
	}
}
 void m331 (t68 * __this, t65 * p0, MethodInfo* method){
	{
		__this->f3 = p0;
		return;
	}
}
extern MethodInfo m332_MI;
 t65 * m332 (t68 * __this, MethodInfo* method){
	{
		t65 * L_0 = (__this->f4);
		return L_0;
	}
}
 void m333 (t68 * __this, t65 * p0, MethodInfo* method){
	{
		__this->f4 = p0;
		return;
	}
}
 t66 * m334 (t68 * __this, MethodInfo* method){
	{
		t66 * L_0 = (__this->f5);
		return L_0;
	}
}
 void m335 (t68 * __this, t66 * p0, MethodInfo* method){
	{
		__this->f5 = p0;
		return;
	}
}
 t75* m336 (t68 * __this, MethodInfo* method){
	{
		t75* L_0 = (__this->f6);
		return L_0;
	}
}
 void m337 (t68 * __this, t75* p0, MethodInfo* method){
	{
		__this->f6 = p0;
		return;
	}
}
 t70 * m338 (t68 * __this, t36 * p0, MethodInfo* method){
	{
		t75* L_0 = m336(__this, &m336_MI);
		int32_t L_1 = m164(p0, &m164_MI);
		int32_t L_2 = m166(p0, &m166_MI);
		t70 * L_3 = GenArrayGet2(L_0, L_1, L_2, t70 *);;
		return L_3;
	}
}
 void m339 (t68 * __this, t36 * p0, t70 * p1, MethodInfo* method){
	{
		t75* L_0 = m336(__this, &m336_MI);
		int32_t L_1 = m164(p0, &m164_MI);
		int32_t L_2 = m166(p0, &m166_MI);
		GenArraySet2(L_0, L_1, L_2, p1, t70 *);;
		return;
	}
}
 bool m340 (t68 * __this, t36 * p0, MethodInfo* method){
	{
		if (p0)
		{
			goto IL_0016;
		}
	}
	{
		t160 * L_0 = (t160 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t160_TI));
		m613(L_0, (t11*) &_stringLiteral25, (t11*) &_stringLiteral27, &m613_MI);
		il2cpp_codegen_raise_exception(L_0);
	}

IL_0016:
	{
		t75* L_1 = m336(__this, &m336_MI);
		int32_t L_2 = m164(p0, &m164_MI);
		int32_t L_3 = m166(p0, &m166_MI);
		t70 * L_4 = GenArrayGet2(L_1, L_2, L_3, t70 *);;
		return ((((t70 *)L_4) == ((t5 *)NULL))? 1 : 0);
	}
}
 bool m341 (t68 * __this, t36 * p0, MethodInfo* method){
	int32_t G_B7_0 = 0;
	{
		if (p0)
		{
			goto IL_0016;
		}
	}
	{
		t160 * L_0 = (t160 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t160_TI));
		m613(L_0, (t11*) &_stringLiteral25, (t11*) &_stringLiteral27, &m613_MI);
		il2cpp_codegen_raise_exception(L_0);
	}

IL_0016:
	{
		int32_t L_1 = m164(p0, &m164_MI);
		if ((((int32_t)L_1) < ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_2 = m164(p0, &m164_MI);
		int32_t L_3 = m324(__this, &m324_MI);
		if ((((int32_t)L_2) >= ((int32_t)L_3)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_4 = m166(p0, &m166_MI);
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_5 = m166(p0, &m166_MI);
		int32_t L_6 = m326(__this, &m326_MI);
		G_B7_0 = ((((int32_t)L_5) < ((int32_t)L_6))? 1 : 0);
		goto IL_0050;
	}

IL_004f:
	{
		G_B7_0 = 0;
	}

IL_0050:
	{
		return G_B7_0;
	}
}
 bool m342 (t68 * __this, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		goto IL_0036;
	}

IL_0007:
	{
		V_1 = 0;
		goto IL_0026;
	}

IL_000e:
	{
		t75* L_0 = m336(__this, &m336_MI);
		t70 * L_1 = GenArrayGet2(L_0, V_0, V_1, t70 *);;
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		return 0;
	}

IL_0022:
	{
		V_1 = ((int32_t)(V_1+1));
	}

IL_0026:
	{
		int32_t L_2 = m326(__this, &m326_MI);
		if ((((int32_t)V_1) < ((int32_t)L_2)))
		{
			goto IL_000e;
		}
	}
	{
		V_0 = ((int32_t)(V_0+1));
	}

IL_0036:
	{
		int32_t L_3 = m324(__this, &m324_MI);
		if ((((int32_t)V_0) < ((int32_t)L_3)))
		{
			goto IL_0007;
		}
	}
	{
		return 1;
	}
}
 int32_t m343 (t68 * __this, MethodInfo* method){
	{
		int32_t L_0 = m324(__this, &m324_MI);
		return ((int32_t)(L_0-1));
	}
}
 int32_t m344 (t68 * __this, MethodInfo* method){
	{
		int32_t L_0 = m326(__this, &m326_MI);
		return ((int32_t)(L_0-1));
	}
}
// Metadata Definition JewelMine.Engine.Models.Mine
extern Il2CppType t110_0_0_1;
extern CustomAttributesCache t68__CustomAttributeCache_U3CColumnsU3Ek__BackingField;
FieldInfo t68_f0_FieldInfo = 
{
	"<Columns>k__BackingField", &t110_0_0_1, &t68_TI, offsetof(t68, f0), &t68__CustomAttributeCache_U3CColumnsU3Ek__BackingField};
extern Il2CppType t110_0_0_1;
extern CustomAttributesCache t68__CustomAttributeCache_U3CDepthU3Ek__BackingField;
FieldInfo t68_f1_FieldInfo = 
{
	"<Depth>k__BackingField", &t110_0_0_1, &t68_TI, offsetof(t68, f1), &t68__CustomAttributeCache_U3CDepthU3Ek__BackingField};
extern Il2CppType t56_0_0_1;
extern CustomAttributesCache t68__CustomAttributeCache_U3CDeltaU3Ek__BackingField;
FieldInfo t68_f2_FieldInfo = 
{
	"<Delta>k__BackingField", &t56_0_0_1, &t68_TI, offsetof(t68, f2), &t68__CustomAttributeCache_U3CDeltaU3Ek__BackingField};
extern Il2CppType t65_0_0_1;
extern CustomAttributesCache t68__CustomAttributeCache_U3CMarkedCollisionsU3Ek__BackingField;
FieldInfo t68_f3_FieldInfo = 
{
	"<MarkedCollisions>k__BackingField", &t65_0_0_1, &t68_TI, offsetof(t68, f3), &t68__CustomAttributeCache_U3CMarkedCollisionsU3Ek__BackingField};
extern Il2CppType t65_0_0_1;
extern CustomAttributesCache t68__CustomAttributeCache_U3CInvalidMarkedCollisionsU3Ek__BackingField;
FieldInfo t68_f4_FieldInfo = 
{
	"<InvalidMarkedCollisions>k__BackingField", &t65_0_0_1, &t68_TI, offsetof(t68, f4), &t68__CustomAttributeCache_U3CInvalidMarkedCollisionsU3Ek__BackingField};
extern Il2CppType t66_0_0_1;
extern CustomAttributesCache t68__CustomAttributeCache_U3CFinalisedCollisionsU3Ek__BackingField;
FieldInfo t68_f5_FieldInfo = 
{
	"<FinalisedCollisions>k__BackingField", &t66_0_0_1, &t68_TI, offsetof(t68, f5), &t68__CustomAttributeCache_U3CFinalisedCollisionsU3Ek__BackingField};
extern Il2CppType t75_0_0_1;
extern CustomAttributesCache t68__CustomAttributeCache_U3CGridU3Ek__BackingField;
FieldInfo t68_f6_FieldInfo = 
{
	"<Grid>k__BackingField", &t75_0_0_1, &t68_TI, offsetof(t68, f6), &t68__CustomAttributeCache_U3CGridU3Ek__BackingField};
static FieldInfo* t68_FIs[] =
{
	&t68_f0_FieldInfo,
	&t68_f1_FieldInfo,
	&t68_f2_FieldInfo,
	&t68_f3_FieldInfo,
	&t68_f4_FieldInfo,
	&t68_f5_FieldInfo,
	&t68_f6_FieldInfo,
	NULL
};
static PropertyInfo t68____Columns_PropertyInfo = 
{
	&t68_TI, "Columns", &m324_MI, &m325_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo t68____Depth_PropertyInfo = 
{
	&t68_TI, "Depth", &m326_MI, &m327_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo t68____Delta_PropertyInfo = 
{
	&t68_TI, "Delta", &m328_MI, &m329_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo t68____MarkedCollisions_PropertyInfo = 
{
	&t68_TI, "MarkedCollisions", &m330_MI, &m331_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo t68____InvalidMarkedCollisions_PropertyInfo = 
{
	&t68_TI, "InvalidMarkedCollisions", &m332_MI, &m333_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo t68____FinalisedCollisions_PropertyInfo = 
{
	&t68_TI, "FinalisedCollisions", &m334_MI, &m335_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo t68____Grid_PropertyInfo = 
{
	&t68_TI, "Grid", &m336_MI, &m337_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo t68____Item_PropertyInfo = 
{
	&t68_TI, "Item", &m338_MI, &m339_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo t68____ColumnsUpperBound_PropertyInfo = 
{
	&t68_TI, "ColumnsUpperBound", &m343_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo t68____DepthUpperBound_PropertyInfo = 
{
	&t68_TI, "DepthUpperBound", &m344_MI, NULL, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t68_PIs[] =
{
	&t68____Columns_PropertyInfo,
	&t68____Depth_PropertyInfo,
	&t68____Delta_PropertyInfo,
	&t68____MarkedCollisions_PropertyInfo,
	&t68____InvalidMarkedCollisions_PropertyInfo,
	&t68____FinalisedCollisions_PropertyInfo,
	&t68____Grid_PropertyInfo,
	&t68____Item_PropertyInfo,
	&t68____ColumnsUpperBound_PropertyInfo,
	&t68____DepthUpperBound_PropertyInfo,
	NULL
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m322_MI = 
{
	".ctor", (methodPointerType)&m322, &t68_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 348, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t110_0_0_0;
extern Il2CppType t110_0_0_0;
static ParameterInfo t68_m323_ParameterInfos[] = 
{
	{"columns", 0, 134217991, &EmptyCustomAttributesCache, &t110_0_0_0},
	{"depth", 1, 134217992, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m323_MI = 
{
	".ctor", (methodPointerType)&m323, &t68_TI, &t109_0_0_0, RuntimeInvoker_t109_t110_t110, t68_m323_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, false, 349, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t68__CustomAttributeCache_m324;
MethodInfo m324_MI = 
{
	"get_Columns", (methodPointerType)&m324, &t68_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &t68__CustomAttributeCache_m324, 2182, 0, 255, 0, false, false, 350, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t110_0_0_0;
static ParameterInfo t68_m325_ParameterInfos[] = 
{
	{"value", 0, 134217993, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t68__CustomAttributeCache_m325;
MethodInfo m325_MI = 
{
	"set_Columns", (methodPointerType)&m325, &t68_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t68_m325_ParameterInfos, &t68__CustomAttributeCache_m325, 2177, 0, 255, 1, false, false, 351, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t68__CustomAttributeCache_m326;
MethodInfo m326_MI = 
{
	"get_Depth", (methodPointerType)&m326, &t68_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &t68__CustomAttributeCache_m326, 2182, 0, 255, 0, false, false, 352, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t110_0_0_0;
static ParameterInfo t68_m327_ParameterInfos[] = 
{
	{"value", 0, 134217994, &EmptyCustomAttributesCache, &t110_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t110 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t68__CustomAttributeCache_m327;
MethodInfo m327_MI = 
{
	"set_Depth", (methodPointerType)&m327, &t68_TI, &t109_0_0_0, RuntimeInvoker_t109_t110, t68_m327_ParameterInfos, &t68__CustomAttributeCache_m327, 2177, 0, 255, 1, false, false, 353, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t56_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t68__CustomAttributeCache_m328;
MethodInfo m328_MI = 
{
	"get_Delta", (methodPointerType)&m328, &t68_TI, &t56_0_0_0, RuntimeInvoker_t5, NULL, &t68__CustomAttributeCache_m328, 2182, 0, 255, 0, false, false, 354, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t56_0_0_0;
static ParameterInfo t68_m329_ParameterInfos[] = 
{
	{"value", 0, 134217995, &EmptyCustomAttributesCache, &t56_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t68__CustomAttributeCache_m329;
MethodInfo m329_MI = 
{
	"set_Delta", (methodPointerType)&m329, &t68_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t68_m329_ParameterInfos, &t68__CustomAttributeCache_m329, 2179, 0, 255, 1, false, false, 355, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t65_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t68__CustomAttributeCache_m330;
MethodInfo m330_MI = 
{
	"get_MarkedCollisions", (methodPointerType)&m330, &t68_TI, &t65_0_0_0, RuntimeInvoker_t5, NULL, &t68__CustomAttributeCache_m330, 2182, 0, 255, 0, false, false, 356, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t65_0_0_0;
static ParameterInfo t68_m331_ParameterInfos[] = 
{
	{"value", 0, 134217996, &EmptyCustomAttributesCache, &t65_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t68__CustomAttributeCache_m331;
MethodInfo m331_MI = 
{
	"set_MarkedCollisions", (methodPointerType)&m331, &t68_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t68_m331_ParameterInfos, &t68__CustomAttributeCache_m331, 2177, 0, 255, 1, false, false, 357, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t65_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t68__CustomAttributeCache_m332;
MethodInfo m332_MI = 
{
	"get_InvalidMarkedCollisions", (methodPointerType)&m332, &t68_TI, &t65_0_0_0, RuntimeInvoker_t5, NULL, &t68__CustomAttributeCache_m332, 2182, 0, 255, 0, false, false, 358, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t65_0_0_0;
static ParameterInfo t68_m333_ParameterInfos[] = 
{
	{"value", 0, 134217997, &EmptyCustomAttributesCache, &t65_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t68__CustomAttributeCache_m333;
MethodInfo m333_MI = 
{
	"set_InvalidMarkedCollisions", (methodPointerType)&m333, &t68_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t68_m333_ParameterInfos, &t68__CustomAttributeCache_m333, 2177, 0, 255, 1, false, false, 359, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t66_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t68__CustomAttributeCache_m334;
MethodInfo m334_MI = 
{
	"get_FinalisedCollisions", (methodPointerType)&m334, &t68_TI, &t66_0_0_0, RuntimeInvoker_t5, NULL, &t68__CustomAttributeCache_m334, 2182, 0, 255, 0, false, false, 360, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t66_0_0_0;
static ParameterInfo t68_m335_ParameterInfos[] = 
{
	{"value", 0, 134217998, &EmptyCustomAttributesCache, &t66_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t68__CustomAttributeCache_m335;
MethodInfo m335_MI = 
{
	"set_FinalisedCollisions", (methodPointerType)&m335, &t68_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t68_m335_ParameterInfos, &t68__CustomAttributeCache_m335, 2177, 0, 255, 1, false, false, 361, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t75_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t68__CustomAttributeCache_m336;
MethodInfo m336_MI = 
{
	"get_Grid", (methodPointerType)&m336, &t68_TI, &t75_0_0_0, RuntimeInvoker_t5, NULL, &t68__CustomAttributeCache_m336, 2182, 0, 255, 0, false, false, 362, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t75_0_0_0;
extern Il2CppType t75_0_0_0;
static ParameterInfo t68_m337_ParameterInfos[] = 
{
	{"value", 0, 134217999, &EmptyCustomAttributesCache, &t75_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t68__CustomAttributeCache_m337;
MethodInfo m337_MI = 
{
	"set_Grid", (methodPointerType)&m337, &t68_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t68_m337_ParameterInfos, &t68__CustomAttributeCache_m337, 2177, 0, 255, 1, false, false, 363, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t36_0_0_0;
static ParameterInfo t68_m338_ParameterInfos[] = 
{
	{"coordinates", 0, 134218000, &EmptyCustomAttributesCache, &t36_0_0_0},
};
extern Il2CppType t70_0_0_0;
extern void* RuntimeInvoker_t5_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m338_MI = 
{
	"get_Item", (methodPointerType)&m338, &t68_TI, &t70_0_0_0, RuntimeInvoker_t5_t5, t68_m338_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 1, false, false, 364, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t36_0_0_0;
extern Il2CppType t70_0_0_0;
extern Il2CppType t70_0_0_0;
static ParameterInfo t68_m339_ParameterInfos[] = 
{
	{"coordinates", 0, 134218001, &EmptyCustomAttributesCache, &t36_0_0_0},
	{"value", 1, 134218002, &EmptyCustomAttributesCache, &t70_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m339_MI = 
{
	"set_Item", (methodPointerType)&m339, &t68_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t5, t68_m339_ParameterInfos, &EmptyCustomAttributesCache, 2182, 0, 255, 2, false, false, 365, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t36_0_0_0;
static ParameterInfo t68_m340_ParameterInfos[] = 
{
	{"target", 0, 134218003, &EmptyCustomAttributesCache, &t36_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m340_MI = 
{
	"CoordinatesAvailable", (methodPointerType)&m340, &t68_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t68_m340_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 366, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t36_0_0_0;
static ParameterInfo t68_m341_ParameterInfos[] = 
{
	{"target", 0, 134218004, &EmptyCustomAttributesCache, &t36_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m341_MI = 
{
	"CoordinatesInBounds", (methodPointerType)&m341, &t68_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t68_m341_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 367, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
MethodInfo m342_MI = 
{
	"IsEmpty", (methodPointerType)&m342, &t68_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, false, 368, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m343_MI = 
{
	"get_ColumnsUpperBound", (methodPointerType)&m343, &t68_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 369, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t110_0_0_0;
extern void* RuntimeInvoker_t110 (MethodInfo* method, void* obj, void** args);
MethodInfo m344_MI = 
{
	"get_DepthUpperBound", (methodPointerType)&m344, &t68_TI, &t110_0_0_0, RuntimeInvoker_t110, NULL, &EmptyCustomAttributesCache, 2182, 0, 255, 0, false, false, 370, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t68_MIs[] =
{
	&m322_MI,
	&m323_MI,
	&m324_MI,
	&m325_MI,
	&m326_MI,
	&m327_MI,
	&m328_MI,
	&m329_MI,
	&m330_MI,
	&m331_MI,
	&m332_MI,
	&m333_MI,
	&m334_MI,
	&m335_MI,
	&m336_MI,
	&m337_MI,
	&m338_MI,
	&m339_MI,
	&m340_MI,
	&m341_MI,
	&m342_MI,
	&m343_MI,
	&m344_MI,
	NULL
};
static MethodInfo* t68_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
};
extern TypeInfo t172_TI;
#include "t172.h"
#include "t172MD.h"
extern MethodInfo m656_MI;
void t68_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t172 * tmp;
		tmp = (t172 *)il2cpp_codegen_object_new (&t172_TI);
		m656(tmp, il2cpp_codegen_string_new_wrapper("Item"), &m656_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t68_CustomAttributesCacheGenerator_U3CColumnsU3Ek__BackingField(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t68_CustomAttributesCacheGenerator_U3CDepthU3Ek__BackingField(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t68_CustomAttributesCacheGenerator_U3CDeltaU3Ek__BackingField(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t68_CustomAttributesCacheGenerator_U3CMarkedCollisionsU3Ek__BackingField(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t68_CustomAttributesCacheGenerator_U3CInvalidMarkedCollisionsU3Ek__BackingField(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t68_CustomAttributesCacheGenerator_U3CFinalisedCollisionsU3Ek__BackingField(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t68_CustomAttributesCacheGenerator_U3CGridU3Ek__BackingField(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t68_CustomAttributesCacheGenerator_m324(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t68_CustomAttributesCacheGenerator_m325(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t68_CustomAttributesCacheGenerator_m326(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t68_CustomAttributesCacheGenerator_m327(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t68_CustomAttributesCacheGenerator_m328(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t68_CustomAttributesCacheGenerator_m329(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t68_CustomAttributesCacheGenerator_m330(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t68_CustomAttributesCacheGenerator_m331(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t68_CustomAttributesCacheGenerator_m332(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t68_CustomAttributesCacheGenerator_m333(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t68_CustomAttributesCacheGenerator_m334(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t68_CustomAttributesCacheGenerator_m335(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t68_CustomAttributesCacheGenerator_m336(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t68_CustomAttributesCacheGenerator_m337(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t68__CustomAttributeCache = {
1,
NULL,
&t68_CustomAttributesCacheGenerator
};
CustomAttributesCache t68__CustomAttributeCache_U3CColumnsU3Ek__BackingField = {
1,
NULL,
&t68_CustomAttributesCacheGenerator_U3CColumnsU3Ek__BackingField
};
CustomAttributesCache t68__CustomAttributeCache_U3CDepthU3Ek__BackingField = {
1,
NULL,
&t68_CustomAttributesCacheGenerator_U3CDepthU3Ek__BackingField
};
CustomAttributesCache t68__CustomAttributeCache_U3CDeltaU3Ek__BackingField = {
1,
NULL,
&t68_CustomAttributesCacheGenerator_U3CDeltaU3Ek__BackingField
};
CustomAttributesCache t68__CustomAttributeCache_U3CMarkedCollisionsU3Ek__BackingField = {
1,
NULL,
&t68_CustomAttributesCacheGenerator_U3CMarkedCollisionsU3Ek__BackingField
};
CustomAttributesCache t68__CustomAttributeCache_U3CInvalidMarkedCollisionsU3Ek__BackingField = {
1,
NULL,
&t68_CustomAttributesCacheGenerator_U3CInvalidMarkedCollisionsU3Ek__BackingField
};
CustomAttributesCache t68__CustomAttributeCache_U3CFinalisedCollisionsU3Ek__BackingField = {
1,
NULL,
&t68_CustomAttributesCacheGenerator_U3CFinalisedCollisionsU3Ek__BackingField
};
CustomAttributesCache t68__CustomAttributeCache_U3CGridU3Ek__BackingField = {
1,
NULL,
&t68_CustomAttributesCacheGenerator_U3CGridU3Ek__BackingField
};
CustomAttributesCache t68__CustomAttributeCache_m324 = {
1,
NULL,
&t68_CustomAttributesCacheGenerator_m324
};
CustomAttributesCache t68__CustomAttributeCache_m325 = {
1,
NULL,
&t68_CustomAttributesCacheGenerator_m325
};
CustomAttributesCache t68__CustomAttributeCache_m326 = {
1,
NULL,
&t68_CustomAttributesCacheGenerator_m326
};
CustomAttributesCache t68__CustomAttributeCache_m327 = {
1,
NULL,
&t68_CustomAttributesCacheGenerator_m327
};
CustomAttributesCache t68__CustomAttributeCache_m328 = {
1,
NULL,
&t68_CustomAttributesCacheGenerator_m328
};
CustomAttributesCache t68__CustomAttributeCache_m329 = {
1,
NULL,
&t68_CustomAttributesCacheGenerator_m329
};
CustomAttributesCache t68__CustomAttributeCache_m330 = {
1,
NULL,
&t68_CustomAttributesCacheGenerator_m330
};
CustomAttributesCache t68__CustomAttributeCache_m331 = {
1,
NULL,
&t68_CustomAttributesCacheGenerator_m331
};
CustomAttributesCache t68__CustomAttributeCache_m332 = {
1,
NULL,
&t68_CustomAttributesCacheGenerator_m332
};
CustomAttributesCache t68__CustomAttributeCache_m333 = {
1,
NULL,
&t68_CustomAttributesCacheGenerator_m333
};
CustomAttributesCache t68__CustomAttributeCache_m334 = {
1,
NULL,
&t68_CustomAttributesCacheGenerator_m334
};
CustomAttributesCache t68__CustomAttributeCache_m335 = {
1,
NULL,
&t68_CustomAttributesCacheGenerator_m335
};
CustomAttributesCache t68__CustomAttributeCache_m336 = {
1,
NULL,
&t68_CustomAttributesCacheGenerator_m336
};
CustomAttributesCache t68__CustomAttributeCache_m337 = {
1,
NULL,
&t68_CustomAttributesCacheGenerator_m337
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType t68_1_0_0;
struct t68;
extern CustomAttributesCache t68__CustomAttributeCache;
extern CustomAttributesCache t68__CustomAttributeCache_U3CColumnsU3Ek__BackingField;
extern CustomAttributesCache t68__CustomAttributeCache_U3CDepthU3Ek__BackingField;
extern CustomAttributesCache t68__CustomAttributeCache_U3CDeltaU3Ek__BackingField;
extern CustomAttributesCache t68__CustomAttributeCache_U3CMarkedCollisionsU3Ek__BackingField;
extern CustomAttributesCache t68__CustomAttributeCache_U3CInvalidMarkedCollisionsU3Ek__BackingField;
extern CustomAttributesCache t68__CustomAttributeCache_U3CFinalisedCollisionsU3Ek__BackingField;
extern CustomAttributesCache t68__CustomAttributeCache_U3CGridU3Ek__BackingField;
extern CustomAttributesCache t68__CustomAttributeCache_m324;
extern CustomAttributesCache t68__CustomAttributeCache_m325;
extern CustomAttributesCache t68__CustomAttributeCache_m326;
extern CustomAttributesCache t68__CustomAttributeCache_m327;
extern CustomAttributesCache t68__CustomAttributeCache_m328;
extern CustomAttributesCache t68__CustomAttributeCache_m329;
extern CustomAttributesCache t68__CustomAttributeCache_m330;
extern CustomAttributesCache t68__CustomAttributeCache_m331;
extern CustomAttributesCache t68__CustomAttributeCache_m332;
extern CustomAttributesCache t68__CustomAttributeCache_m333;
extern CustomAttributesCache t68__CustomAttributeCache_m334;
extern CustomAttributesCache t68__CustomAttributeCache_m335;
extern CustomAttributesCache t68__CustomAttributeCache_m336;
extern CustomAttributesCache t68__CustomAttributeCache_m337;
TypeInfo t68_TI = 
{
	&g_AssemblyU2DCSharp_dll_Image, NULL, "Mine", "JewelMine.Engine.Models", t68_MIs, t68_PIs, t68_FIs, NULL, &t5_TI, NULL, NULL, &t68_TI, NULL, t68_VT, &t68__CustomAttributeCache, &t68_TI, &t68_0_0_0, &t68_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t68), 0, -1, 0, 0, -1, 1056769, 0, false, false, false, false, false, false, false, false, false, false, false, false, 23, 10, 7, 0, 0, 4, 0, 0};
#ifndef _MSC_VER
#else
#endif



 void m345 (t70 * __this, MethodInfo* method){
	{
		m460(__this, &m460_MI);
		return;
	}
}
// Metadata Definition JewelMine.Engine.Models.MineObject
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m345_MI = 
{
	".ctor", (methodPointerType)&m345, &t70_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 371, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t70_MIs[] =
{
	&m345_MI,
	NULL
};
static MethodInfo* t70_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType t70_1_0_0;
struct t70;
TypeInfo t70_TI = 
{
	&g_AssemblyU2DCSharp_dll_Image, NULL, "MineObject", "JewelMine.Engine.Models", t70_MIs, NULL, NULL, NULL, &t5_TI, NULL, NULL, &t70_TI, NULL, t70_VT, &EmptyCustomAttributesCache, &t70_TI, &t70_0_0_0, &t70_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t70), 0, -1, 0, 0, -1, 1056769, 0, false, false, false, false, false, false, false, false, false, false, false, false, 1, 0, 0, 0, 0, 4, 0, 0};
#ifndef _MSC_VER
#else
#endif



 void m346 (t51 * __this, MethodInfo* method){
	{
		m460(__this, &m460_MI);
		return;
	}
}
 t32 * m347 (t51 * __this, MethodInfo* method){
	{
		t32 * L_0 = (__this->f0);
		return L_0;
	}
}
 void m348 (t51 * __this, t32 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		return;
	}
}
 t76  m349 (t51 * __this, MethodInfo* method){
	{
		t76  L_0 = (__this->f1);
		return L_0;
	}
}
 void m350 (t51 * __this, t76  p0, MethodInfo* method){
	{
		__this->f1 = p0;
		return;
	}
}
// Metadata Definition JewelMine.Engine.Models.SavedGameState
extern Il2CppType t32_0_0_1;
extern CustomAttributesCache t51__CustomAttributeCache_U3CStateU3Ek__BackingField;
FieldInfo t51_f0_FieldInfo = 
{
	"<State>k__BackingField", &t32_0_0_1, &t51_TI, offsetof(t51, f0), &t51__CustomAttributeCache_U3CStateU3Ek__BackingField};
extern Il2CppType t76_0_0_1;
extern CustomAttributesCache t51__CustomAttributeCache_U3CSavedOnU3Ek__BackingField;
FieldInfo t51_f1_FieldInfo = 
{
	"<SavedOn>k__BackingField", &t76_0_0_1, &t51_TI, offsetof(t51, f1), &t51__CustomAttributeCache_U3CSavedOnU3Ek__BackingField};
static FieldInfo* t51_FIs[] =
{
	&t51_f0_FieldInfo,
	&t51_f1_FieldInfo,
	NULL
};
static PropertyInfo t51____State_PropertyInfo = 
{
	&t51_TI, "State", &m347_MI, &m348_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo t51____SavedOn_PropertyInfo = 
{
	&t51_TI, "SavedOn", &m349_MI, &m350_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t51_PIs[] =
{
	&t51____State_PropertyInfo,
	&t51____SavedOn_PropertyInfo,
	NULL
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m346_MI = 
{
	".ctor", (methodPointerType)&m346, &t51_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 372, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t32_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t51__CustomAttributeCache_m347;
MethodInfo m347_MI = 
{
	"get_State", (methodPointerType)&m347, &t51_TI, &t32_0_0_0, RuntimeInvoker_t5, NULL, &t51__CustomAttributeCache_m347, 2182, 0, 255, 0, false, false, 373, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t32_0_0_0;
static ParameterInfo t51_m348_ParameterInfos[] = 
{
	{"value", 0, 134218005, &EmptyCustomAttributesCache, &t32_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t51__CustomAttributeCache_m348;
MethodInfo m348_MI = 
{
	"set_State", (methodPointerType)&m348, &t51_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t51_m348_ParameterInfos, &t51__CustomAttributeCache_m348, 2182, 0, 255, 1, false, false, 374, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t76_0_0_0;
extern void* RuntimeInvoker_t76 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t51__CustomAttributeCache_m349;
MethodInfo m349_MI = 
{
	"get_SavedOn", (methodPointerType)&m349, &t51_TI, &t76_0_0_0, RuntimeInvoker_t76, NULL, &t51__CustomAttributeCache_m349, 2182, 0, 255, 0, false, false, 375, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t76_0_0_0;
extern Il2CppType t76_0_0_0;
static ParameterInfo t51_m350_ParameterInfos[] = 
{
	{"value", 0, 134218006, &EmptyCustomAttributesCache, &t76_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t76 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t51__CustomAttributeCache_m350;
MethodInfo m350_MI = 
{
	"set_SavedOn", (methodPointerType)&m350, &t51_TI, &t109_0_0_0, RuntimeInvoker_t109_t76, t51_m350_ParameterInfos, &t51__CustomAttributeCache_m350, 2182, 0, 255, 1, false, false, 376, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t51_MIs[] =
{
	&m346_MI,
	&m347_MI,
	&m348_MI,
	&m349_MI,
	&m350_MI,
	NULL
};
static MethodInfo* t51_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
};
void t51_CustomAttributesCacheGenerator_U3CStateU3Ek__BackingField(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t51_CustomAttributesCacheGenerator_U3CSavedOnU3Ek__BackingField(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t51_CustomAttributesCacheGenerator_m347(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t51_CustomAttributesCacheGenerator_m348(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t51_CustomAttributesCacheGenerator_m349(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t51_CustomAttributesCacheGenerator_m350(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t51__CustomAttributeCache_U3CStateU3Ek__BackingField = {
1,
NULL,
&t51_CustomAttributesCacheGenerator_U3CStateU3Ek__BackingField
};
CustomAttributesCache t51__CustomAttributeCache_U3CSavedOnU3Ek__BackingField = {
1,
NULL,
&t51_CustomAttributesCacheGenerator_U3CSavedOnU3Ek__BackingField
};
CustomAttributesCache t51__CustomAttributeCache_m347 = {
1,
NULL,
&t51_CustomAttributesCacheGenerator_m347
};
CustomAttributesCache t51__CustomAttributeCache_m348 = {
1,
NULL,
&t51_CustomAttributesCacheGenerator_m348
};
CustomAttributesCache t51__CustomAttributeCache_m349 = {
1,
NULL,
&t51_CustomAttributesCacheGenerator_m349
};
CustomAttributesCache t51__CustomAttributeCache_m350 = {
1,
NULL,
&t51_CustomAttributesCacheGenerator_m350
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType t51_1_0_0;
struct t51;
extern CustomAttributesCache t51__CustomAttributeCache_U3CStateU3Ek__BackingField;
extern CustomAttributesCache t51__CustomAttributeCache_U3CSavedOnU3Ek__BackingField;
extern CustomAttributesCache t51__CustomAttributeCache_m347;
extern CustomAttributesCache t51__CustomAttributeCache_m348;
extern CustomAttributesCache t51__CustomAttributeCache_m349;
extern CustomAttributesCache t51__CustomAttributeCache_m350;
TypeInfo t51_TI = 
{
	&g_AssemblyU2DCSharp_dll_Image, NULL, "SavedGameState", "JewelMine.Engine.Models", t51_MIs, t51_PIs, t51_FIs, NULL, &t5_TI, NULL, NULL, &t51_TI, NULL, t51_VT, &EmptyCustomAttributesCache, &t51_TI, &t51_0_0_0, &t51_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t51), 0, -1, 0, 0, -1, 1056769, 0, false, false, false, false, false, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 4, 0, 0};
#include "t77.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t77_TI;
#include "t77MD.h"

#include "t87.h"
#include "t103.h"
#include "t82.h"
#include "t101.h"
#include "t83.h"
#include "t78.h"
#include "t84.h"
#include "t85.h"
#include "t86.h"
extern TypeInfo t103_TI;
extern TypeInfo t101_TI;
extern TypeInfo t87_TI;
extern TypeInfo t173_TI;
extern TypeInfo t174_TI;
#include "t103MD.h"
#include "t101MD.h"
#include "t82MD.h"
#include "t87MD.h"
#include "t86MD.h"
#include "t175MD.h"
#include "t173MD.h"
#include "t176MD.h"
#include "t177MD.h"
#include "t174MD.h"
extern MethodInfo m363_MI;
extern MethodInfo m364_MI;
extern MethodInfo m353_MI;
extern MethodInfo m418_MI;
extern MethodInfo m657_MI;
extern MethodInfo m356_MI;
extern MethodInfo m658_MI;
extern MethodInfo m409_MI;
extern MethodInfo m355_MI;
extern MethodInfo m411_MI;
extern MethodInfo m354_MI;
extern MethodInfo m413_MI;
extern MethodInfo m357_MI;
extern MethodInfo m415_MI;
extern MethodInfo m437_MI;
extern MethodInfo m439_MI;
extern MethodInfo m443_MI;
extern MethodInfo m441_MI;
extern MethodInfo m449_MI;
extern MethodInfo m445_MI;
extern MethodInfo m447_MI;
extern MethodInfo m451_MI;
extern MethodInfo m453_MI;
extern MethodInfo m455_MI;
extern MethodInfo m457_MI;
extern MethodInfo m459_MI;
extern MethodInfo m659_MI;
extern MethodInfo m394_MI;
extern MethodInfo m360_MI;
extern MethodInfo m660_MI;
extern MethodInfo m359_MI;
extern MethodInfo m641_MI;
extern MethodInfo m643_MI;
extern MethodInfo m623_MI;
extern MethodInfo m361_MI;
extern MethodInfo m661_MI;
extern MethodInfo m662_MI;
extern MethodInfo m368_MI;
extern MethodInfo m369_MI;
extern MethodInfo m663_MI;
extern MethodInfo m664_MI;
extern MethodInfo m665_MI;
extern MethodInfo m666_MI;
extern MethodInfo m667_MI;
extern MethodInfo m668_MI;
extern MethodInfo m669_MI;
extern MethodInfo m362_MI;
extern MethodInfo m625_MI;
extern MethodInfo m644_MI;
extern MethodInfo m670_MI;
extern MethodInfo m627_MI;
extern MethodInfo m624_MI;
extern MethodInfo m626_MI;
struct t113;
#define m657(__this, method) (t82 *)m475_gshared((t113 *)__this, method)


extern MethodInfo m351_MI;
 void m351 (t77 * __this, MethodInfo* method){
	{
		m469(__this, &m469_MI);
		return;
	}
}
extern MethodInfo m352_MI;
 void m352 (t77 * __this, MethodInfo* method){
	t47 * V_0 = {0};
	{
		m363(__this, &m363_MI);
		t52 * L_0 = (t52 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t52_TI));
		m201(L_0, &m201_MI);
		__this->f6 = L_0;
		t47 * L_1 = (t47 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t47_TI));
		m248(L_1, &m248_MI);
		V_0 = L_1;
		m364(__this, V_0, &m364_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t43_TI));
		t43 * L_2 = (t43 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t43_TI));
		m99(L_2, V_0, &m99_MI);
		__this->f5 = L_2;
		t87 * L_3 = m353(__this, &m353_MI);
		t103 * L_4 = (t103 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t103_TI));
		m418(L_4, L_3, &m418_MI);
		__this->f3 = L_4;
		t2 * L_5 = (__this->f21);
		t3 * L_6 = (__this->f20);
		bool L_7 = (__this->f17);
		bool L_8 = (__this->f18);
		t4 * L_9 = (__this->f23);
		t1 * L_10 = (t1 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1_TI));
		m0(L_10, L_5, L_6, L_7, L_8, L_9, &m0_MI);
		__this->f4 = L_10;
		t82 * L_11 = m657(__this, &m657_MI);
		__this->f8 = L_11;
		t82 * L_12 = (__this->f8);
		t124 L_13 = { &m356_MI };
		t101 * L_14 = (t101 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t101_TI));
		m658(L_14, __this, L_13, &m658_MI);
		m409(L_12, L_14, &m409_MI);
		t82 * L_15 = (__this->f8);
		t124 L_16 = { &m355_MI };
		t101 * L_17 = (t101 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t101_TI));
		m658(L_17, __this, L_16, &m658_MI);
		m411(L_15, L_17, &m411_MI);
		t82 * L_18 = (__this->f8);
		t124 L_19 = { &m354_MI };
		t101 * L_20 = (t101 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t101_TI));
		m658(L_20, __this, L_19, &m658_MI);
		m413(L_18, L_20, &m413_MI);
		t82 * L_21 = (__this->f8);
		t124 L_22 = { &m357_MI };
		t101 * L_23 = (t101 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t101_TI));
		m658(L_23, __this, L_22, &m658_MI);
		m415(L_21, L_23, &m415_MI);
		return;
	}
}
 t87 * m353 (t77 * __this, MethodInfo* method){
	t87 * V_0 = {0};
	{
		t87 * L_0 = (t87 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t87_TI));
		m437(L_0, &m437_MI);
		V_0 = L_0;
		t5 * L_1 = (__this->f5);
		m439(V_0, ((t5 *)Castclass(L_1, InitializedTypeInfo(&t105_TI))), &m439_MI);
		t83 * L_2 = (__this->f9);
		m443(V_0, L_2, &m443_MI);
		t78 * L_3 = (__this->f2);
		m441(V_0, L_3, &m441_MI);
		t84 * L_4 = (__this->f10);
		m449(V_0, L_4, &m449_MI);
		t84 * L_5 = (__this->f12);
		m445(V_0, L_5, &m445_MI);
		t84 * L_6 = (__this->f11);
		m447(V_0, L_6, &m447_MI);
		t84 * L_7 = (__this->f13);
		m451(V_0, L_7, &m451_MI);
		t84 * L_8 = (__this->f14);
		m453(V_0, L_8, &m453_MI);
		t85 * L_9 = (__this->f15);
		m455(V_0, L_9, &m455_MI);
		t69 * L_10 = (__this->f16);
		m457(V_0, L_10, &m457_MI);
		t4 * L_11 = (__this->f23);
		m459(V_0, L_11, &m459_MI);
		return V_0;
	}
}
 void m354 (t77 * __this, MethodInfo* method){
	{
		t5 * L_0 = (__this->f5);
		t32 * L_1 = (t32 *)InterfaceFuncInvoker0< t32 * >::Invoke(&m640_MI, L_0);
		int32_t L_2 = m266(L_1, &m266_MI);
		if ((((uint32_t)L_2) != ((uint32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		t52 * L_3 = (__this->f6);
		t63  L_4 = {0};
		m659(&L_4, 0, &m659_MI);
		L_3->f0 = L_4;
	}

IL_0027:
	{
		return;
	}
}
 void m355 (t77 * __this, MethodInfo* method){
	{
		t5 * L_0 = (__this->f5);
		t32 * L_1 = (t32 *)InterfaceFuncInvoker0< t32 * >::Invoke(&m640_MI, L_0);
		int32_t L_2 = m266(L_1, &m266_MI);
		if ((((uint32_t)L_2) != ((uint32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		t52 * L_3 = (__this->f6);
		t63  L_4 = {0};
		m659(&L_4, 2, &m659_MI);
		L_3->f0 = L_4;
	}

IL_0027:
	{
		return;
	}
}
 void m356 (t77 * __this, MethodInfo* method){
	{
		t5 * L_0 = (__this->f5);
		t32 * L_1 = (t32 *)InterfaceFuncInvoker0< t32 * >::Invoke(&m640_MI, L_0);
		int32_t L_2 = m266(L_1, &m266_MI);
		if ((((uint32_t)L_2) != ((uint32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		t52 * L_3 = (__this->f6);
		t63  L_4 = {0};
		m659(&L_4, 1, &m659_MI);
		L_3->f0 = L_4;
	}

IL_0027:
	{
		return;
	}
}
 void m357 (t77 * __this, MethodInfo* method){
	{
		t5 * L_0 = (__this->f5);
		t32 * L_1 = (t32 *)InterfaceFuncInvoker0< t32 * >::Invoke(&m640_MI, L_0);
		int32_t L_2 = m266(L_1, &m266_MI);
		if ((((uint32_t)L_2) != ((uint32_t)1)))
		{
			goto IL_0022;
		}
	}
	{
		t52 * L_3 = (__this->f6);
		m204(L_3, 1, &m204_MI);
	}

IL_0022:
	{
		t5 * L_4 = (__this->f5);
		t32 * L_5 = (t32 *)InterfaceFuncInvoker0< t32 * >::Invoke(&m640_MI, L_4);
		int32_t L_6 = m266(L_5, &m266_MI);
		if ((((int32_t)L_6) == ((int32_t)3)))
		{
			goto IL_004e;
		}
	}
	{
		t5 * L_7 = (__this->f5);
		t32 * L_8 = (t32 *)InterfaceFuncInvoker0< t32 * >::Invoke(&m640_MI, L_7);
		int32_t L_9 = m266(L_8, &m266_MI);
		if ((((uint32_t)L_9) != ((uint32_t)4)))
		{
			goto IL_006a;
		}
	}

IL_004e:
	{
		t86 * L_10 = (__this->f22);
		bool L_11 = m394(L_10, &m394_MI);
		if (L_11)
		{
			goto IL_006a;
		}
	}
	{
		t52 * L_12 = (__this->f6);
		m206(L_12, 1, &m206_MI);
	}

IL_006a:
	{
		t5 * L_13 = (__this->f5);
		t32 * L_14 = (t32 *)InterfaceFuncInvoker0< t32 * >::Invoke(&m640_MI, L_13);
		int32_t L_15 = m266(L_14, &m266_MI);
		if (!L_15)
		{
			goto IL_0095;
		}
	}
	{
		t5 * L_16 = (__this->f5);
		t32 * L_17 = (t32 *)InterfaceFuncInvoker0< t32 * >::Invoke(&m640_MI, L_16);
		int32_t L_18 = m266(L_17, &m266_MI);
		if ((((uint32_t)L_18) != ((uint32_t)2)))
		{
			goto IL_00b1;
		}
	}

IL_0095:
	{
		t86 * L_19 = (__this->f22);
		bool L_20 = m394(L_19, &m394_MI);
		if (L_20)
		{
			goto IL_00b1;
		}
	}
	{
		t52 * L_21 = (__this->f6);
		m210(L_21, 1, &m210_MI);
	}

IL_00b1:
	{
		return;
	}
}
extern MethodInfo m358_MI;
 void m358 (t77 * __this, MethodInfo* method){
	t6 * V_0 = {0};
	{
		m360(__this, &m360_MI);
		float L_0 = m660(NULL, &m660_MI);
		double L_1 = (__this->f7);
		if ((((double)(((double)L_0))) < ((double)L_1)))
		{
			goto IL_0079;
		}
	}
	{
		m359(__this, &m359_MI);
		t5 * L_2 = (__this->f5);
		t52 * L_3 = (__this->f6);
		t6 * L_4 = (t6 *)InterfaceFuncInvoker1< t6 *, t52 * >::Invoke(&m641_MI, L_2, L_3);
		V_0 = L_4;
		t5 * L_5 = (__this->f3);
		InterfaceActionInvoker1< t6 * >::Invoke(&m643_MI, L_5, V_0);
		t5 * L_6 = (__this->f4);
		InterfaceActionInvoker1< t6 * >::Invoke(&m623_MI, L_6, V_0);
		t52 * L_7 = (__this->f6);
		m202(L_7, &m202_MI);
		float L_8 = m660(NULL, &m660_MI);
		t5 * L_9 = (__this->f5);
		t32 * L_10 = (t32 *)InterfaceFuncInvoker0< t32 * >::Invoke(&m640_MI, L_9);
		t59 * L_11 = m268(L_10, &m268_MI);
		double L_12 = m176(L_11, &m176_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t39_TI));
		double L_13 = m92(NULL, L_12, &m92_MI);
		__this->f7 = ((double)((((double)L_8))+L_13));
	}

IL_0079:
	{
		return;
	}
}
 void m359 (t77 * __this, MethodInfo* method){
	t63  V_0 = {0};
	{
		t63  L_0 = m361(__this, &m361_MI);
		V_0 = L_0;
		bool L_1 = m575((&V_0), &m575_MI);
		if (!L_1)
		{
			goto IL_002a;
		}
	}
	{
		t52 * L_2 = (__this->f6);
		int32_t L_3 = m576((&V_0), &m576_MI);
		t63  L_4 = {0};
		m659(&L_4, L_3, &m659_MI);
		L_2->f0 = L_4;
	}

IL_002a:
	{
		return;
	}
}
 void m360 (t77 * __this, MethodInfo* method){
	{
		t86 * L_0 = (__this->f22);
		bool L_1 = m394(L_0, &m394_MI);
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		return;
	}

IL_0011:
	{
		t5 * L_2 = (__this->f5);
		t32 * L_3 = (t32 *)InterfaceFuncInvoker0< t32 * >::Invoke(&m640_MI, L_2);
		int32_t L_4 = m266(L_3, &m266_MI);
		if (!L_4)
		{
			goto IL_003c;
		}
	}
	{
		t5 * L_5 = (__this->f5);
		t32 * L_6 = (t32 *)InterfaceFuncInvoker0< t32 * >::Invoke(&m640_MI, L_5);
		int32_t L_7 = m266(L_6, &m266_MI);
		if ((((uint32_t)L_7) != ((uint32_t)2)))
		{
			goto IL_0058;
		}
	}

IL_003c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t173_TI));
		bool L_8 = m661(NULL, (t11*) &_stringLiteral29, &m661_MI);
		if (!L_8)
		{
			goto IL_0058;
		}
	}
	{
		t52 * L_9 = (__this->f6);
		m210(L_9, 1, &m210_MI);
		return;
	}

IL_0058:
	{
		t5 * L_10 = (__this->f5);
		t32 * L_11 = (t32 *)InterfaceFuncInvoker0< t32 * >::Invoke(&m640_MI, L_10);
		int32_t L_12 = m266(L_11, &m266_MI);
		if ((((int32_t)L_12) == ((int32_t)3)))
		{
			goto IL_0084;
		}
	}
	{
		t5 * L_13 = (__this->f5);
		t32 * L_14 = (t32 *)InterfaceFuncInvoker0< t32 * >::Invoke(&m640_MI, L_13);
		int32_t L_15 = m266(L_14, &m266_MI);
		if ((((uint32_t)L_15) != ((uint32_t)4)))
		{
			goto IL_00a0;
		}
	}

IL_0084:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t173_TI));
		bool L_16 = m661(NULL, (t11*) &_stringLiteral29, &m661_MI);
		if (!L_16)
		{
			goto IL_00a0;
		}
	}
	{
		t52 * L_17 = (__this->f6);
		m206(L_17, 1, &m206_MI);
		return;
	}

IL_00a0:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t173_TI));
		bool L_18 = m661(NULL, (t11*) &_stringLiteral30, &m661_MI);
		if (!L_18)
		{
			goto IL_00bb;
		}
	}
	{
		t52 * L_19 = (__this->f6);
		m204(L_19, 1, &m204_MI);
	}

IL_00bb:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t173_TI));
		bool L_20 = m661(NULL, (t11*) &_stringLiteral31, &m661_MI);
		if (!L_20)
		{
			goto IL_00cf;
		}
	}
	{
		m662(NULL, &m662_MI);
	}

IL_00cf:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t173_TI));
		bool L_21 = m661(NULL, (t11*) &_stringLiteral32, &m661_MI);
		if (!L_21)
		{
			goto IL_00ea;
		}
	}
	{
		t52 * L_22 = (__this->f6);
		m212(L_22, 1, &m212_MI);
	}

IL_00ea:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t173_TI));
		bool L_23 = m661(NULL, (t11*) &_stringLiteral33, &m661_MI);
		if (!L_23)
		{
			goto IL_0105;
		}
	}
	{
		t52 * L_24 = (__this->f6);
		m206(L_24, 1, &m206_MI);
	}

IL_0105:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t173_TI));
		bool L_25 = m661(NULL, (t11*) &_stringLiteral34, &m661_MI);
		if (!L_25)
		{
			goto IL_011a;
		}
	}
	{
		m368(__this, &m368_MI);
	}

IL_011a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t173_TI));
		bool L_26 = m661(NULL, (t11*) &_stringLiteral35, &m661_MI);
		if (!L_26)
		{
			goto IL_012f;
		}
	}
	{
		m369(__this, &m369_MI);
	}

IL_012f:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t173_TI));
		bool L_27 = m661(NULL, (t11*) &_stringLiteral36, &m661_MI);
		if (!L_27)
		{
			goto IL_014a;
		}
	}
	{
		t52 * L_28 = (__this->f6);
		m214(L_28, 1, &m214_MI);
	}

IL_014a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t173_TI));
		bool L_29 = m661(NULL, (t11*) &_stringLiteral37, &m661_MI);
		if (!L_29)
		{
			goto IL_0165;
		}
	}
	{
		t52 * L_30 = (__this->f6);
		m216(L_30, 1, &m216_MI);
	}

IL_0165:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t173_TI));
		bool L_31 = m661(NULL, (t11*) &_stringLiteral38, &m661_MI);
		if (!L_31)
		{
			goto IL_0180;
		}
	}
	{
		t52 * L_32 = (__this->f6);
		m208(L_32, 1, &m208_MI);
	}

IL_0180:
	{
		return;
	}
}
 t63  m361 (t77 * __this, MethodInfo* method){
	t63  V_0 = {0};
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	t63  V_3 = {0};
	{
		Initobj (&t63_TI, (&V_3));
		V_0 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t173_TI));
		float L_0 = m663(NULL, (t11*) &_stringLiteral39, &m663_MI);
		V_1 = L_0;
		float L_1 = m663(NULL, (t11*) &_stringLiteral40, &m663_MI);
		V_2 = L_1;
		if ((((float)V_1) >= ((float)(0.0f))))
		{
			goto IL_0032;
		}
	}
	{
		t63  L_2 = {0};
		m659(&L_2, 1, &m659_MI);
		V_0 = L_2;
	}

IL_0032:
	{
		if ((((float)V_1) <= ((float)(0.0f))))
		{
			goto IL_0044;
		}
	}
	{
		t63  L_3 = {0};
		m659(&L_3, 2, &m659_MI);
		V_0 = L_3;
	}

IL_0044:
	{
		if ((((float)V_2) >= ((float)(0.0f))))
		{
			goto IL_0056;
		}
	}
	{
		t63  L_4 = {0};
		m659(&L_4, 0, &m659_MI);
		V_0 = L_4;
	}

IL_0056:
	{
		return V_0;
	}
}
 void m362 (t77 * __this, MethodInfo* method){
	{
		t4 * L_0 = (__this->f23);
		t11* L_1 = (L_0->f14);
		t5 * L_2 = (__this->f5);
		t32 * L_3 = (t32 *)InterfaceFuncInvoker0< t32 * >::Invoke(&m640_MI, L_2);
		t59 * L_4 = m268(L_3, &m268_MI);
		int32_t L_5 = m170(L_4, &m170_MI);
		m664(NULL, L_1, L_5, &m664_MI);
		t4 * L_6 = (__this->f23);
		t11* L_7 = (L_6->f15);
		t5 * L_8 = (__this->f4);
		bool L_9 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&m621_MI, L_8);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t174_TI));
		int32_t L_10 = m665(NULL, L_9, &m665_MI);
		m664(NULL, L_7, L_10, &m664_MI);
		t4 * L_11 = (__this->f23);
		t11* L_12 = (L_11->f16);
		t5 * L_13 = (__this->f4);
		bool L_14 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&m622_MI, L_13);
		int32_t L_15 = m665(NULL, L_14, &m665_MI);
		m664(NULL, L_12, L_15, &m664_MI);
		m666(NULL, &m666_MI);
		return;
	}
}
 void m363 (t77 * __this, MethodInfo* method){
	{
		t4 * L_0 = (__this->f23);
		t11* L_1 = (L_0->f14);
		int32_t L_2 = m667(NULL, L_1, 0, &m667_MI);
		__this->f19 = L_2;
		t4 * L_3 = (__this->f23);
		t11* L_4 = (L_3->f15);
		int32_t L_5 = m667(NULL, L_4, 0, &m667_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t174_TI));
		bool L_6 = m668(NULL, L_5, &m668_MI);
		__this->f17 = L_6;
		t4 * L_7 = (__this->f23);
		t11* L_8 = (L_7->f16);
		int32_t L_9 = m667(NULL, L_8, 0, &m667_MI);
		bool L_10 = m668(NULL, L_9, &m668_MI);
		__this->f18 = L_10;
		return;
	}
}
 void m364 (t77 * __this, t47 * p0, MethodInfo* method){
	{
		int32_t L_0 = (__this->f19);
		m250(p0, L_0, &m250_MI);
		t11* L_1 = m669(NULL, &m669_MI);
		m252(p0, L_1, &m252_MI);
		t4 * L_2 = (__this->f23);
		int32_t L_3 = (L_2->f19);
		m254(p0, L_3, &m254_MI);
		t4 * L_4 = (__this->f23);
		int32_t L_5 = (L_4->f20);
		m256(p0, L_5, &m256_MI);
		t4 * L_6 = (__this->f23);
		t12 * L_7 = (L_6->f21);
		m258(p0, L_7, &m258_MI);
		t4 * L_8 = (__this->f23);
		t12 * L_9 = (L_8->f22);
		m260(p0, L_9, &m260_MI);
		t4 * L_10 = (__this->f23);
		t12 * L_11 = (L_10->f23);
		m262(p0, L_11, &m262_MI);
		t4 * L_12 = (__this->f23);
		t12 * L_13 = (L_12->f24);
		m264(p0, L_13, &m264_MI);
		return;
	}
}
extern MethodInfo m365_MI;
 void m365 (t77 * __this, MethodInfo* method){
	{
		m362(__this, &m362_MI);
		return;
	}
}
extern MethodInfo m366_MI;
 void m366 (t77 * __this, bool p0, MethodInfo* method){
	{
		if (!p0)
		{
			goto IL_000c;
		}
	}
	{
		m362(__this, &m362_MI);
	}

IL_000c:
	{
		return;
	}
}
extern MethodInfo m367_MI;
 void m367 (t77 * __this, MethodInfo* method){
	{
		t52 * L_0 = (__this->f6);
		m212(L_0, 1, &m212_MI);
		return;
	}
}
 void m368 (t77 * __this, MethodInfo* method){
	{
		t5 * L_0 = (__this->f4);
		InterfaceActionInvoker0::Invoke(&m625_MI, L_0);
		t5 * L_1 = (__this->f4);
		t5 * L_2 = (__this->f3);
		t5 * L_3 = L_2;
		t124 L_4 = { GetInterfaceMethodInfo(L_3, &m644_MI) };
		t7 * L_5 = (t7 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t7_TI));
		m670(L_5, L_3, L_4, &m670_MI);
		InterfaceActionInvoker1< t7 * >::Invoke(&m627_MI, L_1, L_5);
		return;
	}
}
 void m369 (t77 * __this, MethodInfo* method){
	{
		t5 * L_0 = (__this->f4);
		InterfaceActionInvoker0::Invoke(&m624_MI, L_0);
		t5 * L_1 = (__this->f4);
		t5 * L_2 = (__this->f3);
		t5 * L_3 = L_2;
		t124 L_4 = { GetInterfaceMethodInfo(L_3, &m644_MI) };
		t7 * L_5 = (t7 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t7_TI));
		m670(L_5, L_3, L_4, &m670_MI);
		InterfaceActionInvoker1< t7 * >::Invoke(&m626_MI, L_1, L_5);
		return;
	}
}
extern MethodInfo m370_MI;
 void m370 (t77 * __this, MethodInfo* method){
	bool V_0 = false;
	{
		t5 * L_0 = (__this->f5);
		t32 * L_1 = (t32 *)InterfaceFuncInvoker0< t32 * >::Invoke(&m640_MI, L_0);
		int32_t L_2 = m266(L_1, &m266_MI);
		V_0 = ((((int32_t)L_2) == ((int32_t)2))? 1 : 0);
		if (!V_0)
		{
			goto IL_002b;
		}
	}
	{
		t52 * L_3 = (__this->f6);
		m210(L_3, 1, &m210_MI);
		goto IL_0037;
	}

IL_002b:
	{
		t52 * L_4 = (__this->f6);
		m208(L_4, 1, &m208_MI);
	}

IL_0037:
	{
		return;
	}
}
extern MethodInfo m371_MI;
 void m371 (t77 * __this, MethodInfo* method){
	bool V_0 = false;
	{
		t5 * L_0 = (__this->f5);
		t32 * L_1 = (t32 *)InterfaceFuncInvoker0< t32 * >::Invoke(&m640_MI, L_0);
		int32_t L_2 = m266(L_1, &m266_MI);
		V_0 = ((((int32_t)L_2) == ((int32_t)2))? 1 : 0);
		if (V_0)
		{
			goto IL_0026;
		}
	}
	{
		t52 * L_3 = (__this->f6);
		m208(L_3, 1, &m208_MI);
	}

IL_0026:
	{
		return;
	}
}
extern MethodInfo m372_MI;
 void m372 (t77 * __this, MethodInfo* method){
	bool V_0 = false;
	{
		t5 * L_0 = (__this->f5);
		t32 * L_1 = (t32 *)InterfaceFuncInvoker0< t32 * >::Invoke(&m640_MI, L_0);
		int32_t L_2 = m266(L_1, &m266_MI);
		V_0 = ((((int32_t)L_2) == ((int32_t)2))? 1 : 0);
		if (!V_0)
		{
			goto IL_0026;
		}
	}
	{
		t52 * L_3 = (__this->f6);
		m210(L_3, 1, &m210_MI);
	}

IL_0026:
	{
		return;
	}
}
extern MethodInfo m373_MI;
 void m373 (t77 * __this, MethodInfo* method){
	{
		t52 * L_0 = (__this->f6);
		m214(L_0, 1, &m214_MI);
		return;
	}
}
extern MethodInfo m374_MI;
 void m374 (t77 * __this, MethodInfo* method){
	{
		t52 * L_0 = (__this->f6);
		m216(L_0, 1, &m216_MI);
		return;
	}
}
extern MethodInfo m375_MI;
 void m375 (t77 * __this, MethodInfo* method){
	{
		t52 * L_0 = (__this->f6);
		m206(L_0, 1, &m206_MI);
		return;
	}
}
extern MethodInfo m376_MI;
 void m376 (t77 * __this, MethodInfo* method){
	{
		m662(NULL, &m662_MI);
		return;
	}
}
// Metadata Definition JewelMine.GameController
extern Il2CppType t78_0_0_6;
FieldInfo t77_f2_FieldInfo = 
{
	"jewelPrefabs", &t78_0_0_6, &t77_TI, offsetof(t77, f2), &EmptyCustomAttributesCache};
extern Il2CppType t79_0_0_6;
FieldInfo t77_f3_FieldInfo = 
{
	"view", &t79_0_0_6, &t77_TI, offsetof(t77, f3), &EmptyCustomAttributesCache};
extern Il2CppType t80_0_0_6;
FieldInfo t77_f4_FieldInfo = 
{
	"audioSystem", &t80_0_0_6, &t77_TI, offsetof(t77, f4), &EmptyCustomAttributesCache};
extern Il2CppType t81_0_0_1;
FieldInfo t77_f5_FieldInfo = 
{
	"gameLogic", &t81_0_0_1, &t77_TI, offsetof(t77, f5), &EmptyCustomAttributesCache};
extern Il2CppType t52_0_0_1;
FieldInfo t77_f6_FieldInfo = 
{
	"logicInput", &t52_0_0_1, &t77_TI, offsetof(t77, f6), &EmptyCustomAttributesCache};
extern Il2CppType t118_0_0_1;
FieldInfo t77_f7_FieldInfo = 
{
	"lastTickTime", &t118_0_0_1, &t77_TI, offsetof(t77, f7), &EmptyCustomAttributesCache};
extern Il2CppType t82_0_0_1;
FieldInfo t77_f8_FieldInfo = 
{
	"swipeInput", &t82_0_0_1, &t77_TI, offsetof(t77, f8), &EmptyCustomAttributesCache};
extern Il2CppType t83_0_0_6;
FieldInfo t77_f9_FieldInfo = 
{
	"collisionGroupMaterial", &t83_0_0_6, &t77_TI, offsetof(t77, f9), &EmptyCustomAttributesCache};
extern Il2CppType t84_0_0_6;
FieldInfo t77_f10_FieldInfo = 
{
	"difficultyText", &t84_0_0_6, &t77_TI, offsetof(t77, f10), &EmptyCustomAttributesCache};
extern Il2CppType t84_0_0_6;
FieldInfo t77_f11_FieldInfo = 
{
	"levelText", &t84_0_0_6, &t77_TI, offsetof(t77, f11), &EmptyCustomAttributesCache};
extern Il2CppType t84_0_0_6;
FieldInfo t77_f12_FieldInfo = 
{
	"scoreText", &t84_0_0_6, &t77_TI, offsetof(t77, f12), &EmptyCustomAttributesCache};
extern Il2CppType t84_0_0_6;
FieldInfo t77_f13_FieldInfo = 
{
	"gameStateText", &t84_0_0_6, &t77_TI, offsetof(t77, f13), &EmptyCustomAttributesCache};
extern Il2CppType t84_0_0_6;
FieldInfo t77_f14_FieldInfo = 
{
	"gameStateSubtext", &t84_0_0_6, &t77_TI, offsetof(t77, f14), &EmptyCustomAttributesCache};
extern Il2CppType t85_0_0_6;
FieldInfo t77_f15_FieldInfo = 
{
	"gameMessageSlots", &t85_0_0_6, &t77_TI, offsetof(t77, f15), &EmptyCustomAttributesCache};
extern Il2CppType t69_0_0_6;
FieldInfo t77_f16_FieldInfo = 
{
	"explosionPrefab", &t69_0_0_6, &t77_TI, offsetof(t77, f16), &EmptyCustomAttributesCache};
extern Il2CppType t108_0_0_1;
FieldInfo t77_f17_FieldInfo = 
{
	"savedUserPrefSoundEffectsMuted", &t108_0_0_1, &t77_TI, offsetof(t77, f17), &EmptyCustomAttributesCache};
extern Il2CppType t108_0_0_1;
FieldInfo t77_f18_FieldInfo = 
{
	"savedUserPrefBackgroundMusicMuted", &t108_0_0_1, &t77_TI, offsetof(t77, f18), &EmptyCustomAttributesCache};
extern Il2CppType t22_0_0_1;
FieldInfo t77_f19_FieldInfo = 
{
	"savedUserPrefDifficulty", &t22_0_0_1, &t77_TI, offsetof(t77, f19), &EmptyCustomAttributesCache};
extern Il2CppType t3_0_0_6;
FieldInfo t77_f20_FieldInfo = 
{
	"soundEffects", &t3_0_0_6, &t77_TI, offsetof(t77, f20), &EmptyCustomAttributesCache};
extern Il2CppType t2_0_0_6;
FieldInfo t77_f21_FieldInfo = 
{
	"backgroundMusic", &t2_0_0_6, &t77_TI, offsetof(t77, f21), &EmptyCustomAttributesCache};
extern Il2CppType t86_0_0_6;
FieldInfo t77_f22_FieldInfo = 
{
	"optionsController", &t86_0_0_6, &t77_TI, offsetof(t77, f22), &EmptyCustomAttributesCache};
extern Il2CppType t4_0_0_6;
FieldInfo t77_f23_FieldInfo = 
{
	"configurableSettings", &t4_0_0_6, &t77_TI, offsetof(t77, f23), &EmptyCustomAttributesCache};
static FieldInfo* t77_FIs[] =
{
	&t77_f2_FieldInfo,
	&t77_f3_FieldInfo,
	&t77_f4_FieldInfo,
	&t77_f5_FieldInfo,
	&t77_f6_FieldInfo,
	&t77_f7_FieldInfo,
	&t77_f8_FieldInfo,
	&t77_f9_FieldInfo,
	&t77_f10_FieldInfo,
	&t77_f11_FieldInfo,
	&t77_f12_FieldInfo,
	&t77_f13_FieldInfo,
	&t77_f14_FieldInfo,
	&t77_f15_FieldInfo,
	&t77_f16_FieldInfo,
	&t77_f17_FieldInfo,
	&t77_f18_FieldInfo,
	&t77_f19_FieldInfo,
	&t77_f20_FieldInfo,
	&t77_f21_FieldInfo,
	&t77_f22_FieldInfo,
	&t77_f23_FieldInfo,
	NULL
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m351_MI = 
{
	".ctor", (methodPointerType)&m351, &t77_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 377, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m352_MI = 
{
	"Start", (methodPointerType)&m352, &t77_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, false, 378, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t87_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m353_MI = 
{
	"BuildViewControllerContext", (methodPointerType)&m353, &t77_TI, &t87_0_0_0, RuntimeInvoker_t5, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 379, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m354_MI = 
{
	"HandleDownSwipeDetected", (methodPointerType)&m354, &t77_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 380, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m355_MI = 
{
	"HandleRightSwipeDetected", (methodPointerType)&m355, &t77_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 381, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m356_MI = 
{
	"HandleLeftSwipeDetected", (methodPointerType)&m356, &t77_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 382, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m357_MI = 
{
	"HandleTapDetected", (methodPointerType)&m357, &t77_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 383, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m358_MI = 
{
	"Update", (methodPointerType)&m358, &t77_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, false, 384, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m359_MI = 
{
	"ProcessAxisInput", (methodPointerType)&m359, &t77_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 385, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m360_MI = 
{
	"ProcessInput", (methodPointerType)&m360, &t77_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 386, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t63_0_0_0;
extern void* RuntimeInvoker_t63 (MethodInfo* method, void* obj, void** args);
MethodInfo m361_MI = 
{
	"GetDeltaMovementInput", (methodPointerType)&m361, &t77_TI, &t63_0_0_0, RuntimeInvoker_t63, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, false, 387, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m362_MI = 
{
	"SaveUserPreferences", (methodPointerType)&m362, &t77_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 388, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m363_MI = 
{
	"RestoreUserPreferences", (methodPointerType)&m363, &t77_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 389, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t47_0_0_0;
static ParameterInfo t77_m364_ParameterInfos[] = 
{
	{"settings", 0, 134218007, &EmptyCustomAttributesCache, &t47_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m364_MI = 
{
	"BuildGameLogicUserSettings", (methodPointerType)&m364, &t77_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t77_m364_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 390, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m365_MI = 
{
	"OnApplicationQuit", (methodPointerType)&m365, &t77_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 391, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t108_0_0_0;
static ParameterInfo t77_m366_ParameterInfos[] = 
{
	{"pauseStatus", 0, 134218008, &EmptyCustomAttributesCache, &t108_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t111 (MethodInfo* method, void* obj, void** args);
MethodInfo m366_MI = 
{
	"OnApplicationPause", (methodPointerType)&m366, &t77_TI, &t109_0_0_0, RuntimeInvoker_t109_t111, t77_m366_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 392, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m367_MI = 
{
	"ChangeDifiiculty", (methodPointerType)&m367, &t77_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, false, 393, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m368_MI = 
{
	"ToggleSoundEffects", (methodPointerType)&m368, &t77_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, false, 394, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m369_MI = 
{
	"ToggleBackgroundMusic", (methodPointerType)&m369, &t77_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, false, 395, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m370_MI = 
{
	"ToggleGamePause", (methodPointerType)&m370, &t77_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, false, 396, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m371_MI = 
{
	"PauseGame", (methodPointerType)&m371, &t77_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, false, 397, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m372_MI = 
{
	"UnpauseGame", (methodPointerType)&m372, &t77_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, false, 398, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m373_MI = 
{
	"SaveGame", (methodPointerType)&m373, &t77_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, false, 399, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m374_MI = 
{
	"LoadGame", (methodPointerType)&m374, &t77_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, false, 400, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m375_MI = 
{
	"RestartGame", (methodPointerType)&m375, &t77_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, false, 401, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m376_MI = 
{
	"QuitGame", (methodPointerType)&m376, &t77_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, false, 402, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t77_MIs[] =
{
	&m351_MI,
	&m352_MI,
	&m353_MI,
	&m354_MI,
	&m355_MI,
	&m356_MI,
	&m357_MI,
	&m358_MI,
	&m359_MI,
	&m360_MI,
	&m361_MI,
	&m362_MI,
	&m363_MI,
	&m364_MI,
	&m365_MI,
	&m366_MI,
	&m367_MI,
	&m368_MI,
	&m369_MI,
	&m370_MI,
	&m371_MI,
	&m372_MI,
	&m373_MI,
	&m374_MI,
	&m375_MI,
	&m376_MI,
	NULL
};
static MethodInfo* t77_VT[] =
{
	&m476_MI,
	&m465_MI,
	&m477_MI,
	&m478_MI,
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType t77_0_0_0;
extern Il2CppType t77_1_0_0;
struct t77;
TypeInfo t77_TI = 
{
	&g_AssemblyU2DCSharp_dll_Image, NULL, "GameController", "JewelMine", t77_MIs, NULL, t77_FIs, NULL, &t10_TI, NULL, NULL, &t77_TI, NULL, t77_VT, &EmptyCustomAttributesCache, &t77_TI, &t77_0_0_0, &t77_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t77), 0, -1, 0, 0, -1, 1048577, 0, false, false, false, false, false, false, false, false, false, false, false, false, 26, 0, 22, 0, 0, 4, 0, 0};
#include "t88.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t88_TI;
#include "t88MD.h"



extern MethodInfo m377_MI;
 void m377 (t88 * __this, MethodInfo* method){
	{
		m460(__this, &m460_MI);
		return;
	}
}
extern MethodInfo m378_MI;
 t11* m378 (t88 * __this, MethodInfo* method){
	{
		t11* L_0 = (__this->f0);
		return L_0;
	}
}
extern MethodInfo m379_MI;
 void m379 (t88 * __this, t11* p0, MethodInfo* method){
	{
		__this->f0 = p0;
		return;
	}
}
extern MethodInfo m380_MI;
 float m380 (t88 * __this, MethodInfo* method){
	{
		float L_0 = (__this->f1);
		return L_0;
	}
}
extern MethodInfo m381_MI;
 void m381 (t88 * __this, float p0, MethodInfo* method){
	{
		__this->f1 = p0;
		return;
	}
}
// Metadata Definition GameMessage
extern Il2CppType t11_0_0_1;
extern CustomAttributesCache t88__CustomAttributeCache_U3CMessageU3Ek__BackingField;
FieldInfo t88_f0_FieldInfo = 
{
	"<Message>k__BackingField", &t11_0_0_1, &t88_TI, offsetof(t88, f0), &t88__CustomAttributeCache_U3CMessageU3Ek__BackingField};
extern Il2CppType t116_0_0_1;
extern CustomAttributesCache t88__CustomAttributeCache_U3CMessageExpiresAtU3Ek__BackingField;
FieldInfo t88_f1_FieldInfo = 
{
	"<MessageExpiresAt>k__BackingField", &t116_0_0_1, &t88_TI, offsetof(t88, f1), &t88__CustomAttributeCache_U3CMessageExpiresAtU3Ek__BackingField};
static FieldInfo* t88_FIs[] =
{
	&t88_f0_FieldInfo,
	&t88_f1_FieldInfo,
	NULL
};
static PropertyInfo t88____Message_PropertyInfo = 
{
	&t88_TI, "Message", &m378_MI, &m379_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo t88____MessageExpiresAt_PropertyInfo = 
{
	&t88_TI, "MessageExpiresAt", &m380_MI, &m381_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t88_PIs[] =
{
	&t88____Message_PropertyInfo,
	&t88____MessageExpiresAt_PropertyInfo,
	NULL
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m377_MI = 
{
	".ctor", (methodPointerType)&m377, &t88_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 403, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t11_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t88__CustomAttributeCache_m378;
MethodInfo m378_MI = 
{
	"get_Message", (methodPointerType)&m378, &t88_TI, &t11_0_0_0, RuntimeInvoker_t5, NULL, &t88__CustomAttributeCache_m378, 2182, 0, 255, 0, false, false, 404, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t11_0_0_0;
static ParameterInfo t88_m379_ParameterInfos[] = 
{
	{"value", 0, 134218009, &EmptyCustomAttributesCache, &t11_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t88__CustomAttributeCache_m379;
MethodInfo m379_MI = 
{
	"set_Message", (methodPointerType)&m379, &t88_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t88_m379_ParameterInfos, &t88__CustomAttributeCache_m379, 2182, 0, 255, 1, false, false, 405, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t116_0_0_0;
extern void* RuntimeInvoker_t116 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t88__CustomAttributeCache_m380;
MethodInfo m380_MI = 
{
	"get_MessageExpiresAt", (methodPointerType)&m380, &t88_TI, &t116_0_0_0, RuntimeInvoker_t116, NULL, &t88__CustomAttributeCache_m380, 2182, 0, 255, 0, false, false, 406, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t116_0_0_0;
extern Il2CppType t116_0_0_0;
static ParameterInfo t88_m381_ParameterInfos[] = 
{
	{"value", 0, 134218010, &EmptyCustomAttributesCache, &t116_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t116 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t88__CustomAttributeCache_m381;
MethodInfo m381_MI = 
{
	"set_MessageExpiresAt", (methodPointerType)&m381, &t88_TI, &t109_0_0_0, RuntimeInvoker_t109_t116, t88_m381_ParameterInfos, &t88__CustomAttributeCache_m381, 2182, 0, 255, 1, false, false, 407, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t88_MIs[] =
{
	&m377_MI,
	&m378_MI,
	&m379_MI,
	&m380_MI,
	&m381_MI,
	NULL
};
static MethodInfo* t88_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
};
void t88_CustomAttributesCacheGenerator_U3CMessageU3Ek__BackingField(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t88_CustomAttributesCacheGenerator_U3CMessageExpiresAtU3Ek__BackingField(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t88_CustomAttributesCacheGenerator_m378(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t88_CustomAttributesCacheGenerator_m379(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t88_CustomAttributesCacheGenerator_m380(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t88_CustomAttributesCacheGenerator_m381(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t88__CustomAttributeCache_U3CMessageU3Ek__BackingField = {
1,
NULL,
&t88_CustomAttributesCacheGenerator_U3CMessageU3Ek__BackingField
};
CustomAttributesCache t88__CustomAttributeCache_U3CMessageExpiresAtU3Ek__BackingField = {
1,
NULL,
&t88_CustomAttributesCacheGenerator_U3CMessageExpiresAtU3Ek__BackingField
};
CustomAttributesCache t88__CustomAttributeCache_m378 = {
1,
NULL,
&t88_CustomAttributesCacheGenerator_m378
};
CustomAttributesCache t88__CustomAttributeCache_m379 = {
1,
NULL,
&t88_CustomAttributesCacheGenerator_m379
};
CustomAttributesCache t88__CustomAttributeCache_m380 = {
1,
NULL,
&t88_CustomAttributesCacheGenerator_m380
};
CustomAttributesCache t88__CustomAttributeCache_m381 = {
1,
NULL,
&t88_CustomAttributesCacheGenerator_m381
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType t88_0_0_0;
extern Il2CppType t88_1_0_0;
struct t88;
extern CustomAttributesCache t88__CustomAttributeCache_U3CMessageU3Ek__BackingField;
extern CustomAttributesCache t88__CustomAttributeCache_U3CMessageExpiresAtU3Ek__BackingField;
extern CustomAttributesCache t88__CustomAttributeCache_m378;
extern CustomAttributesCache t88__CustomAttributeCache_m379;
extern CustomAttributesCache t88__CustomAttributeCache_m380;
extern CustomAttributesCache t88__CustomAttributeCache_m381;
TypeInfo t88_TI = 
{
	&g_AssemblyU2DCSharp_dll_Image, NULL, "GameMessage", "", t88_MIs, t88_PIs, t88_FIs, NULL, &t5_TI, NULL, NULL, &t88_TI, NULL, t88_VT, &EmptyCustomAttributesCache, &t88_TI, &t88_0_0_0, &t88_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t88), 0, -1, 0, 0, -1, 1048577, 0, false, false, false, false, false, false, false, false, false, false, false, false, 5, 2, 2, 0, 0, 4, 0, 0};
#include "t89.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t89_TI;
#include "t89MD.h"

extern MethodInfo m671_MI;
struct t125;
#define m671(__this, p0, p1, method) (bool)m508_gshared((t5 *)__this, (t5*)p0, (t5 *)p1, method)


extern MethodInfo m382_MI;
 void m382 (t89 * __this, MethodInfo* method){
	{
		m460(__this, &m460_MI);
		return;
	}
}
extern MethodInfo m383_MI;
 bool m383 (t89 * __this, t88 * p0, MethodInfo* method){
	{
		t90* L_0 = (__this->f0);
		bool L_1 = m671(NULL, (t5*)(t5*)L_0, p0, &m671_MI);
		return L_1;
	}
}
// Metadata Definition GameMessageController/<ExpireOldMessages>c__AnonStorey7
extern Il2CppType t90_0_0_3;
FieldInfo t89_f0_FieldInfo = 
{
	"expired", &t90_0_0_3, &t89_TI, offsetof(t89, f0), &EmptyCustomAttributesCache};
static FieldInfo* t89_FIs[] =
{
	&t89_f0_FieldInfo,
	NULL
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m382_MI = 
{
	".ctor", (methodPointerType)&m382, &t89_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 415, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t88_0_0_0;
static ParameterInfo t89_m383_ParameterInfos[] = 
{
	{"x", 0, 134218016, &EmptyCustomAttributesCache, &t88_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m383_MI = 
{
	"<>m__30", (methodPointerType)&m383, &t89_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t89_m383_ParameterInfos, &EmptyCustomAttributesCache, 131, 0, 255, 1, false, false, 416, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t89_MIs[] =
{
	&m382_MI,
	&m383_MI,
	NULL
};
static MethodInfo* t89_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
};
void t89_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t89__CustomAttributeCache = {
1,
NULL,
&t89_CustomAttributesCacheGenerator
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType t89_0_0_0;
extern Il2CppType t89_1_0_0;
struct t89;
extern TypeInfo t91_TI;
extern CustomAttributesCache t89__CustomAttributeCache;
TypeInfo t89_TI = 
{
	&g_AssemblyU2DCSharp_dll_Image, NULL, "<ExpireOldMessages>c__AnonStorey7", "", t89_MIs, NULL, t89_FIs, NULL, &t5_TI, NULL, &t91_TI, &t89_TI, NULL, t89_VT, &t89__CustomAttributeCache, &t89_TI, &t89_0_0_0, &t89_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t89), 0, -1, 0, 0, -1, 1048835, 0, false, false, false, false, false, false, false, false, false, false, false, false, 2, 0, 1, 0, 0, 4, 0, 0};
#include "t91.h"
#ifndef _MSC_VER
#else
#endif
#include "t91MD.h"

#include "t92.h"
#include "t93.h"
#include "t94.h"
#include "t178.h"
#include "t179.h"
extern TypeInfo t92_TI;
extern TypeInfo t93_TI;
extern TypeInfo t94_TI;
extern TypeInfo t178_TI;
extern TypeInfo t179_TI;
extern TypeInfo t85_TI;
extern TypeInfo t84_TI;
#include "t92MD.h"
#include "t93MD.h"
#include "t94MD.h"
#include "t178MD.h"
#include "t179MD.h"
#include "t85MD.h"
#include "t84MD.h"
extern MethodInfo m672_MI;
extern MethodInfo m673_MI;
extern MethodInfo m386_MI;
extern MethodInfo m387_MI;
extern MethodInfo m388_MI;
extern MethodInfo m389_MI;
extern MethodInfo m390_MI;
extern MethodInfo m674_MI;
extern MethodInfo m675_MI;
extern MethodInfo m676_MI;
extern MethodInfo m677_MI;
extern MethodInfo m678_MI;
extern MethodInfo m679_MI;
extern MethodInfo m680_MI;
extern MethodInfo m681_MI;
extern MethodInfo m682_MI;
extern MethodInfo m683_MI;
extern MethodInfo m684_MI;
extern MethodInfo m685_MI;
extern MethodInfo m686_MI;
extern MethodInfo m687_MI;
extern MethodInfo m688_MI;
extern MethodInfo m689_MI;
extern MethodInfo m690_MI;
struct t125;
#define m675(__this, p0, p1, method) (t5*)m619_gshared((t5 *)__this, (t5*)p0, (t141 *)p1, method)
struct t125;
#define m676(__this, p0, method) (t90*)m620_gshared((t5 *)__this, (t5*)p0, method)


extern MethodInfo m384_MI;
 void m384 (t91 * __this, t85 * p0, float p1, MethodInfo* method){
	{
		__this->f3 = (0.5f);
		m460(__this, &m460_MI);
		__this->f3 = p1;
		__this->f0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t92_TI));
		t92 * L_0 = (t92 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t92_TI));
		m672(L_0, &m672_MI);
		__this->f1 = L_0;
		t93 * L_1 = (t93 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t93_TI));
		m673(L_1, &m673_MI);
		__this->f2 = L_1;
		return;
	}
}
extern MethodInfo m385_MI;
 void m385 (t91 * __this, t67 * p0, MethodInfo* method){
	{
		m386(__this, &m386_MI);
		m387(__this, p0, &m387_MI);
		m388(__this, &m388_MI);
		m389(__this, &m389_MI);
		return;
	}
}
 void m386 (t91 * __this, MethodInfo* method){
	t89 * V_0 = {0};
	t92 * G_B2_0 = {0};
	t89 * G_B2_1 = {0};
	t92 * G_B1_0 = {0};
	t89 * G_B1_1 = {0};
	{
		t89 * L_0 = (t89 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t89_TI));
		m382(L_0, &m382_MI);
		V_0 = L_0;
		t92 * L_1 = (__this->f1);
		G_B1_0 = L_1;
		G_B1_1 = V_0;
		if ((((t91_SFs*)InitializedTypeInfo(&t91_TI)->static_fields)->f4))
		{
			G_B2_0 = L_1;
			G_B2_1 = V_0;
			goto IL_0025;
		}
	}
	{
		t124 L_2 = { &m390_MI };
		t94 * L_3 = (t94 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t94_TI));
		m674(L_3, NULL, L_2, &m674_MI);
		((t91_SFs*)InitializedTypeInfo(&t91_TI)->static_fields)->f4 = L_3;
		G_B2_0 = G_B1_0;
		G_B2_1 = G_B1_1;
	}

IL_0025:
	{
		t5* L_4 = m675(NULL, G_B2_0, (((t91_SFs*)InitializedTypeInfo(&t91_TI)->static_fields)->f4), &m675_MI);
		t90* L_5 = m676(NULL, L_4, &m676_MI);
		G_B2_1->f0 = L_5;
		t92 * L_6 = (__this->f1);
		t124 L_7 = { &m383_MI };
		t178 * L_8 = (t178 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t178_TI));
		m677(L_8, V_0, L_7, &m677_MI);
		m678(L_6, L_8, &m678_MI);
		return;
	}
}
 void m387 (t91 * __this, t67 * p0, MethodInfo* method){
	t11* V_0 = {0};
	t179  V_1 = {0};
	t88 * V_2 = {0};
	int32_t leaveInstructions[1] = {0};
	t142 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t142 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	{
		t179  L_0 = m679(p0, &m679_MI);
		V_1 = L_0;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			goto IL_002d;
		}

IL_000c:
		{
			t11* L_1 = m680((&V_1), &m680_MI);
			V_0 = L_1;
			t88 * L_2 = (t88 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t88_TI));
			m377(L_2, &m377_MI);
			V_2 = L_2;
			m379(V_2, V_0, &m379_MI);
			t93 * L_3 = (__this->f2);
			m681(L_3, V_2, &m681_MI);
		}

IL_002d:
		{
			bool L_4 = m682((&V_1), &m682_MI);
			if (L_4)
			{
				goto IL_000c;
			}
		}

IL_0039:
		{
			// IL_0039: leave IL_004a
			leaveInstructions[0] = 0x4A; // 1
			THROW_SENTINEL(IL_004a);
			// finally target depth: 1
		}
	} // end try (depth: 1)
	catch(Il2CppFinallySentinel& e)
	{
		goto IL_003e;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t142 *)e.ex;
		goto IL_003e;
	}

IL_003e:
	{ // begin finally (depth: 1)
		t179  L_5 = V_1;
		t5 * L_6 = Box(InitializedTypeInfo(&t179_TI), &L_5);
		InterfaceActionInvoker0::Invoke(&m516_MI, L_6);
		// finally node depth: 1
		switch (leaveInstructions[0])
		{
			case 0x4A:
				goto IL_004a;
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

IL_004a:
	{
		return;
	}
}
 void m388 (t91 * __this, MethodInfo* method){
	t88 * V_0 = {0};
	{
		t93 * L_0 = (__this->f2);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m683_MI, L_0);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		t92 * L_2 = (__this->f1);
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m684_MI, L_2);
		t85 * L_4 = (__this->f0);
		int32_t L_5 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m685_MI, L_4);
		if ((((int32_t)L_3) >= ((int32_t)L_5)))
		{
			goto IL_0087;
		}
	}
	{
		goto IL_005b;
	}

IL_0031:
	{
		t93 * L_6 = (__this->f2);
		t88 * L_7 = m686(L_6, &m686_MI);
		V_0 = L_7;
		float L_8 = m660(NULL, &m660_MI);
		float L_9 = (__this->f3);
		m381(V_0, ((float)(L_8+L_9)), &m381_MI);
		t92 * L_10 = (__this->f1);
		VirtActionInvoker1< t88 * >::Invoke(&m687_MI, L_10, V_0);
	}

IL_005b:
	{
		t92 * L_11 = (__this->f1);
		int32_t L_12 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m684_MI, L_11);
		t85 * L_13 = (__this->f0);
		int32_t L_14 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m685_MI, L_13);
		if ((((int32_t)L_12) >= ((int32_t)L_14)))
		{
			goto IL_0087;
		}
	}
	{
		t93 * L_15 = (__this->f2);
		int32_t L_16 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m683_MI, L_15);
		if ((((int32_t)L_16) > ((int32_t)0)))
		{
			goto IL_0031;
		}
	}

IL_0087:
	{
		return;
	}
}
 void m389 (t91 * __this, MethodInfo* method){
	int32_t V_0 = 0;
	t84 * V_1 = {0};
	{
		V_0 = 0;
		goto IL_0050;
	}

IL_0007:
	{
		t85 * L_0 = (__this->f0);
		t84 * L_1 = (t84 *)VirtFuncInvoker1< t84 *, int32_t >::Invoke(&m688_MI, L_0, V_0);
		V_1 = L_1;
		t92 * L_2 = (__this->f1);
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m684_MI, L_2);
		if ((((int32_t)V_0) >= ((int32_t)L_3)))
		{
			goto IL_0041;
		}
	}
	{
		t92 * L_4 = (__this->f1);
		t88 * L_5 = (t88 *)VirtFuncInvoker1< t88 *, int32_t >::Invoke(&m689_MI, L_4, V_0);
		t11* L_6 = m378(L_5, &m378_MI);
		VirtActionInvoker1< t11* >::Invoke(&m690_MI, V_1, L_6);
		goto IL_004c;
	}

IL_0041:
	{
		IL2CPP_RUNTIME_CLASS_INIT((&t11_TI));
		VirtActionInvoker1< t11* >::Invoke(&m690_MI, V_1, (((t11_SFs*)(&t11_TI)->static_fields)->f2));
	}

IL_004c:
	{
		V_0 = ((int32_t)(V_0+1));
	}

IL_0050:
	{
		t85 * L_7 = (__this->f0);
		int32_t L_8 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m685_MI, L_7);
		if ((((int32_t)V_0) < ((int32_t)L_8)))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
 bool m390 (t5 * __this, t88 * p0, MethodInfo* method){
	{
		float L_0 = m380(p0, &m380_MI);
		float L_1 = m660(NULL, &m660_MI);
		return ((((int32_t)((((float)L_0) > ((float)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// Metadata Definition GameMessageController
extern Il2CppType t85_0_0_1;
FieldInfo t91_f0_FieldInfo = 
{
	"gameMessageSlots", &t85_0_0_1, &t91_TI, offsetof(t91, f0), &EmptyCustomAttributesCache};
extern Il2CppType t92_0_0_1;
FieldInfo t91_f1_FieldInfo = 
{
	"gameMessages", &t92_0_0_1, &t91_TI, offsetof(t91, f1), &EmptyCustomAttributesCache};
extern Il2CppType t93_0_0_1;
FieldInfo t91_f2_FieldInfo = 
{
	"waitingGameMessages", &t93_0_0_1, &t91_TI, offsetof(t91, f2), &EmptyCustomAttributesCache};
extern Il2CppType t116_0_0_1;
FieldInfo t91_f3_FieldInfo = 
{
	"gameMessageVisibleTime", &t116_0_0_1, &t91_TI, offsetof(t91, f3), &EmptyCustomAttributesCache};
extern Il2CppType t94_0_0_17;
extern CustomAttributesCache t91__CustomAttributeCache_U3CU3Ef__am$cache4;
FieldInfo t91_f4_FieldInfo = 
{
	"<>f__am$cache4", &t94_0_0_17, &t91_TI, offsetof(t91_SFs, f4), &t91__CustomAttributeCache_U3CU3Ef__am$cache4};
static FieldInfo* t91_FIs[] =
{
	&t91_f0_FieldInfo,
	&t91_f1_FieldInfo,
	&t91_f2_FieldInfo,
	&t91_f3_FieldInfo,
	&t91_f4_FieldInfo,
	NULL
};
extern Il2CppType t85_0_0_0;
extern Il2CppType t85_0_0_0;
extern Il2CppType t116_0_0_0;
static ParameterInfo t91_m384_ParameterInfos[] = 
{
	{"gameMessageUISlots", 0, 134218011, &EmptyCustomAttributesCache, &t85_0_0_0},
	{"messageVisibleTime", 1, 134218012, &EmptyCustomAttributesCache, &t116_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5_t116 (MethodInfo* method, void* obj, void** args);
MethodInfo m384_MI = 
{
	".ctor", (methodPointerType)&m384, &t91_TI, &t109_0_0_0, RuntimeInvoker_t109_t5_t116, t91_m384_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 2, false, false, 408, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t67_0_0_0;
static ParameterInfo t91_m385_ParameterInfos[] = 
{
	{"messages", 0, 134218013, &EmptyCustomAttributesCache, &t67_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m385_MI = 
{
	"DisplayMessages", (methodPointerType)&m385, &t91_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t91_m385_ParameterInfos, &EmptyCustomAttributesCache, 134, 0, 255, 1, false, false, 409, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m386_MI = 
{
	"ExpireOldMessages", (methodPointerType)&m386, &t91_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 410, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t67_0_0_0;
static ParameterInfo t91_m387_ParameterInfos[] = 
{
	{"messages", 0, 134218014, &EmptyCustomAttributesCache, &t67_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m387_MI = 
{
	"AddNewMessagesToWaitingQueue", (methodPointerType)&m387, &t91_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t91_m387_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 411, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m388_MI = 
{
	"AddWaitingMessages", (methodPointerType)&m388, &t91_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 412, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m389_MI = 
{
	"DisplayMessages", (methodPointerType)&m389, &t91_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 413, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t88_0_0_0;
static ParameterInfo t91_m390_ParameterInfos[] = 
{
	{"x", 0, 134218015, &EmptyCustomAttributesCache, &t88_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t91__CustomAttributeCache_m390;
MethodInfo m390_MI = 
{
	"<ExpireOldMessages>m__2F", (methodPointerType)&m390, &t91_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t91_m390_ParameterInfos, &t91__CustomAttributeCache_m390, 145, 0, 255, 1, false, false, 414, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t91_MIs[] =
{
	&m384_MI,
	&m385_MI,
	&m386_MI,
	&m387_MI,
	&m388_MI,
	&m389_MI,
	&m390_MI,
	NULL
};
extern TypeInfo t89_TI;
static TypeInfo* t91_TI__nestedTypes[2] =
{
	&t89_TI,
	NULL
};
static MethodInfo* t91_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
};
void t91_CustomAttributesCacheGenerator_U3CU3Ef__am$cache4(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t91_CustomAttributesCacheGenerator_m390(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t91__CustomAttributeCache_U3CU3Ef__am$cache4 = {
1,
NULL,
&t91_CustomAttributesCacheGenerator_U3CU3Ef__am$cache4
};
CustomAttributesCache t91__CustomAttributeCache_m390 = {
1,
NULL,
&t91_CustomAttributesCacheGenerator_m390
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType t91_0_0_0;
extern Il2CppType t91_1_0_0;
struct t91;
extern CustomAttributesCache t91__CustomAttributeCache_U3CU3Ef__am$cache4;
extern CustomAttributesCache t91__CustomAttributeCache_m390;
TypeInfo t91_TI = 
{
	&g_AssemblyU2DCSharp_dll_Image, NULL, "GameMessageController", "", t91_MIs, NULL, t91_FIs, NULL, &t5_TI, t91_TI__nestedTypes, NULL, &t91_TI, NULL, t91_VT, &EmptyCustomAttributesCache, &t91_TI, &t91_0_0_0, &t91_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t91), 0, -1, sizeof(t91_SFs), 0, -1, 1048577, 0, false, false, false, false, false, false, false, false, false, false, false, false, 7, 0, 5, 0, 1, 4, 0, 0};
#include "t95.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t95_TI;
#include "t95MD.h"



extern MethodInfo m391_MI;
 void m391 (t95 * __this, MethodInfo* method){
	{
		m469(__this, &m469_MI);
		return;
	}
}
// Metadata Definition JewelMaterial
extern Il2CppType t83_0_0_6;
FieldInfo t95_f2_FieldInfo = 
{
	"rendererMaterial", &t83_0_0_6, &t95_TI, offsetof(t95, f2), &EmptyCustomAttributesCache};
static FieldInfo* t95_FIs[] =
{
	&t95_f2_FieldInfo,
	NULL
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m391_MI = 
{
	".ctor", (methodPointerType)&m391, &t95_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 417, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t95_MIs[] =
{
	&m391_MI,
	NULL
};
static MethodInfo* t95_VT[] =
{
	&m476_MI,
	&m465_MI,
	&m477_MI,
	&m478_MI,
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType t95_0_0_0;
extern Il2CppType t95_1_0_0;
struct t95;
TypeInfo t95_TI = 
{
	&g_AssemblyU2DCSharp_dll_Image, NULL, "JewelMaterial", "", t95_MIs, NULL, t95_FIs, NULL, &t10_TI, NULL, NULL, &t95_TI, NULL, t95_VT, &EmptyCustomAttributesCache, &t95_TI, &t95_0_0_0, &t95_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t95), 0, -1, 0, 0, -1, 1048577, 0, false, false, false, false, false, false, false, false, false, false, false, false, 1, 0, 1, 0, 0, 4, 0, 0};
#include "t96.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t96_TI;
#include "t96MD.h"



extern MethodInfo m392_MI;
 void m392 (t96 * __this, MethodInfo* method){
	{
		m469(__this, &m469_MI);
		return;
	}
}
// Metadata Definition JewelTag
extern Il2CppType t19_0_0_6;
FieldInfo t96_f2_FieldInfo = 
{
	"jewelType", &t19_0_0_6, &t96_TI, offsetof(t96, f2), &EmptyCustomAttributesCache};
static FieldInfo* t96_FIs[] =
{
	&t96_f2_FieldInfo,
	NULL
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m392_MI = 
{
	".ctor", (methodPointerType)&m392, &t96_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 418, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t96_MIs[] =
{
	&m392_MI,
	NULL
};
static MethodInfo* t96_VT[] =
{
	&m476_MI,
	&m465_MI,
	&m477_MI,
	&m478_MI,
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType t96_0_0_0;
extern Il2CppType t96_1_0_0;
struct t96;
TypeInfo t96_TI = 
{
	&g_AssemblyU2DCSharp_dll_Image, NULL, "JewelTag", "", t96_MIs, NULL, t96_FIs, NULL, &t10_TI, NULL, NULL, &t96_TI, NULL, t96_VT, &EmptyCustomAttributesCache, &t96_TI, &t96_0_0_0, &t96_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t96), 0, -1, 0, 0, -1, 1048577, 0, false, false, false, false, false, false, false, false, false, false, false, false, 1, 0, 1, 0, 0, 4, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t86_TI;

#include "t97.h"
#include "t180.h"
extern TypeInfo t97_TI;
#include "t69MD.h"
#include "t97MD.h"
#include "t78MD.h"
#include "t181MD.h"
extern MethodInfo m691_MI;
extern MethodInfo m399_MI;
extern MethodInfo m692_MI;
extern MethodInfo m693_MI;
extern MethodInfo m395_MI;
extern MethodInfo m400_MI;
extern MethodInfo m694_MI;
extern MethodInfo m695_MI;
struct t69;
struct t69;
 t5 * m696_gshared (t69 * __this, MethodInfo* method);
#define m696(__this, method) (t5 *)m696_gshared((t69 *)__this, method)
#define m694(__this, method) (t180 *)m696_gshared((t69 *)__this, method)


extern MethodInfo m393_MI;
 void m393 (t86 * __this, MethodInfo* method){
	{
		m469(__this, &m469_MI);
		return;
	}
}
 bool m394 (t86 * __this, MethodInfo* method){
	{
		bool L_0 = (__this->f4);
		return L_0;
	}
}
 void m395 (t86 * __this, bool p0, MethodInfo* method){
	{
		__this->f4 = p0;
		return;
	}
}
extern MethodInfo m396_MI;
 void m396 (t86 * __this, MethodInfo* method){
	{
		t69 * L_0 = (__this->f2);
		m691(L_0, 0, &m691_MI);
		return;
	}
}
extern MethodInfo m397_MI;
 void m397 (t86 * __this, MethodInfo* method){
	t78 * G_B2_0 = {0};
	t78 * G_B1_0 = {0};
	{
		t69 * L_0 = (__this->f2);
		m691(L_0, 1, &m691_MI);
		t78 * L_1 = (__this->f3);
		G_B1_0 = L_1;
		if ((((t86_SFs*)InitializedTypeInfo(&t86_TI)->static_fields)->f5))
		{
			G_B2_0 = L_1;
			goto IL_002a;
		}
	}
	{
		t124 L_2 = { &m399_MI };
		t97 * L_3 = (t97 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t97_TI));
		m692(L_3, NULL, L_2, &m692_MI);
		((t86_SFs*)InitializedTypeInfo(&t86_TI)->static_fields)->f5 = L_3;
		G_B2_0 = G_B1_0;
	}

IL_002a:
	{
		m693(G_B2_0, (((t86_SFs*)InitializedTypeInfo(&t86_TI)->static_fields)->f5), &m693_MI);
		m395(__this, 1, &m395_MI);
		return;
	}
}
extern MethodInfo m398_MI;
 void m398 (t86 * __this, MethodInfo* method){
	t78 * G_B2_0 = {0};
	t78 * G_B1_0 = {0};
	{
		t69 * L_0 = (__this->f2);
		m691(L_0, 0, &m691_MI);
		t78 * L_1 = (__this->f3);
		G_B1_0 = L_1;
		if ((((t86_SFs*)InitializedTypeInfo(&t86_TI)->static_fields)->f6))
		{
			G_B2_0 = L_1;
			goto IL_002a;
		}
	}
	{
		t124 L_2 = { &m400_MI };
		t97 * L_3 = (t97 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t97_TI));
		m692(L_3, NULL, L_2, &m692_MI);
		((t86_SFs*)InitializedTypeInfo(&t86_TI)->static_fields)->f6 = L_3;
		G_B2_0 = G_B1_0;
	}

IL_002a:
	{
		m693(G_B2_0, (((t86_SFs*)InitializedTypeInfo(&t86_TI)->static_fields)->f6), &m693_MI);
		m395(__this, 0, &m395_MI);
		return;
	}
}
 void m399 (t5 * __this, t69 * p0, MethodInfo* method){
	{
		t180 * L_0 = m694(p0, &m694_MI);
		m695(L_0, 0, &m695_MI);
		return;
	}
}
 void m400 (t5 * __this, t69 * p0, MethodInfo* method){
	{
		t180 * L_0 = m694(p0, &m694_MI);
		m695(L_0, 1, &m695_MI);
		return;
	}
}
// Metadata Definition OptionsController
extern Il2CppType t69_0_0_6;
FieldInfo t86_f2_FieldInfo = 
{
	"optionPanelGameObject", &t69_0_0_6, &t86_TI, offsetof(t86, f2), &EmptyCustomAttributesCache};
extern Il2CppType t78_0_0_6;
FieldInfo t86_f3_FieldInfo = 
{
	"disableWhenDisplayed", &t78_0_0_6, &t86_TI, offsetof(t86, f3), &EmptyCustomAttributesCache};
extern Il2CppType t108_0_0_1;
extern CustomAttributesCache t86__CustomAttributeCache_U3COptionsShowingU3Ek__BackingField;
FieldInfo t86_f4_FieldInfo = 
{
	"<OptionsShowing>k__BackingField", &t108_0_0_1, &t86_TI, offsetof(t86, f4), &t86__CustomAttributeCache_U3COptionsShowingU3Ek__BackingField};
extern Il2CppType t97_0_0_17;
extern CustomAttributesCache t86__CustomAttributeCache_U3CU3Ef__am$cache3;
FieldInfo t86_f5_FieldInfo = 
{
	"<>f__am$cache3", &t97_0_0_17, &t86_TI, offsetof(t86_SFs, f5), &t86__CustomAttributeCache_U3CU3Ef__am$cache3};
extern Il2CppType t97_0_0_17;
extern CustomAttributesCache t86__CustomAttributeCache_U3CU3Ef__am$cache4;
FieldInfo t86_f6_FieldInfo = 
{
	"<>f__am$cache4", &t97_0_0_17, &t86_TI, offsetof(t86_SFs, f6), &t86__CustomAttributeCache_U3CU3Ef__am$cache4};
static FieldInfo* t86_FIs[] =
{
	&t86_f2_FieldInfo,
	&t86_f3_FieldInfo,
	&t86_f4_FieldInfo,
	&t86_f5_FieldInfo,
	&t86_f6_FieldInfo,
	NULL
};
static PropertyInfo t86____OptionsShowing_PropertyInfo = 
{
	&t86_TI, "OptionsShowing", &m394_MI, &m395_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t86_PIs[] =
{
	&t86____OptionsShowing_PropertyInfo,
	NULL
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m393_MI = 
{
	".ctor", (methodPointerType)&m393, &t86_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 419, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t86__CustomAttributeCache_m394;
MethodInfo m394_MI = 
{
	"get_OptionsShowing", (methodPointerType)&m394, &t86_TI, &t108_0_0_0, RuntimeInvoker_t108, NULL, &t86__CustomAttributeCache_m394, 2182, 0, 255, 0, false, false, 420, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t108_0_0_0;
static ParameterInfo t86_m395_ParameterInfos[] = 
{
	{"value", 0, 134218017, &EmptyCustomAttributesCache, &t108_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t111 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t86__CustomAttributeCache_m395;
MethodInfo m395_MI = 
{
	"set_OptionsShowing", (methodPointerType)&m395, &t86_TI, &t109_0_0_0, RuntimeInvoker_t109_t111, t86_m395_ParameterInfos, &t86__CustomAttributeCache_m395, 2177, 0, 255, 1, false, false, 421, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m396_MI = 
{
	"Start", (methodPointerType)&m396, &t86_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, false, 422, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m397_MI = 
{
	"ShowOptionsPanel", (methodPointerType)&m397, &t86_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, false, 423, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m398_MI = 
{
	"HideOptionsPanel", (methodPointerType)&m398, &t86_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, false, 424, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t69_0_0_0;
extern Il2CppType t69_0_0_0;
static ParameterInfo t86_m399_ParameterInfos[] = 
{
	{"x", 0, 134218018, &EmptyCustomAttributesCache, &t69_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t86__CustomAttributeCache_m399;
MethodInfo m399_MI = 
{
	"<ShowOptionsPanel>m__31", (methodPointerType)&m399, &t86_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t86_m399_ParameterInfos, &t86__CustomAttributeCache_m399, 145, 0, 255, 1, false, false, 425, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t69_0_0_0;
static ParameterInfo t86_m400_ParameterInfos[] = 
{
	{"x", 0, 134218019, &EmptyCustomAttributesCache, &t69_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t86__CustomAttributeCache_m400;
MethodInfo m400_MI = 
{
	"<HideOptionsPanel>m__32", (methodPointerType)&m400, &t86_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t86_m400_ParameterInfos, &t86__CustomAttributeCache_m400, 145, 0, 255, 1, false, false, 426, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t86_MIs[] =
{
	&m393_MI,
	&m394_MI,
	&m395_MI,
	&m396_MI,
	&m397_MI,
	&m398_MI,
	&m399_MI,
	&m400_MI,
	NULL
};
static MethodInfo* t86_VT[] =
{
	&m476_MI,
	&m465_MI,
	&m477_MI,
	&m478_MI,
};
void t86_CustomAttributesCacheGenerator_U3COptionsShowingU3Ek__BackingField(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t86_CustomAttributesCacheGenerator_U3CU3Ef__am$cache3(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t86_CustomAttributesCacheGenerator_U3CU3Ef__am$cache4(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t86_CustomAttributesCacheGenerator_m394(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t86_CustomAttributesCacheGenerator_m395(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t86_CustomAttributesCacheGenerator_m399(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t86_CustomAttributesCacheGenerator_m400(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t86__CustomAttributeCache_U3COptionsShowingU3Ek__BackingField = {
1,
NULL,
&t86_CustomAttributesCacheGenerator_U3COptionsShowingU3Ek__BackingField
};
CustomAttributesCache t86__CustomAttributeCache_U3CU3Ef__am$cache3 = {
1,
NULL,
&t86_CustomAttributesCacheGenerator_U3CU3Ef__am$cache3
};
CustomAttributesCache t86__CustomAttributeCache_U3CU3Ef__am$cache4 = {
1,
NULL,
&t86_CustomAttributesCacheGenerator_U3CU3Ef__am$cache4
};
CustomAttributesCache t86__CustomAttributeCache_m394 = {
1,
NULL,
&t86_CustomAttributesCacheGenerator_m394
};
CustomAttributesCache t86__CustomAttributeCache_m395 = {
1,
NULL,
&t86_CustomAttributesCacheGenerator_m395
};
CustomAttributesCache t86__CustomAttributeCache_m399 = {
1,
NULL,
&t86_CustomAttributesCacheGenerator_m399
};
CustomAttributesCache t86__CustomAttributeCache_m400 = {
1,
NULL,
&t86_CustomAttributesCacheGenerator_m400
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType t86_0_0_0;
extern Il2CppType t86_1_0_0;
struct t86;
extern CustomAttributesCache t86__CustomAttributeCache_U3COptionsShowingU3Ek__BackingField;
extern CustomAttributesCache t86__CustomAttributeCache_U3CU3Ef__am$cache3;
extern CustomAttributesCache t86__CustomAttributeCache_U3CU3Ef__am$cache4;
extern CustomAttributesCache t86__CustomAttributeCache_m394;
extern CustomAttributesCache t86__CustomAttributeCache_m395;
extern CustomAttributesCache t86__CustomAttributeCache_m399;
extern CustomAttributesCache t86__CustomAttributeCache_m400;
TypeInfo t86_TI = 
{
	&g_AssemblyU2DCSharp_dll_Image, NULL, "OptionsController", "", t86_MIs, t86_PIs, t86_FIs, NULL, &t10_TI, NULL, NULL, &t86_TI, NULL, t86_VT, &EmptyCustomAttributesCache, &t86_TI, &t86_0_0_0, &t86_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t86), 0, -1, sizeof(t86_SFs), 0, -1, 1048577, 0, false, false, false, false, false, false, false, false, false, false, false, false, 8, 1, 5, 0, 0, 4, 0, 0};
#include "t98.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t98_TI;
#include "t98MD.h"



// Metadata Definition SoundEffects/AudioClipType
extern Il2CppType t110_0_0_1542;
FieldInfo t98_f1_FieldInfo = 
{
	"value__", &t110_0_0_1542, &t98_TI, offsetof(t98, f1) + sizeof(t5), &EmptyCustomAttributesCache};
extern Il2CppType t98_0_0_32854;
FieldInfo t98_f2_FieldInfo = 
{
	"Collision", &t98_0_0_32854, &t98_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t98_0_0_32854;
FieldInfo t98_f3_FieldInfo = 
{
	"LevelUp", &t98_0_0_32854, &t98_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t98_0_0_32854;
FieldInfo t98_f4_FieldInfo = 
{
	"Stationary", &t98_0_0_32854, &t98_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
extern Il2CppType t98_0_0_32854;
FieldInfo t98_f5_FieldInfo = 
{
	"Swap", &t98_0_0_32854, &t98_TI, 0 /*field is const -> no data*/, &EmptyCustomAttributesCache};
static FieldInfo* t98_FIs[] =
{
	&t98_f1_FieldInfo,
	&t98_f2_FieldInfo,
	&t98_f3_FieldInfo,
	&t98_f4_FieldInfo,
	&t98_f5_FieldInfo,
	NULL
};
static const int32_t t98_f2_DefaultValueData = 0;
static Il2CppFieldDefaultValueEntry t98_f2_DefaultValue = 
{
	&t98_f2_FieldInfo, { (char*)&t98_f2_DefaultValueData, &t110_0_0_0 }};
static const int32_t t98_f3_DefaultValueData = 1;
static Il2CppFieldDefaultValueEntry t98_f3_DefaultValue = 
{
	&t98_f3_FieldInfo, { (char*)&t98_f3_DefaultValueData, &t110_0_0_0 }};
static const int32_t t98_f4_DefaultValueData = 2;
static Il2CppFieldDefaultValueEntry t98_f4_DefaultValue = 
{
	&t98_f4_FieldInfo, { (char*)&t98_f4_DefaultValueData, &t110_0_0_0 }};
static const int32_t t98_f5_DefaultValueData = 3;
static Il2CppFieldDefaultValueEntry t98_f5_DefaultValue = 
{
	&t98_f5_FieldInfo, { (char*)&t98_f5_DefaultValueData, &t110_0_0_0 }};
static Il2CppFieldDefaultValueEntry* t98_FDVs[] = 
{
	&t98_f2_DefaultValue,
	&t98_f3_DefaultValue,
	&t98_f4_DefaultValue,
	&t98_f5_DefaultValue,
	NULL
};
static MethodInfo* t98_MIs[] =
{
	NULL
};
static MethodInfo* t98_VT[] =
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
static Il2CppInterfaceOffsetPair t98_IOs[] = 
{
	{ &t120_TI, 4},
	{ &t121_TI, 5},
	{ &t122_TI, 21},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType t98_0_0_0;
extern Il2CppType t98_1_0_0;
extern TypeInfo t3_TI;
TypeInfo t98_TI = 
{
	&g_AssemblyU2DCSharp_dll_Image, NULL, "AudioClipType", "", t98_MIs, NULL, t98_FIs, NULL, &t18_TI, NULL, &t3_TI, &t110_TI, NULL, t98_VT, &EmptyCustomAttributesCache, &t110_TI, &t98_0_0_0, &t98_1_0_0, t98_IOs, NULL, NULL, t98_FDVs, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t98)+ sizeof (Il2CppObject), sizeof (int32_t), sizeof(int32_t), 0, 0, -1, 259, 0, true, false, false, true, false, false, false, false, false, false, false, false, 0, 0, 5, 0, 0, 23, 0, 3};
#ifndef _MSC_VER
#else
#endif

#include "t100.h"
#include "t182.h"
#include "t99.h"
extern TypeInfo t100_TI;
extern TypeInfo t182_TI;
extern TypeInfo t8_TI;
#include "t100MD.h"
#include "t99MD.h"
#include "t182MD.h"
extern MethodInfo m697_MI;
extern MethodInfo m403_MI;
extern MethodInfo m698_MI;
extern MethodInfo m699_MI;
extern MethodInfo m700_MI;
extern MethodInfo m701_MI;
extern MethodInfo m702_MI;
extern MethodInfo m703_MI;
extern MethodInfo m704_MI;


extern MethodInfo m401_MI;
 void m401 (t3 * __this, MethodInfo* method){
	{
		m469(__this, &m469_MI);
		return;
	}
}
extern MethodInfo m402_MI;
 void m402 (t3 * __this, MethodInfo* method){
	{
		t9 * L_0 = m470(__this, &m470_MI);
		__this->f3 = L_0;
		t100 * L_1 = (t100 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t100_TI));
		m697(L_1, &m697_MI);
		__this->f4 = L_1;
		m403(__this, &m403_MI);
		return;
	}
}
 void m403 (t3 * __this, MethodInfo* method){
	t8 * V_0 = {0};
	t182  V_1 = {0};
	int32_t V_2 = {0};
	int32_t leaveInstructions[1] = {0};
	t142 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t142 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	{
		t99 * L_0 = (__this->f2);
		t182  L_1 = m698(L_0, &m698_MI);
		V_1 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0041;
		}

IL_0011:
		{
			t8 * L_2 = m699((&V_1), &m699_MI);
			V_0 = L_2;
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t114_TI));
			t114 * L_3 = m532(NULL, LoadTypeToken(&t98_0_0_0), &m532_MI);
			t11* L_4 = m700(V_0, &m700_MI);
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t18_TI));
			t5 * L_5 = m701(NULL, L_3, L_4, &m701_MI);
			V_2 = ((*(int32_t*)((int32_t*)UnBox (L_5, InitializedTypeInfo(&t110_TI)))));
			t100 * L_6 = (__this->f4);
			VirtActionInvoker2< int32_t, t8 * >::Invoke(&m702_MI, L_6, V_2, V_0);
		}

IL_0041:
		{
			bool L_7 = m703((&V_1), &m703_MI);
			if (L_7)
			{
				goto IL_0011;
			}
		}

IL_004d:
		{
			// IL_004d: leave IL_005e
			leaveInstructions[0] = 0x5E; // 1
			THROW_SENTINEL(IL_005e);
			// finally target depth: 1
		}
	} // end try (depth: 1)
	catch(Il2CppFinallySentinel& e)
	{
		goto IL_0052;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t142 *)e.ex;
		goto IL_0052;
	}

IL_0052:
	{ // begin finally (depth: 1)
		t182  L_8 = V_1;
		t5 * L_9 = Box(InitializedTypeInfo(&t182_TI), &L_8);
		InterfaceActionInvoker0::Invoke(&m516_MI, L_9);
		// finally node depth: 1
		switch (leaveInstructions[0])
		{
			case 0x5E:
				goto IL_005e;
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

IL_005e:
	{
		return;
	}
}
 void m404 (t3 * __this, MethodInfo* method){
	{
		t9 * L_0 = (__this->f3);
		t100 * L_1 = (__this->f4);
		t8 * L_2 = (t8 *)VirtFuncInvoker1< t8 *, int32_t >::Invoke(&m704_MI, L_1, 0);
		m471(L_0, L_2, &m471_MI);
		t9 * L_3 = (__this->f3);
		m473(L_3, &m473_MI);
		return;
	}
}
 void m405 (t3 * __this, MethodInfo* method){
	{
		t9 * L_0 = (__this->f3);
		t100 * L_1 = (__this->f4);
		t8 * L_2 = (t8 *)VirtFuncInvoker1< t8 *, int32_t >::Invoke(&m704_MI, L_1, 1);
		m471(L_0, L_2, &m471_MI);
		t9 * L_3 = (__this->f3);
		m473(L_3, &m473_MI);
		return;
	}
}
 void m406 (t3 * __this, MethodInfo* method){
	{
		t9 * L_0 = (__this->f3);
		t100 * L_1 = (__this->f4);
		t8 * L_2 = (t8 *)VirtFuncInvoker1< t8 *, int32_t >::Invoke(&m704_MI, L_1, 2);
		m471(L_0, L_2, &m471_MI);
		t9 * L_3 = (__this->f3);
		m473(L_3, &m473_MI);
		return;
	}
}
 void m407 (t3 * __this, MethodInfo* method){
	{
		t9 * L_0 = (__this->f3);
		t100 * L_1 = (__this->f4);
		t8 * L_2 = (t8 *)VirtFuncInvoker1< t8 *, int32_t >::Invoke(&m704_MI, L_1, 3);
		m471(L_0, L_2, &m471_MI);
		t9 * L_3 = (__this->f3);
		m473(L_3, &m473_MI);
		return;
	}
}
// Metadata Definition SoundEffects
extern Il2CppType t99_0_0_6;
FieldInfo t3_f2_FieldInfo = 
{
	"audioClips", &t99_0_0_6, &t3_TI, offsetof(t3, f2), &EmptyCustomAttributesCache};
extern Il2CppType t9_0_0_1;
FieldInfo t3_f3_FieldInfo = 
{
	"audioPlayer", &t9_0_0_1, &t3_TI, offsetof(t3, f3), &EmptyCustomAttributesCache};
extern Il2CppType t100_0_0_1;
FieldInfo t3_f4_FieldInfo = 
{
	"audioClipTypeDictionary", &t100_0_0_1, &t3_TI, offsetof(t3, f4), &EmptyCustomAttributesCache};
static FieldInfo* t3_FIs[] =
{
	&t3_f2_FieldInfo,
	&t3_f3_FieldInfo,
	&t3_f4_FieldInfo,
	NULL
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m401_MI = 
{
	".ctor", (methodPointerType)&m401, &t3_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 427, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m402_MI = 
{
	"Start", (methodPointerType)&m402, &t3_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 428, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m403_MI = 
{
	"BuildAudioClipDictionary", (methodPointerType)&m403, &t3_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 429, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m404_MI = 
{
	"PlayCollision", (methodPointerType)&m404, &t3_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, false, 430, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m405_MI = 
{
	"PlayLevelUp", (methodPointerType)&m405, &t3_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, false, 431, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m406_MI = 
{
	"PlayStationary", (methodPointerType)&m406, &t3_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, false, 432, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m407_MI = 
{
	"PlaySwap", (methodPointerType)&m407, &t3_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 134, 0, 255, 0, false, false, 433, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t3_MIs[] =
{
	&m401_MI,
	&m402_MI,
	&m403_MI,
	&m404_MI,
	&m405_MI,
	&m406_MI,
	&m407_MI,
	NULL
};
extern TypeInfo t98_TI;
static TypeInfo* t3_TI__nestedTypes[2] =
{
	&t98_TI,
	NULL
};
static MethodInfo* t3_VT[] =
{
	&m476_MI,
	&m465_MI,
	&m477_MI,
	&m478_MI,
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType t3_1_0_0;
struct t3;
TypeInfo t3_TI = 
{
	&g_AssemblyU2DCSharp_dll_Image, NULL, "SoundEffects", "", t3_MIs, NULL, t3_FIs, NULL, &t10_TI, t3_TI__nestedTypes, NULL, &t3_TI, NULL, t3_VT, &EmptyCustomAttributesCache, &t3_TI, &t3_0_0_0, &t3_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t3), 0, -1, 0, 0, -1, 1048577, 0, false, false, false, false, false, false, false, false, false, false, false, false, 7, 0, 3, 0, 1, 4, 0, 0};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t82_TI;

#include "t102.h"
#include "t183.h"
#include "t184.h"
#include "UnityEngine_ArrayTypes.h"
#include "t185.h"
extern TypeInfo t102_TI;
extern TypeInfo t186_TI;
#include "t102MD.h"
#include "t183MD.h"
#include "t184MD.h"
#include "t186MD.h"
extern MethodInfo m705_MI;
extern MethodInfo m706_MI;
extern MethodInfo m707_MI;
extern MethodInfo m708_MI;
extern MethodInfo m709_MI;
extern MethodInfo m710_MI;
extern MethodInfo m711_MI;
extern MethodInfo m712_MI;
extern MethodInfo m713_MI;
extern MethodInfo m714_MI;
extern MethodInfo m715_MI;
extern MethodInfo m716_MI;
extern MethodInfo m717_MI;
extern MethodInfo m718_MI;
extern MethodInfo m719_MI;


extern MethodInfo m408_MI;
 void m408 (t82 * __this, MethodInfo* method){
	{
		t102  L_0 = m705(NULL, &m705_MI);
		__this->f3 = L_0;
		__this->f5 = (40.0f);
		__this->f6 = (2.0f);
		__this->f7 = (0.5f);
		__this->f8 = (20.0f);
		m469(__this, &m469_MI);
		return;
	}
}
 void m409 (t82 * __this, t101 * p0, MethodInfo* method){
	{
		t101 * L_0 = (__this->f9);
		t183 * L_1 = m706(NULL, L_0, p0, &m706_MI);
		__this->f9 = ((t101 *)Castclass(L_1, InitializedTypeInfo(&t101_TI)));
		return;
	}
}
extern MethodInfo m410_MI;
 void m410 (t82 * __this, t101 * p0, MethodInfo* method){
	{
		t101 * L_0 = (__this->f9);
		t183 * L_1 = m707(NULL, L_0, p0, &m707_MI);
		__this->f9 = ((t101 *)Castclass(L_1, InitializedTypeInfo(&t101_TI)));
		return;
	}
}
 void m411 (t82 * __this, t101 * p0, MethodInfo* method){
	{
		t101 * L_0 = (__this->f10);
		t183 * L_1 = m706(NULL, L_0, p0, &m706_MI);
		__this->f10 = ((t101 *)Castclass(L_1, InitializedTypeInfo(&t101_TI)));
		return;
	}
}
extern MethodInfo m412_MI;
 void m412 (t82 * __this, t101 * p0, MethodInfo* method){
	{
		t101 * L_0 = (__this->f10);
		t183 * L_1 = m707(NULL, L_0, p0, &m707_MI);
		__this->f10 = ((t101 *)Castclass(L_1, InitializedTypeInfo(&t101_TI)));
		return;
	}
}
 void m413 (t82 * __this, t101 * p0, MethodInfo* method){
	{
		t101 * L_0 = (__this->f11);
		t183 * L_1 = m706(NULL, L_0, p0, &m706_MI);
		__this->f11 = ((t101 *)Castclass(L_1, InitializedTypeInfo(&t101_TI)));
		return;
	}
}
extern MethodInfo m414_MI;
 void m414 (t82 * __this, t101 * p0, MethodInfo* method){
	{
		t101 * L_0 = (__this->f11);
		t183 * L_1 = m707(NULL, L_0, p0, &m707_MI);
		__this->f11 = ((t101 *)Castclass(L_1, InitializedTypeInfo(&t101_TI)));
		return;
	}
}
 void m415 (t82 * __this, t101 * p0, MethodInfo* method){
	{
		t101 * L_0 = (__this->f12);
		t183 * L_1 = m706(NULL, L_0, p0, &m706_MI);
		__this->f12 = ((t101 *)Castclass(L_1, InitializedTypeInfo(&t101_TI)));
		return;
	}
}
extern MethodInfo m416_MI;
 void m416 (t82 * __this, t101 * p0, MethodInfo* method){
	{
		t101 * L_0 = (__this->f12);
		t183 * L_1 = m707(NULL, L_0, p0, &m707_MI);
		__this->f12 = ((t101 *)Castclass(L_1, InitializedTypeInfo(&t101_TI)));
		return;
	}
}
extern MethodInfo m417_MI;
 void m417 (t82 * __this, MethodInfo* method){
	t184  V_0 = {0};
	t187* V_1 = {0};
	int32_t V_2 = 0;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	t102  V_7 = {0};
	t102  V_8 = {0};
	int32_t V_9 = {0};
	t102  V_10 = {0};
	t102  V_11 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t173_TI));
		int32_t L_0 = m708(NULL, &m708_MI);
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_023b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t173_TI));
		t187* L_1 = m709(NULL, &m709_MI);
		V_1 = L_1;
		V_2 = 0;
		goto IL_0232;
	}

IL_0018:
	{
		V_0 = (*(t184 *)((t184 *)(t184 *)SZArrayLdElema(V_1, V_2)));
		int32_t L_2 = m710((&V_0), &m710_MI);
		V_9 = L_2;
		if (V_9 == 0)
		{
			goto IL_004e;
		}
		if (V_9 == 1)
		{
			goto IL_00dc;
		}
		if (V_9 == 2)
		{
			goto IL_022e;
		}
		if (V_9 == 3)
		{
			goto IL_007e;
		}
		if (V_9 == 4)
		{
			goto IL_0072;
		}
	}
	{
		goto IL_022e;
	}

IL_004e:
	{
		__this->f4 = 1;
		float L_3 = m660(NULL, &m660_MI);
		__this->f2 = L_3;
		t102  L_4 = m711((&V_0), &m711_MI);
		__this->f3 = L_4;
		goto IL_022e;
	}

IL_0072:
	{
		__this->f4 = 0;
		goto IL_022e;
	}

IL_007e:
	{
		float L_5 = m660(NULL, &m660_MI);
		float L_6 = (__this->f2);
		V_3 = ((float)(L_5-L_6));
		t102  L_7 = m711((&V_0), &m711_MI);
		t102  L_8 = (__this->f3);
		t102  L_9 = m712(NULL, L_7, L_8, &m712_MI);
		V_10 = L_9;
		float L_10 = m713((&V_10), &m713_MI);
		V_4 = L_10;
		float L_11 = (__this->f8);
		if ((((float)V_4) > ((float)L_11)))
		{
			goto IL_00d7;
		}
	}
	{
		float L_12 = (__this->f7);
		if ((((float)V_3) >= ((float)L_12)))
		{
			goto IL_00d7;
		}
	}
	{
		t101 * L_13 = (__this->f12);
		if (!L_13)
		{
			goto IL_00d7;
		}
	}
	{
		t101 * L_14 = (__this->f12);
		VirtActionInvoker0::Invoke(&m714_MI, L_14);
	}

IL_00d7:
	{
		goto IL_022e;
	}

IL_00dc:
	{
		float L_15 = m660(NULL, &m660_MI);
		float L_16 = (__this->f2);
		V_5 = ((float)(L_15-L_16));
		t102  L_17 = m711((&V_0), &m711_MI);
		t102  L_18 = (__this->f3);
		t102  L_19 = m712(NULL, L_17, L_18, &m712_MI);
		V_11 = L_19;
		float L_20 = m713((&V_11), &m713_MI);
		V_6 = L_20;
		bool L_21 = (__this->f4);
		if (!L_21)
		{
			goto IL_0229;
		}
	}
	{
		float L_22 = (__this->f6);
		if ((((float)V_5) >= ((float)L_22)))
		{
			goto IL_0229;
		}
	}
	{
		float L_23 = (__this->f5);
		if ((((float)V_6) <= ((float)L_23)))
		{
			goto IL_0229;
		}
	}
	{
		t102  L_24 = m711((&V_0), &m711_MI);
		t102  L_25 = (__this->f3);
		t102  L_26 = m712(NULL, L_24, L_25, &m712_MI);
		V_7 = L_26;
		t102  L_27 = m705(NULL, &m705_MI);
		V_8 = L_27;
		float L_28 = ((&V_7)->f1);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t186_TI));
		float L_29 = fabsf(L_28);
		float L_30 = ((&V_7)->f2);
		float L_31 = fabsf(L_30);
		if ((((float)L_29) <= ((float)L_31)))
		{
			goto IL_0181;
		}
	}
	{
		t102  L_32 = m716(NULL, &m716_MI);
		float L_33 = ((&V_7)->f1);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t186_TI));
		float L_34 = m717(NULL, L_33, &m717_MI);
		t102  L_35 = m718(NULL, L_32, L_34, &m718_MI);
		V_8 = L_35;
		goto IL_0199;
	}

IL_0181:
	{
		t102  L_36 = m719(NULL, &m719_MI);
		float L_37 = ((&V_7)->f2);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t186_TI));
		float L_38 = m717(NULL, L_37, &m717_MI);
		t102  L_39 = m718(NULL, L_36, L_38, &m718_MI);
		V_8 = L_39;
	}

IL_0199:
	{
		float L_40 = ((&V_8)->f1);
		if ((((float)L_40) == ((float)(0.0f))))
		{
			goto IL_01ec;
		}
	}
	{
		float L_41 = ((&V_8)->f1);
		if ((((float)L_41) <= ((float)(0.0f))))
		{
			goto IL_01d6;
		}
	}
	{
		t101 * L_42 = (__this->f10);
		if (!L_42)
		{
			goto IL_01d1;
		}
	}
	{
		t101 * L_43 = (__this->f10);
		VirtActionInvoker0::Invoke(&m714_MI, L_43);
	}

IL_01d1:
	{
		goto IL_01ec;
	}

IL_01d6:
	{
		t101 * L_44 = (__this->f9);
		if (!L_44)
		{
			goto IL_01ec;
		}
	}
	{
		t101 * L_45 = (__this->f9);
		VirtActionInvoker0::Invoke(&m714_MI, L_45);
	}

IL_01ec:
	{
		float L_46 = ((&V_8)->f2);
		if ((((float)L_46) == ((float)(0.0f))))
		{
			goto IL_0229;
		}
	}
	{
		float L_47 = ((&V_8)->f2);
		if ((((float)L_47) <= ((float)(0.0f))))
		{
			goto IL_0213;
		}
	}
	{
		goto IL_0229;
	}

IL_0213:
	{
		t101 * L_48 = (__this->f11);
		if (!L_48)
		{
			goto IL_0229;
		}
	}
	{
		t101 * L_49 = (__this->f11);
		VirtActionInvoker0::Invoke(&m714_MI, L_49);
	}

IL_0229:
	{
		goto IL_022e;
	}

IL_022e:
	{
		V_2 = ((int32_t)(V_2+1));
	}

IL_0232:
	{
		if ((((int32_t)V_2) < ((int32_t)(((int32_t)(((t107 *)V_1)->max_length))))))
		{
			goto IL_0018;
		}
	}

IL_023b:
	{
		return;
	}
}
// Metadata Definition SwipeInput
extern Il2CppType t116_0_0_1;
FieldInfo t82_f2_FieldInfo = 
{
	"fingerStartTime", &t116_0_0_1, &t82_TI, offsetof(t82, f2), &EmptyCustomAttributesCache};
extern Il2CppType t102_0_0_1;
FieldInfo t82_f3_FieldInfo = 
{
	"fingerStartPos", &t102_0_0_1, &t82_TI, offsetof(t82, f3), &EmptyCustomAttributesCache};
extern Il2CppType t108_0_0_1;
FieldInfo t82_f4_FieldInfo = 
{
	"isSwipe", &t108_0_0_1, &t82_TI, offsetof(t82, f4), &EmptyCustomAttributesCache};
extern Il2CppType t116_0_0_1;
FieldInfo t82_f5_FieldInfo = 
{
	"minSwipeDist", &t116_0_0_1, &t82_TI, offsetof(t82, f5), &EmptyCustomAttributesCache};
extern Il2CppType t116_0_0_1;
FieldInfo t82_f6_FieldInfo = 
{
	"maxSwipeTime", &t116_0_0_1, &t82_TI, offsetof(t82, f6), &EmptyCustomAttributesCache};
extern Il2CppType t116_0_0_1;
FieldInfo t82_f7_FieldInfo = 
{
	"maxTapTime", &t116_0_0_1, &t82_TI, offsetof(t82, f7), &EmptyCustomAttributesCache};
extern Il2CppType t116_0_0_1;
FieldInfo t82_f8_FieldInfo = 
{
	"maxTapDist", &t116_0_0_1, &t82_TI, offsetof(t82, f8), &EmptyCustomAttributesCache};
extern Il2CppType t101_0_0_1;
FieldInfo t82_f9_FieldInfo = 
{
	"LeftSwipeDetected", &t101_0_0_1, &t82_TI, offsetof(t82, f9), &EmptyCustomAttributesCache};
extern Il2CppType t101_0_0_1;
FieldInfo t82_f10_FieldInfo = 
{
	"RightSwipeDetected", &t101_0_0_1, &t82_TI, offsetof(t82, f10), &EmptyCustomAttributesCache};
extern Il2CppType t101_0_0_1;
FieldInfo t82_f11_FieldInfo = 
{
	"DownSwipeDetected", &t101_0_0_1, &t82_TI, offsetof(t82, f11), &EmptyCustomAttributesCache};
extern Il2CppType t101_0_0_1;
FieldInfo t82_f12_FieldInfo = 
{
	"TapDetected", &t101_0_0_1, &t82_TI, offsetof(t82, f12), &EmptyCustomAttributesCache};
static FieldInfo* t82_FIs[] =
{
	&t82_f2_FieldInfo,
	&t82_f3_FieldInfo,
	&t82_f4_FieldInfo,
	&t82_f5_FieldInfo,
	&t82_f6_FieldInfo,
	&t82_f7_FieldInfo,
	&t82_f8_FieldInfo,
	&t82_f9_FieldInfo,
	&t82_f10_FieldInfo,
	&t82_f11_FieldInfo,
	&t82_f12_FieldInfo,
	NULL
};
extern Il2CppType t101_0_0_0;
static EventInfo t82____LeftSwipeDetected_EventInfo = 
{
	"LeftSwipeDetected", &t101_0_0_0, &t82_TI, &m409_MI, &m410_MI, NULL, &EmptyCustomAttributesCache};
extern Il2CppType t101_0_0_0;
static EventInfo t82____RightSwipeDetected_EventInfo = 
{
	"RightSwipeDetected", &t101_0_0_0, &t82_TI, &m411_MI, &m412_MI, NULL, &EmptyCustomAttributesCache};
extern Il2CppType t101_0_0_0;
static EventInfo t82____DownSwipeDetected_EventInfo = 
{
	"DownSwipeDetected", &t101_0_0_0, &t82_TI, &m413_MI, &m414_MI, NULL, &EmptyCustomAttributesCache};
extern Il2CppType t101_0_0_0;
static EventInfo t82____TapDetected_EventInfo = 
{
	"TapDetected", &t101_0_0_0, &t82_TI, &m415_MI, &m416_MI, NULL, &EmptyCustomAttributesCache};
static EventInfo* t82__EventInfos[] =
{
	&t82____LeftSwipeDetected_EventInfo,
	&t82____RightSwipeDetected_EventInfo,
	&t82____DownSwipeDetected_EventInfo,
	&t82____TapDetected_EventInfo,
	NULL
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m408_MI = 
{
	".ctor", (methodPointerType)&m408, &t82_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 434, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t101_0_0_0;
extern Il2CppType t101_0_0_0;
static ParameterInfo t82_m409_ParameterInfos[] = 
{
	{"value", 0, 134218020, &EmptyCustomAttributesCache, &t101_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m409_MI = 
{
	"add_LeftSwipeDetected", (methodPointerType)&m409, &t82_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t82_m409_ParameterInfos, &EmptyCustomAttributesCache, 2182, 32, 255, 1, false, false, 435, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t101_0_0_0;
static ParameterInfo t82_m410_ParameterInfos[] = 
{
	{"value", 0, 134218021, &EmptyCustomAttributesCache, &t101_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m410_MI = 
{
	"remove_LeftSwipeDetected", (methodPointerType)&m410, &t82_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t82_m410_ParameterInfos, &EmptyCustomAttributesCache, 2182, 32, 255, 1, false, false, 436, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t101_0_0_0;
static ParameterInfo t82_m411_ParameterInfos[] = 
{
	{"value", 0, 134218022, &EmptyCustomAttributesCache, &t101_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m411_MI = 
{
	"add_RightSwipeDetected", (methodPointerType)&m411, &t82_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t82_m411_ParameterInfos, &EmptyCustomAttributesCache, 2182, 32, 255, 1, false, false, 437, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t101_0_0_0;
static ParameterInfo t82_m412_ParameterInfos[] = 
{
	{"value", 0, 134218023, &EmptyCustomAttributesCache, &t101_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m412_MI = 
{
	"remove_RightSwipeDetected", (methodPointerType)&m412, &t82_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t82_m412_ParameterInfos, &EmptyCustomAttributesCache, 2182, 32, 255, 1, false, false, 438, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t101_0_0_0;
static ParameterInfo t82_m413_ParameterInfos[] = 
{
	{"value", 0, 134218024, &EmptyCustomAttributesCache, &t101_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m413_MI = 
{
	"add_DownSwipeDetected", (methodPointerType)&m413, &t82_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t82_m413_ParameterInfos, &EmptyCustomAttributesCache, 2182, 32, 255, 1, false, false, 439, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t101_0_0_0;
static ParameterInfo t82_m414_ParameterInfos[] = 
{
	{"value", 0, 134218025, &EmptyCustomAttributesCache, &t101_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m414_MI = 
{
	"remove_DownSwipeDetected", (methodPointerType)&m414, &t82_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t82_m414_ParameterInfos, &EmptyCustomAttributesCache, 2182, 32, 255, 1, false, false, 440, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t101_0_0_0;
static ParameterInfo t82_m415_ParameterInfos[] = 
{
	{"value", 0, 134218026, &EmptyCustomAttributesCache, &t101_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m415_MI = 
{
	"add_TapDetected", (methodPointerType)&m415, &t82_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t82_m415_ParameterInfos, &EmptyCustomAttributesCache, 2182, 32, 255, 1, false, false, 441, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t101_0_0_0;
static ParameterInfo t82_m416_ParameterInfos[] = 
{
	{"value", 0, 134218027, &EmptyCustomAttributesCache, &t101_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m416_MI = 
{
	"remove_TapDetected", (methodPointerType)&m416, &t82_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t82_m416_ParameterInfos, &EmptyCustomAttributesCache, 2182, 32, 255, 1, false, false, 442, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m417_MI = 
{
	"Update", (methodPointerType)&m417, &t82_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 443, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t82_MIs[] =
{
	&m408_MI,
	&m409_MI,
	&m410_MI,
	&m411_MI,
	&m412_MI,
	&m413_MI,
	&m414_MI,
	&m415_MI,
	&m416_MI,
	&m417_MI,
	NULL
};
static MethodInfo* t82_VT[] =
{
	&m476_MI,
	&m465_MI,
	&m477_MI,
	&m478_MI,
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType t82_0_0_0;
extern Il2CppType t82_1_0_0;
struct t82;
TypeInfo t82_TI = 
{
	&g_AssemblyU2DCSharp_dll_Image, NULL, "SwipeInput", "", t82_MIs, NULL, t82_FIs, t82__EventInfos, &t10_TI, NULL, NULL, &t82_TI, NULL, t82_VT, &EmptyCustomAttributesCache, &t82_TI, &t82_0_0_0, &t82_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t82), 0, -1, 0, 0, -1, 1048577, 0, false, false, false, false, false, false, false, false, false, false, false, false, 10, 0, 11, 4, 0, 4, 0, 0};
#ifndef _MSC_VER
#else
#endif

#include "t104.h"
#include "t188.h"
#include "t189.h"
#include "t190.h"
#include "t191.h"
#include "t192.h"
#include "t193.h"
#include "t106.h"
extern TypeInfo t104_TI;
extern TypeInfo t188_TI;
extern TypeInfo t69_TI;
extern TypeInfo t190_TI;
extern TypeInfo t106_TI;
extern TypeInfo t194_TI;
extern TypeInfo t195_TI;
extern TypeInfo t192_TI;
extern TypeInfo t196_TI;
#include "t104MD.h"
#include "t188MD.h"
#include "t152MD.h"
#include "t197MD.h"
#include "t190MD.h"
#include "t191MD.h"
#include "t193MD.h"
#include "t106MD.h"
#include "t192MD.h"
extern MethodInfo m720_MI;
extern MethodInfo m438_MI;
extern MethodInfo m440_MI;
extern MethodInfo m419_MI;
extern MethodInfo m454_MI;
extern MethodInfo m458_MI;
extern MethodInfo m432_MI;
extern MethodInfo m448_MI;
extern MethodInfo m721_MI;
extern MethodInfo m722_MI;
extern MethodInfo m723_MI;
extern MethodInfo m724_MI;
extern MethodInfo m725_MI;
extern MethodInfo m429_MI;
extern MethodInfo m427_MI;
extern MethodInfo m426_MI;
extern MethodInfo m425_MI;
extern MethodInfo m430_MI;
extern MethodInfo m424_MI;
extern MethodInfo m423_MI;
extern MethodInfo m422_MI;
extern MethodInfo m421_MI;
extern MethodInfo m726_MI;
extern MethodInfo m727_MI;
extern MethodInfo m446_MI;
extern MethodInfo m444_MI;
extern MethodInfo m728_MI;
extern MethodInfo m729_MI;
extern MethodInfo m730_MI;
extern MethodInfo m731_MI;
extern MethodInfo m732_MI;
extern MethodInfo m733_MI;
extern MethodInfo m456_MI;
extern MethodInfo m734_MI;
extern MethodInfo m735_MI;
extern MethodInfo m736_MI;
extern MethodInfo m737_MI;
extern MethodInfo m738_MI;
extern MethodInfo m739_MI;
extern MethodInfo m434_MI;
extern MethodInfo m740_MI;
extern MethodInfo m741_MI;
extern MethodInfo m742_MI;
extern MethodInfo m743_MI;
extern MethodInfo m744_MI;
extern MethodInfo m745_MI;
extern MethodInfo m746_MI;
extern MethodInfo m435_MI;
extern MethodInfo m747_MI;
extern MethodInfo m748_MI;
extern MethodInfo m436_MI;
extern MethodInfo m749_MI;
extern MethodInfo m431_MI;
extern MethodInfo m450_MI;
extern MethodInfo m452_MI;
extern MethodInfo m428_MI;
extern MethodInfo m442_MI;
extern MethodInfo m750_MI;
extern MethodInfo m751_MI;
struct t69;
#define m723(__this, method) (t96 *)m696_gshared((t69 *)__this, method)
struct t69;
#define m729(__this, method) (t189 *)m696_gshared((t69 *)__this, method)
struct t69;
#define m730(__this, method) (t95 *)m696_gshared((t69 *)__this, method)
struct t125;
#define m741(__this, p0, p1, method) (t5*)m619_gshared((t5 *)__this, (t5*)p0, (t141 *)p1, method)
struct t39;
struct t39;
#include "t198.h"
 void m752_gshared (t5 * __this, t5* p0, t198 * p1, MethodInfo* method);
#define m752(__this, p0, p1, method) (void)m752_gshared((t5 *)__this, (t5*)p0, (t198 *)p1, method)
#define m749(__this, p0, p1, method) (void)m752_gshared((t5 *)__this, (t5*)p0, (t198 *)p1, method)


 void m418 (t103 * __this, t87 * p0, MethodInfo* method){
	{
		m460(__this, &m460_MI);
		t104 * L_0 = (t104 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t104_TI));
		m720(L_0, &m720_MI);
		__this->f0 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t67_TI));
		t67 * L_1 = (t67 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t67_TI));
		m653(L_1, &m653_MI);
		__this->f4 = L_1;
		__this->f2 = p0;
		t87 * L_2 = (__this->f2);
		t5 * L_3 = m438(L_2, &m438_MI);
		__this->f1 = L_3;
		t87 * L_4 = (__this->f2);
		t78 * L_5 = m440(L_4, &m440_MI);
		m419(__this, L_5, &m419_MI);
		t87 * L_6 = (__this->f2);
		t85 * L_7 = m454(L_6, &m454_MI);
		t87 * L_8 = (__this->f2);
		t4 * L_9 = m458(L_8, &m458_MI);
		float L_10 = (L_9->f13);
		t91 * L_11 = (t91 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t91_TI));
		m384(L_11, L_7, L_10, &m384_MI);
		__this->f3 = L_11;
		m432(__this, &m432_MI);
		t87 * L_12 = (__this->f2);
		t84 * L_13 = m448(L_12, &m448_MI);
		t5 * L_14 = (__this->f1);
		t32 * L_15 = (t32 *)InterfaceFuncInvoker0< t32 * >::Invoke(&m642_MI, L_14);
		t59 * L_16 = m268(L_15, &m268_MI);
		int32_t L_17 = m170(L_16, &m170_MI);
		int32_t L_18 = L_17;
		t5 * L_19 = Box(InitializedTypeInfo(&t22_TI), &L_18);
		t11* L_20 = (t11*)VirtFuncInvoker0< t11* >::Invoke(&m484_MI, L_19);
		VirtActionInvoker1< t11* >::Invoke(&m690_MI, L_13, L_20);
		return;
	}
}
 void m419 (t103 * __this, t78 * p0, MethodInfo* method){
	t69 * V_0 = {0};
	t188  V_1 = {0};
	t96 * V_2 = {0};
	int32_t leaveInstructions[1] = {0};
	t142 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t142 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	{
		t188  L_0 = m721(p0, &m721_MI);
		V_1 = L_0;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			goto IL_002d;
		}

IL_000c:
		{
			t69 * L_1 = m722((&V_1), &m722_MI);
			V_0 = L_1;
			t96 * L_2 = m723(V_0, &m723_MI);
			V_2 = L_2;
			t104 * L_3 = (__this->f0);
			int32_t L_4 = (V_2->f2);
			VirtActionInvoker2< int32_t, t69 * >::Invoke(&m724_MI, L_3, L_4, V_0);
		}

IL_002d:
		{
			bool L_5 = m725((&V_1), &m725_MI);
			if (L_5)
			{
				goto IL_000c;
			}
		}

IL_0039:
		{
			// IL_0039: leave IL_004a
			leaveInstructions[0] = 0x4A; // 1
			THROW_SENTINEL(IL_004a);
			// finally target depth: 1
		}
	} // end try (depth: 1)
	catch(Il2CppFinallySentinel& e)
	{
		goto IL_003e;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t142 *)e.ex;
		goto IL_003e;
	}

IL_003e:
	{ // begin finally (depth: 1)
		t188  L_6 = V_1;
		t5 * L_7 = Box(InitializedTypeInfo(&t188_TI), &L_6);
		InterfaceActionInvoker0::Invoke(&m516_MI, L_7);
		// finally node depth: 1
		switch (leaveInstructions[0])
		{
			case 0x4A:
				goto IL_004a;
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

IL_004a:
	{
		return;
	}
}
extern MethodInfo m420_MI;
 void m420 (t103 * __this, t6 * p0, MethodInfo* method){
	{
		m429(__this, p0, &m429_MI);
		m427(__this, p0, &m427_MI);
		m426(__this, p0, &m426_MI);
		m425(__this, p0, &m425_MI);
		m430(__this, &m430_MI);
		m424(__this, p0, &m424_MI);
		m423(__this, p0, &m423_MI);
		m422(__this, p0, &m422_MI);
		m421(__this, p0, &m421_MI);
		return;
	}
}
 void m421 (t103 * __this, t6 * p0, MethodInfo* method){
	{
		t67 * L_0 = (__this->f4);
		t67 * L_1 = m246(p0, &m246_MI);
		m726(L_0, L_1, &m726_MI);
		t91 * L_2 = (__this->f3);
		t67 * L_3 = (__this->f4);
		m385(L_2, L_3, &m385_MI);
		t67 * L_4 = (__this->f4);
		VirtActionInvoker0::Invoke(&m727_MI, L_4);
		return;
	}
}
 void m422 (t103 * __this, t6 * p0, MethodInfo* method){
	{
		bool L_0 = m230(p0, &m230_MI);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		bool L_1 = m244(p0, &m244_MI);
		if (!L_1)
		{
			goto IL_0050;
		}
	}

IL_0016:
	{
		t87 * L_2 = (__this->f2);
		t84 * L_3 = m446(L_2, &m446_MI);
		t87 * L_4 = (__this->f2);
		t4 * L_5 = m458(L_4, &m458_MI);
		t11* L_6 = (L_5->f2);
		t5 * L_7 = (__this->f1);
		t32 * L_8 = (t32 *)InterfaceFuncInvoker0< t32 * >::Invoke(&m642_MI, L_7);
		int32_t L_9 = m272(L_8, &m272_MI);
		int32_t L_10 = L_9;
		t5 * L_11 = Box(InitializedTypeInfo(&t110_TI), &L_10);
		IL2CPP_RUNTIME_CLASS_INIT((&t11_TI));
		t11* L_12 = m462(NULL, L_6, L_11, &m462_MI);
		VirtActionInvoker1< t11* >::Invoke(&m690_MI, L_3, L_12);
	}

IL_0050:
	{
		return;
	}
}
 void m423 (t103 * __this, t6 * p0, MethodInfo* method){
	int64_t V_0 = 0;
	{
		t66 * L_0 = m224(p0, &m224_MI);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m461_MI, L_0);
		if ((((int32_t)L_1) > ((int32_t)0)))
		{
			goto IL_001c;
		}
	}
	{
		bool L_2 = m244(p0, &m244_MI);
		if (!L_2)
		{
			goto IL_0069;
		}
	}

IL_001c:
	{
		t87 * L_3 = (__this->f2);
		t84 * L_4 = m444(L_3, &m444_MI);
		t87 * L_5 = (__this->f2);
		t4 * L_6 = m458(L_5, &m458_MI);
		t11* L_7 = (L_6->f3);
		t5 * L_8 = (__this->f1);
		t32 * L_9 = (t32 *)InterfaceFuncInvoker0< t32 * >::Invoke(&m642_MI, L_8);
		int64_t L_10 = m274(L_9, &m274_MI);
		V_0 = L_10;
		t87 * L_11 = (__this->f2);
		t4 * L_12 = m458(L_11, &m458_MI);
		t11* L_13 = (L_12->f4);
		t11* L_14 = m728((&V_0), L_13, &m728_MI);
		IL2CPP_RUNTIME_CLASS_INIT((&t11_TI));
		t11* L_15 = m462(NULL, L_7, L_14, &m462_MI);
		VirtActionInvoker1< t11* >::Invoke(&m690_MI, L_4, L_15);
	}

IL_0069:
	{
		return;
	}
}
 void m424 (t103 * __this, t6 * p0, MethodInfo* method){
	t15 * V_0 = {0};
	t126  V_1 = {0};
	t26 * V_2 = {0};
	t127  V_3 = {0};
	int32_t leaveInstructions[2] = {0};
	t142 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t142 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	{
		t5 * L_0 = (__this->f1);
		t32 * L_1 = (t32 *)InterfaceFuncInvoker0< t32 * >::Invoke(&m642_MI, L_0);
		t68 * L_2 = m270(L_1, &m270_MI);
		t65 * L_3 = m332(L_2, &m332_MI);
		t126  L_4 = m510(L_3, &m510_MI);
		V_1 = L_4;
	}

IL_001b:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0088;
		}

IL_0020:
		{
			t15 * L_5 = m511((&V_1), &m511_MI);
			V_0 = L_5;
			t37 * L_6 = m151(V_0, &m151_MI);
			t127  L_7 = m512(L_6, &m512_MI);
			V_3 = L_7;
		}

IL_0034:
		try
		{ // begin try (depth: 2)
			{
				goto IL_006b;
			}

IL_0039:
			{
				t26 * L_8 = m513((&V_3), &m513_MI);
				V_2 = L_8;
				t25 * L_9 = m155(V_2, &m155_MI);
				t69 * L_10 = (L_9->f0);
				t189 * L_11 = m729(L_10, &m729_MI);
				t25 * L_12 = m155(V_2, &m155_MI);
				t69 * L_13 = (L_12->f0);
				t95 * L_14 = m730(L_13, &m730_MI);
				t83 * L_15 = (L_14->f2);
				m731(L_11, L_15, &m731_MI);
			}

IL_006b:
			{
				bool L_16 = m515((&V_3), &m515_MI);
				if (L_16)
				{
					goto IL_0039;
				}
			}

IL_0077:
			{
				// IL_0077: leave IL_0088
				leaveInstructions[1] = 0x88; // 2
				THROW_SENTINEL(IL_0088);
				// finally target depth: 2
			}
		} // end try (depth: 2)
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
		{ // begin finally (depth: 2)
			t127  L_17 = V_3;
			t5 * L_18 = Box(InitializedTypeInfo(&t127_TI), &L_17);
			InterfaceActionInvoker0::Invoke(&m516_MI, L_18);
			// finally node depth: 2
			switch (leaveInstructions[1])
			{
				case 0x88:
					goto IL_0088;
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
		} // end finally (depth: 2)

IL_0088:
		{
			bool L_19 = m517((&V_1), &m517_MI);
			if (L_19)
			{
				goto IL_0020;
			}
		}

IL_0094:
		{
			// IL_0094: leave IL_00a5
			leaveInstructions[0] = 0xA5; // 1
			THROW_SENTINEL(IL_00a5);
			// finally target depth: 1
		}
	} // end try (depth: 1)
	catch(Il2CppFinallySentinel& e)
	{
		goto IL_0099;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t142 *)e.ex;
		goto IL_0099;
	}

IL_0099:
	{ // begin finally (depth: 1)
		t126  L_20 = V_1;
		t5 * L_21 = Box(InitializedTypeInfo(&t126_TI), &L_20);
		InterfaceActionInvoker0::Invoke(&m516_MI, L_21);
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
	} // end finally (depth: 1)

IL_00a5:
	{
		return;
	}
}
 void m425 (t103 * __this, t6 * p0, MethodInfo* method){
	t31 * V_0 = {0};
	t190  V_1 = {0};
	t26 * V_2 = {0};
	t127  V_3 = {0};
	int32_t leaveInstructions[2] = {0};
	t142 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t142 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	{
		t66 * L_0 = m224(p0, &m224_MI);
		t190  L_1 = m732(L_0, &m732_MI);
		V_1 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_008a;
		}

IL_0011:
		{
			t31 * L_2 = m733((&V_1), &m733_MI);
			V_0 = L_2;
			t37 * L_3 = m151(V_0, &m151_MI);
			t127  L_4 = m512(L_3, &m512_MI);
			V_3 = L_4;
		}

IL_0025:
		try
		{ // begin try (depth: 2)
			{
				goto IL_006d;
			}

IL_002a:
			{
				t26 * L_5 = m513((&V_3), &m513_MI);
				V_2 = L_5;
				t87 * L_6 = (__this->f2);
				t69 * L_7 = m456(L_6, &m456_MI);
				t25 * L_8 = m155(V_2, &m155_MI);
				t69 * L_9 = (L_8->f0);
				t191 * L_10 = m734(L_9, &m734_MI);
				t192  L_11 = m735(L_10, &m735_MI);
				t193  L_12 = m736(NULL, &m736_MI);
				m737(NULL, L_7, L_11, L_12, &m737_MI);
				t25 * L_13 = m155(V_2, &m155_MI);
				t69 * L_14 = (L_13->f0);
				m738(NULL, L_14, &m738_MI);
			}

IL_006d:
			{
				bool L_15 = m515((&V_3), &m515_MI);
				if (L_15)
				{
					goto IL_002a;
				}
			}

IL_0079:
			{
				// IL_0079: leave IL_008a
				leaveInstructions[1] = 0x8A; // 2
				THROW_SENTINEL(IL_008a);
				// finally target depth: 2
			}
		} // end try (depth: 2)
		catch(Il2CppFinallySentinel& e)
		{
			goto IL_007e;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (t142 *)e.ex;
			goto IL_007e;
		}

IL_007e:
		{ // begin finally (depth: 2)
			t127  L_16 = V_3;
			t5 * L_17 = Box(InitializedTypeInfo(&t127_TI), &L_16);
			InterfaceActionInvoker0::Invoke(&m516_MI, L_17);
			// finally node depth: 2
			switch (leaveInstructions[1])
			{
				case 0x8A:
					goto IL_008a;
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
		} // end finally (depth: 2)

IL_008a:
		{
			bool L_18 = m739((&V_1), &m739_MI);
			if (L_18)
			{
				goto IL_0011;
			}
		}

IL_0096:
		{
			// IL_0096: leave IL_00a7
			leaveInstructions[0] = 0xA7; // 1
			THROW_SENTINEL(IL_00a7);
			// finally target depth: 1
		}
	} // end try (depth: 1)
	catch(Il2CppFinallySentinel& e)
	{
		goto IL_009b;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t142 *)e.ex;
		goto IL_009b;
	}

IL_009b:
	{ // begin finally (depth: 1)
		t190  L_19 = V_1;
		t5 * L_20 = Box(InitializedTypeInfo(&t190_TI), &L_19);
		InterfaceActionInvoker0::Invoke(&m516_MI, L_20);
		// finally node depth: 1
		switch (leaveInstructions[0])
		{
			case 0xA7:
				goto IL_00a7;
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

IL_00a7:
	{
		return;
	}
}
 void m426 (t103 * __this, t6 * p0, MethodInfo* method){
	t5* V_0 = {0};
	t74 * V_1 = {0};
	t5* V_2 = {0};
	int32_t leaveInstructions[1] = {0};
	t142 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t142 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	t64 * G_B2_0 = {0};
	t64 * G_B1_0 = {0};
	{
		t64 * L_0 = m218(p0, &m218_MI);
		G_B1_0 = L_0;
		if ((((t103_SFs*)InitializedTypeInfo(&t103_TI)->static_fields)->f5))
		{
			G_B2_0 = L_0;
			goto IL_001e;
		}
	}
	{
		t124 L_1 = { &m434_MI };
		t106 * L_2 = (t106 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t106_TI));
		m740(L_2, NULL, L_1, &m740_MI);
		((t103_SFs*)InitializedTypeInfo(&t103_TI)->static_fields)->f5 = L_2;
		G_B2_0 = G_B1_0;
	}

IL_001e:
	{
		t5* L_3 = m741(NULL, G_B2_0, (((t103_SFs*)InitializedTypeInfo(&t103_TI)->static_fields)->f5), &m741_MI);
		V_0 = L_3;
		t5* L_4 = (t5*)InterfaceFuncInvoker0< t5* >::Invoke(&m742_MI, V_0);
		V_2 = L_4;
	}

IL_0030:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0073;
		}

IL_0035:
		{
			t74 * L_5 = (t74 *)InterfaceFuncInvoker0< t74 * >::Invoke(&m743_MI, V_2);
			V_1 = L_5;
			t25 * L_6 = m308(V_1, &m308_MI);
			t69 * L_7 = (L_6->f0);
			t191 * L_8 = m734(L_7, &m734_MI);
			t36 * L_9 = m314(V_1, &m314_MI);
			int32_t L_10 = m164(L_9, &m164_MI);
			t36 * L_11 = m314(V_1, &m314_MI);
			int32_t L_12 = m166(L_11, &m166_MI);
			t192  L_13 = {0};
			m744(&L_13, (((float)L_10)), (((float)L_12)), (0.0f), &m744_MI);
			m745(L_8, L_13, &m745_MI);
		}

IL_0073:
		{
			bool L_14 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&m746_MI, V_2);
			if (L_14)
			{
				goto IL_0035;
			}
		}

IL_007e:
		{
			// IL_007e: leave IL_008e
			leaveInstructions[0] = 0x8E; // 1
			THROW_SENTINEL(IL_008e);
			// finally target depth: 1
		}
	} // end try (depth: 1)
	catch(Il2CppFinallySentinel& e)
	{
		goto IL_0083;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t142 *)e.ex;
		goto IL_0083;
	}

IL_0083:
	{ // begin finally (depth: 1)
		{
			if (V_2)
			{
				goto IL_0087;
			}
		}

IL_0086:
		{
			// finally node depth: 1
			switch (leaveInstructions[0])
			{
				case 0x8E:
					goto IL_008e;
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

IL_0087:
		{
			InterfaceActionInvoker0::Invoke(&m516_MI, V_2);
			// finally node depth: 1
			switch (leaveInstructions[0])
			{
				case 0x8E:
					goto IL_008e;
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

IL_008e:
	{
		return;
	}
}
 void m427 (t103 * __this, t6 * p0, MethodInfo* method){
	t5* V_0 = {0};
	t74 * V_1 = {0};
	t5* V_2 = {0};
	t69 * V_3 = {0};
	t69 * V_4 = {0};
	int32_t leaveInstructions[1] = {0};
	t142 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t142 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	t64 * G_B2_0 = {0};
	t64 * G_B1_0 = {0};
	{
		t64 * L_0 = m218(p0, &m218_MI);
		G_B1_0 = L_0;
		if ((((t103_SFs*)InitializedTypeInfo(&t103_TI)->static_fields)->f6))
		{
			G_B2_0 = L_0;
			goto IL_001e;
		}
	}
	{
		t124 L_1 = { &m435_MI };
		t106 * L_2 = (t106 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t106_TI));
		m740(L_2, NULL, L_1, &m740_MI);
		((t103_SFs*)InitializedTypeInfo(&t103_TI)->static_fields)->f6 = L_2;
		G_B2_0 = G_B1_0;
	}

IL_001e:
	{
		t5* L_3 = m741(NULL, G_B2_0, (((t103_SFs*)InitializedTypeInfo(&t103_TI)->static_fields)->f6), &m741_MI);
		V_0 = L_3;
		t5* L_4 = (t5*)InterfaceFuncInvoker0< t5* >::Invoke(&m742_MI, V_0);
		V_2 = L_4;
	}

IL_0030:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0094;
		}

IL_0035:
		{
			t74 * L_5 = (t74 *)InterfaceFuncInvoker0< t74 * >::Invoke(&m743_MI, V_2);
			V_1 = L_5;
			t104 * L_6 = (__this->f0);
			t25 * L_7 = m308(V_1, &m308_MI);
			int32_t L_8 = m283(L_7, &m283_MI);
			t69 * L_9 = (t69 *)VirtFuncInvoker1< t69 *, int32_t >::Invoke(&m747_MI, L_6, L_8);
			V_3 = L_9;
			t36 * L_10 = m314(V_1, &m314_MI);
			int32_t L_11 = m164(L_10, &m164_MI);
			t36 * L_12 = m314(V_1, &m314_MI);
			int32_t L_13 = m166(L_12, &m166_MI);
			t192  L_14 = {0};
			m744(&L_14, (((float)L_11)), (((float)L_13)), (0.0f), &m744_MI);
			t193  L_15 = m736(NULL, &m736_MI);
			t117 * L_16 = m737(NULL, V_3, L_14, L_15, &m737_MI);
			V_4 = ((t69 *)Castclass(L_16, InitializedTypeInfo(&t69_TI)));
			t25 * L_17 = m308(V_1, &m308_MI);
			L_17->f0 = V_4;
		}

IL_0094:
		{
			bool L_18 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&m746_MI, V_2);
			if (L_18)
			{
				goto IL_0035;
			}
		}

IL_009f:
		{
			// IL_009f: leave IL_00af
			leaveInstructions[0] = 0xAF; // 1
			THROW_SENTINEL(IL_00af);
			// finally target depth: 1
		}
	} // end try (depth: 1)
	catch(Il2CppFinallySentinel& e)
	{
		goto IL_00a4;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t142 *)e.ex;
		goto IL_00a4;
	}

IL_00a4:
	{ // begin finally (depth: 1)
		{
			if (V_2)
			{
				goto IL_00a8;
			}
		}

IL_00a7:
		{
			// finally node depth: 1
			switch (leaveInstructions[0])
			{
				case 0xAF:
					goto IL_00af;
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

IL_00a8:
		{
			InterfaceActionInvoker0::Invoke(&m516_MI, V_2);
			// finally node depth: 1
			switch (leaveInstructions[0])
			{
				case 0xAF:
					goto IL_00af;
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

IL_00af:
	{
		return;
	}
}
 void m428 (t103 * __this, MethodInfo* method){
	t199* V_0 = {0};
	t199* G_B2_0 = {0};
	t199* G_B1_0 = {0};
	{
		t199* L_0 = m748(NULL, (t11*) &_stringLiteral41, &m748_MI);
		V_0 = L_0;
		G_B1_0 = V_0;
		if ((((t103_SFs*)InitializedTypeInfo(&t103_TI)->static_fields)->f7))
		{
			G_B2_0 = V_0;
			goto IL_0024;
		}
	}
	{
		t124 L_1 = { &m436_MI };
		t97 * L_2 = (t97 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t97_TI));
		m692(L_2, NULL, L_1, &m692_MI);
		((t103_SFs*)InitializedTypeInfo(&t103_TI)->static_fields)->f7 = L_2;
		G_B2_0 = G_B1_0;
	}

IL_0024:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t39_TI));
		m749(NULL, (t5*)(t5*)G_B2_0, (((t103_SFs*)InitializedTypeInfo(&t103_TI)->static_fields)->f7), &m749_MI);
		m432(__this, &m432_MI);
		t87 * L_3 = (__this->f2);
		t84 * L_4 = m448(L_3, &m448_MI);
		t5 * L_5 = (__this->f1);
		t32 * L_6 = (t32 *)InterfaceFuncInvoker0< t32 * >::Invoke(&m642_MI, L_5);
		t59 * L_7 = m268(L_6, &m268_MI);
		int32_t L_8 = m170(L_7, &m170_MI);
		int32_t L_9 = L_8;
		t5 * L_10 = Box(InitializedTypeInfo(&t22_TI), &L_9);
		t11* L_11 = (t11*)VirtFuncInvoker0< t11* >::Invoke(&m484_MI, L_10);
		VirtActionInvoker1< t11* >::Invoke(&m690_MI, L_4, L_11);
		return;
	}
}
 void m429 (t103 * __this, t6 * p0, MethodInfo* method){
	t11* V_0 = {0};
	t11* V_1 = {0};
	{
		t5 * L_0 = (__this->f1);
		t32 * L_1 = (t32 *)InterfaceFuncInvoker0< t32 * >::Invoke(&m642_MI, L_0);
		int32_t L_2 = m266(L_1, &m266_MI);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0053;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT((&t11_TI));
		V_0 = (((t11_SFs*)(&t11_TI)->static_fields)->f2);
		V_1 = (((t11_SFs*)(&t11_TI)->static_fields)->f2);
		m431(__this, (&V_0), (&V_1), &m431_MI);
		t87 * L_3 = (__this->f2);
		t84 * L_4 = m450(L_3, &m450_MI);
		VirtActionInvoker1< t11* >::Invoke(&m690_MI, L_4, V_0);
		t87 * L_5 = (__this->f2);
		t84 * L_6 = m452(L_5, &m452_MI);
		VirtActionInvoker1< t11* >::Invoke(&m690_MI, L_6, V_1);
		goto IL_007d;
	}

IL_0053:
	{
		t87 * L_7 = (__this->f2);
		t84 * L_8 = m450(L_7, &m450_MI);
		IL2CPP_RUNTIME_CLASS_INIT((&t11_TI));
		VirtActionInvoker1< t11* >::Invoke(&m690_MI, L_8, (((t11_SFs*)(&t11_TI)->static_fields)->f2));
		t87 * L_9 = (__this->f2);
		t84 * L_10 = m452(L_9, &m452_MI);
		VirtActionInvoker1< t11* >::Invoke(&m690_MI, L_10, (((t11_SFs*)(&t11_TI)->static_fields)->f2));
	}

IL_007d:
	{
		t5 * L_11 = (__this->f1);
		t32 * L_12 = (t32 *)InterfaceFuncInvoker0< t32 * >::Invoke(&m642_MI, L_11);
		int32_t L_13 = m266(L_12, &m266_MI);
		if ((((uint32_t)L_13) != ((uint32_t)3)))
		{
			goto IL_0093;
		}
	}

IL_0093:
	{
		bool L_14 = m244(p0, &m244_MI);
		if (!L_14)
		{
			goto IL_00a4;
		}
	}
	{
		m428(__this, &m428_MI);
	}

IL_00a4:
	{
		bool L_15 = m232(p0, &m232_MI);
		if (!L_15)
		{
			goto IL_00b5;
		}
	}
	{
		m428(__this, &m428_MI);
	}

IL_00b5:
	{
		bool L_16 = m242(p0, &m242_MI);
		if (!L_16)
		{
			goto IL_00c6;
		}
	}
	{
		m428(__this, &m428_MI);
	}

IL_00c6:
	{
		return;
	}
}
 void m430 (t103 * __this, MethodInfo* method){
	t15 * V_0 = {0};
	t126  V_1 = {0};
	t26 * V_2 = {0};
	t127  V_3 = {0};
	int32_t leaveInstructions[2] = {0};
	t142 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t142 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	{
		t5 * L_0 = (__this->f1);
		t32 * L_1 = (t32 *)InterfaceFuncInvoker0< t32 * >::Invoke(&m642_MI, L_0);
		t68 * L_2 = m270(L_1, &m270_MI);
		t65 * L_3 = m330(L_2, &m330_MI);
		t126  L_4 = m510(L_3, &m510_MI);
		V_1 = L_4;
	}

IL_001b:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00ba;
		}

IL_0020:
		{
			t15 * L_5 = m511((&V_1), &m511_MI);
			V_0 = L_5;
			t37 * L_6 = m151(V_0, &m151_MI);
			t127  L_7 = m512(L_6, &m512_MI);
			V_3 = L_7;
		}

IL_0034:
		try
		{ // begin try (depth: 2)
			{
				goto IL_009d;
			}

IL_0039:
			{
				t26 * L_8 = m513((&V_3), &m513_MI);
				V_2 = L_8;
				int32_t L_9 = m317(V_0, &m317_MI);
				if (!((int32_t)(L_9%2)))
				{
					goto IL_0073;
				}
			}

IL_004e:
			{
				t25 * L_10 = m155(V_2, &m155_MI);
				t69 * L_11 = (L_10->f0);
				t189 * L_12 = m729(L_11, &m729_MI);
				t87 * L_13 = (__this->f2);
				t83 * L_14 = m442(L_13, &m442_MI);
				m731(L_12, L_14, &m731_MI);
				goto IL_009d;
			}

IL_0073:
			{
				t25 * L_15 = m155(V_2, &m155_MI);
				t69 * L_16 = (L_15->f0);
				t189 * L_17 = m729(L_16, &m729_MI);
				t25 * L_18 = m155(V_2, &m155_MI);
				t69 * L_19 = (L_18->f0);
				t95 * L_20 = m730(L_19, &m730_MI);
				t83 * L_21 = (L_20->f2);
				m731(L_17, L_21, &m731_MI);
			}

IL_009d:
			{
				bool L_22 = m515((&V_3), &m515_MI);
				if (L_22)
				{
					goto IL_0039;
				}
			}

IL_00a9:
			{
				// IL_00a9: leave IL_00ba
				leaveInstructions[1] = 0xBA; // 2
				THROW_SENTINEL(IL_00ba);
				// finally target depth: 2
			}
		} // end try (depth: 2)
		catch(Il2CppFinallySentinel& e)
		{
			goto IL_00ae;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (t142 *)e.ex;
			goto IL_00ae;
		}

IL_00ae:
		{ // begin finally (depth: 2)
			t127  L_23 = V_3;
			t5 * L_24 = Box(InitializedTypeInfo(&t127_TI), &L_23);
			InterfaceActionInvoker0::Invoke(&m516_MI, L_24);
			// finally node depth: 2
			switch (leaveInstructions[1])
			{
				case 0xBA:
					goto IL_00ba;
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
		} // end finally (depth: 2)

IL_00ba:
		{
			bool L_25 = m517((&V_1), &m517_MI);
			if (L_25)
			{
				goto IL_0020;
			}
		}

IL_00c6:
		{
			// IL_00c6: leave IL_00d7
			leaveInstructions[0] = 0xD7; // 1
			THROW_SENTINEL(IL_00d7);
			// finally target depth: 1
		}
	} // end try (depth: 1)
	catch(Il2CppFinallySentinel& e)
	{
		goto IL_00cb;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t142 *)e.ex;
		goto IL_00cb;
	}

IL_00cb:
	{ // begin finally (depth: 1)
		t126  L_26 = V_1;
		t5 * L_27 = Box(InitializedTypeInfo(&t126_TI), &L_26);
		InterfaceActionInvoker0::Invoke(&m516_MI, L_27);
		// finally node depth: 1
		switch (leaveInstructions[0])
		{
			case 0xD7:
				goto IL_00d7;
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

IL_00d7:
	{
		return;
	}
}
 void m431 (t103 * __this, t11** p0, t11** p1, MethodInfo* method){
	int32_t V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT((&t11_TI));
		*((t5 **)(p0)) = (t5 *)(((t11_SFs*)(&t11_TI)->static_fields)->f2);
		*((t5 **)(p1)) = (t5 *)(((t11_SFs*)(&t11_TI)->static_fields)->f2);
		t5 * L_0 = (__this->f1);
		t32 * L_1 = (t32 *)InterfaceFuncInvoker0< t32 * >::Invoke(&m642_MI, L_0);
		int32_t L_2 = m266(L_1, &m266_MI);
		V_0 = L_2;
		if (V_0 == 0)
		{
			goto IL_003e;
		}
		if (V_0 == 1)
		{
			goto IL_00e2;
		}
		if (V_0 == 2)
		{
			goto IL_00b9;
		}
		if (V_0 == 3)
		{
			goto IL_0067;
		}
		if (V_0 == 4)
		{
			goto IL_0090;
		}
	}
	{
		goto IL_00e2;
	}

IL_003e:
	{
		t87 * L_3 = (__this->f2);
		t4 * L_4 = m458(L_3, &m458_MI);
		t11* L_5 = (L_4->f11);
		*((t5 **)(p0)) = (t5 *)L_5;
		t87 * L_6 = (__this->f2);
		t4 * L_7 = m458(L_6, &m458_MI);
		t11* L_8 = (L_7->f12);
		*((t5 **)(p1)) = (t5 *)L_8;
		goto IL_00e2;
	}

IL_0067:
	{
		t87 * L_9 = (__this->f2);
		t4 * L_10 = m458(L_9, &m458_MI);
		t11* L_11 = (L_10->f7);
		*((t5 **)(p0)) = (t5 *)L_11;
		t87 * L_12 = (__this->f2);
		t4 * L_13 = m458(L_12, &m458_MI);
		t11* L_14 = (L_13->f8);
		*((t5 **)(p1)) = (t5 *)L_14;
		goto IL_00e2;
	}

IL_0090:
	{
		t87 * L_15 = (__this->f2);
		t4 * L_16 = m458(L_15, &m458_MI);
		t11* L_17 = (L_16->f9);
		*((t5 **)(p0)) = (t5 *)L_17;
		t87 * L_18 = (__this->f2);
		t4 * L_19 = m458(L_18, &m458_MI);
		t11* L_20 = (L_19->f10);
		*((t5 **)(p1)) = (t5 *)L_20;
		goto IL_00e2;
	}

IL_00b9:
	{
		t87 * L_21 = (__this->f2);
		t4 * L_22 = m458(L_21, &m458_MI);
		t11* L_23 = (L_22->f5);
		*((t5 **)(p0)) = (t5 *)L_23;
		t87 * L_24 = (__this->f2);
		t4 * L_25 = m458(L_24, &m458_MI);
		t11* L_26 = (L_25->f6);
		*((t5 **)(p1)) = (t5 *)L_26;
		goto IL_00e2;
	}

IL_00e2:
	{
		return;
	}
}
 void m432 (t103 * __this, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	t25 * V_2 = {0};
	t69 * V_3 = {0};
	t69 * V_4 = {0};
	{
		V_0 = 0;
		goto IL_00bf;
	}

IL_0007:
	{
		V_1 = 0;
		goto IL_00a0;
	}

IL_000e:
	{
		t5 * L_0 = (__this->f1);
		t32 * L_1 = (t32 *)InterfaceFuncInvoker0< t32 * >::Invoke(&m642_MI, L_0);
		t68 * L_2 = m270(L_1, &m270_MI);
		t75* L_3 = m336(L_2, &m336_MI);
		t70 * L_4 = GenArrayGet2(L_3, V_1, V_0, t70 *);;
		if (!L_4)
		{
			goto IL_009c;
		}
	}
	{
		t5 * L_5 = (__this->f1);
		t32 * L_6 = (t32 *)InterfaceFuncInvoker0< t32 * >::Invoke(&m642_MI, L_5);
		t68 * L_7 = m270(L_6, &m270_MI);
		t75* L_8 = m336(L_7, &m336_MI);
		t70 * L_9 = GenArrayGet2(L_8, V_1, V_0, t70 *);;
		V_2 = ((t25 *)Castclass(L_9, InitializedTypeInfo(&t25_TI)));
		t69 * L_10 = (V_2->f0);
		bool L_11 = m750(NULL, L_10, (t117 *)NULL, &m750_MI);
		if (!L_11)
		{
			goto IL_009c;
		}
	}
	{
		t104 * L_12 = (__this->f0);
		int32_t L_13 = m283(V_2, &m283_MI);
		t69 * L_14 = (t69 *)VirtFuncInvoker1< t69 *, int32_t >::Invoke(&m747_MI, L_12, L_13);
		V_3 = L_14;
		t192  L_15 = {0};
		m744(&L_15, (((float)V_1)), (((float)V_0)), (0.0f), &m744_MI);
		t193  L_16 = m736(NULL, &m736_MI);
		t117 * L_17 = m737(NULL, V_3, L_15, L_16, &m737_MI);
		V_4 = ((t69 *)Castclass(L_17, InitializedTypeInfo(&t69_TI)));
		V_2->f0 = V_4;
	}

IL_009c:
	{
		V_1 = ((int32_t)(V_1+1));
	}

IL_00a0:
	{
		t5 * L_18 = (__this->f1);
		t32 * L_19 = (t32 *)InterfaceFuncInvoker0< t32 * >::Invoke(&m642_MI, L_18);
		t68 * L_20 = m270(L_19, &m270_MI);
		int32_t L_21 = m324(L_20, &m324_MI);
		if ((((int32_t)V_1) < ((int32_t)L_21)))
		{
			goto IL_000e;
		}
	}
	{
		V_0 = ((int32_t)(V_0+1));
	}

IL_00bf:
	{
		t5 * L_22 = (__this->f1);
		t32 * L_23 = (t32 *)InterfaceFuncInvoker0< t32 * >::Invoke(&m642_MI, L_22);
		t68 * L_24 = m270(L_23, &m270_MI);
		int32_t L_25 = m326(L_24, &m326_MI);
		if ((((int32_t)V_0) < ((int32_t)L_25)))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
extern MethodInfo m433_MI;
 void m433 (t103 * __this, t11* p0, MethodInfo* method){
	{
		t67 * L_0 = (__this->f4);
		VirtActionInvoker1< t11* >::Invoke(&m568_MI, L_0, p0);
		return;
	}
}
 bool m434 (t5 * __this, t74 * p0, MethodInfo* method){
	{
		t25 * L_0 = m308(p0, &m308_MI);
		t69 * L_1 = (L_0->f0);
		bool L_2 = m751(NULL, L_1, (t117 *)NULL, &m751_MI);
		return L_2;
	}
}
 bool m435 (t5 * __this, t74 * p0, MethodInfo* method){
	{
		t25 * L_0 = m308(p0, &m308_MI);
		t69 * L_1 = (L_0->f0);
		bool L_2 = m750(NULL, L_1, (t117 *)NULL, &m750_MI);
		return L_2;
	}
}
 void m436 (t5 * __this, t69 * p0, MethodInfo* method){
	{
		m738(NULL, p0, &m738_MI);
		return;
	}
}
// Metadata Definition ViewController
extern Il2CppType t104_0_0_1;
FieldInfo t103_f0_FieldInfo = 
{
	"jewelTypeDictionary", &t104_0_0_1, &t103_TI, offsetof(t103, f0), &EmptyCustomAttributesCache};
extern Il2CppType t105_0_0_1;
FieldInfo t103_f1_FieldInfo = 
{
	"stateProvider", &t105_0_0_1, &t103_TI, offsetof(t103, f1), &EmptyCustomAttributesCache};
extern Il2CppType t87_0_0_6;
FieldInfo t103_f2_FieldInfo = 
{
	"context", &t87_0_0_6, &t103_TI, offsetof(t103, f2), &EmptyCustomAttributesCache};
extern Il2CppType t91_0_0_1;
FieldInfo t103_f3_FieldInfo = 
{
	"gameMessageController", &t91_0_0_1, &t103_TI, offsetof(t103, f3), &EmptyCustomAttributesCache};
extern Il2CppType t67_0_0_1;
FieldInfo t103_f4_FieldInfo = 
{
	"messages", &t67_0_0_1, &t103_TI, offsetof(t103, f4), &EmptyCustomAttributesCache};
extern Il2CppType t106_0_0_17;
extern CustomAttributesCache t103__CustomAttributeCache_U3CU3Ef__am$cache5;
FieldInfo t103_f5_FieldInfo = 
{
	"<>f__am$cache5", &t106_0_0_17, &t103_TI, offsetof(t103_SFs, f5), &t103__CustomAttributeCache_U3CU3Ef__am$cache5};
extern Il2CppType t106_0_0_17;
extern CustomAttributesCache t103__CustomAttributeCache_U3CU3Ef__am$cache6;
FieldInfo t103_f6_FieldInfo = 
{
	"<>f__am$cache6", &t106_0_0_17, &t103_TI, offsetof(t103_SFs, f6), &t103__CustomAttributeCache_U3CU3Ef__am$cache6};
extern Il2CppType t97_0_0_17;
extern CustomAttributesCache t103__CustomAttributeCache_U3CU3Ef__am$cache7;
FieldInfo t103_f7_FieldInfo = 
{
	"<>f__am$cache7", &t97_0_0_17, &t103_TI, offsetof(t103_SFs, f7), &t103__CustomAttributeCache_U3CU3Ef__am$cache7};
static FieldInfo* t103_FIs[] =
{
	&t103_f0_FieldInfo,
	&t103_f1_FieldInfo,
	&t103_f2_FieldInfo,
	&t103_f3_FieldInfo,
	&t103_f4_FieldInfo,
	&t103_f5_FieldInfo,
	&t103_f6_FieldInfo,
	&t103_f7_FieldInfo,
	NULL
};
extern Il2CppType t87_0_0_0;
extern Il2CppType t87_0_0_0;
static ParameterInfo t103_m418_ParameterInfos[] = 
{
	{"viewControllerContext", 0, 134218028, &EmptyCustomAttributesCache, &t87_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m418_MI = 
{
	".ctor", (methodPointerType)&m418, &t103_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t103_m418_ParameterInfos, &EmptyCustomAttributesCache, 6278, 0, 255, 1, false, false, 444, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t78_0_0_0;
extern Il2CppType t78_0_0_0;
static ParameterInfo t103_m419_ParameterInfos[] = 
{
	{"jewelPrefabs", 0, 134218029, &EmptyCustomAttributesCache, &t78_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m419_MI = 
{
	"BuildJewelTypeDictionary", (methodPointerType)&m419, &t103_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t103_m419_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 445, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t6_0_0_0;
static ParameterInfo t103_m420_ParameterInfos[] = 
{
	{"logicUpdate", 0, 134218030, &EmptyCustomAttributesCache, &t6_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m420_MI = 
{
	"UpdateView", (methodPointerType)&m420, &t103_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t103_m420_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 4, 1, false, false, 446, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t6_0_0_0;
static ParameterInfo t103_m421_ParameterInfos[] = 
{
	{"logicUpdate", 0, 134218031, &EmptyCustomAttributesCache, &t6_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m421_MI = 
{
	"ProcessMessages", (methodPointerType)&m421, &t103_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t103_m421_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 447, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t6_0_0_0;
static ParameterInfo t103_m422_ParameterInfos[] = 
{
	{"logicUpdate", 0, 134218032, &EmptyCustomAttributesCache, &t6_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m422_MI = 
{
	"ProcessLevel", (methodPointerType)&m422, &t103_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t103_m422_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 448, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t6_0_0_0;
static ParameterInfo t103_m423_ParameterInfos[] = 
{
	{"logicUpdate", 0, 134218033, &EmptyCustomAttributesCache, &t6_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m423_MI = 
{
	"ProcessScore", (methodPointerType)&m423, &t103_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t103_m423_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 449, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t6_0_0_0;
static ParameterInfo t103_m424_ParameterInfos[] = 
{
	{"logicUpdate", 0, 134218034, &EmptyCustomAttributesCache, &t6_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m424_MI = 
{
	"ProcessInvalidGroupCollisions", (methodPointerType)&m424, &t103_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t103_m424_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 450, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t6_0_0_0;
static ParameterInfo t103_m425_ParameterInfos[] = 
{
	{"logicUpdate", 0, 134218035, &EmptyCustomAttributesCache, &t6_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m425_MI = 
{
	"ProcessFinalisedGroupCollisions", (methodPointerType)&m425, &t103_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t103_m425_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 451, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t6_0_0_0;
static ParameterInfo t103_m426_ParameterInfos[] = 
{
	{"logicUpdate", 0, 134218036, &EmptyCustomAttributesCache, &t6_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m426_MI = 
{
	"ProcessJewelMovements", (methodPointerType)&m426, &t103_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t103_m426_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 452, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t6_0_0_0;
static ParameterInfo t103_m427_ParameterInfos[] = 
{
	{"logicUpdate", 0, 134218037, &EmptyCustomAttributesCache, &t6_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m427_MI = 
{
	"ProcessNewJewels", (methodPointerType)&m427, &t103_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t103_m427_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 453, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m428_MI = 
{
	"ReInitialiseView", (methodPointerType)&m428, &t103_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 454, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t6_0_0_0;
static ParameterInfo t103_m429_ParameterInfos[] = 
{
	{"logicUpdate", 0, 134218038, &EmptyCustomAttributesCache, &t6_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m429_MI = 
{
	"ProcessGameState", (methodPointerType)&m429, &t103_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t103_m429_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 1, false, false, 455, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m430_MI = 
{
	"ProcessGroupCollisions", (methodPointerType)&m430, &t103_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 456, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t11_1_0_2;
extern Il2CppType t11_1_0_0;
extern Il2CppType t11_1_0_2;
static ParameterInfo t103_m431_ParameterInfos[] = 
{
	{"stateText", 0, 134218039, &EmptyCustomAttributesCache, &t11_1_0_2},
	{"stateSubText", 1, 134218040, &EmptyCustomAttributesCache, &t11_1_0_2},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t200_t200 (MethodInfo* method, void* obj, void** args);
MethodInfo m431_MI = 
{
	"GetGameStateText", (methodPointerType)&m431, &t103_TI, &t109_0_0_0, RuntimeInvoker_t109_t200_t200, t103_m431_ParameterInfos, &EmptyCustomAttributesCache, 129, 0, 255, 2, false, false, 457, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m432_MI = 
{
	"AddInitialJewelsToView", (methodPointerType)&m432, &t103_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 129, 0, 255, 0, false, false, 458, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t11_0_0_0;
static ParameterInfo t103_m433_ParameterInfos[] = 
{
	{"message", 0, 134218041, &EmptyCustomAttributesCache, &t11_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
MethodInfo m433_MI = 
{
	"AddGameInformationMessage", (methodPointerType)&m433, &t103_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t103_m433_ParameterInfos, &EmptyCustomAttributesCache, 486, 0, 5, 1, false, false, 459, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t74_0_0_0;
static ParameterInfo t103_m434_ParameterInfos[] = 
{
	{"x", 0, 134218042, &EmptyCustomAttributesCache, &t74_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t103__CustomAttributeCache_m434;
MethodInfo m434_MI = 
{
	"<ProcessJewelMovements>m__33", (methodPointerType)&m434, &t103_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t103_m434_ParameterInfos, &t103__CustomAttributeCache_m434, 145, 0, 255, 1, false, false, 460, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t74_0_0_0;
static ParameterInfo t103_m435_ParameterInfos[] = 
{
	{"x", 0, 134218043, &EmptyCustomAttributesCache, &t74_0_0_0},
};
extern Il2CppType t108_0_0_0;
extern void* RuntimeInvoker_t108_t5 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t103__CustomAttributeCache_m435;
MethodInfo m435_MI = 
{
	"<ProcessNewJewels>m__34", (methodPointerType)&m435, &t103_TI, &t108_0_0_0, RuntimeInvoker_t108_t5, t103_m435_ParameterInfos, &t103__CustomAttributeCache_m435, 145, 0, 255, 1, false, false, 461, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t69_0_0_0;
static ParameterInfo t103_m436_ParameterInfos[] = 
{
	{"x", 0, 134218044, &EmptyCustomAttributesCache, &t69_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t103__CustomAttributeCache_m436;
MethodInfo m436_MI = 
{
	"<ReInitialiseView>m__35", (methodPointerType)&m436, &t103_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t103_m436_ParameterInfos, &t103__CustomAttributeCache_m436, 145, 0, 255, 1, false, false, 462, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t103_MIs[] =
{
	&m418_MI,
	&m419_MI,
	&m420_MI,
	&m421_MI,
	&m422_MI,
	&m423_MI,
	&m424_MI,
	&m425_MI,
	&m426_MI,
	&m427_MI,
	&m428_MI,
	&m429_MI,
	&m430_MI,
	&m431_MI,
	&m432_MI,
	&m433_MI,
	&m434_MI,
	&m435_MI,
	&m436_MI,
	NULL
};
static MethodInfo* t103_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
	&m420_MI,
	&m433_MI,
};
static TypeInfo* t103_ITIs[] = 
{
	&t79_TI,
};
static Il2CppInterfaceOffsetPair t103_IOs[] = 
{
	{ &t79_TI, 4},
};
void t103_CustomAttributesCacheGenerator_U3CU3Ef__am$cache5(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t103_CustomAttributesCacheGenerator_U3CU3Ef__am$cache6(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t103_CustomAttributesCacheGenerator_U3CU3Ef__am$cache7(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t103_CustomAttributesCacheGenerator_m434(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t103_CustomAttributesCacheGenerator_m435(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t103_CustomAttributesCacheGenerator_m436(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t103__CustomAttributeCache_U3CU3Ef__am$cache5 = {
1,
NULL,
&t103_CustomAttributesCacheGenerator_U3CU3Ef__am$cache5
};
CustomAttributesCache t103__CustomAttributeCache_U3CU3Ef__am$cache6 = {
1,
NULL,
&t103_CustomAttributesCacheGenerator_U3CU3Ef__am$cache6
};
CustomAttributesCache t103__CustomAttributeCache_U3CU3Ef__am$cache7 = {
1,
NULL,
&t103_CustomAttributesCacheGenerator_U3CU3Ef__am$cache7
};
CustomAttributesCache t103__CustomAttributeCache_m434 = {
1,
NULL,
&t103_CustomAttributesCacheGenerator_m434
};
CustomAttributesCache t103__CustomAttributeCache_m435 = {
1,
NULL,
&t103_CustomAttributesCacheGenerator_m435
};
CustomAttributesCache t103__CustomAttributeCache_m436 = {
1,
NULL,
&t103_CustomAttributesCacheGenerator_m436
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType t103_0_0_0;
extern Il2CppType t103_1_0_0;
struct t103;
extern CustomAttributesCache t103__CustomAttributeCache_U3CU3Ef__am$cache5;
extern CustomAttributesCache t103__CustomAttributeCache_U3CU3Ef__am$cache6;
extern CustomAttributesCache t103__CustomAttributeCache_U3CU3Ef__am$cache7;
extern CustomAttributesCache t103__CustomAttributeCache_m434;
extern CustomAttributesCache t103__CustomAttributeCache_m435;
extern CustomAttributesCache t103__CustomAttributeCache_m436;
TypeInfo t103_TI = 
{
	&g_AssemblyU2DCSharp_dll_Image, NULL, "ViewController", "", t103_MIs, NULL, t103_FIs, NULL, &t5_TI, NULL, NULL, &t103_TI, t103_ITIs, t103_VT, &EmptyCustomAttributesCache, &t103_TI, &t103_0_0_0, &t103_1_0_0, t103_IOs, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t103), 0, -1, sizeof(t103_SFs), 0, -1, 1048577, 0, false, false, false, false, false, false, false, false, false, false, false, false, 19, 0, 8, 0, 0, 6, 1, 1};
#ifndef _MSC_VER
#else
#endif



 void m437 (t87 * __this, MethodInfo* method){
	{
		m460(__this, &m460_MI);
		return;
	}
}
 t5 * m438 (t87 * __this, MethodInfo* method){
	{
		t5 * L_0 = (__this->f0);
		return L_0;
	}
}
 void m439 (t87 * __this, t5 * p0, MethodInfo* method){
	{
		__this->f0 = p0;
		return;
	}
}
 t78 * m440 (t87 * __this, MethodInfo* method){
	{
		t78 * L_0 = (__this->f1);
		return L_0;
	}
}
 void m441 (t87 * __this, t78 * p0, MethodInfo* method){
	{
		__this->f1 = p0;
		return;
	}
}
 t83 * m442 (t87 * __this, MethodInfo* method){
	{
		t83 * L_0 = (__this->f2);
		return L_0;
	}
}
 void m443 (t87 * __this, t83 * p0, MethodInfo* method){
	{
		__this->f2 = p0;
		return;
	}
}
 t84 * m444 (t87 * __this, MethodInfo* method){
	{
		t84 * L_0 = (__this->f3);
		return L_0;
	}
}
 void m445 (t87 * __this, t84 * p0, MethodInfo* method){
	{
		__this->f3 = p0;
		return;
	}
}
 t84 * m446 (t87 * __this, MethodInfo* method){
	{
		t84 * L_0 = (__this->f4);
		return L_0;
	}
}
 void m447 (t87 * __this, t84 * p0, MethodInfo* method){
	{
		__this->f4 = p0;
		return;
	}
}
 t84 * m448 (t87 * __this, MethodInfo* method){
	{
		t84 * L_0 = (__this->f5);
		return L_0;
	}
}
 void m449 (t87 * __this, t84 * p0, MethodInfo* method){
	{
		__this->f5 = p0;
		return;
	}
}
 t84 * m450 (t87 * __this, MethodInfo* method){
	{
		t84 * L_0 = (__this->f6);
		return L_0;
	}
}
 void m451 (t87 * __this, t84 * p0, MethodInfo* method){
	{
		__this->f6 = p0;
		return;
	}
}
 t84 * m452 (t87 * __this, MethodInfo* method){
	{
		t84 * L_0 = (__this->f7);
		return L_0;
	}
}
 void m453 (t87 * __this, t84 * p0, MethodInfo* method){
	{
		__this->f7 = p0;
		return;
	}
}
 t85 * m454 (t87 * __this, MethodInfo* method){
	{
		t85 * L_0 = (__this->f8);
		return L_0;
	}
}
 void m455 (t87 * __this, t85 * p0, MethodInfo* method){
	{
		__this->f8 = p0;
		return;
	}
}
 t69 * m456 (t87 * __this, MethodInfo* method){
	{
		t69 * L_0 = (__this->f9);
		return L_0;
	}
}
 void m457 (t87 * __this, t69 * p0, MethodInfo* method){
	{
		__this->f9 = p0;
		return;
	}
}
 t4 * m458 (t87 * __this, MethodInfo* method){
	{
		t4 * L_0 = (__this->f10);
		return L_0;
	}
}
 void m459 (t87 * __this, t4 * p0, MethodInfo* method){
	{
		__this->f10 = p0;
		return;
	}
}
// Metadata Definition ViewControllerContext
extern Il2CppType t105_0_0_1;
extern CustomAttributesCache t87__CustomAttributeCache_U3CProviderU3Ek__BackingField;
FieldInfo t87_f0_FieldInfo = 
{
	"<Provider>k__BackingField", &t105_0_0_1, &t87_TI, offsetof(t87, f0), &t87__CustomAttributeCache_U3CProviderU3Ek__BackingField};
extern Il2CppType t78_0_0_1;
extern CustomAttributesCache t87__CustomAttributeCache_U3CJewelPrefabsU3Ek__BackingField;
FieldInfo t87_f1_FieldInfo = 
{
	"<JewelPrefabs>k__BackingField", &t78_0_0_1, &t87_TI, offsetof(t87, f1), &t87__CustomAttributeCache_U3CJewelPrefabsU3Ek__BackingField};
extern Il2CppType t83_0_0_1;
extern CustomAttributesCache t87__CustomAttributeCache_U3CCollisionGroupMaterialU3Ek__BackingField;
FieldInfo t87_f2_FieldInfo = 
{
	"<CollisionGroupMaterial>k__BackingField", &t83_0_0_1, &t87_TI, offsetof(t87, f2), &t87__CustomAttributeCache_U3CCollisionGroupMaterialU3Ek__BackingField};
extern Il2CppType t84_0_0_1;
extern CustomAttributesCache t87__CustomAttributeCache_U3CScoreTextU3Ek__BackingField;
FieldInfo t87_f3_FieldInfo = 
{
	"<ScoreText>k__BackingField", &t84_0_0_1, &t87_TI, offsetof(t87, f3), &t87__CustomAttributeCache_U3CScoreTextU3Ek__BackingField};
extern Il2CppType t84_0_0_1;
extern CustomAttributesCache t87__CustomAttributeCache_U3CLevelTextU3Ek__BackingField;
FieldInfo t87_f4_FieldInfo = 
{
	"<LevelText>k__BackingField", &t84_0_0_1, &t87_TI, offsetof(t87, f4), &t87__CustomAttributeCache_U3CLevelTextU3Ek__BackingField};
extern Il2CppType t84_0_0_1;
extern CustomAttributesCache t87__CustomAttributeCache_U3CDifficultyTextU3Ek__BackingField;
FieldInfo t87_f5_FieldInfo = 
{
	"<DifficultyText>k__BackingField", &t84_0_0_1, &t87_TI, offsetof(t87, f5), &t87__CustomAttributeCache_U3CDifficultyTextU3Ek__BackingField};
extern Il2CppType t84_0_0_1;
extern CustomAttributesCache t87__CustomAttributeCache_U3CGameStateTextU3Ek__BackingField;
FieldInfo t87_f6_FieldInfo = 
{
	"<GameStateText>k__BackingField", &t84_0_0_1, &t87_TI, offsetof(t87, f6), &t87__CustomAttributeCache_U3CGameStateTextU3Ek__BackingField};
extern Il2CppType t84_0_0_1;
extern CustomAttributesCache t87__CustomAttributeCache_U3CGameStateSubtextU3Ek__BackingField;
FieldInfo t87_f7_FieldInfo = 
{
	"<GameStateSubtext>k__BackingField", &t84_0_0_1, &t87_TI, offsetof(t87, f7), &t87__CustomAttributeCache_U3CGameStateSubtextU3Ek__BackingField};
extern Il2CppType t85_0_0_1;
extern CustomAttributesCache t87__CustomAttributeCache_U3CGameMessageSlotsU3Ek__BackingField;
FieldInfo t87_f8_FieldInfo = 
{
	"<GameMessageSlots>k__BackingField", &t85_0_0_1, &t87_TI, offsetof(t87, f8), &t87__CustomAttributeCache_U3CGameMessageSlotsU3Ek__BackingField};
extern Il2CppType t69_0_0_1;
extern CustomAttributesCache t87__CustomAttributeCache_U3CExplosionPrefabU3Ek__BackingField;
FieldInfo t87_f9_FieldInfo = 
{
	"<ExplosionPrefab>k__BackingField", &t69_0_0_1, &t87_TI, offsetof(t87, f9), &t87__CustomAttributeCache_U3CExplosionPrefabU3Ek__BackingField};
extern Il2CppType t4_0_0_1;
extern CustomAttributesCache t87__CustomAttributeCache_U3CConfigurableSettingsU3Ek__BackingField;
FieldInfo t87_f10_FieldInfo = 
{
	"<ConfigurableSettings>k__BackingField", &t4_0_0_1, &t87_TI, offsetof(t87, f10), &t87__CustomAttributeCache_U3CConfigurableSettingsU3Ek__BackingField};
static FieldInfo* t87_FIs[] =
{
	&t87_f0_FieldInfo,
	&t87_f1_FieldInfo,
	&t87_f2_FieldInfo,
	&t87_f3_FieldInfo,
	&t87_f4_FieldInfo,
	&t87_f5_FieldInfo,
	&t87_f6_FieldInfo,
	&t87_f7_FieldInfo,
	&t87_f8_FieldInfo,
	&t87_f9_FieldInfo,
	&t87_f10_FieldInfo,
	NULL
};
static PropertyInfo t87____Provider_PropertyInfo = 
{
	&t87_TI, "Provider", &m438_MI, &m439_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo t87____JewelPrefabs_PropertyInfo = 
{
	&t87_TI, "JewelPrefabs", &m440_MI, &m441_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo t87____CollisionGroupMaterial_PropertyInfo = 
{
	&t87_TI, "CollisionGroupMaterial", &m442_MI, &m443_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo t87____ScoreText_PropertyInfo = 
{
	&t87_TI, "ScoreText", &m444_MI, &m445_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo t87____LevelText_PropertyInfo = 
{
	&t87_TI, "LevelText", &m446_MI, &m447_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo t87____DifficultyText_PropertyInfo = 
{
	&t87_TI, "DifficultyText", &m448_MI, &m449_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo t87____GameStateText_PropertyInfo = 
{
	&t87_TI, "GameStateText", &m450_MI, &m451_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo t87____GameStateSubtext_PropertyInfo = 
{
	&t87_TI, "GameStateSubtext", &m452_MI, &m453_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo t87____GameMessageSlots_PropertyInfo = 
{
	&t87_TI, "GameMessageSlots", &m454_MI, &m455_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo t87____ExplosionPrefab_PropertyInfo = 
{
	&t87_TI, "ExplosionPrefab", &m456_MI, &m457_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo t87____ConfigurableSettings_PropertyInfo = 
{
	&t87_TI, "ConfigurableSettings", &m458_MI, &m459_MI, 0, &EmptyCustomAttributesCache};
static PropertyInfo* t87_PIs[] =
{
	&t87____Provider_PropertyInfo,
	&t87____JewelPrefabs_PropertyInfo,
	&t87____CollisionGroupMaterial_PropertyInfo,
	&t87____ScoreText_PropertyInfo,
	&t87____LevelText_PropertyInfo,
	&t87____DifficultyText_PropertyInfo,
	&t87____GameStateText_PropertyInfo,
	&t87____GameStateSubtext_PropertyInfo,
	&t87____GameMessageSlots_PropertyInfo,
	&t87____ExplosionPrefab_PropertyInfo,
	&t87____ConfigurableSettings_PropertyInfo,
	NULL
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109 (MethodInfo* method, void* obj, void** args);
MethodInfo m437_MI = 
{
	".ctor", (methodPointerType)&m437, &t87_TI, &t109_0_0_0, RuntimeInvoker_t109, NULL, &EmptyCustomAttributesCache, 6278, 0, 255, 0, false, false, 463, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t105_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t87__CustomAttributeCache_m438;
MethodInfo m438_MI = 
{
	"get_Provider", (methodPointerType)&m438, &t87_TI, &t105_0_0_0, RuntimeInvoker_t5, NULL, &t87__CustomAttributeCache_m438, 2182, 0, 255, 0, false, false, 464, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t105_0_0_0;
static ParameterInfo t87_m439_ParameterInfos[] = 
{
	{"value", 0, 134218045, &EmptyCustomAttributesCache, &t105_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t87__CustomAttributeCache_m439;
MethodInfo m439_MI = 
{
	"set_Provider", (methodPointerType)&m439, &t87_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t87_m439_ParameterInfos, &t87__CustomAttributeCache_m439, 2182, 0, 255, 1, false, false, 465, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t78_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t87__CustomAttributeCache_m440;
MethodInfo m440_MI = 
{
	"get_JewelPrefabs", (methodPointerType)&m440, &t87_TI, &t78_0_0_0, RuntimeInvoker_t5, NULL, &t87__CustomAttributeCache_m440, 2182, 0, 255, 0, false, false, 466, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t78_0_0_0;
static ParameterInfo t87_m441_ParameterInfos[] = 
{
	{"value", 0, 134218046, &EmptyCustomAttributesCache, &t78_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t87__CustomAttributeCache_m441;
MethodInfo m441_MI = 
{
	"set_JewelPrefabs", (methodPointerType)&m441, &t87_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t87_m441_ParameterInfos, &t87__CustomAttributeCache_m441, 2182, 0, 255, 1, false, false, 467, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t83_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t87__CustomAttributeCache_m442;
MethodInfo m442_MI = 
{
	"get_CollisionGroupMaterial", (methodPointerType)&m442, &t87_TI, &t83_0_0_0, RuntimeInvoker_t5, NULL, &t87__CustomAttributeCache_m442, 2182, 0, 255, 0, false, false, 468, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t83_0_0_0;
extern Il2CppType t83_0_0_0;
static ParameterInfo t87_m443_ParameterInfos[] = 
{
	{"value", 0, 134218047, &EmptyCustomAttributesCache, &t83_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t87__CustomAttributeCache_m443;
MethodInfo m443_MI = 
{
	"set_CollisionGroupMaterial", (methodPointerType)&m443, &t87_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t87_m443_ParameterInfos, &t87__CustomAttributeCache_m443, 2182, 0, 255, 1, false, false, 469, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t84_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t87__CustomAttributeCache_m444;
MethodInfo m444_MI = 
{
	"get_ScoreText", (methodPointerType)&m444, &t87_TI, &t84_0_0_0, RuntimeInvoker_t5, NULL, &t87__CustomAttributeCache_m444, 2182, 0, 255, 0, false, false, 470, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t84_0_0_0;
extern Il2CppType t84_0_0_0;
static ParameterInfo t87_m445_ParameterInfos[] = 
{
	{"value", 0, 134218048, &EmptyCustomAttributesCache, &t84_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t87__CustomAttributeCache_m445;
MethodInfo m445_MI = 
{
	"set_ScoreText", (methodPointerType)&m445, &t87_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t87_m445_ParameterInfos, &t87__CustomAttributeCache_m445, 2182, 0, 255, 1, false, false, 471, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t84_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t87__CustomAttributeCache_m446;
MethodInfo m446_MI = 
{
	"get_LevelText", (methodPointerType)&m446, &t87_TI, &t84_0_0_0, RuntimeInvoker_t5, NULL, &t87__CustomAttributeCache_m446, 2182, 0, 255, 0, false, false, 472, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t84_0_0_0;
static ParameterInfo t87_m447_ParameterInfos[] = 
{
	{"value", 0, 134218049, &EmptyCustomAttributesCache, &t84_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t87__CustomAttributeCache_m447;
MethodInfo m447_MI = 
{
	"set_LevelText", (methodPointerType)&m447, &t87_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t87_m447_ParameterInfos, &t87__CustomAttributeCache_m447, 2182, 0, 255, 1, false, false, 473, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t84_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t87__CustomAttributeCache_m448;
MethodInfo m448_MI = 
{
	"get_DifficultyText", (methodPointerType)&m448, &t87_TI, &t84_0_0_0, RuntimeInvoker_t5, NULL, &t87__CustomAttributeCache_m448, 2182, 0, 255, 0, false, false, 474, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t84_0_0_0;
static ParameterInfo t87_m449_ParameterInfos[] = 
{
	{"value", 0, 134218050, &EmptyCustomAttributesCache, &t84_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t87__CustomAttributeCache_m449;
MethodInfo m449_MI = 
{
	"set_DifficultyText", (methodPointerType)&m449, &t87_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t87_m449_ParameterInfos, &t87__CustomAttributeCache_m449, 2182, 0, 255, 1, false, false, 475, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t84_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t87__CustomAttributeCache_m450;
MethodInfo m450_MI = 
{
	"get_GameStateText", (methodPointerType)&m450, &t87_TI, &t84_0_0_0, RuntimeInvoker_t5, NULL, &t87__CustomAttributeCache_m450, 2182, 0, 255, 0, false, false, 476, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t84_0_0_0;
static ParameterInfo t87_m451_ParameterInfos[] = 
{
	{"value", 0, 134218051, &EmptyCustomAttributesCache, &t84_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t87__CustomAttributeCache_m451;
MethodInfo m451_MI = 
{
	"set_GameStateText", (methodPointerType)&m451, &t87_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t87_m451_ParameterInfos, &t87__CustomAttributeCache_m451, 2182, 0, 255, 1, false, false, 477, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t84_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t87__CustomAttributeCache_m452;
MethodInfo m452_MI = 
{
	"get_GameStateSubtext", (methodPointerType)&m452, &t87_TI, &t84_0_0_0, RuntimeInvoker_t5, NULL, &t87__CustomAttributeCache_m452, 2182, 0, 255, 0, false, false, 478, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t84_0_0_0;
static ParameterInfo t87_m453_ParameterInfos[] = 
{
	{"value", 0, 134218052, &EmptyCustomAttributesCache, &t84_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t87__CustomAttributeCache_m453;
MethodInfo m453_MI = 
{
	"set_GameStateSubtext", (methodPointerType)&m453, &t87_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t87_m453_ParameterInfos, &t87__CustomAttributeCache_m453, 2182, 0, 255, 1, false, false, 479, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t85_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t87__CustomAttributeCache_m454;
MethodInfo m454_MI = 
{
	"get_GameMessageSlots", (methodPointerType)&m454, &t87_TI, &t85_0_0_0, RuntimeInvoker_t5, NULL, &t87__CustomAttributeCache_m454, 2182, 0, 255, 0, false, false, 480, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t85_0_0_0;
static ParameterInfo t87_m455_ParameterInfos[] = 
{
	{"value", 0, 134218053, &EmptyCustomAttributesCache, &t85_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t87__CustomAttributeCache_m455;
MethodInfo m455_MI = 
{
	"set_GameMessageSlots", (methodPointerType)&m455, &t87_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t87_m455_ParameterInfos, &t87__CustomAttributeCache_m455, 2182, 0, 255, 1, false, false, 481, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t69_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t87__CustomAttributeCache_m456;
MethodInfo m456_MI = 
{
	"get_ExplosionPrefab", (methodPointerType)&m456, &t87_TI, &t69_0_0_0, RuntimeInvoker_t5, NULL, &t87__CustomAttributeCache_m456, 2182, 0, 255, 0, false, false, 482, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t69_0_0_0;
static ParameterInfo t87_m457_ParameterInfos[] = 
{
	{"value", 0, 134218054, &EmptyCustomAttributesCache, &t69_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t87__CustomAttributeCache_m457;
MethodInfo m457_MI = 
{
	"set_ExplosionPrefab", (methodPointerType)&m457, &t87_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t87_m457_ParameterInfos, &t87__CustomAttributeCache_m457, 2182, 0, 255, 1, false, false, 483, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t4_0_0_0;
extern void* RuntimeInvoker_t5 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t87__CustomAttributeCache_m458;
MethodInfo m458_MI = 
{
	"get_ConfigurableSettings", (methodPointerType)&m458, &t87_TI, &t4_0_0_0, RuntimeInvoker_t5, NULL, &t87__CustomAttributeCache_m458, 2182, 0, 255, 0, false, false, 484, NULL, (methodPointerType)NULL, NULL};
extern Il2CppType t4_0_0_0;
static ParameterInfo t87_m459_ParameterInfos[] = 
{
	{"value", 0, 134218055, &EmptyCustomAttributesCache, &t4_0_0_0},
};
extern Il2CppType t109_0_0_0;
extern void* RuntimeInvoker_t109_t5 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache t87__CustomAttributeCache_m459;
MethodInfo m459_MI = 
{
	"set_ConfigurableSettings", (methodPointerType)&m459, &t87_TI, &t109_0_0_0, RuntimeInvoker_t109_t5, t87_m459_ParameterInfos, &t87__CustomAttributeCache_m459, 2182, 0, 255, 1, false, false, 485, NULL, (methodPointerType)NULL, NULL};
static MethodInfo* t87_MIs[] =
{
	&m437_MI,
	&m438_MI,
	&m439_MI,
	&m440_MI,
	&m441_MI,
	&m442_MI,
	&m443_MI,
	&m444_MI,
	&m445_MI,
	&m446_MI,
	&m447_MI,
	&m448_MI,
	&m449_MI,
	&m450_MI,
	&m451_MI,
	&m452_MI,
	&m453_MI,
	&m454_MI,
	&m455_MI,
	&m456_MI,
	&m457_MI,
	&m458_MI,
	&m459_MI,
	NULL
};
static MethodInfo* t87_VT[] =
{
	&m464_MI,
	&m465_MI,
	&m466_MI,
	&m467_MI,
};
void t87_CustomAttributesCacheGenerator_U3CProviderU3Ek__BackingField(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t87_CustomAttributesCacheGenerator_U3CJewelPrefabsU3Ek__BackingField(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t87_CustomAttributesCacheGenerator_U3CCollisionGroupMaterialU3Ek__BackingField(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t87_CustomAttributesCacheGenerator_U3CScoreTextU3Ek__BackingField(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t87_CustomAttributesCacheGenerator_U3CLevelTextU3Ek__BackingField(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t87_CustomAttributesCacheGenerator_U3CDifficultyTextU3Ek__BackingField(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t87_CustomAttributesCacheGenerator_U3CGameStateTextU3Ek__BackingField(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t87_CustomAttributesCacheGenerator_U3CGameStateSubtextU3Ek__BackingField(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t87_CustomAttributesCacheGenerator_U3CGameMessageSlotsU3Ek__BackingField(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t87_CustomAttributesCacheGenerator_U3CExplosionPrefabU3Ek__BackingField(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t87_CustomAttributesCacheGenerator_U3CConfigurableSettingsU3Ek__BackingField(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t87_CustomAttributesCacheGenerator_m438(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t87_CustomAttributesCacheGenerator_m439(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t87_CustomAttributesCacheGenerator_m440(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t87_CustomAttributesCacheGenerator_m441(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t87_CustomAttributesCacheGenerator_m442(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t87_CustomAttributesCacheGenerator_m443(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t87_CustomAttributesCacheGenerator_m444(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t87_CustomAttributesCacheGenerator_m445(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t87_CustomAttributesCacheGenerator_m446(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t87_CustomAttributesCacheGenerator_m447(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t87_CustomAttributesCacheGenerator_m448(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t87_CustomAttributesCacheGenerator_m449(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t87_CustomAttributesCacheGenerator_m450(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t87_CustomAttributesCacheGenerator_m451(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t87_CustomAttributesCacheGenerator_m452(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t87_CustomAttributesCacheGenerator_m453(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t87_CustomAttributesCacheGenerator_m454(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t87_CustomAttributesCacheGenerator_m455(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t87_CustomAttributesCacheGenerator_m456(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t87_CustomAttributesCacheGenerator_m457(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t87_CustomAttributesCacheGenerator_m458(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void t87_CustomAttributesCacheGenerator_m459(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t112 * tmp;
		tmp = (t112 *)il2cpp_codegen_object_new (&t112_TI);
		m468(tmp, &m468_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache t87__CustomAttributeCache_U3CProviderU3Ek__BackingField = {
1,
NULL,
&t87_CustomAttributesCacheGenerator_U3CProviderU3Ek__BackingField
};
CustomAttributesCache t87__CustomAttributeCache_U3CJewelPrefabsU3Ek__BackingField = {
1,
NULL,
&t87_CustomAttributesCacheGenerator_U3CJewelPrefabsU3Ek__BackingField
};
CustomAttributesCache t87__CustomAttributeCache_U3CCollisionGroupMaterialU3Ek__BackingField = {
1,
NULL,
&t87_CustomAttributesCacheGenerator_U3CCollisionGroupMaterialU3Ek__BackingField
};
CustomAttributesCache t87__CustomAttributeCache_U3CScoreTextU3Ek__BackingField = {
1,
NULL,
&t87_CustomAttributesCacheGenerator_U3CScoreTextU3Ek__BackingField
};
CustomAttributesCache t87__CustomAttributeCache_U3CLevelTextU3Ek__BackingField = {
1,
NULL,
&t87_CustomAttributesCacheGenerator_U3CLevelTextU3Ek__BackingField
};
CustomAttributesCache t87__CustomAttributeCache_U3CDifficultyTextU3Ek__BackingField = {
1,
NULL,
&t87_CustomAttributesCacheGenerator_U3CDifficultyTextU3Ek__BackingField
};
CustomAttributesCache t87__CustomAttributeCache_U3CGameStateTextU3Ek__BackingField = {
1,
NULL,
&t87_CustomAttributesCacheGenerator_U3CGameStateTextU3Ek__BackingField
};
CustomAttributesCache t87__CustomAttributeCache_U3CGameStateSubtextU3Ek__BackingField = {
1,
NULL,
&t87_CustomAttributesCacheGenerator_U3CGameStateSubtextU3Ek__BackingField
};
CustomAttributesCache t87__CustomAttributeCache_U3CGameMessageSlotsU3Ek__BackingField = {
1,
NULL,
&t87_CustomAttributesCacheGenerator_U3CGameMessageSlotsU3Ek__BackingField
};
CustomAttributesCache t87__CustomAttributeCache_U3CExplosionPrefabU3Ek__BackingField = {
1,
NULL,
&t87_CustomAttributesCacheGenerator_U3CExplosionPrefabU3Ek__BackingField
};
CustomAttributesCache t87__CustomAttributeCache_U3CConfigurableSettingsU3Ek__BackingField = {
1,
NULL,
&t87_CustomAttributesCacheGenerator_U3CConfigurableSettingsU3Ek__BackingField
};
CustomAttributesCache t87__CustomAttributeCache_m438 = {
1,
NULL,
&t87_CustomAttributesCacheGenerator_m438
};
CustomAttributesCache t87__CustomAttributeCache_m439 = {
1,
NULL,
&t87_CustomAttributesCacheGenerator_m439
};
CustomAttributesCache t87__CustomAttributeCache_m440 = {
1,
NULL,
&t87_CustomAttributesCacheGenerator_m440
};
CustomAttributesCache t87__CustomAttributeCache_m441 = {
1,
NULL,
&t87_CustomAttributesCacheGenerator_m441
};
CustomAttributesCache t87__CustomAttributeCache_m442 = {
1,
NULL,
&t87_CustomAttributesCacheGenerator_m442
};
CustomAttributesCache t87__CustomAttributeCache_m443 = {
1,
NULL,
&t87_CustomAttributesCacheGenerator_m443
};
CustomAttributesCache t87__CustomAttributeCache_m444 = {
1,
NULL,
&t87_CustomAttributesCacheGenerator_m444
};
CustomAttributesCache t87__CustomAttributeCache_m445 = {
1,
NULL,
&t87_CustomAttributesCacheGenerator_m445
};
CustomAttributesCache t87__CustomAttributeCache_m446 = {
1,
NULL,
&t87_CustomAttributesCacheGenerator_m446
};
CustomAttributesCache t87__CustomAttributeCache_m447 = {
1,
NULL,
&t87_CustomAttributesCacheGenerator_m447
};
CustomAttributesCache t87__CustomAttributeCache_m448 = {
1,
NULL,
&t87_CustomAttributesCacheGenerator_m448
};
CustomAttributesCache t87__CustomAttributeCache_m449 = {
1,
NULL,
&t87_CustomAttributesCacheGenerator_m449
};
CustomAttributesCache t87__CustomAttributeCache_m450 = {
1,
NULL,
&t87_CustomAttributesCacheGenerator_m450
};
CustomAttributesCache t87__CustomAttributeCache_m451 = {
1,
NULL,
&t87_CustomAttributesCacheGenerator_m451
};
CustomAttributesCache t87__CustomAttributeCache_m452 = {
1,
NULL,
&t87_CustomAttributesCacheGenerator_m452
};
CustomAttributesCache t87__CustomAttributeCache_m453 = {
1,
NULL,
&t87_CustomAttributesCacheGenerator_m453
};
CustomAttributesCache t87__CustomAttributeCache_m454 = {
1,
NULL,
&t87_CustomAttributesCacheGenerator_m454
};
CustomAttributesCache t87__CustomAttributeCache_m455 = {
1,
NULL,
&t87_CustomAttributesCacheGenerator_m455
};
CustomAttributesCache t87__CustomAttributeCache_m456 = {
1,
NULL,
&t87_CustomAttributesCacheGenerator_m456
};
CustomAttributesCache t87__CustomAttributeCache_m457 = {
1,
NULL,
&t87_CustomAttributesCacheGenerator_m457
};
CustomAttributesCache t87__CustomAttributeCache_m458 = {
1,
NULL,
&t87_CustomAttributesCacheGenerator_m458
};
CustomAttributesCache t87__CustomAttributeCache_m459 = {
1,
NULL,
&t87_CustomAttributesCacheGenerator_m459
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType t87_1_0_0;
struct t87;
extern CustomAttributesCache t87__CustomAttributeCache_U3CProviderU3Ek__BackingField;
extern CustomAttributesCache t87__CustomAttributeCache_U3CJewelPrefabsU3Ek__BackingField;
extern CustomAttributesCache t87__CustomAttributeCache_U3CCollisionGroupMaterialU3Ek__BackingField;
extern CustomAttributesCache t87__CustomAttributeCache_U3CScoreTextU3Ek__BackingField;
extern CustomAttributesCache t87__CustomAttributeCache_U3CLevelTextU3Ek__BackingField;
extern CustomAttributesCache t87__CustomAttributeCache_U3CDifficultyTextU3Ek__BackingField;
extern CustomAttributesCache t87__CustomAttributeCache_U3CGameStateTextU3Ek__BackingField;
extern CustomAttributesCache t87__CustomAttributeCache_U3CGameStateSubtextU3Ek__BackingField;
extern CustomAttributesCache t87__CustomAttributeCache_U3CGameMessageSlotsU3Ek__BackingField;
extern CustomAttributesCache t87__CustomAttributeCache_U3CExplosionPrefabU3Ek__BackingField;
extern CustomAttributesCache t87__CustomAttributeCache_U3CConfigurableSettingsU3Ek__BackingField;
extern CustomAttributesCache t87__CustomAttributeCache_m438;
extern CustomAttributesCache t87__CustomAttributeCache_m439;
extern CustomAttributesCache t87__CustomAttributeCache_m440;
extern CustomAttributesCache t87__CustomAttributeCache_m441;
extern CustomAttributesCache t87__CustomAttributeCache_m442;
extern CustomAttributesCache t87__CustomAttributeCache_m443;
extern CustomAttributesCache t87__CustomAttributeCache_m444;
extern CustomAttributesCache t87__CustomAttributeCache_m445;
extern CustomAttributesCache t87__CustomAttributeCache_m446;
extern CustomAttributesCache t87__CustomAttributeCache_m447;
extern CustomAttributesCache t87__CustomAttributeCache_m448;
extern CustomAttributesCache t87__CustomAttributeCache_m449;
extern CustomAttributesCache t87__CustomAttributeCache_m450;
extern CustomAttributesCache t87__CustomAttributeCache_m451;
extern CustomAttributesCache t87__CustomAttributeCache_m452;
extern CustomAttributesCache t87__CustomAttributeCache_m453;
extern CustomAttributesCache t87__CustomAttributeCache_m454;
extern CustomAttributesCache t87__CustomAttributeCache_m455;
extern CustomAttributesCache t87__CustomAttributeCache_m456;
extern CustomAttributesCache t87__CustomAttributeCache_m457;
extern CustomAttributesCache t87__CustomAttributeCache_m458;
extern CustomAttributesCache t87__CustomAttributeCache_m459;
TypeInfo t87_TI = 
{
	&g_AssemblyU2DCSharp_dll_Image, NULL, "ViewControllerContext", "", t87_MIs, t87_PIs, t87_FIs, NULL, &t5_TI, NULL, NULL, &t87_TI, NULL, t87_VT, &EmptyCustomAttributesCache, &t87_TI, &t87_0_0_0, &t87_1_0_0, NULL, NULL, NULL, NULL, NULL, NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, (methodPointerType)NULL, sizeof (t87), 0, -1, 0, 0, -1, 1048577, 0, false, false, false, false, false, false, false, false, false, false, false, false, 23, 11, 11, 0, 0, 4, 0, 0};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
