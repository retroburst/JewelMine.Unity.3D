#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2027;
struct t2027_marshaled;

void t2027_marshal(const t2027& unmarshaled, t2027_marshaled& marshaled);
void t2027_marshal_back(const t2027_marshaled& marshaled, t2027& unmarshaled);
void t2027_marshal_cleanup(t2027_marshaled& marshaled);
