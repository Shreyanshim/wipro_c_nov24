#include <stdio.h>

int main() {
    char ch;
 
    printf("Enter an alphabet: ");
    scanf(" %c", &ch); 

    if (ch >= 'a' && ch <= 'z') {
        printf("%c is a lowercase letter.\n", ch);
    } else {
        printf("%c is not a lowercase letter.\n", ch);
    }

    return 0;
}