#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t1451;
struct t1451_marshaled;

void t1451_marshal(const t1451& unmarshaled, t1451_marshaled& marshaled);
void t1451_marshal_back(const t1451_marshaled& marshaled, t1451& unmarshaled);
void t1451_marshal_cleanup(t1451_marshaled& marshaled);
