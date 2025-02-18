#include <stdio.h>

int main() {
    char ch;
    scanf("%c", &ch);

    // Check if the character is a digit
    if (ch >= '0' && ch <= '9') {
        printf("Digit\n");
    }
    // Check if the character is an uppercase or lowercase vowel
    else if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || 
             ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        printf("Vowel\n");
    }
    // Check if the character is an uppercase or lowercase letter (consonant)
    else if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
        printf("Consonant\n");
    }
    // If none of the above, it's a special character
    else {
        printf("Special Character\n");
    }

    return 0;
}
