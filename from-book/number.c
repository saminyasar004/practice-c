#include <stdio.h>

int main() {
  char base_16[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
  long convertedNum[64];
  long originalNum, base, numToConvert, index = 0;
  inputOriginalNum:
  printf("Enter your positive number: ");
  scanf("%ld", &originalNum);
  numToConvert = originalNum;
  if(originalNum < 0) {
    goto inputOriginalNum;
  } else {
    inputBase:
    printf("Enter your base (2 or 8 or 10 or 16): ");
    scanf("%ld", &base);
    if(base != 2 && base != 8 && base != 10 && base != 16) {
      goto inputBase;
    } else {
      if(originalNum == 0) {
        printf("The %ld in %ld is: %d\n", originalNum, base, 0);
        return 0;
      } else {
        while(numToConvert != 0) {
          convertedNum[index] = numToConvert % base;
          ++index;
          numToConvert = numToConvert / base;
        }
        index -= 1;
        printf("The %ld in %ld is below. ", originalNum, base);
        while(index >= 0) {
          printf("%c", base_16[convertedNum[index]]);
          --index;
        }
        printf("\n");
      }
    }
  }
}