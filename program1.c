#include <stdio.h>
#include<math.h>

int isPrime(int n) {
    int i;
    for (i = 2; i <= n/2; i++) {
        if (n % i == 0) {
            return 0; 
        }
    }
    return 1; 
}

int isArmstrong(int n) {
    int sum = 0, temp = n, remainder, digits = 0;
    while (temp != 0) {
        digits++;
        temp /= 10;
    }
    temp = n;
    while (temp != 0) {
        remainder = temp % 10;
        sum += pow(remainder, digits);
        temp /= 10;
    }
    return (sum == n); 
}

int isPerfect(int n) {
    int sum = 0, i;
    for (i = 1; i <= n/2; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }
    return (sum == n); 
}

int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (isPrime(n)) {
        printf("%d is a prime number\n", n);
    } else {
        printf("%d is not a prime number\n", n);
    }

    if (isArmstrong(n)) {
        printf("%d is an Armstrong number\n", n);
    } else {
        printf("%d is not an Armstrong number\n", n);
    }

    if (isPerfect(n)) {
        printf("%d is a perfect number\n", n);
    } else {
        printf("%d is not a perfect number\n", n);
    }

    return 0;
}
