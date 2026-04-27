#include<stdio.h>
int main()
{
	int i,j;
	int k = 1;
	for(i=1;i<=5;i++)
	{
		if(i == 5) continue; //skip 5th iteration 
		
		for(j=1;j<=i;j++/k++)
		{
			printf("%d",k);
		}
		printf("\n");
	}
}
