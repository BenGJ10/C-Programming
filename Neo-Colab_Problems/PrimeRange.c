// Write a C program to print prime numbers in a given range..
#include <stdio.h>
int main(){
    int num1, num2, i, j, flag;
    printf("Enter lower interval: ");
    scanf("%d",&num1);
    printf("Enter upper interval: ");
    scanf("%d",&num2);
    printf("The prime numbers in the given range are: ");
    for(i = num1; i <= num2; i++){
        if(i == 1 || i == 0)
            continue;

        flag = 1;
            for(j = 2; j <= i / 2; ++j){
                if(i % j == 0){
                    flag = 0;
                    break;
                }
            }
        if(flag == 1)
            printf("%d ",i);
    } 
    printf("\n");
    return 0;
}