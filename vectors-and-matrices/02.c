#include <stdio.h>

int main() {
  int numbers[6];
  int number;

  for(int counter = 0; counter < 6; counter++) {
    printf("Enter a number:\n");
    scanf("%d", &numbers[counter]);
  }

  printf("\n\nEntered numbers\n\n");

  for(int counter = 0; counter < 6; counter++) {
    printf("%d\n", numbers[counter]);
  }

  return 0;
}
