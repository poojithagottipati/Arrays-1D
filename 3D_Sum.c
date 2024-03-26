#include <stdio.h>

void row_sum(int dep, int rows, int cols, int arr[dep][rows][cols]) {
    int row_sum = 0;
    for (int i = 0; i < dep; i++) {
        for (int j = 0; j < rows; j++) {
            for (int k = 0; k < cols; k++) {
                row_sum += arr[i][j][k];
            }
            printf("Sum of elements in row %d of matrix %d: %d\n", j + 1, i + 1, row_sum);
            row_sum = 0;
        }
    }
}

void print_matrix(int dep, int rows, int cols, int matrix[dep][rows][cols]) {
    for (int i = 0; i < dep; i++) {
        printf("Matrix %d:\n", i + 1);
        for (int j = 0; j < rows; j++) {
            for (int k = 0; k < cols; k++) {
                printf("%d ", matrix[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
}

int main() {
    int rows = 2;
    int cols = 3;
    int dep = 2;
    
    int arr1[2][2][3] = 
    {
        {{1, 4, 3}, {2, 8, 5}}, 
        {{9, 5, 6}, {2, 8, 5}}
    };
    
    printf("Matrix elements:\n");
    print_matrix(dep, rows, cols, arr1);
    
    row_sum(dep, rows, cols, arr1);

    return 0;
}
/*
Matrix elements:
Matrix 1:
1 4 3 
2 8 5 

Matrix 2:
9 5 6 
2 8 5 

Sum of elements in row 1 of matrix 1: 8
Sum of elements in row 2 of matrix 1: 15
Sum of elements in row 1 of matrix 2: 20
Sum of elements in row 2 of matrix 2: 15

*/
