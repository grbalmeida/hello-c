#include <stdio.h>

void draw_line(int number_of_equal_signs) {
  for(int counter = 0; counter < number_of_equal_signs; counter++) {
    printf("=");
  }
  printf("\n");
}

int main() {
  int number_of_equal_signs;
  printf("Enter the number of equal signs:\n");
  scanf("%d", &number_of_equal_signs);
  draw_line(number_of_equal_signs);

  return 0;
}
