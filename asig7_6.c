#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello, World!";
    char *ptr = strrchr(str, 'o');

    if (ptr != NULL) {
        printf("Last occurrence of 'o' at position: %ld\n", ptr - str);
    } else {
        printf("Character 'o' not found.\n");
    }

    return 0;
}