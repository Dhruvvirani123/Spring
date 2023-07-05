#include<stdio.h>
int main()
{
 


	char ch;										//Upper Case and Lower Case A to Z//
	printf("\nEnter Character : ");
	scanf("\n%c",&ch);
	
	if(ch >= 'A' && ch <= 'Z')
	{
		printf("Upper case\n");
	}
	else if(ch >= 'a' && ch <= 'z')
	{
		printf("Lower Case\n");
	}
	else
	{
		printf("Not English Letter!!\n");
	}
}