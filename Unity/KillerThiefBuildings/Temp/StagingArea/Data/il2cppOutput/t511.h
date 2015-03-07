#pragma once
#include <stdint.h>
struct t8;
#include "t101.h"
#include "t23.h"
#include "t25.h"
struct t511 
{
	t8* f0;
	t23  f1;
	t25  f2;
	t23  f3;
	int32_t f4;
};
// Native definition for marshalling of: UnityEngine.SkeletonBone
struct t511_marshaled
{
	char* f0;
	t23  f1;
	t25  f2;
	t23  f3;
	int32_t f4;
};
