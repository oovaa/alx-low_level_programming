#include <ctype.h>
#include <stdio.h>

void print_buffer(char *b, int size) {
  if (size <= 0) {
    printf("\n");
    return;
  }

  int i, j;

  for (i = 0; i < size; i += 10) {
    printf("%08x: ", i); // Print position in hexadecimal

    // Print hexadecimal content
    for (j = i; j < i + 10; j += 2) {
      if (j < size)
        printf("%02x", b[j]);
      else
        printf("  ");

      if (j + 1 < size)
        printf("%02x ", b[j + 1]);
      else
        printf("   ");
    }

    printf(" ");

    // Print content of the buffer
    for (j = i; j < i + 10 && j < size; j++) {
      if (isprint(b[j]))
        printf("%c", b[j]);
      else
        printf(".");
    }

    printf("\n");
  }
}

int main() {
  char buffer[] = "This is a string!\0And this is the rest of the #buffer "
                  ":)\1\2\3\4\5\6\7#"
                  "cisfun\n\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\x20\x21\x34"
                  "\x56#pointersarefun #infernumisfun\n";
  print_buffer(buffer, sizeof(buffer));

  return 0;
}