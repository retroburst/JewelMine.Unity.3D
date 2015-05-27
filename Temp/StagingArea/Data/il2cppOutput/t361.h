#pragma once
#include <stdint.h>
struct t361;
struct t361_marshaled;
struct t623;
#include "t5.h"
#include "t124.h"
struct t361  : public t5
{
	t124 f0;
};
struct t361_SFs{
	t361 * f1;
	t361 * f2;
	t623 * f3;
};
// Native definition for marshalling of: UnityEngine.Event
struct t361_marshaled
{
	t124 f0;
};
