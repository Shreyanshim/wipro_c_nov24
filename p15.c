#include <stdio.h>

int main() {
    char chr=0;

    
    printf("Enter a character: ");
    scanf("%c", &chr);

     if ((chr >= 'A' && chr <= 'Z') || (chr >= 'a' && chr <= 'z')) {
        printf("'%c' is an alphabet.\n", chr);
    } else {
        printf("'%c' is not an alphabet.\n", chr);
    }

    return 0;
}
