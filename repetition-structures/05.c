#include <stdio.h>

int main() {
  int counter = 0;
  int sum = 0;
  int current_number = 0;

  while(counter <= 50) {
    sum += current_number;
    current_number += 2;
    counter++;
  }

  printf("The sum of the first 50 even numbers equals %d\n", sum);
  return 0;
}
