// Write a C program to find the factorial of a given number using a for loop
#include <stdio.h>
int main(){
    int num,i;
    int fact=1;
    printf("Enter a number: ");
    scanf("%d",&num);
    for(i=1; i<=num; i++){
        fact = fact*i;      
    }
    printf("The factorial of %d is %d\n",num,fact);
    return 0;
}