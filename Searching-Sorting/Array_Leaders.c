// Find and print the leading elements in an array
#include <stdio.h>
void findLeaders(int array[], int size){
    int i, j;
    for(i = 0; i<size; i++){
        for(j = i+1; j<size; j++){
            if(array[i] <= array[j])
                break;      
        }
        /* If all the values to the right of that index are smaller than the index,
           we simply add the value in our answer data structure. */
        if(j == size)
            printf("%d ", array[i]);
    }
    printf("\n");
}
int main(){
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int array[n];
    for(int i = 0; i<n; i++){
        scanf("%d", &array[i]);
    }
    findLeaders(array, n);
    return 0;
}