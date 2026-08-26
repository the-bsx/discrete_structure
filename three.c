// 3. WAP to find the sum of natural number using recursion.

#include<stdio.h>

int sum(int n) {
    if(n ==0 ){
        return 0;
    }
    return n + sum(n -1 );
}

int main() {
    int n;
    printf("Enter number upto which to find sum: \t ");
    scanf("%d", &n);

    printf("Sum:\t%d", sum(n));

    return 0;
}