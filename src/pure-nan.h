#pragma once
#include "prelude.h"
inline double pure_nan() {
  return bits2double(0x7ff8000000000000ll);
}

inline bool is_impure_nan(double value) {
  return double2bits (value) >=0xfffe000000000000llu;
}

inline double purify_nan(double value) {
  return (value != value) ? pure_nan () : value;
}

#define PNaN (pure_nan())
