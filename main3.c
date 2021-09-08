#include <stdio.h>

int sum(int x, int y, int z) {
  int *bp = &x;
  printf("x = %d, xp = %p\n", *bp, bp);
  printf("y = %d, yp = %p\n", *(bp + 1), bp + 1);
  printf("z = %d, zp = %p\n", *(bp + 2), bp + 2);
  return x + y + z;
}

int main(void) {
  printf("1+2+3=%d\n", sum(1, 2, 3));
  return 0;
}
