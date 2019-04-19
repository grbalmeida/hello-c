#include <stdio.h>

void largest_number(float number) {
  printf("%.2f is the largest number\n", number);
}

int main() {
  float first_number, second_number;
  printf("Enter the first number:\n");
  scanf("%f", &first_number);
  printf("Enter the second number:\n");
  scanf("%f", &second_number);

  if(first_number > second_number) {
    largest_number(first_number);
  } else if(second_number > first_number) {
    largest_number(second_number);
  } else {
    printf("The numbers are the same\n");
  }
}
