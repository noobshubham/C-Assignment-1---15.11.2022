#include <stdio.h>

#define SIZE 5

int queue[SIZE];
int front = -1, rear = -1;

void enqueue(int val)
{
    if ((front == rear + 1) || (front == 0 && rear == SIZE - 1))
        printf("\nQueue is Full!\n");
    else
    {
        if (front == -1)
            front = 0;
        rear = (rear + 1) % SIZE;
        queue[rear] = val;
        printf("\nAdded %d to Queue!", val);
    }
}

void dequeue()
{
    if (front == -1)
        printf("Queue is Empty!\n");
    else
    {
        int val;
        val = queue[front];
        if (front == rear)
        {
            front = -1;
            rear = -1;
        }
        else
        {
            front = (front + 1) % SIZE;
        }
        printf("Deleted Element: %d", val);
    }
}

void display()
{
    int i;
    printf("\n");
    for (i = front; i != rear; i = (i + 1) % SIZE)
        printf("%d ", queue[i]);
    printf("%d", queue[i]);
    printf("\n");
}

void main()
{
    dequeue();
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    enqueue(60);
    display();
    dequeue();
    enqueue(60);
    display();
}