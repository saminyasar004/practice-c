#include <stdio.h>
// #include "./getAge.c"

int main() {
  // int birthYear, age;
  // printf("Enter your birth year: ");
  // scanf("%d", &birthYear);
  // age = getAge(birthYear);
  // printf("You are %d years old!\n", age);
  // printf("Hello Script!\n");

  // int x = 4;
  // float y = 5.4;
  // char * name = "Samin Yasar";
  // printf("Size of x is %ld\n", sizeof(x));
  // printf("Size of y is %ld\n", sizeof(y));
  // printf("Size of name is %ld\n", sizeof(name));
  // printf("Size of 123456789 is %ld", sizeof(123456789));

  // printf("\n");

  // char *username = "saminyasar004";
  // char fullname[30] = "Samin Yasar";
  // printf("Your username is: %s\n", username);
  // printf("Your username is: %s\n", fullname);
  // printf("Your username is: %c\n", fullname[2]);
  
  // char character = 65;
  // signed char signedCharacter = -65;
  // unsigned char unsignedCharacter = 68;
  // int integer = 20;
  // signed int signedInteger = -12;
  // unsigned int unsignedInteger = 50;
  // short int shortInteger = 25;
  // // enum eNum  = 45;
  // long longInt = 20004;
  // signed long signedLong = -1234567;
  // unsigned long unsignedLong = 1234567;
  // float floatingPoint = 3.5;
  // double doublePoint = 65.65789;
  // long double longDouble =12345566.76542189;

  // printf("Size of char is %ld bytes.", sizeof(character));
  // printf("\n");
  // printf("Size of signed char is %ld bytes.", sizeof(signedCharacter));
  // printf("\n");
  // printf("Size of unsigned char is %ld bytes.", sizeof(unsignedCharacter));
  // printf("\n");
  // printf("Size of int is %ld bytes.", sizeof(integer));
  // printf("\n");
  // printf("Size of signed int is %ld bytes.", sizeof(signedInteger));
  // printf("\n");
  // printf("Size of unsigned int is %ld bytes.", sizeof(unsignedInteger));
  // printf("\n");
  // printf("Size of short int is %ld bytes.", sizeof(shortInteger));
  // printf("\n");
  // // printf("Size of enum is %ld bytes.", sizeof(eNum));
  // // printf("\n");
  // printf("Size of long int is %ld bytes.", sizeof(longInt));
  // printf("\n");
  // printf("Size of signed long is %ld bytes.", sizeof(signedLong));
  // printf("\n");
  // printf("Size of unsigned long is %ld bytes.", sizeof(unsignedLong));
  // printf("\n");
  // printf("Size of float is %ld bytes.", sizeof(floatingPoint));
  // printf("\n");
  // printf("Size of double is %ld bytes.", sizeof(doublePoint));
  // printf("\n");
  // printf("Size of long double is %ld bytes.", sizeof(longDouble));
  // printf("\n");

  // int x;
  // for(;;) {
  //   printf("Enter a positive number: ");
  //   scanf("%d", &x);
  //   if(x <= 0) {
  //     continue;
  //   } else {
  //     break;
  //   }
  // }
  // printf("You have entered %d\n", x);

  int x;
  check:
  for(;;) {
    printf("Enter a positive number: ");
    scanf("%d", &x);
    if(x <= 0) {
      goto check;
    } else {
      goto exit;
    }
  }
  exit:
  printf("You have entered %d\n", x);
  

  return 0;
}