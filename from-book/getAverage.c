#include <stdio.h>

int main(void) {
  int n;
  float sum, average;
  sum = 0.00;
  takeN:
  printf("How many numbers: ");
  scanf("%d", &n);
  if(n <= 0) {
    goto takeN;
  } else {
    for(int i = 1; i <= n; i++) {
      float current;
      printf("Enter value for #%d: ", i);
      scanf("%f", &current);
      sum += current;
    }
    average = sum / n;
    printf("You have %d numbers.\n", n);
    printf("Sum = %.2f\n", sum);
    printf("Average = %.2f\n", average);
  }
}