#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t1164;
struct t1164_marshaled;

void t1164_marshal(const t1164& unmarshaled, t1164_marshaled& marshaled);
void t1164_marshal_back(const t1164_marshaled& marshaled, t1164& unmarshaled);
void t1164_marshal_cleanup(t1164_marshaled& marshaled);
