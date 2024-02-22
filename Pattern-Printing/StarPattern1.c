// Program to print star diamond pattern
#include <stdio.h>
int main(){
    int rows;
    printf("Enter the number of rows (Please provide odd values only): ");
    scanf("%d",&rows);
    int r1 = (int)rows/2+1;
    int r2 = rows/2;
    for(int i=1; i<=r1; i++){       // Upper Traingle
        for(int j=1; j<=r1-i; j++){
            printf(" ");
        }
        for(int k=1; k<=2*i-1; k++){
            printf("*");
        }
        printf("\n");
    }
    for(int i=r2; i>0; i--){       // Lower Traingle
        for(int j=1; j<=r2-i+1; j++){
            printf(" ");
        }
        for(int k=1; k<=2*i-1; k++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}