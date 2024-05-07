// Maximum Points you can obtain from Cards.
#include <stdio.h>
#include <stdlib.h>
int main(){
    int size;
    scanf("%d", &size);
    int *arr;
    arr = (int*)malloc(size*sizeof(int));
    for(int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }
    int k; // no of cards to choose
    scanf("%d", &k);
    int output = 0;
    for(int i = 0; i < k; i++){
        if(arr[i] >= arr[size - i - 1])
            output += arr[i];
        else
            output += arr[size - i - 1];
    }
    printf("The best total you could choose was: %d\n", output);
    free(arr);
    return 0;
}