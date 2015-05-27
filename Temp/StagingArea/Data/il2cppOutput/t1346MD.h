#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t1346;
struct t1346_marshaled;

void t1346_marshal(const t1346& unmarshaled, t1346_marshaled& marshaled);
void t1346_marshal_back(const t1346_marshaled& marshaled, t1346& unmarshaled);
void t1346_marshal_cleanup(t1346_marshaled& marshaled);
