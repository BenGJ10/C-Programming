// Write a C program to print alphabets from A to Z using loop
#include <stdio.h>
int main(){
    char ch;
    printf("The Alphabets from A-Z are: \n");
    for(ch='A'; ch<='Z'; ch++){
        printf("%c ",ch);
    }
    printf("The Alphabets from a-z are: \n");
    for(ch='a'; ch<='z'; ch++){
        printf("%c ",ch);
    }
    return 0;
}