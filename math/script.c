#include <stdio.h>
#include <math.h>

#define PI 3.1416
#define MAX 180

void main() {
  int angle, x, sinX, cosX, tanX;
  printf("Enter your angle: ");
  scanf("%d", &angle);
  x = (PI / MAX) * angle;
  sinX = sin(x);
  cosX = cos(x);
  tanX = tan(x);
  printf("Sin(%d): %d\nCos(%d): %d\nTan(%d): %d\n", angle, sinX, angle, cosX, angle, tanX);
  printf("Thank you!\n");
}