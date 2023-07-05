//(04)with return type with parameters (1)Addition//
//#include<stdio.h>
//int Add(int, int);
//main()
//{
//	int c,k;
//	printf("Enter C : ");
//	scanf("%d",&c);
//	printf("Enter D : ");
//	scanf("%d",&k);
//	
//	printf("\nAddition = %d",Add(c,k));
//}
//int Add(int c,int k)
//{
//	int ans;
//	
//	ans = c+k;
//	return ans;
//}


//(04)with return type with parameters (2)Subtracation//
//#include<stdio.h>
//int Sub(int, int);
//main()
//{
//	int d,k;
//	printf("Enter D : ");
//	scanf("%d",&d);
//	printf("Enter K : ");
//	scanf("%d",&k);
//	
//	printf("\nSubtracation = %d",Sub(d,k));
//}
//int Sub(int d,int k)
//{
//	int ans;
//	
//	ans = d-k;
//	return ans;
//}


//(04)with return type with parameters (3)Multiplication//
//#include<stdio.h>
//int Mult(int, int);
//main()
//{
//	int d,j,k;
//	printf("Enter D : ");
//	scanf("%d",&d);
//	printf("Enter J : ");
//	scanf("%d",&j);
//	printf("Enter K : ");
//	scanf("%d",&k);
//	
//	printf("\nSubtracation = %d",Mult(d,j,k));
//}
//int Mult(int d,int j,int k)
//{
//	int ans;
//	
//	ans = d*j*k;
//	return ans;
//}



//(04)with return type with parameters (4)Division//
#include<stdio.h>
int Div(int, int);
main()
{
	int d,j,k;
	printf("Enter D : ");
	scanf("%d",&d);
	printf("Enter J : ");
	scanf("%d",&j);
	
	
	printf("\nSubtracation = %d",Div(d,j));
}
int Div(int d,int j)
{
	int ans;
	
	ans = d/j;
	return ans;
}