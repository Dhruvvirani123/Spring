#include<stdio.h>
main()
{
	int i,n;
	i = 0;
	
	while(i<5)								//Many Word to print//
	{
		printf("\nDhruv Patel");
		printf(" : %d",i);
		i++;
	}
	printf("\n");

	printf("\nEnter a Number : ");        //Ente a 0 and loop is Finish (while loop)//
	scanf("%d",&i);
	while(i !=0)
	{
		printf("\ni=%d",i);
		printf("\nEnter a Number : ");
		scanf("%d",&i);
	}

	do									//Do While loop//
	{
		printf("\nEnter a Number : ");
		scanf("%d",&i);
		printf("\ni=%d",i);
	}
	
	while(i!=0);						//1 To 10 (For loop)//
	
	for(i=1;i<=10;i++)						
	{
		printf("\n%d",i);
	}
	printf("\n");
	for(i=10;i>=1;i--)						//10 To 1 (For loop)//
	{
		printf("\n%d",i);
	}

	printf("\nEnter a Number for Table : ");			//Table//
	scanf("%d",&n);
	
	for(i=1 ; i<=10 ; i++)
	{
		printf("\n %d * %d = %d",n,i,n*i);
	}

	

	
}