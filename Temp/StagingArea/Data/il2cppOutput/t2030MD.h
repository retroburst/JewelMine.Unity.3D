#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2030;
struct t2030_marshaled;

void t2030_marshal(const t2030& unmarshaled, t2030_marshaled& marshaled);
void t2030_marshal_back(const t2030_marshaled& marshaled, t2030& unmarshaled);
void t2030_marshal_cleanup(t2030_marshaled& marshaled);
