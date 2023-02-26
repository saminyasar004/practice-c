#include <stdio.h>

void main() {
   int length;
   printf("How many numbers do you have? ");
   scanf("%d", &length);
   int nums[length];
   
   // take the array's values
   for(int i = 0; i < length; i++) {
      printf("Enter your value for nums[%d] = ", i);
      scanf("%d", &nums[i]);
   }

   // print the whole array
   for(int i = 0; i < length; i++) {
      printf("%d\t", nums[i]);
   }
   printf("\n");
   
   // bubble sort array
   for(int i = 0; i < length - 1; i++) {
      for(int j = 0; j < length - i - 1; j++) {
         if(nums[j] > nums[j + 1]) {
            int temp = nums[j];
            nums[j] = nums[j + 1];
            nums[j + 1] = temp;
         }
      }
   }

   // print the whole array
   for(int i = 0; i < length; i++) {
      printf("%d\t", nums[i]);
   }
   printf("\n");
}