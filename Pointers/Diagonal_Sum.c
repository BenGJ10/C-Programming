// Compare the main diagonal sum and secondary diagonal sum of a given matrix.

#include <stdio.h>
#include <stdlib.h>
int main(){
    int size;
    scanf("%d", &size);
    int **arr;
    arr = (int**)calloc(size, sizeof(int*));
    for(int i = 0; i < size; i++){
        arr[i] = (int*)calloc(size, sizeof(int));
        for(int j = 0; j < size; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    
    int md_sum = 0, sd_sum = 0;
    for(int i = 0; i < size; i++){
        
        md_sum += arr[i][i];
    }
    for(int i = 0; i < size; i++){
        
        sd_sum += arr[i][size - i - 1];
    }
    
    if(md_sum >= sd_sum)
        printf("Main diagonal sum is greater.");
    else
        printf("Secondary diagonal sum is greater.");
    return 0;
}
