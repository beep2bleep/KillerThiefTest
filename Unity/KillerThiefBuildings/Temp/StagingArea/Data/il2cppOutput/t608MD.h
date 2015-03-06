#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t608;
struct t608_marshaled;

void t608_marshal(const t608& unmarshaled, t608_marshaled& marshaled);
void t608_marshal_back(const t608_marshaled& marshaled, t608& unmarshaled);
void t608_marshal_cleanup(t608_marshaled& marshaled);
