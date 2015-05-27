#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2029;
struct t2029_marshaled;

void t2029_marshal(const t2029& unmarshaled, t2029_marshaled& marshaled);
void t2029_marshal_back(const t2029_marshaled& marshaled, t2029& unmarshaled);
void t2029_marshal_cleanup(t2029_marshaled& marshaled);
