// Write a C program to delete a row
#include <stdio.h>
#include <stdlib.h>
int main(){
    int rows, cols;
    scanf("%d %d", &rows, &cols);
    int **arr;
    arr = (int**)malloc(rows * sizeof(int*));
    for(int i = 0; i < rows; i++){
        arr[i] = (int*)malloc(cols * sizeof(int));
        for(int j = 0; j < cols; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    int del_row;
    scanf("%d", &del_row);
    del_row--;
    for(int i = del_row; i < rows - 1; i++){
        arr[i] = arr[i + 1];
    }
    rows--;
    arr = (int**)realloc(arr, rows*sizeof(int*));
    for(int i = 0; i < rows; i++){
        arr[i] = (int*)realloc(arr[i], cols*sizeof(int));
    }
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    for(int i = 0; i < rows; i++){
        free(arr[i]);
    }
    free(arr);
    return 0;
}
// 1 2 3
// 4 5 6
// 7 8 9
// 2 --> 1 2 3
//       7 8 9 