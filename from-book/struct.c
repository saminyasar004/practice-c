/**
 * Title: Struct in C
 * Description: Struct is one kind of data structer in C programming.
 * Author: Samin Yasar
 * Date: 23/January/2022
 */

#include <stdio.h>

/**
 * Struct is working as a structer (object)
*/

#define MAX_CHARS 10

struct Student {
  char firstName[MAX_CHARS];
  char lastName[MAX_CHARS];
  int class;
  int roll;
  char group[MAX_CHARS];
  double gpa;
};

void main(void) {
  struct Student student;
  printf("First name of the student: ");
  fgets(student.firstName, MAX_CHARS, stdin);

  printf("Last name of the student: ");
  fgets(student.lastName, MAX_CHARS, stdin);

  printf("Class of the student: ");
  scanf("%d", &student.class);

  printf("Roll of the student: ");
  scanf("%d", &student.roll);

  printf("GPA of the student: ");
  scanf("%lf", &student.gpa);

  printf("Group of the student: ");
  fgets(student.group, MAX_CHARS, stdin);

  printf("\n");

  printf("Student's Details \nFirst name: %s\nLast name: %s\nFull name: %s %s\nClass: %d\nRoll: %d\nGroup: %s\nGPA: %lf\n", student.firstName, student.lastName, student.firstName, student.lastName, student.class, student.roll, student.group, student.gpa);
}