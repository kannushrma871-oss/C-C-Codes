//subtraction of two matrix
#include<stdio.h>
int main()
{
	int i, j, a[2][2] = {4,5,6,7}, b[2][2] = {9,8,7,6}, c[2][2];
	for(i=0;i<=1;i++)
	{
		for(j=0;j<=1;j++)
		{
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	
	for(i=0;i<=1;i++)
	{
		for(j=0;j<=1;j++)
		{
			printf("%d",b[i][j]);
		}
		printf("\n");
	}
	
	for(i=0;i<=1;i++)
	{
		for(j=0;j<=1;j++)
		{
			c[i][j] = a[i][j] - b[j][j];
		}
		printf("\n");
	}
	
	for(i=0;i<=1;i++)
	{
		for(j=0;j<=1;j++)
		{
			printf("%d",c[i][j]);
		}
		printf("\n");
	}
}
