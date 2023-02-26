#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main(void) {
    // initialize the timedef
    time_t t;
    // seed the random number with the time pointer which is continousely changing
    srand((unsigned)time(&t));
    // rand() function generate a random number between 0 to (2^31) - 1 inclusive
    int random_number = rand() % 10 + 1; // it will generate 1 to 10 random number
    printf("%ld\n", random_number);
}