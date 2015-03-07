#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t201;
struct t201_marshaled;

 void m2073 (t201 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m2074 (t201 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m2075 (t201 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
void t201_marshal(const t201& unmarshaled, t201_marshaled& marshaled);
void t201_marshal_back(const t201_marshaled& marshaled, t201& unmarshaled);
void t201_marshal_cleanup(t201_marshaled& marshaled);
