#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t510;
struct t510_marshaled;

void t510_marshal(const t510& unmarshaled, t510_marshaled& marshaled);
void t510_marshal_back(const t510_marshaled& marshaled, t510& unmarshaled);
void t510_marshal_cleanup(t510_marshaled& marshaled);
