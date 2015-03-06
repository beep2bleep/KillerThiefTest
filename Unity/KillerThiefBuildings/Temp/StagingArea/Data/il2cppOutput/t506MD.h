#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t506;
struct t506_marshaled;
struct t507;

 void m2621 (t506 * __this, t507* p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m2622 (t506 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m2623 (t506 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m2624 (t506 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m2625 (t506 * __this, t507* p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
void t506_marshal(const t506& unmarshaled, t506_marshaled& marshaled);
void t506_marshal_back(const t506_marshaled& marshaled, t506& unmarshaled);
void t506_marshal_cleanup(t506_marshaled& marshaled);
