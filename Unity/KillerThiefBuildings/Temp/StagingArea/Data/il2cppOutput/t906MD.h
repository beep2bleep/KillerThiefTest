#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t906;
struct t906_marshaled;

void t906_marshal(const t906& unmarshaled, t906_marshaled& marshaled);
void t906_marshal_back(const t906_marshaled& marshaled, t906& unmarshaled);
void t906_marshal_cleanup(t906_marshaled& marshaled);
