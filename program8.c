#include <stdio.h>
#include <string.h>

#define PASSWORD "aeiceg"

int main() {
    char input[3][3], concat[6];
    
    printf("Enter the 3x3 matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf(" %c", &input[i][j]);
        }
    }
    

    concat[0] = input[0][0];
    concat[1] = input[1][1];
    concat[2] = input[2][2];
    concat[3] = input[0][2];
    concat[4] = input[1][1];
    concat[5] = input[2][0];
    
    concat[6] = '\0';
    
    if (strcmp(concat, PASSWORD) == 0) {
        printf("Access granted.\n");
    } else {
        printf("Access denied.\n");
    }
    
    return 0;
}
