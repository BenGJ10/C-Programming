// Write a program in C to find the sum of the right diagonals of a matrix.
#include <stdio.h>
#include <stdlib.h>
int main(){
    int rows, cols;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &cols);
    int **arr;
    arr = (int**)malloc(rows*sizeof(int*));
    for(int i = 0; i < rows; i++){
        arr[i] = (int*)malloc(cols*sizeof(int));
        for(int j = 0; j < cols; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    int diag_sum = 0;
    for(int i = 0; i < rows; i++){
        for(int j = i; j < i + 1; j++){
            diag_sum += arr[i][j];
        }
    }
    printf("The right diagonal sum: %d\n", diag_sum);
    free(arr);
    return 0;
}
// 1 2 3
// 4 5 6
// 7 8 9