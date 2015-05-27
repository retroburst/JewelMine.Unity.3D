#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t1348;
struct t1348_marshaled;

void t1348_marshal(const t1348& unmarshaled, t1348_marshaled& marshaled);
void t1348_marshal_back(const t1348_marshaled& marshaled, t1348& unmarshaled);
void t1348_marshal_cleanup(t1348_marshaled& marshaled);
