#include <stdio.h>

void deleteDuplicates(int arr[], int *size) {
    for (int i = 0; i < *size; ++i) {
        for (int j = i + 1; j < *size;) {
            if (arr[i] == arr[j]) {
                for (int k = j; k < *size - 1; ++k) {
                    arr[k] = arr[k + 1];
                }
                (*size)--;
            } else {
                j++;
            }
        }
    }
}

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter %d elements of the array:\n", size);
    for (int i = 0; i < size; ++i) {
        scanf("%d", &arr[i]);
    }

    deleteDuplicates(arr, &size);

    printf("Array after deleting duplicates:\n");
    for (int i = 0; i < size; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
/*
Enter the size of the array: 4
Enter 4 elements of the array:
1 2 2 3
Array after deleting duplicates:
1 2 3 
*/
