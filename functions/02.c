#include <stdio.h>
#include <stdlib.h>

void end_of_program(char error_message[50]) {
  printf("%s\n", error_message);
  printf("End of program\n");
  exit(1);
}

void validate_month(int month) {
  if(!(month >= 1 && month <= 12)) {
    end_of_program("Invalid month!");
  }
}

void validate_day(int day) {
  if(!(day >= 1 && day <= 31)) {
    end_of_program("Invalid day!");
  }
}


void show_date(int day, int month, int year) {
  const char months[][50] = {
    "January",
    "February",
    "March",
    "April",
    "May",
    "June",
    "July",
    "August",
    "September",
    "October",
    "November",
    "December"
  };

  printf("%s %d, %d\n", months[month - 1], day, year);
}

int main() {
  int day, month, year;

  printf("Enter the day:\n");
  scanf("%d", &day);
  validate_day(day);

  printf("Enter the month:\n");
  scanf("%d", &month);
  validate_month(month);

  printf("Enter the year:\n");
  scanf("%d", &year);

  show_date(day, month, year);

  return 0;
}
