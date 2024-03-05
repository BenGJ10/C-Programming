// Write a C Program to check whether a number is Perfect or not
#include <stdio.h>
int main(){
    int num, sum=0;
    printf("Enter a number: ");
    scanf("%d", &num);
    // Find proper divisors and calculate their sum
    for(int i=0; i<=num/2; i++){    
        if(num%i == 0)
            sum += i;}
    if(sum == num){
        printf("%d is a Perfect number.\n",num);
    } else{
        printf("%d is not a Perfect number.\n",num);
    }
    return 0;
}