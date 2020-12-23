#pragma once

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>

#if UINTPTR_MAX == UINT32_MAX
#define IS32BIT
#elif UINTPTR_MAX == UINT64_MAX
#define IS64BIT
#else
#error "Other pointer sizes is not supported for now"
#endif

#define bitwise_cast(value,to) ( ((union { typeof(value) from; typeof(to) into;}){value}).into )
#define float2bits(value) (bitwise_cast(value,uint32_t))
#define double2bits(value) (bitwise_cast(value,uint64_t))
#define bits2float(value) (bitwise_cast(value,float))
#define bits2double(value) (bitwise_cast(value,double))
#include "platform.h"
#include "value.h"



