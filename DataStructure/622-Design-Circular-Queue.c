#include <stdlib.h>
#include <stdio.h>



typedef struct {
    int *arr_data; //array of data
    int rear;
    int front;
    int count; //counter to trak the iterations
    int MaxSize;
    
} MyCircularQueue;


MyCircularQueue* myCircularQueueCreate(int k) {
    MyCircularQueue *queue = (MyCircularQueue*) malloc(sizeof(MyCircularQueue));
    queue->arr_data = (int*) malloc(sizeof(int) * k);
    queue->rear = -1;
    queue->front = -1;
    queue->count = 0;
    queue->MaxSize = k;

    return queue;

}
// ==========================
bool myCircularQueueIsEmpty(MyCircularQueue* obj) {
    return obj->count == 0;
}

bool myCircularQueueIsFull(MyCircularQueue* obj) {
    return obj->count == obj->MaxSize;
}

bool myCircularQueueEnQueue(MyCircularQueue* obj, int value) {
    if (myCircularQueueIsFull(obj))
    {
        return false;
    }
    if(obj->front == -1)
    {
        obj->front = 0;
    }

    obj->rear = (obj->rear + 1) % obj->MaxSize;
    obj->count += 1;
    obj->arr_data[obj->rear] = value;
    return true;
    
}

bool myCircularQueueDeQueue(MyCircularQueue* obj) {
    if(myCircularQueueIsEmpty(obj))
    {
        return false;
    }
    obj->front = (obj->front + 1) % obj->MaxSize;
    obj->count -= 1;
    return true;
    
}

int myCircularQueueFront(MyCircularQueue* obj) {
    if (myCircularQueueIsEmpty(obj)) {
        return -1;
    }
    return obj->arr_data[obj->front];
}

int myCircularQueueRear(MyCircularQueue* obj) {
    if (myCircularQueueIsEmpty(obj)) {
        return -1;
    }
    return obj->arr_data[obj->rear];
}


void myCircularQueueFree(MyCircularQueue* obj) {
    free(obj->arr_data);
    free(obj);
}

/**
 * Your MyCircularQueue struct will be instantiated and called as such:
 * MyCircularQueue* obj = myCircularQueueCreate(k);
 * bool param_1 = myCircularQueueEnQueue(obj, value);
 
 * bool param_2 = myCircularQueueDeQueue(obj);
 
 * int param_3 = myCircularQueueFront(obj);
 
 * int param_4 = myCircularQueueRear(obj);
 
 * bool param_5 = myCircularQueueIsEmpty(obj);
 
 * bool param_6 = myCircularQueueIsFull(obj);
 
 * myCircularQueueFree(obj);
*/