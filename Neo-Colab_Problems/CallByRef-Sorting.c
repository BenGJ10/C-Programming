/* C program demonstrating call by reference using a sort function 
    to sort float inputs in descending order */
#include <stdio.h>
void swap(float *a, float *b){      // Function to swap variables
    float temp = *a;
    *a = *b;
    *b = temp;
}
void sort(float array[], int num){
    for(int i = 0; i<num-1; i++){
        for(int j = 0; j<num - i - 1; j++){
            if(array[j] < array[j+1])   // Checking the adjacent elements
                swap(&array[j], &array[j+1]);   // Swaps if one is lesser 
        }
    }
}
int main(){
    int x;
    printf("Enter the number of elements required in array: ");
    scanf("%d", &x);
    float num[x];
    for (int i = 0; i<x; i++){
        scanf("%f", &num[i]);   // Inputting elements into array
    }
    sort(num,x);        // Calling the function
    printf("The numbers in descending order: ");
    for(int i = 0; i<x; i++){
        printf("%.2f ",num[i]);
    }
    printf("\n");
    return 0;
}