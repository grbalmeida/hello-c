#include <stdio.h>

int main() {
  int counter = 0;
  int current_number = 0;

  while(counter < 5) {
    current_number++;

    if(current_number % 3 == 0) {
      counter++;
      printf("%d is divisible by 3\n", current_number);
    }
  }

  return 0;
}
