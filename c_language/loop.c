#include<stdio.h>
int main()
{
	int n;
	
	do 											//Multiple of 7//
	{
		printf("\nEnter Number : ");
		scanf("%d",&n); 
		printf("%\n",n);
		
		if(n % 7 == 0)
		break;
	}
	while(1);
	printf("\nThank you.!.!.!.!.\n\n\n");


	
	for(int i=1; i<=20; i++)					//Skip The Numbe//
	{
	if(i == 17) 
	{
		continue;
	}
	printf("\n%d", i);
	}
}