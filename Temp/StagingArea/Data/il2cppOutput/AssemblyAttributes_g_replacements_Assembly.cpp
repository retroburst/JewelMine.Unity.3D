#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
extern TypeInfo t201_TI;
#include "t201.h"
#include "t201MD.h"
extern MethodInfo m753_MI;
extern MethodInfo m754_MI;
void g_replacements_Assembly_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t201 * tmp;
		tmp = (t201 *)il2cpp_codegen_object_new (&t201_TI);
		m753(tmp, &m753_MI);
		m754(tmp, true, &m754_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache g_replacements_Assembly__CustomAttributeCache = {
1,
NULL,
&g_replacements_Assembly_CustomAttributesCacheGenerator
};
