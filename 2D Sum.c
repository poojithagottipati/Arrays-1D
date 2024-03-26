#include <stdio.h>

void row_sum(int rows, int cols, int arr[rows][cols]) {
    int row_sum = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            row_sum += arr[i][j]; 
        }
        printf("Sum of elements in row %d: %d\n", i + 1, row_sum);
        row_sum = 0; 
    }
}
void print_matrix(int rows, int cols, int matrix[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int rows = 2;
    int cols = 3;
    
    int arr1[2][3] = {{1, 4, 3}, {2, 8, 5}};
    
    // Function pointer declaration
    void (*ptr)(int, int, int[rows][cols]);
    ptr = &row_sum;
    
    void (*fptr)(int, int, int[rows][cols]);
    fptr = &print_matrix;
    // Print the original matrix
    printf("Matrix 1:\n");
   (*fptr)(rows, cols, arr1);
    (*ptr)(rows, cols, arr1);

    return 0;
}
/*
Matrix 1:
1 4 3 
2 8 5 
Sum of elements in row 1: 8
Sum of elements in row 2: 15
*/
