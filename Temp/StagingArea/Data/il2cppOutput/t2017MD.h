#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2017;
struct t2017_marshaled;

void t2017_marshal(const t2017& unmarshaled, t2017_marshaled& marshaled);
void t2017_marshal_back(const t2017_marshaled& marshaled, t2017& unmarshaled);
void t2017_marshal_cleanup(t2017_marshaled& marshaled);
