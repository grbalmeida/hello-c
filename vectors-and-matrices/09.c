#include <stdio.h>

int main() {
  int sum_of_odd_columns = 0;
  float sum_of_the_second_and_fourth_column = 0;  
 
  int array[3][6] = {
    { 1, 2, 3, 4, 5, 6 },
    { 7, 8, 9, 10, 11, 12 },
    { 13, 14, 15, 16, 17, 18 }
  };

  for(int counter = 0; counter < 3; counter++) {
    for(int internal_counter = 0; internal_counter < 6; internal_counter++) {
      if(internal_counter % 2 != 0) {
        sum_of_odd_columns += array[counter][internal_counter];
      }

      if(internal_counter == 2 || internal_counter == 4) {
        sum_of_the_second_and_fourth_column += array[counter][internal_counter];
      }
    }  
  }

  array[0][5] = array[0][1] + array[0][2];
  array[1][5] = array[1][1] + array[1][2];
  array[2][5] = array[2][1] + array[2][2];

  printf("Sum of odd columns: %d\n", sum_of_odd_columns);
  printf("Average of the second and fourth column: %.2f\n", sum_of_the_second_and_fourth_column / 12);

  for(int counter = 0; counter < 3; counter++) {
    for(int internal_counter = 0; internal_counter < 6; internal_counter++) {
      printf("%d ", array[counter][internal_counter]);
    }
    printf("\n");
  }

  return 0;
}
