// Insert a given element at a particular index in an array
#include <stdio.h>
int main(){
    int size, pos, value;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int array[size];
    for(int i = 0; i < size; i++){
        scanf("%d", &array[i]);
    }
    printf("Enter the insertion location: ");
    scanf("%d", &pos);
    printf("Enter the element to insert: ");
    scanf("%d", &value);
    size++;
    for(int i = size-1; i>= pos-1; i--){
        array[i+1] = array[i];
    }
    array[pos-1] = value;
    printf("Array after insertion: ");
    for(int i = 0; i<size; i++){
        printf("%d ", array[i]);
    }
    return 0;
}