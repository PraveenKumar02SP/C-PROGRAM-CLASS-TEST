#include <stdio.h>

struct Employee {
    int eno;
    char ename[50];
    int salary;
};

int main() {
    int n;
    printf("Enter Limit: ");
    scanf("%d", &n);

    struct Employee employees[n];
    int max_salary_index = 0;

    printf("Enter details for %d employees:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Employee Number: ");
        scanf("%d", &employees[i].eno);
        printf("Name           : ");
        scanf("%s", employees[i].ename);
        printf("Salary         : ");
        scanf("%d", &employees[i].salary);

        if (employees[i].salary > employees[max_salary_index].salary) {
            max_salary_index = i;
        }
    }

    printf("\nDetails of employee having highest salary:\n");
    printf("Employee Number: %d\n", employees[max_salary_index].eno);
    printf("Name           : %s\n", employees[max_salary_index].ename);
    printf("Salary         : %d\n", employees[max_salary_index].salary);

    return 0;
}
output:
Enter Limit: 3
Enter details for 3 employees:
Employee Number: 2
Name           : t
Salary         : 30000
Employee Number: 3
Name           : f
Salary         : 40000
Employee Number: 5
Name           : z
Salary         : 25000

Details of employee having highest salary:
Employee Number: 3
Name           : f
Salary         : 40000