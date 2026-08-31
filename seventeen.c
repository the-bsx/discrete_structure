// 17. WAP to find join & meet of a Boolean matrix.

#include<stdio.h>
#define max 10

int main() {
    int r, c;
    int a[max][max], b[max][max], join[max][max], meet[max][max];
    printf("Enter rows and columns: \n");
    scanf("%d %d", &r, &c);

    printf("Enter the elements of matrix A:\n");
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter the elements of matrix B:\n");
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    // perform join and meet
     for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            join[i][j] = a[i][j] | b[i][j];
            meet[i][j] = a[i][j] & b[i][j];
        }
    }

    printf("\n Join (A U B):\n");
     for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            printf("%d\t", join[i][j]);
        }
        printf("\n");
    }
    printf("\n Meet (A ^ B):\n");
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            printf("%d\t", meet[i][j]);
        }
        printf("\n");
    }

    return 0;
}