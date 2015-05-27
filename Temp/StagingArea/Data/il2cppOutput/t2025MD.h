#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2025;
struct t2025_marshaled;

void t2025_marshal(const t2025& unmarshaled, t2025_marshaled& marshaled);
void t2025_marshal_back(const t2025_marshaled& marshaled, t2025& unmarshaled);
void t2025_marshal_cleanup(t2025_marshaled& marshaled);
