#include <stdio.h>
#include <stdlib.h>

// ? Easy Question
/**
 * First Take all the values for matrix A and B
 * Then perform all mathematical operation among those matrices
 * Finally print them out
*/

// ? Hard Question
/**
 * Take how many matrix will be.
 * Then run throgh a loop of the numbers of matrices to take the corresponding matrix's row and column to create individual matrix
 * Then perform all matrix related operations (addition, substraction, multiplication)
*/

int main() {
  int r1, r2, c1, c2;
  takeRow1:
  printf("Enter the row number for matrix A: ");
  scanf("%d", &r1);
  if(r1 <= 0) {
    goto takeRow1;
  } else {
    takeCol1:
    printf("Enter the column number for matrix A: ");
    scanf("%d", &c1);
    if(c1 <= 0) {
      goto takeCol1;
    } else {
      takeRow2:
      printf("Enter the row number for matrix B: ");
      scanf("%d", &r2);
      if(r2 <= 0) {
        goto takeRow2;
      } else {
        takeCol2:
        printf("Enter the column number for matrix B: ");
        scanf("%d", &c2);
        if(c2 <= 0) {
          goto takeCol2;
        } else {
          printf("Matrix A = [%d][%d], Matrix B = [%d][%d].\n", r1, c1, r2, c2);
          // Initialize matrixes
          int matrixA[r1][c1], matrixB[r2][c2];
          // take matrix A
          for(int i = 1; i <= r1; i++) {
            for(int j = 1; j <= c1; j++) {
              printf("Enter the value for matrixA[%d][%d]: ", i, j);
              scanf("%d", &matrixA[i][j]);
            }
          }
          // take matrix B
          for(int i = 1; i <= r2; i++) {
            for(int j = 1; j <= c2; j++) {
              printf("Enter the value for matrixB[%d][%d]: ", i, j);
              scanf("%d", &matrixB[i][j]);
            }
          }
          // print matrix A
          printf("Matrix A\n");
          for(int i = 1; i <= r1; i++) {
            for(int j = 1; j <= c1; j++) {
              printf("%d\t", matrixA[i][j]);
            }
            printf("\n");
          }
          // print matrix B
          printf("Matrix B\n");
          for(int i = 1; i <= r2; i++) {
            for(int j = 1; j <= c2; j++) {
              printf("%d\t ", matrixB[i][j]);
            }
            printf("\n");
          }
          // ? Substraction of two matrices (AB)
          // ! Solve the problem... :)
          if(c1 == r2) {
            int matrixAB[r1][c2];
            for(int i = 1; i <= r1; i++) {
              for(int j = 1; j <= c2; j++) {
                matrixAB[i][j] = 0;
                for(int k = 1; k <= c1; k++) {
                  matrixAB[i][j] += matrixA[i][k] * matrixB[k][i];
                }
              }
            }
            // print matrix AB
            printf("Matrix AB\n");
            for(int i = 1; i <= r1; i++) {
              for(int j = 1; j <= c2; j++) {
                printf("%d\t", matrixAB[i][j]);
              }
              printf("\n");
            }
          } else {
            printf("AB is not possible.");
          }
        }
      }
    }
  }
  return 0;
}