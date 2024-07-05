#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char s[101];
    int count = 0;
    int inWord = 0;

    printf("Enter a string: ");
    fgets(s, 101, stdin);
    s[strcspn(s, "\n")] = 0;

    for (int i = 0; s[i]!= '\0'; i++) {
        if (isspace(s[i])) {
            inWord = 0;
        } else if (!inWord) {
            inWord = 1;
            if (tolower(s[i]) == 'a') {
                count++;
            }
        }
    }

    printf("Number of words starting with 'a' or 'A': %d\n", count);

    return 0;
}