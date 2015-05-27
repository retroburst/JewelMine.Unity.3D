#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2020;
struct t2020_marshaled;

void t2020_marshal(const t2020& unmarshaled, t2020_marshaled& marshaled);
void t2020_marshal_back(const t2020_marshaled& marshaled, t2020& unmarshaled);
void t2020_marshal_cleanup(t2020_marshaled& marshaled);
