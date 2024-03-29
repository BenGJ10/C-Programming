// Find and return the second largest element present in the array
#include <stdio.h>
int findsecondLargest(int arr[], int n){
    int largest = arr[0];
    int secondlargest = arr[0];
    for(int i = 1; i < n; i++){
        if(arr[i] > largest){
            secondlargest = largest;
            largest = arr[i];
        } else if(arr[i] > secondlargest && arr[i] != largest)
            secondlargest = arr[i];
    }
    return secondlargest;
}
int main(){
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];
    for(int i = 0; i<size; i++){
        scanf("%d", &arr[i]);
    }
    
    int secondLargest = findsecondLargest(arr, size);
     printf("Second largest element is: %d\n", secondLargest);
    return 0;
}
