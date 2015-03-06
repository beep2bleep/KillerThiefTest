#pragma once
#include <stdint.h>
#include "t4.h"
#include "t50.h"
struct t23  : public t4
{
	int32_t f0;
	t50 f1;
};
// Native definition for marshalling of: UnityEngine.Object
struct t23_marshaled
{
	int32_t f0;
	t50 f1;
};
