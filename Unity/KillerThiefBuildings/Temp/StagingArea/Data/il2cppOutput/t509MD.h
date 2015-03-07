#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t509;
struct t509_marshaled;
struct t4;

 bool m2780 (t509 * __this, t4 * p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 int32_t m2781 (t509 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
 bool m2782 (t4 * __this, t509 * p0, t509 * p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
void t509_marshal(const t509& unmarshaled, t509_marshaled& marshaled);
void t509_marshal_back(const t509_marshaled& marshaled, t509& unmarshaled);
void t509_marshal_cleanup(t509_marshaled& marshaled);
