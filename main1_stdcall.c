#include <stdio.h>

__attribute__((stdcall)) int sum_stdcall(int x, int y, int z) {
  return x + y + z;
}

int main(void) {
  printf("1+2+3=%d(stdcall)\n", sum_stdcall(1, 2, 3));
  return 0;
}
