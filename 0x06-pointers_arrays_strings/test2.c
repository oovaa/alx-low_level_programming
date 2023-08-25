#include <stdio.h>
#include <ctype.h>

int main(int argc, char *argv[]) {
  int i, j;
  char *s = "my name is omer\n i am a SE student at alx \n i like C";
  int size = sizeof(s);
  for (i = 0; i < 100; i += 10) {
    printf("%08x:", i);
    for (j = i; j < i + 10; j += 2) {
      if (j < size)
        printf("%02x", s[j]);
      else
        printf("  ");

      if (j + 1 < size)
        printf("%02x ", s[j + 1]);
      else
        printf("   ");
    }

     for (j = i; j < i + 10 && j < size; j++) {
      if (isprint(s[j]))
        printf("%c", s[j]);
      else
        printf(".");
    }

    printf("\n");
  }

  return 0;
}