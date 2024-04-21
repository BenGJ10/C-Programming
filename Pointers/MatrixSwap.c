// First swap two rows of given input, after that swap 2 columns of given input.

#include <stdio.h>
#include <stdlib.h>
void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main(){
    int row, col;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &row, &col);
    int **arr;
    arr = (int**)calloc(row, sizeof(int*));
    for(int i = 0; i < row; i++){
        arr[i] = (int*)calloc(col, sizeof(int));
        for(int j = 0; j < col; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    printf("Enter the rows to be swapped: ");
    int r1, r2; //rows to be swapped
    scanf("%d %d", &r1, &r2);
    printf("Enter the columns to be swapped: ");
    int s1, s2; //seats to be swapped
    scanf("%d %d", &s1, &s2);
    

    for(int j = 0; j < col; j++){
        swap(&arr[r1-1][j], &arr[r2-1][j]);
    }
    for(int i = 0; i < row; i++){
        swap(&arr[i][s1-1], &arr[i][s2-1]);
    }
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}