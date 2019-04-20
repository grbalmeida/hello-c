#include <stdio.h>

int main() {
  int number_of_values_greater_than_10 = 0;

  int array[4][4] = {
    { 1, 2, 3, 4 },
    { 5, 6, 7, 8 },
    { 9, 10, 11, 12 },
    { 13, 14, 15, 16 }
  };

  for(int counter = 0; counter < 4; counter++) {
    for(int internal_counter = 0; internal_counter < 4; internal_counter++) {
      if(array[counter][internal_counter] > 10) {
        number_of_values_greater_than_10++;
      }
    }
  }

  printf("Number of values greater than 10 is equal to %d\n", number_of_values_greater_than_10);

  return 0;
}
