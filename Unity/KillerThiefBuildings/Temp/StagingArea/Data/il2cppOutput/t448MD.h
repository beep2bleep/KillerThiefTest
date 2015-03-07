#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t448;
struct t448_marshaled;

 void m2117 (t448 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m2118 (t448 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m2119 (t448 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m2120 (t448 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
void t448_marshal(const t448& unmarshaled, t448_marshaled& marshaled);
void t448_marshal_back(const t448_marshaled& marshaled, t448& unmarshaled);
void t448_marshal_cleanup(t448_marshaled& marshaled);
