#include <stdio.h>
#include <stdlib.h>

void validate_note(float note) {
  if(!(note >= 0 && note <= 10)) {
    printf("%.2f is an invalid note.\n", note);
    printf("End of program\n");
    exit(1);
  }
}

void show_average(float first_note, float second_note) {
  float average = (first_note + second_note) / 2;
  printf("The average between note %.2f and note %.2f is equal to %.2f\n", first_note, second_note, average);
}

int main() {
  float first_note, second_note;
  printf("Enter the first note:\n");
  scanf("%f", &first_note);
  validate_note(first_note);
  printf("Enter the second note:\n");
  scanf("%f", &second_note);
  validate_note(second_note);
  show_average(first_note, second_note);

  return 0;
}
