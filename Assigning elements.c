#include <stdio.h>

int main() {
    int array[5]; 

    printf("enter the elements:");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &array[i]); 
    }
  
    printf("elements in the array: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
/*
enter the elements:7 8 9 0 2
elements in the array: 7 8 9 0 2 
*/
