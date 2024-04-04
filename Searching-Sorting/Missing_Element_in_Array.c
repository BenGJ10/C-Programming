// Find the missing element in an array using searching technique
#include <stdio.h>
int findMissing(int arr[], int size){
    int temp[size + 1];
    for(int i = 0; i < size+1; i++){
        temp[i] = 0;
    }
    for(int i = 0; i < size; i++){
        temp[arr[i]-1] = 1;
    }
    int ans = -1;
    for(int i = 0; i < size; i++){
        if(temp[i] == 0){
            ans = i + 1;
            break;
        }
    }
    return ans;

}
int main(){
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int array[size];
    for(int i =0; i < size; i++){
        scanf("%d", &array[i]);
    }
    if(findMissing(array, size) != -1)
        printf("The missing element is: %d\n", findMissing(array, size));
    else
        printf("No missing element in the array\n");
    return 0;
}
