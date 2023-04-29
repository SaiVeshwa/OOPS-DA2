#include <stdio.h>

int main() {
    char str[100];
    int uppercase_count = 0, lowercase_count = 0, digit_count = 0, whitespace_count = 0, symbol_count = 0;
    printf("Enter a string: ");
    fgets(str, 100, stdin);
    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] >= 'A' && str[i] <= 'Z') {
            uppercase_count++;
        } else if(str[i] >= 'a' && str[i] <= 'z') {
            lowercase_count++;
        } else if(str[i] >= '0' && str[i] <= '9') {
            digit_count++;
        } else if(str[i] == ' ') {
            whitespace_count++;
        } else {
            symbol_count++;
        }
    }
    printf("Uppercase letters: %d\n", uppercase_count);
    printf("Lowercase letters: %d\n", lowercase_count);
    printf("Digits: %d\n", digit_count);
    printf("Whitespaces: %d\n", whitespace_count);
    printf("Special symbols: %d\n", symbol_count);
    return 0;
}
