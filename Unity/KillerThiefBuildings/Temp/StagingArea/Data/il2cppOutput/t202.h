#pragma once
#include <stdint.h>
struct t202;
struct t202_marshaled;
struct t474;
#include "t4.h"
#include "t56.h"
struct t202  : public t4
{
	t56 f0;
};
struct t202_SFs{
	t202 * f1;
	t202 * f2;
	t474 * f3;
};
// Native definition for marshalling of: UnityEngine.Event
struct t202_marshaled
{
	t56 f0;
};
