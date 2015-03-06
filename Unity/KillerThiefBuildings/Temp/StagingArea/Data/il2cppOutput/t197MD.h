#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t197;
struct t197_marshaled;

 void m2054 (t197 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m2055 (t197 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m2056 (t197 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
void t197_marshal(const t197& unmarshaled, t197_marshaled& marshaled);
void t197_marshal_back(const t197_marshaled& marshaled, t197& unmarshaled);
void t197_marshal_cleanup(t197_marshaled& marshaled);
