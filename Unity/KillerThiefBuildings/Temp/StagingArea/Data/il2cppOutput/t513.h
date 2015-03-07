#pragma once
#include <stdint.h>
struct t8;
#include "t101.h"
#include "t512.h"
struct t513 
{
	t8* f0;
	t8* f1;
	t512  f2;
};
// Native definition for marshalling of: UnityEngine.HumanBone
struct t513_marshaled
{
	char* f0;
	char* f1;
	t512  f2;
};
