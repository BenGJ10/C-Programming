// Write a C program to find the sum of even fibonacci terms upto N
#include <stdio.h>
int findEvenFibSum(int n){
    int a = 0, b = 1, c, sum = 0;
    while(b<=n){
        c = a + b;
        if(c%2 == 0 && c<=n)
            sum += c;
        a = b;
        b = c;
    }
    return sum;
}
int main(){
    int testcase;
    printf("Enter the number of testcases: ");
    scanf("%d", &testcase);
    for(int i=0; i<testcase; i++){
        int num;
        printf("Enter a number: ");
        scanf("%d", &num);
        printf("The sum of even fibonacci terms upto %d is %d\n",num, findEvenFibSum(num));
    }
    return 0;
}