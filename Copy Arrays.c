#include <stdio.h>

void copyArray(int arr1[], int arr2[], int size) {
    for (int i = 0; i < size; i++) {
        arr2[i] = arr1[i];
    }
}

int main() {
    int size;
    printf("Enter the size of the arrays: ");
    scanf("%d", &size);

    int arr1[size];
    int arr2[size];

    printf("Enter %d elements of array 1:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr1[i]);
    }

    copyArray(arr1, arr2, size);

    printf("Array 1: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr1[i]);
    }
    printf("\n");

    printf("Array 2: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr2[i]);
    }
    printf("\n");

    return 0;
}
/*
Enter the size of the arrays: 4
Enter 4 elements of array 1:
1 5 7 8
Array 1: 1 5 7 8 
Array 2: 1 5 7 8 
*/
