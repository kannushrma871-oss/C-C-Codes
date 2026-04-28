#include<stdio.h>
int main()
{
	int i,j,a[2][2] = {1,2,3,4}, b[2][2] = {5,6,7,8};
	for(i=0;i<=1;i++)
	{
		for(j=0;j<=1;j++)
		{
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
		for(i=0;i<=1;i++)
	{
		for(j=0;j<=1;j++)
		{
			printf("\n");
			printf("%d",b[i][j]);
		}
		printf("\n");
	}
}
