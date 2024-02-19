/* Write a C program to evaluate whether a car is going within the allocated speed 
   through various road-types using SWITCH statement.
   1. Residential Area = 25 km/hr 
   2. City = 35 km/hr
   3. Highways = 55 km/hr */
#include <stdio.h>
int main(){
    int rdtype, speed;
    int speedlim;
    printf("Enter the roadtype: ");
    scanf("%d",&rdtype);
    printf("Enter the current speed: ");
    scanf("%d",&speed);
    switch(rdtype){
        case 1:
            speedlim = 25;
            break;
        case 2:
            speedlim = 35;
            break;
        case 3:
            speedlim = 55;
            break; 
        default:
            printf("Invalid road type\n");
    }
    if(speed==speedlim)
        printf("The driver is driving within the speed limit\n");
    else if(speed>speedlim)
        printf("The driver is driving above the speed limit\n");
    else
        printf("The driver is moving below the speed limit\n");
    return 0;
}

