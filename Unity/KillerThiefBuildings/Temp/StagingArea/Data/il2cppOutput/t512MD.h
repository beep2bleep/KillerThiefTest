#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t512;
struct t512_marshaled;
struct t8;

 t8* m2647 (t512 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m2648 (t512 * __this, t8* p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 t8* m2649 (t512 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m2650 (t512 * __this, t8* p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
void t512_marshal(const t512& unmarshaled, t512_marshaled& marshaled);
void t512_marshal_back(const t512_marshaled& marshaled, t512& unmarshaled);
void t512_marshal_cleanup(t512_marshaled& marshaled);
