#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int len, i, j, freq = 0;
    printf("Enter a string: ");
    scanf("%s", str);
    
    len = strlen(str);
    printf("Length of the string is: %d\n", len);
    
    for (i = 0; i < len; i++) {
        if (str[i] == str[0]) {
            freq++;
        }
    }
    printf("Word frequency is: %d\n", freq);
    
    for (i = 0; i < len; i++) {
        for (j = i + 1; j < len; j++) {
            if (str[i] == str[j]) {
                printf("First repeated character is: %c\n", str[i]);
                goto end;
            }
        }
    }
    printf("No repeated characters found in the string.\n");
    
    for (i = 0; i < len; i++) {
        for (j = 0; j < len; j++) {
            if (i != j && str[i] == str[j]) {
                break;
            }
        }
        if (j == len) {
            printf("First non-repeated character is: %c\n", str[i]);
            break;
        }
    }
    
    end:
    return 0;
}
