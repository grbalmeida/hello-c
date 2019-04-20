#include <stdio.h>

int main() {
  struct Person {
    char name[50];
    int age;
    char address[50];
  };

  struct Person person;

  printf("Enter the name:\n");
  scanf("%s", person.name);

  printf("Enter the age:\n");
  scanf("%d", &person.age);

  printf("Enter the address:\n");
  scanf("%s", person.address);

  printf("\nPerson\n");
  printf("Name: %s\n", person.name);
  printf("Age: %d\n", person.age);
  printf("Address: %s\n", person.address);

  return 0;
}
