#include <stdio.h>
#include <stdlib.h>

void main(void) {
    int width, height;
    printf("Enter the width & height with space seperated (2 1): ");
    scanf("%d %d", &width, &height);
    for(int i = 0; i < height; i++) {
        for(int j = 0; j < width; j++) {
            printf("* ");
        }
        printf("\n");
    }
}