#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

int stack[SIZE] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
int top = 0;

void list_items() {
  system("clear");

  for(int counter = 0; counter < SIZE; counter++) {
    printf("-");
    printf("|%d|", stack[counter]);
    printf("-");
  }

  printf("\n\nTop: %d\n\n", top);
}

void push() {
  int value;
  printf("Enter value: ");
  scanf("%d", &value);

  if(top < SIZE) {
    stack[top] = value;
    top++;
    list_items();
  } else {
    printf("The stack already full.\n");
  }
}

void pop() {
  if(top >= 0) {
    stack[top - 1] = 0;
    top--;
    list_items();
  } else {
    printf("The stack already empty.\n");
  }
}

void clear() {
  for(int counter = 0; counter < 10; counter++) {
    stack[counter] = 0;
  }

  top = 0;

  list_items();
}

int main() {
  int option;
  list_items();

  do {
    printf("Select an option: \n\n");
    printf("[1] Push\n");
    printf("[2] Pop\n");
    printf("[3] List items\n");
    printf("[4] Clear\n");
    printf("[-1] Exit\n");
    printf("Option: ");
    scanf("%d", &option);

    switch(option) {
      case 1:
        push();
	break;
      case 2:
	pop();
	break;
      case 3:
	list_items();
	break;
      case 4:
	clear();
	break;
      case -1:
	break;
      default:
	printf("Invalid option\n");
    }
  } while(option != -1);
  return 0;
}
