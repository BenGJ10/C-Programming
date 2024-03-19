/* The logical operators compare bits in two numbers and return true or false
   for each bit compared. */
#include <stdio.h>
void calc_the_max(int n, int k){
    int andmax = 0, ormax = 0, xormax = 0;
    int a, b, c;
    for(int i = 0; i<=n; i++){
        for(int j = i+1; j<=n; j++){
            a = i & j;  // Bitwise AND
            b = i | j;  // Bitwise OR
            c = i ^ j;  // Bitwise XOR

            if((a > andmax) && (a < k))
                andmax = a;
            if((b > ormax) && (b < k))
                ormax = b;
            if((c > xormax) && (c < k))
                xormax = c;

        }
    }
    printf("andmax: %d\normax:  %d\nxormax: %d\n",andmax, ormax, xormax);

}
int main(){
    int num, limit;
    printf("Enter the highest number to consider and limit: ");
    scanf("%d %d",&num, &limit);
    calc_the_max(num, limit);
    return 0;
}
