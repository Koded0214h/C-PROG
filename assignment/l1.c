#include <stdio.h>

int main() {
    int arr[2][3];
    printf("Enter values for 2D array:\n");

    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 3; j++)
            scanf("%d", &arr[i][j]);

    int evenSum = 0, min = arr[0][0], max = arr[0][0];

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            if (arr[i][j] % 2 == 0)
                evenSum += arr[i][j];

            if (arr[i][j] < min)
                min = arr[i][j];

            if (arr[i][j] > max)
                max = arr[i][j];

            printf("Address of arr[%d][%d] = %p\n", i, j, &arr[i][j]);
        }
    }

    printf("Sum of even numbers: %d\n", evenSum);
    printf("Minimum: %d\n", min);
    printf("Maximum: %d\n", max);

    return 0;
}
