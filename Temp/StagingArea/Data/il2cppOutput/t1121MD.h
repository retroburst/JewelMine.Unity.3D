#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t1121;
struct t1121_marshaled;

 int32_t m4429 (t1121 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m4430 (t1121 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 int32_t m4431 (t1121 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m4432 (t1121 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
void t1121_marshal(const t1121& unmarshaled, t1121_marshaled& marshaled);
void t1121_marshal_back(const t1121_marshaled& marshaled, t1121& unmarshaled);
void t1121_marshal_cleanup(t1121_marshaled& marshaled);
