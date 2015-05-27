#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t518;
struct t518_marshaled;

 void m2350 (t518 * __this, float p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
void t518_marshal(const t518& unmarshaled, t518_marshaled& marshaled);
void t518_marshal_back(const t518_marshaled& marshaled, t518& unmarshaled);
void t518_marshal_cleanup(t518_marshaled& marshaled);
