#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t798;
struct t798_marshaled;

void t798_marshal(const t798& unmarshaled, t798_marshaled& marshaled);
void t798_marshal_back(const t798_marshaled& marshaled, t798& unmarshaled);
void t798_marshal_cleanup(t798_marshaled& marshaled);
