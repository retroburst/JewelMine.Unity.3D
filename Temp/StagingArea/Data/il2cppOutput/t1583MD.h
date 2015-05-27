#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t1583;
struct t1583_marshaled;

void t1583_marshal(const t1583& unmarshaled, t1583_marshaled& marshaled);
void t1583_marshal_back(const t1583_marshaled& marshaled, t1583& unmarshaled);
void t1583_marshal_cleanup(t1583_marshaled& marshaled);
