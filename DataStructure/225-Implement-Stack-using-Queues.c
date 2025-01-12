#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define MaxSize 20

typedef struct {
    int arr[MaxSize];
    int top;
} MyStack;

bool myStackEmpty(MyStack* obj) {
    return obj->top == -1;
}

int myStackPop(MyStack* obj) {
    if (myStackEmpty(obj)) {
        return -1;
    }
    int data = obj->arr[obj->top];
    obj->top--;
    return data;
}


int myStackTop(MyStack* obj) {
    if (myStackEmpty(obj)) {
        return -1;
    }
    return obj->arr[obj->top];
}

MyStack* myStackCreate() {
    MyStack* stack = (MyStack*)malloc(sizeof(MyStack));
    stack->top = -1;
    return stack;
}

void myStackPush(MyStack* obj, int x) {
    if (obj->top == MaxSize - 1) {
        return;
    }
    obj->top++;
    obj->arr[obj->top] = x;
}

// Free the stack
void myStackFree(MyStack* obj) {
    free(obj);
}