#include <stdio.h>
#include <string.h> 

int main() {
    char str[100]; 

    puts("Enter string= ");
    gets(str);
    printf("String length is=%d",strlen(str));
    return 0;
}