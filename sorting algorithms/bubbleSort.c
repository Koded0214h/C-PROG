#include <stdio.h>

void bubbleSort(int arr[], int n) {
    int i, j, temp;
    int swapped;

    for (i=0; i<n-1; i++) {
        swapped = 0;
        for(j=0; j<n-i-1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j +1];
                arr[j+1] = temp;
                swapped = 1;
            }
        }
        if(!swapped) {
            break; // Optimized: break early if no swap
        }
    }
}

void display(int arr[], int n) {
    for(int i=0; i<n; i++)  {
        printf("%d", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {9, 1, 6, 3, 7, 5};

    int n = sizeof(arr)/sizeof(arr[0]);

    printf("Original arrasy: ");
    display(arr, n);

    bubbleSort(arr, n);

    printf("Sorted array: ");
    display(arr, n);

    return 0;
}