#include <stdio.h>

int main() {
    char chr=0;

   
    printf("Enter a character: ");
    scanf("%c", &chr);

      if ((chr >= 'A' && chr <= 'Z') || (chr >= 'a' && chr <= 'z') || (chr >= '0' && chr <= '9'))
	   {
        printf("'%c' is an alphanumeric character.\n", chr);
    } else {
        printf("'%c' is not an alphanumeric character.\n", chr);
    }

    return 0;
}
