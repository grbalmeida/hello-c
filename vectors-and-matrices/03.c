#include <stdio.h>

int main() {
  int numbers[10];
  int number_of_even_numbers = 0;

  for(int counter = 0; counter < 10; counter++) {
    printf("Enter a number:\n");
    scanf("%d", &numbers[counter]);

    if(numbers[counter] % 2 == 0) {
      number_of_even_numbers++;
    }
  }

  printf("\nNumber of even numbers: %d", number_of_even_numbers);
  printf("\nEntered numbers\n");

  for(int counter = 0; counter < 10; counter++) {
    printf("%d\n", numbers[counter]);
  }

  return 0;
}
