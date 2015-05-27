#pragma once
#include <stdint.h>
struct t2;
struct t3;
struct t4;
#include "t5.h"
struct t1  : public t5
{
	t2 * f0;
	t3 * f1;
	t4 * f2;
	bool f3;
	bool f4;
};
