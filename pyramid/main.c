#include <stdio.h>
#include <stdlib.h>

void main(void) {
    // ? Half Pyramid
    int rows;
    printf("Enter your rows number: ");
    scanf("%d", &rows);
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    printf("\n\n");

    // ? Full Pyramid
    for(int i = 1; i <= rows; i++) {
        for(int j = 1; j <= (rows - i); j++) {
            printf(" ");
        }
        for(int j = 1; j <= ((2 * i) - 1); j++) {
            printf("*");
        }
        printf("\n");
    }

    printf("\n\n");

    // ? Reverse Full Pyramid
    for(int i = rows; i >= 1; i--) {
        for(int j = (rows - i); j >= 1; j--) {
            printf(" ");
        }
        for(int j = ((2 * i) - 1); j >= 1; j--) {
            printf("*");
        }
        printf("\n");
    }

    printf("\n\n");

    // ? Diamond Pyramid
    for(int i = 1; i <= rows; i++) {
        for(int j = 1; j <= (rows - i); j++) {
            printf(" ");
        }
        for(int j = 1; j <= ((2 * i) - 1); j++) {
            printf("*");
        }
        printf("\n");
    }
    for(int i = (rows - 1); i >= 1; i--) {
        for(int j = (rows - i); j >= 1; j--) {
            printf(" ");
        }
        for(int j = ((2 * i) - 1); j >= 1; j--) {
            printf("*");
        }
        printf("\n");
    }
}