// Create a Task Scheduler using Circular Queue(Array Type)

#include <stdio.h>
#define SIZE 5

typedef struct {
    int id;
    char name[30];
} Task;

Task taskQueue[SIZE];
int front = -1, rear = -1;

void addTask(Task t) {
    if((rear + 1) % SIZE == front) {
        printf("Task queue is full!\n");
    }

    if (front == -1 && rear == -1) {
        front = rear = 0;
    } else {
        rear = (rear + 1) % SIZE;
    }

    taskQueue[rear] = t;
    printf("Task %s (ID: %d) added.\n", t.name, t.id);
}

Task removeTask() {
    Task empty = {-1, ""};

    if (front == -1 && rear == -1) {
        printf("No tasks to process!\n");
        return empty;
    }

    Task t = taskQueue[front];
    if (front == rear) {
        front = rear = -1;
    } else {
        front = (front + 1) % SIZE;
    }

    return t;
}

void displayTasks() {
    if(front == -1) {
        printf("Taak queue is empty!\n");
        return;
    }

    int i=front;
    print("Scheduled Tasks: \n");
    while(1) {
        printf("- %s (ID: %d)\n", taskQueue[i].name, taskQueue[i].id);
        if(i == rear) break;
        i = (i + 1) % SIZE;
    }
}

void runNextTask() {
    if (front == -1) {
        printf("No task to run.\n");
        return;
    }

    Task t = dequeue();
    printf("Running task: %s (ID: %d)... ✅\n", t.name, t.id);
}


int main() {
    int choice;
    Task t;
    int idCounter = 1;

    while (1) {
        printf("\n--- TASK SCHEDULER MENU ---\n");
        printf("1. Add Task\n");
        printf("2. Run Next Task\n");
        printf("3. View All Tasks\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        getchar(); // to consume newline after scanf

        switch (choice) {
            case 1:
                printf("Enter task name: ");
                fgets(t.name, sizeof(t.name), stdin);
                t.name[strcspn(t.name, "\n")] = '\0'; // remove trailing newline
                t.id = idCounter++;
                addTask(t);
                break;
            case 2:
                runNextTask();
                break;
            case 3:
                displayTasks();
                break;
            case 4:
                return 0;
            default:
                printf("Invalid option\n");
        }
    }
}
