#include <stdio.h>

int main() {
  int number_of_notes = 0;
  float note, sum = 0;

  do {
    printf("Enter a note:\n");
    scanf("%f", &note);
    sum += note;
    number_of_notes++;
  } while(note >= 10 && note <= 20);

  printf("The average of the notes entered was %.2f\n", (sum - note) / (number_of_notes - 1));

  return 0;
}
