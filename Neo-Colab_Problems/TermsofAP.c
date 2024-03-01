// Write a program to print first x terms of the series 3N + 2 
// which are not multiples of 4 ...
#include <stdio.h>
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    int count = 0;
    for(int i=1; count<num; i++){
        int term = 3 * i + 2;
        if(term % 4 != 0){   
            printf("%d ",term);
            count++;}
    }
    printf("\n");
    return 0;
}
