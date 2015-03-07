#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t907;
struct t907_marshaled;

void t907_marshal(const t907& unmarshaled, t907_marshaled& marshaled);
void t907_marshal_back(const t907_marshaled& marshaled, t907& unmarshaled);
void t907_marshal_cleanup(t907_marshaled& marshaled);
