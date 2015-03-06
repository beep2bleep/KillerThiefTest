#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t436;
struct t436_marshaled;

 void m2560 (t436 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
void t436_marshal(const t436& unmarshaled, t436_marshaled& marshaled);
void t436_marshal_back(const t436_marshaled& marshaled, t436& unmarshaled);
void t436_marshal_cleanup(t436_marshaled& marshaled);
