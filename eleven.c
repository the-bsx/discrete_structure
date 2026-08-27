// 11. Write a program to generate the power set of a set.

#include <stdio.h>
#include <math.h>
 
int main() {
    int n;
    printf("Enter number of elements in the set: ");
    scanf("%d", &n);
 
    int set[n];
    printf("Enter elements: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &set[i]);
 
    int powerSetSize = (int) pow(2, n);
 
    printf("Power set:\n");
    for (int i = 0; i < powerSetSize; i++) {
        printf("{ ");
        for (int j = 0; j < n; j++) {
            // if the j-th bit of i is set, include set[j] in this subset
            if (i & (1 << j))
                printf("%d ", set[j]);
        }
        printf("}\n");
    }
 
    return 0;
}