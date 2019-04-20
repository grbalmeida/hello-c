#include <stdio.h>

float convert_to_fahrenheit(float celsius) {
  return celsius * 9 / 5 + 32;
}

int main() {
  float celsius;
  printf("Enter the temperature in degrees Celsius:\n");
  scanf("%f", &celsius);
  printf("%.2f degrees Celsius is equal to %.2f degrees Fahrenheit\n", celsius, convert_to_fahrenheit(celsius));

  return 0;
}
