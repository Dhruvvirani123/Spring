#include<stdio.h>
main()
{
	int n,b,total[5]={0,0,0,0,0},j,amount=0;
	char i;
	Dhruv:
	printf("\n----------Menu-----------------\n");
	printf("\n1.Pizza       Price : 180rs/pcs \n2.Burger      Price : 100rs/pcs \n3.Dosa        Price : 120rs/pcs \n4.Idli        Price = 50rs/pcs\n");
	fflush(stdin);
	printf("\nPlease Enter Your Choose ... : ");
	scanf("%d",&n);
	
	switch(n)
	{
		case 1:
			printf("\n\nYou have selected Pizza.");
			printf("\nEnter the quantity : ");
			scanf("%d",&b);
			
			total[j] = 180*b;
			printf("\nAmmount : %d",total[j]);			
			break;
		
		case 2:
			printf("\n\nYou have selected Burger.");
			printf("\nEnter the quantity : ");
			scanf("%d",&b);
			
			total[j] = 100*b;
			printf("\nAmmount : %d",total[j]);
			break;
			
			
		case 3:
			printf("\n\nYou have selected Dosa.");
			printf("\nEnter the quantity : ");
			scanf("%d",&b);
			
			total[j] = 120*b;
			printf("\nAmmount : %d",total[j]);
			break;
			
		case 4:
			printf("\n\nYou have selected Idli.");
			printf("\nEnter the quantity : ");
			scanf("%d",&b);
			
			total[j] = 50*b;
			printf("\nAmmount : %d",total[j]);
			break;
			
		default:
			printf("Invalid Input!!!");
			break;
	}
	printf("\n\nDo You Want to perform another operation ? (yes/no) : ");
	fflush(stdin);
	scanf("%c",&i);
	if(i == 'y')
	{
		j++;
		goto Dhruv;
	}
	for(j=0;j<=5;j++)
	{
		amount = amount + total[j];
	}
	printf("\nTotal Amount : %d",amount);
}