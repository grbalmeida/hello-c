#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define MALE 'M'
#define FEMALE 'F'

void show_information(float height, char gender, float ideal_weight) {
  char message[70] = "The ideal weight for height %.2f and the gender %c is equal to %.2f\n";
  printf(message, height, gender, ideal_weight);
}

void calculate_ideal_weight(char gender, float height, float* ideal_weight) {
  if(gender == MALE) {
    *ideal_weight = (72.7 * height) - 58;
  } else if(gender == FEMALE) {
    *ideal_weight = (62.1 * height) - 44.7;
  } else {
    exit(1);
  }
}

int main() {
  float height, ideal_weight;
  char gender;

  printf("Enter height:\n");
  scanf("%f", &height);
  printf("Enter gender:\n");
  scanf(" %c", &gender);
  gender = toupper(gender);

  calculate_ideal_weight(gender, height, &ideal_weight);
  show_information(height, gender, ideal_weight);
  
  return 0;
}
