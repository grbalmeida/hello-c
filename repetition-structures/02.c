#include <stdio.h>

int main() {
  int counter = 10;

  while(!(counter < 0)) {
    printf("%d\n", counter);
    counter--;
  }

  printf("END!\n");
  return 0;
}
