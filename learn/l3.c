#include <stdio.h>
#define SIZE 5

int stack[SIZE];
int top = -1;

void push(int value) {
    if (top == SIZE - 1)
        printf("Stack Overflow\n");
    else
        stack[++top] = value;
}

void pop() {
    if (top == -1)
        printf("Stack Underflow\n");
    else
        printf("Popped: %d\n", stack[top--]);
}

void peek() {
    if (top != -1)
        printf("Top Element: %d\n", stack[top]);
    else
        printf("Stack is Empty\n");
}

int main() {
    push(10);
    push(20);
    peek();
    pop();
    peek();
    return 0;
}