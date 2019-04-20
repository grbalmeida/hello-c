#include <stdio.h>
#include <math.h>

float calculate_hypotenuse(int a, int b) {
  return sqrt(pow(a, 2) + pow(b, 2));
}

void show_message(int a, int b, float hypotenuse) {
  printf("a = %d\n", a);
  printf("b = %d\n", b);
  printf("hypotenuse = %.2f\n", hypotenuse);
}

int main() {
  int a, b;

  printf("Enter the value of a:\n");
  scanf("%d", &a);
  printf("Enter the value of b:\n");
  scanf("%d", &b);

  show_message(a, b, calculate_hypotenuse(a, b));

  return 0;
}
