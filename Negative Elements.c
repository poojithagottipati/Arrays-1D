#include <stdio.h>

void countNegative(int arr[], int size) {
    int negative = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] < 0) {
            negative++;
        }
    }

    printf("Number of negative elements in the array: %d\n", negative);
}

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    
    int arr[size];
    printf("Enter %d elements of the array:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    countNegative(arr, size);

    return 0;
}
/*
Enter the size of the array: 5
Enter 5 elements of the array:
9 0 -1 -3 8
Number of negative elements in the array: 2
*/
