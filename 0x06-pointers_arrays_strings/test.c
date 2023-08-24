#include <stdio.h>

long convertToLongLong(char *n1, char *n2) {
  long r = 0;
  long i = 0;
  while (n1[i] != '\0' || n2[i] != '\0') {
    r *= 10;
    if (n1[i])
      r += n1[i] - '0';

    if (n2[i])
      r += n2[i] - '0';
    i++;
  }

  return r;
}

int main() {
  char *n = "234567892434";
  char *a = "234567892434";

  long r = convertToLongLong(n, a);
  printf("%ld \n", r);

  return 0;
}