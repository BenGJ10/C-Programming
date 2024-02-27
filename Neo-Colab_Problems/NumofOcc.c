/*  Given two integers L, R, and digit X. Find the number of occurrences 
    of X in all the numbers in the range (L, R) excluding L and R.  */
#include <stdio.h>
int main(){
    int l, r, x;
    int count = 0;
    printf("Enter two limits: ");
    scanf("%d %d",&l, &r);      // 11 1 in 2 times
    printf("Enter the number to search: ");
    scanf("%d",&x);
    for(int i = l+1; i < r; i++){
        int num = i;
        while(num>0){
            if(num%10==x)
                count++;
            num = num/10;}
    }
    printf("The number of %d occuring in the given limit is: %d times.\n",x,count);
    return 0;
}