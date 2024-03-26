#include <stdio.h>

void mergeArrays(int arr1[], int *size1, int arr2[], int *size2, int arr3[]) {
    for (int i = 0; i < *size1; i++) {
        arr3[i] = arr1[i];
    }
    for (int i = 0; i < *size2; i++) {
        arr3[*size1 + i] = arr2[i];
    }
}

int main() {
    int size1, size2;
    printf("Enter the size of the first array: ");
    scanf("%d", &size1);

    int arr1[size1];
    printf("Enter %d elements of the first array in sorted order:\n", size1);
    for (int i = 0; i < size1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the size of the second array: ");
    scanf("%d", &size2);

    int arr2[size2];
    printf("Enter %d elements of the second array in sorted order:\n", size2);
    for (int i = 0; i < size2; i++) {
        scanf("%d", &arr2[i]);
    }

    int mergedArray[size1 + size2];
    mergeArrays(arr1, &size1, arr2, &size2, mergedArray);

    printf("Merged array:\n");
    for (int i = 0; i < size1 + size2; i++) {
        printf("%d ", mergedArray[i]);
    }
    printf("\n");
    return 0;
}
/*
Enter the size of the first array: 3
Enter 3 elements of the first array in sorted order:
1 2 3
Enter the size of the second array: 3
Enter 3 elements of the second array in sorted order:
4 5 6
Merged array:
1 2 3 4 5 6
*/
