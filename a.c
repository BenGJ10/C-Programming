// Write a C program to find all the factors of a number
#include <stdio.h>
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("The factors of %d are: ",num);
    for(int i=0; i<=num; i++){
        if(num%i == 0){
            printf("%d ",i);
        }
    }
    printf("\n");
    return 0;
}