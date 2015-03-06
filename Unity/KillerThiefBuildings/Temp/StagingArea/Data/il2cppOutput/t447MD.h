#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t447;
struct t447_marshaled;

 void m2098 (t447 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m2099 (t447 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m2100 (t447 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m2101 (t447 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
void t447_marshal(const t447& unmarshaled, t447_marshaled& marshaled);
void t447_marshal_back(const t447_marshaled& marshaled, t447& unmarshaled);
void t447_marshal_cleanup(t447_marshaled& marshaled);
