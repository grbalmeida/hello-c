#include <stdio.h>

int main() {
  int number;
  printf("Enter a number:\n");
  scanf("%d", &number);

  for(int counter = 0; counter <= number; counter++) {
    printf("%d\n", counter);
  }

  return 0;
}
