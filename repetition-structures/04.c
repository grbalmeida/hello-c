#include <stdio.h>

int main() {
  int number;
  float sum = 0;

  for(int counter = 0; counter < 10; counter++) {
    printf("Enter a number:\n");
    scanf("%d", &number);
    sum += number;
  }

  printf("The average of the values entered is equal to %.2f\n", sum / 10);

  return 0;
}
