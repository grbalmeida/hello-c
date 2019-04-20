#include <stdio.h>

void fuel_consumption(float distance_in_kilometers, float liters_of_gasoline) {
  float kilometers_per_liter = distance_in_kilometers / liters_of_gasoline;

  if(kilometers_per_liter < 8) {
    printf("Sell your car\n");
  } else if(kilometers_per_liter >= 8 && kilometers_per_liter <= 14) {
    printf("Economic\n");
  } else {
    printf("Super economic\n");
  }
}

int main() {
  float distance_in_kilometers, liters_of_gasoline;
  printf("Enter the distance in kilometers:\n");
  scanf("%f", &distance_in_kilometers);
  printf("Enter the amount of liters of gasoline:\n");
  scanf("%f", &liters_of_gasoline);

  fuel_consumption(distance_in_kilometers, liters_of_gasoline);

  return 0;
}
