#include <stdio.h>

int main() {

    int arr[5] = {10, 20, 30, 40, 50}

    int size = sizeof(arr) / sizeof(arr[0])

    int start = 0, end = size - 1;

    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }


}