#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t1351;
struct t1351_marshaled;

void t1351_marshal(const t1351& unmarshaled, t1351_marshaled& marshaled);
void t1351_marshal_back(const t1351_marshaled& marshaled, t1351& unmarshaled);
void t1351_marshal_cleanup(t1351_marshaled& marshaled);
