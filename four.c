// 4. WAP to find Fibonacci series using recursion.

#include<stdio.h>

int fib(int n) {
    if (n == 0) {
        return 0;
    } else if(n == 1) {
        return 1;
    }
    return fib(n -1) + fib(n -2);
}
int main() {
    int n, i;
    printf("Enter number of terms: \t");
    scanf("%d", &n);
    printf("fibonacci series: \t");
    for( i = 0; i < n; i++) {
        printf("%d \t", fib(i));
    }
}