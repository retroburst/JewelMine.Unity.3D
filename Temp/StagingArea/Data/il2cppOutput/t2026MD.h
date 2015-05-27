#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2026;
struct t2026_marshaled;

void t2026_marshal(const t2026& unmarshaled, t2026_marshaled& marshaled);
void t2026_marshal_back(const t2026_marshaled& marshaled, t2026& unmarshaled);
void t2026_marshal_cleanup(t2026_marshaled& marshaled);
