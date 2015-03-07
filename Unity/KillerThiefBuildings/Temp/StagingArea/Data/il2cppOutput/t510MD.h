#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t510;
struct t510_marshaled;
struct t8;

 bool m2655 (t510 * __this, t8* p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 bool m2656 (t510 * __this, t8* p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 int32_t m2657 (t510 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
 int32_t m2658 (t510 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
 int32_t m2659 (t510 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
 float m2660 (t510 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
 bool m2661 (t510 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
 bool m2662 (t510 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
 bool m2663 (t510 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
void t510_marshal(const t510& unmarshaled, t510_marshaled& marshaled);
void t510_marshal_back(const t510_marshaled& marshaled, t510& unmarshaled);
void t510_marshal_cleanup(t510_marshaled& marshaled);
