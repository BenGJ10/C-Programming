#include <stdio.h>

void findIntersection(int ARR1[], int N1, int ARR2[], int N2) {
    printf("Intersection of the two arrays is: ");
    for (int i = 0; i < N1; i++) {
        for (int j = 0; j < N2; j++) {
            if (ARR1[i] == ARR2[j]) {
                printf("%d ", ARR1[i]);
                break; // Once a match is found, no need to continue inner loop for this element
            }
        }
    }
    printf("\n");
}

int main() {
    int N1, N2;
    printf("Enter the size of the first array: ");
    scanf("%d", &N1);

    int ARR1[N1];
    printf("Enter the elements of the first array: ");
    for (int i = 0; i < N1; i++) {
        scanf("%d", &ARR1[i]);
    }

    printf("Enter the size of the second array: ");
    scanf("%d", &N2);

    int ARR2[N2];
    printf("Enter the elements of the second array: ");
    for (int i = 0; i < N2; i++) {
        scanf("%d", &ARR2[i]);
    }

    findIntersection(ARR1, N1, ARR2, N2);

    return 0;
}
