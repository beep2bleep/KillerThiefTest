#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t365;
struct t365_marshaled;

 void m1683 (t365 * __this, float p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
void t365_marshal(const t365& unmarshaled, t365_marshaled& marshaled);
void t365_marshal_back(const t365_marshaled& marshaled, t365& unmarshaled);
void t365_marshal_cleanup(t365_marshaled& marshaled);
