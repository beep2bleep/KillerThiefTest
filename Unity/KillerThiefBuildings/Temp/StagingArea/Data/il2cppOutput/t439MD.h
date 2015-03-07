#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t439;
struct t439_marshaled;
struct t8;
struct t294;

 void m2076 (t439 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m2077 (t4 * __this, t439 * p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 t439 * m2078 (t4 * __this, t8* p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 t439 * m2079 (t4 * __this, t294 * p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 t439 * m2080 (t4 * __this, t294 * p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
void t439_marshal(const t439& unmarshaled, t439_marshaled& marshaled);
void t439_marshal_back(const t439_marshaled& marshaled, t439& unmarshaled);
void t439_marshal_cleanup(t439_marshaled& marshaled);
