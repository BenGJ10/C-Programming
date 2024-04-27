#include <stdio.h>
#include <stdlib.h>
int main(){
    int row, col;
    scanf("%d %d", &row, &col);
    int **arr;
    arr = (int**)malloc(row*sizeof(int*));
    for(int i = 0; i < row; i++){
        arr[i] = (int*)malloc(col*sizeof(int));
        for(int j = 0; j < col; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    int x, y;
    scanf("%d %d", &x, &y);
    arr = (int**)realloc(arr, x*sizeof(int*));
    for(int i = 0; i < x; i++){
        arr[i] = (int*)realloc(arr[i], y*sizeof(int));
        for(int j = 0; j < y; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    free(arr);
    return 0;
}
