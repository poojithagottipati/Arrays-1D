#include <stdio.h>

void insertElement(int arr[], int *size, int element, int position) {

    if (position < 0 || position > *size) {
        printf("Invalid position\n");
        return;
    }

    for (int i = *size; i > position; i--) {
        arr[i] = arr[i - 1];
    }

    arr[position] = element;
    (*size)++;
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

    int element, position;
    printf("Enter the element to insert: ");
    scanf("%d", &element);
    printf("Enter the position to insert: ");
    scanf("%d", &position);

    insertElement(arr, &size, element, position);

    printf("Array after insertion:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
/*
Enter the size of the array: 6
Enter 6 elements of the array:
3 5 6 8 9 0
Enter the element to insert: 1
Enter the position to insert: 2
Array after insertion:
3 5 1 6 8 9 0
*/
