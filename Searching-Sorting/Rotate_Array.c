// C function that rotates an array to the left by a given number of elements
#include <stdio.h>
void rotateArray(int arr[], int size, int shift){
    int temp[shift];
    for(int i = 0; i < size; i++){  // Store the first d elements in temp array
        temp[i] = arr[i];
    }
    for(int i = shift; i < size; i++){
        arr[i - shift] = arr[i];  // Shift the remaining elements of arr[] to the left
    }
    for(int i = 0; i < size; i++){ // Copy the elements from temp[] to the end of arr[]
        arr[size - shift + i] = temp[i];
    }
}
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main(){
    int size, shift;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int array[size];
    for(int i = 0; i < size; i++){
        scanf("%d", &array[i]);
    }
    printf("Original Array: ");
    printArray(array, size);
    printf("Enter the number of elements to be shifted: ");
    scanf("%d", &shift);
    rotateArray(array,size,shift);
    printf("Array rotated by %d elements to the left: ", shift);
    printArray(array, size);
    return 0;
}