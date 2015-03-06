#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t481;
struct t481_marshaled;

void t481_marshal(const t481& unmarshaled, t481_marshaled& marshaled);
void t481_marshal_back(const t481_marshaled& marshaled, t481& unmarshaled);
void t481_marshal_cleanup(t481_marshaled& marshaled);
