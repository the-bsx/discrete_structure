// 6. Write a recursive program to solve the following problems. To find the sum of digits of
// any given positive number.

#include<stdio.h>

int sumDigits(int n ) {
    if(n == 0) {
        return 0;
    }
    return (n % 10) + sumDigits(n/10);
}

int main() {
    int n;
    printf("Enter a positive number:\t");
    scanf("%d", &n);
    printf("Sum of digits:\t%d", sumDigits(n));

    return 0;
}