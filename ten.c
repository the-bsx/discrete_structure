// 10. Write a program to perform set operations.
#include<stdio.h>
int isPresent(int set[], int size, int value) {
    int i;
    for( i = 0; i < size; i++) {
        if(set[i] == value) {
            return 1;
        }
    }
    return 0;
}

int main() {
    int A[100], B[100], i, n, m;
    printf("Enter size of first set: ");
    scanf("%d",&n);
    printf("Enter size of second set: ");
    scanf("%d",&m);

    printf("\n\n---Enter elements of first set---\n\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }
     printf("\n\n---Enter elements of second set---\n\n");
    for(i = 0; i < m; i++) {
        scanf("%d", &B[i]);
    }

    //union
    printf("\nA union B (A U B)\n");

    for(int i = 0; i < n; i++) {
        printf("%d ", A[i]);    
    }
    for(int i = 0; i < m; i++) {
        if(!isPresent(A, n, B[i])) {
            printf("%d ", B[i]);
        }
    }

    //intersection
    printf("\n A intersection B (A n B)\n");
    for(i = 0; i < n; i++) {
        if(isPresent(B, m, A[i])) {
            printf("%d ", A[i]);
        }
    }

    // A - B
    printf("\n\n A - B\n");
    for(int i = 0; i < n; i++) {
        if(!isPresent(B, m, A[i])) {
            printf("%d ", A[i]);
        }
    }

    // B - A
    printf("\n\n B - A\n");
    for(int i = 0; i < m; i++) {
        if(!isPresent(A, n, B[i])) {
            printf("%d", B[i]);
        }
    }

    return 0 ;

}