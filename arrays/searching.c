#include <stdio.h>

int main () {

    int arr[5] = {10, 20, 30, 40, 50};

    int size = sizeof(arr) / sizeof(arr[0]);

    int key = 30;
    int found = 0;

    for(int i=0; i < size; i++) {
        if(arr[i] == key) {
            printf("Found at index %d \n", i);
            found = 1;
            break;
        }
    }
    if(!found) printf("404 - Not Found");

}