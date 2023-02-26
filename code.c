#include <stdio.h>
#include <stdlib.h>

int main()
{
  int testcase;
  scanf("%d", &testcase);
  int totalPrice = 100;
  int results[testcase];
  for (int i = 0; i < testcase; i++)
  {
    scanf("%ld", results[i]);
  }

  for (int i = 0; i < testcase; i++)
  {
    printf("%d\n", results[i]);
  }
  return 0;
}