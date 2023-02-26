#include <stdio.h>
#include <stdlib.h>

void main(void) {
  int totalRound = 10;
  int round = totalRound;
  int winsCount = 0;
  while(round > 0) {
    int randomNumber = 4; // TODO: make it generate randomly
    int guessedNumber;
    printf("Guess a number for round#%d: ", (totalRound - round) + 1);
    scanf("%d", &guessedNumber);
    if(guessedNumber == randomNumber) {
      winsCount++;
      continue;
    }
    round--;
  }
  printf("You have got %d out of %d!\n", winsCount, totalRound);
}