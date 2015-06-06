#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t656;
struct t656_marshaled;
struct t657;

 void m3288 (t656 * __this, t657* p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m3289 (t656 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m3290 (t656 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m3291 (t656 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m3292 (t656 * __this, t657* p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
void t656_marshal(const t656& unmarshaled, t656_marshaled& marshaled);
void t656_marshal_back(const t656_marshaled& marshaled, t656& unmarshaled);
void t656_marshal_cleanup(t656_marshaled& marshaled);
