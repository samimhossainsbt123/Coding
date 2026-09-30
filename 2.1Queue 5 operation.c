#include <stdio.h>

#define SIZE 10

int queue[SIZE];
int front = -1;
int rear = -1;

// Enqueue operation
void enqueue(int value)
{
    if (rear == SIZE - 1)
    {
        printf("Queue Overflow\n");
    }
    else
    {
        if (front == -1)
            front = 0;

        rear++;
        queue[rear] = value;

        printf("%d inserted into queue.\n", value);
    }
}

// Dequeue operation
void dequeue()
{
    if (front == -1 || front > rear)
    {
        printf("Queue Underflow\n");
    }
    else
    {
        printf("%d deleted from queue.\n", queue[front]);
        front++;
    }
}

// Peek operation
void peek()
{
    if (front == -1 || front > rear)
    {
        printf("Queue is empty.\n");
    }
    else
    {
        printf("Front element: %d\n", queue[front]);
    }
}

// Display operation
void display()
{
    if (front == -1 || front > rear)
    {
        printf("Queue is empty.\n");
    }
    else
    {
        printf("Queue elements:\n");

        for (int i = front; i <= rear; i++)
        {
            printf("%d ", queue[i]);
        }

        printf("\n");
    }
}

// IsEmpty operation
void isEmpty()
{
    if (front == -1 || front > rear)
        printf("Queue is empty.\n");
    else
        printf("Queue is not empty.\n");
}

int main()
{
    enqueue(10);
    enqueue(20);
   enqueue(30);

    display();

    peek();

    dequeue();

    display();

    isEmpty();

    return 0;
}
