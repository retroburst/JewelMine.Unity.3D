#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t587;
struct t587_marshaled;

 void m3223 (t587 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
void t587_marshal(const t587& unmarshaled, t587_marshaled& marshaled);
void t587_marshal_back(const t587_marshaled& marshaled, t587& unmarshaled);
void t587_marshal_cleanup(t587_marshaled& marshaled);
