#include <stdio.h>

int main() {
  int counter = 0;
  int sum = 0;
  int number;

  while(counter < 10) {
    printf("Enter a value:\n");
    scanf("%d", &number);
    sum += number;
    counter++;
  }

  printf("The sum of the values entered is equal to %d\n", sum);

  return 0;
}
