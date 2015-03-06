#pragma once
#include <stdint.h>
struct t4;
struct t128;
#include "t4.h"
struct t127  : public t4
{
	float f0;
	float f1;
	int32_t f2;
	t4 * f3;
	t128 * f4;
};
