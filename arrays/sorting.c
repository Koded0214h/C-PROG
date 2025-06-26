#include <stdio.h>

int main() {
    
    int arr[5] = {10, 20, 30, 40, 50};

    int size = sizeof(arr) / sizeof(arr[0]);

    for(int i=0; i < size -1; i++) {
        for(int j=0; j < size -i-1; j++) {
            int temp = arr[j]
            arr[j] = arr[j + 1]
            arr[j + 1] = temp
        }
    }

}