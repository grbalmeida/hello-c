#include <stdio.h>

int main() {
  int array[5][5] = {
    { 1, 0, 0, 0, 1 },
    { 0, 1, 0, 1, 0 },
    { 0, 0, 1, 0, 0 },
    { 0, 1, 0, 1, 0 },
    { 1, 0, 0, 0, 1 }
  };

  for(int counter = 0; counter < 5; counter++) {
    for(int internal_counter = 0; internal_counter < 5; internal_counter++) {
      printf("%d", array[counter][internal_counter]);
    }
    printf("\n");
  }

  return 0;
}
