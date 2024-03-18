#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5}; 
    int array_size = sizeof(arr) / sizeof(arr[0]);

    printf("Size of the array: %d\n", array_size);

    return 0;
}
//Size of the array: 5
