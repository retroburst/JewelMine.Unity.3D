#pragma once
#include <stdint.h>
struct t604;
#include "t5.h"
#include "t323.h"
struct t612  : public t5
{
	float f0;
	float f1;
	float f2;
	float f3;
	t323  f4;
	int32_t f5;
	int32_t f6;
	t604 * f7;
};
struct t612_SFs{
	t323  f8;
	int32_t f9;
};
