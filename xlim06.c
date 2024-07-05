#include <stdio.h>
#include <string.h>
#include <ctype.h>
void findsmallest() {
    int a, b, c;
    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);
    int smallest = (a < b) ? (a < c) ? a : c : (b < c) ? b : c;
    printf("Smallest number is: %d\n", smallest);
}

void printpattern() {
    int n;
    printf("Nhap n: ");
    scanf("%d",&n);
        for (int i=1;i<=n;i++) {
            for (int j=i;j<n;j++) {
                    printf("  ");
                }
            for(int k=1;k<=2*i-1;k++){
            	printf(" %d",k);
			}
            printf("\n");
        }
}

void countnonvowels() {
    char s[101];
    int count = 0;
    
    printf("Enter a string: ");
    getchar();
    fgets(s, 101, stdin);
    s[strcspn(s, "\n")] = '\0';
    
    for (int i = 0; i < strlen(s); i++) {
        char c = tolower(s[i]);
        if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u' && isalpha(c)) {
            count++;
        }
    }
    printf("Number of non-vowel characters: %d\n", count);
}

void standardizestring() {
    char s[101];
    printf("Enter a string: ");
    getchar();
    fgets(s, 101, stdin);
    s[strcspn(s, "\n")] = '\0';
    
    for (int i = 0; s[i] != '\0'; i++) {
        if (!((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z') || s[i] == ' ')) {
            s[i] = ' ';
        }
    }
    
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == ' ') {
            while (s[i + 1] == ' ') {
                for (int j = i + 1; s[j] != '\0'; j++) {
                    s[j] = s[j + 1];
                }
            }
        }
    } 
    printf("Standardized string: %s\n", s);
}
void countwords_startingwithA() {
    char s[101];
    printf("Enter a string: ");
    getchar();
    fgets(s, 101, stdin);
    s[strcspn(s, "\n")] = '\0';
    
    int count = 0;
    int inWord = 0;
    for (int i = 0; s[i] != '\0'; i++) {
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
}

int main() {
    int choice;
    while (1) {
        printf("Text Menu:\n");
        printf("1. Find smallest of three integers\n");
        printf("2. Print pattern with numbers\n");
        printf("3. Count non-vowel characters in a string\n");
        printf("4. Standardize a string\n");
        printf("5. Count words starting with 'a' or 'A'\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                findsmallest();
                break;
            case 2:
                printpattern();
                break;
            case 3:
                countnonvowels();
                break;
            case 4:
                standardizestring();
                break;
            case 5:
                countwords_startingwithA();
                break;
            case 6:
                return 0;
            default:
                printf("Invalid choice. Try again!\n");
        }
    }
    return 1;
}