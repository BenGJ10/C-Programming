#include <stdio.h>
int main(){
    int row, col;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &row, &col);
    int array[row][col];
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            scanf("%d", &array[i][j]);
        }
    }
    printf("Sum of each columns: ");
    for(int j = 0; j < col; j++){
        int sum = 0;
        for(int i = 0; i < row; i++){
            sum += array[i][j];
        }
        printf("%d ",sum);
    }
    printf("\n");
    return 0;
}