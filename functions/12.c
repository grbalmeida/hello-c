#include <stdio.h>

void exclamation_point_generator(int number) {
  for(int counter = 1; counter <= number; counter++) {
    for(int internal_counter = 1; internal_counter <= counter; internal_counter++) {
      printf("!");
    }
    printf("\n");
  }
}

int main() {
  int number;
  printf("Enter a number:\n");
  scanf("%d", &number);
  exclamation_point_generator(number);

  return 0;
}
