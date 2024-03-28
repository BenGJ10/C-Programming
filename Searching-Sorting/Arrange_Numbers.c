/* Your task is to populate the array using the integer values in the range 1 to N
   (both inclusive) in the order - 1,3,5,.......,6,4,2. */
#include <stdio.h>
void populateArray(int array[], int size){
    int start = 1, end = size;
    int index = 0;
    while(start <= end){
        array[index++] = start;
        start += 2;    
    }
    if(size % 2 != 0){
        end -= 1;
    }
    while(end >= 2){
        array[index++] = end;
        end -= 2;
    }
}
int main(){
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int array[size];
    populateArray(array, size);
    printf("The populated array: ");
    for(int i = 0; i < size; i++){
        printf("%d ", array[i]);
    }
    printf("\n");
    return 0;
}