#include<stdio.h>
main()
{
	int a[2][3],b[2][3],c[2][3],d[2][3],i,j;
	printf("Enter Matrix A \n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter A[%][%d] = ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("\nEnter Matrix B \n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter B[%][%d] = ",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	printf("\nEnter Matrix C \n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter C[%][%d] = ",i,j);
			scanf("%d",&c[i][j]);
		}
	}
				
																				//Addition//
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			d[i][j] = a[i][j] + b[i][j] + c[i][j];
		}
	}
	printf("\nAddition Matrix : \n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf(" %d ",d[i][j]);
		}
		printf("\n");
	}
	
																				//Subtracation//
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			d[i][j] = a[i][j] - b[i][j] - c[i][j];
		}
	}
	printf("\nSubtracation Matrix : \n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf(" %d ",d[i][j]);
		}
		printf("\n");
	}
		
																				//Multiplication//
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			d[i][j] = a[i][j] * b[i][j] * c[i][j];
		}
	}
	printf("\nMultiplication Matrix : \n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf(" %d ",d[i][j]);
		}
		printf("\n");
	}
	
																					//Division//
													
	for(i=0;i<2;i++)													
	{
		for(j=0;j<3;j++)
		{
			d[i][j] = a[i][j] / b[i][j] / c[i][j];
		}
	}
	printf("\nDivision Matrix : \n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf(" %d ",d[i][j]);
		}
		printf("\n");
	}
}