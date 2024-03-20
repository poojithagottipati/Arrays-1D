#include <stdio.h>

void findSecondLargest(int arr[], int size) {
    int largest = arr[0];
    int second_largest = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] > largest) {
            second_largest = largest;
            largest = arr[i];
        } else if (arr[i] > second_largest && arr[i] != largest) {
            second_largest = arr[i];
        }
    }

    printf("Second largest element in the array: %d\n", second_largest);
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

    findSecondLargest(arr, size);

    return 0;
}
/*
Enter the size of the array: 5
Enter 5 elements of the array:
2 6 7 4 9
Second largest element in the array: 7
  */
