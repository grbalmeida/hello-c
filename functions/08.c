#include <stdio.h>
#include <stdlib.h>

void validate_second_number(float number) {
  if(number == 0) {
    printf("Can not divide a number by 0\n");
    exit(1);
  }
}

float calculator(float first_number, float second_number, char operation) {
  if(operation == '+') {
    return first_number + second_number;
  } else if(operation == '-') {
    return first_number - second_number;
  } else if(operation == '*') {
    return first_number * second_number;
  } else if(operation == '/') {
    validate_second_number(second_number);
    return first_number / second_number;
  } else {
    printf("Invalid operation\n");
    exit(1);
  }
}

int main() {
  float first_number, second_number;
  char operation;

  printf("Enter the first number:\n");
  scanf("%f", &first_number);
  printf("Enter the second number:\n");
  scanf("%f", &second_number);
  printf("Enter the operation:\n");
  scanf(" %c", &operation);

  printf("%.2f\n", calculator(first_number, second_number, operation));

  return 0;
}
