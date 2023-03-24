#include<stdio.h>

void performOperations(int* a, int* b)
{
    int sum = *a + *b;
    int difference = *a - *b;
    int product = (*a) * (*b);
    printf("Sum = %d\nDifference = %d\nProduct = %d\n", sum, difference, product);
}

int main()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    performOperations(&a, &b);
    return 0;
}
output:
Enter two numbers: 10 20
Sum = 30
Difference = -10
Product = 200