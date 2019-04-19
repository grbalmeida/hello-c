#include <stdio.h>
#include <math.h>

int main() {
  int number;
  printf("Enter a number:\n");
  scanf("%d", &number);

  if(number >= 0) {
    printf("%d squared equals %.2f\n", number, pow(number, 2));
    printf("The square root of %d is %.2f\n", number, sqrt(number));
  }

  return 0;
}
