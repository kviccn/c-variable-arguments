#include <stdio.h>

int sum(int n, ...) {
  int *bp = &n + 1;
  int sum = 0;

  for (int i = 0; i < n; i++) {
    printf("arg%d = %d, argp%d = %p\n", i + 1, *(bp + i), i + 1, bp + i);
    sum += *(bp + i);
  }
  return sum;
}

int main(void) {
  printf("1+2+3=%d\n\n", sum(3, 1, 2, 3));
  printf("3+4+5=%d\n\n", sum(3, 3, 4, 5));
  printf("1+2+3+4=%d\n", sum(4, 1, 2, 3, 4));
  return 0;
}
