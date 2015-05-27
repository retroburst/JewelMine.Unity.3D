#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t1199;
struct t1199_marshaled;

void t1199_marshal(const t1199& unmarshaled, t1199_marshaled& marshaled);
void t1199_marshal_back(const t1199_marshaled& marshaled, t1199& unmarshaled);
void t1199_marshal_cleanup(t1199_marshaled& marshaled);
