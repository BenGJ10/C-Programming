/*   Find out which row or column has the largest sum
    (sum of all the elements in a row/column) amongst all the rows and columns.  */
#include <stdio.h>
int main(){
    int row, col;
    scanf("%d %d", &row, &col);
    int array[row][col];
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            scanf("%d", &array[i][j]);
        }
    }   // Row Sum
    int largest_row_sum = 0, row_index = 0;
    for(int i = 0; i < row; i++){
        int row_sum = 0;
        for(int j = 0; j < col; j++){
            row_sum += array[i][j];
        }
        if(row_sum > largest_row_sum){
            largest_row_sum = row_sum;
            row_index = i;
        }
    }   // Column Sum
    int largest_col_sum = 0, col_index = 0;
    for(int j = 0; j < col; j++){
        int col_sum = 0;
        for(int i = 0; i < row; i++){
            col_sum += array[i][j];
        }
        if(col_sum > largest_col_sum){
            largest_col_sum = col_sum;
            col_index = j;
        }
    }
    if(largest_row_sum > largest_col_sum)
        printf("Largest row: %d, Sum: %d", row_index+1, largest_row_sum);
    else
        printf("Largest column: %d, Sum: %d", col_index+1, largest_col_sum); 
    printf("\n");
    return 0;
}