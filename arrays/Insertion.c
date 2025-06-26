#include <stdio.h>

int main() {
    int arr[6] = {10, 20, 30, 50, 60}
    int size = 5;
    int pos = 3;
    int value = 40;

    for(int i=0; i > pos; i--) {
        arr[i] = arr[i-1]
    }
    arr[pos] = value;
    size++;

    for(int i=0; i < size; i++) {
        printf("%d", arr[i]);
    }

    return 0;
}