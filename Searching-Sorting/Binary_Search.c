/*  Cut the array into two halves till you're left with 1 element
    check whether that element is equal to our target  */
#include <stdio.h>
int main(){
    int n[6] = {1,2,3,4,5,6};
    int s = sizeof(n)/sizeof(n[0]);     // 24/6 (24 == Int(size of 4)*6)
    int start = 0; 
    int end = s-1, target = 1;
    int foundtarget = 0;
    while(start <= end){
        int mid = (end - start)/2 + start;  // To avoid overflow
        if(n[mid] == target){
            foundtarget = 1;
            break;}
        else if(n[mid] < target)
            start = mid + 1;
        else    // (n[mid] > target)
            end = mid - 1;
    }
    if(foundtarget == 1)
        printf("Found the target.\n");
    else
        printf("Target not found.\n");
    
    return 0;
}