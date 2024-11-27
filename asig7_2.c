#include <stdio.h>
#include <string.h> 

int main() {
    char str1[100]; 
    char str2[50];  

    puts("Enter string str1= ");
    gets(str1);
    
    strcpy(str2,str1);
    
    printf("\n Copied string is=%s",str2);

    return 0;
}