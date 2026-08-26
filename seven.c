// 7. To find the number of vowels in the given string.
#include<stdio.h>
#include<string.h>
#include<ctype.h>
int countVowels(char str[], int index) {
    if(str[index] == '\0') {
        return 0;
    }
    char ch = tolower(str[index]);

    if(ch == 'a' || ch == 'e' || ch == 'i' ||
        ch == 'o' || ch == 'u') {
            return 1 + countVowels(str, index + 1);
        }

        return countVowels(str, index + 1);
}

int main() {
    char str[100];
    printf("Enter the strings\n");
    fgets(str, sizeof(str), stdin);

    printf("Number of vowel = %d\n", countVowels(str, 0));

    return 0;

}