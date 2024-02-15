/*  Fahrenheit to Celsius conversion table. One line for every Fahrenheit 
    and corresponding Celsius value in integer form. The Fahrenheit value and its
    corresponding Celsius value should be separate by single space c programming  */
#include <stdio.h>
int main(){
    float start, end, step; // Start Fahrenheit Value, End Fahrenheit value and Step
    float cel;
    printf("Enter start, end and step values: ");
    scanf("%f %f %f",&start, &end, &step);
    while(start<=end){
        cel = ((start-32)*5/9);
        printf("%.0f Fahrenheit is %.1f Celcius\n",start,cel);
        start+=step;
    }
    return 0;
}