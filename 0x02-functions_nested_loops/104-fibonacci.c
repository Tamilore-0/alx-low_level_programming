#include <stdio.h>

int main() {
  long n1 = 1, n2 = 2;
  long nextTerm;
  int i;

  printf("%ld, %ld\n", n1, n2);

  for (i = 1; i <= 96; i++) {
    nextTerm = n1 + n2;
    printf("%ld", nextTerm);
    n1 = n2;
    n2 = nextTerm;

    if (i == 96) {
      printf("\n");
    } else {
      printf(", ");
    }
  }

  return 0;
}
