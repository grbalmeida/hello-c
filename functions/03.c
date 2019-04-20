#include <stdio.h>

int positive_or_negative(float number) {
  if(number >= 1) {
    return 1;
  } else if(number < 0) {
    return -1;
  } else {
    return 0;
  }
}

int main() {
  int number;

  printf("Enter a number:\n");
  scanf("%d", &number);
  printf("%d\n", positive_or_negative(number));

  return 0;
}
