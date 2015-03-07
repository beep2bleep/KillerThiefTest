#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t367;
struct t367_marshaled;

 void m1704 (t367 * __this, float p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
void t367_marshal(const t367& unmarshaled, t367_marshaled& marshaled);
void t367_marshal_back(const t367_marshaled& marshaled, t367& unmarshaled);
void t367_marshal_cleanup(t367_marshaled& marshaled);
