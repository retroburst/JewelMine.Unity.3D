#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
extern TypeInfo t201_TI;
#include "t201.h"
#include "t201MD.h"
extern MethodInfo m754_MI;
extern MethodInfo m755_MI;
extern TypeInfo t151_TI;
#include "t151.h"
#include "t151MD.h"
extern MethodInfo m566_MI;
void g_AssemblyU2DCSharp_Assembly_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t201 * tmp;
		tmp = (t201 *)il2cpp_codegen_object_new (&t201_TI);
		m754(tmp, &m754_MI);
		m755(tmp, true, &m755_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t151 * tmp;
		tmp = (t151 *)il2cpp_codegen_object_new (&t151_TI);
		m566(tmp, &m566_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache g_AssemblyU2DCSharp_Assembly__CustomAttributeCache = {
2,
NULL,
&g_AssemblyU2DCSharp_Assembly_CustomAttributesCacheGenerator
};
