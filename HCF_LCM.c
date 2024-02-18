// Write a C program to calculate HCF and LCM of two given numbers.
#include <stdio.h>
int main(){
    int num1, num2;
    int hcf, lcm, i;
    printf("Enter two numbers: ");
    scanf("%d %d",&num1,&num2);
    for(i=0; i<=num1||i<=num2; i++){
        if((num1%i==0)&&(num2%i==0))
            hcf = i;
    }
    lcm = (num1*num2)/hcf;
    printf("HCF of %d and %d is: %d\n",num1,num2,hcf);
    printf("LCM of %d and %d is: %d",num1,num2,lcm);
    return 0;
}