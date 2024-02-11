// Write a C program to print all even numbers between 1 and 50 using for loop
#include <stdio.h>
int main(){
    int i;
    printf("The even numbers between 1 and 50 are: ");
    for(i=1; i<=50; i++){
        if(i % 2==0){
            printf("%d ",i);
        }
    }
    return 0;
}