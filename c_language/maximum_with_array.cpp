#include<stdio.h>
main()
{
	
	int a[5],i,max;						//Array Maximum//
	for(i=0;i<=4;i++)
	{
		printf("Enter a Number %d : ",i+1);
		scanf("%d",&a[i]);
	}

	max = a[0];
	for(i=1;i<=4;i++)
	{
		if(max < a[i])
		{
			max = a[i];
		}
	}
	printf("\nMaximum Number = %d",max);
}