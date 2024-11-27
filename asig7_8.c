#include<stdio.h>
#include<string.h>

int main()
{
	char str1[12],str2[14];
	
	printf("Enter string str1= ");
	scanf("%s",&str1);
	
	printf("Enter string str2= ");
	scanf("%s",&str2);
	
	if(stricmp(str1,str2)==0){
		printf("\n Both strings are equal.");
	}
	else
	{
		printf("\n Both strings are not equal.");
	}
	return 0;
}