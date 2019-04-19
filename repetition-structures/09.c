#include <stdio.h>

int main() {
  int number, number_of_even_numbers = 0, number_of_numbers_entered = 0;
  
  do {
    printf("Enter a number:\n");
    scanf("%d", &number);

    if(number % 2 == 0) {
      number_of_even_numbers++;
    }

    number_of_numbers_entered++;
  } while(number != 1000);

  printf("Number of even numbers entered: %d\n", number_of_even_numbers);
  printf("Number of numbers entered: %d\n", number_of_numbers_entered);

  return 0;
}
