#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t770;
struct t770_marshaled;

 void m3918 (t770 * __this, bool p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
void t770_marshal(const t770& unmarshaled, t770_marshaled& marshaled);
void t770_marshal_back(const t770_marshaled& marshaled, t770& unmarshaled);
void t770_marshal_cleanup(t770_marshaled& marshaled);
