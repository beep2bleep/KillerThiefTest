#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t22;
struct t22_marshaled;
struct t8;
struct t4;
#include "t376.h"
#include "t23.h"
#include "t25.h"
#include "t56.h"

 void m2544 (t22 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
 t22 * m2545 (t4 * __this, t22 * p0, t23  p1, t25  p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
 t22 * m2546 (t4 * __this, t22 * p0, t23 * p1, t25 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m2547 (t4 * __this, t22 * p0, float p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m41 (t4 * __this, t22 * p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m2548 (t4 * __this, t22 * p0, bool p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m1820 (t4 * __this, t22 * p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 t8* m1377 (t22 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m1909 (t22 * __this, t8* p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m1775 (t22 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 t8* m63 (t22 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
 bool m61 (t22 * __this, t4 * p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 int32_t m62 (t22 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
 bool m2549 (t4 * __this, t22 * p0, t22 * p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
 bool m2550 (t4 * __this, t22 * p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 int32_t m2551 (t22 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
 t56 m2552 (t22 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
 t22 * m56 (t4 * __this, t22 * p0, t23  p1, t25  p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m2553 (t4 * __this, t4 * p0, t8* p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
 bool m1295 (t4 * __this, t22 * p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 bool m1299 (t4 * __this, t22 * p0, t22 * p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
 bool m1302 (t4 * __this, t22 * p0, t22 * p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
void t22_marshal(const t22& unmarshaled, t22_marshaled& marshaled);
void t22_marshal_back(const t22_marshaled& marshaled, t22& unmarshaled);
void t22_marshal_cleanup(t22_marshaled& marshaled);
