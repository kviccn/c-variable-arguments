#include <stdio.h>

int sum(int x, int y, int z) {
  printf("x = %d, xp = %p\n", x, &x);
  printf("y = %d, yp = %p\n", y, &y);
  printf("z = %d, zp = %p\n", z, &z);
  return x + y + z;
}

int main(void) {
  printf("1+2+3=%d\n", sum(1, 2, 3));
  return 0;
}
