// 1. WAP to find the length of string using strlen function.
#include<stdio.h>
#include<string.h>

int main() {
    char str[100];
    printf("Enter the string\n");
    // scanf("%d", &str);
    fgets(str, sizeof(str), stdin);

    int length = strlen(str);
    printf("Length of string: %d", length);
}
