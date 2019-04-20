#include <stdio.h>

void add_character(char character[2], int number) {
  for(int counter = 1; counter <= number; counter++) {
    printf("%s", character);
  }
}

void height_triangle_generator(int number) {
  int spaces_on_each_side;
  int global_counter = 1;

  for(int counter = 1; counter <= number; counter++) {
    spaces_on_each_side = number - counter;
    add_character(" ", spaces_on_each_side);
    add_character("*", global_counter);
    add_character(" ", spaces_on_each_side);
    printf("\n");
    global_counter += 2;
  }
}

int main() {
  int number;
  printf("Enter a number:\n");
  scanf("%d", &number);
  height_triangle_generator(number);

  return 0;
}
