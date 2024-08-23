#include <math.h>
#include <stdio.h>

// * no.3

// int main() {
//   int n;
//   printf("Enter the value for n: ");
//   scanf("%d", &n);

//   int result = 0;

//   for (int i = 1; i <= n; i++) {
//     result += pow(i, i);
//   }

//   printf("result = %d\n", result);

//   return 0;
// }

// * no.5

int main() {
  int n;
  scanf("%d", &n);

  long int result = 0;

  for (int i = 1; i <= n; i++) {
    if (n % 2 == 0) {
      result -= i;
    } else {
      result += i;
    }
  }

  printf("result = %ld\n", result);

  return 0;
}