#include <stdio.h>
#include <string.h>
#include <ctype.h>

int modifyString(char *str) {
    
    char first[20], second[20];
    sscanf(str, "%s %s", first, second);

    first[0] = toupper(first[0]);
    for (int i = 1; i < strlen(first); i++) {
        first[i] = tolower(first[i]);
    }

    for (int i = 0; i < strlen(second); i++) {
        second[i] = toupper(second[i]);
    }

    char revisedString[50];
    sprintf(revisedString, "%s %s", first, second);

    printf("Revised string: %s\n", revisedString);
    printf("Length of the string: %ld\n", strlen(revisedString));

    if (strlen(revisedString) < 20) {
        return strlen(revisedString);
    } else {
        return sizeof(revisedString);
    }
}

int main() {

    char inputString[100];
    printf("Enter a sentence with two words: ");
    fgets(inputString, 100, stdin);

    inputString[strcspn(inputString, "\n")] = '\0';

    int length = modifyString(inputString);
    printf("Returned length: %d\n", length);

    return 0;
}
