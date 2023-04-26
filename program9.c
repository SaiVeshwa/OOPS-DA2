#include <stdio.h>

int power(int x, int n);

int main() {
    int x, n, result;
    
    printf("Enter a number x: ");
    scanf("%d", &x);
    
    printf("Enter an exponent n (<= 5): ");
    scanf("%d", &n);
    
    if (n > 5) {
        printf("Error: n must be less than or equal to 5\n");
        return 1;
    }
    
    result = power(x, n);
    
    printf("%d^%d = %d\n", x, n, result);
    
    return 0;
}

int power(int x, int n) {
    if (n == 0) {
        return 1;
    } else {
        return x * power(x, n - 1);
    }
}
