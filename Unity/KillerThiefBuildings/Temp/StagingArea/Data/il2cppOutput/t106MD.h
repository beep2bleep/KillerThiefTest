#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t106;
struct t106_marshaled;
#include "t96.h"
#include "t309.h"

 int32_t m1384 (t106 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
 t96  m1386 (t106 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
 int32_t m1385 (t106 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
void t106_marshal(const t106& unmarshaled, t106_marshaled& marshaled);
void t106_marshal_back(const t106_marshaled& marshaled, t106& unmarshaled);
void t106_marshal_cleanup(t106_marshaled& marshaled);
