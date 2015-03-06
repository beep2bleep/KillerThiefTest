#pragma once
#include <stdint.h>
struct t8;
#include "t95.h"
#include "t511.h"
struct t512 
{
	t8* f0;
	t8* f1;
	t511  f2;
};
// Native definition for marshalling of: UnityEngine.HumanBone
struct t512_marshaled
{
	char* f0;
	char* f1;
	t511  f2;
};
