// A program to insert a card at the second position
#include <stdio.h>
int main(){
    int size, value;
    scanf("%d", &size);
    int arr[size];
    for(int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }
    scanf("%d", &value);
    size++;
    for(int i = size; i > 1; i--){
        arr[i] = arr[i-1];
    }
    arr[1] = value;
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

// 1 3 4 5