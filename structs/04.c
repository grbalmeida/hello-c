#include <stdio.h>

int main() {
  struct Employee {
    char name[50];
    int age;
    char gender;
    char social_security_number[20];
    char position[50];
    float salary;
  };

  struct Employee employee;

  printf("Enter the name:\n");
  scanf("%s", employee.name);
  printf("Enter the age:\n");
  scanf("%d", &employee.age);
  printf("Enter the gender:\n");
  scanf(" %c", &employee.gender);
  printf("Enter the social security number:\n");
  scanf("%s", employee.social_security_number);
  printf("Enter the position:\n");
  scanf("%s", employee.position);
  printf("Enter the salary:\n");
  scanf("%f", &employee.salary);

  printf("\n\nEmployee information\n\n");

  printf("Name: %s\n", employee.name);
  printf("Age: %d\n", employee.age);
  printf("Gender: %c\n", employee.gender);
  printf("Social security number: %s\n", employee.social_security_number);
  printf("Postion: %s\n", employee.position);
  printf("Salary: %.2f\n\n", employee.salary);

  return 0;
}
