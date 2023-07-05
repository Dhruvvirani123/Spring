#include<stdio.h>						//Array//
int main()
{
	int a[5],i;
	for(i=0;i<=4;i++)
	{
		printf("Enter A[%d] = ",i+1);
		scanf("%d",&a[i]);
	}
	for(i=0;i<=5;i++)
	{
		printf("\nA[%d] = %d", i+1,a[i]);
	}
	
	printf("\n\n");

	float marks[5], total = 0, per;
	
	for(i=0;i<=4;i++)
	{
		printf("Enter marks %d : ",i+1);
		scanf("%f",&marks[i]);
	}
	
	for(i=0;i<=4;i++)
	{
		total = total+marks[i];
	}
	printf("\nTotal marks = %f",total);
	per = total/5;
	printf("\nPercentage = %f",per);
	
	
//	if(per>70)
//	{
//		printf("\nCongratulation!! You Got Distincaton");
//	}
//	else if(per>60)
//	{
//		printf("\nYou have a First Class");
//	}
//	else if(per>50)
//	{
//		printf("\nYou have a Secound Class");
//	}
//	else if(per>33)
//	{
//		printf("\nPass Class");
//	}
//	else
//	{
//		printf("\nFail");
//	}


//	int a[5],total=0,i,max,min;						//Array Maximum,Minimum//
//	for(i=0;i<=4;i++)
//	{
//		printf("Enter a Number %d : ",i+1);
//		scanf("%d",&a[i]);
//	}
//	for(i=0;i<=4;i++)
//	{
//		total = total+a[i];
//	}
//	printf("\nTotal sum is = %d",total);
//	max = a[0];
//	for(i=1;i<=4;i++)
//	{
//		if(max < a[i])
//		{
//			max = a[i];
//		}
//	}
//	printf("\nMaximum Number = %d",max);
//	
//	min = a[0];
//	for(i=4;i>=0;i--)
//	{
//		if(max > a[i])
//		{
//			max = a[i];
//		}
//	}
//	printf("\nMinimum Number = %d",min);


//	int a[2],b[2],c[2],i;
//	printf("Enter Array A : \n");
//	for(i=0;i<=1;i++)
//	{
//		printf("A[%d] = ",i+1);
//		scanf("%d",&a[i]);
//	}
//	printf("Enter Array B : \n");
//	for(i=0;i<=1;i++)
//	{
//		printf("B[%d] = ",i+1);
//		scanf("%d",&b[i]);
//	}
//		
//		for(i=0;i<=1;i++)
//		{
//			c[i] = a[i] + b[i];
//		}
//		printf("Addition for Array (A + B = C) : ");
//		for(i=0;i<=1;i++)
//		{
//			printf("\nC[%d] = %d",i+1,c[i]);
//		}
}