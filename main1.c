#include <stdio.h>

int sum(int x, int y, int z) { return x + y + z; }

int main(void) {
  printf("1+2+3=%d\n", sum(1, 2, 3));
  return 0;
}
