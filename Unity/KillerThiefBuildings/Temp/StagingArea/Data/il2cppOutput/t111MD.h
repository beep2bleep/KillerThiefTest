#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t111;
struct t111_marshaled;
#include "t102.h"
#include "t313.h"

 int32_t m1406 (t111 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
 t102  m1408 (t111 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
 int32_t m1407 (t111 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
void t111_marshal(const t111& unmarshaled, t111_marshaled& marshaled);
void t111_marshal_back(const t111_marshaled& marshaled, t111& unmarshaled);
void t111_marshal_cleanup(t111_marshaled& marshaled);
