#include <stdio.h>

int main() {
  int vector[6] = { 1, 0, 5, -2, -5, 7 };
  int sum = vector[0] + vector[1] + vector[5];
  printf("The sum of %d, %d, and %d is equal to %d\n\n", vector[0], vector[1], vector[5], sum);
  vector[4] = 100;

  for(int counter = 0; counter < sizeof(vector) / sizeof(vector[0]); counter++) {
    printf("The value of the vector at index %d is equal to %d\n", counter, vector[counter]);
  }

  return 0;
}
