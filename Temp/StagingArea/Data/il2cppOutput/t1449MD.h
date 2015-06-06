#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t1449;
struct t1449_marshaled;
#include "t1380.h"

 void m6921 (t1449 * __this, int32_t p0, uint8_t* p1, uint8_t* p2, uint8_t* p3, uint8_t* p4, uint8_t* p5, bool p6, MethodInfo* method) IL2CPP_METHOD_ATTR;
void t1449_marshal(const t1449& unmarshaled, t1449_marshaled& marshaled);
void t1449_marshal_back(const t1449_marshaled& marshaled, t1449& unmarshaled);
void t1449_marshal_cleanup(t1449_marshaled& marshaled);
