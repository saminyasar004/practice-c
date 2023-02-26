#include <stdio.h>

void main() {
  int factorial, num;
  factorial = 1;
  check:
  printf("Enter a positive number: ");
  scanf("%d", &num);
  if(num < 0) {
    goto check;
  } else if(num == 0) {
    printf("Factorial of %d is: %d\n", num, num);
  } else {
    for(int i = num; i >= 1; i--) {
      factorial *= i;
    }
    printf("Factorial of %d is: %d\n", num, factorial);
  }
}