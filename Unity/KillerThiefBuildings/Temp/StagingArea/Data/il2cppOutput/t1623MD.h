#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t1623;
struct t4;

 void m8124_gshared (t1623 * __this, MethodInfo* method);
#define m8124(__this, method) (void)m8124_gshared((t1623 *)__this, method)
 int32_t m8125_gshared (t1623 * __this, t4 * p0, t4 * p1, MethodInfo* method);
#define m8125(__this, p0, p1, method) (int32_t)m8125_gshared((t1623 *)__this, (t4 *)p0, (t4 *)p1, method)
