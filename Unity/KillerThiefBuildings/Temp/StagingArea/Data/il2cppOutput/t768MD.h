#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t768;
struct t768_marshaled;
#include "t769.h"

 void m3917 (t768 * __this, int32_t p0, uint8_t* p1, uint8_t* p2, uint8_t* p3, uint8_t* p4, uint8_t* p5, bool p6, MethodInfo* method) IL2CPP_METHOD_ATTR;
void t768_marshal(const t768& unmarshaled, t768_marshaled& marshaled);
void t768_marshal_back(const t768_marshaled& marshaled, t768& unmarshaled);
void t768_marshal_cleanup(t768_marshaled& marshaled);
