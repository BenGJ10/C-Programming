/* Write a program to input an integer N and print the sum 
   of all its even digits and sum of all its odd digits separately  */ 
#include <stdio.h>
int main(){
    int num;
    int odd=0, even=0, mod;
    printf("Enter a number: ");
    scanf("%d",&num);
    while(num>0){
        mod = num%10;
        if(mod%2==0)
            even+=mod;
        else
            odd+=mod;
        num = num/10;}
    printf("The sum of even digits: %d | The sum of odd digits: %d\n",even,odd);
    return 0; 
}