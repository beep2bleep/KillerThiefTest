#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t511;
struct t511_marshaled;

void t511_marshal(const t511& unmarshaled, t511_marshaled& marshaled);
void t511_marshal_back(const t511_marshaled& marshaled, t511& unmarshaled);
void t511_marshal_cleanup(t511_marshaled& marshaled);
