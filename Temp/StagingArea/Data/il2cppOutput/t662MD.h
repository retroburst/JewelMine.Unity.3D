#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t662;
struct t662_marshaled;
struct t11;

 t11* m3314 (t662 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m3315 (t662 * __this, t11* p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 t11* m3316 (t662 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m3317 (t662 * __this, t11* p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
void t662_marshal(const t662& unmarshaled, t662_marshaled& marshaled);
void t662_marshal_back(const t662_marshaled& marshaled, t662& unmarshaled);
void t662_marshal_cleanup(t662_marshaled& marshaled);
