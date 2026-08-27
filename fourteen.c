// 14. WAP to represent a relation using a matrix.

#include <stdio.h>

int main() {
    int n; // size of set A = {1, 2, ..., n}
    printf("Enter number of elements in the set: ");
    scanf("%d", &n);

    int matrix[n][n];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            matrix[i][j] = 0;

    int pairs;
    printf("Enter number of ordered pairs in relation R: ");
    scanf("%d", &pairs);

    printf("Enter pairs (a b) meaning a R b, using 1-indexed elements:\n");
    for (int k = 0; k < pairs; k++) {
        int a, b;
        scanf("%d %d", &a, &b);
        matrix[a-1][b-1] = 1;
    }

    printf("\nRelation matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            printf("%d ", matrix[i][j]);
        printf("\n");
    }

    return 0;
}