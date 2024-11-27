#include<stdio.h>
int main()
{
	int a[2][2],b[2][2],c[2][2],i,j;
	
	printf("Enter array elements of a= ");
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
		scanf("%d",&a[i][j]);
	    }
	}
	
	printf("\n Enter array elements of b= ");
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
		scanf("%d",&b[i][j]);
	    }
	}
	
	printf("\n 2d array matrix of a= \n");

	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
		printf("%d\t",a[i][j]);
	    }
	    printf("\n");
	}
	
	printf("\n 2d array matrix of b= \n");

	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
		printf("%d\t",b[i][j]);
	    }
	    printf("\n");
	}
	
	printf("\n 2d array product is= \n");

	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			c[i][j] = a[i][j] * b[i][j];
		printf("%d\t",c[i][j]);
	    }
	    printf("\n");
	}
	return 0;
}