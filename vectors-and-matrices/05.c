#include <stdio.h>

int main() {
  int numbers[5];
  int number_of_positive_numbers = 0, number_of_negative_numbers = 0;

  for(int counter = 0; counter < 5; counter++) {
    printf("Enter a number:\n");
    scanf("%d", &numbers[counter]);
  }

  for(int counter = 0; counter < 5; counter++) {
    if(numbers[counter] > 0) {
      number_of_positive_numbers++;
    } else if(numbers[counter] < 0) {
      number_of_negative_numbers++;
    }
  }

  printf("Number of positive numbers: %d\n", number_of_positive_numbers);
  printf("Number of negative numbers: %d\n", number_of_negative_numbers);

  return 0;
}
