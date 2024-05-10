/* In a classroom with assigned seat numbers ranging from 1 to N, students enter 
the room and occupy their seats. The seating arrangement is initially in sequential 
order, but due to a mix-up, one student's seat is left unoccupied. 
Create a program that utilizes binary search to identify and print the seat number 
that is missing, helping the teacher quickly resolve the seating discrepancy. */
#include <stdio.h>
int main(){
    int size;
    scanf("%d", &size);
    int arr[size];
    for(int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }
    int temp[size + 1];
    for(int i = 0; i < size+1; i++){
        temp[i] = 0;
    }
    for(int i = 0; i < size; i++){
        temp[arr[i] - 1] = 1;
    }
    int vacant = -1;
    for(int i = 0; i < size; i++){
        if(temp[i] == 0){
            vacant = i + 1;
            break;
        }
    }
    if(vacant != -1){
        printf("The unoccupied seat is %d\n", vacant);
    }
    else
        printf("No vacant seats\n");
    return 0;
}

// 1 2 3 5 6 

