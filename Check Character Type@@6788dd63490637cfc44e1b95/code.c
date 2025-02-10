#include <stdio.h>
#include <ctype.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char ch;
    scanf("%c",&ch);

    if (isalpha(tolower(ch))){
         if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'|| ch == 'O') {
            printf("Vowel");
            }
            else{
                printf("Consonant");
                }
    }
    else if (isdigit(ch)){
        printf("Digit");
        }
    else{
        printf("Special Character");
        }
    return 0;
}