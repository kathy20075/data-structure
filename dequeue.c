#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
#define SIZE 10

int deque[SIZE];
int front = -1, rear = -1;

void insertRear(){
int value;
if((front == 0 && rear == SIZE - 1) || (front == rear + 1)){
printf("Deque is FULL!\n");
return;
}
printf("Enter value to insert at rear: ");
scanf("%d", &value);
if (front == -1)
front = rear = 0;
else if (rear == SIZE - 1)
rear = 0;
else
rear++;
deque[rear] = value;
printf("%d inserted at rear successfully!\n", value);
}

void insertFront(){
int value;
if ((front == 0 && rear == SIZE - 1) || (front == rear + 1)) {
printf("Deque is FULL!\n");
}
printf("Enter value to insert at FRONT: ");
scanf("%d", &value);
if (front == -1)
front = rear = 0;
else if (front == 0)
front = SIZE - 1;
else
front--;
deque[front] = value;
printf("%d inserted at FRONT successfully!\n", value);
}

void deleteFront() {
if (front == -1) {
printf("Deque is EMPTY!\n");
}
printf("Deleted %d from FRONT\n", deque[front]);
if (front == rear)
front = rear = -1;
else if (front == SIZE - 1)
front = 0;
else
front++;
}

void deleteRear() {
if (front == -1) {
printf("\nDeque is EMPTY!\n");
}
printf("Deleted %d from REAR\n", deque[rear]);
if (front == rear) // Only one element
front = rear = -1;
else if (rear == 0)
rear = SIZE - 1;
else
rear--;
}
void display() {
int i;
if (front == -1) {
printf("\nDeque is EMPTY!\n");
}
printf("\nDeque elements are: ");
i = front;
while (1) {
printf("%d ", deque[i]);
if (i == rear)
break;
i = (i + 1) % SIZE;
}
printf("\n");
}
int main() {
int mainChoice, subChoice;

do {
printf("\n========== DEQUE MENU ==========\n");
printf("1. Input Restricted Deque\n");
printf("2. Output Restricted Deque\n");
printf("3. Exit\n");
printf("Enter your choice: ");
scanf("%d", &mainChoice);

switch (mainChoice) {
case 1: // Input Restricted (only rear insertion)
do {
printf("\n-- Input Restricted Deque --\n");
printf("1. Insert at Rear\n");
printf("2. Delete from Front\n");
printf("3. Delete from Rear\n");
printf("4. Display\n");
printf("5.break\n");
printf("Enter your choice: ");
scanf("%d", &subChoice);

 switch (subChoice) {
case 1: insertRear();
break;
case 2: deleteFront();
break;
case 3: deleteRear();
break;
case 4: display();
break;
case 5:break;
default: printf("Invalid choice!\n");}}
while (subChoice != 5);
break;

case 2: // Output Restricted (only front/rear deletion)
do {
printf("\n-- Output Restricted Deque --\n");
printf("1. Insert at Rear\n");
printf("2. Insert at Front\n");
printf("3. Delete from Front\n");
printf("4. Display\n");
printf("5. Back to Main Menu\n");
printf("Enter your choice: ");
scanf("%d", &subChoice);

switch (subChoice) {
case 1: insertRear(); break;
case 2: insertFront(); break;
case 3: deleteFront(); break;
case 4: display(); break;
case 5: break;
default: printf("Invalid choice!\n");
}
} while (subChoice != 5);
break;
case 3:
printf("Exiting program...\n");
break;
default:
printf("Invalid main menu choice!\n");
break;
}}
while(mainChoice!= 3);

return 0;
}





