#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t805;
struct t805_marshaled;

void t805_marshal(const t805& unmarshaled, t805_marshaled& marshaled);
void t805_marshal_back(const t805_marshaled& marshaled, t805& unmarshaled);
void t805_marshal_cleanup(t805_marshaled& marshaled);
