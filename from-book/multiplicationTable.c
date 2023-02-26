#include <stdio.h>

void main(void) {
  int rows, cols;
  takeRows:
  printf("Enter your rows number: ");
  scanf("%d", &rows);
  if(rows < 0) {
    goto takeRows;
  } else {
    takeCols:
    printf("Enter your columns number: ");
    scanf("%d", &cols);
    if(cols < 0) {
      goto takeCols;
    } else {
      printf("\t\tMultiplication table for row: %2d, column: %2d.\n", rows, cols);
      printf("\t");
      for(int i = 1; i <= cols; i++) {
        printf("%2d\t", i);
      }
      printf("\n");
      for(int i = 1; i <= rows; i++) {
        printf("%2d |\t", i);
        for(int j = 1; j <= cols; j++) {
          printf("%2d\t", (i * j));
        }
        printf("\n");
      }
      printf("\n");
    }
  }
}