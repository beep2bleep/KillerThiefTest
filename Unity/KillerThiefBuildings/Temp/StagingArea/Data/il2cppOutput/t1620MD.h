#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t1620;
struct t4;

 void m8095_gshared (t1620 * __this, MethodInfo* method);
#define m8095(__this, method) (void)m8095_gshared((t1620 *)__this, method)
 int32_t m8096_gshared (t1620 * __this, t4 * p0, MethodInfo* method);
#define m8096(__this, p0, method) (int32_t)m8096_gshared((t1620 *)__this, (t4 *)p0, method)
 bool m8097_gshared (t1620 * __this, t4 * p0, t4 * p1, MethodInfo* method);
#define m8097(__this, p0, p1, method) (bool)m8097_gshared((t1620 *)__this, (t4 *)p0, (t4 *)p1, method)
