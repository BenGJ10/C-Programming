// Write a C program to find the nth term of the sequence
#include <stdio.h>
int find_nth_term(int num, int a, int b, int c){
    if(num == 1)
        return a;
    if(num == 2)
        return b;
    if(num == 3)
        return c;
    else
        return(find_nth_term(num-1, a, b, c) + find_nth_term(num-2, a, b, c) + find_nth_term(num-3, a, b, c));
    }
int main(){
    int num, a, b, c;
    
    printf("Enter the first 3 terms: ");
    scanf("%d %d %d", &a, &b, &c);
    printf("Enter the nth term to find: ");
    scanf("%d", &num);
    int nth_term = find_nth_term(num, a, b, c);
    printf("The nth term of this sequence is: %d\n",nth_term);

    return 0;
}