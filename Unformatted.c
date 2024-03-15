// Testing various Unformatted Input Output types in C
#include <stdio.h>
int main(){
    char ab;
    char s[20];
    printf("Enter a character: ");
    while((ab = getchar()) != '\n'){
        putchar(ab);
    }     
    printf("\n");
    printf("Enter some text: ");
    gets(s);        // Store characters into the array
    printf("Your sentence is: ");
    puts(s);        // Print characters from the array

    return 0;
}