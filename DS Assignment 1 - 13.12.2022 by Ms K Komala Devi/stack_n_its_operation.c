#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;
    int *arr;
};

void create(struct stack *s)
{
    printf("Enter the Size: ");
    scanf("%d", &s->size);
    s->top = -1;
    s->arr = (int *)malloc(s->size * sizeof(int));
}

void push(struct stack *s, int val)
{
    if (s->top == s->size - 1)
        printf("Stack Overflow\n");
    else
        s->arr[++s->top] = val;
}

int pop(struct stack *s)
{
    int x = -1;
    if (s->top == -1)
        printf("Stack Underflow\n");
    else
        x = s->arr[s->top--];
    return x;
}

int isEmpty(struct stack s)
{
    if (s.top == -1)
        return 1;
    return 0;
}

int isFull(struct stack s)
{
    return s.top == s.size - 1;
}

int stackTop(struct stack s)
{
    if (!isEmpty(s))
        return s.arr[s.top];
    return -1;
}

int peek(struct stack s, int index)
{
    int x = -1;
    if (s.top - index + 1 < 0)
        printf("Invalid Index\n");
    x = s.arr[s.top - index + 1];
    return x;
}

void main()
{
    struct stack st;
    create(&st);

    push(&st, 20);
    push(&st, 40);
    push(&st, 60);
    push(&st, 80);

    printf("%d \n", peek(st, 1));
    printf("%d \n", peek(st, 2));
    printf("%d \n", peek(st, 3));
    printf("%d \n", peek(st, 4));
}