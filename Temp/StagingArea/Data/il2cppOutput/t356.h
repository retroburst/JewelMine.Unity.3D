#pragma once
#include <stdint.h>
struct t210;
struct t5;
struct t355;
#include "t5.h"
#include "t102.h"
#include "t323.h"
struct t356  : public t5
{
	t210 * f0;
	t102  f1;
	t323  f2;
	float f3;
	int32_t f4;
	t5 * f5;
	t210 * f6;
	t355 * f7;
};
