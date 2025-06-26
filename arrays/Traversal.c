#include <stdio.h>

int main() {
    int arr[] = {4, 8, 2, 14, 5};
    
    int size = sizeof(arr) / sizeof(arr[0]);

    for (int i=0; i < size; i++) {
        printf("%d", arr[i])
    }
}