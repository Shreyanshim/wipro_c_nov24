#include <stdio.h>
#include <string.h> 

int main() {
    char str1[100];   

    puts("Enter string str1= ");
    gets(str1);
    
    printf("\n String in reverse order is=%s",strrev(str1));

    return 0;
}