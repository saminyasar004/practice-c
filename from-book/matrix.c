/**
 * Title: Matrix
 * Description: Matrix related functions
 * Author: Samin Yasar
 * Date: 12/January/2022
 */

#include <stdio.h>

void isCornerMatrix(void) {
  int rows, cols;
  takeRows:
  printf("Enter your matrix rows number: \n");
  scanf("%d", &rows);
  if(rows <= 0) {
    goto takeRows;
  } else {
    takeCols:
    printf("Enter your matrix cols number: \n");
    scanf("%d", &cols);
    if(cols < 0) {
      goto takeCols;
    } else {
      int matrix1[rows][cols];
      printf("Enter Matrix1\n");
      for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
          scanf("%d", &matrix1[i][j]);
        }
      }
      printf("\n");
      for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
          printf("%d\t", matrix1[i][j]);
        }
        printf("\n");
      }
      if(rows == cols) {
        int cornerValues[32];
        int previousCornerValue;
        int index = 0;
        printf("\n");
        for(int i = 0; i < rows; i++) {
          for(int j = 0; j < cols; j++) {
            if(i == j) {
              cornerValues[index] = matrix1[i][j];
              index++;
            }
          }
        }
        previousCornerValue = cornerValues[0];
        for(int i = 0; i < index; i++) {
          printf("%d\t", cornerValues[i]);
          if(cornerValues[i] != previousCornerValue) {
            printf("\nThe matrix is not a corner matrix.\n");
          } else {
            previousCornerValue = cornerValues[i];
          }
        }
        printf("\n");
      }
    }
  }
}

void addTwoMatrixes(void) {
  int rows, cols;
  takeRows:
  printf("Enter rows number: ");
  scanf("%d", &rows);
  if(rows <= 0) {
    goto takeRows;
  } else {
    takeCols:
    printf("Enter columns number: ");
    scanf("%d", &cols);
    if(cols <= 0) {
      goto takeCols;
    } else {
      int matrix1[rows][cols];
      int matrix2[rows][cols];
      char takeMatrix(int matrix[][cols]) {
        for(int i = 0; i < rows; i++) {
          for(int j = 0; j < cols; j++) {
            printf("Enter value for matrix[%d][%d]\n", i, j);
            scanf("%d", &matrix[i][j]);
          }
        }
      }
      char showMatrix(int matrix[][cols]) {
        printf("Matrix is below: \n");
        for(int i = 0; i < rows; i++) {
          for(int j = 0; j < cols; j++) {
            printf("%d\t", matrix[i][j]);
          }
          printf("\n");
        }
      }
      char addMatrixes(int matrix1[][cols], int matrix2[][cols]) {
        int subMatrix[rows][cols];
        for(int i = 0; i < rows; i++) {
          for(int j = 0; j < cols; j++) {
            subMatrix[i][j] = matrix1[i][j] + matrix2[i][j];
          }
        }
        showMatrix(subMatrix);
      }
      takeMatrix(matrix1);
      takeMatrix(matrix2);
      showMatrix(matrix1);
      showMatrix(matrix2);
      addMatrixes(matrix1, matrix2);
    }
  }
}

void multiplyTwoMatrixes(void) {
  int rows, cols;
  takeRows:
  printf("Enter rows number: ");
  scanf("%d", &rows);
  if(rows <= 0) {
    goto takeRows;
  } else {
    takeCols:
    printf("Enter columns number: ");
    scanf("%d", &cols);
    if(cols <= 0) {
      goto takeCols;
    } else {
      int matrix1[rows][cols];
      int matrix2[rows][cols];
      char takeMatrix(int matrix[][cols]) {
        for(int i = 0; i < rows; i++) {
          for(int j = 0; j < cols; j++) {
            printf("Enter value for matrix[%d][%d]\n", i, j);
            scanf("%d", &matrix[i][j]);
          }
        }
      }
      char showMatrix(int matrix[][cols]) {
        printf("Matrix is below: \n");
        for(int i = 0; i < rows; i++) {
          for(int j = 0; j < cols; j++) {
            printf("%d\t", matrix[i][j]);
          }
          printf("\n");
        }
      }
      char multiplyMatrixes(int matrix1[][cols], int matrix2[][cols]) {
        int subMatrix[rows][cols];
        for(int i = 0; i < rows; i++) {
          for(int j = 0; j < cols; j++) {
            subMatrix[i][j] = matrix1[i][j] * matrix2[i][j];
          }
        }
        showMatrix(subMatrix);
      }
      takeMatrix(matrix1);
      takeMatrix(matrix2);
      showMatrix(matrix1);
      showMatrix(matrix2);
      multiplyMatrixes(matrix1, matrix2);
    }
  }
}

void sumOfDiagonals(void) {
  int rows, cols;
  takeRows:
  printf("Enter rows number: ");
  scanf("%d", &rows);
  if(rows <= 0) {
    goto takeRows;
  } else {
    takeCols:
    printf("Enter columns number: ");
    scanf("%d", &cols);
    if(cols <= 0) {
      goto takeCols;
    } else {
      int matrix[rows][cols];
      int sum = 0;
      // take all values
      for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
          printf("Enter the value for [%d][%d]: ", i, j);
          scanf("%d", &matrix[i][j]);
        }
      }
      // show the matrix
      printf("Your given matrix is below: \n");
      for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
          printf("%d\t", matrix[i][j]);
        }
        printf("\n");
      }
      // add the diagonals
      for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
          if(i == j) {
            sum += matrix[i][j];
          } else {
            continue;
          }
        }
      }
      printf("The summation of diagonals value: %d\n", sum);
    }
  }
}

void main(void) {
  sumOfDiagonals();
}