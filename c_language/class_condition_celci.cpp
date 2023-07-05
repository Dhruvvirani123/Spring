#include<stdio.h>
int main()
{
	int a,b,c,d,ans;
	
	printf("Enter a Number To find a Maximum.\n");
	
	printf("\nEnter a Value A : ");
	scanf("%d",&a);
	printf("\nEnter a Value B : ");
	scanf("%d",&b);	
	printf("\nEnter a Value C : ");
	scanf("%d",&c);
	printf("\nEnter a Value D : ");
	scanf("%d",&d);
	
	
	if(a>b)													//Largest//
	{
		if(a>c)
		{
			if(a>d)
			{
			    printf("\nA is Largest");	
			}
			else
			{
				printf("\nD is Largest");
			}
		}
		else
		{
			if(c>d)
			{
				printf("\nC is Largest");
			}
			else
			{
				printf("\nD is Largest");
			}
		}
	}
	else
	{
		if(b>c)
		{
			if(b>d)
			{
				printf("\nB is Largest");
			}
			else
			{
				printf("\nD is Largest");
			}
		}
		else
		{
			if(c>d)
			{
				printf("\nC is Largest");	
			}
			else
			{
				printf("\nD is Largest");
			}
		}
	}
		
	if(a<b)															//Smallest//
	{
		if(a<c)
		{
			if(a<d)
			{
			    printf("\nA is Smallest");	
			}
			else
			{
				printf("\nD is Smallest");
			}
		}
		else
		{
			if(c<d)
			{
				printf("\nC is Smallest");
			}
			else
			{
				printf("\nD is Smallest");
			}
		}
	}
	else
	{
		if(b<c)
		{
			if(b<d)
			{
				printf("\nB is Smallest");
			}
			else
			{
				printf("\nD is Smallest");
			}
		}
		else
		{
			if(c<d)
			{
				printf("\nC is Smallest");	
			}
			else
			{
				printf("\nD is Smallest\n\n");
			}
		}
	}

}



