// 8. To find the first capital letter in a string.

#include<stdio.h>
#include<string.h>
#include<ctype.h>

char firstCapitalLetter(char str[], int index) {
    if(str[index] == '\0') {
        return '\0';
    }
    if(str[index] >= 'A' && str[index] <= 'Z') {
        return str[index];
    }
    return firstCapitalLetter(str, index + 1);
}

int main() {
    char str[100];
    printf("Enter the string\n");
    fgets(str, sizeof(str), stdin);

    char result = firstCapitalLetter(str, 0);
    if(result != '\0') {
        printf("First capital letter:\t %c", result);
    } else {
        printf("No capital letter found\n");
    }
}