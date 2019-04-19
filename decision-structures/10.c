#include <stdio.h>

float calculate_final_average(float* laboratory_work, float* semester_evaluation, float* final_exame) {
  return *laboratory_work * 0.2 + *semester_evaluation * 0.3 + *final_exame * 0.5;
}

void show_information(float laboratory_work, float semester_evaluation, float final_exame, float final_average) {
  printf("Lab work note: %.2f\n", laboratory_work);
  printf("Semi-annual evaluation note: %.2f\n", semester_evaluation);
  printf("Final exame note: %.2f\n\n", final_exame);
  printf("Final average: %.2f\n", final_average);
}

int main() {
  float laboratory_work_note;
  float semester_evaluation_note;
  float final_exame_note;
  float final_average;

  printf("Enter the laboratory work note:\n");
  scanf("%f", &laboratory_work_note);
  printf("Enter the semester evaluation note:\n");
  scanf("%f", &semester_evaluation_note);
  printf("Enter the final exame note:\n");
  scanf("%f", &final_exame_note);

  final_average = calculate_final_average(&laboratory_work_note, &semester_evaluation_note, &final_exame_note);
  show_information(laboratory_work_note, semester_evaluation_note, final_exame_note, final_average);

  return 0;
}
