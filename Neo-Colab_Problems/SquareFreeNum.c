// Write a C Program to check whether a number is square-free or not
#include <stdio.h>
int isSquareFree(int n){
    for(int i=2; i<=n; i++){
        if(n%(i*i)==0)
            return 0;
    }
    return 1;
}
int main(){
    int num;
    printf("Enter a number to check: ");
    scanf("%d",&num);
    if(isSquareFree(num))
        printf("%d is a square free number\n",num);
    else
        printf("%d is not a square free number\n",num);
    return 0;
}