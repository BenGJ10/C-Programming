/* C program to find the sum of even Fibonacci numbers 
    up to a given limit using call by reference */
#include <stdio.h>
void evenFibSum(int limit, int *sum){
    int fib1 = 0, fib2 = 1, fib3;
    *sum = 0;
    while(fib2 <= limit){
        fib3 = fib1 + fib2;
        if((fib3 % 2 == 0) && (fib3 <= limit)){
            *sum += fib3;
        }
        fib1 = fib2;
        fib2 = fib3;
    }
}
int main(){
    int limit, sum;
    printf("Enter the limit: ");
    scanf("%d", &limit);
    evenFibSum(limit, &sum);
    printf("The even sum of %d fibonacci terms are %d\n",limit,sum);
    return 0;
}