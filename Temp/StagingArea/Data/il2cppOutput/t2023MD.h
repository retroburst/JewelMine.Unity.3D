#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2023;
struct t2023_marshaled;

void t2023_marshal(const t2023& unmarshaled, t2023_marshaled& marshaled);
void t2023_marshal_back(const t2023_marshaled& marshaled, t2023& unmarshaled);
void t2023_marshal_cleanup(t2023_marshaled& marshaled);
