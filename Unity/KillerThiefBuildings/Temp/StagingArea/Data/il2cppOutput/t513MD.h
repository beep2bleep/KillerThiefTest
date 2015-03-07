#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t513;
struct t513_marshaled;
struct t8;

 t8* m2667 (t513 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m2668 (t513 * __this, t8* p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 t8* m2669 (t513 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m2670 (t513 * __this, t8* p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
void t513_marshal(const t513& unmarshaled, t513_marshaled& marshaled);
void t513_marshal_back(const t513_marshaled& marshaled, t513& unmarshaled);
void t513_marshal_cleanup(t513_marshaled& marshaled);
