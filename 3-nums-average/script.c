#include <stdio.h>

int main() {
  int a, b, c, average;
  printf("Enter the number for a: ");
  scanf("%d", &a);
  printf("Enter the number for b: ");
  scanf("%d", &b);
  printf("Enter the number for c: ");
  scanf("%d", &c);
  average = (a + b + c) / 3;
  printf("The average of %d, %d, %d is: %d\n", a, b, c, average);
  return 0;
}