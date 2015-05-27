#pragma once
#include <stdint.h>
#include "t587.h"
#include "t124.h"
struct t360  : public t587
{
	t124 f0;
};
// Native definition for marshalling of: UnityEngine.Coroutine
struct t360_marshaled
{
	t124 f0;
};
