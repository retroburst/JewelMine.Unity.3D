#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2019;
struct t2019_marshaled;

void t2019_marshal(const t2019& unmarshaled, t2019_marshaled& marshaled);
void t2019_marshal_back(const t2019_marshaled& marshaled, t2019& unmarshaled);
void t2019_marshal_cleanup(t2019_marshaled& marshaled);
