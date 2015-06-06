#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t580;
struct t580_marshaled;

 void m3114 (t580 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m3115 (t580 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m3116 (t580 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
void t580_marshal(const t580& unmarshaled, t580_marshaled& marshaled);
void t580_marshal_back(const t580_marshaled& marshaled, t580& unmarshaled);
void t580_marshal_cleanup(t580_marshaled& marshaled);
