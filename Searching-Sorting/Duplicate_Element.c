// Find and return a number which is repeating in an array (Duplicate)
#include <stdio.h>
int find_duplicate_element(int array[], int size){
    for(int i = 0; i<size; i++){
        int count = 0;
        for(int j = 0; j<size; j++){
            if(array[i] == array[j])
                count++;
        }
        if(count > 1)
            return array[i];
    }
    return -1;
}
int main(){
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int array[n];
    for(int i = 0; i<n; i++){
        scanf("%d", &array[i]);
    }
    int duplicate_number = find_duplicate_element(array,n);
    if(duplicate_number != -1)
        printf("Duplicate element: %d\n",duplicate_number);
    else
        printf("No duplicate elements found\n");
    return 0;
}