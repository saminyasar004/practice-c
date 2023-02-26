#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main(void) {
    const short total_round = 5;
    const short pass_percentage = 70; // give a number between 100
    short count = 0;
    for(short i = 1; i <= total_round; i++) {
        time_t t;
        srand((unsigned)time(&t));
        short random_number = rand() % 10 + 1; // generate a number between 1 - 10
        short given_number;
        printf("Enter a random number (1 to 10): ");
        scanf("%hd", &given_number);
        if(given_number == random_number) {
            count++;
            printf("You guessed right\n");
        } else {
            printf("The random number is: %hd\n", random_number);
        }
    }
    if(count >= ((total_round * pass_percentage) / 100)) {
        printf("Congratulations! You have win! (%hd/%hd)\n", count, total_round);
    } else {
        printf("Ooops! You are loose. (%hd/%hd)\n", count, total_round);
    }
}