#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t771;
struct t771_marshaled;

void t771_marshal(const t771& unmarshaled, t771_marshaled& marshaled);
void t771_marshal_back(const t771_marshaled& marshaled, t771& unmarshaled);
void t771_marshal_cleanup(t771_marshaled& marshaled);
