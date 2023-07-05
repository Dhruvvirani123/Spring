#include<stdio.h>
int main()
{
	int j,k,i,n;									//Patterns//
	
	for(i=1; i<=5; i++)							//(1)*//
	{											//**//
		for(j=1; j<=i; j++)						//***//
		{										//****//
			printf("* ");
		}
		printf("\n");
	}
		printf("\n");
		
	{
		for(k=5; k>=i; k--)
		{
			printf("    ");
		}
		for(j=1; j<=i; j++)
		{
			printf(" *");
		}
		printf("\n");
	}
		printf("\n");
		
		
		
	for(i=1; i<=5;i++)										//4//
	{
		for(k=5; k>=i; k--)
		{
			printf(" ");
		}
		for(j=1; j<=i; j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	
	for(i=4; i>=1;i--)
	{
		for(k=5; k>=i; k--)
		{
			printf(" ");
		}
		for(j=1; j<=i; j++)
		{
			printf("* ");
		}
		printf("\n");
	}
		printf("\n");



	for(i=1; i<=5; i++)										//5//
	{
		for(j=1; j<=i; j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	
	for(i=4; i>=1; i--)
	{
		for(j=1; j<=i; j++)
		{
			printf("* ");
		}
		printf("\n");
	}
		printf("\n");
	
	
	
	for(i=1; i<=5; i++)											//6//
	{
		for(j=1; j<=i; j++)
		{
			printf("%d",i);
		}
		printf("\n");
	}
		printf("\n");
	
	
	for(i=1; i<=5; i++)						//(7)12345//
	{										//12345//
		for(j=1; j<=5; j++)					//12345//
		{
			printf("%d",j);
		}
		printf("\n");
	}
		printf("\n");
	
	for(i=1; i<=5; i++)						//(8)11111//
	{										//22222//
		for(j=1; j<=5; j++)					//33333//
		{
			printf("%d ",i);
		}
		printf("\n");
	}
		printf("\n");
		
	
	for(i=1; i<=5; i++)					//(9)*****//
	{									//*****//
		for(j=1; j<=5; j++)				//*****//
		{
			printf("*");
		}
		printf("\n");
	}
		printf("\n");
		
	
	for(i=1; i<=5; i++)					//(10)1//
	{									//12//
		for(j=1; j<=i; j++)				//123//
		{								//1234//
			printf("%d ",j);
		}
		printf("\n");
	}
		printf("\n");
		
	
	for(i=1; i<=5; i++)					//(11)1//
	{									//22//
		for(j=1; j<=i; j++)			    //333//
		{								//4444//
			printf("%d ",i);
		}
		printf("\n");
	}
		printf("\n");
		
	
	for(i=1; i<=5; i++)					    	//(12)A//
	{											//AB//
		for(j=1; j<=i; j++)						//ABC//
		{										//ABCD//
			printf("%c",j+64);
		}
		printf("\n");
	}
		printf("\n");
		
	
	for(i=5; i>=1; i--)						//(13)5//
	{										//54//	
		for(j=5; j>=i; j--)					//543//
		{									//5432//
			printf("%d",j);
		}
		printf("\n");
	}
		printf("\n");
		
	
	for(i=1; i<=5; i++)						//(14)54321//
	{										//5432//
		for(j=5; j>=i; j--)					//543//
		{									//54//
			printf("%d ",j);
		}
		printf("\n");
	}
		printf("\n");
	
			
	for(i=5; i>=1; i--)							//(15)*****//
	{											//****//
		for(j=1; j<=i; j++)						//***//
		{										//**//
			printf("*");
		}
		printf("\n");
	}
	printf("\n");
	
		
	for(i=5; i>=1;i--)		          				//(16)	    		
	{											
		for(k=5; k>=i; k--)						
		{										
			printf("    ");						
		}
		for(j=1; j<=i; j++)
		{
			printf("* ");
		}
		printf("\n");
	}
		
	for(i=2; i<=5;i++)
	{
		for(k=5; k>=i; k--)
		{
			printf("    ");
		}
		for(j=1; j<=i; j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	printf("\n\n");
}