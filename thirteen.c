// 13. WAP to simulate the use of MOD operator.

#include<stdio.h>

int mod(int a, int b) {
    // simulate a % b using repeated subtraction
    int remainder = a;
    while(remainder >= b) {
        remainder = remainder - b;
    }
    return remainder;
}

int main() {
    int a, b;
    printf("Enter divident and divisor\n");
    scanf("%d %d", &a, &b);
    
    if(b == 0) {
        printf("Error: division by zero not allowed!\n");
        return 1;
    }
    printf("%d MOD %d = %d\n", a, b, mod(a, b));
    printf("Built in %% result: %d", a % b);

}