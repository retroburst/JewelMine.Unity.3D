#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t842;
struct t842_marshaled;

void t842_marshal(const t842& unmarshaled, t842_marshaled& marshaled);
void t842_marshal_back(const t842_marshaled& marshaled, t842& unmarshaled);
void t842_marshal_cleanup(t842_marshaled& marshaled);
