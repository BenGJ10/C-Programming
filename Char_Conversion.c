/* Write a C program to convert lowercase letter to uppercase using ternary operator
   Whitelist: ? and :
   Blacklist: if */
#include <stdio.h>
int main(){
    char ch;
    printf("Enter a character in lowercase: ");
    scanf("%c",&ch);
    ch>='a' && ch<='z'?printf("The uppercase character: %c\n",ch-32):printf("Invalid input\n");
    return 0;
}