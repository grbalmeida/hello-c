#include <stdio.h>
#include <math.h>

void show_sqrt(int number) {
  printf("The square root of %d is %.2f\n", number, sqrt(number));
}

int main() {
  int number;
  printf("Enter a number:\n");
  scanf("%d", &number);

  if(number >= 0) {
    show_sqrt(number);
  } else {
    printf("The number is invalid\n");
  }

  return 0;
}
