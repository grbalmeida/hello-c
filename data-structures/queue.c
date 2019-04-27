#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

int queue[SIZE] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
int head = 0;
int tail = 0;

void list_items() {
  system("clear");
  for(int counter = 0; counter < SIZE; counter++) {
    printf("-");
    printf("|%d|", queue[counter]);
    printf("-");
  }
  printf("\n\nHead: %d\n", head);
  printf("Tail: %d\n\n", tail);
}

void reallocate() {
  int new_list[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
  int clone_head;
  int clone_tail = 0;
  int initial_index = 0;

  for(clone_head = head; clone_head < tail; clone_head++) {
    new_list[initial_index] = queue[clone_head];
    initial_index++;
    clone_tail++;
  }

  for(int counter = 0; counter < 10; counter++) {
    queue[counter] = new_list[counter];
  }

  head = 0;
  tail = clone_tail;

  list_items();
}

void enqueue() {
  int value;

  if(tail < SIZE) {
    printf("Enter the element to add in the queue: ");
    scanf("%d", &value);
    queue[tail] = value;
    tail++;
    reallocate();
  } else {
    printf("The queue is full.\n");
  }
}

void dequeue() {
  if(head < tail) {
    queue[head] = 0;
    head++;
    reallocate();
  } else {
    printf("The queue is already empty.\n");
  }
}

void clear() {
  for(int counter = 0; counter < 10; counter++) {
    queue[counter] = 0;
  }
  head = 0;
  tail = 0;
}

int main() {
  list_items();
  int option;

  do {
    printf("\nSelect an option: \n\n");
    printf("[1] - Enqueue\n");
    printf("[2] - Dequeue\n");
    printf("[3] - List items\n");
    printf("[4] - Clear\n");
    printf("[-1] - Exit\n");
    printf("Option: ");
    scanf("%d", &option);

    switch(option) {
      case 1:
        enqueue();
        break;
      case 2:
	dequeue();
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
