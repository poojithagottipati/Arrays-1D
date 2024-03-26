#include <stdio.h>

void unique(int arr[], int *size) {
    int uniqueIndex = 0;

    for (int i = 0; i < *size; i++) {
        int count = 0;
        for (int j = 0; j < *size; j++) {
            if (i != j && arr[i] == arr[j]) {
                count++;
                break;
            }
        }
        if (count == 0) {
            arr[uniqueIndex++] = arr[i];
        }
    }

    *size = uniqueIndex;
}

int main() {
    int arr[] = {1, 2, 2, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    unique(arr, &size);

    printf("Unique elements:");
    for (int i = 0; i < size; i++) {
        printf(" %d", arr[i]);
    }
    printf("\n");

    return 0;
}
