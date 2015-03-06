#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t23;
struct t23_marshaled;
struct t8;
struct t4;
#include "t375.h"
#include "t19.h"
#include "t22.h"
#include "t50.h"

 void m2523 (t23 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
 t23 * m2524 (t4 * __this, t23 * p0, t19  p1, t22  p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
 t23 * m2525 (t4 * __this, t23 * p0, t19 * p1, t22 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m2526 (t4 * __this, t23 * p0, float p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m1800 (t4 * __this, t23 * p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m2527 (t4 * __this, t23 * p0, bool p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m1801 (t4 * __this, t23 * p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 t8* m1354 (t23 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m1890 (t23 * __this, t8* p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m1754 (t23 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 t8* m45 (t23 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
 bool m43 (t23 * __this, t4 * p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 int32_t m44 (t23 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
 bool m2528 (t4 * __this, t23 * p0, t23 * p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
 bool m2529 (t4 * __this, t23 * p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 int32_t m2530 (t23 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
 t50 m2531 (t23 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
 t23 * m40 (t4 * __this, t23 * p0, t19  p1, t22  p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m2532 (t4 * __this, t4 * p0, t8* p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
 bool m1271 (t4 * __this, t23 * p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 bool m1275 (t4 * __this, t23 * p0, t23 * p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
 bool m1278 (t4 * __this, t23 * p0, t23 * p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
void t23_marshal(const t23& unmarshaled, t23_marshaled& marshaled);
void t23_marshal_back(const t23_marshaled& marshaled, t23& unmarshaled);
void t23_marshal_cleanup(t23_marshaled& marshaled);
