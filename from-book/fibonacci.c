#include <stdio.h>

void fibonacci(int pos) {
  int f0, f1, f;
  f0 = 0; f1 = 1;
  for(int i = 1; i <= pos; i++) {
    f = f0 + f1;
    printf("%d\n", f);
    f0 = f1;
    f1 = f;
  }
}

void main() {
  int pos;
  printf("Enter the end position for fibonacci sequence: ");
  scanf("%d", &pos);
  fibonacci(pos);
}