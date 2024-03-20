#include <stdio.h>

void countEvenOdd(int arr[], int size) {
    int even_count = 0;
    int odd_count = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            even_count++;
        } else {
            odd_count++;
        }
    }

    printf("Number of even elements in the array: %d\n", even_count);
    printf("Number of odd elements in the array: %d\n", odd_count);
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

    countEvenOdd(arr, size);

    return 0;
}

/*
Enter the size of the array: 5
Enter 5 elements of the array:
6 7 8 9 0 
Number of even elements in the array: 3
Number of odd elements in the array: 2
*/
