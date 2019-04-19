#include <stdio.h>

int main() {
  int first_number, second_number, higher_number, lower_number;
  int sum_of_even_numbers = 0;
  int multiplication_of_odd_numbers = 1;

  printf("Enter the first number:\n");
  scanf("%d", &first_number);
  printf("Enter the second number:\n");
  scanf("%d", &second_number);

  if(first_number > second_number) {
    higher_number = first_number;
    lower_number = second_number;
  } else {
    higher_number = second_number;
    lower_number = first_number;
  }

  for(lower_number; lower_number <= higher_number; lower_number++) {
    if(lower_number % 2 == 0) {
      sum_of_even_numbers += lower_number;
    } else {
      multiplication_of_odd_numbers *= lower_number;
    }
  }

  printf("Sum of even numbers: %d\n", sum_of_even_numbers);
  printf("Multiplication of odd numbers: %d\n", multiplication_of_odd_numbers);

  return 0;
}
