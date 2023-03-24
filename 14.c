#include <stdio.h>

struct Worker {
    char name[50];
    int wage;
    int wdays;
};

int main() {
    struct Worker worker1, worker2;

    printf("Enter Details of First Worker\n");
    printf("Enter Worker Name : ");
    scanf("%s", worker1.name);
    printf("Enter Wage        : ");
    scanf("%d", &worker1.wage);
    printf("Enter wdays       : ");
    scanf("%d", &worker1.wdays);

    printf("\nEnter Details of Second Worker\n");
    printf("Enter Worker Name : ");
    scanf("%s", worker2.name);
    printf("Enter Wage        : ");
    scanf("%d", &worker2.wage);
    printf("Enter wdays       : ");
    scanf("%d", &worker2.wdays);

    int total_payment = (worker1.wage * worker1.wdays) + (worker2.wage * worker2.wdays);

    printf("\nTotal Payment of Workers: %d", total_payment);

    return 0;
}