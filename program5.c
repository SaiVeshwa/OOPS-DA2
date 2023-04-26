#include <stdio.h>

int main() {
    int i, a, b, c, acute = 0, right = 0, obtuse = 0, wrong = 0;

    for (i = 0; i < 5; i++) {
        printf("Enter the three angles of triangle %d: ", i+1);
        scanf("%d %d %d", &a, &b, &c);

        if (a+b+c != 180) {
            printf("Wrong Entry try again\n");
            i--;
            wrong++;
            continue;
        }

        if (a < 90 && b < 90 && c < 90)
            acute++;
        else if (a == 90 || b == 90 || c == 90)
            right++;
        else
            obtuse++;
    }

    printf("\nAcute Angled Triangle: %d\n", acute);
    printf("Right Angled Triangle: %d\n", right);
    printf("Obtuse Angled Triangle: %d\n", obtuse);
    printf("Wrong Entries: %d\n", wrong);

    return 0;
}
