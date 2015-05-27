#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t1068;
struct t1068_marshaled;
struct t11;
#include "t1074.h"

 void m4187 (t1068 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 int32_t m4188 (t1068 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m4189 (t1068 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m4190 (t1068 * __this, t11* p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 t11* m4191 (t5 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
void t1068_marshal(const t1068& unmarshaled, t1068_marshaled& marshaled);
void t1068_marshal_back(const t1068_marshaled& marshaled, t1068& unmarshaled);
void t1068_marshal_cleanup(t1068_marshaled& marshaled);
