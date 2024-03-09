// Write a C program to display a given even number in range of 2 prime numbers.
#include <stdio.h>
int isPrime(int n){
    if(n<=1)
        return 0;
    for(int i=2; i*i <= n; i++){
        if(n%i == 0)
            return 0;
    }
    return 1;
}
void findPrimeSum(int n){
    int prime1, prime2;

    for(int i=2; i <= n/2; i++){
        if(isPrime(i) && isPrime(n-i)){
            prime1 = i;
            prime2 = n-i;
            break;
        }
    }
    printf("Two numbers whose is %d is %d and %d\n",n,prime1,prime2);
}
int main(){
    int num;
    printf("Enter an even number: ");
    scanf("%d", &num);
    findPrimeSum(num);
    return 0;
}