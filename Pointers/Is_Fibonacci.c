// Determining whether an element in an array is Fibonacci or not
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
bool isPerfectSquare(int n){
   int x = 1;
   while( x * x < n){
       x++;
   }
   return x * x == n;
}
bool isFib(int n){
    return isPerfectSquare(5 * (n) * (n) + 4) || isPerfectSquare(5 * (n) * (n) - 4);
}

int main(){
    int size;
    scanf("%d", &size);
    int *arr;
    arr = (int*)malloc(size*sizeof(int));
    for(int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < size; i++){
        if(isFib(arr[i])){
            printf("%d ", arr[i]);
        }
    }
    return 0;
}