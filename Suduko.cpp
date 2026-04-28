#include<stdio.h>
int main()
{
	int i;
	int j;
	int arr[2][2];
	int row1;
	int row2;
	int row3;
	int col1;
	int col2;
	int col3;
	
	int dig1;
	int dig2;
	
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			printf("Enter %d number:", i+1);
			scanf("%d",& arr[i][j]);
		}
	}
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			printf("%d",arr[i][j]);
		}
		printf("\n");
	}
	
	row1 = arr[0][0]+arr[0][1]+arr[0][2];
	row2 = arr[1][0]+arr[1][1]+arr[1][2];
	row3 = arr[2][0]+arr[2][1]+arr[2][2];
	
	col1 = arr[0][0]+arr[0][1]+arr[0][2];
	col2 = arr[1][0]+arr[1][1]+arr[1][2];
	col3 = arr[2][0]+arr[2][1]+arr[2][2];
	
	dig1 = arr[0][0]+arr[1][1]+arr[2][2];
	dig2 = arr[2][0]+arr[1][1]+arr[0][2];
	
	if(row1 && row2 && row2 && col1 && col2 && col3 && dig1 && dig2 == 18)
	{
		printf("You Win");
	}
	else
	{
		printf("You Lose");
	}

}
