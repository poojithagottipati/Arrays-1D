#include <stdio.h>

void matrix_addition(int rows, int cols, int arr1[rows][cols], int arr2[rows][cols], int result[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
}
int main() {
    int rows = 2;
    int cols = 3;
  
    int arr1[2][3] = {{1, 2, 3}, {2, 6, 5}};
    int arr2[2][3] = {{9, 5, 3}, {6, 5, 5}};
    int result[2][3];

    matrix_addition(rows, cols, arr1, arr2, result);

    printf("\nResult of matrix addition:\n");
    for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
          printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
/*
Result of matrix addition:
10 7 6 
8 11 10 
*/
