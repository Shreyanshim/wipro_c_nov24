#include <stdio.h>
#include <string.h> 

int main() {
    char str1[100]; 
    char str2[50];  

    puts("Enter string str1= ");
    gets(str1);
    
    puts("\n Enter string str2= ");
    gets(str2);
    
    printf("\n Concatenated string is=%s",strcat(str1,str2));

    return 0;
}