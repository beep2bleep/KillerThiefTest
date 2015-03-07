#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t769;
struct t769_marshaled;
#include "t770.h"

 void m3937 (t769 * __this, int32_t p0, uint8_t* p1, uint8_t* p2, uint8_t* p3, uint8_t* p4, uint8_t* p5, bool p6, MethodInfo* method) IL2CPP_METHOD_ATTR;
void t769_marshal(const t769& unmarshaled, t769_marshaled& marshaled);
void t769_marshal_back(const t769_marshaled& marshaled, t769& unmarshaled);
void t769_marshal_cleanup(t769_marshaled& marshaled);
