#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t509;
struct t509_marshaled;
struct t8;

 bool m2635 (t509 * __this, t8* p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 bool m2636 (t509 * __this, t8* p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 int32_t m2637 (t509 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
 int32_t m2638 (t509 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
 int32_t m2639 (t509 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
 float m2640 (t509 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
 bool m2641 (t509 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
 bool m2642 (t509 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
 bool m2643 (t509 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
void t509_marshal(const t509& unmarshaled, t509_marshaled& marshaled);
void t509_marshal_back(const t509_marshaled& marshaled, t509& unmarshaled);
void t509_marshal_cleanup(t509_marshaled& marshaled);
