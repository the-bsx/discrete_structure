// 19. Write a program to stimulate the following logic gates
// a) AND b) OR c) XOR

#include<stdio.h>

int AND(int a, int b) {
    return a & b;
}

int OR(int a, int b) {
    return a | b;
}

int XOR(int a, int b) {
    return a ^ b;
}

int main() {
    int a, b;

    printf("Enter two values( 0 OR 1 )\n");
    scanf("%d%d", &a, &b);

    if( (a != 0 && a != 1) || (b != 0 && b != 1)) {
        printf("\nInput must be either 1 or 0\n");
        return 1;
    }

    printf("INPUT:\t\tA = %d\t B = %d\n", a, b);
    printf("AND gate output:\t%d\n", AND(a, b));
    printf("OR gate output: \t%d\n", OR(a, b));
    printf("XOR gate output:\t%d\n", XOR(a, b));

    return 0;
}