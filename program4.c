#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Employee {
    char name[50];
    int age;
    char position[50];
    char date_of_joining[11];
};


int compareNames(const void* a, const void* b) {
    struct Employee* emp1 = (struct Employee*) a;
    struct Employee* emp2 = (struct Employee*) b;
    return strcmp(emp1->name, emp2->name);
}


int compareJoiningDates(const void* a, const void* b) {
    struct Employee* emp1 = (struct Employee*) a;
    struct Employee* emp2 = (struct Employee*) b;
    return strcmp(emp1->date_of_joining, emp2->date_of_joining);
}

int main() {
    int n, i;
    printf("Enter the number of employees: ");
    scanf("%d", &n);
    struct Employee employees[n];
    
   
    for (i = 0; i < n; i++) {
        printf("Enter details of employee %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", employees[i].name);
        printf("Age: ");
        scanf("%d", &employees[i].age);
        printf("Position: ");
        scanf("%s", employees[i].position);
        printf("Date of joining (dd/mm/yyyy): ");
        scanf("%s", employees[i].date_of_joining);
    }
    
    
    qsort(employees, n, sizeof(struct Employee), compareNames);
    printf("\nEmployee List sorted by name:\n");
    for (i = 0; i < n; i++) {
        printf("Name: %s\n", employees[i].name);
        printf("Age: %d\n", employees[i].age);
        printf("Position: %s\n", employees[i].position);
        printf("Date of Joining: %s\n\n", employees[i].date_of_joining);
    }
    
    qsort(employees, n, sizeof(struct Employee), compareJoiningDates);
    printf("Employee List sorted by date of joining:\n");
    for (i = 0; i < n; i++) {
        printf("Name: %s\n", employees[i].name);
        printf("Age: %d\n", employees[i].age);
        printf("Position: %s\n", employees[i].position);
        printf("Date of Joining: %s\n\n", employees[i].date_of_joining);
    }
    
    return 0;
}
