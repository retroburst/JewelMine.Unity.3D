#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
extern TypeInfo t568_TI;
#include "t568.h"
#include "t568MD.h"
extern MethodInfo m2691_MI;
extern TypeInfo t569_TI;
#include "t569.h"
#include "t569MD.h"
extern MethodInfo m2692_MI;
extern TypeInfo t570_TI;
#include "t570.h"
#include "t570MD.h"
extern MethodInfo m2693_MI;
extern TypeInfo t571_TI;
#include "t571.h"
#include "t571MD.h"
extern MethodInfo m2694_MI;
extern TypeInfo t572_TI;
#include "t572.h"
#include "t572MD.h"
extern MethodInfo m2695_MI;
extern TypeInfo t573_TI;
#include "t573.h"
#include "t573MD.h"
extern MethodInfo m2696_MI;
extern TypeInfo t201_TI;
#include "t201.h"
#include "t201MD.h"
extern MethodInfo m754_MI;
extern MethodInfo m755_MI;
extern TypeInfo t574_TI;
#include "t574.h"
#include "t574MD.h"
extern MethodInfo m2697_MI;
extern TypeInfo t575_TI;
#include "t575.h"
#include "t575MD.h"
extern MethodInfo m2698_MI;
extern TypeInfo t576_TI;
#include "t576.h"
#include "t576MD.h"
extern MethodInfo m2699_MI;
extern TypeInfo t577_TI;
#include "t577.h"
#include "t577MD.h"
extern MethodInfo m2700_MI;
void g_UnityEngine_UI_Assembly_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t568 * tmp;
		tmp = (t568 *)il2cpp_codegen_object_new (&t568_TI);
		m2691(tmp, il2cpp_codegen_string_new_wrapper("guisystem"), &m2691_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t569 * tmp;
		tmp = (t569 *)il2cpp_codegen_object_new (&t569_TI);
		m2692(tmp, il2cpp_codegen_string_new_wrapper(""), &m2692_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		t570 * tmp;
		tmp = (t570 *)il2cpp_codegen_object_new (&t570_TI);
		m2693(tmp, il2cpp_codegen_string_new_wrapper(""), &m2693_MI);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
	{
		t571 * tmp;
		tmp = (t571 *)il2cpp_codegen_object_new (&t571_TI);
		m2694(tmp, il2cpp_codegen_string_new_wrapper("Microsoft"), &m2694_MI);
		cache->attributes[3] = (Il2CppObject*)tmp;
	}
	{
		t572 * tmp;
		tmp = (t572 *)il2cpp_codegen_object_new (&t572_TI);
		m2695(tmp, il2cpp_codegen_string_new_wrapper("guisystem"), &m2695_MI);
		cache->attributes[4] = (Il2CppObject*)tmp;
	}
	{
		t573 * tmp;
		tmp = (t573 *)il2cpp_codegen_object_new (&t573_TI);
		m2696(tmp, il2cpp_codegen_string_new_wrapper("Copyright © Microsoft 2013"), &m2696_MI);
		cache->attributes[5] = (Il2CppObject*)tmp;
	}
	{
		t201 * tmp;
		tmp = (t201 *)il2cpp_codegen_object_new (&t201_TI);
		m754(tmp, &m754_MI);
		m755(tmp, true, &m755_MI);
		cache->attributes[6] = (Il2CppObject*)tmp;
	}
	{
		t574 * tmp;
		tmp = (t574 *)il2cpp_codegen_object_new (&t574_TI);
		m2697(tmp, il2cpp_codegen_string_new_wrapper("1.0.0.0"), &m2697_MI);
		cache->attributes[7] = (Il2CppObject*)tmp;
	}
	{
		t575 * tmp;
		tmp = (t575 *)il2cpp_codegen_object_new (&t575_TI);
		m2698(tmp, il2cpp_codegen_string_new_wrapper("d4f464c7-9b15-460d-b4bc-2cacd1c1df73"), &m2698_MI);
		cache->attributes[8] = (Il2CppObject*)tmp;
	}
	{
		t576 * tmp;
		tmp = (t576 *)il2cpp_codegen_object_new (&t576_TI);
		m2699(tmp, false, &m2699_MI);
		cache->attributes[9] = (Il2CppObject*)tmp;
	}
	{
		t577 * tmp;
		tmp = (t577 *)il2cpp_codegen_object_new (&t577_TI);
		m2700(tmp, il2cpp_codegen_string_new_wrapper(""), &m2700_MI);
		cache->attributes[10] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache g_UnityEngine_UI_Assembly__CustomAttributeCache = {
11,
NULL,
&g_UnityEngine_UI_Assembly_CustomAttributesCacheGenerator
};
