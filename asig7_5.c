#include <stdio.h>  
#include <string.h>  
int main ()  
{  
    const char str[] = "Use strchr() function in C.";  
    const char ch = 's';  
    char *ptr;   
      
    printf (" Original string is: %s \n", str);  
    
    ptr = strchr( str, ch);  
    
	printf (" The first occurrence of the '%c' in '%s' string  is: '%s' ", ch, str, ptr);  
    
	return 0;  
}  