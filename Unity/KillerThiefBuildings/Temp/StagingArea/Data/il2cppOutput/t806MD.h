#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t806;
struct t806_marshaled;

void t806_marshal(const t806& unmarshaled, t806_marshaled& marshaled);
void t806_marshal_back(const t806_marshaled& marshaled, t806& unmarshaled);
void t806_marshal_cleanup(t806_marshaled& marshaled);
