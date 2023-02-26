#include <stdio.h>

int main() {
  char * userName;
  printf("What is your name? ");
  scanf("%s", &userName);
  printf("Your name is: %s\n", userName);
  return 0;
}