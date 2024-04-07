// Find the sum of two arrays and print it in another array
#include <stdio.h>
void arraySum(int arr1[], int arr2[], int s1, int s2){
    int size = (s1 > s2) ? s1 : s2;
    int temp[size];
    int carry = 0;
    for(int i = size-1; i >= 0; i--){
        int sum = arr1[i] + arr2[i] + carry;
        temp[i] = sum % 10;
        carry = sum/10;
    }
    printf("The sum of two arrays: \n");
    for(int i = 0; i<size; i++){
        printf("%d ",temp[i]);
    }
    printf("\n");
}
int main(){
    int s1, s2;
    scanf("%d", &s1);
    int array1[s1];
    for(int i = 0; i <s1; i++){
        scanf("%d", &array1[i]);
    }
    scanf("%d", &s2);
    int array2[s2];
    for(int i = 0; i <s2; i++){
        scanf("%d", &array2[i]);
    }
    arraySum(array1, array2, s1, s2);
    return 0;
}