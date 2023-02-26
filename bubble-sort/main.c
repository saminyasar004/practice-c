#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main(void) {
    int nums[] = {5, 2, 6, 3, 9, 9, 0, 7, 1, 6, 3, 4, 2};
    //            2, 5  6
    int length = (int)(sizeof(nums) / sizeof(nums[0]));
    for(int i = 0; i < length; i++) {
        for(int j = 0; j < length; j++) {
            if(i != j) {
                if(nums[i] > nums[j]) {
                    int temp = nums[i];
                    nums[i] = nums[j];
                    nums[j] = temp;
                }
            }
        }
    }
    for(int i = 0; i < length; i++) {
        printf("%d ", nums[i]);
    }
    printf("\n");
}