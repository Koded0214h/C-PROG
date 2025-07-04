#include <stdio.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* top = NULL;

void push(int value) {
    struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));

    if(newNode == NULL) {
        printf("Heap overflow\n");
        return;
    }

    newNode->data = value;
    newNode->next = top;
    top = newNode;

    printf("%d pushed to stack\n", value);
}

void pop() {
    if (top == NULL) {
        printf("Stack underflow\n");
        return;
    }

    printf("Popped: %d", top->data);

    struct Node* temp = top;
    top = top->next;
    free(temp);
}

void peek() {
    if(top == NULL) {
        printf("Stack is empty!\n");
    } else {
        printf("Top element: %d", top->data);
    }
}

void display() {
    if (top == NULL) {
        printf("Stack is empty!\n");
    } else {
        struct Node* temp = top;
        printf("Stack elemenst: ");
        while (temp != NULL) {
            printf("%d ", temp->data);
            temp = temp->next;
        }
        printf("\n");
    }
}

void clear() {
    while (top != NULL) {
        pop();
    }
    printf("Stack cleared\n");
}

int main() {
    int choice, value;

    while (1) {
        printf("\n--- STACK (Linked List) MENU ---\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Peek\n");
        printf("4. Display\n");
        printf("5. Clear\n");
        printf("6. Exit\n");
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
                clear();
                break;
            case 6:
                return 0;
            default:
                printf("Invalid choice\n");
        }
    }
}

