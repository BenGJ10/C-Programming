// Write a C program to print the Fibonacci series up to n terms using a for loop.
#include <stdio.h>
int main(){
    int num, i;
    int pprev=0, prev=1, curr;
    printf("Enter the number of terms: ");
    scanf("%d",&num);
    printf("The Fibonnaci series for %d terms is: ",num);
    printf("%d %d ",pprev,prev);
    for(i=2; i<num; i++){
        curr = pprev+prev;
        printf("%d ",curr);
        pprev = prev;
        prev = curr;
    }
    return 0;
} 
