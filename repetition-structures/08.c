#include <stdio.h>

int main() {
  int amount = 0;
  int higher_number = 0;
  int number;
  int number_of_times = 0;

  printf("Enter the amount of numbers to enter:\n");
  scanf("%d", &amount);

  int entered_numbers[amount - 1];

  for(int counter = 0; counter < amount; counter++) {
    printf("Enter a number:\n");
    scanf("%d", &number);

    if(counter == 0 || number > higher_number) {
      higher_number = number;
    }

    entered_numbers[counter] = number;
  }

  for(int counter = 0; counter < amount; counter++) {
    if(entered_numbers[counter] == higher_number) {
      number_of_times++;
    }
  }

  printf("The largest number entered was %d and it was entered %d times\n", higher_number, number_of_times);

  return 0;
}
