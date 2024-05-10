/* Thiru is working on a grading system for his class of students. He needs a 
program that takes input for student scores, inserts a new score at the beginning 
and end of the existing scores, and then displays the modified list of scores.
Write a program to help Thiru achieve this. */
#include <stdio.h>
#include <stdlib.h>
int main(){
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int *arr;
    arr = (int*)malloc(size * sizeof(int));
    printf("Enter the elements: ");
    for(int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }
    int s1, sn;
    printf("Enter the score to add at the first index of the array: ");
    scanf("%d", &s1);
    for(int i = size; i > 0; i--){
        arr[i] = arr[i - 1];
    }
    arr[0] = s1;
    size++;
    printf("Enter the score to add at the last index of the array: ");
    scanf("%d", &sn);
    arr[size] = sn;
    size++;
    printf("Array after insertion: ");
    for(int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}