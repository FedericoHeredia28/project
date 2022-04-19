#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int n = 1;
  while (n <= 10) {
    printf("%d\n", n);
    n = n + 1;
  }
  printf("salimos del loop\n");
  return 0;
}
