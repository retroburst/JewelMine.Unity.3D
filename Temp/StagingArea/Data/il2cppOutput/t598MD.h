#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t598;
struct t598_marshaled;

 void m2760 (t598 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m2761 (t598 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m2762 (t598 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m2763 (t598 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
void t598_marshal(const t598& unmarshaled, t598_marshaled& marshaled);
void t598_marshal_back(const t598_marshaled& marshaled, t598& unmarshaled);
void t598_marshal_cleanup(t598_marshaled& marshaled);
