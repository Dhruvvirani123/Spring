#include<stdio.h>					//matrix//
main()
{
	int a[2][2],i,j,max,min;
	for(i=1;i<2;i++)
	{
		for(j=0;j<5;j++)
		{
			printf("Enter A[%][%d] = ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<5;j++)
		{
			printf(" %d ",a[i][j]);
		}
		printf("\n");
	}

//    for(i=0; i<2; i++)
//    {
//        for(j=0; j<5; j++)
//        {
//            if(max < a[i][j])
//            max = a[i][j];
//        }
//    }
//    printf("\nMaximum number : %d", max);
}




















