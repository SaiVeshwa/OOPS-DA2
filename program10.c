#include <stdio.h>

#define NUM_STUDENTS 25

int main() {
    int original_marks[NUM_STUDENTS], revised_marks[NUM_STUDENTS];
    int birth_months[NUM_STUDENTS], i, sum_orig = 0, sum_rev = 0;
    float avg_orig, avg_rev, diff;

    printf("Enter original marks and birth month for %d students:\n", NUM_STUDENTS);
    for (i = 0; i < NUM_STUDENTS; i++) {
        scanf("%d%d", &original_marks[i], &birth_months[i]);
    }

    for (i = 0; i < NUM_STUDENTS; i++) {
        revised_marks[i] = original_marks[i] + birth_months[i];
        sum_orig += original_marks[i];
        sum_rev += revised_marks[i];
    }

    avg_orig = (float)sum_orig / NUM_STUDENTS;
    avg_rev = (float)sum_rev / NUM_STUDENTS;

    diff = avg_rev - avg_orig;

    printf("Original marks:\n");
    for (i = 0; i < NUM_STUDENTS; i++) {
        printf("%d ", original_marks[i]);
    }
    printf("\nOriginal average: %.2f\n", avg_orig);

    printf("Revised marks:\n");
    for (i = 0; i < NUM_STUDENTS; i++) {
        printf("%d ", revised_marks[i]);
    }
    printf("\nRevised average: %.2f\n", avg_rev);

    if (diff >= 5.0) {
        printf("Can implement - Significant increase in class average\n");
    } else {
        printf("Need not implement - No significant increase in class average\n");
    }

    return 0;
}
