// C Program to Find Sum of Natural Numbers using Recursion
#include <stdio.h>
int recSum(int n){
    if(n <= 1)
        return n;
    else
        return n + recSum(n - 1);
}
int main(){
    int num;
    scanf("%d", &num);
    int sum = recSum(num);
    printf("The sum of %d natural numbers are: %d\n", num, sum);
    return 0;
}