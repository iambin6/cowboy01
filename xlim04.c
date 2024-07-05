#include <stdio.h>
#include <string.h>

int main() {
  char s[101];
  printf("Enter a string: ");
  fgets(s, 101, stdin);

  // Remove trailing newline character
  s[strcspn(s, "\n")] = 0;

  // Remove all characters except alphabet and whitespace
  for (int i = 0; s[i] != '\0'; i++) {
    if (!((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z') || s[i] == ' ')) {
      s[i] = ' ';
    }
  }

  // Standardize the string (remove extra spaces)
  for (int i = 0; s[i] != '\0'; i++) {
    if (s[i] == ' ') {
      while (s[i + 1] == ' ') {
        for (int j = i + 1; s[j] != '\0'; j++) {
          s[j] = s[j + 1];
        }
      }
    }
  }

  printf("The resulting string is: %s\n", s);
  return 0;
}