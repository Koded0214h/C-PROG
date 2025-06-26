#include <stdio.h>
#define SIZE 10

int stack[SIZE];
int top = -1;

// Push
void push(int value) {
    if (top == SIZE - 1) {
        printf("Stack Overflow\n");
    } else {
        top++;
        stack[top] = value;
        printf("%d pushed to stack.\n", value);
    }
}

// Pop
void pop() {
    if (top == -1) {
        printf("Stack Underflow\n");
    } else {
        printf("Popped: %d\n", stack[top]);
        top--;
    }
}

// Peek
void peek() {
    if (top == -1) {
        printf("Stack is empty\n");
    } else {
        printf("Top element: %d\n", stack[top]); // 🔧 missing semicolon
    }
}

// Display
void display() {
    if (top == -1) {
        printf("Stack is empty\n");
    } else {
        printf("Stack elements: ");
        for (int i = top; i >= 0; i--) {
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
}

// Size
void size() {
    printf("Number of elements in stack: %d\n", top + 1);
}

// Clear
void clear() {
    top = -1;
    printf("Stack cleared.\n");
}

// Main menu
int main() {
    int choice, value;

    while (1) {
        printf("\n--- STACK MENU ---\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Peek\n");
        printf("4. Display\n");
        printf("5. Size\n");
        printf("6. Clear\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to push: ");
                scanf("%d", &value);
                push(value);
                break;
            case 2:
                pop();
                break;
            case 3:
                peek();
                break;
            case 4:
                display();
                break;
            case 5:
                size();
                break;
            case 6:
                clear();
                break;
            case 7:
                return 0;
            default:
                printf("Invalid choice!\n");
        }
    }
}
