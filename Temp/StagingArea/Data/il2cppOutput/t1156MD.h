#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t1156;
struct t1156_marshaled;
struct t11;

 void m4646 (t1156 * __this, t11* p0, t11* p1, int32_t p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
void t1156_marshal(const t1156& unmarshaled, t1156_marshaled& marshaled);
void t1156_marshal_back(const t1156_marshaled& marshaled, t1156& unmarshaled);
void t1156_marshal_cleanup(t1156_marshaled& marshaled);
