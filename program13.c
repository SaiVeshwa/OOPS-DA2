#include <stdio.h>

void calculate(int n, double *sum)
{
    static int i = 1;
    double fact = 1;

    if (i <= n) {
        for (int j = 1; j <= i; j++) {
            fact *= j;
        }
        *sum += fact / i;
        i++;

        calculate(n, sum);
    }
}

int main()
{
    int n;
    double sum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    calculate(n, &sum);

    printf("Sum of the series is: %lf\n", sum);

    return 0;
}
