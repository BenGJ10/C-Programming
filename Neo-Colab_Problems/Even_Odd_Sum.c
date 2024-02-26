/* Program showcasing the difference between sum of odd
   and  even position digits in a number.  */
#include <stdio.h>
#include <stdlib.h>
int main(){
    int num, even_sum = 0, odd_sum = 0;
    int mod, position = 1;
    printf("Enter a number: ");
    scanf("%d",&num);
    while(num!=0){
        mod = num%10;
        if(position%2 == 0)
            even_sum += mod;
        else
            odd_sum += mod;
        num = num/10;
        position++;}
    int diff = abs(even_sum-odd_sum);
    printf("The difference between sum of even and odd digits: %d\n",diff);
    return 0;
}