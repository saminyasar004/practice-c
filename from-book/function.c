#include <stdio.h>

int my_age = 18;
void increase_age();
void another();

int main() {
  printf("main --> my_age = %d\n", my_age);
  increase_age();
  printf("main --> my_age = %d\n", my_age);
  another();
  printf("main --> my_age = %d\n", my_age);
}

void increase_age() {
  int my_age;
  // my_age = 19;
  printf("increase_age --> my_age = %d\n", my_age);
}

void another() {
  extern int my_age;
  printf("another --> my_age = %d\n", my_age);
}