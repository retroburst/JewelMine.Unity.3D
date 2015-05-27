#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t1347;
struct t1347_marshaled;

void t1347_marshal(const t1347& unmarshaled, t1347_marshaled& marshaled);
void t1347_marshal_back(const t1347_marshaled& marshaled, t1347& unmarshaled);
void t1347_marshal_cleanup(t1347_marshaled& marshaled);
