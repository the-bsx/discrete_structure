// 5. WAP to find factorial of n number using recursion.

#include<stdio.h>

int factorial(int n) {
    if(n == 0 || n == 1) {
        return 1;
    }
    return n*factorial(n - 1);
}

int main() {
    int n;
    printf("Enter number to find factorial:\t");
    scanf("%d", &n);

    printf("Factorial:\t%d", factorial(n));
    return 0;
}