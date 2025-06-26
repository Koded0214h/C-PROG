#include <stdio.h>

int main () {
    int numbers[] = { 50, 60, 70, 80, 90};

    int size = sizeof(numbers) / sizeof(numbers[0]);

    int sum = 0;

    for (int i = 0; i < size; i++) {
        sum += numbers[i];
    }
    printf("The sum of the array is %d", sum);

    return 0;
}