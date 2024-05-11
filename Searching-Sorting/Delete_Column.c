// Write a C program to delete a column
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
    int del_col;
    scanf("%d", &del_col);
    del_col--;
    for(int i = 0; i < rows; i++){
        for(int j = del_col; j < cols - 1; j++){
            arr[i][j] = arr[i][j + 1];
        }
    }
    for(int i = 0; i < rows; i++){
        arr[i] = (int*)realloc(arr[i], (cols-1) * sizeof(int));
    }
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols - 1; j++){
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
// 2 --> 1 3
//       4 6
//       7 9