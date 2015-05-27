#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2033;
struct t2033_marshaled;

void t2033_marshal(const t2033& unmarshaled, t2033_marshaled& marshaled);
void t2033_marshal_back(const t2033_marshaled& marshaled, t2033& unmarshaled);
void t2033_marshal_cleanup(t2033_marshaled& marshaled);
