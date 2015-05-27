#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t658;
struct t658_marshaled;
struct t5;

 bool m3426 (t658 * __this, t5 * p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 int32_t m3427 (t658 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
 bool m3428 (t5 * __this, t658 * p0, t658 * p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
void t658_marshal(const t658& unmarshaled, t658_marshaled& marshaled);
void t658_marshal_back(const t658_marshaled& marshaled, t658& unmarshaled);
void t658_marshal_cleanup(t658_marshaled& marshaled);
