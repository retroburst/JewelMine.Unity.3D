#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2032;
struct t2032_marshaled;

void t2032_marshal(const t2032& unmarshaled, t2032_marshaled& marshaled);
void t2032_marshal_back(const t2032_marshaled& marshaled, t2032& unmarshaled);
void t2032_marshal_cleanup(t2032_marshaled& marshaled);
