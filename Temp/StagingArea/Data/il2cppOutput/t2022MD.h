#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2022;
struct t2022_marshaled;

void t2022_marshal(const t2022& unmarshaled, t2022_marshaled& marshaled);
void t2022_marshal_back(const t2022_marshaled& marshaled, t2022& unmarshaled);
void t2022_marshal_cleanup(t2022_marshaled& marshaled);
