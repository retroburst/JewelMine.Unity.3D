#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t360;
struct t360_marshaled;

 void m2716 (t360 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m2717 (t360 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m2718 (t360 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
void t360_marshal(const t360& unmarshaled, t360_marshaled& marshaled);
void t360_marshal_back(const t360_marshaled& marshaled, t360& unmarshaled);
void t360_marshal_cleanup(t360_marshaled& marshaled);
