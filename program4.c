#include <stdio.h>
#include <string.h>

#define MAX_EMPLOYEES 100

struct employee {
    char name[50];
    int age;
    char position[50];
    char date_of_joining[11];
};

void sort_by_name(struct employee emp[], int n) {
    struct employee temp;
    int i, j;
    for(i=0; i<n-1; i++) {
        for(j=i+1; j<n; j++) {
            if(strcmp(emp[i].name, emp[j].name) > 0) {
                temp = emp[i];
                emp[i] = emp[j];
                emp[j] = temp;
            }
        }
    }
}

void sort_by_date_of_joining(struct employee emp[], int n) {
    struct employee temp;
    int i, j;
    for(i=0; i<n-1; i++) {
        for(j=i+1; j<n; j++) {
            if(strcmp(emp[i].date_of_joining, emp[j].date_of_joining) > 0) {
                temp = emp[i];
                emp[i] = emp[j];
                emp[j] = temp;
            }
        }
    }
}

void display_employee_list(struct employee emp[], int n) {
    int i;
    for(i=0; i<n; i++) {
        printf("Name: %s\n", emp[i].name);
        printf("Age: %d\n", emp[i].age);
        printf("Position: %s\n", emp[i].position);
        printf("Date of Joining: %s\n\n", emp[i].date_of_joining);
    }
}

int main() {
    int n, i;
    struct employee emp[MAX_EMPLOYEES];

    printf("Enter the number of employees: ");
    scanf("%d", &n);

    for(i=0; i<n; i++) {
        printf("Enter details of employee %d:\n", i+1);
        printf("Name: ");
        scanf("%s", emp[i].name);
        printf("Age: ");
        scanf("%d", &emp[i].age);
        printf("Position: ");
        scanf("%s", emp[i].position);
        printf("Date of joining (dd/mm/yyyy): ");
        scanf("%s", emp[i].date_of_joining);
    }

    sort_by_name(emp, n);

    printf("\nEmployee List sorted by name:\n\n");
    display_employee_list(emp, n);

    sort_by_date_of_joining(emp, n);

    printf("\nEmployee List sorted by date of joining:\n\n");
    display_employee_list(emp, n);

    return 0;
}
