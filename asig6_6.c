// Transpose of a matrix example

#include<stdio.h>
int main()
{
	int a[2][2],i,j;
	printf("Enter array elements of a= ");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("\n 2d array matrix of a is= \n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	
	printf("\n 2d array transpose matrix of a is= \n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d\t",a[j][i]);
		}
		printf("\n");
	}
	
	return 0;
}