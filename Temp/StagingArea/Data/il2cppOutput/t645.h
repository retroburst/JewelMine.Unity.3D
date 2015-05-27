#pragma once
#include <stdint.h>
struct t3601;
#include "t5.h"
struct t645  : public t5
{
	t3601* f1;
	int32_t f2;
	int32_t f3;
};
struct t645_SFs{
	int32_t f0;
	t3601* f4;
};
