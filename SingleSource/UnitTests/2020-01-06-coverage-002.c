#include <stdint.h>
#include <stdio.h>

int32_t a, c, e;
int8_t b;
int16_t d;
int32_t x;
int64_t y;

int64_t f() {
  int32_t g = 0;
  x = g;
  for (; g < 5; g++)
    ;
  for (; g < 3; (void)g)
  h:
    for (;; (void)a)
      ;
  for (;; (void)b) {
    int32_t i;
    if (a)
      goto h;
    if (d) {
      if (e)
        return 0;
      break;
    }
    if (c)
      continue;
  }
  {
    y = 0;
    return y;
  };
}

int64_t z;

int32_t main() {
  int64_t val_8;
  int64_t val_7;
  int32_t val_6;
  int16_t val_5;
  int8_t val_4;
  int32_t val_3;
  int32_t val_2;
  int32_t val_1;

  val_1 = 0;
  val_2 = -2;
  val_3 = 0;
  val_4 = 0;
  val_5 = 10;
  val_6 = 4;
  val_7 = 0;
  val_8 = 0;

  z = val_8;
  y = val_7;
  x = val_6;
  d = val_5;
  b = val_4;
  e = val_3;
  c = val_2;
  a = val_1;
  z = f();

  printf("a = %i\n", a);
  printf("b = %i\n", b);
  printf("c = %i\n", c);
  printf("d = %i\n", d);
  printf("x = %i\n", x);
  printf("e = %i\n", e);
  printf("z = %li\n", z);
  printf("y = %li\n", y);

  return 0;
}