#include <stdio.h>
#include <math.h>

#define PI 3.1416

float volume_of_sphere(float radius) {
  return 4 * PI * pow(radius, 3) / 3;
}

int main() {
  float radius;
  printf("Enter the radius of the sphere:\n");
  scanf("%f", &radius);
  printf("The volume of a sphere with radius %.2f is equal to %.2f\n", radius, volume_of_sphere(radius));

  return 0;
}
