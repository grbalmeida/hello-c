#include <stdio.h>

void side_triangle_generator(int number) {
  for(int counter = 1; counter <= number; counter++) {
    for(int internal_counter = 1; internal_counter <= counter; internal_counter++) {
      printf("*");
    }
    printf("\n");
  }

  for(int counter = number - 1; counter >= 1; counter--) {
    for(int internal_counter = counter; internal_counter >= 1; internal_counter--) {
      printf("*");
    }
    printf("\n");
  }
}

int main() {
  int number;
  printf("Enter a number:\n");
  scanf("%d", &number);
  side_triangle_generator(number);

  return 0;
}
