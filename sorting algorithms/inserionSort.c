#include <stdio.h>

void insertionSort(int arr[], int n) {
    int i, j, current;

    for(i = 1; i < n; i++) {  // ✅ fix here
        current = arr[i];
        j = i - 1;

        while(j >= 0 && arr[j] > current) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = current;
    }
}

void display(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {10, 2, 4, 7, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    display(arr, n);

    insertionSort(arr, n);

    printf("Sorted array: ");
    display(arr, n);

    return 0;
}
