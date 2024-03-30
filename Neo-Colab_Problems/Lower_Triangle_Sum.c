// Write a C program to calculate the sum of a Lower Triangle Matrix
#include <stdio.h>

int main(){
    int size;   // NxN 
    printf("Enter the dimension of the array: ");
    scanf("%d", &size);
    int array[size][size];
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            scanf("%d", &array[i][j]);
        }
    }
    int sum = 0;
    for(int i = 0; i < size; i++){
        for(int j = 0; j < i; j++){
            sum += array[i][j];
        }
    }
    printf("The sum of the lower triangle matrix: %d\n", sum);
    return 0;
}
