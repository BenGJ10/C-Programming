// Write a C program to check whether a number is Perfect-Cube using Recursion
#include <stdio.h>
int isPerfectCube(int n, int i) {
    if (i * i * i == n)
        return 1;
    else if (i * i * i > n)
        return 0;
    else
        return isPerfectCube(n, i + 1);}    // Recursive Call 

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (isPerfectCube(num, 1))
        printf("%d is a perfect cube.\n", num);
    else
        printf("%d is not a perfect cube.\n", num);
    return 0;
}
