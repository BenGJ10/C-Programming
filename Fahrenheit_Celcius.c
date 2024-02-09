// Write a C program to convert fahrenheit to celsius
#include <stdio.h>
int main(){
    float fah,cel;
    printf("Enter fahrenheit value: ");
    scanf("%f",&fah);
    cel = ((fah-32)*(5/9));     // Equation to convert fahrenheit to celsius
    printf("%.0f fahrenheit is %.0f degree celcuis\n",fah,cel);
    return 0;
}
