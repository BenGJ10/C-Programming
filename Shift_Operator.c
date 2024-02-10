/* C program representing right(>>) and left(<<) shift operator..
   Right shift is used to divide a num by a power of 2;
   Left shift is used to multiply a num by a power of 2.  */
#include <stdio.h>
int main(){
    int r_value = 20;
    int r_result = r_value >> 2;
    printf("The right shift operator gives: %d\n",r_result);
    int l_value = 5;
    int l_result = l_value << 2;
    printf("The left shift operator gives: %d\n",l_result);
    return 0;
}
