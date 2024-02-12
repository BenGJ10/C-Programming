// Write a C program to calculate the sum of digits of a number using a while loop.
#include <stdio.h>
int main(){
    int num, sum = 0, mod;
    printf("Enter a number: ");
    scanf("%d",&num);
    while(num>0){
        mod = num%10;        // Getting the remainder
        sum += mod;          // Adding the remainder to sum
        num = num/10;        // Dividing the number by 10 to take next number
    }
    printf("The sum of digits is %d\n",sum);
    return 0;
}