#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t76;
struct t4;
struct t20;
struct t1825;
struct t16;
struct t27;
struct t306;
struct t1826;
struct t1827;
struct t1824;
struct t1828;
struct t1829;
#include "t1830.h"

#include "t296MD.h"
#define m9885(__this, method) (void)m7910_gshared((t296 *)__this, method)
#define m1358(__this, p0, method) (void)m7912_gshared((t296 *)__this, (int32_t)p0, method)
#define m9886(__this, method) (void)m7914_gshared((t4 *)__this, method)
#define m9887(__this, method) (t4*)m7916_gshared((t296 *)__this, method)
#define m9888(__this, p0, p1, method) (void)m7918_gshared((t296 *)__this, (t16 *)p0, (int32_t)p1, method)
#define m9889(__this, method) (t4 *)m7920_gshared((t296 *)__this, method)
#define m9890(__this, p0, method) (int32_t)m7922_gshared((t296 *)__this, (t4 *)p0, method)
#define m9891(__this, p0, method) (bool)m7924_gshared((t296 *)__this, (t4 *)p0, method)
#define m9892(__this, p0, method) (int32_t)m7926_gshared((t296 *)__this, (t4 *)p0, method)
#define m9893(__this, p0, p1, method) (void)m7928_gshared((t296 *)__this, (int32_t)p0, (t4 *)p1, method)
#define m9894(__this, p0, method) (void)m7930_gshared((t296 *)__this, (t4 *)p0, method)
#define m9895(__this, method) (bool)m7932_gshared((t296 *)__this, method)
#define m9896(__this, method) (bool)m7934_gshared((t296 *)__this, method)
#define m9897(__this, method) (t4 *)m7936_gshared((t296 *)__this, method)
#define m9898(__this, method) (bool)m7938_gshared((t296 *)__this, method)
#define m9899(__this, method) (bool)m7940_gshared((t296 *)__this, method)
#define m9900(__this, p0, method) (t4 *)m7942_gshared((t296 *)__this, (int32_t)p0, method)
#define m9901(__this, p0, p1, method) (void)m7944_gshared((t296 *)__this, (int32_t)p0, (t4 *)p1, method)
#define m9902(__this, p0, method) (void)m7945_gshared((t296 *)__this, (t4 *)p0, method)
#define m9903(__this, p0, method) (void)m7947_gshared((t296 *)__this, (int32_t)p0, method)
#define m9904(__this, p0, method) (void)m7949_gshared((t296 *)__this, (t4*)p0, method)
#define m9905(__this, p0, method) (void)m7951_gshared((t296 *)__this, (t4*)p0, method)
#define m9906(__this, p0, method) (void)m7953_gshared((t296 *)__this, (t4*)p0, method)
#define m9907(__this, method) (t1827 *)m7955_gshared((t296 *)__this, method)
#define m9908(__this, method) (void)m7957_gshared((t296 *)__this, method)
#define m9909(__this, p0, method) (bool)m7959_gshared((t296 *)__this, (t4 *)p0, method)
#define m9910(__this, p0, p1, method) (void)m7961_gshared((t296 *)__this, (t309*)p0, (int32_t)p1, method)
#define m9911(__this, p0, method) (t20 *)m7963_gshared((t296 *)__this, (t1607 *)p0, method)
#define m9912(__this, p0, method) (void)m7965_gshared((t4 *)__this, (t1607 *)p0, method)
#define m9913(__this, p0, p1, p2, method) (int32_t)m7967_gshared((t296 *)__this, (int32_t)p0, (int32_t)p1, (t1607 *)p2, method)
 t1830  m9914 (t76 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
#define m9915(__this, p0, method) (int32_t)m7970_gshared((t296 *)__this, (t4 *)p0, method)
#define m9916(__this, p0, p1, method) (void)m7972_gshared((t296 *)__this, (int32_t)p0, (int32_t)p1, method)
#define m9917(__this, p0, method) (void)m7974_gshared((t296 *)__this, (int32_t)p0, method)
#define m9918(__this, p0, p1, method) (void)m7976_gshared((t296 *)__this, (int32_t)p0, (t4 *)p1, method)
#define m9919(__this, p0, method) (void)m7978_gshared((t296 *)__this, (t4*)p0, method)
#define m9920(__this, p0, method) (bool)m7980_gshared((t296 *)__this, (t4 *)p0, method)
#define m9921(__this, p0, method) (int32_t)m7982_gshared((t296 *)__this, (t1607 *)p0, method)
#define m9922(__this, p0, method) (void)m7984_gshared((t296 *)__this, (int32_t)p0, method)
#define m9923(__this, method) (void)m7986_gshared((t296 *)__this, method)
#define m9924(__this, method) (void)m7988_gshared((t296 *)__this, method)
#define m9925(__this, p0, method) (void)m7990_gshared((t296 *)__this, (t1608 *)p0, method)
#define m9926(__this, method) (t1824*)m7992_gshared((t296 *)__this, method)
#define m9927(__this, method) (void)m7994_gshared((t296 *)__this, method)
#define m9928(__this, method) (int32_t)m7996_gshared((t296 *)__this, method)
#define m9929(__this, p0, method) (void)m7998_gshared((t296 *)__this, (int32_t)p0, method)
#define m9930(__this, method) (int32_t)m8000_gshared((t296 *)__this, method)
#define m9931(__this, p0, method) (t20 *)m8002_gshared((t296 *)__this, (int32_t)p0, method)
#define m9932(__this, p0, p1, method) (void)m8004_gshared((t296 *)__this, (int32_t)p0, (t4 *)p1, method)
