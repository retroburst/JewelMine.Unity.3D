#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2034;
struct t2034_marshaled;

void t2034_marshal(const t2034& unmarshaled, t2034_marshaled& marshaled);
void t2034_marshal_back(const t2034_marshaled& marshaled, t2034& unmarshaled);
void t2034_marshal_cleanup(t2034_marshaled& marshaled);
