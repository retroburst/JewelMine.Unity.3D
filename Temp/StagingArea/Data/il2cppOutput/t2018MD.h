#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2018;
struct t2018_marshaled;

void t2018_marshal(const t2018& unmarshaled, t2018_marshaled& marshaled);
void t2018_marshal_back(const t2018_marshaled& marshaled, t2018& unmarshaled);
void t2018_marshal_cleanup(t2018_marshaled& marshaled);
