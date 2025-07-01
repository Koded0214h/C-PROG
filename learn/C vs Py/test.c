#include <stdio.h>

void three_sum(int arr[], int n) {
    int max = arr[0];
    for(int i = 1; i < n; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }
    printf("Maximum Value in Array: %d\n", max);
}

int main() {
    int arr[4] = {1, 4, 8, 10};
    int size = sizeof(arr)/sizeof(arr[0]);
    three_sum(arr, size);
    return 0;
}