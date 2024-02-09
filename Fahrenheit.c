// Write a C program to convert fahrenheit to celsius
#include <stdio.h>
int main(){
    float f,c;
    printf("Enter fahrenheit value: ");
    scanf("%f",&f);
    c = ((f-32)*(5/9));     // Equation to convert fahrenheit to celsius
    printf("%.0f fahrenheit is %.0f celcuis\n",f,c);
    return 0;
}
