#include <stdio.h>
#include <stdlib.h>

void increement(int *a) {
  *a += 1;
  printf("inside a = %d\n", *a);
}

void main(void) {
  int nums[] = {1, 2, 3, 4, 5, 6};
  int *p_nums = &nums;
  for (int i = 0; i < 4; i++) {
    printf("nums[%d] = %u\n", i, *(p_nums + i));
  }
  // printf("%u\n", p_nums);
  // printf("%u\n", (p_nums + 1));
}

// 50:00