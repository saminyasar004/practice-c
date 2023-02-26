#include <stdio.h>

void isLeapYear(void) {
  long year;
  takeYear:  
  printf("Enter a valid year: ");
  scanf("%ld", &year);
  if(year <= 0) {
    goto takeYear;
  } else {
    int result = year % 4;
    if(result == 0) {
      printf("%ld is a leap year!\n", year);
    } else {
      printf("%ld is not a leap year!\n", year);
    }
  }
}

void main(void) {
  int testCase = 0;
  scanf("%d", &testCase);
  while(testCase > 0) {
    isLeapYear();
    testCase--;
  }
}