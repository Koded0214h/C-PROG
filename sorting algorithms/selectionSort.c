#include <stdio.h>

void selectionSort(int arr[], int n) {
    int i, j, minIndex, temp;

    for(i=0; i< n-1; i++) {
        minIndex = i;

        for (j=i+1; j<n; j++) {
            if(arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        if (minIndex != i) {
            temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }
}

void display(int arr[], int n) {
    for (int i=0; i<n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {

    int arr[] = {1, 10, 7, 3, 8, 22};
    int n = sizeof(arr)/sizeof(arr[0]);

    printf("Original array: ");
    display(arr, n);

    selectionSort(arr, n);

    printf("Sorted array: ");
    display(arr, n);

    return 0; 
}