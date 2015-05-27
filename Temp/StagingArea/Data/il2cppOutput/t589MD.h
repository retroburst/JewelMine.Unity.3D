#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t589;
struct t589_marshaled;
struct t11;
struct t114;

 void m2718 (t589 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m2719 (t5 * __this, t589 * p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 t589 * m2720 (t5 * __this, t11* p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 t589 * m2721 (t5 * __this, t114 * p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 t589 * m2722 (t5 * __this, t114 * p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
void t589_marshal(const t589& unmarshaled, t589_marshaled& marshaled);
void t589_marshal_back(const t589_marshaled& marshaled, t589& unmarshaled);
void t589_marshal_cleanup(t589_marshaled& marshaled);
