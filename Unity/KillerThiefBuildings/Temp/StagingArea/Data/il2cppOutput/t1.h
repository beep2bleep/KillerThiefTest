#pragma once
#include <stdint.h>
struct t2;
struct t3;
#include "t4.h"
struct t1  : public t4
{
	int32_t f0;
	t2 * f1;
	t3 * f2;
};
