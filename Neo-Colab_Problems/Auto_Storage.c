// You are using GCC
#include <stdio.h>
int main(){
    int num;
    // Usage of auto storage class, that is redundant.
    auto last_digit = 0, second_last_digit = 0, diff = 0, flag = 1;
    printf("Enter a number: ");
    scanf("%d", &num);
    last_digit = num % 10;
    num = num/10;
    second_last_digit = num % 10;
    num = num/10;
    diff = (last_digit - second_last_digit);
    while(num > 0){
        last_digit = second_last_digit;
        second_last_digit = num % 10;
        if(last_digit - second_last_digit != diff){
            flag = 0;       // is not an arithmetic sequence
            break;
        }
        num = num/10;
    }
    if(flag)
        printf("It is an arithmetic sequence.\n");
    else
        printf("It is not an arithmetic sequence.\n");
    return 0;
}