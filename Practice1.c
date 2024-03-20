#include <stdio.h>

int arraySum(int arr[], int size) {

    if (size == 0) {
        return 0;
    }
    return arr[size - 1] + arraySum(arr, size - 1);
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]); 
    int sum = arraySum(arr, size);

    printf("Sum of array elements: %d\n", sum);

    return 0;
}
//Sum of array elements: 15
