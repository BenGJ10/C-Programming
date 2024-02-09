// Write a C program to swap two integers numbers
#include <stdio.h>
int main(){
    int a,b,t;
    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%d",&b);
    t = a;
    a= b;
    b = t;
    printf("Numbers after swapping: %d & %d\n",a,b);
    return 0;
}