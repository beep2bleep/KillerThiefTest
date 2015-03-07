#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t482;
struct t482_marshaled;

void t482_marshal(const t482& unmarshaled, t482_marshaled& marshaled);
void t482_marshal_back(const t482_marshaled& marshaled, t482& unmarshaled);
void t482_marshal_cleanup(t482_marshaled& marshaled);
