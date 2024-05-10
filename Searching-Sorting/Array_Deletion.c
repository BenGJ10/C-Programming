/* Krish is developing a function to perform a specific array manipulation task. 
The goal is to remove an element from a given array of integers, 'arr', at a 
designated position 'p'. The position value 'p' is based on a 1-indexed system, 
meaning the first element is at position 1, the second at position 2, and so on.
If the position is invalid, print "Invalid position!" 
                    Otherwise, print the modified array after removal. */
#include <stdio.h>
int main(){
    int size, pos; 
    scanf("%d", &size);
    int arr[size];
    for(int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }
    scanf("%d", &pos);
    if(pos > size || pos < 0){
        printf("Invalid Position\n");
        return 0;
    }
    else{ 
        for(int i = pos - 1; i < size; i++){
        arr[i] = arr[i + 1];
        }
        size--;
    }
    printf("Array after deletion: ");
    for(int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}                  
// 1 2 3 4 5 --> 3
// 1 2 4 5