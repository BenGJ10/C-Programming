// Program to convert binary digit to decimal.
#include <stdio.h>
#include <math.h>
int BinaryToDecimal(double num){
    double decimal = 0, i = 0, rem;
    while(num!=0){
        rem = (int)num % 10;
        decimal += rem * pow(2,i);
        num = num/10;
        i++;
    }
    return decimal;
}
int main(){
    double binary;
    printf("Enter a binary number: ");
    scanf("%lf",&binary);
    double decimal_num = BinaryToDecimal(binary);
    printf("Decimal format is: %.0lf\n",decimal_num);
    return 0;
}