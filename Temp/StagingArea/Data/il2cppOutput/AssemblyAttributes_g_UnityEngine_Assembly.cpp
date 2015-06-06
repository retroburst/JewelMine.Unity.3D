#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
extern TypeInfo t822_TI;
#include "t822.h"
#include "t822MD.h"
extern MethodInfo m3687_MI;
extern TypeInfo t201_TI;
#include "t201.h"
#include "t201MD.h"
extern MethodInfo m754_MI;
extern MethodInfo m755_MI;
extern TypeInfo t151_TI;
#include "t151.h"
#include "t151MD.h"
extern MethodInfo m566_MI;
void g_UnityEngine_Assembly_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t822 * tmp;
		tmp = (t822 *)il2cpp_codegen_object_new (&t822_TI);
		m3687(tmp, il2cpp_codegen_string_new_wrapper("Unity.Automation"), &m3687_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t822 * tmp;
		tmp = (t822 *)il2cpp_codegen_object_new (&t822_TI);
		m3687(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Advertisements"), &m3687_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		t822 * tmp;
		tmp = (t822 *)il2cpp_codegen_object_new (&t822_TI);
		m3687(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Cloud"), &m3687_MI);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
	{
		t822 * tmp;
		tmp = (t822 *)il2cpp_codegen_object_new (&t822_TI);
		m3687(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Networking"), &m3687_MI);
		cache->attributes[3] = (Il2CppObject*)tmp;
	}
	{
		t822 * tmp;
		tmp = (t822 *)il2cpp_codegen_object_new (&t822_TI);
		m3687(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.TerrainPhysics"), &m3687_MI);
		cache->attributes[4] = (Il2CppObject*)tmp;
	}
	{
		t822 * tmp;
		tmp = (t822 *)il2cpp_codegen_object_new (&t822_TI);
		m3687(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Terrain"), &m3687_MI);
		cache->attributes[5] = (Il2CppObject*)tmp;
	}
	{
		t822 * tmp;
		tmp = (t822 *)il2cpp_codegen_object_new (&t822_TI);
		m3687(tmp, il2cpp_codegen_string_new_wrapper("Unity.IntegrationTests"), &m3687_MI);
		cache->attributes[6] = (Il2CppObject*)tmp;
	}
	{
		t822 * tmp;
		tmp = (t822 *)il2cpp_codegen_object_new (&t822_TI);
		m3687(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Physics"), &m3687_MI);
		cache->attributes[7] = (Il2CppObject*)tmp;
	}
	{
		t201 * tmp;
		tmp = (t201 *)il2cpp_codegen_object_new (&t201_TI);
		m754(tmp, &m754_MI);
		m755(tmp, true, &m755_MI);
		cache->attributes[8] = (Il2CppObject*)tmp;
	}
	{
		t151 * tmp;
		tmp = (t151 *)il2cpp_codegen_object_new (&t151_TI);
		m566(tmp, &m566_MI);
		cache->attributes[9] = (Il2CppObject*)tmp;
	}
	{
		t822 * tmp;
		tmp = (t822 *)il2cpp_codegen_object_new (&t822_TI);
		m3687(tmp, il2cpp_codegen_string_new_wrapper("Unity.RuntimeTests.Framework.Tests"), &m3687_MI);
		cache->attributes[10] = (Il2CppObject*)tmp;
	}
	{
		t822 * tmp;
		tmp = (t822 *)il2cpp_codegen_object_new (&t822_TI);
		m3687(tmp, il2cpp_codegen_string_new_wrapper("Unity.RuntimeTests.Framework"), &m3687_MI);
		cache->attributes[11] = (Il2CppObject*)tmp;
	}
	{
		t822 * tmp;
		tmp = (t822 *)il2cpp_codegen_object_new (&t822_TI);
		m3687(tmp, il2cpp_codegen_string_new_wrapper("Unity.RuntimeTests"), &m3687_MI);
		cache->attributes[12] = (Il2CppObject*)tmp;
	}
	{
		t822 * tmp;
		tmp = (t822 *)il2cpp_codegen_object_new (&t822_TI);
		m3687(tmp, il2cpp_codegen_string_new_wrapper("Unity.IntegrationTests.Framework"), &m3687_MI);
		cache->attributes[13] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache g_UnityEngine_Assembly__CustomAttributeCache = {
14,
NULL,
&g_UnityEngine_Assembly_CustomAttributesCacheGenerator
};
