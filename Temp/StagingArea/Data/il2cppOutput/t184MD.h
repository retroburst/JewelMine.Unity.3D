#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t184;
struct t184_marshaled;
#include "t102.h"
#include "t185.h"

 int32_t m2064 (t184 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
 t102  m711 (t184 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
 int32_t m710 (t184 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
void t184_marshal(const t184& unmarshaled, t184_marshaled& marshaled);
void t184_marshal_back(const t184_marshaled& marshaled, t184& unmarshaled);
void t184_marshal_cleanup(t184_marshaled& marshaled);
