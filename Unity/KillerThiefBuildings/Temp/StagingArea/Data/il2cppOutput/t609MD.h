#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t609;
struct t609_marshaled;

void t609_marshal(const t609& unmarshaled, t609_marshaled& marshaled);
void t609_marshal_back(const t609_marshaled& marshaled, t609& unmarshaled);
void t609_marshal_cleanup(t609_marshaled& marshaled);
