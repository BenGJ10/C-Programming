// C program to find the maximum prime factor of a number using call by reference
#include <stdio.h>
int isPrime(int num){
    if(num<=1)
        return 0;
    for(int i=2; i*i<num; i++){
        if(num % i == 0)
            return 0;    
    }
    return 1;
}
void maxPrimeFactor(int *num){
    int maxFactor = 1;
    for(int i=2; i <= *num; i++){
        if((*num % i == 0) && isPrime(i)){
            maxFactor = i;
            *num = *num/i;      // Original input number to be updated
        }
    }
    *num = maxFactor;       
}
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    maxPrimeFactor(&num);
    printf("The maximum prime factor is: %d\n",num);
    return 0;
}

