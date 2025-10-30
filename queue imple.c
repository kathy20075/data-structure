#include<stdio.h>
#define MAX 10
int queue[MAX];
int front=-1;
int rear=-1;
void enqueue(){
if (rear==MAX-1){
printf("queue is full\n");}
else{
int value;
printf("enter the value\n");
scanf("%d",&value);
if (front == -1)
front=0;
rear=rear+1;
queue[rear]=value;
}
}
void dequeue(){
if (front==-1||front>rear){
printf("queue is empty\n");
}
else{
printf("the deleted element is %d\n",queue[front]);
front=front+1;

}
}
void display(){
if (front==-1||front>rear){
printf("queue is empty\n");
}
else{
for(int i=front;i<=rear;i++)
printf("%d\n",queue[i]);
printf("\n");
}
}
int main(){
int choice;
while(1){
printf("enter 1. for enqueue 2.for dequeue 3.for display 4.for exit\n");
scanf("%d",&choice);
switch(choice){
case 1:enqueue();
break;
case 2:dequeue();
break;
case 3:display();
break;
case 4:exit(0);
break;
default:printf("not proper input\n");
}
}
return 0;
}
