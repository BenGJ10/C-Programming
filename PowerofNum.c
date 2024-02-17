// Program to find the power of a number using a for loop
#include <stdio.h>
int main(){
    int base, exp, power=1;
    printf("Enter base number: ");
    scanf("%d",&base);
    printf("Enter exponent : ");
    scanf("%d",&exp);
    int temp = exp;
    while(exp>0){
        power = power*base;
        exp--;
    }
    while(exp<0){
        power = power/base;
        exp++;
    }
    printf("%d^%d = %d\n",base,temp,power);
    return 0;
}