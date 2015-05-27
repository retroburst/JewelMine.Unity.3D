#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2028;
struct t2028_marshaled;

void t2028_marshal(const t2028& unmarshaled, t2028_marshaled& marshaled);
void t2028_marshal_back(const t2028_marshaled& marshaled, t2028& unmarshaled);
void t2028_marshal_cleanup(t2028_marshaled& marshaled);
