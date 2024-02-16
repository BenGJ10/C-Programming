// Write a program to reverse a number and check whether it is palindrome or not..
#include <stdio.h>
int main(){
    int num, mod, temp, reverse=0;
    printf("Enter a number to check: ");
    scanf("%d",&num);
    temp = num;
    while(num>0){
        mod = num % 10;
        reverse = reverse*10 + mod;
        num = num/10;
    }
    if(temp == reverse)
        printf("%d is a Palindrome number\n",temp);
    else
        printf("%d is not a Palindrome number\n",temp);
    return 0;
}