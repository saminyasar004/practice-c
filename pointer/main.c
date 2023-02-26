#include <stdio.h>
#include <stdlib.h>

/**
 * Pointer holo emon ekta variable jeta onno arekta variable er memory address
 * ke represent kore. that means eta ekta variable kei reference kore je data
 * type er variable ke point/refer korte chai pointer er data type o shei data
 * type er hote hobe pointer define korar jonno data type o variable name er
 * majhe * sign dite hobe ekta pointer variable e je variable er memory location
 * rakhte chai she variable er age & sign dilei oi variable er memory location
 * chole ashe integer type er pointer shudhu integer type er variable kei point
 * korte pare. integer type er pointer ke char type er variable ke point korte
 * hole type cast kore nite hobe pointer er size always 8 bytes hoye thake
 * je pointer ekta integer type data ke point kore take pointer to integer bole
 * je pointer ekta character type data ke point kore take pointer to character
 * bole je pointer ekta float type data ke point kore take pointer to float bole
 * je pointer ekta double type data ke point kore take pointer to double bole
 */

int main() {
  // ** Pointer define for different data type ** //
  // int a = 3; // integer type data
  // char c = 65; // character type data
  // float f = 7.5l; // float type data
  // int *p_a = &a; // pointing to a
  // char * p_c = &c; // pointing to c
  // float * p_f = &f; // pointing to f
  // printf("a = %d, pointer = %u\n", a, p_a);
  // printf("c = %c, pointer = %u\n", c, p_c);
  // printf("f = %.2f, pointer = %u\n", f, p_f);

  // ** integer type pointer can only point integer type data. otherwise it will
  // need to type cast ** // int a = 1025; int *p_a = &a; printf("a = %d ==>
  // %u\n", a, p_a); char c = 65; char *p_c = (int *)p_a; printf("a = %d ==> %u,
  // c = %d ==> %u\n", a, p_a, *(p_c), p_c);

  // int a = 1025;
  // int *p_a = &a;
  // char *p_a0 = p_a;
  // printf("a = %d ==> %u\n", a, (int)(p_a));
  // for(int i = 0; i <= 10; i++) {
  //     printf("%u ==> %d\n", (int)(p_a0 + i), *(p_a0 + i));
  // }

  // ** void type pointer ** //
  // void pointer diye jekono type er data ke point kora jay
  // int a = 1025;
  // char c = 65;
  // void *p_a = &a;
  // void *p_c = &c;
  // printf("integer = %d integer pointer --> %p\nvoid pointer --> %p\n", a, &a,
  // p_a); printf("char = %c char pointer --> %p\nvoid pointer --> %p\n", c, &c,
  // p_c);

  // ** pointer to pointer ** //
  /**
   * je pointer onno ekta pointer variable ke point kore take pointer to pointer
   * bole
   * pointer to pointer variable define korar jonno data type o variable name er
   * majhe 2 ta * sign dite hobe
   * pointer to pointer joto step er hobe * sign totogulo e dite hobe
   */
  // int a = 50;
  // int *p_to_int = &a;              // points to --> a
  // int **p_to_pointer = &p_to_int;  // points to --> p_to_int
  // int ***p_to_pointer1 = &p_to_pointer;
  // printf("a = %d --> %u\npointer to pointer --> %u\n", a, p_to_int,
  //        p_to_pointer);
  // printf("a = %u\n",
  //        *(*(p_to_pointer)));  // dereference(p_to_pointer) = p_to_int and
  // // dereference(dereference(p_to_pointer)) = a
  // printf(
  //     "a = %u\n",
  //     *(*(*(p_to_pointer1))));  // dereference(p_to_pointer1) = p_to_pointer
  //     and
  // // dereference(dereference(p_to_pointer1)) = p_to_int and
  // // dereference(dereference(dereference(p_to_pointer1))) = a

  return 0;
}