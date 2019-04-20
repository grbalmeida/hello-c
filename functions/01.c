#include <stdio.h>

int calculate_double(int number) {
  return number * 2;
}

int main() {
  int number;
  printf("Enter a number:\n");
  scanf("%d", &number);

  printf("Double of %d is %d\n", number, calculate_double(number));

  return 0;
}
