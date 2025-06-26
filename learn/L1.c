#include <stdio.h>

int main() {
    int numbers[] = {4, 8, 2, 14, 5};

    int max = numbers[0];
    int min = numbers[0];
    int evenCount = 0;
    int size = sizeof(numbers) / sizeof(numbers[0]);

    for(int i = 0; i < size; i++) {
        if (numbers[i] > max) max = numbers[i];
        if (numbers[i] < min) min = numbers[i];
        if (numbers[i] %2 == 0 ) evenCount++;
    }

    printf("Max = %d\n", max);
    printf("Min = %d\n", min);
    printf("evenCount = %d\n", evenCount);
    return 0;
}