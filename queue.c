#include <stdio.h>
#include <stdlib.h>
#define MAX 25

int queueArray[MAX];
int rear = - 1;
int front = - 1;
int count;

int main(){
    
    int input;
    
    while (1){
 printf("1. Insert element to queue. Only enter integers, please. \n");
        printf("2. Delete element from queue \n");
        printf("3. Display all elements of queue \n");
        printf("4. Display number of elements in queue \n");
        printf("5. Display value of all elements in queue \n");
        printf("6. Quit \n");
        printf("Pick an option from the menu. Enter a number 1-6: ");
        scanf("%d", &input);
        switch (input){
            case 1:
            enqueue();
            break;
            case 2:
            dequeue();
            break;
            case 3:
            display();
            break;
            case 4:
            displayNumber();
            break;
            case 5:
	        displayValue();
	        break;
            case 6:
            exit(1);
            default:
            printf("Wrong choice \n");
        } 
    } 
} 

void enqueue(){
    int addItem;
 if (rear == MAX - 1)
    printf("Queue overflow \n");
    else{
        if (front == - 1)
        /*If queue is initially empty */
        front = 0;
        printf("Insert an element into queue : ");
        scanf("%d", &addItem);
        rear = rear + 1;
        queueArray[rear] = addItem;
        count++;
    }
} 
 
void dequeue(){
    if (front == - 1 || front > rear){
printf("Queue underflow \n");
    }else{
        printf("Element deleted from queue is: %d\n", queueArray[front]);
        front = front + 1;
        count--;
    }
} 
int display(){
    int i;
    if (front == - 1)
    printf("Queue is empty \n");
    else{
        printf("Queue is: \n");
        for (i = front; i <= rear; i++)
            printf("%d ", queueArray[i]);
        printf("\n");
    }
} 
int displayNumber(){
    int i;
    if (front == - 1 || front > rear){
        printf("Queue underflow \n");
    }
if (rear == MAX - 1){
    printf("Queue overflow \n");
}
printf("The number of elements is %d\n", count);
}

int displayValue(){
    int i;
    if (front == - 1 || front > rear){
        printf("Queue underflow \n");
    }
if (rear == MAX - 1){
    printf("Queue overflow \n");
}
int size = (sizeof(queueArray) / sizeof(int));
int sum = 0;
   for (i = 0; i < size; i++)
      sum = sum + queueArray[i];
      printf("Sum: %d\n", sum);
}

