#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2031;
struct t2031_marshaled;

void t2031_marshal(const t2031& unmarshaled, t2031_marshaled& marshaled);
void t2031_marshal_back(const t2031_marshaled& marshaled, t2031& unmarshaled);
void t2031_marshal_cleanup(t2031_marshaled& marshaled);
