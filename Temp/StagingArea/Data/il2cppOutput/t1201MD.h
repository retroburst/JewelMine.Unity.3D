#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t1201;
struct t1201_marshaled;

void t1201_marshal(const t1201& unmarshaled, t1201_marshaled& marshaled);
void t1201_marshal_back(const t1201_marshaled& marshaled, t1201& unmarshaled);
void t1201_marshal_cleanup(t1201_marshaled& marshaled);
