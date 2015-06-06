#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
extern TypeInfo t573_TI;
#include "t573.h"
#include "t573MD.h"
extern MethodInfo m2696_MI;
extern TypeInfo t569_TI;
#include "t569.h"
#include "t569MD.h"
extern MethodInfo m2692_MI;
extern TypeInfo t572_TI;
#include "t572.h"
#include "t572MD.h"
extern MethodInfo m2695_MI;
extern TypeInfo t568_TI;
#include "t568.h"
#include "t568MD.h"
extern MethodInfo m2691_MI;
extern TypeInfo t974_TI;
#include "t974.h"
#include "t974MD.h"
extern MethodInfo m3843_MI;
extern TypeInfo t571_TI;
#include "t571.h"
#include "t571MD.h"
extern MethodInfo m2694_MI;
extern TypeInfo t576_TI;
#include "t576.h"
#include "t576MD.h"
extern MethodInfo m2699_MI;
extern TypeInfo t201_TI;
#include "t201.h"
#include "t201MD.h"
extern MethodInfo m754_MI;
extern MethodInfo m755_MI;
extern TypeInfo t822_TI;
#include "t822.h"
#include "t822MD.h"
extern MethodInfo m3687_MI;
extern TypeInfo t972_TI;
#include "t972.h"
#include "t972MD.h"
extern MethodInfo m3841_MI;
extern TypeInfo t973_TI;
#include "t973.h"
#include "t973MD.h"
extern MethodInfo m3842_MI;
extern TypeInfo t975_TI;
#include "t975.h"
#include "t975MD.h"
extern MethodInfo m3844_MI;
void g_Mono_Security_Assembly_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t5 *) * cache->count, 0);
	{
		t573 * tmp;
		tmp = (t573 *)il2cpp_codegen_object_new (&t573_TI);
		m2696(tmp, il2cpp_codegen_string_new_wrapper("(c) 2003-2004 Various Authors"), &m2696_MI);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		t569 * tmp;
		tmp = (t569 *)il2cpp_codegen_object_new (&t569_TI);
		m2692(tmp, il2cpp_codegen_string_new_wrapper("Mono.Security.dll"), &m2692_MI);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		t572 * tmp;
		tmp = (t572 *)il2cpp_codegen_object_new (&t572_TI);
		m2695(tmp, il2cpp_codegen_string_new_wrapper("MONO CLI"), &m2695_MI);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
	{
		t568 * tmp;
		tmp = (t568 *)il2cpp_codegen_object_new (&t568_TI);
		m2691(tmp, il2cpp_codegen_string_new_wrapper("Mono.Security.dll"), &m2691_MI);
		cache->attributes[3] = (Il2CppObject*)tmp;
	}
	{
		t974 * tmp;
		tmp = (t974 *)il2cpp_codegen_object_new (&t974_TI);
		m3843(tmp, true, &m3843_MI);
		cache->attributes[4] = (Il2CppObject*)tmp;
	}
	{
		t571 * tmp;
		tmp = (t571 *)il2cpp_codegen_object_new (&t571_TI);
		m2694(tmp, il2cpp_codegen_string_new_wrapper("MONO development team"), &m2694_MI);
		cache->attributes[5] = (Il2CppObject*)tmp;
	}
	{
		t576 * tmp;
		tmp = (t576 *)il2cpp_codegen_object_new (&t576_TI);
		m2699(tmp, false, &m2699_MI);
		cache->attributes[6] = (Il2CppObject*)tmp;
	}
	{
		t201 * tmp;
		tmp = (t201 *)il2cpp_codegen_object_new (&t201_TI);
		m754(tmp, &m754_MI);
		m755(tmp, true, &m755_MI);
		cache->attributes[7] = (Il2CppObject*)tmp;
	}
	{
		t822 * tmp;
		tmp = (t822 *)il2cpp_codegen_object_new (&t822_TI);
		m3687(tmp, il2cpp_codegen_string_new_wrapper("System, PublicKey=00240000048000009400000006020000002400005253413100040000010001008D56C76F9E8649383049F383C44BE0EC204181822A6C31CF5EB7EF486944D032188EA1D3920763712CCB12D75FB77E9811149E6148E5D32FBAAB37611C1878DDC19E20EF135D0CB2CFF2BFEC3D115810C3D9069638FE4BE215DBF795861920E5AB6F7DB2E2CEEF136AC23D5DD2BF031700AEC232F6C6B1C785B4305C123B37AB"), &m3687_MI);
		cache->attributes[8] = (Il2CppObject*)tmp;
	}
	{
		t972 * tmp;
		tmp = (t972 *)il2cpp_codegen_object_new (&t972_TI);
		m3841(tmp, il2cpp_codegen_string_new_wrapper("../mono.pub"), &m3841_MI);
		cache->attributes[9] = (Il2CppObject*)tmp;
	}
	{
		t973 * tmp;
		tmp = (t973 *)il2cpp_codegen_object_new (&t973_TI);
		m3842(tmp, true, &m3842_MI);
		cache->attributes[10] = (Il2CppObject*)tmp;
	}
	{
		t975 * tmp;
		tmp = (t975 *)il2cpp_codegen_object_new (&t975_TI);
		m3844(tmp, il2cpp_codegen_string_new_wrapper("en-US"), &m3844_MI);
		cache->attributes[11] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache g_Mono_Security_Assembly__CustomAttributeCache = {
12,
NULL,
&g_Mono_Security_Assembly_CustomAttributesCacheGenerator
};
