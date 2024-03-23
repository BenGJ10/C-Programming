// Counting the number of zeros in a number using Recursion
#include <stdio.h>
int countZeros(int num){
    if(num == 0)
        return 1;
    else if(num < 10)
        return 0;
    else{
        if(num % 10 == 0)
            return 1 + countZeros(num/10);
        else
            return countZeros(num/10);
    }
}
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("The number of zeros in %d are: %d\n",num,countZeros(num));
    return 0;
}