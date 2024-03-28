#include <stdio.h>

void intersection_of_Array(int arr1[], int size1, int arr2[], int size2){
    for(int i = 0; i < size1; i++){
        for(int j = 0; j < size2; j++){
            if(arr1[i] == arr2[j]) {
                printf("%d ", arr1[i]);
                break;
            }
        }
    }
    printf("\n");
}

int main(){
    int s1, s2;
    printf("Enter the size of first array: ");
    scanf("%d", &s1);
    int arr1[s1];
    printf("Enter the elements of first array: ");
    for(int i = 0; i < s1; i++){
        scanf("%d", &arr1[i]);
    }
    printf("Enter the size of second array: ");
    scanf("%d", &s2);
    int arr2[s2];
    printf("Enter the elements of second array: ");
    for(int i = 0; i < s2; i++){
        scanf("%d", &arr2[i]);
    }
    printf("Intersection of the two arrays is: ");
    intersection_of_Array(arr1, s1, arr2, s2);
    return 0;
}
