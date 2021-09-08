#include <stdarg.h>
#include <stdio.h>

int sum(int n, ...) {
  va_list valist;
  int sum = 0;
  int cur;

  va_start(valist, n);

  for (int i = 0; i < n; i++) {
    cur = va_arg(valist, int);
    printf("arg%d = %d\n", i + 1, cur);
    sum += cur;
  }

  va_end(valist);
  return sum;
}

int main(void) {
  printf("1+2+3=%d\n\n", sum(3, 1, 2, 3));
  printf("3+4+5=%d\n\n", sum(3, 3, 4, 5));
  printf("1+2+3+4=%d\n", sum(4, 1, 2, 3, 4));
  return 0;
}
