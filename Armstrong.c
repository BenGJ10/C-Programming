// Write a C program to check whether a number is Armstrong or not.
#include <stdio.h>
int main(){
    int num, sum=0, temp, mod;
    printf("Enter a number: ");
    scanf("%d",&num);
    temp = num;     // Storing the input number in a temporary variable
    while(num!=0){
        mod = num%10;
        sum += (mod*mod*mod);
        num = num/10;
    }
    if(temp==sum)
        printf("It is an Armstrong Number\n");
    else
        printf("It is not an Armstrong Number\n");
    return 0;
}