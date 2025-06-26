#include <stdio.h>
#define SIZE 5

int queue[SIZE];
int front = -1, rear = -1;

void enqueue(int value) {
    if((rear + 1) % SIZE == front)  {
        printf("Queue overflow\n");
        return;
    }

    if (front == -1 && rear == -1) {
        front = rear = 0;
    } else {
        rear = (rear + 1) % SIZE;
    }

    queue[rear] = value;
    printf("%d enqueued.\n", value);
}

void dequeue() {
    if(front == -1 && rear == -1) {
        printf("Queue Overflow\n");
        return;
    }

    printf("Dequeued: %d\n", queue[front]);

    if(front == rear) {
        front = rear = -1;
    } else {
        front = (front + 1) % SIZE;
    }
}

void peek() {
    if(front == -1 && rear == -1) {
        printf("Queue is empty!\n");
    } else {
        printf("Front element: %d\n", queue[front]);
    }
}

void display() {
    if(front == -1 && rear == -1) {
        printf("Queue is empty!\n");
        return;
    }

    printf("Queue elements: ");
    int i = front;
    while(1) { 
        printf("%d", queue[i]);
        if( i == rear) break;
        i = (i + 1) % SIZE;
    }
    printf("\n");
}

void size() {
    if(front == -1 && rear == -1) {
        printf("Queue is empty!\n");
        return;
    } else if (rear >= front) {
        printf("Queue size: %d\n", rear - front + 1);
    } else {
        printf("Queue size: %d\n", SIZE - front + rear + 1);
    }
}

void clear() {
    front = rear = -1;
    printf("Queue cleared!\n");
}

int main() {
    int choice, value;

    while (1) {
        printf("\n--- CIRCULAR QUEUE MENU ---\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Peek\n");
        printf("4. Display\n");
        printf("5. Size\n");
        printf("6. Clear\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to enqueue: ");
                scanf("%d", &value);
                enqueue(value);
                break;
            case 2:
                dequeue();
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
                printf("Invalid choice\n");
        }
    }
}
