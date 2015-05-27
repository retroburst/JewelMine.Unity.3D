#pragma once
#include <stdint.h>
struct t11;
struct t321;
struct t521;
#include "t5.h"
struct t521  : public t5
{
	t11* f0;
	t321 * f1;
	t11* f2;
};
struct t521_SFs{
	t521 * f3;
	t521 * f4;
	t521 * f5;
	t521 * f6;
};
