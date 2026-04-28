#include<stdio.h>
#include<string.h>
int main()
{
	char name[222];
	printf("Enter your full name: ");
	gets(name);
	printf("Your name is: ");
	puts(name);
}
