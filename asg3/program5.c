#include <stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChkVowel(char c) {
    if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' ||
        c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
        return TRUE;
    } else {
        return FALSE;
    }
}

int main() {
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter character\n");
    scanf("%c", &cValue);

    bRet = ChkVowel(cValue);

    if (bRet == TRUE) {
        printf("It is Vowel\n");
    } else {
        printf("It is not Vowel\n");
    }

    return 0;
}