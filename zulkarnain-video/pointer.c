#include <stdio.h>
#include <stdlib.h>

/**
 * ? Pointer is another type of data.
 * A pointer stores the memory location or put a refrence of a particuler variable
*/

int main() {
  // create a integer type pointer
  int x = 100;
  int * pX = &x; // & --> address operator
  printf("%d is located on %p\n", x, pX); // %p --> format specifier for a pointer

  // dereference a pointer
  printf("%p dereference: %d\n", pX, *pX); // I can dereference a pointer as many time as I wish. &(*px) == pointer.

  // memory alocation for a pointer
  int birthYear = 2004;
  int * pBirthYear;
  pBirthYear = (int *)malloc(sizeof(int)); // that means, malloc() function allocate a memory according to the sizeof(int) == 4 bytes for the (int *) type pointer. In the next, I have to free this memory allocation manually.

  printf("%d located on: %p & size of: %ld bytes\n", birthYear, pBirthYear, sizeof(pBirthYear));
  
  // Free that memory allocation
  free(pBirthYear);
  printf("%d located on: %p & size of: %ld bytes\n", birthYear, pBirthYear, sizeof(pBirthYear));
  return 0;
}