// Checking whether sum of even and odd digits are equal or not..
#include <stdio.h>
int main(){
    int num;
    int even_sum = 0, odd_sum = 0;
    printf("Enter a number: ");
    scanf("%d",&num);
    for(; num!=0; num/=10){
        int mod = num%10;
        if(mod%2==0)
            even_sum += mod;
        else
            odd_sum += mod;
    }
    printf("Even sum: %d\n",even_sum);
    printf("Odd sum: %d\n",odd_sum);
    if(even_sum == odd_sum)
        printf("Valid\n");
    else
        printf("Not valid\n");
    return 0;
} 