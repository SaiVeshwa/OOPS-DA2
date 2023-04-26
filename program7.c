#include <stdio.h>

int sum_of_digits(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    int sum = 0, i;
    for (i = 1000; i <= 9998; i += 2) {
        sum += i;
    }
    while (sum > 9) {
        sum = sum_of_digits(sum);
    }
    if (sum % 2 == 0) {
        printf("Even found\n");
    } else {
        printf("Odd found\n");
    }
    printf("%d",sum);
    return 0;
}
