#include <stdio.h>
#include <stdlib.h>

void main(void) {
    int nums[] = {1, 2, 3, 4, 45, 5, 23, 90};
    int length = (int)(sizeof(nums) / sizeof(nums[0]));
    int search_term;
    printf("Enter your search value: ");
    scanf("%d", &search_term);
    for(int i = 0; i < length; i++) {
        if(nums[i] == search_term) {
            printf("Item found on index: %d\n", i);
            break;
        } else if(i == (length - 1)) {
            printf("Item coudn't found!\n");
        }
    }
}