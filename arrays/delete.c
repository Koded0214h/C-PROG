#include <stdio.h>

int main() {

    int pos = 2;

    int arr[] = {4, 8, 2, 14, 5};
    
    int size = sizeof(arr) / sizeof(arr[0]);

    for (int i=pos; i < size -1; i++) {
        arr[i] = arr[i+1];
    }

    size --;

    return 0;
}