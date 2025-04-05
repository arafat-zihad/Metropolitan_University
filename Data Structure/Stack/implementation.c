#include <stdio.h>
#define MAX 100

int stack[MAX], n = MAX, top = -1;

void push()
{
    int x;
    printf("Enter value to push: ");
    scanf("%d", &x);
    if (top == n - 1)
    {
        printf("Stack is full\n");
    }
    else
    {
        top++;
        stack[top] = x;
    }
}

void pop()
{
    if (top == -1)
    {
        printf("Stack is empty\n");
    }
    else
    {
        printf("The popped element is: %d\n", stack[top]);
        top--;
    }
}

int peek(){
    return stack[top];
}

void display()
{
    if(top >=0)
    {
        printf("Stack elements are\n");
        for(int i = top; i >= 0; i--)
            printf("%d\n", stack[i]);
    }
    else
    {
        printf("stack is empty\n");
    }
}

int main()
{
    int n;
    printf("how many value you want to push ");
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        push();
    }
    display();
    pop();
    pop();
    display();
    int x = peek();
    printf("Peek value is %d \n", x);
    return 0;
}