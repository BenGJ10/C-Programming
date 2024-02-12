// Write a C program to reverse a given number using a for loop. 
#include <stdio.h>
int main(){
    int num, reverse = 0, rem;
    printf("Enter a number: ");
    scanf("%d",&num);
    for(; num!=0; num/=10){     // Here we won't have intialization
        rem = num%10;
        reverse = reverse*10 + rem;
    }
    printf("The reversed number is: %d\n",reverse);
    return 0;
}
