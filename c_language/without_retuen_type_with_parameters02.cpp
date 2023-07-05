//(02)without retuen type with parameters (1)Addition//
//#include<stdio.h>
//void Add(int a, int b);		
//main()
//{
//	int a,b,ans;
//	
//	printf(" Enter A : ");
//	scanf("%d",&a);
//	printf(" Enter B : ");
//	scanf("%d",&b);
//	
//	Add(a,b);		//call by referance
////	Add(8,1);		//call by value
//
//}
//void Add(int a, int b)	
//{
//	int ans;
//	ans = a+b;
//	printf("\n Addition = %d",ans);
//}






//(02)without retuen type with parameters (2)Subtracation//
//#include<stdio.h>
//void Sub(int v, int u);
//main()
//{
//	int w,f,ans;
//	printf("Enter W : ");
//	scanf("%d",&w);
//	printf("Enter F : ");
//	scanf("%d",&f);
//	
//	Sub(w,f);
//}
//void Sub(int w, int f)
//{
//	int ans;
//	ans = w-f;
//	printf("\nSubtracation = %d",ans);
//}






//(02)without retuen type with parameters (3)Multiplication//
//#include<stdio.h>
//void Mul(int v, int u);
//main()
//{
//	int w,f,ans;
//	printf("Enter W : ");
//	scanf("%d",&w);
//	printf("Enter F : ");
//	scanf("%d",&f);
//	
//	Mul(w,f);
//}
//void Mul(int w, int f)
//{
//	int ans;
//	ans = w*f;
//	printf("\nMultiplication = %d",ans);
//}






//(02)without retuen type with parameters (4)Division//
#include<stdio.h>
void Div(int v, int u);
main()
{
	int w,f,ans;
	printf("Enter W : ");
	scanf("%d",&w);
	printf("Enter F : ");
	scanf("%d",&f);
	
	Div(w,f);
}
void Div(int w, int f)
{
	int ans;
	ans = w/f;
	printf("\nDivision = %d",ans);
}