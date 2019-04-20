#include <stdio.h>

int main() {
  float higher_final_grade = 0, sum_of_notes = 0;
  int registration_number;

  struct student {
    int registration_number;
    float average_of_tests;
    float average_work;
    float final_grade;
  }students[3];

  for(int counter = 0; counter < 3; counter++) {
    printf("Enter the student's registration:\n");
    scanf("%d", &students[counter].registration_number);
    printf("Enter the average of the student's tests:\n");
    scanf("%f", &students[counter].average_of_tests);
    printf("Enter the average student work:\n");
    scanf("%f", &students[counter].average_work);
    students[counter].final_grade = students[counter].average_of_tests + students[counter].average_work;
    printf("\n");
  }

  for(int counter = 0; counter < 3; counter++) {
    if(counter == 0 || students[counter].final_grade > higher_final_grade) {
      higher_final_grade = students[counter].final_grade;
      registration_number = students[counter].registration_number;
    }

    sum_of_notes += students[counter].final_grade;
  }

  char message[100] = "The highest final grade was the student's enrollment %d and with the final grade equal to %.2f\n";
  printf(message, registration_number, higher_final_grade);
  printf("The final student average is equal to %.2f\n", sum_of_notes / 3);

  return 0;
}
