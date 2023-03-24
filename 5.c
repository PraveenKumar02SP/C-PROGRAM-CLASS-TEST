#include <stdio.h>
int main() {

  int num1, num2, sum;

  printf("Enter two integers: ");
  //Storing user input into variable num1 & num2
  scanf("%d %d", &num1, &num2);

  // Adding two input numbers
  sum = num1 + num2;

  printf("Sum of %d and %d is: %d", num1, num2, sum);
  return 0;
}
output:
Enter two integers: 5 10
Sum of 5 and 10 is: 15