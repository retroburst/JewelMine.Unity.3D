#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t1344;
struct t1344_marshaled;

void t1344_marshal(const t1344& unmarshaled, t1344_marshaled& marshaled);
void t1344_marshal_back(const t1344_marshaled& marshaled, t1344& unmarshaled);
void t1344_marshal_cleanup(t1344_marshaled& marshaled);
