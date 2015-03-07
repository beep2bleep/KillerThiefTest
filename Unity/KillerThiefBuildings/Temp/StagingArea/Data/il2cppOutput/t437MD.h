#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t437;
struct t437_marshaled;

 void m2580 (t437 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
void t437_marshal(const t437& unmarshaled, t437_marshaled& marshaled);
void t437_marshal_back(const t437_marshaled& marshaled, t437& unmarshaled);
void t437_marshal_cleanup(t437_marshaled& marshaled);
