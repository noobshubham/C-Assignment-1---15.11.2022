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
    printf("Enter the Size of the Array: ");
    scanf("%d", &s->size);
    s->top = -1;
    s->arr = (int *)malloc(s->size * sizeof(int));
}

void push(struct stack *s, int val)
{
    if (s->top == s->size - 1) printf("Stack Overflow\n");
    else
        s->arr[++s->top] = val;
}

int pop(struct stack *s)
{
    int val = -1;
    if (s->top == -1) printf("Stack Underflow\n");
    else
        val = s->arr[s->top--];
    return val;
}

int isEmpty(struct stack s)
{
    if (s.top == -1) return 1;
    return 0;
}

int isFull(struct stack s)
{
    return s.top == s.size - 1;
}

int stackTop(struct stack s)
{
    if (!isEmpty(s)) return s.arr[s.top];
    return -1;
}

int peek(struct stack s, int index)
{
    int val = -1;
    if (s.top - index + 1 < 0) printf("Invalid Index\n");
    val = s.arr[s.top - index + 1];
    return val;
}

void main() {
    struct stack stk;
    create(&stk);

    push(&stk, 10);
    push(&stk, 30);
    push(&stk, 50);
    push(&stk, 70);

    printf("%d \n", peek(stk, 1));
    printf("%d \n", peek(stk, 2));
    printf("%d \n", peek(stk, 3));
    printf("%d \n", peek(stk, 4));
}