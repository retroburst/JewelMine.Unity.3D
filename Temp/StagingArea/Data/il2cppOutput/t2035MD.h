#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2035;
struct t2035_marshaled;

void t2035_marshal(const t2035& unmarshaled, t2035_marshaled& marshaled);
void t2035_marshal_back(const t2035_marshaled& marshaled, t2035& unmarshaled);
void t2035_marshal_cleanup(t2035_marshaled& marshaled);
