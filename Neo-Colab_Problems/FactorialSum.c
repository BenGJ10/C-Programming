// Calculating the sum of factorial digits
#include <stdio.h>
int factorial(int n){
    if(n == 1 || n == 0)
        return 1;
    else
        return n * factorial(n-1);
}
int main(){
    int num, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    for(int i=0; i<=num; i++){
        sum += factorial(i)/i;
    }
    printf("The sum is: %d\n",sum);
    return 0;
}