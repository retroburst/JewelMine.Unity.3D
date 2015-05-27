#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2021;
struct t2021_marshaled;

void t2021_marshal(const t2021& unmarshaled, t2021_marshaled& marshaled);
void t2021_marshal_back(const t2021_marshaled& marshaled, t2021& unmarshaled);
void t2021_marshal_cleanup(t2021_marshaled& marshaled);
