#include <stdio.h>

int main() {

    int matrix[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    // Traverse a 2D array
    for(int i=0; i < 2; i++) {
        for (int j=0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    // Sum of Each Row

    for(int i=0; i<2; i++) {
        int sum = 0;
        for(int j=0; j < 3; j++) {
            sum += matrix[i][j];
        }
        printf("\nRow %d sum = %d \n", i, sum);
    }
    return 0;
}