// Insert two new elements one at the beginning of the array other at the end.
#include <stdio.h>
int main(){
    int size, index0, indexn;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int array[size];
    for(int i = 0; i < size; i++){
        scanf("%d", &array[i]);
    }
    printf("Enter the elements to be entered: ");
    scanf("%d %d", &index0, &indexn);
    
    for(int i = size-1; i >= 0; i--){
        array[i+1] = array[i];
    }
    array[0] = index0;
    size ++;
    
    array[size] = indexn;
    size ++;
    printf("The new array: ");
    for(int i = 0; i < size; i++){
        printf("%d ", array[i]);
    }
    printf("\n");
    return 0;
}
