#include "prelude.h"
#include <stdio.h>
#include "pure-nan.h"
#include "waffle-config.h"
int main() {
  double pnan = pure_nan ();
  printf("%lx",double2bits (pnan));
}
