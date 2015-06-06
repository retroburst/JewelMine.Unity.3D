#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t1450;
struct t1450_marshaled;

 void m6922 (t1450 * __this, bool p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
void t1450_marshal(const t1450& unmarshaled, t1450_marshaled& marshaled);
void t1450_marshal_back(const t1450_marshaled& marshaled, t1450& unmarshaled);
void t1450_marshal_cleanup(t1450_marshaled& marshaled);
