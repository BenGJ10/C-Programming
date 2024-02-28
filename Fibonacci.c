// Write a C program to print the Fibonacci series up to n terms using a for loop.
#include <stdio.h>
int main(){
    int num, i;
    int pprev=0, prev=1, curr;
    printf("Enter the number of terms: ");
    scanf("%d",&num);
    printf("The Fibonnaci series for %d terms is: ",num);
    
    for(int i=0; i<num; i++){
        if(i<=1)
            curr = i;
        else
            curr = pprev+prev;
            pprev = prev;
            prev = curr;
        printf("%d ",curr);
    }
    printf("\n");
    return 0;
} 
