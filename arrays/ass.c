#include <stdio.h>


int main() {
    int arr[2][3];

    printf("Enter 6 values for the 2D array (2 rows x 3 cols):\n");

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &arr[i][j]);  // Use & to store in memory
        }
    }

    // Sum of even numbers
    int evenSum = 0;

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            if (arr[i][j] % 2 == 0) {
                evenSum += arr[i][j];
            }
        }
    }

    printf("Sum of even numbers: %d\n", evenSum);
    // Accept a word and reverse the string

    char word[20];

    printf("Enter a word: ");
    scanf("%s", word); // good

    int len = 0;
    while (word[len] != '\0') {
        len++;
    }

    int start = 0, end = len - 1;

    while (start < end) {
        char temp = word[start];
        word[start] = word[end];
        word[end] = temp;
        start++;
        end--;
    }

    printf("Reversed word: %s\n", word);

    return 0;
}