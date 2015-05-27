#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2016;
struct t2016_marshaled;

void t2016_marshal(const t2016& unmarshaled, t2016_marshaled& marshaled);
void t2016_marshal_back(const t2016_marshaled& marshaled, t2016& unmarshaled);
void t2016_marshal_cleanup(t2016_marshaled& marshaled);
