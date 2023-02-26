#include <stdio.h>

void main(void) {
  char *name[1];
  for(int i = 0; i < 1; i++) {
    printf("Enter your name: ");
    scanf("%s", name[i]);
    printf("Your name is: %s\n", name[i]);
  }
  // gets(name);
  // puts(name);
}