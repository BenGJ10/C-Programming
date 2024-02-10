// Using ternary/conditional operator find the largest among 2 inputs in C.
#include <stdio.h>
int main(){
    int n1;
    int n2;
    printf("Enter first number: ");
    scanf("%d",&n1);
    printf("Enter second number: ");
    scanf("%d",&n2);
    int max = (n1>n2) ? n1 : n2;    // Checking if n1>n2 if yes, return n1 else n2
    printf("The largest number among %d and %d is %d\n",n1,n2,max);
}