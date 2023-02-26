#include <stdio.h>

void main() {
  // Open a file & make a reference of it.
  FILE * fPointer = fopen("file.txt", "w");
  // write on this file
  fprintf(fPointer, "Helllooo...!");
  // finally close/save this file by its memory pointer
  fclose(fPointer);
}