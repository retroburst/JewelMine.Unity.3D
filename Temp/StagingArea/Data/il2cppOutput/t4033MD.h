#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t4033;
struct t5;
struct t221;
struct t222;
#include "t124.h"

 void m22886_gshared (t4033 * __this, t5 * p0, t124 p1, MethodInfo* method);
#define m22886(__this, p0, p1, method) (void)m22886_gshared((t4033 *)__this, (t5 *)p0, (t124)p1, method)
 t5 * m22887_gshared (t4033 * __this, MethodInfo* method);
#define m22887(__this, method) (t5 *)m22887_gshared((t4033 *)__this, method)
 t5 * m22888_gshared (t4033 * __this, t222 * p0, t5 * p1, MethodInfo* method);
#define m22888(__this, p0, p1, method) (t5 *)m22888_gshared((t4033 *)__this, (t222 *)p0, (t5 *)p1, method)
 t5 * m22889_gshared (t4033 * __this, t5 * p0, MethodInfo* method);
#define m22889(__this, p0, method) (t5 *)m22889_gshared((t4033 *)__this, (t5 *)p0, method)
