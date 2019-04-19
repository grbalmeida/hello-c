#include <stdio.h>

void odd_number(int number) {
  printf("The number %d is odd\n", number);
}

void even_number(int number) {
  printf("The number %d is even\n", number);
}

int main() {
  int number;
  printf("Enter a number:\n");
  scanf("%d", &number);

  if(number % 2 == 0) {
    even_number(number);
  } else {
    odd_number(number);
  }

  return 0;
}
