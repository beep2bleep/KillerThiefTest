#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t799;
struct t799_marshaled;

void t799_marshal(const t799& unmarshaled, t799_marshaled& marshaled);
void t799_marshal_back(const t799_marshaled& marshaled, t799& unmarshaled);
void t799_marshal_cleanup(t799_marshaled& marshaled);
