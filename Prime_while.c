/*  Write a C program to check whether a given number is 
    prime or not using a while loop...  */
#include <stdio.h>
int main(){
    int num, flag=0;
    printf("Enter a number: ");
    scanf("%d",&num);
    int i = 2;
    while(i<=num/2){
        if(num%i==0){
            flag++;
            break;
        }
    i++;}   
    if((flag==0)&&(num!=-1)){
        printf("%d is a prime number\n",num);
    } else{
        printf("%d is not a prime number\n",num);
    }
    return 0;
}