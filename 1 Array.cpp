#include<stdio.h>
int main()
{
	int i,j,arr[2][2] = {1,2,3,4};
	for(i=0;i<=1;i++)
	{
		for(j=0;j<=1;j++)
		{
			printf("%d",arr[i][j]);
		}
		printf("\n");
	}
}
