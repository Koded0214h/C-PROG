#include <stdio.h>

// 🟢 Merge two sorted halves: arr[left..mid] and arr[mid+1..right]
void merge(int arr[], int left, int mid, int right) {
    int i, j, k;

    int n1 = mid - left + 1;
    int n2 = right - mid;

    // Temporary arrays
    int L[n1], R[n2];

    // Copy data to temp arrays L[] and R[]
    for (i = 0; i < n1; i++)
        L[i] = arr[left + i];

    for (j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];

    // Merge the temp arrays back into arr[]
    i = 0;  // index for L[]
    j = 0;  // index for R[]
    k = left;  // index for arr[]

    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k++] = L[i++];
        } else {
            arr[k++] = R[j++];
        }
    }

    // Copy any remaining elements of L[]
    while (i < n1) {
        arr[k++] = L[i++];
    }

    // Copy any remaining elements of R[]
    while (j < n2) {
        arr[k++] = R[j++];
    }
}

// 🔵 Recursive merge sort
void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;

        // Sort first and second halves
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);

        // Merge sorted halves
        merge(arr, left, mid, right);
    }
}

void display(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {6, 2, 8, 4, 1, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    display(arr, n);

    mergeSort(arr, 0, n - 1);

    printf("Sorted array: ");
    display(arr, n);

    return 0;
}
