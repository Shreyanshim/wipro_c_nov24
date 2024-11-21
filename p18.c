#include <stdio.h>
#include <ctype.h>  

int main() {
    char chr=0;

    
    printf("Enter a character: ");
    scanf("%c", &chr);

    if (islower(chr)) {
        printf("'%c' is a lowercase letter.\n", chr);
    } else {
        printf("'%c' is not a lowercase letter.\n", chr);
    }

    return 0;
}
