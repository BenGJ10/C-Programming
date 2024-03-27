// Find and return a number which is unique in an array
#include <stdio.h>
int find_unique_element(int array[], int size){
    for(int i = 0; i<size; i++){
        int count = 0;
        for(int j = 0; j<size; j++){
            if(array[i] == array[j])
                count++;
        }
        if(count == 1)
            return array[i];
    }
}
int main(){
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int array[n];
    for(int i = 0; i<n; i++){
        scanf("%d", &array[i]);
    }
    int unqiue_number = find_unique_element(array,n);
    if(unqiue_number)
        printf("Unique element: %d\n",unqiue_number);
    else
        printf("No unqiue elements found\n");
    return 0;
}