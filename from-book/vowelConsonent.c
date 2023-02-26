#include <stdio.h>
#include <stdbool.h>

bool validateCharacter(char);
bool isVowel(char);

void main(void) {
  char character;
  takeCharacter:
  printf("Enter your character: ");
  scanf("%c", &character);
  bool validate = validateCharacter(character);
  if(validate == 1) {
    bool result = isVowel(character);
    if(result == 0) {
      printf("%c is a consonent.\n", character);
    } else if(result == 1) {
      printf("%c is a vowel.\n", character);
    }
  } else {
    goto takeCharacter;
  }
}

bool validateCharacter(char character) {
  bool matched = 0;
  for(int i = 65; i < (65 + 26); i++) {
    char currentCharacterCapital = i;
    char currentCharacterSmaller = i + 32;
    if(character == currentCharacterCapital || character == currentCharacterSmaller) {
      matched = 1; // matched is true
      break;
    }
  }
  return matched;
}

bool isVowel(char character) {
  int count = 0;
  char vowels[5] = {65, 69, 73, 79, 85};
  for(int i = 0; i < 5; i++) {
    char currentVowelCapital = vowels[i];
    char currentVowelSmaller = vowels[i] + 32;
    if(character == currentVowelCapital || character == currentVowelSmaller) {
      count++; // current character is a vowel
      break;
    }
  }
  if(count == 0) {
    return 0; // return false
  } else {
    return 1; // return true
  }
}
