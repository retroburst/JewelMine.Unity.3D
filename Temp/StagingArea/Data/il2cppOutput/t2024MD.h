#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2024;
struct t2024_marshaled;

void t2024_marshal(const t2024& unmarshaled, t2024_marshaled& marshaled);
void t2024_marshal_back(const t2024_marshaled& marshaled, t2024& unmarshaled);
void t2024_marshal_cleanup(t2024_marshaled& marshaled);
