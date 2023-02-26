#include <stdio.h>

void getPrimeNums(int range) {
  if(range >= 2) {
    for(int i = 2; i <= range; i++) {
      int count = 0;
      for(int j = 2; j < i; j++) {
        if(i % j == 0) {
          count++;
          break;
        } else {
          continue;
        }
      }
      if(count == 0) {
        printf("%d\n", i);
        continue;
      }
    }
  } else {
    printf("There are no prime number exist at your range!\n");
  }
}

void main() {
  int range;
  printf("Enter the range of prime numbers: ");
  scanf("%d", &range);
  getPrimeNums(range);
}