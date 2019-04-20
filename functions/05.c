#include <stdio.h>

int convert_to_seconds(int hours, int minutes, int seconds) {
  return hours * 60 * 60 + minutes * 60 + seconds;
}

void show_message(int hours, int minutes, int seconds, int total_of_seconds) {
  printf("%d hours, %d minutes and %d seconds equals to %d seconds\n", hours, minutes, seconds, total_of_seconds);
}

int main() {
  int hours, minutes, seconds;

  printf("Enter the hours:\n");
  scanf("%d", &hours);
  printf("Enter the minutes:\n");
  scanf("%d", &minutes);
  printf("Enter the seconds:\n");
  scanf("%d", &seconds);

  show_message(hours, minutes, seconds, convert_to_seconds(hours, minutes, seconds));

  return 0;
}
