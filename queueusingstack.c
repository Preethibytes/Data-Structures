#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Define a stack data structure
typedef struct Stack {
    int *data;
    int top;
    int capacity;
} Stack;

// Function to create a stack
Stack* createStack(int capacity) {
    Stack *stack = (Stack *)malloc(sizeof(Stack));
    stack->data = (int *)malloc(capacity * sizeof(int));
    stack->top = -1;
    stack->capacity = capacity;
    return stack;
}

// Function to check if stack is empty
bool isEmpty(Stack *stack) {
    return stack->top == -1;
}

// Function to push an element onto a stack
void pushStack(Stack *stack, int x) {
    stack->data[++stack->top] = x;
}

// Function to pop an element from a stack
int popStack(Stack *stack) {
    if (!isEmpty(stack)) {
        return stack->data[stack->top--];
    }
    return -1; // Return an invalid value if the stack is empty
}

// Function to peek the top element of a stack
int peekStack(Stack *stack) {
    if (!isEmpty(stack)) {
        return stack->data[stack->top];
    }
    return -1; // Return an invalid value if the stack is empty
}

// Define the MyQueue class that uses two stacks
typedef struct MyQueue {
    Stack *stack1;
    Stack *stack2;
} MyQueue;

// Function to create a MyQueue object
MyQueue* createQueue(int capacity) {
    MyQueue *queue = (MyQueue *)malloc(sizeof(MyQueue));
    queue->stack1 = createStack(capacity);
    queue->stack2 = createStack(capacity);
    return queue;
}

// Pushes element x to the back of the queue
void push(MyQueue *queue, int x) {
    pushStack(queue->stack1, x);
}

// Removes the element from the front of the queue and returns it
int pop(MyQueue *queue) {
    if (isEmpty(queue->stack2)) {
        while (!isEmpty(queue->stack1)) {
            pushStack(queue->stack2, popStack(queue->stack1));
        }
    }
    return popStack(queue->stack2);
}

// Returns the element at the front of the queue
int peek(MyQueue *queue) {
    if (isEmpty(queue->stack2)) {
        while (!isEmpty(queue->stack1)) {
            pushStack(queue->stack2, popStack(queue->stack1));
        }
    }
    return peekStack(queue->stack2);
}

// Returns true if the queue is empty, false otherwise
bool empty(MyQueue *queue) {
    return isEmpty(queue->stack1) && isEmpty(queue->stack2);
}

// Function to destroy the queue and free memory
void destroyQueue(MyQueue *queue) {
    free(queue->stack1->data);
    free(queue->stack1);
    free(queue->stack2->data);
    free(queue->stack2);
    free(queue);
}

int main() {
    MyQueue *queue = createQueue(100);  // Create a queue with capacity 100
    
    // Example of usage:
    push(queue, 1);
    push(queue, 2);
    printf("%d\n", peek(queue)); // Output: 1
    printf("%d\n", pop(queue));  // Output: 1
    printf("%d\n", empty(queue)); // Output: false
    
    destroyQueue(queue); // Clean up memory
    return 0;
}
