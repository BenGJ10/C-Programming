// Take multi-line input from User and Print the output
#include <stdio.h>
int main(){
    char ch;
    char s[20];
    char sen[100];
    printf("Enter a character: ");  // Input a single character
    scanf("%c", &ch);
    printf("Enter a word: ");       // Input a single word
    scanf("%s", &s);
    // This is to enter a next line
    getchar();
    printf("Enter a sentence: ");
    scanf("%[^\n]%*c", &sen);
    // Printing all these 
    printf("%c\n", ch);
    printf("%s\n",s);
    printf("%s\n",sen);
    return 0;
}
