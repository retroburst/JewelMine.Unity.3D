#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t660;
struct t660_marshaled;

void t660_marshal(const t660& unmarshaled, t660_marshaled& marshaled);
void t660_marshal_back(const t660_marshaled& marshaled, t660& unmarshaled);
void t660_marshal_cleanup(t660_marshaled& marshaled);
