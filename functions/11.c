#include <stdio.h>

int sum_between_integers(int first_number, int second_number) {
  int higher_number, lower_number, sum = 0;

  if(first_number > second_number) {
    higher_number = first_number;
    lower_number = second_number;
  } else {
    higher_number = second_number;
    lower_number = first_number;
  }

  for(lower_number; lower_number <= higher_number; lower_number++) {
    sum += lower_number;
  }

  return sum;
}

int main() {
  int first_number, second_number;
  int sum;

  printf("Enter the first number:\n");
  scanf("%d", &first_number);
  printf("Enter the second number:\n");
  scanf("%d", &second_number);
  sum = sum_between_integers(first_number, second_number);

  printf("The sum between integers %d and %d is equal to %d\n", first_number, second_number, sum);

  return 0;
}
