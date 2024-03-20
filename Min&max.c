#include <stdio.h>

int findMax(int arr[], int size) {
    if (size == 1)
        return arr[0];
    else {
        int max = findMax(arr + 1, size - 1);
        return (arr[0] > max) ? arr[0] : max;
    }
}

int findMin(int arr[], int size) {
    if (size == 1)
        return arr[0];
    else {
        int min = findMin(arr + 1, size - 1);
        return (arr[0] < min) ? arr[0] : min;
    }
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

    int max = findMax(arr, size);
    int min = findMin(arr, size);

    printf("Maximum element in the array: %d\n", max);
    printf("Minimum element in the array: %d\n", min);

    return 0;
}
/*
Enter the size of the array: 6
Enter 6 elements of the array:
5 7 9 4 3 8
Maximum element in the array: 9
Minimum element in the array: 3
  */
