#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t430;
struct t430_marshaled;

 void m2470 (t430 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m2471 (t430 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m2472 (t430 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
void t430_marshal(const t430& unmarshaled, t430_marshaled& marshaled);
void t430_marshal_back(const t430_marshaled& marshaled, t430& unmarshaled);
void t430_marshal_cleanup(t430_marshaled& marshaled);
