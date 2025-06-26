#include <stdio.h>
#define SIZE 5

int queue[SIZE];
int front = -1, rear = -1;

void enqueue(int value) {
    if(rear == SIZE -1) {
        printf("Queue Overflow\n");
    } else {
        if(front == -1) front = 0;
        rear++;
        queue[rear] = value;
        printf("%d enqueued.\n", value);
    }
}

void dequeue() {
    if(front == -1 || front > rear) {
        printf("Queue Underflow\n");  
    } else {
        printf("Dequeued: %d \n", queue[front]);
        front++;
    }
}

void peek() {
    if(front == -1 || front > rear) {
        printf("Queue is empty!\n");
    } else {
        printf("Front element: %d\n", queue[front]);
    }
}

void display() {
    if (front == -1 || front > rear) {
        printf("Queue is empty!\n");
    } else {
        printf("Queue elements: ");
        for (int i=front; i <= rear; i++) {
            printf("%d", queue[i]);
        }
        printf("\n");
    }
}

void size() {
    if(front == -1 || front > rear) {
        printf("Queue is empty!\n");
    } else {
        printf("Queue size: %d\n", rear - front + 1);

        // OR YOU CAN DO THIS
        int elem = 0;
        for (int i=front; i<= rear; i++) {
            elem++;
        }

        printf("Queue size: %d\n", elem);
    }
}

void clear() {
    if (front == -1 || front > rear) {
        printf("Queue is empty!\n");
    } else {
        front = rear = -1;
        printf("Queue cleared!\n");

        // or you can do this -> i think this should be O(n)
        for(int i=front; i<=rear; i++) {
            pop();
        }
        printf("Queue cleared!\n");
    }
}

int main() {
    int choice, value;

    while (1) {
        printf("\n--- QUEUE MENU ---\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Peek\n");
        printf("4. Display\n");
        printf("5. Size\n");
        printf("6. Clear Queue\n");
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
