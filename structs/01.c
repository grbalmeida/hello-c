#include <stdio.h>

int main() {
  struct Schedule {
    int hours;
    int minutes;
    int seconds;
  };

  struct Date {
    int day;
    int month;
    int year;
  };

  struct Commitment {
    struct Date date;
    struct Schedule schedule;
    char description[50];
  };

  struct Commitment commitment;

  printf("Enter the hours:\n");
  scanf("%d", &commitment.schedule.hours);

  printf("Enter the minutes:\n");
  scanf("%d", &commitment.schedule.minutes);

  printf("Enter the seconds:\n");
  scanf("%d", &commitment.schedule.seconds);

  printf("Enter the day:\n");
  scanf("%d", &commitment.date.day);

  printf("Enter the month:\n");
  scanf("%d", &commitment.date.month);

  printf("Enter the year:\n");
  scanf("%d", &commitment.date.year);

  printf("Enter commitment description:\n");
  scanf("%s", commitment.description);

  printf("\nCommitment information\n");
  printf("Hours: %d\n", commitment.schedule.hours);
  printf("Minutes: %d\n", commitment.schedule.minutes);
  printf("Seconds: %d\n", commitment.schedule.seconds);
  printf("Day: %d\n", commitment.date.day);
  printf("Month: %d\n", commitment.date.month);
  printf("Year: %d\n", commitment.date.year);
  printf("Description: %s\n", commitment.description);

  return 0;
}
