// Print the elements in a 2d array in sine wave order.
#include <stdio.h>
int main(){
    int row, col;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &row, & col);
    int array[row][col];
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            scanf("%d", &array[i][j]);}
    }
    printf("Sine Wave Print: \n");
    for(int j = 0; j < col; j++){
        if(j % 2 == 0){
            for(int i = 0; i < row; i++){
                printf("%d ", array[i][j]);
            }     
        }
        else
            for(int i = row - 1; i >=0; i--){
                printf("%d ", array[i][j]);
            }   
    }
    printf("\n");
    return 0;
}