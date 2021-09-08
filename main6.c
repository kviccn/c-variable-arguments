#include <stdarg.h>
#include <stdio.h>
#include <string.h>

void va_demo(char *types[], ...) {
  va_list valist;
  va_start(valist, types);

  for (int i = 0; types[i] != NULL; i++) {
    if (strcmp(types[i], "int") == 0) {
      printf("%d ", va_arg(valist, int));
      continue;
    }

    if (strcmp(types[i], "char") == 0) {
      printf("%c ", va_arg(valist, int));
      continue;
    }

    if (strcmp(types[i], "char*") == 0) {
      printf("%s ", va_arg(valist, char *));
      continue;
    }
  }

  printf("\n");

  va_end(valist);
}

int main(void) {
  char *types[] = {"int", "char", "char*", NULL};
  va_demo(types, 5, 'c', "laoli!");
  return 0;
}
