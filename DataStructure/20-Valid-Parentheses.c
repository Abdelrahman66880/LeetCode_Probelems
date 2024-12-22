#include <stdio.h>
#include <stdlib.h>
#define MAX 100000

typedef struct Stack {
    int arr[MAX];
    int top;
} Stack;

void initialization(Stack *stack)
{
    stack->top = -1;
}

int isFull(Stack *stack)
{
    return stack->top == MAX - 1;
}

int isEmpty(Stack *stack)
{
    return stack->top == -1;
}

void push(Stack *stack, int value)
{
    if(isFull(stack))
    {
        printf("Stack overflow\n");
        return;
    }
    stack->top += 1;
    stack->arr[stack->top] = value;
}


int pop(Stack *stack)
{
    if(isEmpty(stack))
    {
        printf("Stack underflow\n");
        exit(-1);
    }
    int value = stack->arr[stack->top];
    stack->top -= 1;
    return value;
}

int peek(Stack *stack)
{
    if(isEmpty(stack))
    {
        printf("Stack underflow");
        exit(-1);
    }
    return stack->arr[stack->top];
}


bool isValid(char* s) {
    Stack stack;
    initialization(&stack);
    for (int i = 0; s[i] != '\0'; i++)
    {
        char bracket = s[i];
        if (isEmpty(&stack)){
            push(&stack, bracket);
        }else if ((peek(&stack) == '(' && bracket == ')') ||
        (peek(&stack) == '{' && bracket == '}') ||
        (peek(&stack) == '[' && bracket == ']'))
        {
            pop(&stack);
        } else{
            push(&stack, bracket);
        }
        
    }
    return isEmpty(&stack);
}