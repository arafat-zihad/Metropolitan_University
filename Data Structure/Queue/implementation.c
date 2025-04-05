#include <stdio.h>
#define MAX 5

int queue[MAX], n = MAX, front = -1, rear = -1;

void enqueue()
{
    int x;
    printf("Enter value to enqueue: ");
    scanf("%d", &x);
    if (rear == n - 1)
    {
        printf("Queue is full\n");
    }
    else
    {
        if (front == -1)  // If queue is empty
            front = 0;
        rear++;
        queue[rear] = x;
    }
}

void dequeue()
{
    if (front == -1 || front > rear)
    {
        printf("Queue is empty\n");
    }
    else
    {
        printf("The dequeued element is: %d\n", queue[front]);
        front++;
    }
}

void display()
{
    if (front == -1 || front > rear)
    {
        printf("queue is empty\n");
    }
    else
    {
        printf("Queue elements are\n");
        for(int i = front; i <= rear; i++)
            printf("%d\n", queue[i]);
    }
}

int main()
{
    int n;
    printf("how many value you want to push ");
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        enqueue();
    }
    display();
    dequeue();
    dequeue();
    display();
    return 0;
}