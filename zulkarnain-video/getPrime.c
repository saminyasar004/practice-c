#include <stdio.h>
#include <stdbool.h>

/**
 * Return a boolean value if the given number is a prime number or not
 * @param {Number} num The number would be check that if it is a prime number or not
 * @returns {Boolean} - 0 means false, 1 means true
 */
bool isPrime(long num) {
  if(num == 1) {
    return false;
  } else {
    int count = 0;
    for(int i = 1; i <= num; i++) {
      if(i == 1 || i == num) {
        continue;
      } else {
        if(num % i == 0) {
          count++;
          break;
        } else {
          continue;
        }
      }
    }
    if(count == 0) {
      return true;
    } else {
      return false;
    }
  }
}

void main(void) {
  long range;
  takeRange:
  printf("Give a positive number upto what you want to find the primes: ");
  scanf("%ld", &range);
  if(range <= 0) {
    goto takeRange;
  } else {
    long index = 1;
    for(long i = 1; i <= range; i++) {
      if(isPrime(i) == 1) {
        printf("%ld:\t%ld\n", index, i);
        index++;
      } else {
        continue;
      }
    }
  }
}