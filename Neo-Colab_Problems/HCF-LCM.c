// Write a C program that calculates HCF and LCM using for loop and displays.
#include <stdio.h>
int main(){
    int num1, num2;
    int hcf, lcm;
    scanf("%d %d",&num1, &num2);
    for(int i=0; i<=num1 || i<=num2; i++){
        if(num1%i == 0 && num2%i==0)
            hcf = i;
    }
    lcm = (num1 * num2)/hcf;
    printf("HCF: %d\n",hcf);
    printf("LCM: %d",lcm);
    return 0;
}