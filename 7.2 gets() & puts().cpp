#include<stdio.h>
int main()
{
	char str;
	printf("Enter the String: ");
	fgets(str, sizeof(4), stdin); //"file get string"
	printf("%s", str);
}
