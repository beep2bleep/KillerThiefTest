#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t507;
struct t507_marshaled;
struct t508;

 void m2641 (t507 * __this, t508* p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m2642 (t507 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m2643 (t507 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m2644 (t507 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m2645 (t507 * __this, t508* p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
void t507_marshal(const t507& unmarshaled, t507_marshaled& marshaled);
void t507_marshal_back(const t507_marshaled& marshaled, t507& unmarshaled);
void t507_marshal_cleanup(t507_marshaled& marshaled);
