#include <stdio.h>

int main() {
  int numbers[5];
  int higher_number = 0, lower_number;

  for(int counter = 0; counter < 5; counter++) {
    printf("Enter a number:\n");
    scanf("%d", &numbers[counter]);
  }

  for(int counter = 0; counter < 5; counter++) {
    if(counter == 0 || numbers[counter] > higher_number) {
      higher_number = numbers[counter];
    }

    if(counter == 0 || numbers[counter] < lower_number) {
      lower_number = numbers[counter];
    }
  }

  printf("Higher number: %d\n", higher_number);
  printf("Lower number: %d\n", lower_number);

  return 0;
}
