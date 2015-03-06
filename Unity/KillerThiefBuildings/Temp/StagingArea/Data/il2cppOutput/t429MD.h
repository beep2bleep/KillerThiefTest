#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t429;
struct t429_marshaled;

 void m2451 (t429 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m2452 (t429 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m2453 (t429 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
void t429_marshal(const t429& unmarshaled, t429_marshaled& marshaled);
void t429_marshal_back(const t429_marshaled& marshaled, t429& unmarshaled);
void t429_marshal_cleanup(t429_marshaled& marshaled);
