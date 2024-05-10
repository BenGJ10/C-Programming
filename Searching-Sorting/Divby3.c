/* Arun is tasked with developing a binary search algorithm to efficiently 
locate the index of the first occurrence of a number divisible by 3 in a given 
sorted array of integers. */
#include <stdio.h>
int binarySearch(int arr[], int size){
    int start = 0, end = size - 1;
    while(start <= end){
        int mid = (end - start) / 2 + start;
        if(arr[mid] % 3 == 0){
            if(mid == 0 || arr[mid - 1] % 3 != 0){
                return mid;
            }
            else
                end = mid - 1;
        } else{
            start = mid + 1;}
    }
    return -1;
}
int main(){
    int size;
    scanf("%d", &size);
    int arr[size];
    for(int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }
    int result = binarySearch(arr, size);
    
    if(result != -1){
        printf("Index of first occurrence: %d\n", result);
    } else
        printf("No numbers divisible by 3\n");

    return 0;
}