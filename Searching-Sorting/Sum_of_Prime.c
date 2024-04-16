// Identify prime numbers within a 2D array and calculate their cumulative sum.
#include <stdio.h>
int isPrime(int num){
    if(num<=1)
        return 0;
    for(int i = 2; i*i <= num; i++){
        if(num % i == 0)
            return 0;
    }
    return 1;
}
int sumofPrimes(int row, int col, int *arr){
    int sum = 0;
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            if(isPrime(*(arr + i * col + j)))
                sum += *(arr + i * col + j);
        }
    }
    return sum;
}
int main(){
    int rows, cols;
    scanf("%d %d", &rows, &cols);
    int array[rows][cols];
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            scanf("%d", &array[i][j]);
        }
    }
    printf("Sum of primes: %d\n", sumofPrimes(rows, cols, (int *)array));
    return 0;
}
