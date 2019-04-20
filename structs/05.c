#include <stdio.h>

int main() {
  int index_oldest_person;
  int greater_age = 0;
  int number_of_males = 0;
  int number_of_people_earning_more_than_1000 = 0;

  struct Address {
    char city[50];  
  };

  struct Person {
    char name[50];
    float salary;
    int age;
    char gender;
    struct Address address;
  };

  struct Person people[2];

  for(int counter = 0; counter < 2; counter++) {
    printf("Enter the name: ");
    scanf("%s", people[counter].name);
    printf("Enter the salary: ");
    scanf("%f", &people[counter].salary);
    printf("Enter the age: ");
    scanf("%d", &people[counter].age);
    printf("Enter the gender: ");
    scanf(" %c", &people[counter].gender);
    printf("Enter the city: ");
    scanf("%s", people[counter].address.city);
    printf("\n\n");
  }

  for(int counter = 0; counter < 2; counter++) {
    if(counter == 0 || people[counter].age > greater_age) {
      greater_age = people[counter].age;
      index_oldest_person = counter;
    }

    if(people[counter].gender == 'M') {
      number_of_males++;
    }

    if(people[counter].salary > 1000) {
      number_of_people_earning_more_than_1000++;
    }
  }

  printf("The oldest person is %d-year-old %s\n", people[index_oldest_person].age, people[index_oldest_person].name);
  printf("Number of males: %d\n", number_of_males);
  printf("Number of people earning more than 1000: %d\n\n", number_of_people_earning_more_than_1000);

  return 0;
}
