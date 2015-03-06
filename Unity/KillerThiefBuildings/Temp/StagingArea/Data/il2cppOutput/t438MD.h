#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t438;
struct t438_marshaled;
struct t8;
struct t290;

 void m2057 (t438 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m2058 (t4 * __this, t438 * p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 t438 * m2059 (t4 * __this, t8* p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 t438 * m2060 (t4 * __this, t290 * p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 t438 * m2061 (t4 * __this, t290 * p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
void t438_marshal(const t438& unmarshaled, t438_marshaled& marshaled);
void t438_marshal_back(const t438_marshaled& marshaled, t438& unmarshaled);
void t438_marshal_cleanup(t438_marshaled& marshaled);
