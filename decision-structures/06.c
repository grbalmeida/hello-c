#include <stdio.h>

int main() {
  int first_number, second_number;
  int higher_number = 0, smaller_number = 0, difference = 0;
  printf("Enter the first number:\n");
  scanf("%d", &first_number);
  printf("Enter the second number:\n");
  scanf("%d", &second_number);

  if(first_number > second_number) {
    higher_number = first_number;
    smaller_number = second_number;
  } else if(second_number > first_number) {
    higher_number = second_number;
    smaller_number = first_number;
  }

  difference = higher_number - smaller_number;

  if(first_number != second_number) {
    printf("The largest number is %d\n", higher_number);
    printf("The difference between %d and %d equals %d\n", higher_number, smaller_number, difference);
  }
}
