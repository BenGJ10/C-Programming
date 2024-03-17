#include <stdio.h>
void cube(int num, int *result){
    *result = (num * num * num);
}
int main(){
    int num, result;
    printf("Enter a number: ");
    scanf("%d", &num);
    cube(num, &result);
    printf("The cube of %d is %d\n", num, result);
    return 0;
}