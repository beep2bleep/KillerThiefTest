#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t508;
struct t508_marshaled;
struct t4;

 bool m2760 (t508 * __this, t4 * p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 int32_t m2761 (t508 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
 bool m2762 (t4 * __this, t508 * p0, t508 * p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
void t508_marshal(const t508& unmarshaled, t508_marshaled& marshaled);
void t508_marshal_back(const t508_marshaled& marshaled, t508& unmarshaled);
void t508_marshal_cleanup(t508_marshaled& marshaled);
