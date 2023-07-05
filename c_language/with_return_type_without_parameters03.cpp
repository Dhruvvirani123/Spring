//(03)with return type without parameters (1)Addition//
//#include<stdio.h>
//int Add();
//main()
//{
//	int output;
//	output = Add();
//	printf("\nAddition = %d",output);
//}
//
//int Add()
//{
//	int w,e,f,ans;
//	printf("Enter W : ");
//	scanf("%d",&w);
//	printf("Enter E : ");
//	scanf("%d",&e);
//	printf("Enter F : ");
//	scanf("%d",&f);
//	
//	ans = w+e+f;
//	return ans;
//}


//(03)with return type without parameters (2)Subtracation//
//#include<stdio.h>
//int Sub();
//main()
//{
//	int output;
//	output = Sub();
//	printf("\nSubtracation = %d",output);
//}
//
//int Sub()
//{
//	int a,c,e,ans;
//	printf("Enter A : ");
//	scanf("%d",&a);
//	printf("Enter C : ");
//	scanf("%d",&c);
//	printf("Enter E : ");
//	scanf("%d",&e);
//	
//	ans = a-c-e;
//	return ans;
//}


//(03)with return type without parameters (3)Multiplication//
//#include<stdio.h>
//int Mult();
//main()
//{
//	int output;
//	output = Mult();
//	printf("\nMultiplication = %d",output);
//}
//
//int Mult()
//{
//	int e,r,t,ans;
//	printf("Enter E : ");
//	scanf("%d",&e);
//	printf("Enter R : ");
//	scanf("%d",&r);
//	printf("Enter T : ");
//	scanf("%d",&t);
//	
//	ans = e*r*t;
//	return ans;
//}


//(03)with return type without parameters (4)Division//
#include<stdio.h>
float Div();
main()
{
	float output;
	output = Div();
	printf("\nDivision = %f",output);
}

float Div()
{
	float d,f,g,ans;
	printf("Enter D : ");
	scanf("%f",&d);
	printf("Enter F : ");
	scanf("%f",&f);
	printf("Enter G : ");
	scanf("%f",&g);
	
	ans = d/f/g;
	return ans;
}