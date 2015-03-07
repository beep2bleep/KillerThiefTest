#pragma once
#include <stdint.h>
#include "t101.h"
#include "t102.h"
#include "t313.h"
struct t111 
{
	int32_t f0;
	t102  f1;
	t102  f2;
	t102  f3;
	float f4;
	int32_t f5;
	int32_t f6;
};
// Native definition for marshalling of: UnityEngine.Touch
struct t111_marshaled
{
	int32_t f0;
	t102  f1;
	t102  f2;
	t102  f3;
	float f4;
	int32_t f5;
	int32_t f6;
};
