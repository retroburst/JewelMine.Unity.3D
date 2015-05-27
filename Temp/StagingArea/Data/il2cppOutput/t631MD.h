#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t631;
struct t631_marshaled;

void t631_marshal(const t631& unmarshaled, t631_marshaled& marshaled);
void t631_marshal_back(const t631_marshaled& marshaled, t631& unmarshaled);
void t631_marshal_cleanup(t631_marshaled& marshaled);
