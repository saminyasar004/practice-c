#include <stdio.h>
enum Level { LOW = 1, MEDIUM, HIGH };

int main() {
  enum Level myVar = HIGH;

  switch (myVar) {
  case 1:
    printf("Low Level \n");
    break;
  case 2:
    printf("Medium level \n");
    break;
  case 3:
    printf("High level \n");
    break;
  }
  return 0;
}