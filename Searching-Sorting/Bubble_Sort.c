// Program demonstrating Bubble Sorting in C 
#include <stdio.h>
int swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
void printArray(int array[], int n){
    for(int i = 0; i<n; i++){
        printf("%d ", array[i]);
    }
    printf("\n");
}
int main(){
    int array[] = {5,4,3,2,1};
    int n = 5;
    printf("Array before sorting: ");
    printArray(array,n);

    for(int i = 0; i < n-1; i++){      // For bubble sort we use n-1
    // Element should be greater than 1, otherwise no need of sorting.
        for(int j = 0; j < n-i-1; j++){
            // j < n - i - 1: Ignoring last few indices which are already sorted
            if(array[j] > array[j+1]){
                swap(&array[j], &array[j+1]);
            }
        }
    }
    printf("Array after sorting: ");
    printArray(array, n);
    return 0;   
}