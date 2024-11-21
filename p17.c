#include <stdio.h>

int main() {
    char chr=0;

    printf("Enter a character: ");
    scanf("%c", &chr);

     if (chr >= '0' && chr <= '9') {
        printf("'%c' is a digit.\n", chr);
    } else {
        printf("'%c' is not a digit.\n", chr);
    }

    return 0;
}
