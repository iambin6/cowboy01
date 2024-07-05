#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
  char s[101];
  int count = 0;

  printf("Enter a string: ");
  fgets(s, 101, stdin);

  // Remove trailing newline character
  s[strcspn(s, "\n")] = 0;

  for (int i = 0; i < strlen(s); i++) {
    char c = tolower(s[i]);
    if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u') {
      count++;
    }
  }

  printf("Number of non-vowel characters: %d\n", count);

  return 0;
}