#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t1345;
struct t1345_marshaled;

void t1345_marshal(const t1345& unmarshaled, t1345_marshaled& marshaled);
void t1345_marshal_back(const t1345_marshaled& marshaled, t1345& unmarshaled);
void t1345_marshal_cleanup(t1345_marshaled& marshaled);
