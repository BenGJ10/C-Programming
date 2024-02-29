// Write a C program to check whether a number is strong or not
#include <stdio.h>
int factorial(int n){
    if(n==0 || n==1)
        return 1;
    else
        return n*factorial(n-1);
}
int is_strong_number(int num){
    int temp = num;
    int sum = 0;
    while(num!=0){
        int mod = num%10;
        sum += factorial(mod);
        num = num/10;}
    return sum == temp;
}
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    if(is_strong_number(num))
        printf("%d is a Strong Number\n",num);
    else
        printf("%d is not a Strong Number\n",num);
    return 0;
}