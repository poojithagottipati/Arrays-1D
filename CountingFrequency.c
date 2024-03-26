#include <stdio.h>

void countFrequency(int arr[], int size) {
    int freq[size];
    int visited = -1;

    for (int i = 0; i < size; i++) {
        int count = 1;
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                count++;
                freq[j] = visited;
            }
        }
        if (freq[i] != visited) {
            freq[i] = count;
        }
    }
    printf("Element \t Frequency\n");
    for (int i = 0; i < size; i++) {
        if (freq[i] != visited) {
            printf("%d \t\t %d\n", arr[i], freq[i]);
        }
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

    countFrequency(arr, size);

    return 0;
}
