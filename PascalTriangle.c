// Write a C program demonstrating Pascals Triangle
#include <stdio.h>
void printPascal(int n){
    for(int line = 1; line <= n; line++){
        for(int space = 1; space <= n-line; space++){
            printf("  ");}
        int coeff = 1;
        for(int i = 1; i<=line; i++){
            printf("%4d",coeff);
            coeff = coeff*(line-i)/i;
        }
        printf("\n");
    }
}
int main(){
    int rows;
    printf("Enter the number of rows: ");
    scanf("%d",&rows);
    printPascal(rows);

    return 0;
}