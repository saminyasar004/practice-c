#include <stdio.h>

void main(void) {
  int r1, r2, c1, c2;

  takeM1:
  printf("Enter your row/column number for matrix#1: ");
  scanf("%d/%d", &r1, &c1);
  
  if(r1 <= 0 || c1 <= 0) {
    goto takeM1;
  } else {
    takeM2:
    printf("Enter your row/column number for matrix#2: ");
    scanf("%d/%d", &r2, &c2);

    if(r2 <= 0 || c2 <= 0) {
      goto takeM2;
    } else {
      // check that c1 == r2
      if(c1 == r2) {
        // store m1 & m2
        int m1[r1][c1], m2[r2][c2];

        printf("\n");

        // take values for m1
        for(int i = 1; i <= r1; i++) {
          for(int j = 1; j <= c1; j++) {
            printf("Enter the value for Matrix#1[%d][%d]: ", i, j);
            scanf("%d", &m1[i][j]);
          }
        }

        printf("\n");

        // take values for m2
        for(int i = 1; i <= r2; i++) {
          for(int j = 1; j <= c2; j++) {
            printf("Enter the value for Matrix#2[%d][%d]: ", i, j);
            scanf("%d", &m2[i][j]);
          }
        }

        printf("\n");

        // print m1
        printf("Matrix#1 below: \n");
        for(int i = 1; i <= r1; i++) {
          printf("|");
          for(int j = 1; j <= c1; j++) {
            printf("%d", m1[i][j]);
            if(j != c1) {
              printf("\t");
            }
          }
          printf("|");
          printf("\n");
        }

        printf("\n");

        // print m2
        printf("\nMatrix#2 below: \n");
        for(int i = 1; i <= r2; i++) {
          printf("|");
          for(int j = 1; j <= c2; j++) {
            printf("%d", m2[i][j]);
            if(j != c2) {
              printf("\t");
            }
          }
          printf("|");
          printf("\n");
        }

        printf("\n");
        
        // multiply
        int result[r1][c1];
        // initialize all the result element as 0
        for(int i = 1; i <= r1; i++) {
          for(int j = 1; j <= c1; j++) {
            result[i][j] = 0;
          }
        }

        // TODO: Multiply

        // print result
        printf("\nMultiplication of Matrix#1 & Matrix#2 below: \n");
        for(int i = 1; i <= r1; i++) {
          printf("|");
          for(int j = 1; j <= c1; j++) {
            printf("%d", result[i][j]);
            if(j != c2) {
              printf("\t");
            }
          }
          printf("|");
          printf("\n");
        }
      } else {
        printf("Matrix#1's column number should be equal to Matrix#2's row number.\n");
        goto takeM1;
      }
    }
  }
}