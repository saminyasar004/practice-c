#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char * upper_case(char string[]) {
    char uppercased[strlen(string)];
    for(int i = 0; i < strlen(string); i++) {
        if((int)string[i] >= 97 && (int)string[i] <= 122) {
            uppercased[i] = string[i] - 32;
        } else {
            uppercased[i] = string[i];
        }
    }
    char *result = uppercased;
    return result;
}

void main(void) {
    char string[1000];
    printf("Enter your string: ");
    scanf("%s", string);
    printf("String = %s\n", string);
    char *result = upper_case(string);
    printf("Capital: %s\nlength = %d\n", result, (int)strlen(result));
}