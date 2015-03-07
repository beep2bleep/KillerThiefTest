#pragma once
#include <stdint.h>
struct t4;
#include "t4.h"
#include "t123.h"
struct t2032  : public t4
{
	t123  f0;
	float f1;
	float f2;
	int32_t f3;
	t4 * f4;
	t123  f5;
};
