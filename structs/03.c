#include <stdio.h>

int main() {
  struct Student {
    char name[50];
    char course[50];
  }students[3];

  for(int counter = 0; counter < 3; counter++) {
    printf("Enter the name:\n");
    scanf("%s", students[counter].name);
    printf("Enter the course:\n");
    scanf("%s", students[counter].course);
  }

  printf("\n\nStudents\n\n");

  for(int counter = 0; counter < 3; counter++) {
    printf("Name: %s\n", students[counter].name);
    printf("Course: %s\n", students[counter].course);
    printf("==================================\n\n");
  }

  return 0;
}
