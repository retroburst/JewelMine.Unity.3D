#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t1165;
struct t1165_marshaled;

void t1165_marshal(const t1165& unmarshaled, t1165_marshaled& marshaled);
void t1165_marshal_back(const t1165_marshaled& marshaled, t1165& unmarshaled);
void t1165_marshal_cleanup(t1165_marshaled& marshaled);
