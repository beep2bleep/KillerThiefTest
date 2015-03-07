#pragma once
#include <stdint.h>
struct t8;
struct t160;
struct t370;
#include "t4.h"
struct t370  : public t4
{
	t8* f0;
	t160 * f1;
	t8* f2;
};
struct t370_SFs{
	t370 * f3;
	t370 * f4;
	t370 * f5;
	t370 * f6;
};
