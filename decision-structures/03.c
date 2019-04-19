#include <stdio.h>
#include <math.h>

int main() {
  float number;
  printf("Enter a number:\n");
  scanf("%f", &number);

  if(number > 0) {
    printf("The square root of %.2f is %.2f\n", number, sqrt(number));
  } else {
    printf("%.2f squared equals %.2f\n", number, pow(number, 2));
  }
  
  return 0;
}
